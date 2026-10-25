// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e5e400 FUN_141e5e400 body=42 status=ok
// SIG undefined FUN_141e5e400(void)

void FUN_141e5e400(longlong param_1,longlong param_2)

{
  FUN_141e5feb0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),param_1 + 0x18,
                param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 141e5e480 FUN_141e5e480 body=53 status=ok
// SIG undefined FUN_141e5e480(void)

void FUN_141e5e480(longlong param_1)

{
  FUN_141e5d0f0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 141e5e4c0 ExecuteAndDestruct body=59 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommandListImmediate::TRHILambdaCommand<<lambda_0be8b5c8cc89b2e626383392792e3a78>_>::
     ExecuteAndDestruct(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(*(longlong *)(param_1 + 0x10) + 0x38),*(void **)(param_1 + 0x28),
               (longlong)*(int *)(param_1 + 0x30));
  }
  FVulkanUniformBuffer::UpdateResourceTable
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 141e5e500 FUN_141e5e500 body=61 status=ok
// SIG undefined FUN_141e5e500(void)

void FUN_141e5e500(longlong param_1,longlong param_2)

{
  FUN_141e5a370(param_1 + 0x10,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x30));
  FVulkanUniformBuffer::UpdateResourceTable
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141e5e570 ExecuteAndDestruct body=67 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommandListImmediate::TRHILambdaCommand<<lambda_557732c02690771dfeb7a90180c32d2b>_>::
     ExecuteAndDestruct(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40) = *(undefined8 *)(param_1 + 0x18);
  FUN_141e66e60(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x248,uVar1);
  FVulkanUniformBuffer::UpdateResourceTable
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 141e5e5e0 FUN_141e5e5e0 body=267 status=ok
// SIG undefined FUN_141e5e5e0(void)

void FUN_141e5e5e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  DWORD *pDVar6;
  longlong *lpTlsValue;
  longlong *plVar7;
  longlong *plVar8;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar5 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar5 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar5 + 0xd8) = uVar4;
  *(undefined1 *)(lVar5 + 0xe0) = uVar3;
  FUN_141e66800(lVar5,0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144eb2b80;
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
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar6);
  plVar8 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar8;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      lpTlsValue = plVar7;
    }
    TlsSetValue(*pDVar6,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar8 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar6 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141e5e6f0 FUN_141e5e6f0 body=270 status=ok
// SIG undefined FUN_141e5e6f0(void)

void FUN_141e5e6f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *lpTlsValue;
  longlong *plVar8;
  longlong *plVar9;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar6 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 4);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(lVar6 + 0xd8) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar6 + 0xdc) = uVar5;
  *(undefined1 *)(lVar6 + 0xe0) = uVar3;
  FUN_141e66800(lVar6,uVar4);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144eb2b70;
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
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar7);
  plVar9 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      lpTlsValue = plVar8;
    }
    TlsSetValue(*pDVar7,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar9 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar7 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar9;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141e5e800 ExecuteTask body=238 status=ok
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
  FUN_141e5a290(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144eb2b90;
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



// FUNCTION 141e5e8f0 FUN_141e5e8f0 body=241 status=ok
// SIG undefined FUN_141e5e8f0(void)

void FUN_141e5e8f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141e66800(param_1[2],*(undefined4 *)(param_1[2] + 0xe4));
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144eb2b60;
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



// FUNCTION 141e5e9f0 FindId body=324 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar7 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar6 = -(uVar7 + iVar4) ^ uVar7 >> 0xd;
    uVar5 = (iVar4 - uVar7) - uVar6 ^ uVar6 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 0x10;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar6 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)
                     (int)(((int)param_3[1] << 8 ^ *(uint *)((longlong)param_3 + 0xc)) << 8 ^
                           uVar7 >> 0xf ^ (uVar6 - uVar7) - uVar5) & (longlong)(int)param_1[9] - 1U)
                    * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar3 = (longlong)iVar4 * 0x20;
        if (((*(ulonglong *)(lVar3 + lVar1) == *param_3) &&
            (*(int *)(lVar3 + 8 + lVar1) == (int)param_3[1])) &&
           (*(uint *)(lVar3 + 0xc + lVar1) == *(uint *)((longlong)param_3 + 0xc))) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar3 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e5eb40 FUN_141e5eb40 body=1052 status=ok
// SIG undefined FUN_141e5eb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5eb40(undefined8 *param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5,
                  uint param_6,byte param_7,uint param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_1a8 [32];
  uint local_188;
  uint local_180;
  undefined4 local_178;
  uint local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  undefined1 local_11c [4];
  int *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_124 = param_9;
  local_128 = param_10;
  uVar1 = param_6;
  if (param_6 <= param_5) {
    uVar1 = param_5;
  }
  if (uVar1 <= param_4) {
    uVar1 = param_4;
  }
  iVar10 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  iVar15 = 0;
  if (uVar1 != 0) {
    iVar15 = iVar10;
  }
  if (iVar15 + 1U <= param_8) {
    param_8 = iVar15 + 1U;
  }
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_118 = param_2;
  local_108 = param_1;
  if ((*piVar11 < DAT_146ab0430) && (_Init_thread_header(&DAT_146ab0430), DAT_146ab0430 == -1)) {
    atexit(FUN_143e9e230);
    _Init_thread_footer(&DAT_146ab0430);
  }
  if ((*piVar11 < DAT_146ab0460) && (_Init_thread_header(&DAT_146ab0460), DAT_146ab0460 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab0438,4000);
    atexit((_func_5014 *)&LAB_143e9e260);
    _Init_thread_footer(&DAT_146ab0460);
  }
  local_d0 = local_124;
  local_e0 = param_5;
  local_dc = param_6;
  local_cc = local_128;
  local_e8 = param_3;
  local_e4 = param_4;
  local_d8 = (uint)param_7;
  local_d4 = param_8;
  local_120 = FCrc::MemCrc32(&local_e8,0x20);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
  }
  if (DAT_1464c9778 != DAT_1464c97a4) {
    puVar3 = DAT_1464c97b0;
    if (DAT_1464c97b0 == (undefined *)0x0) {
      puVar3 = &DAT_1464c97a8;
    }
    iVar10 = *(int *)(puVar3 + ((longlong)DAT_1464c97b8 - 1U & (longlong)local_120) * 4);
    while (iVar10 != -1) {
      lVar5 = (longlong)iVar10 * 0x28;
      if (*(int *)(lVar5 + DAT_1464c9770) == local_120) {
        puVar7 = (undefined8 *)(lVar5 + DAT_1464c9770);
        if (iVar10 != -1) goto LAB_141e5ecce;
        break;
      }
      iVar10 = *(int *)(lVar5 + 0x20 + DAT_1464c9770);
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_141e5ecce:
  puVar4 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    local_138 = 0;
    local_148 = local_100;
    local_150 = local_11c;
    local_158 = &local_c8;
    local_160 = local_128;
    local_168 = local_124;
    local_178 = 1;
    local_180 = param_6;
    local_188 = param_5;
    local_170 = param_8;
    local_140 = local_a8;
    lVar5 = FUN_141e5c090(param_2,param_3,(uint)param_7,param_4);
    lVar6 = (longlong)param_2[0x63e];
    if (param_2[0x63e] != 0) {
      uVar9 = 0;
      bVar16 = **(longlong **)(param_2 + 0x63c) != lVar5;
      uVar12 = uVar9;
      uVar14 = uVar9;
      do {
        iVar10 = (int)uVar12;
        uVar9 = uVar9 + 1;
        uVar12 = (ulonglong)(iVar10 + 1);
        if ((longlong)uVar9 < lVar6) {
          plVar8 = (longlong *)(*(longlong *)(param_2 + 0x63c) + uVar9 * 8);
          do {
            if (bVar16 != (*plVar8 != lVar5)) break;
            uVar12 = (ulonglong)((int)uVar12 + 1);
            uVar9 = uVar9 + 1;
            plVar8 = plVar8 + 1;
          } while ((longlong)uVar9 < lVar6);
        }
        iVar15 = (int)uVar12 - iVar10;
        if (bVar16 != false) {
          iVar13 = (int)uVar14;
          if (iVar13 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_2 + 0x63c) + (longlong)iVar13 * 8),
                       (void *)(*(longlong *)(param_2 + 0x63c) + (longlong)iVar10 * 8),
                       (longlong)iVar15 << 3);
            param_2 = local_118;
          }
          uVar14 = (ulonglong)(uint)(iVar13 + iVar15);
        }
        bVar16 = (bool)(bVar16 ^ 1);
      } while ((longlong)uVar9 < lVar6);
      param_2[0x63e] = (int)uVar14;
    }
    (*DAT_146ab0098)(*(undefined8 *)(param_2 + 2),lVar5,0);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    }
    local_118 = &local_120;
    local_110 = &local_c8;
    FUN_141e569e0(&DAT_1464c9770,local_11c,&local_118,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    *local_108 = local_c8;
    local_108[1] = uStack_c0;
    local_108[2] = local_b8;
  }
  else {
    local_f8 = *puVar4;
    uStack_f0 = puVar4[1];
    local_118 = (int *)puVar4[2];
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab0438);
    *local_108 = local_f8;
    local_108[1] = uStack_f0;
    local_108[2] = local_118;
  }
  return;
}



// FUNCTION 141e5ef60 FUN_141e5ef60 body=38 status=ok
// SIG undefined FUN_141e5ef60(void)

void FUN_141e5ef60(void)

{
  if (DAT_146ab0418 != (HMODULE)0x0) {
    FreeLibrary(DAT_146ab0418);
    DAT_146ab0418 = (HMODULE)0x0;
  }
  return;
}



// FUNCTION 141e5ef90 FUN_141e5ef90 body=1028 status=ok
// SIG undefined FUN_141e5ef90(void)

void FUN_141e5ef90(undefined4 *param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined1 local_res20 [8];
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  
  pbVar1 = (byte *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x118);
  uVar13 = 1;
  for (pbVar9 = pbVar1; pbVar9 != pbVar1 + (longlong)iVar6 * 8; pbVar9 = pbVar9 + 8) {
    if ((param_3 >> (pbVar9[3] & 0x1f) & 1) != 0) {
      bVar5 = *pbVar9;
      if (((uint)param_1[0xe] >> (bVar5 & 0x1f) & 1) == 0) {
        param_1[(ulonglong)bVar5 * 3 + 0x38] = (uint)bVar5;
        param_1[(ulonglong)bVar5 * 3 + 0x3a] = (uint)(*(short *)(pbVar9 + 6) != 0);
        param_1[(ulonglong)bVar5 * 3 + 0x39] = (uint)*(ushort *)(pbVar9 + 4);
        param_1[0xe] = param_1[0xe] | 1 << (*pbVar9 & 0x1f);
      }
    }
  }
  puVar2 = param_1 + 0xd;
  *puVar2 = 0;
  local_res18 = param_3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x24);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset(plVar4);
  uVar15 = 0;
  puVar14 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((param_1[0xe] & uVar13) != 0) {
      local_60 = local_res8;
      local_res8[0] = uVar15;
      local_68 = puVar2;
      FUN_141e56730(param_1 + 0x10,local_res10,&local_68,0);
      local_58 = local_res8;
      local_res8[0] = uVar15;
      local_50 = puVar2;
      FUN_141e56730(plVar4,local_res20,&local_58);
      uVar10 = (ulonglong)*puVar2;
      *(undefined8 *)(param_1 + uVar10 * 3 + 0x38) = *puVar14;
      param_1[uVar10 * 3 + 0x3a] = *(undefined4 *)(puVar14 + 1);
      param_1[uVar10 * 3 + 0x38] = *puVar2;
      *puVar2 = *puVar2 + 1;
    }
    uVar15 = uVar15 + 1;
    uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
    puVar14 = (undefined8 *)((longlong)puVar14 + 0xc);
  } while (uVar15 < 0x20);
  _guard_xfg_dispatch_icall_nop
            (param_1 + (ulonglong)*puVar2 * 3 + 0x38,0,(ulonglong)*puVar2 * -0xc + 0x180);
  iVar6 = *(int *)(param_2 + 0x118);
  if (pbVar1 == pbVar1 + (longlong)iVar6 * 8) {
LAB_141e5f32b:
    uVar13 = *puVar2;
    *param_1 = 0x13;
    if (uVar13 != 0) {
      param_1[5] = uVar13;
      *(undefined4 **)(param_1 + 6) = param_1 + 0x38;
      param_1[8] = param_1[0x98];
      *(undefined4 **)(param_1 + 10) = param_1 + 0x99;
      uVar8 = FCrc::MemCrc32(param_1 + 0x38,uVar13 * 0xc,0);
      param_1[0xc] = uVar8;
      uVar8 = FCrc::MemCrc32(param_1 + 0x99,param_1[0x98] << 4,uVar8);
      param_1[0xc] = uVar8;
    }
    return;
  }
  pbVar9 = (byte *)(param_2 + 0x1b);
LAB_141e5f150:
  if (((local_res18 >> (*pbVar9 & 0x1f) & 1) != 0) && (param_1[0x26] != param_1[0x31])) {
    puVar11 = *(undefined4 **)(param_1 + 0x34);
    if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
      puVar11 = param_1 + 0x32;
    }
    iVar7 = puVar11[(longlong)(int)param_1[0x36] - 1U & (ulonglong)pbVar9[-3]];
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x10) == (uint)pbVar9[-3]) {
          if (iVar7 != -1) {
            uVar13 = param_1[0x98];
            param_1[0x98] = uVar13 + 1;
            if (param_1[0x26] == param_1[0x31]) goto LAB_141e5f23e;
            puVar11 = *(undefined4 **)(param_1 + 0x34);
            if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
              puVar11 = param_1 + 0x32;
            }
            uVar15 = puVar11[(longlong)(int)param_1[0x36] - 1U & (ulonglong)pbVar9[-3]];
            if (uVar15 == 0xffffffff) goto LAB_141e5f23e;
            goto LAB_141e5f220;
          }
          break;
        }
        iVar7 = *(int *)(*plVar4 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  goto LAB_141e5f31a;
  while (uVar15 = puVar12[2], uVar15 != 0xffffffff) {
LAB_141e5f220:
    puVar12 = (uint *)((longlong)(int)uVar15 * 0x10 + *plVar4);
    if (*puVar12 == (uint)pbVar9[-3]) {
      if (uVar15 != 0xffffffff) goto LAB_141e5f240;
      break;
    }
  }
LAB_141e5f23e:
  puVar12 = (uint *)0x0;
LAB_141e5f240:
  param_1[(ulonglong)uVar13 * 4 + 0x9a] = puVar12[1];
  param_1[(ulonglong)uVar13 * 4 + 0x99] = (uint)*pbVar9;
  switch(pbVar9[-1]) {
  case 1:
    uVar8 = 100;
    break;
  case 2:
    uVar8 = 0x67;
    break;
  case 3:
    uVar8 = 0x6a;
    break;
  case 4:
    uVar8 = 0x6d;
    break;
  case 5:
    uVar8 = 0x26;
    break;
  case 6:
    uVar8 = 0x29;
    break;
  case 7:
    uVar8 = 0x25;
    break;
  case 8:
    uVar8 = 0x2c;
    break;
  case 9:
    uVar8 = 0x52;
    break;
  case 10:
    uVar8 = 0x60;
    break;
  case 0xb:
    uVar8 = 0x4e;
    break;
  case 0xc:
    uVar8 = 0x53;
    break;
  case 0xd:
    uVar8 = 0x61;
    break;
  case 0xe:
    uVar8 = 0x5c;
    break;
  case 0xf:
    uVar8 = 0x51;
    break;
  case 0x10:
    uVar8 = 0x5f;
    break;
  case 0x11:
    uVar8 = 0x4d;
    break;
  case 0x12:
    uVar8 = 0x5b;
    break;
  case 0x13:
    uVar8 = 0x40;
    break;
  case 0x14:
    uVar8 = 0x62;
    break;
  default:
    uVar8 = 0;
  }
  param_1[(ulonglong)uVar13 * 4 + 0x9b] = uVar8;
  param_1[(ulonglong)uVar13 * 4 + 0x9c] = (uint)pbVar9[-2];
LAB_141e5f31a:
  pbVar3 = pbVar9 + 5;
  pbVar9 = pbVar9 + 8;
  if (pbVar3 == pbVar1 + (longlong)iVar6 * 8) goto LAB_141e5f32b;
  goto LAB_141e5f150;
}



// FUNCTION 141e5f400 GetDeviceExtensions body=130 status=ok
// SIG undefined GetDeviceExtensions(void)

void FVulkanWindowsPlatform::GetDeviceExtensions(longlong *param_1)

{
  int iVar1;
  char cVar2;
  
  if (DAT_146aafbfc != '\0') {
    cVar2 = IsRHIDeviceIntel();
    if (cVar2 != '\0') {
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(char **)(*param_1 + (longlong)iVar1 * 8) = "VK_AMD_buffer_marker";
    }
    cVar2 = IsRHIDeviceIntel();
    if (cVar2 != '\0') {
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(char **)(*param_1 + (longlong)iVar1 * 8) = "VK_NV_device_diagnostic_checkpoints";
    }
  }
  return;
}



// FUNCTION 141e5f490 FUN_141e5f490 body=53 status=ok
// SIG undefined FUN_141e5f490(void)

undefined8 FUN_141e5f490(longlong param_1,longlong param_2)

{
  if (param_2 != param_1 + 0x18) {
    FUN_1419cbcc0(param_2,param_1 + 0x18,*(undefined4 *)(param_1 + 0x118),
                  *(undefined4 *)(param_2 + 0x104),0);
  }
  return 1;
}



// FUNCTION 141e5f4d0 GetInstanceExtensions body=99 status=ok
// SIG undefined GetInstanceExtensions(void)

void FVulkanWindowsPlatform::GetInstanceExtensions(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(char **)(*param_1 + (longlong)iVar1 * 8) = "VK_KHR_surface";
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(char **)(*param_1 + (longlong)iVar1 * 8) = "VK_KHR_win32_surface";
  return;
}



// FUNCTION 141e5f540 GetMipSize body=176 status=ok
// SIG undefined GetMipSize(void)

void FVulkanSurface::GetMipSize(longlong param_1,byte param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x2c);
  uVar3 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  uVar1 = (&DAT_1464ca1bc)[lVar4 * 10];
  uVar2 = (&DAT_1464ca1b8)[lVar4 * 10];
  uVar5 = *(uint *)(param_1 + 0x24) >> (param_2 & 0x1f);
  uVar6 = uVar2;
  if (uVar2 <= uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = (uint)(CONCAT44(0 >> (param_2 & 0x1f),(uVar6 - 1) + uVar2) / (ulonglong)uVar2);
  uVar2 = uVar1;
  if (uVar1 <= uVar5) {
    uVar2 = uVar5;
  }
  uVar1 = ((uVar1 - 1) + uVar2) / uVar1;
  uVar3 = uVar1;
  uVar2 = uVar6;
  if (*(int *)(param_1 + 0x2c) - 0x1eU < 2) {
    uVar2 = 2;
    if (1 < uVar6) {
      uVar2 = uVar6;
    }
    uVar3 = 2;
    if (1 < uVar1) {
      uVar3 = uVar1;
    }
  }
  *param_3 = uVar3 * uVar2 * (&DAT_1464ca1c4)[lVar4 * 10];
  return;
}



// FUNCTION 141e5f5f0 GetMipStride body=109 status=ok
// SIG undefined GetMipStride(void)

void FVulkanSurface::GetMipStride(longlong param_1,byte param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = (&DAT_1464ca1b8)[(longlong)iVar1 * 10];
  uVar4 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  uVar3 = uVar2;
  if (uVar2 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar2 = ((uVar3 - 1) + uVar2) / uVar2;
  uVar3 = uVar2;
  if ((iVar1 - 0x1eU < 2) && (uVar3 = 2, 1 < uVar2)) {
    uVar3 = uVar2;
  }
  *param_3 = (&DAT_1464ca1c4)[(longlong)iVar1 * 10] * uVar3;
  return;
}



// FUNCTION 141e5f660 FUN_141e5f660 body=45 status=ok
// SIG undefined FUN_141e5f660(void)

int FUN_141e5f660(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (2 < iVar1) {
    if (iVar1 == 3) {
      return 6;
    }
    if (iVar1 == 5) {
      return *(int *)(param_1 + 0x50);
    }
    if (iVar1 == 6) {
      return *(int *)(param_1 + 0x50) * 6;
    }
  }
  return 1;
}



// FUNCTION 141e5f690 FUN_141e5f690 body=89 status=ok
// SIG undefined FUN_141e5f690(void)

float FUN_141e5f690(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141e5f760(param_1 + 0x18,1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar2 = dVar2 / dVar3;
  }
  return (float)dVar2;
}



// FUNCTION 141e5f700 FUN_141e5f700 body=94 status=ok
// SIG undefined FUN_141e5f700(void)

float FUN_141e5f700(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141e5f760(param_1 + 0x58,1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    return (float)(dVar2 / dVar3);
  }
  return 0.0;
}



// FUNCTION 141e5f760 FUN_141e5f760 body=590 status=ok
// SIG undefined FUN_141e5f760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141e5f760(longlong param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  if (DAT_146ab6339 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar4 = *(uint *)(lVar6 + 0x38);
    if ((param_2 == '\0') && (uVar8 = 1, 1 < *(uint *)(lVar6 + 0x3c))) {
      do {
        uVar3 = uVar4 * 2;
        plVar7 = (longlong *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(lVar6 + 0x48));
        plVar5 = (longlong *)(((longlong)(int)uVar3 + 1) * 0x10 + *(longlong *)(lVar6 + 0x48));
        if (((ulonglong)plVar5[1] < *(ulonglong *)(*plVar5 + 0x98)) &&
           ((ulonglong)plVar7[1] < *(ulonglong *)(*plVar7 + 0x98))) {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x10);
          lVar6 = (ulonglong)*(uint *)(lVar6 + 0x24) +
                  *(longlong *)(*(longlong *)(lVar6 + 0x28) + 0x18);
          uVar1 = *(ulonglong *)(lVar6 + (ulonglong)uVar3 * 8);
          uVar2 = *(ulonglong *)(lVar6 + (ulonglong)(uVar3 + 1) * 8);
          if (uVar1 < uVar2) {
            return uVar2 - uVar1;
          }
        }
        lVar6 = *(longlong *)(param_1 + 0x28);
        uVar8 = uVar8 + 1;
        uVar4 = ((*(uint *)(lVar6 + 0x40) - 1) + uVar4) % *(uint *)(lVar6 + 0x40);
      } while (uVar8 < *(uint *)(lVar6 + 0x3c));
    }
    if ((*(int *)(lVar6 + 0x3c) != 0) || (param_2 != '\0')) {
      if ((*(int *)(lVar6 + 0x3c) == *(int *)(lVar6 + 0x40)) || (param_2 != '\0')) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      QueryPerformanceCounter(&local_res20);
      uVar4 = uVar4 * 2;
      if (bVar9) {
        plVar5 = (longlong *)
                 ((longlong)(int)uVar4 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48))
        ;
        plVar7 = (longlong *)
                 (((longlong)(int)uVar4 + 1) * 0x10 +
                 *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48));
        bVar9 = plVar5[1] == *(longlong *)(*plVar5 + 0x98);
        bVar10 = plVar7[1] == *(longlong *)(*plVar7 + 0x98);
        if ((bVar10) || (bVar9)) {
          FUN_141e2fe70(*(undefined8 *)(param_1 + 0x10));
          if ((bVar9) && (plVar5[1] == *(longlong *)(*plVar5 + 0x98))) {
            FUN_141e309b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x2d8),*plVar5,0x41200000)
            ;
          }
        }
        if ((bVar10) && (plVar7[1] == *(longlong *)(*plVar7 + 0x98))) {
          FUN_141e309b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x2d8),*plVar7,0x41200000);
        }
      }
      QueryPerformanceCounter(&local_res18);
      _DAT_146ac3aec = _DAT_146ac3aec + 1;
      DAT_146ac3acc = DAT_146ac3acc + (local_res18.s.LowPart - local_res20._0_4_);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x10);
      lVar6 = (ulonglong)*(uint *)(lVar6 + 0x24) + *(longlong *)(*(longlong *)(lVar6 + 0x28) + 0x18)
      ;
      uVar1 = *(ulonglong *)(lVar6 + (ulonglong)uVar4 * 8);
      uVar2 = *(ulonglong *)(lVar6 + (ulonglong)(uVar4 + 1) * 8);
      if (uVar1 < uVar2) {
        return uVar2 - uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 141e5f9b0 FUN_141e5f9b0 body=575 status=ok
// SIG undefined FUN_141e5f9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5f9b0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar4 = FVulkanCommandBufferManager::GetUploadCmdBuffer(*(undefined8 *)(param_2 + 0x2d8));
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x58) == 3) {
    local_88 = 6;
  }
  else {
    local_88 = 1;
    if (*(int *)(param_1 + 0x50) != 0) {
      local_88 = *(undefined4 *)(param_1 + 0x50);
    }
  }
  iVar2 = VulkanRHI::FPendingBarrier::AddImageBarrier
                    (&local_78,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0x68));
  lVar6 = (longlong)iVar2;
  *(undefined4 *)(local_70 + 0x10 + lVar6 * 0x48) = 0;
  *(undefined4 *)(local_70 + 0x18 + lVar6 * 0x48) = 0;
  *(undefined4 *)(local_70 + 0x14 + lVar6 * 0x48) = 0x1000;
  *(undefined4 *)(local_70 + 0x1c + lVar6 * 0x48) = 7;
  local_78 = local_78 | 0x100000000001;
  if ((0 < (int)local_68) || (0 < (int)local_58)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_78,lVar4,1);
  }
  local_50 = *(undefined4 *)(param_3 + 4);
  local_80 = local_70 + 0x30 + lVar6 * 0x48;
  local_88 = 1;
  if (*(int *)(param_1 + 0x70) == 1) {
    local_4c = *(undefined4 *)(param_3 + 8);
    local_48 = *(undefined4 *)(param_3 + 0xc);
    local_44 = *(undefined4 *)(param_3 + 0x10);
    (*DAT_146ab0298)(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_1 + 0x10),7,&local_50);
    uVar7 = 2;
    if (param_4 != '\0') {
      uVar7 = 5;
    }
    *(undefined4 *)(local_70 + 0x10 + lVar6 * 0x48) = 0x1000;
    *(undefined4 *)(local_70 + 0x18 + lVar6 * 0x48) = 7;
    local_78._0_4_ = 0x1000;
    local_78._4_4_ = 0;
    uVar3 = FUN_141e26f50(uVar7,local_70 + 0x14 + lVar6 * 0x48,local_70 + 0x1c + lVar6 * 0x48);
    local_78 = CONCAT44(local_78._4_4_ | uVar3,(undefined4)local_78);
  }
  else {
    local_4c = *(undefined4 *)(param_3 + 8);
    (*DAT_146ab02a0)(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_1 + 0x10),7,&local_50);
    *(undefined4 *)(local_70 + 0x10 + lVar6 * 0x48) = 0x1000;
    *(undefined4 *)(local_70 + 0x18 + lVar6 * 0x48) = 7;
    *(undefined4 *)(local_70 + 0x14 + lVar6 * 0x48) = 0x400;
    *(undefined4 *)(local_70 + 0x1c + lVar6 * 0x48) = 3;
    local_78 = 0x30000001000;
  }
  if ((0 < (int)local_68) || (0 < (int)local_58)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_78,lVar4,1);
  }
  uVar1 = *(undefined4 *)(local_70 + 0x1c + lVar6 * 0x48);
  puVar5 = (undefined4 *)
           FTransitionAndLayoutManager::FindOrAddLayoutRW
                     (param_2 + 0x2e0,*(undefined8 *)(param_1 + 0x10),uVar1);
  *puVar5 = uVar1;
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e5fbf0 FUN_141e5fbf0 body=387 status=ok
// SIG undefined FUN_141e5fbf0(void)

void FUN_141e5fbf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (DAT_146ab6338 == '\0') {
    if (((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x954) == 1)) {
      lVar7 = 0;
      fVar3 = 1e+09 / *(float *)(lVar2 + 0x958);
      if ((9.223372e+18 <= fVar3) && (fVar3 = fVar3 - 9.223372e+18, fVar3 < 9.223372e+18)) {
        lVar7 = -0x8000000000000000;
      }
      DAT_146ab6340 = (longlong)fVar3 + lVar7;
    }
    DAT_146ab6339 = DAT_146ab6340 != 0;
    DAT_146ab6338 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (DAT_146ab6339 != '\0') {
    puVar5 = (undefined8 *)operator_new(0x60);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_141e37b40(puVar5,*(undefined8 *)(param_1 + 0x10),param_2,0x10,2);
      *(undefined4 *)(puVar5 + 8) = 8;
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4448;
      puVar5[7] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      iVar1 = *(int *)(puVar5 + 10);
      iVar4 = iVar1 + 0x10;
      *(int *)(puVar5 + 10) = iVar4;
      if (*(int *)((longlong)puVar5 + 0x54) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar5 + 9);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 * 0x10 + puVar5[9]),0,0x100);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar5;
    uVar6 = FUN_141e22090(*(longlong *)(param_1 + 0x10) + 0x3f0,0x40,2,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58) = uVar6;
  }
  return;
}



// FUNCTION 141e5fd80 FUN_141e5fd80 body=291 status=ok
// SIG undefined FUN_141e5fd80(void)

void FUN_141e5fd80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong local_18 [2];
  
  cVar4 = IsInRenderingThread();
  if ((cVar4 == '\0') || (DAT_146ab6383 == '\0')) {
    FTransitionAndLayoutManager::FindOrAddLayout
              (*(longlong *)(param_1 + 0x18b0) + 0x2e0,param_2,param_3);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 4;
    if (DAT_146ab6eb0 < puVar5 + 4) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x28);
      puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 4;
    }
    DAT_146ab6ea8 = puVar3;
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    *DAT_146ab6e80 = puVar5;
    DAT_146ab6e80 = puVar5 + 1;
    *DAT_146ab6e80 = 0;
    *puVar5 = &PTR_LAB_144eb2b10;
    puVar5[2] = param_2;
    *(undefined4 *)(puVar5 + 3) = param_3;
  }
  if ((cVar4 != '\0') &&
     (FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,local_18,1), local_18[0] != 0)) {
    LOCK();
    piVar1 = (int *)(local_18[0] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141e5feb0 FUN_141e5feb0 body=252 status=ok
// SIG undefined FUN_141e5feb0(void)

void FUN_141e5feb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = FVulkanCommandBufferManager::GetUploadCmdBuffer(*(undefined8 *)(param_1 + 0x2d8));
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  VulkanRHI::ImagePipelineBarrier(uVar1,*(undefined8 *)(param_2 + 0x10),0,1,param_3);
  (*DAT_146ab0278)(uVar1,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_2 + 0x10),7,1,param_4
                  );
  VulkanRHI::ImagePipelineBarrier(uVar1,*(undefined8 *)(param_2 + 0x10),1,6,param_3);
  puVar3 = (undefined4 *)
           FTransitionAndLayoutManager::FindOrAddLayoutRW
                     (param_1 + 0x2e0,*(undefined8 *)(param_2 + 0x10),5);
  *puVar3 = 5;
  FUN_141e2d4b0(*(longlong *)(param_2 + 8) + 0x3f0,lVar2,&param_5);
  if (DAT_1464c9670 != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0,0);
  }
  return;
}



// FUNCTION 141e5ffb0 FUN_141e5ffb0 body=617 status=ok
// SIG undefined FUN_141e5ffb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5ffb0(longlong param_1,char param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_94 = 0;
  local_a0 = param_3;
  local_98 = param_4;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_a8,&local_a0);
  if (local_a8[0] != -1) {
    uVar6 = *(undefined8 *)((longlong)local_a8[0] * 0x20 + 0x10 + DAT_1464c9680);
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9680);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  uVar3 = *(uint *)(param_3 + 0x90) >> ((byte)param_4 & 0x1f);
  uStack_4c = 1;
  if (uVar3 != 0) {
    uStack_4c = uVar3;
  }
  uVar3 = *(uint *)(param_3 + 0x94) >> ((byte)param_4 & 0x1f);
  local_48 = 1;
  if (uVar3 != 0) {
    local_48 = uVar3;
  }
  iVar1 = *(int *)(param_3 + 200);
  if ((-1 < iVar1) && (2 < iVar1)) {
    if (iVar1 == 3) {
      iStack_5c = 6;
      goto LAB_141e600cb;
    }
    if (iVar1 == 5) {
      iStack_5c = *(int *)(param_3 + 0xc0);
      goto LAB_141e600cb;
    }
    if (iVar1 == 6) {
      iStack_5c = *(int *)(param_3 + 0xc0) * 6;
      goto LAB_141e600cb;
    }
  }
  iStack_5c = 1;
LAB_141e600cb:
  uStack_88 = 1;
  local_90 = 1;
  local_80 = 1;
  local_78 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 1;
  uStack_44 = 1;
  uStack_8c = param_4;
  uStack_64 = param_4;
  if ((param_2 == '\0') || (DAT_146ab6383 == '\0')) {
    local_b8 = uVar6;
    FUN_141e5feb0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0),param_3 + 0x70,&local_90,
                  &local_78);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0xe;
    if (DAT_146ab6eb0 < puVar4) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
      puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0xe;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar4;
    *DAT_146ab6e80 = puVar5;
    DAT_146ab6e80 = puVar5 + 1;
    *DAT_146ab6e80 = 0;
    *puVar5 = &PTR_FUN_144eb2af0;
    puVar5[2] = param_3 + 0x70;
    puVar5[3] = CONCAT44(uStack_8c,local_90);
    puVar5[4] = uStack_88;
    *(undefined4 *)(puVar5 + 5) = local_80;
    puVar5[6] = local_78;
    puVar5[7] = uStack_70;
    puVar5[8] = CONCAT44(uStack_64,local_68);
    puVar5[9] = CONCAT44(iStack_5c,uStack_60);
    puVar5[10] = local_58;
    puVar5[0xb] = CONCAT44(uStack_4c,uStack_50);
    puVar5[0xc] = CONCAT44(uStack_44,local_48);
    puVar5[0xd] = uVar6;
  }
  return;
}



// FUNCTION 141e60220 FUN_141e60220 body=653 status=ok
// SIG undefined FUN_141e60220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e60220(longlong param_1,char param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5,uint param_6,void *param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  char local_b8;
  undefined4 local_b4;
  uint local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = (longlong)*(int *)(param_3 + 0x3c);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar2 = (*(int *)((longlong)param_5 + 0x14) + -1 + (&DAT_1464ca1bc)[lVar3 * 10]) /
          (int)(&DAT_1464ca1bc)[lVar3 * 10];
  iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x8e0);
  uVar6 = ((*(int *)(param_5 + 2) + -1 + (&DAT_1464ca1b8)[lVar3 * 10]) /
          (int)(&DAT_1464ca1b8)[lVar3 * 10]) * (&DAT_1464ca1c4)[lVar3 * 10];
  local_b8 = param_2;
  local_b4 = param_4;
  local_b0 = uVar2;
  local_a8 = param_3;
  local_98 = param_1;
  local_a0 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,iVar1 + -1 + uVar6 * uVar2 & -iVar1
                           ,1);
  local_90 = *(undefined4 *)(param_3 + 0xe0);
  _Dst = (void *)((ulonglong)*(uint *)(*(longlong *)(local_a0 + 0x10) + 0x24) +
                 *(longlong *)(*(longlong *)(*(longlong *)(local_a0 + 0x10) + 0x28) + 0x18));
  uStack_88 = 1;
  uStack_8c = local_b4;
  local_80 = 1;
  if (uVar2 != 0) {
    uVar7 = (ulonglong)local_b0;
    do {
      _guard_xfg_dispatch_icall_nop(_Dst,param_7,(ulonglong)uVar6);
      _Dst = (void *)((longlong)_Dst + (ulonglong)uVar6);
      param_7 = (void *)((longlong)param_7 + (ulonglong)param_6);
      uVar7 = uVar7 - 1;
      param_3 = local_a8;
    } while (uVar7 != 0);
  }
  lVar3 = local_a0;
  local_58 = *param_5;
  uStack_50 = CONCAT44(*(undefined4 *)(param_5 + 2),(undefined4)uStack_50);
  local_68 = CONCAT44(local_b4,1);
  uStack_60 = CONCAT44(1,(undefined4)uStack_60);
  local_48 = CONCAT44(1,*(undefined4 *)((longlong)param_5 + 0x14));
  if ((local_b8 == '\0') || (DAT_146ab6383 == '\0')) {
    local_c8 = local_a0;
    FUN_141e5feb0(*(undefined8 *)(*(longlong *)(local_98 + 0x70) + 0x18b0),param_3 + 0x70,&local_90,
                  &local_78);
  }
  else {
    puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 0xe;
    if (DAT_146ab6eb0 < puVar5) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 0xe;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar5;
    *DAT_146ab6e80 = puVar4;
    DAT_146ab6e80 = puVar4 + 1;
    *DAT_146ab6e80 = 0;
    *puVar4 = &PTR_FUN_144eb2af0;
    puVar4[2] = param_3 + 0x70;
    puVar4[3] = CONCAT44(uStack_8c,local_90);
    puVar4[4] = uStack_88;
    *(undefined4 *)(puVar4 + 5) = local_80;
    puVar4[6] = local_78;
    puVar4[7] = uStack_70;
    puVar4[8] = local_68;
    puVar4[9] = uStack_60;
    puVar4[10] = local_58;
    puVar4[0xb] = uStack_50;
    puVar4[0xc] = local_48;
    puVar4[0xd] = lVar3;
  }
  return;
}



// FUNCTION 141e604b0 FUN_141e604b0 body=759 status=ok
// SIG undefined FUN_141e604b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e604b0(longlong param_1,char param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5,uint param_6,int param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *_Src;
  ulonglong uVar6;
  void *_Dst;
  uint uVar7;
  size_t _Size;
  undefined1 auStack_108 [32];
  longlong local_e8;
  char local_d8;
  uint local_d4;
  undefined4 local_d0;
  uint local_cc;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = (longlong)*(int *)(param_3 + 0x3c);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b0 = param_5;
  uVar6 = (longlong)(*(int *)((longlong)param_5 + 0x1c) + -1 + (&DAT_1464ca1bc)[lVar2 * 10]) /
          (longlong)(int)(&DAT_1464ca1bc)[lVar2 * 10];
  local_c8 = param_7;
  local_d4 = (uint)uVar6;
  uVar6 = uVar6 & 0xffffffff;
  local_a8 = param_8;
  local_cc = ((*(int *)(param_5 + 3) + -1 + (&DAT_1464ca1b8)[lVar2 * 10]) /
             (int)(&DAT_1464ca1b8)[lVar2 * 10]) * (&DAT_1464ca1c4)[lVar2 * 10];
  _Size = (size_t)local_cc;
  iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x8e0);
  local_d8 = param_2;
  local_d0 = param_4;
  local_b8 = param_3;
  local_a0 = param_1;
  local_c0 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,
                           iVar1 + -1 + *(int *)(param_5 + 4) * local_cc * local_d4 & -iVar1,1);
  local_98 = *(undefined4 *)(param_3 + 0xe8);
  uVar7 = 0;
  _Dst = (void *)((ulonglong)*(uint *)(*(longlong *)(local_c0 + 0x10) + 0x24) +
                 *(longlong *)(*(longlong *)(*(longlong *)(local_c0 + 0x10) + 0x28) + 0x18));
  uStack_90 = 1;
  uStack_94 = local_d0;
  local_88 = 1;
  uVar4 = 0;
  if (*(int *)(param_5 + 4) != 0) {
    do {
      _Src = (void *)((ulonglong)(param_7 * uVar7) + param_8);
      if ((int)uVar6 != 0) {
        uVar6 = (ulonglong)local_d4;
        do {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
          _Dst = (void *)((longlong)_Dst + _Size);
          _Src = (void *)((longlong)_Src + (ulonglong)param_6);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar6 = (ulonglong)local_d4;
        _Size = (size_t)local_cc;
        param_5 = local_b0;
        param_8 = local_a8;
      }
      uVar4 = *(uint *)(param_5 + 4);
      uVar7 = uVar7 + 1;
      param_7 = local_c8;
    } while (uVar7 < uVar4);
  }
  local_60 = *param_5;
  uStack_58 = CONCAT44(*(undefined4 *)(param_5 + 3),*(undefined4 *)(param_5 + 1));
  local_70 = CONCAT44(local_d0,1);
  uStack_68 = CONCAT44(1,(undefined4)uStack_68);
  local_50 = CONCAT44(uVar4,*(undefined4 *)((longlong)param_5 + 0x1c));
  if ((local_d8 == '\0') || (DAT_146ab6383 == '\0')) {
    local_e8 = local_c0;
    FUN_141e5feb0(*(undefined8 *)(*(longlong *)(local_a0 + 0x70) + 0x18b0),local_b8 + 0x78,&local_98
                  ,&local_80);
  }
  else {
    puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0xe;
    if (DAT_146ab6eb0 < puVar3) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
      puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 0xe;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar3;
    *DAT_146ab6e80 = puVar5;
    DAT_146ab6e80 = puVar5 + 1;
    *DAT_146ab6e80 = 0;
    *puVar5 = &PTR_FUN_144eb2af0;
    puVar5[2] = local_b8 + 0x78;
    puVar5[3] = CONCAT44(uStack_94,local_98);
    puVar5[4] = uStack_90;
    *(undefined4 *)(puVar5 + 5) = local_88;
    puVar5[6] = local_80;
    puVar5[7] = uStack_78;
    puVar5[8] = local_70;
    puVar5[9] = uStack_68;
    puVar5[10] = local_60;
    puVar5[0xb] = uStack_58;
    puVar5[0xc] = local_50;
    puVar5[0xd] = local_c0;
  }
  return;
}



// FUNCTION 141e607b0 LoadVulkanInstanceFunctions body=5464 status=ok
// SIG undefined LoadVulkanInstanceFunctions(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FVulkanWindowsPlatform::LoadVulkanInstanceFunctions(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  bool bVar101;
  bool bVar102;
  bool bVar103;
  bool bVar104;
  bool bVar105;
  bool bVar106;
  bool bVar107;
  bool bVar108;
  bool bVar109;
  bool bVar110;
  bool bVar111;
  bool bVar112;
  bool bVar113;
  bool bVar114;
  bool bVar115;
  bool bVar116;
  bool bVar117;
  bool bVar118;
  bool bVar119;
  bool bVar120;
  bool bVar121;
  bool bVar122;
  bool bVar123;
  bool bVar124;
  bool bVar125;
  bool bVar126;
  bool bVar127;
  bool bVar128;
  bool bVar129;
  bool bVar130;
  bool bVar131;
  bool bVar132;
  bool bVar133;
  bool bVar134;
  bool bVar135;
  bool bVar136;
  bool bVar137;
  
  if ((DAT_146ab0418 != (HMODULE)0x0) &&
     (_DAT_146ab0420 = FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkGetInstanceProcAddr")
     , _DAT_146ab0420 != 0)) {
    DAT_146aaff08 = (*DAT_146aafeb8)(param_1,"vkDestroyInstance");
    DAT_146aaff10 = (*DAT_146aafeb8)(param_1,"vkEnumeratePhysicalDevices");
    DAT_146aaff18 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceFeatures");
    DAT_146aaff20 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceFormatProperties");
    DAT_146aaff28 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceImageFormatProperties");
    DAT_146aaff30 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceProperties");
    DAT_146aaff38 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
    DAT_146aaff40 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceMemoryProperties");
    DAT_146aaff48 = (*DAT_146aafeb8)(param_1,"vkCreateDevice");
    DAT_146aaff50 = (*DAT_146aafeb8)(param_1,"vkDestroyDevice");
    DAT_146aaff58 = (*DAT_146aafeb8)(param_1,"vkEnumerateDeviceExtensionProperties");
    DAT_146aaff60 = (*DAT_146aafeb8)(param_1,"vkEnumerateDeviceLayerProperties");
    DAT_146aaff68 = (*DAT_146aafeb8)(param_1,"vkGetDeviceQueue");
    DAT_146aaff70 = (*DAT_146aafeb8)(param_1,"vkQueueSubmit");
    DAT_146aaff78 = (*DAT_146aafeb8)(param_1,"vkQueueWaitIdle");
    DAT_146aaff80 = (*DAT_146aafeb8)(param_1,"vkDeviceWaitIdle");
    DAT_146aaff88 = (*DAT_146aafeb8)(param_1,"vkAllocateMemory");
    DAT_146aaff90 = (*DAT_146aafeb8)(param_1,"vkFreeMemory");
    DAT_146aaff98 = (*DAT_146aafeb8)(param_1,"vkMapMemory");
    DAT_146aaffa0 = (*DAT_146aafeb8)(param_1,"vkUnmapMemory");
    DAT_146aaffa8 = (*DAT_146aafeb8)(param_1,"vkFlushMappedMemoryRanges");
    DAT_146aaffb0 = (*DAT_146aafeb8)(param_1,"vkInvalidateMappedMemoryRanges");
    DAT_146aaffb8 = (*DAT_146aafeb8)(param_1,"vkGetDeviceMemoryCommitment");
    DAT_146aaffc0 = (*DAT_146aafeb8)(param_1,"vkBindBufferMemory");
    DAT_146aaffc8 = (*DAT_146aafeb8)(param_1,"vkBindImageMemory");
    DAT_146aaffd0 = (*DAT_146aafeb8)(param_1,"vkGetBufferMemoryRequirements");
    DAT_146aaffd8 = (*DAT_146aafeb8)(param_1,"vkGetImageMemoryRequirements");
    DAT_146aaffe0 = (*DAT_146aafeb8)(param_1,"vkGetImageSparseMemoryRequirements");
    DAT_146aaffe8 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties");
    DAT_146aafff0 = (*DAT_146aafeb8)(param_1,"vkQueueBindSparse");
    DAT_146aafff8 = (*DAT_146aafeb8)(param_1,"vkCreateFence");
    DAT_146ab0000 = (*DAT_146aafeb8)(param_1,"vkDestroyFence");
    DAT_146ab0008 = (*DAT_146aafeb8)(param_1,"vkResetFences");
    DAT_146ab0010 = (*DAT_146aafeb8)(param_1,"vkGetFenceStatus");
    DAT_146ab0018 = (*DAT_146aafeb8)(param_1,"vkWaitForFences");
    DAT_146ab0020 = (*DAT_146aafeb8)(param_1,"vkCreateSemaphore");
    DAT_146ab0028 = (*DAT_146aafeb8)(param_1,"vkDestroySemaphore");
    DAT_146ab0030 = (*DAT_146aafeb8)(param_1,"vkCreateEvent");
    DAT_146ab0038 = (*DAT_146aafeb8)(param_1,"vkDestroyEvent");
    DAT_146ab0040 = (*DAT_146aafeb8)(param_1,"vkGetEventStatus");
    DAT_146ab0048 = (*DAT_146aafeb8)(param_1,"vkSetEvent");
    DAT_146ab0050 = (*DAT_146aafeb8)(param_1,"vkResetEvent");
    DAT_146ab0058 = (*DAT_146aafeb8)(param_1,"vkCreateQueryPool");
    DAT_146ab0060 = (*DAT_146aafeb8)(param_1,"vkDestroyQueryPool");
    DAT_146ab0068 = (*DAT_146aafeb8)(param_1,"vkGetQueryPoolResults");
    DAT_146ab0070 = (*DAT_146aafeb8)(param_1,"vkCreateBuffer");
    DAT_146ab0078 = (*DAT_146aafeb8)(param_1,"vkDestroyBuffer");
    DAT_146ab0080 = (*DAT_146aafeb8)(param_1,"vkCreateBufferView");
    DAT_146ab0088 = (*DAT_146aafeb8)(param_1,"vkDestroyBufferView");
    DAT_146ab0090 = (*DAT_146aafeb8)(param_1,"vkCreateImage");
    DAT_146ab0098 = (*DAT_146aafeb8)(param_1,"vkDestroyImage");
    DAT_146ab00a0 = (*DAT_146aafeb8)(param_1,"vkGetImageSubresourceLayout");
    DAT_146ab00a8 = (*DAT_146aafeb8)(param_1,"vkCreateImageView");
    DAT_146ab00b0 = (*DAT_146aafeb8)(param_1,"vkDestroyImageView");
    DAT_146ab00b8 = (*DAT_146aafeb8)(param_1,"vkCreateShaderModule");
    DAT_146ab00c0 = (*DAT_146aafeb8)(param_1,"vkDestroyShaderModule");
    DAT_146ab00c8 = (*DAT_146aafeb8)(param_1,"vkCreatePipelineCache");
    DAT_146ab00d0 = (*DAT_146aafeb8)(param_1,"vkDestroyPipelineCache");
    DAT_146ab00d8 = (*DAT_146aafeb8)(param_1,"vkGetPipelineCacheData");
    DAT_146ab00e0 = (*DAT_146aafeb8)(param_1,"vkMergePipelineCaches");
    DAT_146ab00e8 = (*DAT_146aafeb8)(param_1,"vkCreateGraphicsPipelines");
    DAT_146ab00f0 = (*DAT_146aafeb8)(param_1,"vkCreateComputePipelines");
    DAT_146ab00f8 = (*DAT_146aafeb8)(param_1,"vkDestroyPipeline");
    DAT_146ab0100 = (*DAT_146aafeb8)(param_1,"vkCreatePipelineLayout");
    DAT_146ab0108 = (*DAT_146aafeb8)(param_1,"vkDestroyPipelineLayout");
    DAT_146ab0110 = (*DAT_146aafeb8)(param_1,"vkCreateSampler");
    DAT_146ab0118 = (*DAT_146aafeb8)(param_1,"vkDestroySampler");
    DAT_146ab0120 = (*DAT_146aafeb8)(param_1,"vkCreateDescriptorSetLayout");
    DAT_146ab0128 = (*DAT_146aafeb8)(param_1,"vkDestroyDescriptorSetLayout");
    DAT_146ab0130 = (*DAT_146aafeb8)(param_1,"vkCreateDescriptorPool");
    DAT_146ab0138 = (*DAT_146aafeb8)(param_1,"vkDestroyDescriptorPool");
    DAT_146ab0140 = (*DAT_146aafeb8)(param_1,"vkResetDescriptorPool");
    DAT_146ab0148 = (*DAT_146aafeb8)(param_1,"vkAllocateDescriptorSets");
    DAT_146ab0150 = (*DAT_146aafeb8)(param_1,"vkFreeDescriptorSets");
    DAT_146ab0158 = (*DAT_146aafeb8)(param_1,"vkUpdateDescriptorSets");
    DAT_146ab0160 = (*DAT_146aafeb8)(param_1,"vkCreateFramebuffer");
    DAT_146ab0168 = (*DAT_146aafeb8)(param_1,"vkDestroyFramebuffer");
    DAT_146ab0170 = (*DAT_146aafeb8)(param_1,"vkCreateRenderPass");
    DAT_146ab0178 = (*DAT_146aafeb8)(param_1,"vkDestroyRenderPass");
    DAT_146ab0180 = (*DAT_146aafeb8)(param_1,"vkGetRenderAreaGranularity");
    DAT_146ab0188 = (*DAT_146aafeb8)(param_1,"vkCreateCommandPool");
    DAT_146ab0190 = (*DAT_146aafeb8)(param_1,"vkDestroyCommandPool");
    DAT_146ab0198 = (*DAT_146aafeb8)(param_1,"vkResetCommandPool");
    DAT_146ab01a0 = (*DAT_146aafeb8)(param_1,"vkAllocateCommandBuffers");
    DAT_146ab01a8 = (*DAT_146aafeb8)(param_1,"vkFreeCommandBuffers");
    DAT_146ab01b0 = (*DAT_146aafeb8)(param_1,"vkBeginCommandBuffer");
    DAT_146ab01b8 = (*DAT_146aafeb8)(param_1,"vkEndCommandBuffer");
    DAT_146ab01c0 = (*DAT_146aafeb8)(param_1,"vkResetCommandBuffer");
    DAT_146ab01c8 = (*DAT_146aafeb8)(param_1,"vkCmdBindPipeline");
    DAT_146ab01d0 = (*DAT_146aafeb8)(param_1,"vkCmdSetViewport");
    DAT_146ab01d8 = (*DAT_146aafeb8)(param_1,"vkCmdSetScissor");
    DAT_146ab01e0 = (*DAT_146aafeb8)(param_1,"vkCmdSetLineWidth");
    DAT_146ab01e8 = (*DAT_146aafeb8)(param_1,"vkCmdSetDepthBias");
    DAT_146ab01f0 = (*DAT_146aafeb8)(param_1,"vkCmdSetBlendConstants");
    DAT_146ab01f8 = (*DAT_146aafeb8)(param_1,"vkCmdSetDepthBounds");
    DAT_146ab0200 = (*DAT_146aafeb8)(param_1,"vkCmdSetStencilCompareMask");
    DAT_146ab0208 = (*DAT_146aafeb8)(param_1,"vkCmdSetStencilWriteMask");
    DAT_146ab0210 = (*DAT_146aafeb8)(param_1,"vkCmdSetStencilReference");
    DAT_146ab0218 = (*DAT_146aafeb8)(param_1,"vkCmdBindDescriptorSets");
    DAT_146ab0220 = (*DAT_146aafeb8)(param_1,"vkCmdBindIndexBuffer");
    DAT_146ab0228 = (*DAT_146aafeb8)(param_1,"vkCmdBindVertexBuffers");
    DAT_146ab0230 = (*DAT_146aafeb8)(param_1,"vkCmdDraw");
    DAT_146ab0238 = (*DAT_146aafeb8)(param_1,"vkCmdDrawIndexed");
    DAT_146ab0240 = (*DAT_146aafeb8)(param_1,"vkCmdDrawIndirect");
    DAT_146ab0248 = (*DAT_146aafeb8)(param_1,"vkCmdDrawIndexedIndirect");
    DAT_146ab0250 = (*DAT_146aafeb8)(param_1,"vkCmdDispatch");
    DAT_146ab0258 = (*DAT_146aafeb8)(param_1,"vkCmdDispatchIndirect");
    DAT_146ab0260 = (*DAT_146aafeb8)(param_1,"vkCmdCopyBuffer");
    DAT_146ab0268 = (*DAT_146aafeb8)(param_1,"vkCmdCopyImage");
    DAT_146ab0270 = (*DAT_146aafeb8)(param_1,"vkCmdBlitImage");
    DAT_146ab0278 = (*DAT_146aafeb8)(param_1,"vkCmdCopyBufferToImage");
    DAT_146ab0280 = (*DAT_146aafeb8)(param_1,"vkCmdCopyImageToBuffer");
    DAT_146ab0288 = (*DAT_146aafeb8)(param_1,"vkCmdUpdateBuffer");
    DAT_146ab0290 = (*DAT_146aafeb8)(param_1,"vkCmdFillBuffer");
    DAT_146ab0298 = (*DAT_146aafeb8)(param_1,"vkCmdClearColorImage");
    DAT_146ab02a0 = (*DAT_146aafeb8)(param_1,"vkCmdClearDepthStencilImage");
    DAT_146ab02a8 = (*DAT_146aafeb8)(param_1,"vkCmdClearAttachments");
    DAT_146ab02b0 = (*DAT_146aafeb8)(param_1,"vkCmdResolveImage");
    DAT_146ab02b8 = (*DAT_146aafeb8)(param_1,"vkCmdSetEvent");
    DAT_146ab02c0 = (*DAT_146aafeb8)(param_1,"vkCmdResetEvent");
    DAT_146ab02c8 = (*DAT_146aafeb8)(param_1,"vkCmdWaitEvents");
    DAT_146ab02d0 = (*DAT_146aafeb8)(param_1,"vkCmdPipelineBarrier");
    DAT_146ab02d8 = (*DAT_146aafeb8)(param_1,"vkCmdBeginQuery");
    DAT_146ab02e0 = (*DAT_146aafeb8)(param_1,"vkCmdEndQuery");
    DAT_146ab02e8 = (*DAT_146aafeb8)(param_1,"vkCmdResetQueryPool");
    DAT_146ab02f0 = (*DAT_146aafeb8)(param_1,"vkCmdWriteTimestamp");
    DAT_146ab02f8 = (*DAT_146aafeb8)(param_1,"vkCmdCopyQueryPoolResults");
    DAT_146ab0300 = (*DAT_146aafeb8)(param_1,"vkCmdPushConstants");
    DAT_146ab0308 = (*DAT_146aafeb8)(param_1,"vkCmdBeginRenderPass");
    DAT_146ab0310 = (*DAT_146aafeb8)(param_1,"vkCmdNextSubpass");
    DAT_146ab0318 = (*DAT_146aafeb8)(param_1,"vkCmdEndRenderPass");
    DAT_146ab0320 = (*DAT_146aafeb8)(param_1,"vkCmdExecuteCommands");
    DAT_146ab0328 = (*DAT_146aafeb8)(param_1,"vkCreateSwapchainKHR");
    DAT_146ab0330 = (*DAT_146aafeb8)(param_1,"vkDestroySwapchainKHR");
    DAT_146ab0338 = (*DAT_146aafeb8)(param_1,"vkGetSwapchainImagesKHR");
    DAT_146ab0340 = (*DAT_146aafeb8)(param_1,"vkAcquireNextImageKHR");
    _DAT_146ab0348 = (*DAT_146aafeb8)(param_1,"vkQueuePresentKHR");
    bVar1 = DAT_146aaff08 != 0;
    bVar2 = DAT_146aaff10 != 0;
    bVar3 = DAT_146aaff18 != 0;
    bVar4 = DAT_146aaff20 != 0;
    bVar5 = DAT_146aaff28 != 0;
    bVar6 = DAT_146aaff30 != 0;
    bVar7 = DAT_146aaff38 != 0;
    bVar8 = DAT_146aaff40 != 0;
    bVar9 = DAT_146aaff48 != 0;
    bVar10 = DAT_146aaff50 != 0;
    bVar11 = DAT_146aaff58 != 0;
    bVar12 = DAT_146aaff60 != 0;
    bVar13 = DAT_146aaff68 != 0;
    bVar14 = DAT_146aaff70 != 0;
    bVar15 = DAT_146aaff78 != 0;
    bVar16 = DAT_146aaff80 != 0;
    bVar17 = DAT_146aaff88 != 0;
    bVar18 = DAT_146aaff90 != 0;
    bVar19 = DAT_146aaff98 != 0;
    bVar20 = DAT_146aaffa0 != 0;
    bVar21 = DAT_146aaffa8 != 0;
    bVar22 = DAT_146aaffb0 != 0;
    bVar23 = DAT_146aaffb8 != 0;
    bVar24 = DAT_146aaffc0 != 0;
    bVar25 = DAT_146aaffc8 != 0;
    bVar26 = DAT_146aaffd0 != 0;
    bVar27 = DAT_146aaffd8 != 0;
    bVar28 = DAT_146aaffe0 != 0;
    bVar29 = DAT_146aaffe8 != 0;
    bVar30 = DAT_146aafff0 != 0;
    bVar31 = DAT_146aafff8 != 0;
    bVar32 = DAT_146ab0000 != 0;
    bVar33 = DAT_146ab0008 != 0;
    bVar34 = DAT_146ab0010 != 0;
    bVar35 = DAT_146ab0018 != 0;
    bVar36 = DAT_146ab0020 != 0;
    bVar37 = DAT_146ab0028 != 0;
    bVar38 = DAT_146ab0030 != 0;
    bVar39 = DAT_146ab0038 != 0;
    bVar40 = DAT_146ab0040 != 0;
    bVar41 = DAT_146ab0048 != 0;
    bVar42 = DAT_146ab0050 != 0;
    bVar43 = DAT_146ab0058 != 0;
    bVar44 = DAT_146ab0060 != 0;
    bVar45 = DAT_146ab0068 != 0;
    bVar46 = DAT_146ab0070 != 0;
    bVar47 = DAT_146ab0078 != 0;
    bVar48 = DAT_146ab0080 != 0;
    bVar49 = DAT_146ab0088 != 0;
    bVar50 = DAT_146ab0090 != 0;
    bVar51 = DAT_146ab0098 != 0;
    bVar52 = DAT_146ab00a0 != 0;
    bVar53 = DAT_146ab00a8 != 0;
    bVar54 = DAT_146ab00b0 != 0;
    bVar55 = DAT_146ab00b8 != 0;
    bVar56 = DAT_146ab00c0 != 0;
    bVar57 = DAT_146ab00c8 != 0;
    bVar58 = DAT_146ab00d0 != 0;
    bVar59 = DAT_146ab00d8 != 0;
    bVar60 = DAT_146ab00e0 != 0;
    bVar61 = DAT_146ab00e8 != 0;
    bVar62 = DAT_146ab00f0 != 0;
    bVar63 = DAT_146ab00f8 != 0;
    bVar64 = DAT_146ab0100 != 0;
    bVar65 = DAT_146ab0108 != 0;
    bVar66 = DAT_146ab0110 != 0;
    bVar67 = DAT_146ab0118 != 0;
    bVar68 = DAT_146ab0120 != 0;
    bVar69 = DAT_146ab0128 != 0;
    bVar70 = DAT_146ab0130 != 0;
    bVar71 = DAT_146ab0138 != 0;
    bVar72 = DAT_146ab0140 != 0;
    bVar73 = DAT_146ab0148 != 0;
    bVar74 = DAT_146ab0150 != 0;
    bVar75 = DAT_146ab0158 != 0;
    bVar76 = DAT_146ab0160 != 0;
    bVar77 = DAT_146ab0168 != 0;
    bVar78 = DAT_146ab0170 != 0;
    bVar79 = DAT_146ab0178 != 0;
    bVar80 = DAT_146ab0180 != 0;
    bVar81 = DAT_146ab0188 != 0;
    bVar82 = DAT_146ab0190 != 0;
    bVar83 = DAT_146ab0198 != 0;
    bVar84 = DAT_146ab01a0 != 0;
    bVar85 = DAT_146ab01a8 != 0;
    bVar86 = DAT_146ab01b0 != 0;
    bVar87 = DAT_146ab01b8 != 0;
    bVar88 = DAT_146ab01c0 != 0;
    bVar89 = DAT_146ab01c8 != 0;
    bVar90 = DAT_146ab01d0 != 0;
    bVar91 = DAT_146ab01d8 != 0;
    bVar92 = DAT_146ab01e0 != 0;
    bVar93 = DAT_146ab01e8 != 0;
    bVar94 = DAT_146ab01f0 != 0;
    bVar95 = DAT_146ab01f8 != 0;
    bVar96 = DAT_146ab0200 != 0;
    bVar97 = DAT_146ab0208 != 0;
    bVar98 = DAT_146ab0210 != 0;
    bVar99 = DAT_146ab0218 != 0;
    bVar100 = DAT_146ab0220 != 0;
    bVar101 = DAT_146ab0228 != 0;
    bVar102 = DAT_146ab0230 != 0;
    bVar103 = DAT_146ab0238 != 0;
    bVar104 = DAT_146ab0240 != 0;
    bVar105 = DAT_146ab0248 != 0;
    bVar106 = DAT_146ab0250 != 0;
    bVar107 = DAT_146ab0258 != 0;
    bVar108 = DAT_146ab0260 != 0;
    bVar109 = DAT_146ab0268 != 0;
    bVar110 = DAT_146ab0270 != 0;
    bVar111 = DAT_146ab0278 != 0;
    bVar112 = DAT_146ab0280 != 0;
    bVar113 = DAT_146ab0288 != 0;
    bVar114 = DAT_146ab0290 != 0;
    bVar115 = DAT_146ab0298 != 0;
    bVar116 = DAT_146ab02a0 != 0;
    bVar117 = DAT_146ab02a8 != 0;
    bVar118 = DAT_146ab02b0 != 0;
    bVar119 = DAT_146ab02b8 != 0;
    bVar120 = DAT_146ab02c0 != 0;
    bVar121 = DAT_146ab02c8 != 0;
    bVar122 = DAT_146ab02d0 != 0;
    bVar123 = DAT_146ab02d8 != 0;
    bVar124 = DAT_146ab02e0 != 0;
    bVar125 = DAT_146ab02e8 != 0;
    bVar126 = DAT_146ab02f0 != 0;
    bVar127 = DAT_146ab02f8 != 0;
    bVar128 = DAT_146ab0300 != 0;
    bVar129 = DAT_146ab0308 != 0;
    bVar130 = DAT_146ab0310 != 0;
    bVar131 = DAT_146ab0318 != 0;
    bVar132 = DAT_146ab0320 != 0;
    bVar133 = DAT_146ab0328 != 0;
    bVar134 = DAT_146ab0330 != 0;
    bVar135 = DAT_146ab0338 != 0;
    bVar136 = DAT_146ab0340 != 0;
    bVar137 = _DAT_146ab0348 != 0;
    DAT_146ab0350 = (*DAT_146aafeb8)(param_1,"vkDestroySurfaceKHR");
    DAT_146ab0358 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
    DAT_146ab0360 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    DAT_146ab0368 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
    DAT_146ab0370 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
    if ((DAT_146ab0370 != 0) &&
       (DAT_146ab0368 != 0 &&
        (DAT_146ab0360 != 0 &&
        (DAT_146ab0358 != 0 &&
        (DAT_146ab0350 != 0 &&
        (bVar137 &&
        (bVar136 &&
        (bVar135 &&
        (bVar134 &&
        (bVar133 &&
        (bVar132 &&
        (bVar131 &&
        (bVar130 &&
        (bVar129 &&
        (bVar128 &&
        (bVar127 &&
        (bVar126 &&
        (bVar125 &&
        (bVar124 &&
        (bVar123 &&
        (bVar122 &&
        (bVar121 &&
        (bVar120 &&
        (bVar119 &&
        (bVar118 &&
        (bVar117 &&
        (bVar116 &&
        (bVar115 &&
        (bVar114 &&
        (bVar113 &&
        (bVar112 &&
        (bVar111 &&
        (bVar110 &&
        (bVar109 &&
        (bVar108 &&
        (bVar107 &&
        (bVar106 &&
        (bVar105 &&
        (bVar104 &&
        (bVar103 &&
        (bVar102 &&
        (bVar101 &&
        (bVar100 &&
        (bVar99 &&
        (bVar98 &&
        (bVar97 &&
        (bVar96 &&
        (bVar95 &&
        (bVar94 &&
        (bVar93 &&
        (bVar92 &&
        (bVar91 &&
        (bVar90 &&
        (bVar89 &&
        (bVar88 &&
        (bVar87 &&
        (bVar86 &&
        (bVar85 &&
        (bVar84 &&
        (bVar83 &&
        (bVar82 &&
        (bVar81 &&
        (bVar80 &&
        (bVar79 &&
        (bVar78 &&
        (bVar77 &&
        (bVar76 &&
        (bVar75 &&
        (bVar74 &&
        (bVar73 &&
        (bVar72 &&
        (bVar71 &&
        (bVar70 &&
        (bVar69 &&
        (bVar68 &&
        (bVar67 &&
        (bVar66 &&
        (bVar65 &&
        (bVar64 &&
        (bVar63 &&
        (bVar62 &&
        (bVar61 &&
        (bVar60 &&
        (bVar59 &&
        (bVar58 &&
        (bVar57 &&
        (bVar56 &&
        (bVar55 &&
        (bVar54 &&
        (bVar53 &&
        (bVar52 &&
        (bVar51 &&
        (bVar50 &&
        (bVar49 &&
        (bVar48 &&
        (bVar47 &&
        (bVar46 &&
        (bVar45 &&
        (bVar44 &&
        (bVar43 &&
        (bVar42 &&
        (bVar41 &&
        (bVar40 &&
        (bVar39 &&
        (bVar38 &&
        (bVar37 &&
        (bVar36 &&
        (bVar35 &&
        (bVar34 &&
        (bVar33 &&
        (bVar32 &&
        (bVar31 &&
        (bVar30 &&
        (bVar29 &&
        (bVar28 &&
        (bVar27 &&
        (bVar26 &&
        (bVar25 &&
        (bVar24 &&
        (bVar23 &&
        (bVar22 &&
        (bVar21 &&
        (bVar20 &&
        (bVar19 &&
        (bVar18 &&
        (bVar17 &&
        (bVar16 &&
        (bVar15 &&
        (bVar14 &&
        (bVar13 &&
        (bVar12 &&
        (bVar11 &&
        (bVar10 &&
        (bVar9 && (bVar8 && (bVar7 && (bVar6 && (bVar5 && (bVar4 && (bVar3 && (bVar2 && bVar1)))))))
        ))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
        )))))))))))))))))))))))))))))))))))))))))) {
      _DAT_146ab0378 = (*DAT_146aafeb8)(param_1,"vkCreateSharedSwapchainsKHR");
      _DAT_146ab0380 = (*DAT_146aafeb8)(param_1,"vkCreateSamplerYcbcrConversionKHR");
      _DAT_146ab0388 = (*DAT_146aafeb8)(param_1,"vkDestroySamplerYcbcrConversionKHR");
      DAT_146ab0390 = (*DAT_146aafeb8)(param_1,"vkCreateWin32SurfaceKHR");
      DAT_146ab0398 = (*DAT_146aafeb8)(param_1,"vkGetPhysicalDeviceProperties2KHR");
      _DAT_146ab03a0 = (*DAT_146aafeb8)(param_1,"vkGetImageMemoryRequirements2KHR");
      DAT_146ab03a8 = (*DAT_146aafeb8)(param_1,"vkCmdWriteBufferMarkerAMD");
      DAT_146ab03b0 = (*DAT_146aafeb8)(param_1,"vkCmdSetCheckpointNV");
      DAT_146ab03b8 = (*DAT_146aafeb8)(param_1,"vkGetQueueCheckpointDataNV");
      _DAT_146ab03c0 = (*DAT_146aafeb8)(param_1,"vkGetBufferMemoryRequirements2KHR");
      return 1;
    }
    if (DAT_146ab0418 != (HMODULE)0x0) {
      FreeLibrary(DAT_146ab0418);
      DAT_146ab0418 = (HMODULE)0x0;
    }
  }
  return 0;
}



// FUNCTION 141e61d10 FUN_141e61d10 body=555 status=ok
// SIG undefined FUN_141e61d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_141e61d10(void)

{
  DAT_146ab0418 = LoadLibraryW(L"vulkan-1.dll");
  if (DAT_146ab0418 != (HMODULE)0x0) {
    DAT_146aafeb0 = FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkCreateInstance");
    DAT_146aafeb8 = FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkGetInstanceProcAddr");
    DAT_146aafec0 = FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkGetDeviceProcAddr");
    DAT_146aafec8 =
         FWindowsPlatformProcess::GetDllExport
                   (DAT_146ab0418,L"vkEnumerateInstanceExtensionProperties");
    DAT_146aafed0 =
         FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkEnumerateInstanceLayerProperties");
    if ((DAT_146aafed0 != 0) &&
       (DAT_146aafec8 != 0 && (DAT_146aafec0 != 0 && (DAT_146aafeb8 != 0 && DAT_146aafeb0 != 0)))) {
      _DAT_146aafed8 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceDisplayPropertiesKHR");
      _DAT_146aafee0 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
      _DAT_146aafee8 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetDisplayPlaneSupportedDisplaysKHR");
      _DAT_146aafef0 =
           FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkGetDisplayModePropertiesKHR");
      _DAT_146aafef8 =
           FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkCreateDisplayModeKHR");
      _DAT_146aaff00 =
           FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkGetDisplayPlaneCapabilitiesKHR");
      DAT_146ab0350 = FWindowsPlatformProcess::GetDllExport(DAT_146ab0418,L"vkDestroySurfaceKHR");
      DAT_146ab0358 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceSurfaceSupportKHR");
      DAT_146ab0360 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
      DAT_146ab0368 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceSurfaceFormatsKHR");
      DAT_146ab0370 =
           FWindowsPlatformProcess::GetDllExport
                     (DAT_146ab0418,L"vkGetPhysicalDeviceSurfacePresentModesKHR");
      return 1;
    }
    if (DAT_146ab0418 != (HMODULE)0x0) {
      FreeLibrary(DAT_146ab0418);
      DAT_146ab0418 = (HMODULE)0x0;
    }
  }
  return 0;
}



// FUNCTION 141e61f70 Matches body=199 status=ok
// SIG undefined Matches(void)

undefined8 FVulkanFramebuffer::Matches(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar1 = param_2 + 0x18;
  if (*(int *)(param_1 + 0x48) == (int)*plVar1) {
    if ((longlong *)param_2[0x32] != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0xd0);
      lVar4 = (**(code **)(*(longlong *)param_2[0x32] + 0x48))();
      if (lVar3 != *(longlong *)(lVar4 + 0x18)) goto LAB_141e6201c;
    }
    iVar6 = 0;
    if (0 < (int)*plVar1) {
      plVar2 = param_2 + 0x31;
      plVar7 = (longlong *)(param_1 + 0x50);
      do {
        if (((char)*plVar2 != '\0') && ((longlong *)param_2[0x19] != (longlong *)0x0)) {
          lVar3 = plVar7[8];
          lVar4 = (**(code **)(*(longlong *)param_2[0x19] + 0x48))();
          if (lVar3 != *(longlong *)(lVar4 + 0x18)) goto LAB_141e6201c;
        }
        if ((longlong *)*param_2 != (longlong *)0x0) {
          lVar3 = *plVar7;
          lVar4 = (**(code **)(*(longlong *)*param_2 + 0x48))();
          if (lVar3 != *(longlong *)(lVar4 + 0x18)) goto LAB_141e6201c;
          plVar7 = plVar7 + 1;
        }
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 3;
      } while (iVar6 < (int)*plVar1);
    }
    uVar5 = 1;
  }
  else {
LAB_141e6201c:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 141e62080 FUN_141e62080 body=76 status=ok
// SIG undefined FUN_141e62080(void)

void FUN_141e62080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x148)) {
    iVar1 = *(int *)(param_1 + 0x148) + -1;
    *(int *)(param_1 + 0x148) = iVar1;
    if ((*(byte *)(*(longlong *)(param_1 + 0xe0) + 0x18d0) & 0x40) != 0) {
      (*DAT_146ab03a8)(param_2,0x2000,param_3,0,iVar1);
    }
  }
  return;
}



// FUNCTION 141e620d0 FUN_141e620d0 body=1312 status=ok
// SIG undefined FUN_141e620d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141e620d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 local_100;
  uint local_f8;
  uint local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  LOCK();
  *(undefined1 *)(param_1 + 0x104) = param_6;
  UNLOCK();
  bVar5 = false;
  if ((DAT_1464c9490 == 1) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    iVar7 = FUN_141e404d0(*(undefined8 *)(param_1 + 0xf0),param_1 + 0x108);
    *(int *)(param_1 + 0xe8) = iVar7;
    if (iVar7 == -1) {
      bVar5 = true;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 0x30);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 0x34);
      if (*(uint *)(param_1 + 0xd8) <= uVar1) {
        uVar1 = *(uint *)(param_1 + 0xd8);
      }
      if (*(uint *)(param_1 + 0xdc) <= uVar2) {
        uVar2 = *(uint *)(param_1 + 0xdc);
      }
      iVar7 = FTransitionAndLayoutManager::FindOrAddLayout
                        (param_2 + 0x2e0,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x80),0);
      FUN_141e4e4c0(param_2,L"CopyImageToBackBuffer",DAT_1464aa740);
      local_100 = *(undefined4 *)(param_1 + 0xdc);
      local_108 = (undefined4 *)CONCAT44(local_108._4_4_,*(undefined4 *)(param_1 + 0xd8));
      local_f8 = uVar1;
      local_f0 = uVar2;
      CopyImageToBackBuffer
                (param_3,iVar7 == 5,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x80),
                 *(undefined8 *)(param_1 + 0x20 + (ulonglong)*(uint *)(param_1 + 0xe8) * 8));
      FUN_141e4e430(param_2);
    }
  }
  else {
    puVar10 = (undefined4 *)
              FTransitionAndLayoutManager::FindOrAddLayoutRW
                        (param_2 + 0x2e0,
                         *(undefined8 *)(param_1 + 0x20 + (ulonglong)*(uint *)(param_1 + 0xe8) * 8),
                         0);
    local_d0 = 1;
    uStack_c8 = 1;
    local_58 = 1;
    local_68 = 1;
    uStack_64 = 0;
    uStack_60 = 1;
    uStack_5c = 0;
    uVar8 = FUN_141e48650(*puVar10);
    local_108 = &local_68;
    VulkanRHI::ImagePipelineBarrier
              (*(undefined8 *)(param_3 + 0x40),
               *(undefined8 *)(param_1 + 0x20 + (ulonglong)*(uint *)(param_1 + 0xe8) * 8),uVar8,5);
    *puVar10 = 0;
  }
  FUN_141e253a0(param_3);
  if (bVar5) {
    FUN_141e54d20(param_4,param_3,0,0);
    FUN_141e66680(param_1,*(undefined8 *)(param_1 + 0xf8),1);
    FUN_141e2fe70(*(undefined8 *)(param_1 + 0x18));
    uVar13 = FUN_141e2a740(*(undefined8 *)(param_1 + 0x18));
    return uVar13 & 0xffffffffffffff00;
  }
  if (DAT_1464c9490 == 1) {
    FVulkanCmdBuffer::AddWaitSemaphore(param_3,0x2000,*(undefined8 *)(param_1 + 0x108));
  }
  local_e0 = *(undefined8 *)
              (*(longlong *)(param_1 + 0x38 + (ulonglong)*(uint *)(param_1 + 0xe8) * 8) + 0x18);
  FUN_141e54d20(param_4,param_3,1,&local_e0);
  plVar3 = *(longlong **)(param_1 + 0x110);
  cVar6 = '\x01';
  local_e8[0] = 0;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,local_e8);
  }
  uVar13 = 0;
  if ((cVar6 == '\0') || ((DAT_1464c9490 != 1 && (*(longlong *)(param_1 + 0x98) == 0)))) {
LAB_141e623e2:
    if (plVar3 != (longlong *)0x0) goto LAB_141e624ca;
  }
  else {
    uStack_d8 = param_5;
    local_88 = 0;
    local_78 = 0;
    local_e0 = param_4;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar11 + 1) = (undefined4)local_e0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = local_e0._4_4_;
      *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_d8;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_d8._4_4_;
    }
    local_b8[0] = &LAB_141e5b7d0;
    cVar6 = FUN_141e5dbb0(param_1,local_b8);
    if (cVar6 == '\0') {
      LowLevelFatalErrorHandler("Unknown",0x396,L"Swapchain present failed!");
      FDebug::AssertFailed(&DAT_144ea51cf,"Unknown",0x396,L"Swapchain present failed!");
    }
    uVar13 = (ulonglong)(cVar6 != '\0');
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x20))();
      goto LAB_141e623e2;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab0500) && (_Init_thread_header(&DAT_146ab0500), DAT_146ab0500 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04d8);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab04d8,4000);
    atexit((_func_5014 *)&LAB_143e9e0c0);
    _Init_thread_footer(&DAT_146ab0500);
  }
  BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04d8);
  if (BVar9 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04d8);
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x2c) == '\x04')) &&
      (*(longlong *)(param_1 + 0x120) == *(longlong *)(lVar4 + 0x98))) && (DAT_146aafbf8 == 0)) {
    FUN_141e309b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + 0xa8) + 0x58),
                  *(longlong *)(param_1 + 0x118),0x41200000);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04d8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1418);
  BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  if (BVar9 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar4 + 0x40);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar4 + 0x48);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
LAB_141e624ca:
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18b0) + 0x2d8);
  if (*(longlong *)(lVar4 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar4,0,0);
  }
  lVar12 = *(longlong *)(lVar4 + 0x70);
  if (lVar12 != 0) {
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar4,0,0);
      lVar12 = *(longlong *)(lVar4 + 0x70);
    }
    if (1 < (byte)(*(char *)(lVar12 + 0x2c) - 1U)) {
      FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(lVar4);
    }
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(int *)(DAT_146aafea8 + 0x30) = *(int *)(DAT_146aafea8 + 0x30) + 1;
  return uVar13;
}



// FUNCTION 141e625f0 ProcessPendingUBFreesNoLock body=404 status=ok
// SIG undefined ProcessPendingUBFreesNoLock(void)

void VulkanRHI::FResourceHeapManager::ProcessPendingUBFreesNoLock(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (param_2 != '\0') {
    lVar4 = (longlong)*(int *)(param_1 + 0x158);
    lVar7 = 0;
    if (0 < lVar4) {
      do {
        puVar3 = *(undefined8 **)(lVar7 + *(longlong *)(param_1 + 0x150));
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        lVar7 = lVar7 + 0x10;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(param_1 + 0x15c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x150,0);
    }
    DAT_146ab0484 = 0;
    return;
  }
  if (DAT_146ab0484 <= DAT_1464aaa90) {
    uVar5 = 0;
    iVar1 = *(int *)(param_1 + 0x158);
    iVar2 = DAT_1464aaa90 - 10;
    uVar9 = 0;
    if (0 < iVar1) {
      uVar8 = uVar5;
      uVar10 = uVar5;
      do {
        uVar9 = (uint)uVar10;
        uVar10 = *(ulonglong *)(uVar5 + 8 + *(longlong *)(param_1 + 0x150));
        if ((ulonglong)(longlong)iVar2 <= uVar10) {
          DAT_146ab0484 = (int)uVar10 + 0xb;
          break;
        }
        puVar3 = *(undefined8 **)(uVar5 + *(longlong *)(param_1 + 0x150));
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
        uVar5 = uVar5 + 0x10;
      } while ((longlong)uVar8 < (longlong)iVar1);
    }
    iVar2 = iVar1 - uVar9;
    if ((0 < iVar2) && (iVar2 != iVar1)) {
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x150),
                 (void *)((longlong)(int)uVar9 * 0x10 + (longlong)*(void **)(param_1 + 0x150)),
                 (longlong)iVar2 << 4);
    }
    iVar1 = *(int *)(param_1 + 0x158);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x158) = iVar2;
      iVar6 = iVar2 - iVar1;
      if (*(int *)(param_1 + 0x15c) < iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x150),iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x150));
      if (iVar6 != 0) {
        do {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3 = puVar3 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return;
      }
    }
    else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
      *(int *)(param_1 + 0x158) = iVar2;
    }
  }
  return;
}



// FUNCTION 141e62790 FUN_141e62790 body=640 status=ok
// SIG undefined FUN_141e62790(void)

void FUN_141e62790(longlong param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  undefined1 local_48 [8];
  undefined4 *local_40;
  undefined8 *local_38;
  int *local_30;
  undefined4 **local_28;
  
  if ((*(int *)(param_1 + 0x28) < 0) || (*(int *)(param_1 + 0x148) < *(int *)(param_1 + 0x28))) {
    local_res8[0] = FCrc::StrCrc32<wchar_t>(param_4,0);
    plVar1 = (longlong *)(param_1 + 0xf0);
    if (10000 < *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x124)) {
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Empty(plVar1,10000);
      local_40 = &DAT_146ab03cc;
      local_38 = &DAT_1464c9710;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_>(plVar1,local_48,&local_40,0);
    }
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
      lVar6 = *(longlong *)(param_1 + 0x130);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        lVar6 = param_1 + 0x128;
      }
      iVar2 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)local_res8[0])
                               * 4);
      if (iVar2 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar2 * 0x20 + *plVar1);
          if (*piVar4 == local_res8[0]) {
            if (iVar2 != -1) goto LAB_141e628a2;
            break;
          }
          iVar2 = piVar4[6];
        } while (iVar2 != -1);
      }
    }
    piVar4 = (int *)0x0;
LAB_141e628a2:
    piVar3 = piVar4 + 2;
    if (piVar4 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 == (int *)0x0) {
      local_40 = (undefined4 *)0x0;
      local_38 = (undefined8 *)0x0;
      if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_4[lVar6] != 0);
        uVar5 = (int)lVar6 + 1;
        local_38 = (undefined8 *)(ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
        }
        FGenericPlatformString::Memcpy(local_40,param_4,(longlong)(int)uVar5 * 2);
      }
      local_30 = local_res8;
      local_28 = &local_40;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(plVar1,local_48,&local_30,0);
      if (local_40 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    local_res8[0] = DAT_146ab03cc;
  }
  plVar1 = (longlong *)(param_1 + 0x140);
  iVar2 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(int *)(*plVar1 + (longlong)iVar2 * 4) = local_res8[0];
  lVar6 = *plVar1;
  lVar7 = (longlong)*(int *)(param_1 + 0x148);
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0xe0) + 0x18d0);
  if ((uVar5 & 0x40) == 0) {
    if ((char)uVar5 < '\0') {
      (*DAT_146ab03b0)(param_2,*(undefined4 *)(lVar6 + -4 + lVar7 * 4));
    }
    return;
  }
  (*DAT_146ab03a8)(param_2,0x2000,param_3,0,*(int *)(param_1 + 0x148));
  (*DAT_146ab03a8)(param_2,0x2000,param_3,lVar7 << 2,*(undefined4 *)(lVar6 + -4 + lVar7 * 4));
  return;
}



// FUNCTION 141e62a10 FUN_141e62a10 body=322 status=ok
// SIG undefined FUN_141e62a10(void)

void FUN_141e62a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_1464c9490 != 1) {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x20);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    DAT_146ab6e80 = puVar3 + 1;
    *DAT_146ab6e80 = 0;
    *puVar3 = &PTR_LAB_144eb2ba8;
    puVar3[2] = param_2;
  }
  if (DAT_146ab6383 != '\0') {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x20);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    DAT_146ab6e80 = puVar3 + 1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *DAT_146ab6e80 = 0;
    *puVar3 = &PTR_LAB_144eb2b50;
    puVar3[2] = uVar1;
    return;
  }
  FUN_141e2da80(*(longlong *)(param_1 + 0x70) + 0x3b0,0,0);
  return;
}



// FUNCTION 141e62b60 FUN_141e62b60 body=81 status=ok
// SIG undefined FUN_141e62b60(void)

undefined8 * FUN_141e62b60(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler("Unknown",0x3c2,L"RHIAsyncCreateTexture2D is not supported");
  FDebug::AssertFailed
            ((longlong)L"VulkanValidation.cache" + 0x2f,"Unknown",0x3c2,
             L"RHIAsyncCreateTexture2D is not supported");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141e62bc0 FUN_141e62bc0 body=81 status=ok
// SIG undefined FUN_141e62bc0(void)

undefined8 * FUN_141e62bc0(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler("Unknown",0x3d0,L"RHIAsyncCreateTexture2DArray is not supported");
  FDebug::AssertFailed(L"","Unknown",0x3d0,L"RHIAsyncCreateTexture2DArray is not supported");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141e62c20 FUN_141e62c20 body=270 status=ok
// SIG undefined FUN_141e62c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141e62c20(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar3;
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
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    lVar2 = FVulkanTexture2D::FVulkanTexture2D
                      (lVar1,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_3 + 0x3c),param_5
                       ,param_6,param_4,CONCAT44(uVar3,*(undefined4 *)(param_3 + 0x38)),
                       *(undefined4 *)(param_3 + 0x40),&local_58);
  }
  FUN_141e5d0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0),param_3,lVar2,param_4,
                param_5,param_6,param_7);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e62d30 FUN_141e62d30 body=279 status=ok
// SIG undefined FUN_141e62d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141e62d30(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar3;
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
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar2 = 0;
  local_58 = 1;
  local_44 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_38 = 0;
  local_30 = 0;
  lVar1 = operator_new(0x118);
  if (lVar1 != 0) {
    lVar2 = FUN_141e58a50(lVar1,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_3 + 0x3c),
                          param_6,param_7,param_4,param_5,
                          CONCAT44(uVar3,*(undefined4 *)(param_3 + 0x40)),&local_68);
  }
  FUN_141e5d680(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0),param_3,lVar2,param_4,
                param_5,param_6,param_7,param_8);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e62e50 FUN_141e62e50 body=112 status=ok
// SIG undefined FUN_141e62e50(void)

undefined8
FUN_141e62e50(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [40];
  
  puVar2 = (undefined8 *)
           FUN_141e5eb40(local_28,*(undefined8 *)(param_1 + 0x70),1,param_2,param_3,1,param_4,
                         param_5,param_6,param_7);
  uVar1 = *puVar2;
  *param_8 = (int)puVar2[1];
  return uVar1;
}



// FUNCTION 141e62ec0 FUN_141e62ec0 body=113 status=ok
// SIG undefined FUN_141e62ec0(void)

undefined8
FUN_141e62ec0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [40];
  
  puVar2 = (undefined8 *)
           FUN_141e5eb40(local_28,*(undefined8 *)(param_1 + 0x70),2,param_2,param_3,param_4,param_5,
                         param_6,1,param_7);
  uVar1 = *puVar2;
  *param_8 = (int)puVar2[1];
  return uVar1;
}



// FUNCTION 141e62f40 FUN_141e62f40 body=105 status=ok
// SIG undefined FUN_141e62f40(void)

undefined8
FUN_141e62f40(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [40];
  
  puVar2 = (undefined8 *)
           FUN_141e5eb40(local_28,*(undefined8 *)(param_1 + 0x70),3,param_2,param_2,param_3,param_4,
                         param_5,1,param_6);
  uVar1 = *puVar2;
  *param_7 = (int)puVar2[1];
  return uVar1;
}



// FUNCTION 141e62fb0 FUN_141e62fb0 body=102 status=ok
// SIG undefined FUN_141e62fb0(void)

undefined8
FUN_141e62fb0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [40];
  
  puVar2 = (undefined8 *)
           FUN_141e5eb40(local_28,*(undefined8 *)(param_1 + 0x70),3,param_2,param_2,1,param_3,
                         param_4,1,param_5);
  uVar1 = *puVar2;
  *param_6 = (int)puVar2[1];
  return uVar1;
}



// FUNCTION 141e63020 RHICalibrateTimers body=50 status=ok
// SIG undefined RHICalibrateTimers(void)

void FVulkanDynamicRHI::RHICalibrateTimers(void)

{
  char cVar1;
  
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(&DAT_146ab6e78);
    if (cVar1 != '\0') {
      FRHICommandListImmediate::UnStallRHIThread(&DAT_146ab6e78);
      return;
    }
  }
  return;
}



// FUNCTION 141e63060 FUN_141e63060 body=208 status=ok
// SIG undefined FUN_141e63060(void)

void FUN_141e63060(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar2 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x70);
  if (*(char *)(lVar2 + 0x2c) == '\x02') {
    FTransitionAndLayoutManager::EndEmulatedRenderPass(param_1 + 0x2e0,lVar2);
    if (DAT_146aaf890 != 0) {
      FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
      FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                (*(undefined8 *)(param_1 + 0x2d8));
      lVar2 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar2,0,0);
      }
      lVar2 = *(longlong *)(lVar2 + 0x70);
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    (*DAT_146ab0290)(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar1 + 0x70),
                     *(undefined4 *)(lVar1 + 0x78),*(undefined4 *)(lVar1 + 0x18),*param_3);
  }
  return;
}



// FUNCTION 141e63130 RHIComputeMemorySize body=33 status=ok
// SIG undefined RHIComputeMemorySize(void)

undefined4 FVulkanDynamicRHI::RHIComputeMemorySize(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  return *(undefined4 *)(lVar1 + 0x40);
}



// FUNCTION 141e63160 FUN_141e63160 body=1248 status=ok
// SIG undefined FUN_141e63160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e63160(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 *local_118;
  undefined8 local_108;
  undefined8 *local_100;
  int local_f8;
  int iStack_f4;
  longlong local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int *local_b0;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar7 = (**(code **)(*param_2 + 0x48))(param_2);
  lVar8 = (**(code **)(*param_3 + 0x48))(param_3);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x380,&local_e0,*(undefined8 *)(lVar7 + 0x18));
  uVar13 = 0;
  uVar9 = uVar13;
  if (local_e0 != -1) {
    uVar9 = *(longlong *)(param_1 + 0x380) + (longlong)local_e0 * 0x18;
  }
  local_dc = *(undefined4 *)(uVar9 + 8);
  local_d4 = *(uint *)(lVar8 + 0x78) & 6;
  local_b0 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                              (param_1 + 0x2e0,*(undefined8 *)(lVar8 + 0x18),0);
  lVar12 = *(longlong *)(param_1 + 0x2d8);
  local_d8 = *(uint *)(lVar8 + 0x38) >> 0x12 & 0xffffff01;
  if (*(longlong *)(lVar12 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar12,0,0);
  }
  local_d0 = *(longlong *)(lVar12 + 0x70);
  iVar10 = 1;
  local_c0 = *(undefined8 *)(local_d0 + 0x40);
  local_108 = 0;
  local_100 = (undefined8 *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  uVar1 = *(undefined4 *)(lVar7 + 0x78);
  uVar2 = *(undefined8 *)(lVar7 + 0x18);
  local_f8 = 1;
  iStack_f4 = 0;
  TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_100,0);
  iVar4 = local_f8;
  *local_100 = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  *(undefined4 *)local_100 = 0x2d;
  local_100[5] = uVar2;
  *(undefined4 *)(local_100 + 6) = uVar1;
  *(undefined4 *)(local_100 + 7) = 1;
  *(undefined4 *)(local_100 + 8) = 1;
  local_100[4] = 0xffffffffffffffff;
  local_e0 = *(int *)(lVar8 + 0x78);
  lVar12 = (longlong)local_f8;
  local_c8 = *(undefined8 *)(lVar8 + 0x18);
  local_f8 = local_f8 + 1;
  if (iStack_f4 < local_f8) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_100,iVar4);
  }
  lVar11 = lVar12 * 0x48;
  local_100[lVar12 * 9] = 0;
  local_100[lVar12 * 9 + 1] = 0;
  local_100[lVar12 * 9 + 2] = 0;
  local_100[lVar12 * 9 + 3] = 0;
  local_100[lVar12 * 9 + 4] = 0;
  local_100[lVar12 * 9 + 5] = 0;
  local_100[lVar12 * 9 + 6] = 0;
  local_100[lVar12 * 9 + 7] = 0;
  local_100[lVar12 * 9 + 8] = 0;
  local_100[lVar12 * 9 + 5] = local_c8;
  *(int *)(local_100 + lVar12 * 9 + 6) = local_e0;
  *(undefined4 *)(local_100 + lVar12 * 9) = 0x2d;
  *(undefined4 *)(local_100 + lVar12 * 9 + 7) = 1;
  *(undefined4 *)(local_100 + lVar12 * 9 + 8) = 1;
  local_100[lVar12 * 9 + 4] = 0xffffffffffffffff;
  *(uint *)((longlong)local_100 + 0x34) = param_4[3];
  *(uint *)(local_100 + 7) = param_4[4];
  *(uint *)((longlong)local_100 + 0x3c) = param_4[5];
  *(uint *)(local_100 + 8) = param_4[7];
  local_b8 = lVar11;
  local_dc = FUN_141e48650(local_dc);
  puVar3 = local_100;
  uVar5 = FUN_141e26f50(local_dc,local_100 + 2,local_100 + 3);
  *(undefined4 *)((longlong)puVar3 + 0x14) = 0x800;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 6;
  *(uint *)((longlong)local_100 + lVar11 + 0x34) = param_4[3];
  *(uint *)(local_100 + lVar12 * 9 + 7) = param_4[4];
  *(uint *)((longlong)local_100 + lVar11 + 0x3c) = param_4[6];
  *(uint *)(local_100 + lVar12 * 9 + 8) = param_4[7];
  *(undefined4 *)(local_100 + lVar12 * 9 + 2) = 0;
  *(undefined4 *)(local_100 + lVar12 * 9 + 3) = 0;
  *(undefined4 *)(lVar11 + 0x14 + (longlong)local_100) = 0x1000;
  *(undefined4 *)(lVar11 + 0x1c + (longlong)local_100) = 7;
  local_108 = CONCAT44(local_108._4_4_,(uint)local_108 | uVar5) | 0x100000000001;
  if ((0 < local_f8) || (0 < (int)local_e8)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_108,local_d0,1);
  }
  uVar2 = local_c0;
  local_70 = *param_4;
  local_90 = 0;
  local_74 = 0;
  if (((local_70 == DAT_1468b5ca8) && (param_4[1] == DAT_1468b5cac)) &&
     (param_4[2] == DAT_1468b5cb0)) {
    local_a4 = param_4[3];
    local_70 = *(uint *)(lVar7 + 0x28) >> ((byte)local_a4 & 0x1f);
    if (local_70 < 2) {
      local_70 = 1;
    }
    local_6c = *(uint *)(lVar7 + 0x2c) >> ((byte)local_a4 & 0x1f);
    if (local_6c < 2) {
      local_6c = 1;
    }
  }
  else {
    local_a4 = param_4[3];
    local_6c = param_4[1];
  }
  local_9c = param_4[7];
  local_98 = param_4[8];
  local_94 = param_4[9];
  local_68 = 1;
  local_a8 = *(undefined4 *)(lVar7 + 0x78);
  local_a0 = param_4[5];
  local_8c = *(undefined4 *)(lVar8 + 0x78);
  local_84 = param_4[6];
  local_88 = local_a4;
  local_80 = local_9c;
  local_7c = local_98;
  local_78 = local_94;
  if (param_4[4] != 0) {
    do {
      local_118 = &local_a8;
      local_120 = 1;
      local_128 = 7;
      (*DAT_146ab0268)(uVar2,*(undefined8 *)(lVar7 + 0x18),6,*(undefined8 *)(lVar8 + 0x18));
      local_70 = local_70 >> 1;
      if (local_70 < 2) {
        local_70 = 1;
      }
      local_6c = local_6c >> 1;
      if (local_6c < 2) {
        local_6c = 1;
      }
      local_a4 = local_a4 + 1;
      local_88 = local_88 + 1;
      uVar5 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar5;
      lVar11 = local_b8;
    } while (uVar5 < param_4[4]);
  }
  *(undefined4 *)(local_100 + 2) = 0x800;
  *(undefined4 *)(local_100 + 3) = 6;
  local_108._0_4_ = 0x1000;
  local_108._4_4_ = 0;
  uVar6 = FUN_141e26f50(local_dc,(longlong)local_100 + 0x14,(longlong)local_100 + 0x1c);
  uVar5 = local_d4;
  local_108._4_4_ = local_108._4_4_ | uVar6;
  *(undefined4 *)(lVar11 + 0x10 + (longlong)local_100) = 0x1000;
  *(undefined4 *)(lVar11 + 0x18 + (longlong)local_100) = 7;
  if ((char)local_d8 == '\0') {
    local_108 = local_108 | 0x1000;
    uVar6 = FUN_141e26f50((local_d4 != 0) + '\x06',(longlong)local_100 + lVar11 + 0x14,
                          (longlong)local_100 + lVar11 + 0x1c);
    local_108 = CONCAT44(local_108._4_4_ | uVar6,(uint)local_108);
    iVar10 = 5 - (uint)(uVar5 != 0);
  }
  else {
    *(undefined4 *)(lVar11 + 0x14 + (longlong)local_100) = 0x60;
    *(undefined4 *)(lVar11 + 0x1c + (longlong)local_100) = 1;
    local_108 = CONCAT44(local_108._4_4_,(uint)local_108) | 0x8000001000;
  }
  *local_b0 = iVar10;
  if ((0 < local_f8) || (0 < (int)local_e8)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_108,local_d0,1);
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_100 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e63640 FUN_141e63640 body=176 status=ok
// SIG undefined FUN_141e63640(void)

undefined8 * FUN_141e63640(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *param_3;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_144d83b00;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    puVar3[3] = uVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
    FUN_141e1ff80(puVar3 + 5,uVar2);
    *(undefined1 *)(puVar3 + 9) = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144eb29c8;
    puVar3[5] = &PTR_LAB_144eb29e0;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e636f0 RHICreateGPUFence body=114 status=ok
// SIG undefined RHICreateGPUFence(void)

undefined8 *
FVulkanDynamicRHI::RHICreateGPUFence(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar2[3] = uVar1;
    *puVar2 = &PTR_FUN_144eb2a08;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63770 FUN_141e63770 body=182 status=ok
// SIG undefined FUN_141e63770(void)

longlong * FUN_141e63770(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    lVar1 = operator_new(0x98);
    if (lVar1 != 0) {
      lVar1 = FVulkanShaderResourceView::FVulkanShaderResourceView
                        (lVar1,*(undefined8 *)(param_1 + 0x70),0,0,0,0x20);
      goto LAB_141e63802;
    }
  }
  else {
    uVar2 = 0x20;
    if (*(int *)(param_3 + 0x18) == 4) {
      uVar2 = 0x1c;
    }
    lVar1 = operator_new(0x98);
    if (lVar1 != 0) {
      lVar1 = FVulkanShaderResourceView::FVulkanShaderResourceView
                        (lVar1,*(undefined8 *)(param_1 + 0x70),param_3,param_3 + 0x28,
                         *(undefined4 *)(param_3 + 0x1c),uVar2);
      goto LAB_141e63802;
    }
  }
  lVar1 = 0;
LAB_141e63802:
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63830 FUN_141e63830 body=205 status=ok
// SIG undefined FUN_141e63830(void)

undefined8 * FUN_141e63830(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144eb29c0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = param_3;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x74) = *(undefined4 *)(param_3 + 0x1c);
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0xffffffff;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63900 FUN_141e63900 body=237 status=ok
// SIG undefined FUN_141e63900(void)

undefined8 * FUN_141e63900(longlong param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144eb29c0;
    puVar2[4] = 0;
    puVar2[5] = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x54) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
    *(uint *)(puVar2 + 10) = (uint)param_4;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0xffffffff;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e639f0 FUN_141e639f0 body=247 status=ok
// SIG undefined FUN_141e639f0(void)

undefined8 *
FUN_141e639f0(longlong param_1,undefined8 *param_2,longlong param_3,byte param_4,byte param_5,
             byte param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144eb29c0;
    *(uint *)(puVar2 + 4) = (uint)param_6;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    puVar2[5] = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(uint *)(puVar2 + 10) = (uint)param_4;
    *(uint *)((longlong)puVar2 + 0x54) = (uint)param_5;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0xffffffff;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63af0 FUN_141e63af0 body=159 status=ok
// SIG undefined FUN_141e63af0(void)

longlong *
FUN_141e63af0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x98);
  if (param_3 == 0) {
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FVulkanShaderResourceView::FVulkanShaderResourceView
                        (lVar1,*(undefined8 *)(param_1 + 0x70),0,0,0,param_5);
    }
  }
  else if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FVulkanShaderResourceView::FVulkanShaderResourceView
                      (lVar1,*(undefined8 *)(param_1 + 0x70),param_3,param_3 + 0x20,
                       *(undefined4 *)(param_3 + 0x18),param_5);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63b90 FUN_141e63b90 body=104 status=ok
// SIG undefined FUN_141e63b90(void)

undefined8 * FUN_141e63b90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_144eb29e8;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63c00 FUN_141e63c00 body=161 status=ok
// SIG undefined FUN_141e63c00(void)

longlong *
FUN_141e63c00(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x110);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FVulkanTexture2D::FVulkanTexture2D
                      (lVar1,*(undefined8 *)(param_1 + 0x70),param_5,param_3,param_4,param_6,param_7
                       ,param_8,param_9);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63cb0 FUN_141e63cb0 body=161 status=ok
// SIG undefined FUN_141e63cb0(void)

longlong *
FUN_141e63cb0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x118);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e58a50(lVar1,*(undefined8 *)(param_1 + 0x70),param_6,param_3,param_4,param_5,
                          param_7,param_8,param_9);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63d60 FUN_141e63d60 body=419 status=ok
// SIG undefined FUN_141e63d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e63d60(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,byte param_6,undefined4 param_7,undefined4 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar3 = (undefined8 *)operator_new(0x118);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    local_48 = *param_9;
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    puVar3[3] = 0;
    uVar2 = param_9[3];
    local_40 = 0;
    puVar3[4] = param_9[2];
    puVar3[5] = uVar2;
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_9 + 4);
    puVar3[9] = puVar3 + 10;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_7;
    *(undefined4 *)(puVar3 + 8) = param_8;
    *(undefined4 *)(puVar3 + 7) = 1;
    *(uint *)((longlong)puVar3 + 0x3c) = (uint)param_6;
    puVar3[10] = 0xc7efffffe0000000;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_144d839e8;
    *(undefined4 *)(puVar3 + 0xd) = param_5;
    *(undefined4 *)(puVar3 + 0xc) = param_3;
    *(undefined4 *)((longlong)puVar3 + 100) = param_4;
    local_34 = _DAT_1468b5d78;
    uStack_30 = uRam00000001468b5d7c;
    uStack_2c = uRam00000001468b5d80;
    uStack_28 = uRam00000001468b5d84;
    local_38 = 1;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_141e58cb0(puVar3 + 0xe,uVar1,2,param_6,param_3,param_4,param_5,1,param_7,1,param_8,&local_48
                 );
    *puVar3 = &PTR_FUN_144eb2828;
    puVar3[0xe] = &PTR_LAB_144eb2878;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63f10 FUN_141e63f10 body=163 status=ok
// SIG undefined FUN_141e63f10(void)

longlong *
FUN_141e63f10(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x110);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e595a0(lVar1,*(undefined8 *)(param_1 + 0x70),param_4,param_3,0,1,param_5,param_6,
                          *param_7,param_7 + 2);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e63fc0 FUN_141e63fc0 body=163 status=ok
// SIG undefined FUN_141e63fc0(void)

longlong *
FUN_141e63fc0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x110);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e595a0(lVar1,*(undefined8 *)(param_1 + 0x70),param_5,param_3,1,param_4,param_6,
                          param_7,*param_8,param_8 + 2);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e64070 FUN_141e64070 body=85 status=ok
// SIG undefined FUN_141e64070(void)

longlong * FUN_141e64070(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x110);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e59890(lVar1,*(undefined8 *)(param_1 + 0x70),param_3);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e640d0 FUN_141e640d0 body=604 status=ok
// SIG undefined FUN_141e640d0(void)

undefined8 *
FUN_141e640d0(longlong param_1,undefined8 *param_2,void *param_3,uint *param_4,undefined4 param_5)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar8;
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab0470) && (_Init_thread_header(&DAT_146ab0470), DAT_146ab0470 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Vulkan.UseRealUBs");
    lVar5 = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146ab0468 = lVar5;
    _Init_thread_footer(&DAT_146ab0470);
  }
  lVar5 = DAT_146ab0468;
  if (DAT_146ab0468 == 0) {
LAB_141e64170:
    uVar7 = 0;
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      lVar3 = 4;
      if (DVar2 == DAT_1468c21c0) goto LAB_141e64163;
    }
    else {
LAB_141e64163:
      lVar3 = 0;
    }
    if (*(int *)(lVar3 + lVar5) < 1) goto LAB_141e64170;
    uVar7 = 1;
  }
  cVar1 = FUN_141e308a0(uVar7);
  puVar4 = (undefined8 *)operator_new(0x48);
  if (cVar1 == '\0') {
    if (puVar4 != (undefined8 *)0x0) {
      FUN_141e59ad0(puVar4,param_4,param_3,param_5,(ulonglong)uVar8 << 0x20);
      *puVar4 = &PTR__scalar_deleting_destructor__144eb29a8;
      puVar4[7] = 0;
      puVar4[8] = 0;
      uVar8 = *param_4;
      if (uVar8 != 0) {
        *(uint *)(puVar4 + 8) = uVar8;
        if (0 < (int)uVar8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar4 + 7,0);
        }
        if (param_3 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop((void *)puVar4[7],param_3,(ulonglong)*param_4);
        }
      }
      goto LAB_141e64290;
    }
  }
  else if (puVar4 != (undefined8 *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    FUN_141e59ad0(puVar4,param_4,param_3,param_5,(ulonglong)uVar8 << 0x20);
    puVar4[7] = lVar5;
    *puVar4 = &PTR__scalar_deleting_destructor__144eb29b0;
    puVar4[8] = 0;
    uVar8 = *param_4;
    if (uVar8 != 0) {
      lVar5 = FUN_141e22d90(*(longlong *)(lVar5 + 0x248) + 0x248,uVar8,0x12,6,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                            ,0x16d);
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)*(uint *)(lVar5 + 0x14) +
                         *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x18) + 0x18)),
                 param_3,(ulonglong)uVar8);
      VulkanRHI::FBufferSuballocation::Flush(lVar5);
      puVar4[8] = lVar5;
    }
    goto LAB_141e64290;
  }
  puVar4 = (undefined8 *)0x0;
LAB_141e64290:
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e64330 FUN_141e64330 body=328 status=ok
// SIG undefined FUN_141e64330(void)

undefined8 * FUN_141e64330(longlong param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  
  puVar7 = (undefined8 *)operator_new(0x70);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = uVar3;
    *puVar7 = &PTR__scalar_deleting_destructor__144eb29b8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0xffffffff;
  }
  lVar8 = 0;
  *(uint *)(puVar7 + 0xd) = (uint)param_4;
  puVar4 = (undefined8 *)puVar7[0xb];
  puVar7[0xb] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar9 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar9) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar9) {
          uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar6 != 0) {
            lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar8 + 8) = puVar4;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *param_2 = puVar7;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141e64480 FUN_141e64480 body=325 status=ok
// SIG undefined FUN_141e64480(void)

undefined8 * FUN_141e64480(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  
  puVar7 = (undefined8 *)operator_new(0x70);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = uVar3;
    *puVar7 = &PTR__scalar_deleting_destructor__144eb29b8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0xffffffff;
  }
  lVar8 = 0;
  puVar4 = (undefined8 *)puVar7[4];
  puVar7[4] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar9 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar9) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar9) {
          uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar6 != 0) {
            lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar8 + 8) = puVar4;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  *param_2 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e645d0 FUN_141e645d0 body=199 status=ok
// SIG undefined FUN_141e645d0(void)

undefined8 *
FUN_141e645d0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144eb29b8;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
  }
  TRefCountPtr<FRHITexture>::operator=(puVar2 + 5,param_3);
  *(undefined4 *)(puVar2 + 9) = param_4;
  *param_2 = puVar2;
  LOCK();
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141e646a0 FUN_141e646a0 body=201 status=ok
// SIG undefined FUN_141e646a0(void)

undefined8 * FUN_141e646a0(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144eb29b8;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
  }
  *(uint *)(puVar2 + 0xd) = (uint)param_4;
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2 + 10,param_3);
  *param_2 = puVar2;
  LOCK();
  *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141e64770 FUN_141e64770 body=149 status=ok
// SIG undefined FUN_141e64770(void)

longlong *
FUN_141e64770(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_5 + 0x24);
  lVar2 = operator_new(0x98);
  lVar3 = 0;
  if (cVar1 == '\0') {
    if (lVar2 == 0) goto LAB_141e647dd;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    if (lVar2 == 0) goto LAB_141e647dd;
    param_4 = 0;
    param_3 = 0;
    uVar4 = 0;
  }
  lVar3 = FVulkanVertexBuffer::FVulkanVertexBuffer(lVar2,uVar4,param_3,param_4,param_5,0);
LAB_141e647dd:
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e64810 FUN_141e64810 body=941 status=ok
// SIG undefined FUN_141e64810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141e64810(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *_Buf1;
  undefined1 auStack_188 [32];
  int local_168 [2];
  undefined8 *local_160;
  undefined1 *local_158;
  undefined8 **local_150;
  undefined1 local_148 [4];
  undefined2 local_144 [126];
  int local_48;
  undefined4 local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar8 = *(int *)(param_3 + 0x100);
  local_48 = iVar8;
  if (iVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_141a09aa0(local_148,iVar8,0);
    lVar6 = param_3 - (longlong)(local_148 + 2);
    puVar5 = local_148 + 2;
    do {
      puVar5[-2] = puVar5[lVar6];
      puVar5[-1] = puVar5[lVar6 + 1];
      *puVar5 = puVar5[lVar6 + 2];
      puVar5[1] = puVar5[lVar6 + 3];
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar5 + lVar6 + 4);
      *(undefined2 *)(puVar5 + 4) = *(undefined2 *)(puVar5 + lVar6 + 6);
      puVar5 = puVar5 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_40 = FCrc::MemCrc_DEPRECATED(local_148,local_48 * 8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab04d0) && (_Init_thread_header(&DAT_146ab04d0), DAT_146ab04d0 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04a8);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab04a8,4000);
    atexit((_func_5014 *)&LAB_143e9e0b0);
    _Init_thread_footer(&DAT_146ab04d0);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04a8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04a8);
  }
  iVar8 = local_48;
  lVar6 = DAT_1464c9720;
  if (DAT_1464c9728 != DAT_1464c9754) {
    puVar4 = DAT_1464c9760;
    if (DAT_1464c9760 == (undefined *)0x0) {
      puVar4 = &DAT_1464c9758;
    }
    iVar1 = *(int *)(puVar4 + ((longlong)DAT_1464c9768 - 1U & (longlong)local_40) * 4);
    while (iVar1 != -1) {
      _Buf1 = (longlong *)((longlong)iVar1 * 0x120 + lVar6);
      if (((int)_Buf1[0x20] == iVar8) &&
         (iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,local_148,(longlong)(int)_Buf1[0x20] << 3),
         iVar3 == 0)) {
        if (iVar1 != -1) goto LAB_141e649d6;
        break;
      }
      iVar1 = (int)_Buf1[0x23];
    }
  }
  _Buf1 = (longlong *)0x0;
LAB_141e649d6:
  plVar7 = _Buf1 + 0x22;
  if (_Buf1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    local_160 = (undefined8 *)operator_new(0x120);
    if (local_160 == (undefined8 *)0x0) {
      local_160 = (undefined8 *)0x0;
    }
    else {
      *local_160 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(local_160 + 1) = 0;
      *local_160 = &PTR__scalar_deleting_destructor__144eb26f0;
      *(undefined4 *)((longlong)local_160 + 0xc) = 0;
      *(undefined2 *)(local_160 + 2) = 0x100;
      iVar8 = *(int *)(param_3 + 0x100);
      *(int *)(local_160 + 0x23) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)((longlong)local_160 + 0x11c) = 0;
      }
      else {
        FUN_141a09aa0(local_160 + 3,iVar8,0);
        puVar5 = (undefined1 *)((longlong)local_160 + 0x1a);
        param_3 = param_3 - (longlong)(local_160 + 3);
        do {
          puVar5[-2] = puVar5[param_3 + -2];
          puVar5[-1] = puVar5[param_3 + -1];
          *puVar5 = puVar5[param_3];
          puVar5[1] = puVar5[param_3 + 1];
          *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar5 + param_3 + 2);
          *(undefined2 *)(puVar5 + 4) = *(undefined2 *)(puVar5 + param_3 + 4);
          puVar5 = puVar5 + 8;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if (local_160 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = *(int *)(local_160 + 1) + 1;
      UNLOCK();
    }
    local_158 = local_148;
    local_150 = &local_160;
    FUN_141e56cb0(&DAT_1464c9720,local_168,&local_158,0);
    plVar7 = (longlong *)(DAT_1464c9720 + 0x110 + (longlong)local_168[0] * 0x120);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
  }
  lVar6 = *plVar7;
  *param_2 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab04a8);
  return param_2;
}



// FUNCTION 141e64bc0 FUN_141e64bc0 body=750 status=ok
// SIG undefined FUN_141e64bc0(void)

undefined8 *
FUN_141e64bc0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  lVar10 = 0;
  if (param_7 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ab0510) &&
       (_Init_thread_header(&DAT_146ab0510), DAT_146ab0510 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat")
      ;
      if (plVar9 != (longlong *)0x0) {
        lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146ab0508 = lVar10;
      _Init_thread_footer(&DAT_146ab0510);
    }
    lVar10 = DAT_146ab0508;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    uVar5 = EDefaultBackBufferPixelFormat::FromInt(*(undefined4 *)(lVar6 + lVar10));
    param_7 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar5);
  }
  puVar7 = (undefined8 *)operator_new(0x128);
  puVar11 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = uVar2;
    *puVar7 = &PTR__scalar_deleting_destructor__144eb2ab0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined4 *)(puVar7 + 0xc) = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    *(undefined4 *)(puVar7 + 0xf) = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0x15));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar7 + 0x15),4000);
    *(undefined4 *)((longlong)puVar7 + 0xdc) = param_5;
    puVar7[0x1a] = param_1;
    *(undefined1 *)(puVar7 + 0x1c) = param_6;
    *(undefined4 *)(puVar7 + 0x1b) = param_4;
    *(int *)((longlong)puVar7 + 0xe4) = param_7;
    *(undefined4 *)(puVar7 + 0x1d) = 0xffffffff;
    puVar7[0x1e] = 0;
    puVar7[0x1f] = param_3;
    *(undefined4 *)(puVar7 + 0x20) = 0;
    *(undefined1 *)((longlong)puVar7 + 0x104) = 1;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    puVar7[0x24] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    lVar10 = puVar7[0x1a];
    iVar1 = *(int *)(lVar10 + 0x80);
    *(int *)(lVar10 + 0x80) = iVar1 + 1;
    if (*(int *)(lVar10 + 0x84) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar10 + 0x78,iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar10 + 0x78) + (longlong)iVar1 * 8) = puVar7;
    FUN_141e49800(puVar7[0x1a]);
    FUN_141e5c4f0(puVar7);
    plVar9 = puVar7 + 7;
    lVar10 = 3;
    do {
      lVar8 = operator_new(0x20);
      lVar6 = 0;
      if (lVar8 != 0) {
        lVar6 = FUN_141e20010(lVar8,uVar2);
      }
      *plVar9 = lVar6;
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + -1;
      puVar11 = puVar7;
    } while (lVar10 != 0);
  }
  *param_2 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e64eb0 RHIGetResourceInfo body=30 status=ok
// SIG undefined RHIGetResourceInfo(void)

void FVulkanDynamicRHI::RHIGetResourceInfo(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar1 + 0x40);
  return;
}



// FUNCTION 141e64ed0 FUN_141e64ed0 body=136 status=ok
// SIG undefined FUN_141e64ed0(void)

void FUN_141e64ed0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(*(longlong *)(param_1 + 0x70) + 0x10,1);
  lVar2 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(*(longlong *)(param_1 + 0x70) + 0x10,0);
  param_2[2] = -1;
  *param_2 = lVar1;
  lVar3 = -1;
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  param_2[1] = lVar2;
  param_2[3] = lVar3;
  lVar3 = (longlong)DAT_146ab6300;
  param_2[4] = lVar3 << 10;
  param_2[5] = lVar3 << 10;
  param_2[6] = DAT_146ab6308;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 141e64f60 FUN_141e64f60 body=260 status=ok
// SIG undefined FUN_141e64f60(void)

longlong * FUN_141e64f60(undefined8 param_1,longlong *param_2,longlong param_3)

{
  BOOL BVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_3 + 0xf0) != 0) {
    FUN_141e51130();
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0xa8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0xa8));
  }
  if (DAT_1464c9490 == 1) {
    lVar3 = *(longlong *)(param_3 + 0xa0);
  }
  else {
    puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 3;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x20);
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar4 + 3;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar4;
    DAT_146ab6e80 = puVar4 + 1;
    *DAT_146ab6e80 = 0;
    *puVar4 = &PTR_LAB_144eb2ba0;
    puVar4[2] = param_3;
    lVar3 = *(longlong *)(param_3 + 0x98);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0xa8));
  return param_2;
}



// FUNCTION 141e650a0 FUN_141e650a0 body=300 status=ok
// SIG undefined FUN_141e650a0(void)

longlong FUN_141e650a0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  int local_res18 [2];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_1c = 0;
  local_28 = param_2;
  local_20 = param_3;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_res18,&local_28);
  if ((local_res18[0] == -1) ||
     (lVar3 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680, lVar3 == 0)) {
    local_res8 = &local_28;
    FUN_141e56470(&DAT_1464c9680,local_res18,&local_res8,0);
    lVar3 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  local_res18[0] = 0;
  *param_5 = 0;
  FVulkanSurface::GetMipSize(param_2 + 0x70,param_3,local_res18);
  FVulkanSurface::GetMipStride(param_2 + 0x70,param_3,param_5);
  lVar2 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,local_res18[0],1);
  *(longlong *)(lVar3 + 0x10) = lVar2;
  return (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x10) + 0x24) +
         *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28) + 0x18);
}



// FUNCTION 141e651d0 FUN_141e651d0 body=293 status=ok
// SIG undefined FUN_141e651d0(void)

longlong FUN_141e651d0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  int local_res18 [2];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_28 = param_2;
  local_20 = param_4;
  local_1c = param_3;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_res18,&local_28);
  if ((local_res18[0] == -1) ||
     (lVar3 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680, lVar3 == 0)) {
    local_res8 = &local_28;
    FUN_141e56470(&DAT_1464c9680,local_res18,&local_res8,0);
    lVar3 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  local_res18[0] = 0;
  *param_6 = 0;
  FVulkanSurface::GetMipSize(param_2 + 0x78,param_4,local_res18);
  FVulkanSurface::GetMipStride(param_2 + 0x78,param_4,param_6);
  lVar2 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,local_res18[0],1);
  *(longlong *)(lVar3 + 0x10) = lVar2;
  return (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x10) + 0x24) +
         *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28) + 0x18);
}



// FUNCTION 141e65300 FUN_141e65300 body=391 status=ok
// SIG undefined FUN_141e65300(void)

longlong FUN_141e65300(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      int *param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *local_res8;
  int local_res18 [2];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_2c = 0;
  local_38 = param_2;
  local_30 = param_3;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_res18,&local_38);
  if ((local_res18[0] == -1) ||
     (lVar8 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680, lVar8 == 0)) {
    local_res8 = &local_38;
    FUN_141e56470(&DAT_1464c9680,local_res18,&local_res8,0);
    lVar8 = (longlong)local_res18[0] * 0x20 + DAT_1464c9680;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  local_res18[0] = 0;
  *param_5 = 0;
  *param_6 = 0;
  FVulkanSurface::GetMipSize(param_2 + 0x78,param_3,local_res18);
  FVulkanSurface::GetMipStride(param_2 + 0x78,param_3,param_5);
  bVar1 = (byte)param_3 & 0x1f;
  uVar9 = *(uint *)(param_2 + 0x68) >> bVar1;
  uVar5 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_2 + 0x3c) * 10];
  bVar2 = (byte)param_3 & 0x1f;
  uVar7 = *(uint *)(param_2 + 100) >> bVar2;
  uVar3 = uVar5;
  if (uVar5 <= uVar7) {
    uVar3 = uVar7;
  }
  *param_6 = (int)(CONCAT44(0 >> bVar2,(uVar3 - 1) + uVar5) / (ulonglong)uVar5) * *param_5;
  uVar5 = 1;
  if (uVar9 != 0) {
    uVar5 = uVar9;
  }
  lVar6 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,local_res18[0] * uVar5,
                        (0U >> bVar1) + 1);
  *(longlong *)(lVar8 + 0x10) = lVar6;
  return (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x10) + 0x24) +
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x28) + 0x18);
}



// FUNCTION 141e65490 FUN_141e65490 body=304 status=ok
// SIG undefined FUN_141e65490(void)

longlong FUN_141e65490(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      int param_5,undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res8;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  iVar1 = param_5;
  local_20 = param_5;
  local_1c = 0;
  local_28 = param_2;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,&param_5,&local_28);
  if ((param_5 == -1) || (lVar5 = (longlong)param_5 * 0x20 + DAT_1464c9680, lVar5 == 0)) {
    local_res8 = &local_28;
    FUN_141e56470(&DAT_1464c9680,&param_5,&local_res8,0);
    lVar5 = (longlong)param_5 * 0x20 + DAT_1464c9680;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  puVar2 = param_7;
  param_5 = 0;
  *param_7 = 0;
  FVulkanSurface::GetMipSize(param_2 + 0x70,iVar1,&param_5);
  FVulkanSurface::GetMipStride(param_2 + 0x70,iVar1,puVar2);
  lVar4 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,param_5,1);
  *(longlong *)(lVar5 + 0x10) = lVar4;
  return (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x10) + 0x24) +
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x28) + 0x18);
}



// FUNCTION 141e655c0 RHILockVertexBuffer body=30 status=ok
// SIG undefined RHILockVertexBuffer(void)

void FVulkanDynamicRHI::RHILockVertexBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  FUN_141e29b90(param_2 + 0x20,0,param_5,param_4,param_3);
  return;
}



// FUNCTION 141e655e0 FUN_141e655e0 body=318 status=ok
// SIG undefined FUN_141e655e0(void)

void FUN_141e655e0(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined7 uStack_37;
  undefined1 local_30 [24];
  
  if ((*(int *)(param_2 + 0xd8) == param_3) && (*(int *)(param_2 + 0xdc) == param_4)) {
    return;
  }
  FUN_141ee24f0(0);
  if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
    plVar9 = (longlong *)FUN_141e5c920(local_30,0,0xff);
    local_48 = (undefined4)param_2;
    uStack_44 = (undefined4)((ulonglong)param_2 >> 0x20);
    lVar3 = *plVar9;
    *(undefined4 *)(lVar3 + 0x10) = local_48;
    *(undefined4 *)(lVar3 + 0x14) = uStack_44;
    *(int *)(lVar3 + 0x18) = param_3;
    *(int *)(lVar3 + 0x1c) = param_4;
    *(ulonglong *)(lVar3 + 0x20) = CONCAT71(uStack_37,param_5);
    lVar3 = *plVar9;
    lVar6 = plVar9[2];
    lVar4 = plVar9[1];
    lVar5 = *(longlong *)(lVar3 + 0x30);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048a160(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    *(int *)(param_2 + 0xd8) = param_3;
    *(int *)(param_2 + 0xdc) = param_4;
    *(undefined1 *)(param_2 + 0xe0) = param_5;
    FUN_141e66800(param_2,0);
  }
  FUN_141ee24f0(0);
  return;
}



// FUNCTION 141e65720 FUN_141e65720 body=573 status=ok
// SIG undefined FUN_141e65720(void)

void FUN_141e65720(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined1 param_5,
                  int param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined1 local_30 [24];
  
  if (param_6 == 0) {
    lVar10 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ab0520) &&
       (_Init_thread_header(&DAT_146ab0520), DAT_146ab0520 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat")
      ;
      lVar9 = lVar10;
      if (plVar8 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
      }
      DAT_146ab0518 = lVar9;
      _Init_thread_footer(&DAT_146ab0520);
    }
    lVar9 = DAT_146ab0518;
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      lVar10 = 4;
    }
    uVar7 = EDefaultBackBufferPixelFormat::FromInt(*(undefined4 *)(lVar10 + lVar9));
    param_6 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar7);
  }
  if ((*(int *)(param_2 + 0xd8) != param_3) || (*(int *)(param_2 + 0xdc) != param_4)) {
    FUN_141ee24f0(0);
    local_38 = CONCAT31(local_38._1_3_,param_5);
    if (((DAT_146ac3ac6 == '\0') || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))))) {
      plVar8 = (longlong *)FUN_141e5ca70(local_30,0,0xff);
      local_48 = (undefined4)param_2;
      uStack_44 = (undefined4)((ulonglong)param_2 >> 0x20);
      lVar10 = *plVar8;
      *(undefined4 *)(lVar10 + 0x10) = local_48;
      *(undefined4 *)(lVar10 + 0x14) = uStack_44;
      *(int *)(lVar10 + 0x18) = param_3;
      *(int *)(lVar10 + 0x1c) = param_4;
      *(ulonglong *)(lVar10 + 0x20) = CONCAT44(param_6,local_38);
      lVar10 = *plVar8;
      lVar4 = plVar8[2];
      lVar9 = plVar8[1];
      lVar3 = *(longlong *)(lVar10 + 0x30);
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a160(lVar10,lVar9,(int)lVar4,1);
      if (lVar3 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar3);
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      *(int *)(param_2 + 0xd8) = param_3;
      *(int *)(param_2 + 0xdc) = param_4;
      *(undefined1 *)(param_2 + 0xe0) = param_5;
      FUN_141e66800(param_2,param_6);
    }
    FUN_141ee24f0(0);
  }
  return;
}



// FUNCTION 141e65960 FUN_141e65960 body=133 status=ok
// SIG undefined FUN_141e65960(void)

void FUN_141e65960(longlong param_1,char param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4f8);
  if (param_2 == '\0') {
    uVar2 = (uint)(longlong)*(float *)(lVar1 + 0xc);
    uVar4 = 0x7fffffff;
    if (uVar2 < 0x80000000) {
      uVar4 = uVar2;
    }
    param_6 = (int)(longlong)*(float *)(lVar1 + 0x14);
    uVar3 = (uint)(longlong)*(float *)(lVar1 + 8);
    uVar2 = 0x7fffffff;
    if (uVar3 < 0x80000000) {
      uVar2 = uVar3;
    }
    param_5 = (int)(longlong)*(float *)(lVar1 + 0x10);
  }
  else {
    param_6 = param_6 - param_4;
    param_5 = param_5 - param_3;
    uVar4 = 0x7fffffff;
    if (param_4 < 0x80000000) {
      uVar4 = param_4;
    }
    uVar2 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      uVar2 = param_3;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar2;
  *(uint *)(lVar1 + 0x24) = uVar4;
  *(int *)(lVar1 + 0x28) = param_5;
  *(int *)(lVar1 + 0x2c) = param_6;
  *(char *)(lVar1 + 0x38) = param_2;
  return;
}



// FUNCTION 141e65aa0 FUN_141e65aa0 body=310 status=ok
// SIG undefined FUN_141e65aa0(void)

void FUN_141e65aa0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = CONCAT31(uStack_40._1_3_,DAT_1464c97c0);
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141e5a290(&local_48,uVar9);
      DAT_1464c97c0 = 0;
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_141e65b45;
    }
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141e5a290(&local_38,uVar9);
    DAT_1464c97c0 = 0;
    return;
  }
LAB_141e65b45:
  plVar10 = (longlong *)FUN_141e5cbc0(local_28,0,0xff);
  lVar3 = *plVar10;
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = uStack_40;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_3c;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  DAT_1464c97c0 = 0;
  return;
}



// FUNCTION 141e65be0 FUN_141e65be0 body=379 status=ok
// SIG undefined FUN_141e65be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e65be0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_78 [2];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_3 == 0) {
    local_58 = 1;
    local_44 = 0;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    puVar4 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar3 = (undefined8 *)operator_new(0x98);
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *puVar3 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_144d838e8;
      local_90 = &local_68;
      local_88 = 0;
      local_98 = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      *(undefined2 *)(puVar3 + 2) = 0x100;
      puVar3[3] = 0;
      FUN_141e20860(puVar3 + 4,uVar2,0x80,0);
      *puVar3 = &PTR_FUN_144eb2990;
      puVar3[4] = &PTR_LAB_144eb2998;
      puVar4 = puVar3;
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar4 + 3);
    *(undefined4 *)(puVar4 + 3) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((longlong)puVar4 + 0x1c);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
    local_78[0] = puVar4;
    FUN_141e300a0(param_2 + 0x20,puVar4 + 4);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    FUN_141e300a0(param_2 + 0x20,param_3 + 0x20);
  }
  return;
}



// FUNCTION 141e65d70 FUN_141e65d70 body=536 status=ok
// SIG undefined FUN_141e65d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e65d70(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  BOOL BVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar5 = 0;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_a0 = param_2;
  local_98 = param_4;
  local_94 = param_3;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_a8,&local_a0);
  if (local_a8[0] != -1) {
    uVar5 = *(undefined8 *)((longlong)local_a8[0] * 0x20 + 0x10 + DAT_1464c9680);
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9680);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  local_90 = *(undefined4 *)(param_2 + 0xec);
  uVar4 = *(uint *)(param_2 + 0x98) >> ((byte)param_4 & 0x1f);
  uVar6 = *(uint *)(param_2 + 0x9c) >> ((byte)param_4 & 0x1f);
  uStack_88 = 1;
  uStack_4c = 1;
  if (uVar4 != 0) {
    uStack_4c = uVar4;
  }
  local_80 = 1;
  local_78 = 0;
  local_48 = 1;
  if (uVar6 != 0) {
    local_48 = uVar6;
  }
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_5c = 1;
  uStack_44 = 1;
  uStack_8c = param_4;
  uStack_84 = param_3;
  local_68 = local_90;
  uStack_64 = param_4;
  uStack_60 = param_3;
  if (DAT_146ab6383 == '\0') {
    local_b8 = uVar5;
    FUN_141e5feb0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0),param_2 + 0x78,&local_90,
                  &local_78);
  }
  else {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0xe;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 0xe;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    DAT_146ab6e80 = puVar3 + 1;
    *DAT_146ab6e80 = 0;
    *puVar3 = &PTR_FUN_144eb2af0;
    puVar3[2] = param_2 + 0x78;
    puVar3[3] = CONCAT44(uStack_8c,local_90);
    puVar3[4] = CONCAT44(uStack_84,uStack_88);
    *(undefined4 *)(puVar3 + 5) = local_80;
    puVar3[6] = local_78;
    puVar3[7] = uStack_70;
    puVar3[8] = CONCAT44(uStack_64,local_68);
    puVar3[9] = CONCAT44(uStack_5c,uStack_60);
    puVar3[10] = local_58;
    puVar3[0xb] = CONCAT44(uStack_4c,uStack_50);
    puVar3[0xc] = CONCAT44(uStack_44,local_48);
    puVar3[0xd] = uVar5;
  }
  return;
}



// FUNCTION 141e65f90 FUN_141e65f90 body=585 status=ok
// SIG undefined FUN_141e65f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e65f90(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  int local_b8 [2];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  local_a8 = param_1;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_94 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_b8,&local_a0);
  if (local_b8[0] != -1) {
    local_b0 = *(longlong *)((longlong)local_b8[0] * 0x20 + 0x10 + DAT_1464c9680);
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9680);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  lVar5 = FVulkanCommandBufferManager::GetUploadCmdBuffer
                    (*(undefined8 *)(*(longlong *)(param_1[0xe] + 0x18b0) + 0x2d8));
  local_c0 = (undefined8 *)&local_90;
  bVar2 = (byte)param_3;
  uVar1 = *(undefined8 *)(lVar5 + 0x40);
  uVar7 = *(uint *)(param_2 + 0x98) >> (bVar2 & 0x1f);
  uVar9 = *(uint *)(param_2 + 0x9c) >> (bVar2 & 0x1f);
  uVar8 = *(uint *)(param_2 + 0xa0) >> (bVar2 & 0x1f);
  local_88 = 1;
  local_90 = 1;
  local_80 = 1;
  local_c8 = 7;
  local_8c = param_3;
  (**(code **)(*local_a8 + 0x790))(local_a8,uVar1,*(undefined8 *)(param_2 + 0x88),0);
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 1;
  local_4c = 1;
  if (uVar7 != 0) {
    local_4c = uVar7;
  }
  local_5c = 1;
  local_48 = 1;
  if (uVar9 != 0) {
    local_48 = uVar9;
  }
  local_44 = 1;
  if (uVar8 != 0) {
    local_44 = uVar8;
  }
  local_c0 = &local_78;
  local_c8 = 1;
  local_64 = param_3;
  (*DAT_146ab0278)(uVar1,*(undefined8 *)(local_b0 + 0x18),*(undefined8 *)(param_2 + 0x88),7);
  plVar3 = local_a8;
  local_c0 = (undefined8 *)&local_90;
  local_c8 = 5;
  (**(code **)(*local_a8 + 0x790))(local_a8,uVar1,*(undefined8 *)(param_2 + 0x88),7);
  puVar6 = (undefined4 *)
           FTransitionAndLayoutManager::FindOrAddLayoutRW
                     (*(longlong *)(plVar3[0xe] + 0x18b0) + 0x2e0,*(undefined8 *)(param_2 + 0x88),5)
  ;
  *puVar6 = 5;
  FUN_141e2d4b0(plVar3[0xe] + 0x3f0,lVar5,&local_b0);
  return;
}



// FUNCTION 141e661e0 FUN_141e661e0 body=553 status=ok
// SIG undefined FUN_141e661e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e661e0(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  BOOL BVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int local_b8 [2];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  }
  local_a8 = param_5;
  local_a4 = 0;
  local_b0 = param_2;
  TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c9680,local_b8,&local_b0);
  if (local_b8[0] != -1) {
    uVar4 = *(undefined8 *)((longlong)local_b8[0] * 0x20 + 0x10 + DAT_1464c9680);
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9680);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  local_a0 = *(undefined4 *)(param_2 + 0xe4);
  uVar5 = *(uint *)(param_2 + 0x90) >> ((byte)param_5 & 0x1f);
  uVar6 = *(uint *)(param_2 + 0x94) >> ((byte)param_5 & 0x1f);
  iStack_94 = param_3 + param_4 * 6;
  uStack_9c = param_5;
  uStack_98 = 1;
  uStack_5c = 1;
  if (uVar5 != 0) {
    uStack_5c = uVar5;
  }
  local_90 = 1;
  local_88 = 0;
  local_58 = 1;
  if (uVar6 != 0) {
    local_58 = uVar6;
  }
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_74 = param_5;
  uStack_6c = 1;
  uStack_54 = 1;
  local_78 = local_a0;
  iStack_70 = iStack_94;
  if (DAT_146ab6383 == '\0') {
    local_c8 = uVar4;
    FUN_141e5feb0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0),param_2 + 0x70,&local_a0,
                  &local_88);
  }
  else {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0xe;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 0xe;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    DAT_146ab6e80 = puVar3 + 1;
    *DAT_146ab6e80 = 0;
    *puVar3 = &PTR_FUN_144eb2af0;
    puVar3[2] = param_2 + 0x70;
    puVar3[3] = CONCAT44(uStack_9c,local_a0);
    puVar3[4] = CONCAT44(iStack_94,uStack_98);
    *(undefined4 *)(puVar3 + 5) = local_90;
    puVar3[6] = local_88;
    puVar3[7] = uStack_80;
    puVar3[8] = CONCAT44(uStack_74,local_78);
    puVar3[9] = CONCAT44(uStack_6c,iStack_70);
    puVar3[10] = local_68;
    puVar3[0xb] = CONCAT44(uStack_5c,uStack_60);
    puVar3[0xc] = CONCAT44(uStack_54,local_58);
    puVar3[0xd] = uVar4;
  }
  return;
}



// FUNCTION 141e66420 RHIUpdateShaderResourceView body=82 status=ok
// SIG undefined RHIUpdateShaderResourceView(void)

void FVulkanDynamicRHI::RHIUpdateShaderResourceView
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    FUN_141e5ba30(param_2);
    return;
  }
  if (*(longlong *)(param_2 + 0x80) != param_3) {
    uVar1 = 0x1c;
    if (*(int *)(param_3 + 0x18) == 2) {
      uVar1 = 0x20;
    }
    FUN_141e66f30(param_2,param_3,param_3 + 0x28,*(undefined4 *)(param_3 + 0x1c),uVar1);
  }
  return;
}



// FUNCTION 141e664c0 FUN_141e664c0 body=316 status=ok
// SIG undefined FUN_141e664c0(void)

void FUN_141e664c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab0480) && (_Init_thread_header(&DAT_146ab0480), DAT_146ab0480 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Vulkan.UseRealUBs");
    lVar4 = lVar6;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146ab0478 = lVar4;
    _Init_thread_footer(&DAT_146ab0480);
  }
  lVar4 = DAT_146ab0478;
  if (DAT_146ab0478 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    if (0 < *(int *)(lVar6 + lVar4)) {
      uVar5 = 1;
      goto LAB_141e66557;
    }
  }
  uVar5 = 0;
LAB_141e66557:
  cVar1 = FUN_141e308a0(uVar5);
  if (cVar1 == '\0') {
    FUN_141e572e0(param_1,param_2,param_3);
  }
  else {
    FUN_141e56f80();
  }
  return;
}



// FUNCTION 141e66600 FUN_141e66600 body=121 status=ok
// SIG undefined FUN_141e66600(void)

void FUN_141e66600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  if (*(char *)(param_2 + 0x48) != '\0') {
    (*DAT_146ab02c8)(*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),1,param_2 + 0x40,0x800,
                     0x800,0,0,0,0,0,0);
  }
  return;
}



// FUNCTION 141e66680 FUN_141e66680 body=383 status=ok
// SIG undefined FUN_141e66680(void)

void FUN_141e66680(longlong param_1,longlong param_2,char param_3)

{
  BOOL BVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if ((*(longlong *)(param_1 + 0xf8) != param_2) || (param_3 != '\0')) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar2 != 0) {
      TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar2 + 0x68);
    }
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x110) = 0;
      *(undefined8 *)(lVar2 + 0xe8) = 0;
      *(undefined4 *)(lVar2 + 0xf8) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      lVar2 = *(longlong *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (lVar2 != 0) {
        TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar2 + 0x68);
      }
    }
    puVar4 = (undefined8 *)(param_1 + 0x20);
    lVar2 = 3;
    plVar3 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar3 != 0) {
        FUN_141e254e0(*(longlong *)(param_1 + 0x18) + 0x3b0,4);
        plVar3[1] = 0;
        *plVar3 = 0;
        *(undefined4 *)(plVar3 + 2) = 0;
      }
      FUN_141e2a260(*(undefined8 *)(param_1 + 0x18),*puVar4);
      FUN_141e2a280(*(undefined8 *)(param_1 + 0x18),*puVar4);
      *puVar4 = 0;
      plVar3 = plVar3 + 3;
      puVar4 = puVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_141e2da80(*(longlong *)(param_1 + 0x18) + 0x3b0,1,0);
    FUN_141e2da80(*(longlong *)(param_1 + 0x18) + 0x3b0,1,0);
    *(longlong *)(param_1 + 0xf8) = param_2;
    FUN_141e5c4f0(param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 141e66800 FUN_141e66800 body=322 status=ok
// SIG undefined FUN_141e66800(void)

void FUN_141e66800(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FUN_141e2fe70(*(undefined8 *)(param_1 + 0x18));
  FUN_141e2a740(*(undefined8 *)(param_1 + 0x18));
  lVar1 = *(longlong *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar1 + 0x68);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(undefined4 *)(lVar1 + 0xf8) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    lVar1 = *(longlong *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (lVar1 != 0) {
      TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar1 + 0x68);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x20);
  lVar1 = 3;
  plVar3 = (longlong *)(param_1 + 0x50);
  do {
    if (*plVar3 != 0) {
      FUN_141e254e0(*(longlong *)(param_1 + 0x18) + 0x3b0,4);
      plVar3[1] = 0;
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
    }
    FUN_141e2a260(*(undefined8 *)(param_1 + 0x18),*puVar2);
    FUN_141e2a280(*(undefined8 *)(param_1 + 0x18),*puVar2);
    *puVar2 = 0;
    plVar3 = plVar3 + 3;
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_141e2da80(*(longlong *)(param_1 + 0x18) + 0x3b0,1,0);
  FUN_141e2da80(*(longlong *)(param_1 + 0x18) + 0x3b0,1,0);
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  FUN_141e5c4f0(param_1);
  return;
}



// FUNCTION 141e66950 Rehash body=659 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar11 = (ulonglong)uVar9;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar7 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar7 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar12 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar12 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar3 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar3) goto LAB_141e66a8f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar12 < iStack_44) {
LAB_141e66a8f:
        iStack_44 = iVar12;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar12) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x20 + *param_1);
        iVar12 = (int)(*puVar15 >> 4);
        uVar10 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
        uVar9 = -(uVar10 + iVar12) ^ uVar10 >> 0xd;
        uVar13 = (iVar12 - uVar10) - uVar9 ^ uVar9 >> 0xc;
        uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 << 0x10;
        uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar13 = (uVar13 - uVar10) - uVar9 ^ uVar9 >> 3;
        uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 << 10;
        uVar9 = (((int)puVar15[1] << 8 ^ *(uint *)((longlong)puVar15 + 0xc)) << 8 ^ uVar10 >> 0xf ^
                (uVar9 - uVar10) - uVar13) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x1c) = uVar9;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar15 + 3) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141e66bf0 FUN_141e66bf0 body=533 status=ok
// SIG undefined FUN_141e66bf0(void)

void FUN_141e66bf0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141e66d2f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141e66d2f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar6 = (longlong)iStack_1c * 0x120 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x108);
        *(uint *)(lVar6 + 0x11c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x118) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141e66e10 FUN_141e66e10 body=68 status=ok
// SIG undefined FUN_141e66e10(void)

void FUN_141e66e10(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_141e2d4b0(*(longlong *)(param_1 + 0x10) + 0x3f0,0,*(longlong *)(param_1 + 0x28) + 0x58);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141e66e60 FUN_141e66e60 body=199 status=ok
// SIG undefined FUN_141e66e60(void)

void FUN_141e66e60(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  }
  VulkanRHI::FResourceHeapManager::ProcessPendingUBFreesNoLock(param_1,0);
  uVar3 = DAT_1464aaa90;
  iVar2 = *(int *)(param_1 + 0x158);
  *(int *)(param_1 + 0x158) = iVar2 + 1;
  if (*(int *)(param_1 + 0x15c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x150,iVar2);
  }
  local_18 = (undefined4)param_2;
  uStack_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar2 * 0x10);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  puVar1[2] = uVar3;
  puVar1[3] = 0;
  uVar5 = *(uint *)(param_1 + 0x158);
  if (*(uint *)(param_1 + 0x158) <= *(uint *)(param_1 + 0x160)) {
    uVar5 = *(uint *)(param_1 + 0x160);
  }
  *(uint *)(param_1 + 0x160) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000141e66f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  return;
}



// FUNCTION 141e66f30 FUN_141e66f30 body=468 status=ok
// SIG undefined FUN_141e66f30(void)

void FUN_141e66f30(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x20) = param_5;
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_141e254e0(*(longlong *)(param_1 + 0x18) + 0x3b0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  if (*(int *)(param_1 + 0x6c) < 0) {
    TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty((undefined8 *)(param_1 + 0x60))
    ;
    iVar7 = *(int *)(param_1 + 0x68);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x60);
    for (iVar7 = *(int *)(param_1 + 0x68); iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = (undefined8 *)*plVar8;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar4 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar5 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2);
          }
        }
      }
      plVar8 = plVar8 + 1;
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar6 = *(int *)(param_3 + 0x18);
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  *(int *)(param_1 + 0x68) = iVar7 + iVar6;
  if (*(int *)(param_1 + 0x6c) < iVar7 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x60));
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar7 * 8),0,(longlong)iVar6 << 3);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = param_4;
  *(longlong *)(param_1 + 0x78) = param_3;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x80,param_2);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



// FUNCTION 141e67110 FUN_141e67110 body=14 status=ok
// SIG undefined FUN_141e67110(void)

void FUN_141e67110(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  (*DAT_146ab0050)(*(undefined8 *)(*(longlong *)(lVar1 + 8) + 8),*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141e5270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab02e8)(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar1 + 0x10),0,
                   *(undefined4 *)(lVar1 + 0x20));
  return;
}



// FUNCTION 141e67120 FUN_141e67120 body=191 status=ok
// SIG undefined FUN_141e67120(void)

void FUN_141e67120(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x110);
  *(longlong *)(param_1 + 0x110) = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000141e671d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar7) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar3;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141e671e0 FUN_141e671e0 body=55 status=ok
// SIG undefined FUN_141e671e0(void)

void FUN_141e671e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e67213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 8))(param_1 + 0x18,0,0);
  return;
}



// FUNCTION 141e67240 FUN_141e67240 body=188 status=ok
// SIG undefined FUN_141e67240(void)

void FUN_141e67240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x18) == '\0')) {
    if (param_2 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x2d8);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      }
      param_2 = *(longlong *)(lVar1 + 0x70);
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(uint *)(lVar1 + 0x38) = (*(int *)(lVar1 + 0x38) + 1U) % *(uint *)(lVar1 + 0x40);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x38) * 2;
    (*DAT_146ab02f0)(*(undefined8 *)(param_2 + 0x40),1,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),iVar2);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) + (longlong)iVar2 * 0x10) =
         param_2;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) + 8 + (longlong)iVar2 * 0x10) =
         *(undefined8 *)(param_2 + 0x98);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// FUNCTION 141e67300 FUN_141e67300 body=567 status=ok
// SIG undefined FUN_141e67300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141e67300(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
             uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,int param_10,
             char param_11)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int iStack_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_84 = 0;
  uStack_80 = (undefined4)param_2;
  local_7c = (undefined4)((ulonglong)param_2 >> 0x20);
  local_74 = (ulonglong)param_6;
  local_a8 = 0;
  local_98 = 0xf;
  local_94 = 0;
  local_8c = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  iStack_78 = param_3;
  if (param_11 == '\0') {
    puVar3 = (undefined4 *)FUN_141e26f30(param_1,param_5);
    uStack_6c = *(undefined8 *)(puVar3 + 1);
    local_74 = CONCAT44(*puVar3,(undefined4)local_74);
    uStack_64 = (ulonglong)(uint)puVar3[3];
  }
  uStack_64 = CONCAT44(param_4,(undefined4)uStack_64);
  local_5c = CONCAT44(param_8,param_7);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab042c) {
    _Init_thread_header(&DAT_146ab042c);
    if (DAT_146ab042c == -1) {
      cVar1 = IsRHIDeviceIntel();
      if (cVar1 == '\0') {
LAB_141e6751e:
        DAT_146ab0428 = '\0';
      }
      else {
        local_b8 = 0xffffffff;
        iVar2 = FUN_141592950(&DAT_146ab6ae8,L"RTX 20",1,0);
        if ((iVar2 == -1) || (0x6b7fffff < (*(uint *)(param_1 + 0x68c) & 0xffc00000)))
        goto LAB_141e6751e;
        DAT_146ab0428 = '\x01';
      }
      _Init_thread_footer(&DAT_146ab042c);
    }
  }
  if (((DAT_146ab0428 != '\0') && (param_6 - 0x83 < 0x10)) && (1 < param_8)) {
    iVar2 = param_8 - 2;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    local_5c = CONCAT44(iVar2,(undefined4)local_5c);
  }
  if (param_3 != 2) {
    if (param_3 == 3) {
      local_54 = CONCAT44(6,param_9);
      goto LAB_141e6743a;
    }
    if (3 < param_3) {
      if (param_3 < 6) {
        local_54 = CONCAT44(param_10,param_9);
        goto LAB_141e6743a;
      }
      if (param_3 == 6) {
        local_54 = CONCAT44(param_10 * 6,param_9);
        goto LAB_141e6743a;
      }
    }
  }
  local_54 = CONCAT44(1,param_9);
LAB_141e6743a:
  if (param_5 == 0x2c) {
    local_74 = CONCAT44(local_74._4_4_,DAT_1464ca384);
    uStack_64 = CONCAT44(4,(undefined4)uStack_64);
  }
  iVar2 = (*DAT_146ab00a8)(*(undefined8 *)(param_1 + 8),&local_98,0,&local_a8);
  if (iVar2 != 0) {
    FUN_141e67d70(iVar2,
                  "VulkanRHI::vkCreateImageView(Device.GetInstanceHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, &OutView)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp",
                  0x6b1);
  }
  local_a0 = local_a8;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x1900,&local_a0);
  return local_a8;
}



// FUNCTION 141e67560 FUN_141e67560 body=287 status=ok
// SIG undefined FUN_141e67560(void)

void FUN_141e67560(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    LOCK();
    cVar7 = *(char *)(param_1 + 0x104);
    if (cVar7 == '\0') {
      *(char *)(param_1 + 0x104) = '\0';
      cVar7 = '\0';
    }
    UNLOCK();
    if (cVar7 != *(char *)(*(longlong *)(param_1 + 0xf0) + 0x80)) {
      FUN_141ee24f0();
      if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
        plVar9 = (longlong *)FUN_141e5cd10(local_28,0,0xff);
        *(longlong *)(*plVar9 + 0x10) = param_1;
        lVar3 = *plVar9;
        lVar6 = plVar9[2];
        lVar4 = plVar9[1];
        lVar5 = *(longlong *)(lVar3 + 0x20);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(lVar3,lVar4,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
        FUN_141ee24f0(0);
        return;
      }
      FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141e66800(param_1,*(undefined4 *)(param_1 + 0xe4));
      FUN_141ee24f0(0);
      return;
    }
  }
  return;
}



// FUNCTION 141e67690 UpdateResourceTable body=256 status=ok
// SIG undefined UpdateResourceTable(void)

void FVulkanUniformBuffer::UpdateResourceTable(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (0 < param_3) {
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + lVar7 * 8);
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + lVar7 * 8);
      *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar7 * 8) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
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
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_3);
  }
  return;
}



// FUNCTION 141e67790 FUN_141e67790 body=709 status=ok
// SIG undefined FUN_141e67790(void)

void FUN_141e67790(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  lVar4 = *(longlong *)(param_1 + 0x78);
  if (lVar4 == 0) {
    if ((*(longlong *)(param_1 + 0x48) == 0) && (*(longlong *)(param_1 + 0x30) == 0)) {
      iVar6 = *(int *)(param_1 + 0x20);
      if (iVar6 == 0) {
        iVar6 = *(int *)((longlong)*(longlong **)(param_1 + 0x28) + 0x3c);
      }
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      if (lVar4 == 0) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
        if (lVar4 == 0) {
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
          if (lVar4 == 0) {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
            if (lVar4 == 0) {
              return;
            }
            iVar12 = *(int *)(param_1 + 0x5c);
            if (iVar12 == 0) {
              iVar12 = *(int *)(lVar4 + 0x68);
            }
            uVar7 = 5;
            uVar5 = *(undefined8 *)(lVar4 + 0x88);
            uVar8 = (&DAT_1464ca1cc)[(longlong)iVar6 * 10];
            uVar11 = *(undefined4 *)(param_1 + 0x58);
            uVar10 = *(undefined4 *)(param_1 + 0x54);
            uVar9 = *(undefined4 *)(param_1 + 0x50);
            uVar3 = *(undefined4 *)(lVar4 + 0xec);
          }
          else {
            iVar12 = 1;
            uVar8 = (&DAT_1464ca1cc)[(longlong)iVar6 * 10];
            uVar10 = *(undefined4 *)(param_1 + 0x54);
            uVar11 = 0;
            uVar9 = *(undefined4 *)(param_1 + 0x50);
            uVar7 = 2;
            uVar3 = *(undefined4 *)(lVar4 + 0xec);
            uVar5 = *(undefined8 *)(lVar4 + 0x88);
          }
        }
        else {
          iVar12 = 1;
          uVar8 = (&DAT_1464ca1cc)[(longlong)iVar6 * 10];
          uVar10 = *(undefined4 *)(param_1 + 0x54);
          uVar11 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x50);
          uVar7 = 3;
          uVar3 = *(undefined4 *)(lVar4 + 0xe4);
          uVar5 = *(undefined8 *)(lVar4 + 0x80);
        }
      }
      else {
        iVar12 = 1;
        uVar8 = (&DAT_1464ca1cc)[(longlong)iVar6 * 10];
        uVar10 = *(undefined4 *)(param_1 + 0x54);
        uVar11 = 0;
        uVar9 = *(undefined4 *)(param_1 + 0x50);
        uVar7 = 1;
        uVar3 = *(undefined4 *)(lVar4 + 0xe4);
        uVar5 = *(undefined8 *)(lVar4 + 0x80);
      }
      FVulkanTextureView::Create
                (param_1 + 0x30,*(undefined8 *)(param_1 + 0x18),uVar5,uVar7,uVar3,iVar6,uVar8,uVar9,
                 uVar10,uVar11,iVar12,0);
    }
  }
  else {
    if (*(uint *)(lVar4 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x90) != *(int *)(lVar4 + 0x74)) {
        lVar1 = *(longlong *)(lVar4 + 0x50);
        lVar2 = **(longlong **)(param_1 + 0x60);
        if ((((lVar2 == 0) || (*(int *)(lVar2 + 0x30) != *(int *)(lVar4 + 0x58))) ||
            (*(int *)(lVar2 + 0x34) != *(int *)(param_1 + 0x74))) ||
           (*(longlong *)(param_1 + 0x88) != lVar1)) {
          TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong **)(param_1 + 0x60),0);
          lVar4 = *(longlong *)(param_1 + 0x78);
        }
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar4 + 0x74);
        *(longlong *)(param_1 + 0x88) = lVar1;
      }
    }
    else if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar4 + 0x1c);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x70) * 8) == 0)
    {
      lVar4 = operator_new(0x38);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_141e36810(lVar4,*(undefined8 *)(param_1 + 0x18));
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x70) * 8,uVar5);
      FUN_141e426d0(*(undefined8 *)
                     (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x70) * 8),
                    *(longlong *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x58),
                    *(undefined4 *)(param_1 + 0x74));
      return;
    }
  }
  return;
}



// FUNCTION 141e67a60 FUN_141e67a60 body=771 status=ok
// SIG undefined FUN_141e67a60(void)

void FUN_141e67a60(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (lVar3 == 0) {
      if ((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x30) == 0)) {
        iVar4 = *(int *)(param_1 + 0x68);
        if (iVar4 == 0) {
          iVar4 = *(int *)((longlong)*(longlong **)(param_1 + 0x28) + 0x3c);
        }
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
        if (lVar3 == 0) {
          lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
          if (lVar3 == 0) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
            if (lVar3 == 0) {
              lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
              if (lVar3 == 0) {
                return;
              }
              uVar6 = 5;
            }
            else {
              uVar6 = 2;
            }
            uVar9 = *(undefined4 *)(lVar3 + 0x68);
            uVar5 = *(undefined8 *)(lVar3 + 0x88);
            uVar7 = (&DAT_1464ca1cc)[(longlong)iVar4 * 10];
            uVar8 = *(undefined4 *)(param_1 + 0x48);
            uVar1 = *(undefined4 *)(lVar3 + 0xec);
          }
          else {
            uVar9 = 1;
            uVar6 = 3;
            uVar7 = (&DAT_1464ca1cc)[(longlong)iVar4 * 10];
            uVar8 = *(undefined4 *)(param_1 + 0x48);
            uVar1 = *(undefined4 *)(lVar3 + 0xe4);
            uVar5 = *(undefined8 *)(lVar3 + 0x80);
          }
        }
        else {
          uVar9 = 1;
          uVar6 = 1;
          uVar7 = (&DAT_1464ca1cc)[(longlong)iVar4 * 10];
          uVar8 = *(undefined4 *)(param_1 + 0x48);
          uVar1 = *(undefined4 *)(lVar3 + 0xe4);
          uVar5 = *(undefined8 *)(lVar3 + 0x80);
        }
        FVulkanTextureView::Create
                  (param_1 + 0x30,*(undefined8 *)(param_1 + 0x18),uVar5,uVar6,uVar1,iVar4,uVar7,
                   uVar8,1,0,uVar9,0);
      }
    }
    else {
      if ((*(int *)(lVar3 + 0x40) == 0) && (*(int *)(param_1 + 0x6c) != *(int *)(lVar3 + 0x9c))) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,0);
        lVar3 = *(longlong *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar3 + 0x9c);
      }
      if ((*(longlong *)(param_1 + 0x60) == 0) || (1 < *(uint *)(lVar3 + 0x40))) {
        lVar2 = operator_new(0x38);
        lVar3 = 0;
        if (lVar2 != 0) {
          lVar3 = FUN_141e36810(lVar2,*(undefined8 *)(param_1 + 0x18));
        }
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,lVar3);
        lVar3 = *(longlong *)(param_1 + 0x58);
        lVar2 = lVar3 + 0x28;
        if (lVar3 == 0) {
          lVar2 = 0;
        }
        FUN_141e426d0(*(undefined8 *)(param_1 + 0x60),lVar2,*(undefined4 *)(param_1 + 0x68),
                      *(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x1c));
        return;
      }
    }
  }
  else {
    if ((*(int *)(lVar3 + 0x38) == 0) && (*(int *)(param_1 + 0x6c) != *(int *)(lVar3 + 0x94))) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,0);
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar3 + 0x94);
    }
    if ((*(longlong *)(param_1 + 0x60) == 0) || (1 < *(uint *)(lVar3 + 0x38))) {
      lVar2 = operator_new(0x38);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_141e36810(lVar2,*(undefined8 *)(param_1 + 0x18));
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,lVar3);
      lVar3 = *(longlong *)(param_1 + 0x50);
      lVar2 = lVar3 + 0x20;
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      FUN_141e426d0(*(undefined8 *)(param_1 + 0x60),lVar2,*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 141e67d70 FUN_141e67d70 body=3334 status=ok
// SIG undefined FUN_141e67d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e67d70(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  wchar_t *local_2d0;
  wchar_t *local_2c8;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_298 [256];
  longlong local_198;
  undefined8 local_190;
  undefined1 local_178 [256];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2b8 = (wchar_t *)0x0;
  local_2b0 = 0;
  local_2a8 = param_4;
  if (param_1 < -0xb) {
    if (param_1 == -0xc) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x19);
      iVar4 = (int)local_2b0 + 0x19;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
      if (local_2b0._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
      }
      builtin_wcsncpy(local_2b8,L"VK_ERROR_FRAGMENTED_POOL",0x19);
    }
    else if (param_1 < -0x3b9af4f8) {
      if (param_1 == -0x3b9af4f9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1f);
        iVar4 = (int)local_2b0 + 0x1f;
        local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
        if (local_2b0._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
        }
        builtin_wcsncpy(local_2b8,L"VK_ERROR_VALIDATION_FAILED_EXT",0x1f);
      }
      else if (param_1 == -0x3b9d71b1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1b);
        iVar4 = (int)local_2b0 + 0x1b;
        local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
        if (local_2b0._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
        }
        builtin_wcsncpy(local_2b8,L"VK_ERROR_NOT_PERMITTED_EXT",0x1b);
      }
      else if (param_1 == -0x3b9be343) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x25);
        iVar4 = (int)local_2b0 + 0x25;
        local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
        if (local_2b0._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
        }
        builtin_wcsncpy(local_2b8,L"VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR",0x25);
      }
      else if (param_1 == -0x3b9bd788) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x20);
        iVar4 = (int)local_2b0 + 0x20;
        local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
        if (local_2b0._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
        }
        builtin_wcsncpy(local_2b8,L"VK_ERROR_OUT_OF_POOL_MEMORY_KHR",0x20);
      }
      else if (param_1 == -0x3b9af8e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1b);
        iVar4 = (int)local_2b0 + 0x1b;
        local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
        if (local_2b0._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
        }
        builtin_wcsncpy(local_2b8,L"VK_ERROR_INVALID_SHADER_NV",0x1b);
      }
    }
    else if (param_1 == -0x3b9ad5b9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x22);
      iVar4 = (int)local_2b0 + 0x22;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
      if (local_2b0._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
      }
      builtin_wcsncpy(local_2b8,L"VK_ERROR_INCOMPATIBLE_DISPLAY_KHR",0x22);
    }
    else if (param_1 == -0x3b9acdec) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x19);
      iVar4 = (int)local_2b0 + 0x19;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
      if (local_2b0._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
      }
      builtin_wcsncpy(local_2b8,L"VK_ERROR_OUT_OF_DATE_KHR",0x19);
    }
    else if (param_1 == -0x3b9aca01) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x22);
      iVar4 = (int)local_2b0 + 0x22;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
      if (local_2b0._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
      }
      builtin_wcsncpy(local_2b8,L"VK_ERROR_NATIVE_WINDOW_IN_USE_KHR",0x22);
    }
    else if (param_1 == -1000000000) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1a);
      iVar4 = (int)local_2b0 + 0x1a;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
      if (local_2b0._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
      }
      builtin_wcsncpy(local_2b8,L"VK_ERROR_SURFACE_LOST_KHR",0x1a);
    }
    goto switchD_141e6826a_caseD_0;
  }
  if (0x3b9acdeb < param_1) goto switchD_141e6826a_caseD_0;
  if (param_1 == 0x3b9acdeb) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x12);
    iVar4 = (int)local_2b0 + 0x12;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_SUBOPTIMAL_KHR",0x12);
    goto switchD_141e6826a_caseD_0;
  }
  switch(param_1) {
  case 1:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0xd);
    iVar4 = (int)local_2b0 + 0xd;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_NOT_READY",0xd);
    break;
  case 2:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0xb);
    iVar4 = (int)local_2b0 + 0xb;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_TIMEOUT",0xb);
    break;
  case 3:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0xd);
    iVar4 = (int)local_2b0 + 0xd;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_EVENT_SET",0xd);
    break;
  case 4:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0xf);
    iVar4 = (int)local_2b0 + 0xf;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_EVENT_RESET",0xf);
    break;
  case 5:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0xe);
    iVar4 = (int)local_2b0 + 0xe;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_INCOMPLETE",0xe);
    break;
  case -0xb:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1e);
    iVar4 = (int)local_2b0 + 0x1e;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_FORMAT_NOT_SUPPORTED",0x1e);
    break;
  case -10:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1a);
    iVar4 = (int)local_2b0 + 0x1a;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_TOO_MANY_OBJECTS",0x1a);
    break;
  case -9:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1d);
    iVar4 = (int)local_2b0 + 0x1d;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_INCOMPATIBLE_DRIVER",0x1d);
    break;
  case -8:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1d);
    iVar4 = (int)local_2b0 + 0x1d;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_FEATURE_NOT_PRESENT",0x1d);
    break;
  case -7:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1f);
    iVar4 = (int)local_2b0 + 0x1f;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_EXTENSION_NOT_PRESENT",0x1f);
    break;
  case -6:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1b);
    iVar4 = (int)local_2b0 + 0x1b;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_LAYER_NOT_PRESENT",0x1b);
    break;
  case -5:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1b);
    iVar4 = (int)local_2b0 + 0x1b;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_MEMORY_MAP_FAILED",0x1b);
    break;
  case -4:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x15);
    iVar4 = (int)local_2b0 + 0x15;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_DEVICE_LOST",0x15);
    DAT_1468e222a = '\x01';
    goto LAB_141e688fc;
  case -3:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1f);
    iVar4 = (int)local_2b0 + 0x1f;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_INITIALIZATION_FAILED",0x1f);
    break;
  case -2:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1e);
    iVar4 = (int)local_2b0 + 0x1e;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_OUT_OF_DEVICE_MEMORY",0x1e);
    break;
  case -1:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8,0x1c);
    iVar4 = (int)local_2b0 + 0x1c;
    local_2b0 = CONCAT44(local_2b0._4_4_,iVar4);
    if (local_2b0._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8);
    }
    builtin_wcsncpy(local_2b8,L"VK_ERROR_OUT_OF_HOST_MEMORY",0x1c);
  }
switchD_141e6826a_caseD_0:
  pwVar5 = local_2b8;
  if (DAT_1468e222a != '\0') {
LAB_141e688fc:
    pwVar5 = local_2b8;
    if ((DAT_146aafbfc != '\0') &&
       (lVar1 = *(longlong *)(DAT_146aafea8 + 0x70), (*(byte *)(lVar1 + 0x18d0) & 0xc0) != 0)) {
      FUN_141e5dcc0(*(longlong *)(lVar1 + 0x18b0) + 0x510,
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x1448) + 0x18));
    }
  }
  pwVar6 = L"";
  if ((int)local_2b0 != 0) {
    pwVar6 = pwVar5;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,param_3);
  uVar3 = local_70;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_298,param_2);
  uVar2 = local_2a8;
  local_2d8 = CONCAT44(local_2d8._4_4_,local_2a8);
  local_2e0 = uVar3;
  local_2e8 = CONCAT44(local_2e8._4_4_,param_1);
  local_2d0 = pwVar6;
  LowLevelFatalErrorHandler
            ("Unknown",0x2d9,L"%s failed, VkResult=%d\n at %s:%u \n with error %s",local_190);
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  pwVar6 = L"";
  if ((int)local_2b0 != 0) {
    pwVar6 = pwVar5;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_298,param_3);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,param_2);
  local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,uVar2);
  local_2d8 = local_190;
  local_2e0 = CONCAT44(local_2e0._4_4_,param_1);
  local_2e8 = local_70;
  local_2c8 = pwVar6;
  FDebug::AssertFailed
            (&DAT_144ea635e,"Unknown",0x2d9,L"%s failed, VkResult=%d\n at %s:%u \n with error %s");
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
  }
  return;
}



// FUNCTION 141e68ac0 WriteCmd body=37 status=ok
// SIG undefined WriteCmd(void)

void FVulkanComputeFence::WriteCmd(longlong param_1,undefined8 param_2,char param_3)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(char *)(param_1 + 0x48) = param_3;
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141e68add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146ab02b8)(param_2,*(undefined8 *)(param_1 + 0x40),0x800);
    return;
  }
  return;
}



// FUNCTION 141e68af0 FUN_141e68af0 body=616 status=ok
// SIG undefined FUN_141e68af0(void)

void FUN_141e68af0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((DAT_146ab49a0 == 0) || (DAT_146ab0540 == 0)) {
    uVar2 = FOpenGLComputeShader::GetTextureNeeds();
    iVar3 = 0;
    uVar4 = 1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = iVar3 + 0x1f;
      }
      if ((*(uint *)(((ulonglong)(*(longlong *)(uVar2 + 0x10) != 0) - 1 & uVar2 |
                     *(ulonglong *)(uVar2 + 0x10)) + (longlong)(iVar1 >> 5) * 4) & uVar4) == 0) {
        lVar5 = *(longlong *)(param_2 + 8) + lVar7;
        if ((*(int *)(lVar5 + 0x10) != 0) || (*(int *)(lVar5 + 0x14) != 0)) {
          if (*(int *)(param_2 + 0x3f0) != iVar3) {
            (*DAT_146ab4228)(iVar3 + 0x84c0);
            *(int *)(param_2 + 0x3f0) = iVar3;
          }
          (*DAT_146ab3f98)();
          *(undefined8 *)(lVar5 + 0x14) = 0;
          *(undefined4 *)(lVar5 + 0x20) = 0;
          *(undefined4 *)(lVar5 + 0x10) = 0;
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x1b0) + lVar7;
        iVar1 = *(int *)(lVar5 + 0x10);
        if ((*(int *)(lVar7 + 0x10 + *(longlong *)(param_2 + 8)) != iVar1) ||
           (*(int *)(lVar7 + 0x14 + *(longlong *)(param_2 + 8)) != *(int *)(lVar5 + 0x14))) {
          FUN_141e6dbc0(param_1,param_2,iVar3,iVar1,*(int *)(lVar5 + 0x14),
                        *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20));
          iVar1 = *(int *)(lVar5 + 0x10);
        }
        if (iVar1 == 0x8d65) {
          (*DAT_146ab4188)(iVar3,0);
          *(undefined8 *)(lVar6 + *(longlong *)(param_2 + 0x10)) = 0;
          FOpenGLDynamicRHI::ApplyTextureStage
                    (param_1,param_2,iVar3,lVar5,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar6));
        }
        else {
          lVar5 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x1b8));
          if (*(longlong *)(lVar6 + *(longlong *)(param_2 + 0x10)) != lVar5) {
            (*DAT_146ab4188)(iVar3);
            *(longlong *)(lVar6 + *(longlong *)(param_2 + 0x10)) = lVar5;
          }
        }
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + 8;
    } while (iVar3 < 1);
    iVar3 = 1;
    if (1 < param_4) {
      lVar6 = 0x28;
      do {
        lVar7 = *(longlong *)(param_2 + 8);
        if ((*(int *)(lVar7 + 0x10 + lVar6) != 0) || (*(int *)(lVar7 + 0x14 + lVar6) != 0)) {
          if (*(int *)(param_2 + 0x3f0) != iVar3) {
            (*DAT_146ab4228)(iVar3 + 0x84c0);
            *(int *)(param_2 + 0x3f0) = iVar3;
          }
          (*DAT_146ab3f98)(*(undefined4 *)(lVar7 + 0x10 + lVar6),0);
          *(undefined8 *)(lVar7 + 0x14 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0x20 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0x10 + lVar6) = 0;
        }
        iVar3 = iVar3 + 1;
        lVar6 = lVar6 + 0x28;
      } while (iVar3 < param_4);
    }
  }
  return;
}



// FUNCTION 141e68d60 FUN_141e68d60 body=616 status=ok
// SIG undefined FUN_141e68d60(void)

void FUN_141e68d60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((DAT_146ab49a0 == 0) || (DAT_146ab0540 == 0)) {
    uVar2 = FUN_141e9c2f0();
    iVar3 = 0;
    uVar4 = 1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = iVar3 + 0x1f;
      }
      if ((*(uint *)(((ulonglong)(*(longlong *)(uVar2 + 0x10) != 0) - 1 & uVar2 |
                     *(ulonglong *)(uVar2 + 0x10)) + (longlong)(iVar1 >> 5) * 4) & uVar4) == 0) {
        lVar5 = *(longlong *)(param_2 + 8) + lVar7;
        if ((*(int *)(lVar5 + 0x10) != 0) || (*(int *)(lVar5 + 0x14) != 0)) {
          if (*(int *)(param_2 + 0x3f0) != iVar3) {
            (*DAT_146ab4228)(iVar3 + 0x84c0);
            *(int *)(param_2 + 0x3f0) = iVar3;
          }
          (*DAT_146ab3f98)();
          *(undefined8 *)(lVar5 + 0x14) = 0;
          *(undefined4 *)(lVar5 + 0x20) = 0;
          *(undefined4 *)(lVar5 + 0x10) = 0;
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x1b0) + lVar7;
        iVar1 = *(int *)(lVar5 + 0x10);
        if ((*(int *)(lVar7 + 0x10 + *(longlong *)(param_2 + 8)) != iVar1) ||
           (*(int *)(lVar7 + 0x14 + *(longlong *)(param_2 + 8)) != *(int *)(lVar5 + 0x14))) {
          FUN_141e6dbc0(param_1,param_2,iVar3,iVar1,*(int *)(lVar5 + 0x14),
                        *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20));
          iVar1 = *(int *)(lVar5 + 0x10);
        }
        if (iVar1 == 0x8d65) {
          (*DAT_146ab4188)(iVar3,0);
          *(undefined8 *)(lVar6 + *(longlong *)(param_2 + 0x10)) = 0;
          FOpenGLDynamicRHI::ApplyTextureStage
                    (param_1,param_2,iVar3,lVar5,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + lVar6));
        }
        else {
          lVar5 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x1b8));
          if (*(longlong *)(lVar6 + *(longlong *)(param_2 + 0x10)) != lVar5) {
            (*DAT_146ab4188)(iVar3);
            *(longlong *)(lVar6 + *(longlong *)(param_2 + 0x10)) = lVar5;
          }
        }
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + 8;
    } while (iVar3 < 1);
    iVar3 = 1;
    if (1 < param_4) {
      lVar6 = 0x28;
      do {
        lVar7 = *(longlong *)(param_2 + 8);
        if ((*(int *)(lVar7 + 0x10 + lVar6) != 0) || (*(int *)(lVar7 + 0x14 + lVar6) != 0)) {
          if (*(int *)(param_2 + 0x3f0) != iVar3) {
            (*DAT_146ab4228)(iVar3 + 0x84c0);
            *(int *)(param_2 + 0x3f0) = iVar3;
          }
          (*DAT_146ab3f98)(*(undefined4 *)(lVar7 + 0x10 + lVar6),0);
          *(undefined8 *)(lVar7 + 0x14 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0x20 + lVar6) = 0;
          *(undefined4 *)(lVar7 + 0x10 + lVar6) = 0;
        }
        iVar3 = iVar3 + 1;
        lVar6 = lVar6 + 0x28;
      } while (iVar3 < param_4);
    }
  }
  return;
}



// FUNCTION 141e68fd0 FUN_141e68fd0 body=671 status=ok
// SIG undefined FUN_141e68fd0(void)

undefined8 *
FUN_141e68fd0(undefined8 *param_1,undefined4 param_2,int param_3,uint param_4,void *param_5,
             byte param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  *param_1 = &PTR_FUN_143f3ece8;
  _Dst = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144eb66d8;
  *(int *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(uint *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(uint *)(param_1 + 7) = ((uint)param_6 << 2 | *(uint *)(param_1 + 7) & 0xfffffff8) & 0xfffffff7;
  if (param_8 != 0) {
    param_3 = param_8;
  }
  *(int *)(param_1 + 10) = param_3;
  if (((DAT_1464c97cd != '\0') && (DAT_1464c97d0 != 0)) || ((param_4 >> 0xb & 1) == 0)) {
    if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
      if (param_5 != (void *)0x0) {
        iVar1 = *(int *)(param_1 + 10);
        _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        if (DAT_146ab6eb0 < puVar3) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,iVar1 + 0x10);
          _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        }
        DAT_146ab6ea8 = puVar3;
        _guard_xfg_dispatch_icall_nop(_Dst,param_5,(ulonglong)*(uint *)(param_1 + 10));
      }
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar3) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar3;
      *DAT_146ab6e80 = puVar4;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        local_88 = SUB84(param_1,0);
        uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_80 = SUB84(_Dst,0);
        uStack_7c = (undefined4)((ulonglong)_Dst >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_88;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
        *(undefined4 *)(puVar3 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
        *puVar3 = &PTR_FUN_144eb6788;
        puVar3[3] = CONCAT44(param_8,param_7);
      }
      local_68[0] = &LAB_141e6ddf0;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 == (longlong *)0x0) {
        return param_1;
      }
      FMemory::Free();
      return param_1;
    }
    TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::CreateGLBuffer
              (param_1,param_5,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 141e69270 FUN_141e69270 body=648 status=ok
// SIG undefined FUN_141e69270(void)

undefined8 *
FUN_141e69270(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,void *param_5,
             byte param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  _Dst = (void *)0x0;
  *param_1 = &PTR_FUN_144eb66d0;
  *(int *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((longlong)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  if (param_8 != 0) {
    param_3 = param_8;
  }
  *(uint *)(param_1 + 5) = ((uint)param_6 << 2 | *(uint *)(param_1 + 5) & 0xfffffff8) & 0xfffffff7;
  *(int *)(param_1 + 8) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  if (((DAT_1464c97cd != '\0') && (DAT_1464c97d0 != 0)) || ((param_4 >> 0xb & 1) == 0)) {
    if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
      if (param_5 != (void *)0x0) {
        iVar1 = *(int *)(param_1 + 8);
        _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        if (DAT_146ab6eb0 < puVar3) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,iVar1 + 0x10);
          _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        }
        DAT_146ab6ea8 = puVar3;
        _guard_xfg_dispatch_icall_nop(_Dst,param_5,(ulonglong)*(uint *)(param_1 + 8));
      }
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar3) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar3;
      *DAT_146ab6e80 = puVar4;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        local_88 = SUB84(param_1,0);
        uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_80 = SUB84(_Dst,0);
        uStack_7c = (undefined4)((ulonglong)_Dst >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_88;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
        *(undefined4 *)(puVar3 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
        *puVar3 = &PTR_FUN_144eb6788;
        puVar3[3] = CONCAT44(param_8,param_7);
      }
      local_68[0] = &LAB_141e6de70;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 == (longlong *)0x0) {
        return param_1;
      }
      FMemory::Free();
      return param_1;
    }
    TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::CreateGLBuffer
              (param_1,param_5,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 141e69500 FUN_141e69500 body=698 status=ok
// SIG undefined FUN_141e69500(void)

undefined8 *
FUN_141e69500(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,void *param_5,
             byte param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *_Dst;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  _Dst = (void *)0x0;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eb5ac0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(int *)(param_1 + 3) = param_3;
  *(uint *)((longlong)param_1 + 0x1c) = param_4;
  param_1[4] = 0;
  if (((DAT_1464c97cd == '\0') || (DAT_1464c97d0 == 0)) && ((param_4 >> 0xb & 1) != 0)) {
    uVar3 = FMemory::Malloc(param_3,0);
    param_1[4] = uVar3;
  }
  *param_1 = &PTR_FUN_144eb5b00;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 7) = ((uint)param_6 << 2 | *(uint *)(param_1 + 7) & 0xfffffff8) & 0xfffffff7;
  param_1[9] = 0;
  if (param_8 != 0) {
    param_3 = param_8;
  }
  *(int *)(param_1 + 10) = param_3;
  if (((DAT_1464c97cd != '\0') && (DAT_1464c97d0 != 0)) || ((param_4 >> 0xb & 1) == 0)) {
    if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
      if (param_5 != (void *)0x0) {
        iVar1 = *(int *)(param_1 + 10);
        _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar4 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        if (DAT_146ab6eb0 < puVar4) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,iVar1 + 0x10);
          _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar4 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        }
        DAT_146ab6ea8 = puVar4;
        _guard_xfg_dispatch_icall_nop(_Dst,param_5,(ulonglong)*(uint *)(param_1 + 10));
      }
      puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar4 = puVar5 + 0xc;
      if (DAT_146ab6eb0 < puVar4) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar4 = puVar5 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar4;
      *DAT_146ab6e80 = puVar5;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar5 + 1;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar4 != (undefined8 *)0x0) {
        local_88 = SUB84(param_1,0);
        uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_80 = SUB84(_Dst,0);
        uStack_7c = (undefined4)((ulonglong)_Dst >> 0x20);
        *(undefined4 *)(puVar4 + 1) = local_88;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_84;
        *(undefined4 *)(puVar4 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_7c;
        *puVar4 = &PTR_FUN_144eb6788;
        puVar4[3] = CONCAT44(param_8,param_7);
      }
      local_68[0] = &LAB_141e6df80;
      puVar5[1] = 0;
      *puVar5 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 2,local_68);
      if (local_28 != 0) {
        plVar6 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar6 = local_38;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_38 == (longlong *)0x0) {
        return param_1;
      }
      FMemory::Free();
      return param_1;
    }
    TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::CreateGLBuffer
              (param_1,param_5,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 141e697c0 FOpenGLBlendStateData body=291 status=ok
// SIG undefined FOpenGLBlendStateData(void)

undefined1 * FOpenGLBlendStateData::FOpenGLBlendStateData(undefined1 *param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffff0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffff0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffff0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffff0;
  param_1[0xb4] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffffff0;
  param_1[0xd8] = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) & 0xfffffff0;
  param_1[0xfc] = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x10c] = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) & 0xfffffff0;
  return param_1;
}



// FUNCTION 141e698f0 FOpenGLContextState body=1325 status=ok
// SIG undefined FOpenGLContextState(void)

undefined8 * FOpenGLContextState::FOpenGLContextState(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b20;
  param_1[4] = 0x1b02;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x201;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x207;
  *(undefined4 *)(param_1 + 8) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x1e00;
  *(undefined4 *)(param_1 + 9) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x207;
  *(undefined4 *)(param_1 + 10) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1e00;
  *(undefined4 *)(param_1 + 0xb) = 0x1e00;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  FOpenGLBlendStateData::FOpenGLBlendStateData(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x84c0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x87) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x88) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  param_1[0x94] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  param_1[0x99] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0xffffffff;
  param_1[0x9e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  param_1[0xa3] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0xffffffff;
  param_1[0xa8] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  param_1[0xad] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  param_1[0xb2] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  param_1[0xb7] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  param_1[0xbc] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  param_1[0xc1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  param_1[0xc6] = 0xffffffff;
  *(undefined4 *)(param_1 + 199) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  param_1[0xcb] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xffffffff;
  param_1[0xd0] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  param_1[0xd5] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0xffffffff;
  param_1[0xda] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(undefined4 *)(param_1 + 0xde) = 0xffffffff;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x10b) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  ::_guard_xfg_dispatch_icall_nop(param_1 + 0x34,0,0x240);
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  return param_1;
}



// FUNCTION 141e69e20 FUN_141e69e20 body=1071 status=ok
// SIG undefined FUN_141e69e20(void)

undefined8 * FUN_141e69e20(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined2 *local_18;
  int local_10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = &PTR__purecall_144d83e88;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x160);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_144eb5bf8;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
  param_1[6] = &PTR_StartProfileThreadUsage_144eb6358;
  param_1[7] = &PTR_FUN_144eb6658;
  FOpenGLRHIState::FOpenGLRHIState(param_1 + 0x35);
  plVar3 = param_1 + 0x125;
  param_1[0x116] = &PTR__scalar_deleting_destructor__144eb5bf0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x11b] = &PTR__scalar_deleting_destructor__144eb5bf0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x126) = 4;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144da11d0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  puVar6 = param_1 + 299;
  for (lVar4 = 10000; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x283b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x283c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x283c),4000);
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144da1210;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf270(plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0x28))();
  }
  FOpenGLContextState::FOpenGLContextState(param_1 + 0x2841);
  FOpenGLContextState::FOpenGLContextState(param_1 + 0x2954);
  FOpenGLContextState::FOpenGLContextState(param_1 + 0x2a67);
  *(undefined4 *)(param_1 + 0x2b7a) = 0xfffffffe;
  param_1[0x2b7b] = 0;
  param_1[0x2b7c] = 0;
  param_1[0x2b7f] = 0;
  param_1[0x2b80] = 0;
  *(undefined4 *)(param_1 + 0x2b81) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c0c) = 0;
  param_1[0x2b83] = 0;
  *(undefined4 *)(param_1 + 0x2b84) = 0;
  param_1[0x2b85] = 0;
  param_1[0x2b86] = 0;
  param_1[0x2b87] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b88));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b88),4000);
  FUN_141e6a250(param_1 + 0x2b8d,param_1);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2bc1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2bc1),4000);
  param_1[0x2bc6] = 0;
  param_1[0x2c07] = 0;
  param_1[0x2c08] = 0;
  *(undefined4 *)(param_1 + 0x2c09) = 0;
  PlatformInitOpenGL();
  uVar2 = PlatformCreateOpenGLDevice();
  param_1[0x2b85] = uVar2;
  FUN_141e71cd0();
  cVar1 = FUN_141eaf7d0();
  if (cVar1 != '\0') {
    FUN_141ec1dd0(param_1,1);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UBODirectWrite");
    if (plVar3 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,0);
      puVar5 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar5 = local_18;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x8000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UseStagingBuffer");
    if (plVar3 != (longlong *)0x0) {
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,0);
      puVar5 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar5 = local_18;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,puVar5,0x8000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    DAT_146ab3d80 = param_1;
    return param_1;
  }
  DAT_146ab3d80 = param_1;
  return param_1;
}



// FUNCTION 141e6a250 FUN_141e6a250 body=448 status=ok
// SIG undefined FUN_141e6a250(void)

undefined8 * FUN_141e6a250(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_144da0ca0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  plVar1 = param_1 + 0x11;
  *plVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar5 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0x12);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0x12) = iVar3;
  if (*(int *)((longlong)param_1 + 0x94) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *plVar1),0,lVar5 << 4);
  lVar5 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0xb);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0xb) = iVar3;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 10);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + param_1[10]),0,lVar5 << 4);
  lVar5 = 4;
  *param_1 = &PTR_FUN_144eb5ba8;
  FUN_141e8cd50(param_1 + 0x19,param_2,4);
  puVar4 = param_1 + 0x23;
  do {
    FOpenGLDisjointTimeStampQuery::FOpenGLDisjointTimeStampQuery(puVar4,0);
    puVar4 = puVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x30] = param_2;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 141e6a410 FOpenGLRHIState body=1297 status=ok
// SIG undefined FOpenGLRHIState(void)

undefined8 * FOpenGLRHIState::FOpenGLRHIState(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b38;
  param_1[4] = 0x1b02;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x201;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x207;
  *(undefined4 *)(param_1 + 8) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x1e00;
  *(undefined4 *)(param_1 + 9) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x207;
  *(undefined4 *)(param_1 + 10) = 0x1e00;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1e00;
  *(undefined4 *)(param_1 + 0xb) = 0x1e00;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  FOpenGLBlendStateData::FOpenGLBlendStateData(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
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
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  ::_guard_xfg_dispatch_icall_nop(param_1 + 0x3a,0,0x80);
  return param_1;
}



// FUNCTION 141e6a930 FUN_141e6a930 body=257 status=ok
// SIG undefined FUN_141e6a930(void)

void FUN_141e6a930(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR_FUN_144eb5b78;
    FUN_141ea9120(puVar1 + 3);
    AK::MemoryMgr::StartProfileThreadUsage((int)puVar1 + 0x68);
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    if (puVar1[8] != 0) {
      FMemory::Free();
    }
    puVar1[3] = &PTR_FUN_144da0c80;
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e6aa40 ~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2> body=164 status=ok
// SIG undefined ~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>(void)

undefined **
TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
::
~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
          (undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined **ppuVar5;
  longlong lVar6;
  
  lVar6 = 2;
  ppuVar5 = &PTR__scalar_deleting_destructor__144eb5bf0;
  *param_1 = &PTR__scalar_deleting_destructor__144eb5bf0;
  param_1 = param_1 + 3;
  do {
    puVar3 = (undefined8 *)param_1[-1];
    param_1 = param_1 + -1;
    lVar6 = lVar6 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar3 + 1);
      uVar2 = *puVar1;
      ppuVar5 = (undefined **)(ulonglong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        if (*(char *)(puVar3 + 2) == '\0') {
          if (DAT_146ab62f5 == '\0') {
            cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
            if (cVar4 != '\0') goto LAB_141e6aac0;
          }
          ppuVar5 = (undefined **)0x0;
          LOCK();
          uVar2 = *(uint *)((longlong)puVar3 + 0xc);
          if (uVar2 == 0) {
            *(uint *)((longlong)puVar3 + 0xc) = 1;
          }
          else {
            ppuVar5 = (undefined **)(ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 == 0) {
            ppuVar5 = (undefined **)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
LAB_141e6aac0:
          ppuVar5 = (undefined **)(**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    if (lVar6 == 0) {
      return ppuVar5;
    }
  } while( true );
}



// FUNCTION 141e6aaf0 FUN_141e6aaf0 body=675 status=ok
// SIG undefined FUN_141e6aaf0(void)

void FUN_141e6aaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144eb5bf8;
  param_1[6] = &PTR_StartProfileThreadUsage_144eb6358;
  param_1[7] = &PTR_FUN_144eb6658;
  if (param_1[0x2c07] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2bc6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2bc1));
  FUN_141e6a930(param_1 + 0x2bbf);
  if (param_1[0x2bad] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2bab] != 0) {
    FMemory::Free();
  }
  param_1[0x2ba6] = &PTR_FUN_144da0c80;
  FUN_141a24df0(param_1 + 0x2b8d);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b88));
  if (param_1[0x2b86] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2b84) = 0;
  if (param_1[0x2b83] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2b7b);
  if (param_1[0x2ae3] != 0) {
    FMemory::Free();
  }
  param_1[0x2a67] = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[0x2a6a]);
  FMemory::operator_delete(param_1[0x2a69]);
  FMemory::operator_delete(param_1[0x2a68]);
  param_1[0x2a6a] = 0;
  param_1[0x2a69] = 0;
  param_1[0x2a68] = 0;
  if (param_1[0x29d0] != 0) {
    FMemory::Free();
  }
  param_1[0x2954] = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[0x2957]);
  FMemory::operator_delete(param_1[0x2956]);
  FMemory::operator_delete(param_1[0x2955]);
  param_1[0x2957] = 0;
  param_1[0x2956] = 0;
  param_1[0x2955] = 0;
  if (param_1[0x28bd] != 0) {
    FMemory::Free();
  }
  param_1[0x2841] = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[0x2844]);
  FMemory::operator_delete(param_1[0x2843]);
  FMemory::operator_delete(param_1[0x2842]);
  param_1[0x2844] = 0;
  param_1[0x2843] = 0;
  param_1[0x2842] = 0;
  param_1[0x125] = &PTR__scalar_deleting_destructor__144da1210;
  FRenderResource::ReleaseResource(param_1 + 0x125);
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>(param_1 + 0x125);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x123);
  if (param_1[0x121] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x120);
  TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
  ::
  ~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
            (param_1 + 0x11b);
  TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
  ::
  ~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
            (param_1 + 0x116);
  FOpenGLRHIState::~FOpenGLRHIState(param_1 + 0x35);
  param_1[6] = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[7] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 141e6ada0 FUN_141e6ada0 body=115 status=ok
// SIG undefined FUN_141e6ada0(void)

void FUN_141e6ada0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144eb5b78;
  FUN_141ea9120(param_1 + 3);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x68);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[3] = &PTR_FUN_144da0c80;
  *param_1 = &PTR_FUN_144da0c50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e6ae20 ~FOpenGLRHIState body=498 status=ok
// SIG undefined ~FOpenGLRHIState(void)

void FOpenGLRHIState::~FOpenGLRHIState(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b38;
  lVar7 = param_1[0x84];
  if (lVar7 != 0) {
    lVar5 = *(longlong *)(lVar7 + -8);
    lVar9 = lVar5 * 0x80 + lVar7;
    lVar6 = 0;
    if (lVar5 != 0) {
      do {
        lVar9 = lVar9 + -0x80;
        FOpenGLShaderParameterCache::~FOpenGLShaderParameterCache(lVar9);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar6 = *(longlong *)(lVar7 + -8);
    }
    FMemory::operator_delete((longlong *)(lVar7 + -8),lVar6 * 0x80 + 8);
  }
  plVar10 = param_1 + 0x87;
  param_1[0x84] = 0;
  lVar7 = 6;
  do {
    lVar5 = 0xe;
    do {
      puVar8 = (undefined8 *)*plVar10;
      *plVar10 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar8 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar8 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar11 = *(int *)((longlong)puVar8 + 0xc) == 0;
            if (bVar11) {
              *(int *)((longlong)puVar8 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar11) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar8);
            }
          }
          else {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      plVar10 = plVar10 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[2]);
  FMemory::operator_delete(param_1[1]);
  param_1[3] = 0;
  puVar8 = param_1 + 0xdb;
  param_1[2] = 0;
  lVar7 = 0x54;
  param_1[1] = 0;
  do {
    puVar3 = (undefined8 *)puVar8[-1];
    puVar8 = puVar8 + -1;
    lVar7 = lVar7 + -1;
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
          bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar7 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x86);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x85);
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[2]);
  FMemory::operator_delete(param_1[1]);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 141e6b020 operator= body=3707 status=ok
// SIG undefined operator=(void)

longlong FOpenGLContextState::operator=(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  lVar11 = 2;
  puVar7 = (undefined8 *)(param_1 + 0x68);
  puVar8 = (undefined8 *)(param_2 + 0x68);
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0x84);
  uVar4 = *(undefined4 *)(puVar10 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0x8c);
  *(undefined4 *)(puVar9 + 0x10) = *(undefined4 *)(puVar10 + 0x10);
  *(undefined4 *)((longlong)puVar9 + 0x84) = uVar3;
  *(undefined4 *)(puVar9 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0x94);
  uVar4 = *(undefined4 *)(puVar10 + 0x13);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0x9c);
  *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar10 + 0x12);
  *(undefined4 *)((longlong)puVar9 + 0x94) = uVar3;
  *(undefined4 *)(puVar9 + 0x13) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x19c) = *(undefined1 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_2 + 0x364);
  plVar1 = (longlong *)(param_2 + 0x3e0);
  plVar2 = (longlong *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_2 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
    *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
    *(undefined8 *)(param_2 + 1000) = 0;
  }
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined1 *)(param_1 + 0x3f4) = *(undefined1 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  uVar6 = *(undefined8 *)(param_2 + 0x438);
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_2 + 0x430);
  *(undefined8 *)(param_1 + 0x438) = uVar6;
  *(undefined2 *)(param_1 + 0x440) = *(undefined2 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  uVar6 = *(undefined8 *)(param_2 + 0x480);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_2 + 0x478);
  *(undefined8 *)(param_1 + 0x480) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x490);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
  *(undefined8 *)(param_1 + 0x490) = uVar6;
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  uVar6 = *(undefined8 *)(param_2 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b8) = uVar6;
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_2 + 0x4c0);
  uVar6 = *(undefined8 *)(param_2 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4d0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4e0) = uVar6;
  *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x4e8);
  uVar6 = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x508);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x508) = uVar6;
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0x510);
  uVar6 = *(undefined8 *)(param_2 + 0x520);
  *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_2 + 0x518);
  *(undefined8 *)(param_1 + 0x520) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x530);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x528);
  *(undefined8 *)(param_1 + 0x530) = uVar6;
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_2 + 0x538);
  uVar6 = *(undefined8 *)(param_2 + 0x548);
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + 0x540);
  *(undefined8 *)(param_1 + 0x548) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x550);
  *(undefined8 *)(param_1 + 0x558) = uVar6;
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_2 + 0x560);
  uVar6 = *(undefined8 *)(param_2 + 0x570);
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_2 + 0x568);
  *(undefined8 *)(param_1 + 0x570) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x580);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_2 + 0x578);
  *(undefined8 *)(param_1 + 0x580) = uVar6;
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  uVar6 = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_2 + 0x590);
  *(undefined8 *)(param_1 + 0x598) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = uVar6;
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x5b0);
  uVar6 = *(undefined8 *)(param_2 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5c0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_2 + 0x5c8);
  *(undefined8 *)(param_1 + 0x5d0) = uVar6;
  *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)(param_2 + 0x5d8);
  uVar6 = *(undefined8 *)(param_2 + 0x5e8);
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_1 + 0x5e8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_1 + 0x5f8) = uVar6;
  *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_2 + 0x600);
  uVar6 = *(undefined8 *)(param_2 + 0x610);
  *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_2 + 0x608);
  *(undefined8 *)(param_1 + 0x610) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x620);
  *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_2 + 0x618);
  *(undefined8 *)(param_1 + 0x620) = uVar6;
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x628);
  uVar6 = *(undefined8 *)(param_2 + 0x638);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x630);
  *(undefined8 *)(param_1 + 0x638) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x648);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x648) = uVar6;
  *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_2 + 0x650);
  uVar6 = *(undefined8 *)(param_2 + 0x660);
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_2 + 0x658);
  *(undefined8 *)(param_1 + 0x660) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x670);
  *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)(param_2 + 0x668);
  *(undefined8 *)(param_1 + 0x670) = uVar6;
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(param_2 + 0x678);
  uVar6 = *(undefined8 *)(param_2 + 0x688);
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_2 + 0x680);
  *(undefined8 *)(param_1 + 0x688) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x698);
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(param_2 + 0x690);
  *(undefined8 *)(param_1 + 0x698) = uVar6;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(param_2 + 0x6a0);
  uVar6 = *(undefined8 *)(param_2 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_2 + 0x6a8);
  *(undefined8 *)(param_1 + 0x6b0) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x6c0);
  *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6c0) = uVar6;
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_2 + 0x6c8);
  uVar6 = *(undefined8 *)(param_2 + 0x6d8);
  *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_2 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x6e8);
  *(undefined8 *)(param_1 + 0x6e0) = *(undefined8 *)(param_2 + 0x6e0);
  *(undefined8 *)(param_1 + 0x6e8) = uVar6;
  *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_2 + 0x6f0);
  uVar6 = *(undefined8 *)(param_2 + 0x700);
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(param_2 + 0x6f8);
  *(undefined8 *)(param_1 + 0x700) = uVar6;
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_2 + 0x708);
  uVar6 = *(undefined8 *)(param_2 + 0x718);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(param_2 + 0x710);
  *(undefined8 *)(param_1 + 0x718) = uVar6;
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x720);
  uVar6 = *(undefined8 *)(param_2 + 0x730);
  *(undefined8 *)(param_1 + 0x728) = *(undefined8 *)(param_2 + 0x728);
  *(undefined8 *)(param_1 + 0x730) = uVar6;
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x738);
  uVar6 = *(undefined8 *)(param_2 + 0x748);
  *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_2 + 0x740);
  *(undefined8 *)(param_1 + 0x748) = uVar6;
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_2 + 0x750);
  uVar6 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_2 + 0x758);
  *(undefined8 *)(param_1 + 0x760) = uVar6;
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_2 + 0x768);
  uVar6 = *(undefined8 *)(param_2 + 0x778);
  *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_2 + 0x770);
  *(undefined8 *)(param_1 + 0x778) = uVar6;
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_2 + 0x780);
  uVar6 = *(undefined8 *)(param_2 + 0x790);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 0x788);
  *(undefined8 *)(param_1 + 0x790) = uVar6;
  *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(param_2 + 0x798);
  uVar6 = *(undefined8 *)(param_2 + 0x7a8);
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_2 + 0x7a0);
  *(undefined8 *)(param_1 + 0x7a8) = uVar6;
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_2 + 0x7b0);
  uVar6 = *(undefined8 *)(param_2 + 0x7c0);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_2 + 0x7b8);
  *(undefined8 *)(param_1 + 0x7c0) = uVar6;
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(param_2 + 0x7c8);
  uVar6 = *(undefined8 *)(param_2 + 0x7d8);
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_2 + 2000);
  *(undefined8 *)(param_1 + 0x7d8) = uVar6;
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_2 + 0x7e0);
  uVar6 = *(undefined8 *)(param_2 + 0x7f0);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_2 + 0x7e8);
  *(undefined8 *)(param_1 + 0x7f0) = uVar6;
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_2 + 0x7f8);
  uVar6 = *(undefined8 *)(param_2 + 0x808);
  *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_2 + 0x800);
  *(undefined8 *)(param_1 + 0x808) = uVar6;
  *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(param_2 + 0x810);
  uVar6 = *(undefined8 *)(param_2 + 0x820);
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_2 + 0x818);
  *(undefined8 *)(param_1 + 0x820) = uVar6;
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_2 + 0x828);
  uVar6 = *(undefined8 *)(param_2 + 0x838);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_2 + 0x830);
  *(undefined8 *)(param_1 + 0x838) = uVar6;
  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_2 + 0x840);
  uVar6 = *(undefined8 *)(param_2 + 0x850);
  *(undefined8 *)(param_1 + 0x848) = *(undefined8 *)(param_2 + 0x848);
  *(undefined8 *)(param_1 + 0x850) = uVar6;
  *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_2 + 0x858);
  uVar6 = *(undefined8 *)(param_2 + 0x868);
  *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_2 + 0x860);
  *(undefined8 *)(param_1 + 0x868) = uVar6;
  *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(param_2 + 0x870);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 0x878);
  *(undefined8 *)(param_1 + 0x880) = *(undefined8 *)(param_2 + 0x880);
  *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_2 + 0x888);
  *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(param_2 + 0x88c);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 0x890);
  return param_1;
}



// FUNCTION 141e6bea0 FUN_141e6bea0 body=99 status=ok
// SIG undefined FUN_141e6bea0(void)

void FUN_141e6bea0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_146ab3d80;
  iVar1 = *param_1;
  if (*(int *)(DAT_146ab3d80 + 0x14ec8) == iVar1) {
    *(undefined4 *)(DAT_146ab3d80 + 0x14ec8) = 0xffffffff;
  }
  if (*(int *)(lVar2 + 0x15760) == iVar1) {
    *(undefined4 *)(lVar2 + 0x15760) = 0xffffffff;
  }
  (*DAT_146ab42f8)(1,param_1);
  if ((*(longlong *)(param_1 + 4) != 0) && (param_1[6] != 0)) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e6bf10 operator() body=328 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_07c8748e8153ec0c8e1dba076530b200>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FOpenGLDynamicRHI::RHICreateTextureExternal2D
            (param_1[1],&local_res10,*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
             *(undefined1 *)param_1[4],*(undefined4 *)param_1[5],*(undefined4 *)param_1[6],
             *(undefined4 *)param_1[7],param_1[8]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c060 operator() body=295 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_0cf6b0acccaa163478d0c040beaa6238>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FUN_141ea2c20(param_1[1],&local_res10,*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                *(undefined4 *)param_1[4],param_1[5]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c190 FUN_141e6c190 body=328 status=ok
// SIG undefined FUN_141e6c190(void)

longlong **** FUN_141e6c190(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FUN_141ea3660(param_1[1],&local_res10,*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                *(undefined4 *)param_1[4],*(undefined1 *)param_1[5],*(undefined4 *)param_1[6],
                *(undefined4 *)param_1[7],param_1[8]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c2e0 FUN_141e6c2e0 body=107 status=ok
// SIG undefined FUN_141e6c2e0(void)

void FUN_141e6c2e0(undefined8 *param_1)

{
  FUN_141e9ce10(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
                *(undefined4 *)((longlong)param_1 + 0x14),*(undefined1 *)(param_1 + 3),
                *(undefined1 *)((longlong)param_1 + 0x19),*(undefined1 *)((longlong)param_1 + 0x1a),
                *(undefined1 *)((longlong)param_1 + 0x1b),*(undefined4 *)((longlong)param_1 + 0x1c),
                *(undefined4 *)(param_1 + 4),*(undefined4 *)((longlong)param_1 + 0x24),
                *(undefined4 *)(param_1 + 5),param_1 + 8,param_1[6]);
  return;
}



// FUNCTION 141e6c350 FUN_141e6c350 body=99 status=ok
// SIG undefined FUN_141e6c350(void)

void FUN_141e6c350(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_146ab3d80;
  iVar1 = *param_1;
  if (*(int *)(DAT_146ab3d80 + 0x14ec4) == iVar1) {
    *(undefined4 *)(DAT_146ab3d80 + 0x14ec4) = 0xffffffff;
  }
  if (*(int *)(lVar2 + 0x1575c) == iVar1) {
    *(undefined4 *)(lVar2 + 0x1575c) = 0xffffffff;
  }
  (*DAT_146ab42f8)(1,param_1);
  if ((*(longlong *)(param_1 + 4) != 0) && (param_1[6] != 0)) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e6c3c0 operator() body=318 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_4feb00e8ba3c9473effe5a1aae59c85e>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FOpenGLDynamicRHI::RHICreateTextureCubeArray
            (param_1[1],&local_res10,*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
             *(undefined1 *)param_1[4],*(undefined4 *)param_1[5],*(undefined4 *)param_1[6],
             param_1[7]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c500 FUN_141e6c500 body=106 status=ok
// SIG undefined FUN_141e6c500(void)

void FUN_141e6c500(undefined8 *param_1)

{
  FUN_141e9ce10(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 2),
                *(undefined1 *)((longlong)param_1 + 0x14),*(undefined1 *)((longlong)param_1 + 0x15),
                *(undefined1 *)((longlong)param_1 + 0x16),*(undefined1 *)((longlong)param_1 + 0x17),
                *(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c),
                *(undefined4 *)(param_1 + 4),*(undefined4 *)((longlong)param_1 + 0x24),param_1 + 7,
                param_1[5]);
  return;
}



// FUNCTION 141e6c570 FUN_141e6c570 body=328 status=ok
// SIG undefined FUN_141e6c570(void)

longlong **** FUN_141e6c570(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FUN_141ea2dc0(param_1[1],&local_res10,*(undefined4 *)param_1[2],*(undefined4 *)param_1[3],
                *(undefined4 *)param_1[4],*(undefined1 *)param_1[5],*(undefined4 *)param_1[6],
                *(undefined4 *)param_1[7],param_1[8]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c6c0 operator() body=277 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_8175500fa00e01661346078d3ffa3f25>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FOpenGLDynamicRHI::RHICreateUnorderedAccessView
            (param_1[1],&local_res10,*(undefined8 *)param_1[2],*(undefined1 *)param_1[3]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c7e0 operator() body=288 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_b816e8aefe5055d44d387481c5372c15>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FUN_141ea40c0(param_1[1],&local_res10,*(undefined8 *)param_1[2],*(undefined1 *)param_1[3],
                *(undefined1 *)param_1[4]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6c900 operator() body=276 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_cc2cff3375200164d318c2e1cc346a9c>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FOpenGLDynamicRHI::RHICreateUnorderedAccessView
            (param_1[1],&local_res10,*(undefined8 *)param_1[2],*(undefined4 *)param_1[3]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6ca20 operator() body=324 status=ok
// SIG undefined operator()(void)

longlong **** <lambda_e88e75bb5d0dcac2674ddcc67b374bff>::operator()(longlong *param_1)

{
  longlong ***ppplVar1;
  uint uVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  char cVar6;
  longlong ****pppplVar7;
  longlong ***local_res10;
  
  FUN_141ea0b50(param_1[1],&local_res10,*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],*(undefined8 *)param_1[6],
                *(undefined8 *)param_1[7]);
  ppplVar1 = local_res10;
  pppplVar4 = (longlong ****)*param_1;
  pppplVar7 = &local_res10;
  if (pppplVar4 != pppplVar7) {
    ppplVar5 = *pppplVar4;
    *pppplVar4 = local_res10;
    local_res10 = (longlong ***)0x0;
    if (ppplVar5 == (longlong ***)0x0) {
      return (longlong ****)ppplVar1;
    }
    LOCK();
    ppplVar1 = ppplVar5 + 1;
    uVar2 = *(uint *)ppplVar1;
    pppplVar7 = (longlong ****)(ulonglong)uVar2;
    *(uint *)ppplVar1 = *(uint *)ppplVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      if ((*(char *)(ppplVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        pppplVar7 = (longlong ****)0x0;
        LOCK();
        uVar2 = *(uint *)((longlong)ppplVar5 + 0xc);
        if (uVar2 == 0) {
          *(uint *)((longlong)ppplVar5 + 0xc) = 1;
        }
        else {
          pppplVar7 = (longlong ****)(ulonglong)uVar2;
        }
        UNLOCK();
        if (uVar2 == 0) {
          pppplVar7 = (longlong ****)
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar5);
        }
      }
      else {
        pppplVar7 = (longlong ****)(*(code *)**ppplVar5)(ppplVar5,1);
      }
    }
  }
  ppplVar1 = local_res10;
  if ((longlong ****)local_res10 != (longlong ****)0x0) {
    LOCK();
    pppplVar4 = (longlong ****)(local_res10 + 1);
    iVar3 = *(int *)pppplVar4;
    *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return pppplVar7;
    }
    if ((*(char *)(local_res10 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      pppplVar7 = (longlong ****)0x0;
      LOCK();
      uVar2 = *(uint *)((longlong)ppplVar1 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)ppplVar1 + 0xc) = 1;
      }
      else {
        pppplVar7 = (longlong ****)(ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        pppplVar7 = (longlong ****)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppplVar1);
        return pppplVar7;
      }
    }
    else {
      pppplVar7 = (longlong ****)(*(code *)**ppplVar1)(ppplVar1,1);
    }
    return pppplVar7;
  }
  return pppplVar7;
}



// FUNCTION 141e6cb70 FUN_141e6cb70 body=43 status=ok
// SIG undefined FUN_141e6cb70(void)

undefined8 * FUN_141e6cb70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141e6cba0 FUN_141e6cba0 body=43 status=ok
// SIG undefined FUN_141e6cba0(void)

undefined8 * FUN_141e6cba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141e6cbd0 FUN_141e6cbd0 body=43 status=ok
// SIG undefined FUN_141e6cbd0(void)

undefined8 * FUN_141e6cbd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e6cc00 FUN_141e6cc00 body=43 status=ok
// SIG undefined FUN_141e6cc00(void)

undefined8 * FUN_141e6cc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e6cc30 FUN_141e6cc30 body=43 status=ok
// SIG undefined FUN_141e6cc30(void)

undefined8 * FUN_141e6cc30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141e6cc60 FUN_141e6cc60 body=43 status=ok
// SIG undefined FUN_141e6cc60(void)

undefined8 * FUN_141e6cc60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e6cc90 FUN_141e6cc90 body=43 status=ok
// SIG undefined FUN_141e6cc90(void)

undefined8 * FUN_141e6cc90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141e6ccc0 FUN_141e6ccc0 body=43 status=ok
// SIG undefined FUN_141e6ccc0(void)

undefined8 * FUN_141e6ccc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141e6ccf0 FUN_141e6ccf0 body=262 status=ok
// SIG undefined FUN_141e6ccf0(void)

undefined8 * FUN_141e6ccf0(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144eb66d8;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  iVar1 = *(int *)(param_1 + 5);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 7);
    uVar3 = *(undefined4 *)(param_1 + 10);
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar2 >> 2)) & 0xffffff01;
    uVar4 = param_1[9];
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144eb6740;
      *(int *)(puVar5 + 1) = iVar1;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
      *(uint *)(puVar5 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_6c;
      puVar5[3] = uVar4;
      puVar5[4] = CONCAT44(uStack_5c,uVar2 >> 3) & 0xffffffff00000001;
    }
    local_58[0] = &LAB_141e6de60;
    FUN_141eb4140(local_58,0);
    param_1[9] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x8893);
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141e6ce00 FUN_141e6ce00 body=262 status=ok
// SIG undefined FUN_141e6ce00(void)

undefined8 * FUN_141e6ce00(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144eb66d0;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 5);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar2 >> 2)) & 0xffffff01;
    uVar4 = param_1[7];
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144eb6740;
      *(int *)(puVar5 + 1) = iVar1;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
      *(uint *)(puVar5 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_6c;
      puVar5[3] = uVar4;
      puVar5[4] = CONCAT44(uStack_5c,uVar2 >> 3) & 0xffffffff00000001;
    }
    local_58[0] = &LAB_141e6de10;
    FUN_141eb4140(local_58,0);
    param_1[7] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x88ec);
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e6cf10 FUN_141e6cf10 body=286 status=ok
// SIG undefined FUN_141e6cf10(void)

undefined8 * FUN_141e6cf10(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144eb5b00;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  iVar1 = *(int *)(param_1 + 5);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 7);
    uVar3 = *(undefined4 *)(param_1 + 10);
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar2 >> 2)) & 0xffffff01;
    uVar4 = param_1[9];
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144eb6740;
      *(int *)(puVar5 + 1) = iVar1;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
      *(uint *)(puVar5 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_6c;
      puVar5[3] = uVar4;
      puVar5[4] = CONCAT44(uStack_5c,uVar2 >> 3) & 0xffffffff00000001;
    }
    local_58[0] = FUN_141e6dfa0;
    FUN_141eb4140(local_58,0);
    param_1[9] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x8892);
  }
  *param_1 = &PTR__scalar_deleting_destructor__144eb5ac0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141e6d030 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
            ();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141e6d070 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLBaseVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb5ac0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141e6d0d0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FOpenGLCommonState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[2]);
  FMemory::operator_delete(param_1[1]);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141e6d130 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLContextState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x7c] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[2]);
  FMemory::operator_delete(param_1[1]);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x898);
  }
  return param_1;
}



// FUNCTION 141e6d1b0 FUN_141e6d1b0 body=52 status=ok
// SIG undefined FUN_141e6d1b0(void)

undefined8 FUN_141e6d1b0(undefined8 param_1,ulonglong param_2)

{
  FUN_141e6aaf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x16050);
  }
  return param_1;
}



// FUNCTION 141e6d1f0 FUN_141e6d1f0 body=170 status=ok
// SIG undefined FUN_141e6d1f0(void)

undefined8 * FUN_141e6d1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eb5b50;
  FUN_141ea9120(param_1 + 0xb);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  param_1[0xb] = &PTR_FUN_144da0c80;
  *param_1 = &PTR_FUN_144da0c28;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141e6d2a0 FUN_141e6d2a0 body=52 status=ok
// SIG undefined FUN_141e6d2a0(void)

undefined8 FUN_141e6d2a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141e6ada0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141e6d2e0 FUN_141e6d2e0 body=116 status=ok
// SIG undefined FUN_141e6d2e0(void)

longlong FUN_141e6d2e0(longlong param_1,ulonglong param_2)

{
  FUN_141e6a930(param_1 + 400);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 200) = &PTR_FUN_144da0c80;
  FUN_141a24df0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141e6d360 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FOpenGLRHIState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FOpenGLRHIState();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x708);
  }
  return param_1;
}



// FUNCTION 141e6d3a0 FUN_141e6d3a0 body=955 status=ok
// SIG undefined FUN_141e6d3a0(void)

void FUN_141e6d3a0(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  
  lVar4 = DAT_146ab3d60;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar8 = 0x10, DVar6 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(lVar8 + 8 + lVar4);
  lVar10 = (longlong)local_40;
  pvVar3 = *(void **)(lVar8 + lVar4);
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar10 * 2);
  }
  FUN_141594550(&local_48,&local_58,&DAT_144eb30dc,1);
  plVar13 = local_58 + (longlong)(int)local_50 * 2;
  for (plVar11 = local_58; plVar11 != plVar13; plVar11 = plVar11 + 2) {
    FString::TrimStartAndEndInline(plVar11);
    if ((int)plVar11[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*plVar11;
    }
    FString::ReplaceInline(param_1,puVar9,&DAT_144eb3224,1);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  lVar4 = DAT_146ab3d78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar8 = 0x10, DVar6 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(lVar8 + 8 + lVar4);
  lVar10 = (longlong)local_40;
  pvVar3 = *(void **)(lVar8 + lVar4);
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar10 * 2);
  }
  FUN_141594550(&local_48,&local_58,&DAT_144eb365c,1);
  plVar13 = local_58 + (longlong)(int)local_50 * 2;
  for (plVar11 = local_58; plVar11 != plVar13; plVar11 = plVar11 + 2) {
    FString::TrimStartAndEndInline(plVar11);
    if ((int)plVar11[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*plVar11;
    }
    iVar12 = FUN_141592950(param_1,puVar9,1,0,0xffffffff);
    if (iVar12 == -1) {
      local_38 = (void *)0x0;
      local_30 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pvVar3 = local_38;
      FGenericPlatformString::Memcpy(local_38,&DAT_144eb381c,4);
      if (((int)local_30 != 0) && (iVar12 = (int)local_30 + -1, iVar12 != 0)) {
        iVar2 = (int)param_1[1];
        iVar7 = (uint)(iVar2 == 0) + iVar2 + iVar12;
        *(int *)(param_1 + 1) = iVar7;
        if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        pvVar1 = (void *)(*param_1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pvVar3 = (void *)*plVar11;
      iVar12 = (int)plVar11[1] + -1;
      if ((int)plVar11[1] == 0) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        iVar2 = (int)param_1[1];
        iVar7 = (uint)(iVar2 == 0) + iVar2 + iVar12;
        *(int *)(param_1 + 1) = iVar7;
        if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        pvVar1 = (void *)(*param_1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141e6d760 ApplyTextureStage body=331 status=ok
// SIG undefined ApplyTextureStage(void)

void FOpenGLDynamicRHI::ApplyTextureStage
               (undefined8 param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *param_4;
  uVar1 = (undefined4)param_4[2];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == param_5)) {
    return;
  }
  if (*(int *)(param_2 + 0x3f0) != param_3) {
    (*DAT_146ab4228)(param_3 + 0x84c0);
    *(int *)(param_2 + 0x3f0) = param_3;
  }
  uVar2 = *(undefined4 *)(param_5 + 0x20);
  (*DAT_146ab4160)(uVar1,0x2802,*(undefined4 *)(param_5 + 0x1c));
  (*DAT_146ab4160)(uVar1,0x2803,uVar2);
  (*DAT_146ab4160)(uVar1,0x8072,*(undefined4 *)(param_5 + 0x24));
  (*DAT_146ab4160)(uVar1,0x8501,*(undefined4 *)(param_5 + 0x28));
  iVar4 = *(int *)(param_5 + 0x30);
  if (*(char *)((longlong)param_4 + 0x1c) != '\0') goto LAB_141e6d828;
  if (iVar4 == 0x2700) {
LAB_141e6d822:
    iVar4 = 0x2600;
  }
  else {
    if (iVar4 != 0x2701) {
      if (iVar4 == 0x2702) goto LAB_141e6d822;
      if (iVar4 != 0x2703) goto LAB_141e6d828;
    }
    iVar4 = 0x2601;
  }
LAB_141e6d828:
  (*DAT_146ab4160)(uVar1,0x2801,iVar4);
  (*DAT_146ab4160)(uVar1,0x2800,*(undefined4 *)(param_5 + 0x2c));
  if (DAT_146ab3df1 != '\0') {
    iVar4 = *(int *)(param_5 + 0x34);
    if (*(int *)(param_5 + 0x34) < 2) {
      iVar4 = 1;
    }
    (*DAT_146ab4160)(uVar1,0x84fe,iVar4);
  }
  (*DAT_146ab4160)(uVar1,0x884c,*(undefined4 *)(param_5 + 0x38));
  (*DAT_146ab4160)(uVar1,0x884d,*(undefined4 *)(param_5 + 0x3c));
  if (lVar3 != 0) {
    *(longlong *)(*param_4 + 8) = param_5;
  }
  return;
}



// FUNCTION 141e6d8b0 FUN_141e6d8b0 body=108 status=ok
// SIG undefined FUN_141e6d8b0(void)

void FUN_141e6d8b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_146ab3d80;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar5 = 0x1575c;
  }
  else {
    iVar3 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar4 = 0x14ec4;
    if (iVar3 == 1) {
      uVar4 = 0x1575c;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if (*(int *)(lVar2 + uVar5) != iVar1) {
    (*DAT_146ab42e8)(0x8893,iVar1);
    *(int *)(lVar2 + uVar5) = iVar1;
  }
  return;
}



// FUNCTION 141e6d920 FUN_141e6d920 body=108 status=ok
// SIG undefined FUN_141e6d920(void)

void FUN_141e6d920(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_146ab3d80;
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar5 = 0x15760;
  }
  else {
    iVar3 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar4 = 0x14ec8;
    if (iVar3 == 1) {
      uVar4 = 0x15760;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if (*(int *)(lVar2 + uVar5) != iVar1) {
    (*DAT_146ab42e8)(0x88ec,iVar1);
    *(int *)(lVar2 + uVar5) = iVar1;
  }
  return;
}



// FUNCTION 141e6d990 FUN_141e6d990 body=108 status=ok
// SIG undefined FUN_141e6d990(void)

void FUN_141e6d990(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_146ab3d80;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar5 = 0x15758;
  }
  else {
    iVar3 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar4 = 0x14ec0;
    if (iVar3 == 1) {
      uVar4 = 0x15758;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if (*(int *)(lVar2 + uVar5) != iVar1) {
    (*DAT_146ab42e8)(0x8892,iVar1);
    *(int *)(lVar2 + uVar5) = iVar1;
  }
  return;
}



// FUNCTION 141e6da00 FUN_141e6da00 body=107 status=ok
// SIG undefined FUN_141e6da00(void)

void FUN_141e6da00(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_146ab3d80;
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar4 = 0x15758;
  }
  else {
    iVar2 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar3 = 0x14ec0;
    if (iVar2 == 1) {
      uVar3 = 0x15758;
    }
    uVar4 = (ulonglong)uVar3;
  }
  if (*(int *)(lVar1 + uVar4) != param_1) {
    (*DAT_146ab42e8)(0x8892,param_1);
    *(int *)(lVar1 + uVar4) = param_1;
  }
  return;
}



// FUNCTION 141e6da70 FUN_141e6da70 body=107 status=ok
// SIG undefined FUN_141e6da70(void)

void FUN_141e6da70(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_146ab3d80;
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar4 = 0x1575c;
  }
  else {
    iVar2 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar3 = 0x14ec4;
    if (iVar2 == 1) {
      uVar3 = 0x1575c;
    }
    uVar4 = (ulonglong)uVar3;
  }
  if (*(int *)(lVar1 + uVar4) != param_1) {
    (*DAT_146ab42e8)(0x8893,param_1);
    *(int *)(lVar1 + uVar4) = param_1;
  }
  return;
}



// FUNCTION 141e6dae0 FUN_141e6dae0 body=107 status=ok
// SIG undefined FUN_141e6dae0(void)

void FUN_141e6dae0(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_146ab3d80;
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar4 = 0x15760;
  }
  else {
    iVar2 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar3 = 0x14ec8;
    if (iVar2 == 1) {
      uVar3 = 0x15760;
    }
    uVar4 = (ulonglong)uVar3;
  }
  if (*(int *)(lVar1 + uVar4) != param_1) {
    (*DAT_146ab42e8)(0x88ec,param_1);
    *(int *)(lVar1 + uVar4) = param_1;
  }
  return;
}



// FUNCTION 141e6db50 FUN_141e6db50 body=107 status=ok
// SIG undefined FUN_141e6db50(void)

void FUN_141e6db50(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_146ab3d80;
  if (*(int *)(DAT_146ab3d80 + 0x15bd0) == 1) {
    uVar4 = 0x15764;
  }
  else {
    iVar2 = PlatformOpenGLCurrentContext(*(undefined8 *)(DAT_146ab3d80 + 0x15c28));
    uVar3 = 0x14ecc;
    if (iVar2 == 1) {
      uVar3 = 0x15764;
    }
    uVar4 = (ulonglong)uVar3;
  }
  if (*(int *)(lVar1 + uVar4) != param_1) {
    (*DAT_146ab42e8)(0x8a11,param_1);
    *(int *)(lVar1 + uVar4) = param_1;
  }
  return;
}



// FUNCTION 141e6dbc0 FUN_141e6dbc0 body=552 status=ok
// SIG undefined FUN_141e6dbc0(void)

void FUN_141e6dbc0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                  uint param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int local_res10;
  uint local_res14;
  undefined4 *local_48;
  int *local_40;
  
  lVar1 = *(longlong *)(param_2 + 8) + (longlong)param_3 * 0x28;
  if (*(int *)(param_2 + 0x3f0) != param_3) {
    (*DAT_146ab4228)(param_3 + 0x84c0);
    *(int *)(param_2 + 0x3f0) = param_3;
  }
  iVar8 = *(int *)(lVar1 + 0x10);
  if (iVar8 == param_4) {
LAB_141e6dc2c:
    (*DAT_146ab3f98)(param_4,param_5);
    iVar8 = param_7;
    uVar11 = param_6;
    if ((((param_4 != 0) && (param_4 != 0x8c2a)) && (param_4 != 0x8d65)) && (DAT_1464c97ce == '\0'))
    {
      piVar9 = (int *)0x0;
      if (*(int *)(param_1 + 0x15be0) != *(int *)(param_1 + 0x15c0c)) {
        lVar6 = *(longlong *)(param_1 + 0x15c18);
        if (*(longlong *)(param_1 + 0x15c18) == 0) {
          lVar6 = param_1 + 0x15c10;
        }
        iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x15c20) - 1U & (longlong)param_5) *
                                 4);
        if (iVar5 != -1) {
          do {
            piVar7 = (int *)(*(longlong *)(param_1 + 0x15bd8) + (longlong)iVar5 * 0x14);
            if (*(int *)(*(longlong *)(param_1 + 0x15bd8) + (longlong)iVar5 * 0x14) == param_5) {
              if (iVar5 != -1) goto LAB_141e6dce3;
              break;
            }
            iVar5 = piVar7[3];
          } while (iVar5 != -1);
        }
      }
      piVar7 = piVar9;
LAB_141e6dce3:
      piVar10 = piVar7 + 1;
      if (piVar7 == (int *)0x0) {
        piVar10 = piVar9;
      }
      uVar2 = param_7 - 1;
      if (param_6 != 0xffffffff) {
        uVar2 = param_6;
        piVar9 = (int *)(ulonglong)param_6;
      }
      iVar5 = (int)piVar9;
      if ((piVar10 == (int *)0x0) || (*piVar10 != iVar5)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((piVar10 == (int *)0x0) || (piVar10[1] != uVar2)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar3) {
        if (bVar4) goto LAB_141e6ddb7;
      }
      else {
        (*DAT_146ab4160)(param_4,0x813c,piVar9);
      }
      if (!bVar4) {
        (*DAT_146ab4160)(param_4,0x813d,uVar2);
      }
      if (piVar10 == (int *)0x0) {
        local_48 = &param_5;
        local_40 = &local_res10;
        local_res10 = iVar5;
        local_res14 = uVar2;
        FUN_140608850(param_1 + 0x15bd8,&param_6,&local_48,0);
      }
      else {
        *piVar10 = iVar5;
        piVar10[1] = uVar2;
      }
      goto LAB_141e6ddb7;
    }
  }
  else {
    if (iVar8 != 0) {
      (*DAT_146ab3f98)(iVar8,0);
    }
    if (param_4 != 0) goto LAB_141e6dc2c;
  }
  iVar8 = 0;
  uVar11 = 0;
LAB_141e6ddb7:
  *(uint *)(lVar1 + 0x18) = uVar11;
  *(int *)(lVar1 + 0x20) = iVar8;
  *(int *)(lVar1 + 0x10) = param_4;
  *(int *)(lVar1 + 0x14) = param_5;
  return;
}



// FUNCTION 141e6deb0 Call body=77 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_52d3ed2122ba9f81cea7719db6a84508>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = (undefined4 *)param_1[2];
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  FUN_141ea5da0(*param_1,*(undefined8 *)param_1[1],&local_18,param_1[3],*(undefined4 *)param_1[4],
                *(undefined4 *)param_1[5],*(undefined4 *)param_1[6]);
  return;
}



// FUNCTION 141e6df20 Call body=82 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_844f086f9532b8ee47a3a15493260669>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  (**(code **)(*DAT_146ab6358 + 0x2d0))
            (DAT_146ab6358,*(undefined8 *)*param_1,*(undefined4 *)param_1[1],param_1[2],
             *(undefined4 *)param_1[3],*(undefined4 *)param_1[4],*(undefined8 *)param_1[5]);
  return;
}



// FUNCTION 141e6dfa0 FUN_141e6dfa0 body=68 status=ok
// SIG undefined FUN_141e6dfa0(void)

void FUN_141e6dfa0(undefined4 *param_1)

{
  FUN_141e747e0(DAT_146ab3d80,*param_1);
  (*DAT_146ab42f8)(1,param_1);
  if ((*(longlong *)(param_1 + 4) != 0) && (param_1[6] != 0)) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e6e020 FUN_141e6e020 body=730 status=ok
// SIG undefined FUN_141e6e020(void)

void FUN_141e6e020(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (DAT_146ab62c8 != '\0') {
    FOpenGLProgramBinaryCache::Shutdown();
    DAT_146ab62c8 = '\0';
    FUN_141e93d10(param_1 + 0x15c68);
    puVar3 = (undefined8 *)FRenderResource::GetResourceList();
    for (puVar3 = (undefined8 *)*puVar3; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3
        ) {
      (**(code **)(*(longlong *)puVar3[2] + 0x20))();
    }
    puVar3 = (undefined8 *)FRenderResource::GetResourceList();
    for (puVar3 = (undefined8 *)*puVar3; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3
        ) {
      (**(code **)(*(longlong *)puVar3[2] + 0x10))();
    }
  }
  lVar7 = 2;
  plVar6 = (longlong *)(param_1 + 0x8b8);
  lVar4 = 2;
  do {
    puVar3 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar6 = plVar6 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar6 = (longlong *)(param_1 + 0x8e0);
  do {
    puVar3 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar6 = plVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (DAT_146ab35f8 != 0) {
    lVar4 = DAT_146ab35f0 + 8;
    iVar5 = DAT_146ab35f8;
    do {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(lVar4);
      lVar4 = lVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  DAT_146ab35f8 = 0;
  if (DAT_146ab35fc != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146ab35f0,0);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x900);
  *(undefined8 *)(param_1 + 0x900) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_141e97c80();
  if (*(int *)(param_1 + 0x360) != 0) {
    (*DAT_146ab42f8)(1,param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x360) = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x8a11);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x10))();
  (**(code **)(*(longlong *)(param_1 + 0x14aa0) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000141e6e2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x15338) + 0x10))();
  return;
}



// FUNCTION 141e6e300 CleanupResources body=56 status=ok
// SIG undefined CleanupResources(void)

void FOpenGLCommonState::CleanupResources(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x18));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141e6e340 CleanupResources body=87 status=ok
// SIG undefined CleanupResources(void)

void FOpenGLContextState::CleanupResources(longlong param_1)

{
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x3e0,0);
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x18));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141e6e3a0 CleanupResources body=297 status=ok
// SIG undefined CleanupResources(void)

void FOpenGLRHIState::CleanupResources(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x420);
  if (lVar9 != 0) {
    lVar5 = *(longlong *)(lVar9 + -8);
    lVar7 = lVar5 * 0x80 + lVar9;
    lVar6 = 0;
    if (lVar5 != 0) {
      do {
        lVar7 = lVar7 + -0x80;
        FOpenGLShaderParameterCache::~FOpenGLShaderParameterCache(lVar7);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar6 = *(longlong *)(lVar9 + -8);
    }
    FMemory::operator_delete((longlong *)(lVar9 + -8),lVar6 * 0x80 + 8);
  }
  plVar8 = (longlong *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x420) = 0;
  lVar9 = 6;
  do {
    lVar5 = 0xe;
    do {
      puVar3 = (undefined8 *)*plVar8;
      *plVar8 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
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
      plVar8 = plVar8 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x18));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141e6e4d0 FUN_141e6e4d0 body=1044 status=ok
// SIG undefined FUN_141e6e4d0(void)

void FUN_141e6e4d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  
  if (((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) &&
     (*(char *)(*(longlong *)(DAT_1469f59d8 + 0xcc0) + 4000) != '\0')) {
    *(undefined2 *)(param_1 + 0x88c) = 0;
    return;
  }
  uVar18 = 0;
  plVar14 = (longlong *)(param_1 + 0x810);
  uVar19 = uVar18;
  uVar15 = uVar18;
  uVar10 = (uint)*(ushort *)(param_1 + 0x88c) & *(uint *)(param_2 + 0x80);
  do {
    uVar20 = (uint)uVar15;
    if ((uVar10 & 1) != 0) {
      lVar5 = *plVar14;
      lVar11 = *(longlong *)(param_2 + 200);
      uVar13 = *(uint *)(uVar19 + lVar11);
      if (uVar13 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x40);
        puVar17 = (uint *)(lVar11 + (ulonglong)uVar13 * 4);
        uVar13 = *(uint *)(lVar11 + (ulonglong)uVar13 * 4);
        do {
          puVar17 = puVar17 + 1;
          uVar15 = (ulonglong)(uVar13 & 0xff);
          plVar7 = *(longlong **)(lVar6 + (ulonglong)(uVar13 >> 8 & 0xffff) * 8);
          if (plVar7 == (longlong *)0x0) {
LAB_141e6e65a:
            lVar11 = *(longlong *)(param_1 + 0x1b0);
            *(undefined8 *)(lVar11 + uVar15 * 0x28) = 0;
            *(undefined8 *)(lVar11 + 8 + uVar15 * 0x28) = 0;
            *(undefined8 *)(lVar11 + 0x10 + uVar15 * 0x28) = 0;
            *(undefined4 *)(lVar11 + 0x18 + uVar15 * 0x28) = 0xffffffff;
            *(undefined1 *)(lVar11 + 0x1c + uVar15 * 0x28) = 1;
            *(undefined4 *)(lVar11 + 0x20 + uVar15 * 0x28) = 0;
          }
          else {
            (**(code **)(*plVar7 + 0x48))(plVar7);
            if (DAT_146ab6383 != '\0') {
              IsInRenderingThread();
            }
            lVar11 = (**(code **)(*plVar7 + 0x48))(plVar7);
            if (lVar11 == 0) goto LAB_141e6e65a;
            if ((double)(float)DAT_1468b5a78 != *(double *)plVar7[9]) {
              *(double *)plVar7[9] = (double)(float)DAT_1468b5a78;
            }
            iVar1 = *(int *)(lVar11 + 0x18);
            uVar2 = *(undefined4 *)(lVar11 + 0x10);
            uVar3 = *(undefined4 *)(lVar11 + 0x14);
            lVar12 = (longlong)(int)(uVar13 & 0xff);
            lVar8 = *(longlong *)(param_1 + 0x1b0);
            *(longlong *)(lVar8 + lVar12 * 0x28) = lVar11;
            *(undefined8 *)(lVar8 + 8 + lVar12 * 0x28) = 0;
            *(undefined4 *)(lVar8 + 0x10 + lVar12 * 0x28) = uVar3;
            *(undefined4 *)(lVar8 + 0x14 + lVar12 * 0x28) = uVar2;
            *(undefined4 *)(lVar8 + 0x18 + lVar12 * 0x28) = 0xffffffff;
            if ((iVar1 < 0) || (iVar1 == 1)) {
              *(int *)(lVar8 + 0x20 + lVar12 * 0x28) = iVar1;
              *(undefined1 *)(lVar8 + 0x1c + lVar12 * 0x28) = 0;
            }
            else {
              *(int *)(lVar8 + 0x20 + lVar12 * 0x28) = iVar1;
              *(undefined1 *)(lVar8 + 0x1c + lVar12 * 0x28) = 1;
            }
          }
          if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
            FShaderCache::InternalSetTexture
                      (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),5,uVar15,plVar7);
          }
          uVar13 = *puVar17;
        } while (uVar13 >> 0x18 == uVar20);
      }
      lVar11 = *(longlong *)(param_2 + 0x88);
      uVar13 = *(uint *)(uVar19 + lVar11);
      if (uVar13 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x40);
        puVar17 = (uint *)(lVar11 + (ulonglong)uVar13 * 4);
        uVar13 = *(uint *)(lVar11 + (ulonglong)uVar13 * 4);
        do {
          puVar17 = puVar17 + 1;
          uVar16 = (ulonglong)uVar13 & 0xff;
          lVar11 = *(longlong *)(lVar6 + ((ulonglong)(uVar13 >> 8) & 0xffff) * 8);
          uVar15 = uVar18;
          if (lVar11 != 0) {
            if (DAT_146ab6383 != '\0') {
              IsInRenderingThread();
            }
            uVar15 = *(ulonglong *)(lVar11 + 0x20);
          }
          lVar8 = *(longlong *)(param_1 + 0x1b0);
          uVar2 = *(undefined4 *)(uVar15 + 0x14);
          uVar3 = *(undefined4 *)(uVar15 + 0x20);
          uVar4 = *(undefined4 *)(uVar15 + 0x10);
          *(undefined8 *)(lVar8 + uVar16 * 0x28) = 0;
          *(ulonglong *)(lVar8 + 8 + uVar16 * 0x28) = uVar15;
          *(undefined4 *)(lVar8 + 0x10 + uVar16 * 0x28) = uVar2;
          *(undefined4 *)(lVar8 + 0x14 + uVar16 * 0x28) = uVar4;
          *(undefined4 *)(lVar8 + 0x18 + uVar16 * 0x28) = uVar3;
          *(undefined1 *)(lVar8 + 0x1c + uVar16 * 0x28) = 1;
          *(undefined4 *)(lVar8 + 0x20 + uVar16 * 0x28) = 0;
          uVar9 = *(undefined8 *)(param_1 + 0x900);
          *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + uVar16 * 8) = uVar9;
          uVar15 = uVar18;
          if (DAT_1469f59d8 != 0) {
            if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
              FShaderCache::InternalSetSamplerState
                        (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),5,uVar16,uVar9);
            }
            if (DAT_1469f59d8 != 0) {
              uVar15 = *(ulonglong *)(DAT_1469f59d8 + 0xcc0);
            }
          }
          if ((DAT_1469f59d8 != 0) && (uVar15 != 0)) {
            FShaderCache::InternalSetSRV(DAT_1469f59d8,uVar15,5,uVar16,lVar11);
          }
          uVar13 = *puVar17;
        } while (uVar13 >> 0x18 == uVar20);
      }
      lVar11 = *(longlong *)(param_2 + 0x98);
      uVar13 = *(uint *)(uVar19 + lVar11);
      if (uVar13 != 0) {
        puVar17 = (uint *)(lVar11 + (ulonglong)uVar13 * 4);
        uVar13 = *(uint *)(lVar11 + (ulonglong)uVar13 * 4);
        lVar5 = *(longlong *)(lVar5 + 0x40);
        do {
          puVar17 = puVar17 + 1;
          uVar9 = *(undefined8 *)(lVar5 + (ulonglong)(uVar13 >> 8 & 0xffff) * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (ulonglong)(uVar13 & 0xff) * 8) = uVar9;
          if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
            FShaderCache::InternalSetSamplerState
                      (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),5,
                       (ulonglong)(uVar13 & 0xff),uVar9);
          }
          uVar13 = *puVar17;
        } while (uVar13 >> 0x18 == uVar20);
      }
    }
    plVar14 = plVar14 + 1;
    uVar15 = (ulonglong)(uVar20 + 1);
    uVar19 = uVar19 + 4;
    bVar21 = uVar10 < 2;
    uVar10 = uVar10 >> 1;
    if (bVar21) {
      *(undefined2 *)(param_1 + 0x88c) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 141e6e8f0 FUN_141e6e8f0 body=5242 status=ok
// SIG undefined FUN_141e6e8f0(void)

void FUN_141e6e8f0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  uVar20 = 0;
  if (((DAT_1469f59d8 == 0) || (*(longlong *)(DAT_1469f59d8 + 0xcc0) == 0)) ||
     (*(char *)(*(longlong *)(DAT_1469f59d8 + 0xcc0) + 4000) == '\0')) {
    if (*(short *)(param_1 + 0x882) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xa8);
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      lVar12 = *(longlong *)(lVar12 + 0x38);
      if (lVar12 != 0) {
        plVar16 = (longlong *)(param_1 + 0x5e0);
        uVar18 = uVar20;
        uVar21 = (uint)*(ushort *)(param_1 + 0x882) & *(uint *)(lVar12 + 0x58);
        do {
          uVar22 = (uint)uVar18;
          if ((uVar21 & 1) != 0) {
            lVar11 = *plVar16;
            lVar8 = *(longlong *)(lVar12 + 0xa0);
            uVar15 = *(uint *)(uVar20 + lVar8);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar11 + 0x40);
              puVar19 = (uint *)(lVar8 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar8 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                plVar6 = *(longlong **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                if (plVar6 == (longlong *)0x0) {
LAB_141e6eab2:
                  lVar13 = (longlong)(int)(DAT_1464c97f8 + uVar17);
                  lVar8 = *(longlong *)(param_1 + 0x1b0);
                  *(undefined8 *)(lVar8 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar8 + 8 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar8 + 0x10 + lVar13 * 0x28) = 0;
                  *(undefined4 *)(lVar8 + 0x18 + lVar13 * 0x28) = 0xffffffff;
                  *(undefined1 *)(lVar8 + 0x1c + lVar13 * 0x28) = 1;
                  *(undefined4 *)(lVar8 + 0x20 + lVar13 * 0x28) = 0;
                }
                else {
                  (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar8 = (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (lVar8 == 0) goto LAB_141e6eab2;
                  if ((double)(float)DAT_1468b5a78 != *(double *)plVar6[9]) {
                    *(double *)plVar6[9] = (double)(float)DAT_1468b5a78;
                  }
                  iVar1 = *(int *)(lVar8 + 0x18);
                  uVar2 = *(undefined4 *)(lVar8 + 0x10);
                  uVar3 = *(undefined4 *)(lVar8 + 0x14);
                  lVar9 = (longlong)(int)(DAT_1464c97f8 + uVar17);
                  lVar13 = *(longlong *)(param_1 + 0x1b0);
                  *(longlong *)(lVar13 + lVar9 * 0x28) = lVar8;
                  *(undefined8 *)(lVar13 + 8 + lVar9 * 0x28) = 0;
                  *(undefined4 *)(lVar13 + 0x10 + lVar9 * 0x28) = uVar3;
                  *(undefined4 *)(lVar13 + 0x14 + lVar9 * 0x28) = uVar2;
                  *(undefined4 *)(lVar13 + 0x18 + lVar9 * 0x28) = 0xffffffff;
                  if ((iVar1 < 0) || (iVar1 == 1)) {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 0;
                  }
                  else {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 1;
                  }
                }
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetTexture
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,uVar17,plVar6);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar8 = *(longlong *)(lVar12 + 0x60);
            uVar15 = *(uint *)(uVar20 + lVar8);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar11 + 0x40);
              puVar19 = (uint *)(lVar8 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar8 + (ulonglong)uVar15 * 4);
              lVar8 = 0;
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                lVar13 = *(longlong *)(lVar5 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
                lVar9 = lVar8;
                if (lVar13 != 0) {
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar9 = *(longlong *)(lVar13 + 0x20);
                }
                uVar2 = *(undefined4 *)(lVar9 + 0x10);
                uVar3 = *(undefined4 *)(lVar9 + 0x20);
                lVar10 = (longlong)(int)(DAT_1464c97f8 + uVar17);
                lVar14 = *(longlong *)(param_1 + 0x1b0);
                *(undefined4 *)(lVar14 + 0x10 + lVar10 * 0x28) = *(undefined4 *)(lVar9 + 0x14);
                *(undefined8 *)(lVar14 + lVar10 * 0x28) = 0;
                *(longlong *)(lVar14 + 8 + lVar10 * 0x28) = lVar9;
                *(undefined4 *)(lVar14 + 0x14 + lVar10 * 0x28) = uVar2;
                *(undefined4 *)(lVar14 + 0x18 + lVar10 * 0x28) = uVar3;
                *(undefined1 *)(lVar14 + 0x1c + lVar10 * 0x28) = 1;
                *(undefined4 *)(lVar14 + 0x20 + lVar10 * 0x28) = 0;
                uVar7 = *(undefined8 *)(param_1 + 0x900);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) + (longlong)(int)(DAT_1464c97f8 + uVar17) * 8) =
                     uVar7;
                lVar9 = lVar8;
                if (DAT_1469f59d8 != 0) {
                  if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
                    FShaderCache::InternalSetSamplerState
                              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,uVar17,uVar7);
                  }
                  if (DAT_1469f59d8 != 0) {
                    lVar9 = *(longlong *)(DAT_1469f59d8 + 0xcc0);
                  }
                }
                if ((DAT_1469f59d8 != 0) && (lVar9 != 0)) {
                  FShaderCache::InternalSetSRV(DAT_1469f59d8,lVar9,0,uVar17,lVar13);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar8 = *(longlong *)(lVar12 + 0x70);
            uVar15 = *(uint *)(uVar20 + lVar8);
            if (uVar15 != 0) {
              puVar19 = (uint *)(lVar8 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar8 + (ulonglong)uVar15 * 4);
              lVar11 = *(longlong *)(lVar11 + 0x40);
              do {
                puVar19 = puVar19 + 1;
                uVar7 = *(undefined8 *)(lVar11 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) +
                 (longlong)(int)(DAT_1464c97f8 + (uVar15 & 0xff)) * 8) = uVar7;
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetSamplerState
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,uVar15 & 0xff,
                             uVar7);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
          }
          plVar16 = plVar16 + 1;
          uVar18 = (ulonglong)(uVar22 + 1);
          uVar20 = uVar20 + 4;
          bVar23 = 1 < uVar21;
          uVar21 = uVar21 >> 1;
        } while (bVar23);
      }
    }
    uVar20 = 0;
    if (*(short *)(param_1 + 0x888) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xb0);
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      lVar12 = *(longlong *)(lVar12 + 0x38);
      if (lVar12 != 0) {
        plVar16 = (longlong *)(param_1 + 0x730);
        uVar18 = uVar20;
        uVar21 = (uint)*(ushort *)(param_1 + 0x888) & *(uint *)(lVar12 + 0x58);
        do {
          uVar22 = (uint)uVar18;
          if ((uVar21 & 1) != 0) {
            lVar11 = *(longlong *)(lVar12 + 0xa0);
            lVar8 = *plVar16;
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar18 = (ulonglong)(uVar15 & 0xff);
                plVar6 = *(longlong **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                if (plVar6 == (longlong *)0x0) {
LAB_141e6ee8e:
                  lVar11 = *(longlong *)(param_1 + 0x1b0);
                  *(undefined8 *)(lVar11 + uVar18 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 8 + uVar18 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x28) = 0;
                  *(undefined4 *)(lVar11 + 0x18 + uVar18 * 0x28) = 0xffffffff;
                  *(undefined1 *)(lVar11 + 0x1c + uVar18 * 0x28) = 1;
                  *(undefined4 *)(lVar11 + 0x20 + uVar18 * 0x28) = 0;
                }
                else {
                  (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar11 = (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (lVar11 == 0) goto LAB_141e6ee8e;
                  if ((double)(float)DAT_1468b5a78 != *(double *)plVar6[9]) {
                    *(double *)plVar6[9] = (double)(float)DAT_1468b5a78;
                  }
                  iVar1 = *(int *)(lVar11 + 0x18);
                  uVar2 = *(undefined4 *)(lVar11 + 0x10);
                  uVar3 = *(undefined4 *)(lVar11 + 0x14);
                  lVar9 = (longlong)(int)(uVar15 & 0xff);
                  lVar13 = *(longlong *)(param_1 + 0x1b0);
                  *(longlong *)(lVar13 + lVar9 * 0x28) = lVar11;
                  *(undefined8 *)(lVar13 + 8 + lVar9 * 0x28) = 0;
                  *(undefined4 *)(lVar13 + 0x10 + lVar9 * 0x28) = uVar3;
                  *(undefined4 *)(lVar13 + 0x14 + lVar9 * 0x28) = uVar2;
                  *(undefined4 *)(lVar13 + 0x18 + lVar9 * 0x28) = 0xffffffff;
                  if ((iVar1 < 0) || (iVar1 == 1)) {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 0;
                  }
                  else {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 1;
                  }
                }
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetTexture
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,uVar18,plVar6);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x60);
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              lVar11 = 0;
              do {
                puVar19 = puVar19 + 1;
                uVar18 = (ulonglong)uVar15 & 0xff;
                lVar13 = *(longlong *)(lVar5 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
                lVar9 = lVar11;
                if (lVar13 != 0) {
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar9 = *(longlong *)(lVar13 + 0x20);
                }
                lVar14 = *(longlong *)(param_1 + 0x1b0);
                uVar2 = *(undefined4 *)(lVar9 + 0x14);
                uVar3 = *(undefined4 *)(lVar9 + 0x20);
                uVar4 = *(undefined4 *)(lVar9 + 0x10);
                *(undefined8 *)(lVar14 + uVar18 * 0x28) = 0;
                *(longlong *)(lVar14 + 8 + uVar18 * 0x28) = lVar9;
                *(undefined4 *)(lVar14 + 0x10 + uVar18 * 0x28) = uVar2;
                *(undefined4 *)(lVar14 + 0x14 + uVar18 * 0x28) = uVar4;
                *(undefined4 *)(lVar14 + 0x18 + uVar18 * 0x28) = uVar3;
                *(undefined1 *)(lVar14 + 0x1c + uVar18 * 0x28) = 1;
                *(undefined4 *)(lVar14 + 0x20 + uVar18 * 0x28) = 0;
                uVar7 = *(undefined8 *)(param_1 + 0x900);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + uVar18 * 8) = uVar7;
                lVar9 = lVar11;
                if (DAT_1469f59d8 != 0) {
                  if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
                    FShaderCache::InternalSetSamplerState
                              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,uVar18,uVar7);
                  }
                  if (DAT_1469f59d8 != 0) {
                    lVar9 = *(longlong *)(DAT_1469f59d8 + 0xcc0);
                  }
                }
                if ((DAT_1469f59d8 != 0) && (lVar9 != 0)) {
                  FShaderCache::InternalSetSRV(DAT_1469f59d8,lVar9,3,uVar18,lVar13);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x70);
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar7 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (ulonglong)(uVar15 & 0xff) * 8) =
                     uVar7;
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetSamplerState
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,
                             (ulonglong)(uVar15 & 0xff),uVar7);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
          }
          plVar16 = plVar16 + 1;
          uVar18 = (ulonglong)(uVar22 + 1);
          uVar20 = uVar20 + 4;
          bVar23 = 1 < uVar21;
          uVar21 = uVar21 >> 1;
        } while (bVar23);
      }
    }
    uVar20 = 0;
    if ((*(short *)(param_1 + 0x884) != 0) &&
       (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xc0), lVar12 != 0)) {
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      lVar12 = *(longlong *)(lVar12 + 0x38);
      if (lVar12 != 0) {
        plVar16 = (longlong *)(param_1 + 0x650);
        uVar18 = uVar20;
        uVar21 = (uint)*(ushort *)(param_1 + 0x884) & *(uint *)(lVar12 + 0x58);
        do {
          uVar22 = (uint)uVar18;
          if ((uVar21 & 1) != 0) {
            lVar11 = *(longlong *)(lVar12 + 0xa0);
            lVar8 = *plVar16;
            uVar15 = *(uint *)(lVar11 + uVar20);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                plVar6 = *(longlong **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                if (plVar6 == (longlong *)0x0) {
LAB_141e6f26d:
                  lVar13 = (longlong)(int)(DAT_1464c9804 + uVar17 + DAT_1464c9800 + DAT_1464c97f8);
                  lVar11 = *(longlong *)(param_1 + 0x1b0);
                  *(undefined8 *)(lVar11 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 8 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 0x10 + lVar13 * 0x28) = 0;
                  *(undefined4 *)(lVar11 + 0x18 + lVar13 * 0x28) = 0xffffffff;
                  *(undefined1 *)(lVar11 + 0x1c + lVar13 * 0x28) = 1;
                  *(undefined4 *)(lVar11 + 0x20 + lVar13 * 0x28) = 0;
                }
                else {
                  (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar11 = (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (lVar11 == 0) goto LAB_141e6f26d;
                  if ((double)(float)DAT_1468b5a78 != *(double *)plVar6[9]) {
                    *(double *)plVar6[9] = (double)(float)DAT_1468b5a78;
                  }
                  iVar1 = *(int *)(lVar11 + 0x18);
                  uVar2 = *(undefined4 *)(lVar11 + 0x10);
                  uVar3 = *(undefined4 *)(lVar11 + 0x14);
                  lVar9 = (longlong)(int)(DAT_1464c9804 + uVar17 + DAT_1464c9800 + DAT_1464c97f8);
                  lVar13 = *(longlong *)(param_1 + 0x1b0);
                  *(longlong *)(lVar13 + lVar9 * 0x28) = lVar11;
                  *(undefined8 *)(lVar13 + 8 + lVar9 * 0x28) = 0;
                  *(undefined4 *)(lVar13 + 0x10 + lVar9 * 0x28) = uVar3;
                  *(undefined4 *)(lVar13 + 0x14 + lVar9 * 0x28) = uVar2;
                  *(undefined4 *)(lVar13 + 0x18 + lVar9 * 0x28) = 0xffffffff;
                  if ((iVar1 < 0) || (iVar1 == 1)) {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 0;
                  }
                  else {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 1;
                  }
                }
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetTexture
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,uVar17,plVar6);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x60);
            uVar15 = *(uint *)(lVar11 + uVar20);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              lVar11 = 0;
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                lVar13 = *(longlong *)(lVar5 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
                lVar9 = lVar11;
                if (lVar13 != 0) {
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar9 = *(longlong *)(lVar13 + 0x20);
                }
                uVar2 = *(undefined4 *)(lVar9 + 0x10);
                uVar3 = *(undefined4 *)(lVar9 + 0x20);
                uVar4 = *(undefined4 *)(lVar9 + 0x14);
                lVar10 = (longlong)(int)(DAT_1464c9804 + uVar17 + DAT_1464c9800 + DAT_1464c97f8);
                lVar14 = *(longlong *)(param_1 + 0x1b0);
                *(undefined8 *)(lVar14 + lVar10 * 0x28) = 0;
                *(longlong *)(lVar14 + 8 + lVar10 * 0x28) = lVar9;
                *(undefined4 *)(lVar14 + 0x10 + lVar10 * 0x28) = uVar4;
                *(undefined4 *)(lVar14 + 0x14 + lVar10 * 0x28) = uVar2;
                *(undefined4 *)(lVar14 + 0x18 + lVar10 * 0x28) = uVar3;
                *(undefined1 *)(lVar14 + 0x1c + lVar10 * 0x28) = 1;
                *(undefined4 *)(lVar14 + 0x20 + lVar10 * 0x28) = 0;
                uVar7 = *(undefined8 *)(param_1 + 0x900);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) +
                 (longlong)(int)(DAT_1464c9804 + uVar17 + DAT_1464c9800 + DAT_1464c97f8) * 8) =
                     uVar7;
                lVar9 = lVar11;
                if (DAT_1469f59d8 != 0) {
                  if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
                    FShaderCache::InternalSetSamplerState
                              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,uVar17,uVar7);
                  }
                  if (DAT_1469f59d8 != 0) {
                    lVar9 = *(longlong *)(DAT_1469f59d8 + 0xcc0);
                  }
                }
                if ((DAT_1469f59d8 != 0) && (lVar9 != 0)) {
                  FShaderCache::InternalSetSRV(DAT_1469f59d8,lVar9,1,uVar17,lVar13);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x70);
            uVar15 = *(uint *)(lVar11 + uVar20);
            if (uVar15 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar7 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) +
                 (longlong)(int)(DAT_1464c9804 + (uVar15 & 0xff) + DAT_1464c9800 + DAT_1464c97f8) *
                 8) = uVar7;
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetSamplerState
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,uVar15 & 0xff,
                             uVar7);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
          }
          plVar16 = plVar16 + 1;
          uVar18 = (ulonglong)(uVar22 + 1);
          uVar20 = uVar20 + 4;
          bVar23 = 1 < uVar21;
          uVar21 = uVar21 >> 1;
        } while (bVar23);
      }
    }
    uVar20 = 0;
    if ((*(short *)(param_1 + 0x886) != 0) &&
       (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 200), lVar12 != 0)) {
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      lVar12 = *(longlong *)(lVar12 + 0x38);
      if (lVar12 != 0) {
        plVar16 = (longlong *)(param_1 + 0x6c0);
        uVar18 = uVar20;
        uVar21 = (uint)*(ushort *)(param_1 + 0x886) & *(uint *)(lVar12 + 0x58);
        do {
          uVar22 = (uint)uVar18;
          if ((uVar21 & 1) != 0) {
            lVar11 = *(longlong *)(lVar12 + 0xa0);
            lVar8 = *plVar16;
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                plVar6 = *(longlong **)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                if (plVar6 == (longlong *)0x0) {
LAB_141e6f693:
                  lVar13 = (longlong)
                           (int)(DAT_1464c9808 + uVar17 + DAT_1464c9804 + DAT_1464c9800 +
                                DAT_1464c97f8);
                  lVar11 = *(longlong *)(param_1 + 0x1b0);
                  *(undefined8 *)(lVar11 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 8 + lVar13 * 0x28) = 0;
                  *(undefined8 *)(lVar11 + 0x10 + lVar13 * 0x28) = 0;
                  *(undefined4 *)(lVar11 + 0x18 + lVar13 * 0x28) = 0xffffffff;
                  *(undefined1 *)(lVar11 + 0x1c + lVar13 * 0x28) = 1;
                  *(undefined4 *)(lVar11 + 0x20 + lVar13 * 0x28) = 0;
                }
                else {
                  (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar11 = (**(code **)(*plVar6 + 0x48))(plVar6);
                  if (lVar11 == 0) goto LAB_141e6f693;
                  if ((double)(float)DAT_1468b5a78 != *(double *)plVar6[9]) {
                    *(double *)plVar6[9] = (double)(float)DAT_1468b5a78;
                  }
                  iVar1 = *(int *)(lVar11 + 0x18);
                  uVar2 = *(undefined4 *)(lVar11 + 0x10);
                  uVar3 = *(undefined4 *)(lVar11 + 0x14);
                  lVar9 = (longlong)
                          (int)(DAT_1464c9808 + uVar17 + DAT_1464c9804 + DAT_1464c9800 +
                               DAT_1464c97f8);
                  lVar13 = *(longlong *)(param_1 + 0x1b0);
                  *(longlong *)(lVar13 + lVar9 * 0x28) = lVar11;
                  *(undefined8 *)(lVar13 + 8 + lVar9 * 0x28) = 0;
                  *(undefined4 *)(lVar13 + 0x10 + lVar9 * 0x28) = uVar3;
                  *(undefined4 *)(lVar13 + 0x14 + lVar9 * 0x28) = uVar2;
                  *(undefined4 *)(lVar13 + 0x18 + lVar9 * 0x28) = 0xffffffff;
                  if ((iVar1 < 0) || (iVar1 == 1)) {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 0;
                  }
                  else {
                    *(int *)(lVar13 + 0x20 + lVar9 * 0x28) = iVar1;
                    *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 1;
                  }
                }
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetTexture
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,uVar17,plVar6);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x60);
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar5 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              lVar11 = 0;
              do {
                puVar19 = puVar19 + 1;
                uVar17 = uVar15 & 0xff;
                lVar13 = *(longlong *)(lVar5 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
                lVar9 = lVar11;
                if (lVar13 != 0) {
                  if (DAT_146ab6383 != '\0') {
                    IsInRenderingThread();
                  }
                  lVar9 = *(longlong *)(lVar13 + 0x20);
                }
                uVar2 = *(undefined4 *)(lVar9 + 0x10);
                uVar3 = *(undefined4 *)(lVar9 + 0x20);
                uVar4 = *(undefined4 *)(lVar9 + 0x14);
                lVar10 = (longlong)
                         (int)(DAT_1464c9808 + uVar17 + DAT_1464c9804 + DAT_1464c9800 +
                              DAT_1464c97f8);
                lVar14 = *(longlong *)(param_1 + 0x1b0);
                *(undefined8 *)(lVar14 + lVar10 * 0x28) = 0;
                *(longlong *)(lVar14 + 8 + lVar10 * 0x28) = lVar9;
                *(undefined4 *)(lVar14 + 0x10 + lVar10 * 0x28) = uVar4;
                *(undefined4 *)(lVar14 + 0x14 + lVar10 * 0x28) = uVar2;
                *(undefined4 *)(lVar14 + 0x18 + lVar10 * 0x28) = uVar3;
                *(undefined1 *)(lVar14 + 0x1c + lVar10 * 0x28) = 1;
                *(undefined4 *)(lVar14 + 0x20 + lVar10 * 0x28) = 0;
                uVar7 = *(undefined8 *)(param_1 + 0x900);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) +
                 (longlong)
                 (int)(DAT_1464c9808 + uVar17 + DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8) * 8)
                     = uVar7;
                lVar9 = lVar11;
                if (DAT_1469f59d8 != 0) {
                  if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
                    FShaderCache::InternalSetSamplerState
                              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,uVar17,uVar7);
                  }
                  if (DAT_1469f59d8 != 0) {
                    lVar9 = *(longlong *)(DAT_1469f59d8 + 0xcc0);
                  }
                }
                if ((DAT_1469f59d8 != 0) && (lVar9 != 0)) {
                  FShaderCache::InternalSetSRV(DAT_1469f59d8,lVar9,2,uVar17,lVar13);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
            lVar11 = *(longlong *)(lVar12 + 0x70);
            uVar15 = *(uint *)(uVar20 + lVar11);
            if (uVar15 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x40);
              puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
              uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
              do {
                puVar19 = puVar19 + 1;
                uVar7 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
                *(undefined8 *)
                 (*(longlong *)(param_1 + 0x1b8) +
                 (longlong)
                 (int)(DAT_1464c9808 + (uVar15 & 0xff) + DAT_1464c9804 + DAT_1464c9800 +
                      DAT_1464c97f8) * 8) = uVar7;
                if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                  FShaderCache::InternalSetSamplerState
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,uVar15 & 0xff,
                             uVar7);
                }
                uVar15 = *puVar19;
              } while (uVar15 >> 0x18 == uVar22);
            }
          }
          plVar16 = plVar16 + 1;
          uVar18 = (ulonglong)(uVar22 + 1);
          uVar20 = uVar20 + 4;
          bVar23 = 1 < uVar21;
          uVar21 = uVar21 >> 1;
        } while (bVar23);
      }
    }
    uVar20 = 0;
    if ((*(short *)(param_1 + 0x88a) != 0) &&
       (lVar12 = FUN_141e71220(*(undefined8 *)(param_1 + 0x5d0)), lVar12 != 0)) {
      plVar16 = (longlong *)(param_1 + 0x7a0);
      uVar18 = uVar20;
      uVar21 = (uint)*(ushort *)(param_1 + 0x88a) & *(uint *)(lVar12 + 0x58);
      do {
        uVar22 = (uint)uVar18;
        if ((uVar21 & 1) != 0) {
          lVar11 = *(longlong *)(lVar12 + 0xa0);
          lVar8 = *plVar16;
          uVar15 = *(uint *)(uVar20 + lVar11);
          if (uVar15 != 0) {
            lVar5 = *(longlong *)(lVar8 + 0x40);
            puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
            uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
            do {
              puVar19 = puVar19 + 1;
              uVar17 = uVar15 & 0xff;
              lVar11 = *(longlong *)(lVar5 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
              lVar13 = GetOpenGLTextureFromRHITexture(lVar11);
              if (lVar13 == 0) {
                lVar9 = (longlong)(int)(DAT_1464c9800 + uVar17 + DAT_1464c97f8);
                lVar13 = *(longlong *)(param_1 + 0x1b0);
                *(undefined8 *)(lVar13 + lVar9 * 0x28) = 0;
                *(undefined8 *)(lVar13 + 8 + lVar9 * 0x28) = 0;
                *(undefined8 *)(lVar13 + 0x10 + lVar9 * 0x28) = 0;
                *(undefined4 *)(lVar13 + 0x18 + lVar9 * 0x28) = 0xffffffff;
                *(undefined1 *)(lVar13 + 0x1c + lVar9 * 0x28) = 1;
                *(undefined4 *)(lVar13 + 0x20 + lVar9 * 0x28) = 0;
              }
              else {
                if ((double)(float)DAT_1468b5a78 != **(double **)(lVar11 + 0x48)) {
                  **(double **)(lVar11 + 0x48) = (double)(float)DAT_1468b5a78;
                }
                iVar1 = *(int *)(lVar13 + 0x18);
                uVar2 = *(undefined4 *)(lVar13 + 0x10);
                uVar3 = *(undefined4 *)(lVar13 + 0x14);
                lVar14 = (longlong)(int)(DAT_1464c9800 + uVar17 + DAT_1464c97f8);
                lVar9 = *(longlong *)(param_1 + 0x1b0);
                *(longlong *)(lVar9 + lVar14 * 0x28) = lVar13;
                *(undefined8 *)(lVar9 + 8 + lVar14 * 0x28) = 0;
                *(undefined4 *)(lVar9 + 0x10 + lVar14 * 0x28) = uVar3;
                *(undefined4 *)(lVar9 + 0x14 + lVar14 * 0x28) = uVar2;
                *(undefined4 *)(lVar9 + 0x18 + lVar14 * 0x28) = 0xffffffff;
                if ((iVar1 < 0) || (iVar1 == 1)) {
                  *(int *)(lVar9 + 0x20 + lVar14 * 0x28) = iVar1;
                  *(undefined1 *)(lVar9 + 0x1c + lVar14 * 0x28) = 0;
                }
                else {
                  *(int *)(lVar9 + 0x20 + lVar14 * 0x28) = iVar1;
                  *(undefined1 *)(lVar9 + 0x1c + lVar14 * 0x28) = 1;
                }
              }
              if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                FShaderCache::InternalSetTexture
                          (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,uVar17,lVar11);
              }
              uVar15 = *puVar19;
            } while (uVar15 >> 0x18 == uVar22);
          }
          lVar11 = *(longlong *)(lVar12 + 0x60);
          uVar15 = *(uint *)(uVar20 + lVar11);
          if (uVar15 != 0) {
            lVar5 = *(longlong *)(lVar8 + 0x40);
            puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
            uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
            lVar11 = 0;
            do {
              puVar19 = puVar19 + 1;
              uVar17 = uVar15 & 0xff;
              lVar13 = *(longlong *)(lVar5 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
              lVar9 = lVar11;
              if (lVar13 != 0) {
                if (DAT_146ab6383 != '\0') {
                  IsInRenderingThread();
                }
                lVar9 = *(longlong *)(lVar13 + 0x20);
              }
              uVar2 = *(undefined4 *)(lVar9 + 0x10);
              uVar3 = *(undefined4 *)(lVar9 + 0x20);
              lVar10 = (longlong)(int)(DAT_1464c9800 + uVar17 + DAT_1464c97f8);
              lVar14 = *(longlong *)(param_1 + 0x1b0);
              *(undefined4 *)(lVar14 + 0x10 + lVar10 * 0x28) = *(undefined4 *)(lVar9 + 0x14);
              *(undefined8 *)(lVar14 + lVar10 * 0x28) = 0;
              *(longlong *)(lVar14 + 8 + lVar10 * 0x28) = lVar9;
              *(undefined4 *)(lVar14 + 0x14 + lVar10 * 0x28) = uVar2;
              *(undefined4 *)(lVar14 + 0x18 + lVar10 * 0x28) = uVar3;
              *(undefined1 *)(lVar14 + 0x1c + lVar10 * 0x28) = 1;
              *(undefined4 *)(lVar14 + 0x20 + lVar10 * 0x28) = 0;
              uVar7 = *(undefined8 *)(param_1 + 0x900);
              *(undefined8 *)
               (*(longlong *)(param_1 + 0x1b8) +
               (longlong)(int)(DAT_1464c9800 + uVar17 + DAT_1464c97f8) * 8) = uVar7;
              lVar9 = lVar11;
              if (DAT_1469f59d8 != 0) {
                if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
                  FShaderCache::InternalSetSamplerState
                            (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,uVar17,uVar7);
                }
                if (DAT_1469f59d8 != 0) {
                  lVar9 = *(longlong *)(DAT_1469f59d8 + 0xcc0);
                }
              }
              if ((DAT_1469f59d8 != 0) && (lVar9 != 0)) {
                FShaderCache::InternalSetSRV(DAT_1469f59d8,lVar9,4,uVar17,lVar13);
              }
              uVar15 = *puVar19;
            } while (uVar15 >> 0x18 == uVar22);
          }
          lVar11 = *(longlong *)(lVar12 + 0x70);
          uVar15 = *(uint *)(uVar20 + lVar11);
          if (uVar15 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x40);
            puVar19 = (uint *)(lVar11 + (ulonglong)uVar15 * 4);
            uVar15 = *(uint *)(lVar11 + (ulonglong)uVar15 * 4);
            do {
              puVar19 = puVar19 + 1;
              uVar7 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 >> 8 & 0xffff) * 8);
              *(undefined8 *)
               (*(longlong *)(param_1 + 0x1b8) +
               (longlong)(int)(DAT_1464c9800 + (uVar15 & 0xff) + DAT_1464c97f8) * 8) = uVar7;
              if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
                FShaderCache::InternalSetSamplerState
                          (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,uVar15 & 0xff,uVar7)
                ;
              }
              uVar15 = *puVar19;
            } while (uVar15 >> 0x18 == uVar22);
          }
        }
        plVar16 = plVar16 + 1;
        uVar18 = (ulonglong)(uVar22 + 1);
        uVar20 = uVar20 + 4;
        bVar23 = 1 < uVar21;
        uVar21 = uVar21 >> 1;
      } while (bVar23);
    }
  }
  *(undefined1 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x882) = 0;
  *(undefined2 *)(param_1 + 0x88a) = 0;
  return;
}



// FUNCTION 141e6fd70 FUN_141e6fd70 body=145 status=ok
// SIG undefined FUN_141e6fd70(void)

void FUN_141e6fd70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_141e94d50(*(undefined8 *)(param_1 + 0x5c8),param_2,0);
  FUN_141e94d50(*(longlong *)(param_1 + 0x5c8) + 0x80,param_2,1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xb8);
  if (lVar1 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      FUN_141e94d50(*(longlong *)(param_1 + 0x5c8) + 0x100,param_2,2);
    }
  }
  return;
}



// FUNCTION 141e6fe10 FUN_141e6fe10 body=432 status=ok
// SIG undefined FUN_141e6fe10(void)

void FUN_141e6fe10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x98);
  if (DAT_146ab3552 != '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xa8);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    FUN_141e94ef0(*(undefined8 *)(param_1 + 0x5c8),uVar1,0,param_1 + 0x5e0,
                  *(longlong *)(lVar2 + 0x38) + 200);
  }
  FUN_141e94d50(*(undefined8 *)(param_1 + 0x5c8),uVar1,0);
  if (DAT_146ab3552 != '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xb0);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    FUN_141e94ef0(*(longlong *)(param_1 + 0x5c8) + 0x80,uVar1,1,param_1 + 0x730,
                  *(longlong *)(lVar2 + 0x38) + 200);
  }
  FUN_141e94d50(*(longlong *)(param_1 + 0x5c8) + 0x80,uVar1,1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xb8);
  if (lVar2 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    if (*(longlong *)(lVar2 + 0x38) != 0) {
      if (DAT_146ab3552 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xb8);
        if (lVar2 != 0) {
          if (DAT_146ab6383 != '\0') {
            IsInRenderingThread();
          }
          lVar3 = *(longlong *)(lVar2 + 0x38);
        }
        FUN_141e94ef0(*(longlong *)(param_1 + 0x5c8) + 0x100,uVar1,2,param_1 + 0x7a0,lVar3 + 200);
      }
      FUN_141e94d50(*(longlong *)(param_1 + 0x5c8) + 0x100,uVar1,2);
    }
  }
  return;
}



// FUNCTION 141e6ffc0 FUN_141e6ffc0 body=64 status=ok
// SIG undefined FUN_141e6ffc0(void)

void FUN_141e6ffc0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6788;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 141e70000 FUN_141e70000 body=62 status=ok
// SIG undefined FUN_141e70000(void)

void FUN_141e70000(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6740;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141e70040 FUN_141e70040 body=88 status=ok
// SIG undefined FUN_141e70040(void)

void FUN_141e70040(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6710;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 141e700a0 FUN_141e700a0 body=70 status=ok
// SIG undefined FUN_141e700a0(void)

void FUN_141e700a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb66e0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141e700f0 FUN_141e700f0 body=102 status=ok
// SIG undefined FUN_141e700f0(void)

void FUN_141e700f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb66f8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar2[0xe] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141e70160 FUN_141e70160 body=78 status=ok
// SIG undefined FUN_141e70160(void)

void FUN_141e70160(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6770;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141e701b0 FUN_141e701b0 body=104 status=ok
// SIG undefined FUN_141e701b0(void)

void FUN_141e701b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6758;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    return;
  }
  return;
}



// FUNCTION 141e70220 FUN_141e70220 body=72 status=ok
// SIG undefined FUN_141e70220(void)

void FUN_141e70220(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144eb6728;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 141e70270 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea1370(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70290 FUN_141e70290 body=129 status=ok
// SIG undefined FUN_141e70290(void)

undefined8 * FUN_141e70290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x180);
    FGPUProfilerEventNode::FGPUProfilerEventNode(puVar2,param_2,param_3);
    *puVar2 = &PTR_FUN_144eb5b50;
    FUN_141e8cd50(puVar2 + 0xb,uVar1,1);
    FUN_141e9cd00(puVar2 + 0xb);
  }
  return puVar2;
}



// FUNCTION 141e70320 CreateGLBuffer body=360 status=ok
// SIG undefined CreateGLBuffer(void)

void TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::CreateGLBuffer
               (longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  _Dst = (int *)(param_1 + 0x28);
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar2 = param_4;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  if (param_3 != 0) {
    *_Dst = param_3;
    FUN_141e6d8b0();
                    /* WARNING: Could not recover jumptable at 0x000141e70368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146ab4318)(0x8893,0,uVar1,param_2);
    return;
  }
  iVar3 = 0x400 - DAT_1464c97e0;
  if (iVar3 < 2) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar3 * 4);
    (*DAT_146ab4300)(0x400,&DAT_146ab1550);
    iVar5 = 1 - iVar3;
    ::_guard_xfg_dispatch_icall_nop(_Dst + iVar3,&DAT_146ab1550,(longlong)iVar5 << 2);
  }
  else {
    *_Dst = (&DAT_146ab1550)[DAT_1464c97e0];
    iVar5 = DAT_1464c97e0 + 1;
  }
  DAT_1464c97e0 = iVar5;
  FUN_141e6d8b0(param_1);
  if ((*(byte *)(param_1 + 0x38) & 4) == 0) {
    uVar4 = 0x88e4;
    if ((*(byte *)(param_1 + 0x20) & 6) != 0) {
      uVar4 = 0x88e8;
    }
  }
  else {
    uVar4 = 0x88e0;
  }
  (*DAT_146ab4310)(0x8893,*(undefined4 *)(param_1 + 0x50),0,uVar4);
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if (uVar1 <= *(uint *)(param_1 + 0x50)) {
      uVar2 = uVar1;
    }
    LoadData(param_1,0,uVar2,param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x8893);
  return;
}



// FUNCTION 141e70490 CreateGLBuffer body=439 status=ok
// SIG undefined CreateGLBuffer(void)

void TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::CreateGLBuffer
               (longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  _Dst = (int *)(param_1 + 0x18);
  uVar1 = uVar3;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (param_3 == 0) {
    iVar4 = 0x400 - DAT_1464c97e0;
    if (iVar4 < 2) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar4 * 4);
      (*DAT_146ab4300)(0x400,&DAT_146ab1550);
      iVar6 = 1 - iVar4;
      ::_guard_xfg_dispatch_icall_nop(_Dst + iVar4,&DAT_146ab1550,(longlong)iVar6 << 2);
    }
    else {
      *_Dst = (&DAT_146ab1550)[DAT_1464c97e0];
      iVar6 = DAT_1464c97e0 + 1;
    }
    DAT_1464c97e0 = iVar6;
    FUN_141e6d920(param_1);
    if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
      uVar5 = 0x88e4;
      if ((*(byte *)(param_1 + 0x14) & 6) != 0) {
        uVar5 = 0x88e8;
      }
    }
    else {
      uVar5 = 0x88e0;
    }
    (*DAT_146ab4310)(0x88ec,*(undefined4 *)(param_1 + 0x40),0,uVar5);
    uVar1 = DAT_1464c97d4;
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0x40);
      if (uVar3 <= *(uint *)(param_1 + 0x40)) {
        uVar2 = uVar3;
      }
      iVar4 = 0;
      if (DAT_1464c97d4 == 0) {
        (*DAT_146ab4318)(0x88ec,0,uVar2,param_2);
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - uVar3) {
          uVar3 = uVar2;
          if (uVar1 <= uVar2) {
            uVar3 = uVar1;
          }
          (*DAT_146ab4318)(0x88ec,iVar4,uVar3,param_2);
          iVar4 = iVar4 + uVar3;
          param_2 = param_2 + (ulonglong)uVar3;
        }
      }
    }
    AK::MemoryMgr::StartProfileThreadUsage(0x88ec);
    return;
  }
  *_Dst = param_3;
  FUN_141e6d920();
                    /* WARNING: Could not recover jumptable at 0x000141e704d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab4318)(0x88ec,0,uVar3,param_2);
  return;
}



// FUNCTION 141e70650 CreateGLBuffer body=360 status=ok
// SIG undefined CreateGLBuffer(void)

void TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::CreateGLBuffer
               (longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  _Dst = (int *)(param_1 + 0x28);
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar2 = param_4;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  if (param_3 != 0) {
    *_Dst = param_3;
    FUN_141e6d990();
                    /* WARNING: Could not recover jumptable at 0x000141e70698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146ab4318)(0x8892,0,uVar1,param_2);
    return;
  }
  iVar3 = 0x400 - DAT_1464c97e0;
  if (iVar3 < 2) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar3 * 4);
    (*DAT_146ab4300)(0x400,&DAT_146ab1550);
    iVar5 = 1 - iVar3;
    ::_guard_xfg_dispatch_icall_nop(_Dst + iVar3,&DAT_146ab1550,(longlong)iVar5 << 2);
  }
  else {
    *_Dst = (&DAT_146ab1550)[DAT_1464c97e0];
    iVar5 = DAT_1464c97e0 + 1;
  }
  DAT_1464c97e0 = iVar5;
  FUN_141e6d990(param_1);
  if ((*(byte *)(param_1 + 0x38) & 4) == 0) {
    uVar4 = 0x88e4;
    if ((*(byte *)(param_1 + 0x1c) & 6) != 0) {
      uVar4 = 0x88e8;
    }
  }
  else {
    uVar4 = 0x88e0;
  }
  (*DAT_146ab4310)(0x8892,*(undefined4 *)(param_1 + 0x50),0,uVar4);
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if (uVar1 <= *(uint *)(param_1 + 0x50)) {
      uVar2 = uVar1;
    }
    LoadData(param_1,0,uVar2,param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x8892);
  return;
}



// FUNCTION 141e707c0 CreateGeometryShaderWithStreamOutput_RenderThread body=63 status=ok
// SIG undefined CreateGeometryShaderWithStreamOutput_RenderThread(void)

undefined8
FOpenGLDynamicRHI::CreateGeometryShaderWithStreamOutput_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  RHICreateGeometryShaderWithStreamOutput(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 141e70800 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea1830(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70820 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea1a80(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70840 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea1d80(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70860 FUN_141e70860 body=42 status=ok
// SIG undefined FUN_141e70860(void)

void FUN_141e70860(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  DAT_1464c9828 = param_2;
  lVar1 = operator_new(0x16050);
  if (lVar1 != 0) {
    FUN_141e69e20(lVar1);
    return;
  }
  return;
}



// FUNCTION 141e70890 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea2560(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e708b0 FUN_141e708b0 body=40 status=ok
// SIG undefined FUN_141e708b0(void)

undefined8
FUN_141e708b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  FUN_141ea2b20(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 141e708e0 FUN_141e708e0 body=512 status=ok
// SIG undefined FUN_141e708e0(void)

undefined8 *
FUN_141e708e0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  uVar1 = param_7;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    FUN_141ea2c20(param_1,param_2,local_res20[0],param_5,param_6,uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_7 = 0;
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x38,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144eb66e0;
      puVar3[1] = &param_7;
      puVar3[2] = param_1;
      local_78 = (undefined4)uVar1;
      uStack_74 = (undefined4)((ulonglong)uVar1 >> 0x20);
      puVar3[3] = local_res20;
      puVar3[4] = &param_5;
      puVar3[5] = &param_6;
      *(undefined4 *)(puVar3 + 6) = local_78;
      *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_74;
    }
    local_68[0] = &LAB_141e6de30;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = param_7;
  }
  return param_2;
}



// FUNCTION 141e70ae0 CreateVertexBuffer_RenderThread body=41 status=ok
// SIG undefined CreateVertexBuffer_RenderThread(void)

undefined8
FOpenGLDynamicRHI::CreateVertexBuffer_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6)

{
  RHICreateVertexBuffer(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 141e70b10 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141eb2ba0(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70b30 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea43a0(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e70b50 EnableVertexElementCached body=341 status=ok
// SIG undefined EnableVertexElementCached(void)

void FOpenGLDynamicRHI::EnableVertexElementCached
               (undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,int param_5,
               longlong param_6,int param_7)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 & 0xffffffff;
  uVar2 = 1 << ((byte)param_3 & 0x1f);
  if ((uVar2 & *(uint *)(param_2 + 0x878)) == 0) {
    *(uint *)(param_2 + 0x878) = *(uint *)(param_2 + 0x878) | uVar2;
    (*DAT_146ab43c0)(uVar3);
  }
  plVar1 = (longlong *)(param_2 + 0x478 + uVar3 * 0x28);
  if ((*(int *)((longlong)plVar1 + 0xc) != param_7 ||
      (((int)plVar1[3] != *param_4 ||
       (*(int *)(param_2 + 0x488 + uVar3 * 0x28) != param_4[3] ||
       *(char *)((longlong)plVar1 + 0x24) != (char)param_4[6])) || (int)plVar1[1] != param_5)) ||
      *plVar1 != param_6) {
    if (*(int *)(param_2 + 0x420) != param_7) {
      (*DAT_146ab42e8)(0x8892,param_7);
      *(int *)(param_2 + 0x420) = param_7;
    }
    if (*(char *)((longlong)param_4 + 0x1a) == '\0') {
      (*DAT_146ab4698)();
    }
    else {
      (*DAT_146ab4690)(uVar3,param_4[3],*param_4,(char)param_4[6],param_5,param_6);
    }
    *plVar1 = param_6;
    *(int *)((longlong)plVar1 + 0xc) = param_7;
    *(int *)(plVar1 + 2) = param_4[3];
    *(int *)(plVar1 + 3) = *param_4;
    *(char *)((longlong)plVar1 + 0x24) = (char)param_4[6];
    *(int *)(plVar1 + 1) = param_5;
  }
  if (*(int *)((longlong)plVar1 + 0x14) != param_4[4]) {
    (*DAT_146ab4788)(uVar3);
    *(int *)((longlong)plVar1 + 0x14) = param_4[4];
  }
  return;
}



// FUNCTION 141e70cb0 ExecuteAndDestruct body=120 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandGLCommand>::ExecuteAndDestruct(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (**(code **)(param_1 + 0x10))(uVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e70d30 FUN_141e70d30 body=761 status=ok
// SIG undefined FUN_141e70d30(void)

undefined8 * FUN_141e70d30(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  bool bVar17;
  undefined8 local_30;
  
  iVar11 = DAT_146ab35f8;
  iVar14 = 0;
  lVar12 = (longlong)DAT_146ab35f8;
  uVar13 = param_2 * param_3;
  plVar7 = DAT_146ab35f0;
  if (0 < DAT_146ab35f8) {
    do {
      if (*plVar7 == param_1) {
        if (iVar14 != -1) {
          if (uVar13 <= *(uint *)((undefined8 *)DAT_146ab35f0[(longlong)iVar14 * 2 + 1] + 3)) {
            return (undefined8 *)DAT_146ab35f0[(longlong)iVar14 * 2 + 1];
          }
          goto LAB_141e70dbf;
        }
        break;
      }
      iVar14 = iVar14 + 1;
      plVar7 = plVar7 + 2;
    } while (iVar14 < DAT_146ab35f8);
  }
  DAT_146ab35f8 = DAT_146ab35f8 + 1;
  local_30 = 0;
  if (DAT_146ab35fc < DAT_146ab35f8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146ab35f0);
  }
  plVar7 = DAT_146ab35f0;
  DAT_146ab35f0[lVar12 * 2] = param_1;
  plVar7[lVar12 * 2 + 1] = 0;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_30);
  iVar14 = iVar11;
LAB_141e70dbf:
  iVar11 = 0;
  switch(*param_4) {
  case 0x1400:
  case 0x1401:
    iVar11 = 1;
    break;
  case 0x1402:
  case 0x1403:
  case 0x140b:
    iVar11 = 2;
    break;
  case 0x1404:
  case 0x1405:
  case 0x1406:
    iVar11 = 4;
    break;
  case 0x140a:
    iVar11 = 8;
  }
  iVar16 = param_4[3];
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (iVar16 == 0x80e1) {
    iVar16 = 4;
  }
  iVar16 = iVar16 * iVar11;
  lVar12 = operator_new(0x58);
  if (lVar12 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)FUN_141e69500(lVar12,0,uVar13,1,0,0,0,0);
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
  }
  FUN_141e6d990(puVar8);
  uVar2 = *(uint *)(puVar8 + 7);
  *(uint *)(puVar8 + 7) = uVar2 & 0xfffffffd | 1;
  bVar17 = DAT_146ab053c == 0;
  if ((DAT_146ab0540 == 0) && (DAT_1464c97d8 != 0)) {
    if ((uVar2 & 4) == 0) {
      uVar15 = 0x88e4;
      if ((*(byte *)((longlong)puVar8 + 0x1c) & 6) != 0) {
        uVar15 = 0x88e8;
      }
    }
    else {
      uVar15 = 0x88e0;
    }
    (*DAT_146ab4310)(0x8892,*(undefined4 *)(puVar8 + 10),0,uVar15);
  }
  if (bVar17) {
    *(undefined4 *)(puVar8 + 8) = 0;
    *(uint *)((longlong)puVar8 + 0x3c) = uVar13;
    puVar9 = (undefined8 *)FMemory::Malloc(uVar13,0);
    *(uint *)(puVar8 + 7) = *(uint *)(puVar8 + 7) | 8;
  }
  else {
    puVar9 = (undefined8 *)(*DAT_146ab4778)(0x8892,0,uVar13,0x2a);
    *(uint *)(puVar8 + 7) = *(uint *)(puVar8 + 7) & 0xfffffff7;
    *(undefined4 *)(puVar8 + 8) = 0;
    *(uint *)((longlong)puVar8 + 0x3c) = uVar13;
  }
  puVar8[9] = puVar9;
  if (iVar16 == 4) {
    if (uVar13 >> 2 != 0) {
      uVar3 = *(undefined4 *)puVar4;
      for (uVar10 = (ulonglong)(uVar13 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)puVar9 = uVar3;
        puVar9 = (undefined8 *)((longlong)puVar9 + 4);
      }
    }
  }
  else if (iVar16 == 8) {
    if (uVar13 >> 3 != 0) {
      uVar15 = *puVar4;
      for (uVar10 = (ulonglong)(uVar13 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar9 = uVar15;
        puVar9 = puVar9 + 1;
      }
    }
  }
  else if (iVar16 == 0x10) {
    uVar15 = *puVar4;
    uVar5 = puVar4[1];
    if (uVar13 >> 4 != 0) {
      uVar10 = (ulonglong)(uVar13 >> 4);
      do {
        *puVar9 = uVar15;
        puVar9[1] = uVar5;
        puVar9 = puVar9 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::Unlock(puVar8);
  TRefCountPtr<FRHITexture>::operator=(DAT_146ab35f0 + (longlong)iVar14 * 2 + 1,puVar8);
  LOCK();
  piVar1 = (int *)(puVar8 + 1);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar11 == 1) {
    if ((*(char *)(puVar8 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0'))))
    {
      LOCK();
      bVar17 = *(int *)((longlong)puVar8 + 0xc) == 0;
      if (bVar17) {
        *(int *)((longlong)puVar8 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar17) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar8);
      }
    }
    else {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  return puVar8;
}



// FUNCTION 141e71060 FUN_141e71060 body=282 status=ok
// SIG undefined FUN_141e71060(void)

void FUN_141e71060(int param_1,char param_2,int param_3,undefined4 *param_4,int *param_5,
                  int *param_6)

{
  *param_4 = 4;
  *param_5 = param_3;
  *param_6 = 0;
  switch(param_1) {
  case 0:
    break;
  case 1:
    *param_4 = 5;
    *param_5 = param_3 + 2;
    return;
  case 2:
    *param_4 = 1;
    *param_5 = param_3 * 2;
    return;
  default:
    LowLevelFatalErrorHandler("Unknown",0x1ac,L"Unsupported primitive type %u",param_1);
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x1ac,L"Unsupported primitive type %u");
    return;
  case 4:
    *param_4 = 0;
    *param_5 = param_3;
    return;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    *param_4 = 0xe;
    *param_6 = param_1 + -5;
    *param_5 = (param_1 + -5) * param_3;
    return;
  }
  if (param_2 != '\0') {
    *param_4 = 0xe;
    *param_6 = 3;
    *param_5 = param_3 * 3;
    return;
  }
  *param_4 = 4;
  *param_5 = param_3 * 3;
  return;
}



// FUNCTION 141e711c0 FUN_141e711c0 body=94 status=ok
// SIG undefined FUN_141e711c0(void)

longlong FUN_141e711c0(longlong param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x15bd0) != 1) {
    iVar1 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15c28));
    if ((param_2 == '\0') && (iVar1 < 0)) {
      return param_1 + 0x14208;
    }
    if (iVar1 != 1) {
      return param_1 + 0x14aa0;
    }
  }
  return param_1 + 0x15338;
}



// FUNCTION 141e71220 FUN_141e71220 body=50 status=ok
// SIG undefined FUN_141e71220(void)

undefined8 FUN_141e71220(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    return *(undefined8 *)(lVar1 + 0x38);
  }
  return 0;
}



// FUNCTION 141e71270 GetOpenGLTextureFromRHITexture body=57 status=ok
// SIG undefined GetOpenGLTextureFromRHITexture(void)

undefined8 GetOpenGLTextureFromRHITexture(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x48))();
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
                    /* WARNING: Could not recover jumptable at 0x000141e712a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  return uVar1;
}



// FUNCTION 141e712b0 FUN_141e712b0 body=167 status=ok
// SIG undefined FUN_141e712b0(void)

undefined4 FUN_141e712b0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x48))();
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  lVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((((lVar1 == 0) && (lVar1 = (**(code **)(*param_1 + 0x10))(param_1), lVar1 == 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x18))(param_1), lVar1 == 0)) &&
     (lVar1 = (**(code **)(*param_1 + 0x20))(param_1), lVar1 == 0)) {
    LowLevelFatalErrorHandler("Unknown",0x6f0,L"Unknown RHI texture type");
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x6f0,L"Unknown RHI texture type");
    return 0;
  }
  return (int)param_1[0xc];
}



// FUNCTION 141e71360 FUN_141e71360 body=176 status=ok
// SIG undefined FUN_141e71360(void)

undefined4 FUN_141e71360(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x48))();
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  lVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (((lVar1 == 0) && (lVar1 = (**(code **)(*param_1 + 0x10))(param_1), lVar1 == 0)) &&
     (lVar1 = (**(code **)(*param_1 + 0x18))(param_1), lVar1 == 0)) {
    lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar1 == 0) {
      LowLevelFatalErrorHandler("Unknown",0x70f,L"Unknown RHI texture type");
      FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x70f,L"Unknown RHI texture type");
      return 0;
    }
    return (int)param_1[0xc];
  }
  return *(undefined4 *)((longlong)param_1 + 100);
}



// FUNCTION 141e71410 FUN_141e71410 body=647 status=ok
// SIG undefined FUN_141e71410(void)

ulonglong FUN_141e71410(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  lVar9 = 2;
  plVar10 = param_1;
  do {
    plVar10 = plVar10 + 1;
    puVar4 = (undefined8 *)operator_new(0x58);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      uVar6 = 0;
    }
    else {
      *puVar4 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined2 *)(puVar4 + 2) = 0x100;
      *(undefined4 *)(puVar4 + 3) = 2;
      *(int *)((longlong)puVar4 + 0x1c) = (int)param_2;
      *(undefined4 *)(puVar4 + 4) = 4;
      *puVar4 = &PTR_FUN_144eb66d8;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[6] = 0;
      *(uint *)(puVar4 + 7) = *(uint *)(puVar4 + 7) & 0xfffffff4 | 4;
      *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
      puVar4[9] = 0;
      *(int *)(puVar4 + 10) = (int)param_2;
      if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
        uVar6 = TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::
                CreateGLBuffer(puVar4,0,0,0);
      }
      else {
        puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar7 + 0xc;
        if (DAT_146ab6eb0 < puVar5) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
          puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar5 = puVar7 + 0xc;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar5;
        *DAT_146ab6e80 = puVar7;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        DAT_146ab6e80 = puVar7 + 1;
        puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar5 != (undefined8 *)0x0) {
          local_a8 = SUB84(puVar4,0);
          uStack_a4 = (undefined4)((ulonglong)puVar4 >> 0x20);
          *(undefined4 *)(puVar5 + 1) = local_a8;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_a4;
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
          *puVar5 = &PTR_FUN_144eb6788;
          puVar5[3] = 0;
        }
        *puVar7 = &PTR_ExecuteAndDestruct_144eb5ab0;
        puVar7[1] = 0;
        uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2);
        if (local_48 != 0) {
          plVar8 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar8 = local_58;
          }
          if (plVar8 != (longlong *)0x0) {
            uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (local_58 != (longlong *)0x0) {
          uVar6 = FMemory::Free();
        }
      }
    }
    puVar5 = (undefined8 *)*plVar10;
    *plVar10 = (longlong)puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar5 + 1);
      uVar2 = *puVar1;
      uVar6 = (ulonglong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        if ((*(char *)(puVar5 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          uVar6 = 0;
          LOCK();
          uVar2 = *(uint *)((longlong)puVar5 + 0xc);
          if (uVar2 == 0) {
            *(uint *)((longlong)puVar5 + 0xc) = 1;
          }
          else {
            uVar6 = (ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 == 0) {
            uVar6 = TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar6 = (**(code **)*puVar5)(puVar5);
        }
      }
    }
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)((longlong)param_1 + 0x24) = (uint)(param_2 >> 4) & 0xfffffff;
  return uVar6;
}



// FUNCTION 141e716a0 FUN_141e716a0 body=644 status=ok
// SIG undefined FUN_141e716a0(void)

ulonglong FUN_141e716a0(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  lVar9 = 2;
  plVar10 = param_1;
  do {
    plVar10 = plVar10 + 1;
    puVar4 = (undefined8 *)operator_new(0x58);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      uVar6 = 0;
    }
    else {
      *puVar4 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined2 *)(puVar4 + 2) = 0x100;
      *(int *)(puVar4 + 3) = (int)param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = 4;
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_144eb5b00;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[6] = 0;
      *(uint *)(puVar4 + 7) = *(uint *)(puVar4 + 7) & 0xfffffff4 | 4;
      *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
      puVar4[9] = 0;
      *(int *)(puVar4 + 10) = (int)param_2;
      if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
        uVar6 = TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::CreateGLBuffer
                          (puVar4,0,0,0);
      }
      else {
        puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar7 + 0xc;
        if (DAT_146ab6eb0 < puVar5) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
          puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar5 = puVar7 + 0xc;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar5;
        *DAT_146ab6e80 = puVar7;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        DAT_146ab6e80 = puVar7 + 1;
        puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar5 != (undefined8 *)0x0) {
          local_a8 = SUB84(puVar4,0);
          uStack_a4 = (undefined4)((ulonglong)puVar4 >> 0x20);
          *(undefined4 *)(puVar5 + 1) = local_a8;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_a4;
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
          *puVar5 = &PTR_FUN_144eb6788;
          puVar5[3] = 0;
        }
        *puVar7 = &PTR_ExecuteAndDestruct_144eb5ab0;
        puVar7[1] = 0;
        uVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2);
        if (local_48 != 0) {
          plVar8 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar8 = local_58;
          }
          if (plVar8 != (longlong *)0x0) {
            uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (local_58 != (longlong *)0x0) {
          uVar6 = FMemory::Free();
        }
      }
    }
    puVar5 = (undefined8 *)*plVar10;
    *plVar10 = (longlong)puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar5 + 1);
      uVar2 = *puVar1;
      uVar6 = (ulonglong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        if ((*(char *)(puVar5 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          uVar6 = 0;
          LOCK();
          uVar2 = *(uint *)((longlong)puVar5 + 0xc);
          if (uVar2 == 0) {
            *(uint *)((longlong)puVar5 + 0xc) = 1;
          }
          else {
            uVar6 = (ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 == 0) {
            uVar6 = TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar6 = (**(code **)*puVar5)(puVar5);
        }
      }
    }
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)((longlong)param_1 + 0x24) = (uint)(param_2 >> 4) & 0xfffffff;
  return uVar6;
}



// FUNCTION 141e71930 FUN_141e71930 body=647 status=ok
// SIG undefined FUN_141e71930(void)

void FUN_141e71930(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  int local_res8 [4];
  undefined8 *local_res18 [2];
  longlong local_58 [2];
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1419f3560(0,DAT_146ab62cc);
  DAT_1464c0ae0 = (undefined1)DAT_1464c97f8;
  DAT_1464c0ae4 = DAT_1464c97f8;
  FUN_141e9da30(param_1);
  lVar7 = 0;
  local_3c = 0x7f7fffff;
  local_48 = 0x1010100;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  plVar5 = (longlong *)FUN_141ea20e0(param_1,local_res18,&local_48);
  plVar2 = (longlong *)(param_1 + 0x900);
  if (plVar2 != plVar5) {
    puVar6 = (undefined8 *)*plVar2;
    *plVar2 = *plVar5;
    *plVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar6 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar6 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar6 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
          }
        }
        else {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
  }
  if (local_res18[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res18[0] + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(local_res18[0] + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)local_res18[0] + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)local_res18[0] + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res18[0]);
        }
      }
      else {
        (**(code **)*local_res18[0])(local_res18[0],1);
      }
    }
  }
  FUN_141e716a0(param_1 + 0x8b0,0x100000);
  FUN_141e71410(param_1 + 0x8d8,0x100000);
  puVar6 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6)
  {
    (**(code **)(*(longlong *)puVar6[2] + 0x18))();
  }
  puVar6 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6)
  {
    (**(code **)(*(longlong *)puVar6[2] + 8))();
  }
  if (DAT_146ab0538 != '\0') {
    local_res8[0] = 0;
    (*DAT_146ab4060)(0x9047,local_res8);
    lVar7 = (longlong)local_res8[0] << 10;
  }
  if ((lVar7 != 0) && (DAT_146ab3e08 = lVar7, 0 < DAT_146ab6310)) {
    DAT_146ab6308 = (longlong)(int)((float)DAT_146ab6310 * 9.536743e-09 * (float)lVar7) << 0x14;
  }
  DAT_146ab3e00 = lVar7;
  (*DAT_146ab4028)();
  local_58[0] = 0;
  local_58[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"OpenGL",0xe);
  FHardwareInfo::RegisterHardwareInfo(DAT_146ab3600,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  DAT_146ab62c8 = 1;
  return;
}



// FUNCTION 141e71bc0 InitDebugContext body=257 status=ok
// SIG undefined InitDebugContext(void)

void InitDebugContext(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (DAT_146ab4820 != (code *)0x0) {
    (*DAT_146ab4018)(0x8242);
    (*DAT_146ab4820)(AK::MemoryMgr::StartProfileThreadUsage,0);
    iVar1 = (*DAT_146ab4050)();
    bVar2 = iVar1 == 0;
  }
  if ((DAT_146ab4830 != (code *)0x0) && (!bVar2)) {
    (*DAT_146ab4830)(AK::MemoryMgr::StartProfileThreadUsage,0);
    iVar1 = (*DAT_146ab4050)();
    bVar2 = iVar1 == 0;
  }
  if ((DAT_146ab4828 != (code *)0x0) && (bVar2)) {
    (*DAT_146ab4828)(0x824a,0x8268,0x1100,0,0,0);
    (*DAT_146ab4828)(0x824a,0x8269,0x1100,0,0,0);
    (*DAT_146ab4828)(0x824a,0x826a,0x1100,0,0,0);
    (*DAT_146ab4828)(0x8246,0x8251,0x826b,0,0,0);
  }
  return;
}



// FUNCTION 141e71cd0 FUN_141e71cd0 body=8290 status=ok
// SIG undefined FUN_141e71cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e71cd0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  uint uVar8;
  undefined8 uVar9;
  PROC pPVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  uint local_1d8;
  uint local_1d4;
  char local_1d0 [8];
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  int local_19c [7];
  longlong local_180 [5];
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar21 = 0;
  local_208 = &DAT_1468e2360;
  DAT_146ab6308 = 0;
  uVar6 = 0;
  DAT_146ab6310 = 0;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_146ab6310);
  uVar9 = (*DAT_146ab4070)(0x1f01);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,uVar9);
  psVar3 = local_50;
  local_1c8 = 0;
  local_1c0 = (ulonglong)(uint)local_1c0;
  uVar15 = uVar21;
  uVar8 = uVar6;
  uVar22 = uVar6;
  if ((local_50 != (short *)0x0) && (uVar15 = 0, *local_50 != 0)) {
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (local_50[lVar19] != 0);
    uVar18 = (int)lVar19 + 1;
    local_1c0 = (ulonglong)uVar18;
    uVar8 = uVar18;
    uVar22 = 0;
    if (0 < (int)uVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
      uVar8 = (uint)local_1c0;
      uVar22 = local_1c0._4_4_;
    }
    uVar15 = local_1c8;
    FGenericPlatformString::Memcpy(local_1c8,psVar3,(longlong)(int)uVar18 * 2);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (DAT_146ab6ae8 != 0) {
    FMemory::Free();
  }
  DAT_146ab6ae8 = uVar15;
  DAT_146ab6af0 = uVar8;
  DAT_146ab6af4 = uVar22;
  uVar9 = (*DAT_146ab4070)(0x1f02);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,uVar9);
  if (DAT_146ab6af8 != local_50) {
    uVar15 = uVar21;
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (local_50[lVar19] != 0);
      uVar15 = (ulonglong)((int)lVar19 + 1);
    }
    DAT_146ab6b00._0_4_ = 0;
    iVar20 = (int)uVar15;
    uVar13 = uVar21;
    if (DAT_146ab6b00._4_4_ != iVar20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146ab6af8,uVar15);
      uVar13 = (ulonglong)(uint)DAT_146ab6b00;
    }
    DAT_146ab6b00._0_4_ = iVar20 + (int)uVar13;
    if (DAT_146ab6b00._4_4_ < (int)(uint)DAT_146ab6b00) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ab6af8);
    }
    if (iVar20 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_146ab6af8,local_50,(longlong)iVar20 * 2);
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  local_1c0 = 0;
  GetExtensionsString(&local_1c8);
  local_208 = (undefined8 *)CONCAT44(local_208._4_4_,0xffffffff);
  iVar5 = FUN_141592950(&local_1c8,L"WGL_EXT_swap_control",1,0);
  local_1f8 = (longlong *)0x0;
  uStack_1f0 = 0;
  FUN_141594550(&local_1c8,&local_1f8,&DAT_144eb392c,1);
  FUN_141e6d3a0(&local_1c8);
  FOpenGL4::ProcessExtensions(&local_1c8);
  plVar14 = local_1f8;
  for (iVar20 = (int)uStack_1f0; iVar20 != 0; iVar20 = iVar20 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (iVar5 == -1) {
    pPVar10 = wglGetProcAddress("wglGetExtensionsStringEXT");
    pcVar11 = (char *)(*pPVar10)();
    pcVar11 = _guard_xfg_dispatch_icall_nop(pcVar11,"WGL_EXT_swap_control");
    if (pcVar11 != (char *)0x0) goto LAB_141e71faf;
  }
  else {
LAB_141e71faf:
    DAT_146ab0548 = wglGetProcAddress("wglSwapIntervalEXT");
  }
  cVar4 = (*DAT_146ab40a8)(0x92e0);
  if ((cVar4 != '\0') || (DAT_146ab053a = 0, DAT_146ab3f90 != '\0')) {
    DAT_146ab053a = 1;
  }
  local_1a8 = 0;
  (*DAT_146ab4060)(0xd33,&local_1a8);
  (*DAT_146ab4050)();
  local_1a4 = 0;
  (*DAT_146ab4060)(0x851c,&local_1a4);
  (*DAT_146ab4050)();
  local_1a0 = 0;
  (*DAT_146ab4060)(0x88ff,&local_1a0);
  (*DAT_146ab4050)();
  local_19c[1] = 0;
  (*DAT_146ab4060)(0x8073,local_19c + 1);
  (*DAT_146ab4050)();
  local_19c[0] = 0;
  (*DAT_146ab4060)(0x84e8,local_19c);
  (*DAT_146ab4050)();
  local_1ac = 0;
  (*DAT_146ab4060)(0x8872,&local_1ac);
  (*DAT_146ab4050)();
  local_1d8 = 1;
  (*DAT_146ab4060)(0x8824,&local_1d8);
  (*DAT_146ab4050)();
  local_19c[2] = 1;
  DAT_146ab3de8 = 8;
  if ((int)local_1d8 < 9) {
    DAT_146ab3de8 = local_1d8;
  }
  (*DAT_146ab4060)(0x8cdf,local_19c + 2);
  (*DAT_146ab4050)();
  local_19c[3] = 1;
  (*DAT_146ab4060)(0x8d57,local_19c + 3);
  (*DAT_146ab4050)();
  local_1b8 = 1;
  (*DAT_146ab4060)(0x910e,&local_1b8);
  (*DAT_146ab4050)();
  local_1b4 = 1;
  (*DAT_146ab4060)(0x910f,&local_1b4);
  (*DAT_146ab4050)();
  local_1b0 = 1;
  (*DAT_146ab4060)(0x9110,&local_1b0);
  (*DAT_146ab4050)();
  local_19c[4] = 0;
  (*DAT_146ab4060)(0x8b4d,local_19c + 4);
  (*DAT_146ab4050)();
  local_19c[5] = 0;
  (*DAT_146ab4060)(0x8869,local_19c + 5);
  (*DAT_146ab4050)();
  uVar9 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar9,L"quad_buffer_stereo");
  if (cVar4 != '\0') {
    local_1d0[0] = '\0';
    (*DAT_146ab4040)(0xc33,local_1d0);
    (*DAT_146ab4050)();
    DAT_146ab62ca = local_1d0[0] == '\x01';
  }
  if (DAT_146ab3df1 != '\0') {
    local_1d8 = 0;
    (*DAT_146ab4060)(0x84ff,&local_1d8);
    (*DAT_146ab4050)();
    DAT_1464c97f4 = local_1d8;
  }
  _DAT_146ab3df4 = local_1b8;
  _DAT_146ab3df8 = local_1b4;
  _DAT_146ab3dfc = local_1b0;
  local_1d4 = 0;
  (*DAT_146ab4060)(0x821b,&local_1d4);
  local_1d4 = 0;
  (*DAT_146ab4060)(0x821c,&local_1d4);
  cVar4 = FUN_141ed07f0(&local_1c8);
  if (cVar4 == '\0') {
    local_1d8 = 0;
    (*DAT_146ab4060)(0x821b,&local_1d8);
    if (local_1d8 != 2) {
      if ((local_1d8 == 3) || (local_1d8 != 4)) {
        uVar6 = 2;
      }
      else {
        local_1d4 = 0;
        (*DAT_146ab4060)(0x821c,&local_1d4);
        uVar6 = (2 < local_1d4) + 2;
      }
    }
  }
  else {
    uVar6 = (uint)local_1c8;
  }
  DAT_1464c9c14 = uVar6;
  cVar4 = FUN_141ed07f0(&local_1c8);
  if (cVar4 == '\0') {
LAB_141e722c4:
    local_1d4 = 0;
    (*DAT_146ab4060)(0x821b,&local_1d4);
    if ((local_1d4 == 3) || (local_1d4 != 4)) {
      uVar8 = 1;
    }
    else {
      local_1d8 = 0;
      (*DAT_146ab4060)(0x821c,&local_1d8);
      uVar8 = 1;
      if (2 < local_1d8) {
        uVar8 = 6;
      }
    }
  }
  else {
    uVar8 = 3;
    if ((uint)local_1c8 != 0) {
      if ((uint)local_1c8 != 1) goto LAB_141e722c4;
      uVar8 = 0xf;
      if (DAT_146ab3551 != '\0') {
        uVar8 = 0x18;
      }
    }
  }
  lVar19 = DAT_146ab3628;
  DAT_146ab62cc = uVar8;
  if ((int)DAT_1464c9c14 < 2) {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      uVar15 = 4;
      if (DVar7 == DAT_1468c21c0) goto LAB_141e72352;
    }
    else {
LAB_141e72352:
      uVar15 = uVar21;
    }
    if (*(int *)(uVar15 + lVar19) == 0) goto LAB_141e72367;
    DAT_146ab6326 = 1;
  }
  else {
LAB_141e72367:
    DAT_146ab6326 = 0;
  }
  uVar15 = (ulonglong)_tls_index;
  if (DAT_146ab62cc - 8 < 3) {
    DAT_146ab3552 = 1;
  }
  else {
    DAT_146ab3552 = 0;
    if ((DAT_146ab62cc < 0x1c) && ((0x8dfc0ebU >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x38) <
           DAT_146ab3dc0) && (_Init_thread_header(&DAT_146ab3dc0), DAT_146ab3dc0 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar14 = (longlong *)
                  (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UseEmulatedUBs");
        uVar13 = uVar21;
        if (plVar14 != (longlong *)0x0) {
          uVar13 = (**(code **)(*plVar14 + 0x38))(plVar14);
        }
        DAT_146ab3db8 = uVar13;
        _Init_thread_footer(&DAT_146ab3dc0);
      }
      uVar13 = DAT_146ab3db8;
      if (DAT_146ab3db8 != 0) {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar7 = GetCurrentThreadId();
          uVar12 = 4;
          if (DVar7 == DAT_1468c21c0) goto LAB_141e72401;
        }
        else {
LAB_141e72401:
          uVar12 = uVar21;
        }
        DAT_146ab3552 = 1;
        if (*(int *)(uVar12 + uVar13) != 0) goto LAB_141e72418;
      }
      DAT_146ab3552 = 0;
    }
  }
LAB_141e72418:
  local_180[0] = 0;
  local_180[1] = 0;
  GetFeatureLevelName(DAT_1464c9c14,local_180);
  uVar9 = FUN_141eca160(&local_1c8,DAT_146ab62cc);
  FName::ToString(uVar9,local_180 + 2);
  DAT_1464c9c2c = local_1ac;
  iVar20 = 0x1f;
  if (local_1a8 != 0) {
    for (; local_1a8 >> iVar20 == 0; iVar20 = iVar20 + -1) {
    }
  }
  iVar5 = 0x20;
  if (local_1a8 != 0) {
    iVar5 = 0x1f - iVar20;
  }
  uVar8 = local_1a8 - 1;
  iVar20 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar20 == 0; iVar20 = iVar20 + -1) {
    }
  }
  if (uVar8 == 0) {
    iVar20 = 0x20;
  }
  else {
    iVar20 = 0x1f - iVar20;
  }
  DAT_1464c9c24 = 0x3f800000;
  DAT_1464c9c64 = local_1a8;
  DAT_1464c9c18 = 0;
  DAT_146ab62e7 = 1;
  DAT_146ab62f8 = 0;
  DAT_1464c9c0c = (0x20U - iVar20 & ~((iVar5 << 0x1a) >> 0x1f)) + 1;
  DAT_1464c9c19 = 1;
  DAT_1464c9c10 = 1;
  DAT_1464c9c59 = 1;
  if (0xd < DAT_1464c9c0c) {
    DAT_1464c9c0c = 0xe;
  }
  DAT_1464c9c5a = 1;
  DAT_146ab62ec = DAT_146ab4990 != 0;
  _DAT_1464c9c68 = local_1a4;
  DAT_1464c9c5c = 0x1000;
  if (local_19c[0] < 0x1001) {
    DAT_1464c9c5c = local_19c[0];
  }
  _DAT_1464c9c28 = local_1a0;
  DAT_1464c9c1a = DAT_146ab3df0;
  DAT_146ab62df = 0 < DAT_146ab0544;
  DAT_146ab62e8 = DAT_146ab3df2;
  DAT_1464c9c48 = 3;
  if (DAT_1464c9c14 == 0) {
    DAT_1464c9c48 = DAT_146ab62cc;
  }
  DAT_1464c9c5b = 1;
  DAT_1464c9c21 = 1;
  DAT_1464c9c4c = 0xf;
  if (DAT_1464c9c14 == 1) {
    DAT_1464c9c4c = DAT_146ab62cc;
  }
  DAT_1464c9c20 = 1;
  DAT_146ab62ea = 0;
  DAT_146ab62eb = 0;
  DAT_1464c9c12 = 1;
  DAT_146ab62dd = 0;
  DAT_146ab62de = 0;
  DAT_146ab62e3 = 0;
  DAT_1464c9c6c = 1;
  DAT_146ab62f1 = 0;
  _DAT_1464c9c50 = 1;
  DAT_1464c9c54 = 6;
  DAT_146ab62fe = 1 < (int)DAT_1464c9c14 || DAT_146ab3dee != '\0';
  DAT_1464c9c60 = DAT_1464c9c5c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x38) <
       DAT_146ab3dd0) && (_Init_thread_header(&DAT_146ab3dd0), DAT_146ab3dd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))
                        (DAT_1468b1f88,L"r.OpenGL.DisableTextureStreamingSupport");
    uVar15 = uVar21;
    if (plVar14 != (longlong *)0x0) {
      uVar15 = (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    DAT_146ab3dc8 = uVar15;
    _Init_thread_footer(&DAT_146ab3dd0);
  }
  uVar15 = DAT_146ab3dc8;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    uVar13 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_141e72641;
  }
  uVar13 = uVar21;
LAB_141e72641:
  puVar17 = &DAT_1464ca1f8;
  puVar16 = &DAT_146ab364c;
  uVar12 = (ulonglong)DAT_146ab62fe;
  if (*(int *)(uVar13 + uVar15) != 0) {
    uVar12 = uVar21;
  }
  _DAT_1464c9c7c = 0x101;
  DAT_146ab62fe = (byte)uVar12;
  DAT_1464c9c83 = 1;
  do {
    uVar22 = local_1e0;
    uVar8 = local_1e0 >> 0x10;
    local_1e0 = uVar8 << 0x10;
    iVar20 = local_1e0;
    *(undefined8 *)((longlong)puVar16 + -0x1c) = 0;
    *(undefined8 *)((longlong)puVar16 + -0x14) = 0;
    local_1e0 = uVar8 << 0x10;
    iVar5 = local_1e0;
    *puVar16 = 0;
    puVar16[1] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar16 + -0xc) = 0;
    *(int *)((longlong)puVar16 + -4) = iVar20;
    local_1e0 = uVar8 << 0x10;
    iVar20 = local_1e0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x5c) = 0;
    puVar16[2] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0;
    *(int *)(puVar16 + 3) = iVar5;
    local_1e0 = uVar8 << 0x10;
    iVar5 = local_1e0;
    *(int *)((longlong)puVar16 + 0x34) = iVar20;
    local_1e0 = uVar8 << 0x10;
    iVar20 = local_1e0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[9] = 0;
    *(int *)(puVar16 + 10) = iVar5;
    local_1e0 = uVar8 << 0x10;
    iVar5 = local_1e0;
    *(undefined8 *)((longlong)puVar16 + 100) = 0;
    *(int *)((longlong)puVar16 + 0x6c) = iVar20;
    puVar16[0x10] = 0;
    *(undefined8 *)((longlong)puVar16 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x94) = 0;
    local_1e0 = uVar8 << 0x10;
    *(int *)(puVar16 + 0x11) = iVar5;
    *(undefined8 *)((longlong)puVar16 + 0x9c) = 0;
    *(uint *)((longlong)puVar16 + 0xa4) = local_1e0;
    puVar17[-0x28] = 0;
    *puVar17 = 0;
    puVar17[0x28] = 0;
    puVar17[0x50] = 0;
    puVar17[0x78] = 0;
    puVar17[0xa0] = 0;
    puVar17[200] = 0;
    local_1e0 = uVar8 << 0x10;
    iVar20 = local_1e0;
    local_1e0 = uVar8 << 0x10;
    puVar17[0xf0] = 0;
    puVar17[0x118] = 0;
    puVar17[0x140] = 0;
    puVar17[0x168] = 0;
    puVar17[400] = 0;
    puVar17[0x1b8] = 0;
    puVar17 = puVar17 + 0x208;
    puVar16[0x15] = 0;
    puVar16[0x16] = 0;
    puVar16[0x17] = 0;
    *(undefined8 *)((longlong)puVar16 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar16 + 0xcc) = 0;
    *(int *)(puVar16 + 0x18) = iVar20;
    *(undefined8 *)((longlong)puVar16 + 0xd4) = 0;
    *(uint *)((longlong)puVar16 + 0xdc) = local_1e0;
    local_1e0 = uVar8 << 0x10;
    iVar20 = local_1e0;
    puVar16[0x1c] = 0;
    puVar16[0x1d] = 0;
    local_1e0 = uVar8 << 0x10;
    iVar5 = local_1e0;
    *(undefined8 *)((longlong)puVar16 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x104) = 0;
    puVar16[0x1e] = 0;
    puVar16[0x23] = 0;
    puVar16[0x24] = 0;
    *(int *)(puVar16 + 0x1f) = iVar20;
    local_1e0 = uVar8 << 0x10;
    *(undefined8 *)((longlong)puVar16 + 0x10c) = 0;
    *(int *)((longlong)puVar16 + 0x114) = iVar5;
    puVar16[0x25] = 0;
    *(uint *)(puVar16 + 0x26) = local_1e0;
    *(undefined8 *)((longlong)puVar16 + 0x134) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x13c) = 0;
    local_1e0 = uVar8 << 0x10;
    *(undefined8 *)((longlong)puVar16 + 0x144) = 0;
    *(uint *)((longlong)puVar16 + 0x14c) = local_1e0;
    puVar16 = (undefined8 *)((longlong)puVar16 + 0x16c);
  } while ((longlong)puVar16 < 0x146ab3d68);
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3648 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3664 = local_1e0;
  DAT_146ab3630 = 0;
  DAT_146ab3638 = 0;
  DAT_146ab3640 = 0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3728 = local_1e0;
  DAT_146ab364c = 0x881400008814;
  DAT_146ab3654 = 0x881400008814;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3798 = local_1e0;
  DAT_146ab3710 = 0;
  DAT_146ab3718 = 0;
  local_1e0 = uVar8 << 0x10;
  DAT_146ab365c = 0x140600001908;
  DAT_146ab3720 = 0;
  DAT_146ab3780 = 0x81a5000081a5;
  DAT_146ab3788 = 0x81a5000081a5;
  DAT_146ab3790 = 0x140500001902;
  _DAT_146ab3860 = 0x81a5000081a5;
  uRam0000000146ab3868 = 0x81a5000081a5;
  _DAT_146ab3878 = local_1e0;
  _DAT_146ab3870 = 0x140500001902;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3844 = 0x805b0000805b;
  uRam0000000146ab384c = 0x805b0000805b;
  DAT_1464ca1d0 = 0;
  DAT_1464ca1f8 = 1;
  DAT_1464ca310 = 0;
  DAT_1464ca3b0 = 1;
  DAT_1464ca4f0 = 1;
  _DAT_146ab3854 = 0x140300001908;
  _DAT_146ab385c = local_1e0;
  DAT_1464ca4c8 = 1;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3904 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3a00 = local_1e0;
  _DAT_146ab38ec = 0;
  uRam0000000146ab38f4 = 0;
  _DAT_146ab38fc = 0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3a1c = local_1e0;
  _DAT_146ab39e8 = 0x8d7600008d76;
  uRam0000000146ab39f0 = 0x8d7600008d76;
  _DAT_146ab39f8 = 0x140300008d99;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3b88 = local_1e0;
  _DAT_146ab3a04 = 0x8d8800008d88;
  uRam0000000146ab3a0c = 0x8d8800008d88;
  _DAT_146ab3a14 = 0x140200008d99;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3b70 = 0x8d7000008d70;
  uRam0000000146ab3b78 = 0x8d7000008d70;
  _DAT_146ab3b80 = 0x140500008d99;
  _DAT_146ab3cf8 = 0x805b0000805b;
  uRam0000000146ab3d00 = 0x805b0000805b;
  _DAT_146ab3d10 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3d08 = 0x140300001908;
  _DAT_146ab3d14 = 0x805b0000805b;
  uRam0000000146ab3d1c = 0x805b0000805b;
  DAT_1464ca5b8 = 0;
  DAT_1464ca720 = 1;
  DAT_1464ca748 = 1;
  DAT_1464ca950 = 1;
  DAT_1464cab80 = 1;
  _DAT_146ab3d24 = 0x140200001908;
  _DAT_146ab3d2c = local_1e0;
  DAT_1464caba8 = 1;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3a38 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab36b8 = local_1e0;
  _DAT_146ab3a20 = 0;
  uRam0000000146ab3a28 = 0;
  _DAT_146ab3a30 = 0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab37b4 = local_1e0;
  DAT_146ab36a0 = 0x822a0000822a;
  DAT_146ab36a8 = 0x822a0000822a;
  DAT_146ab36b0 = 0x140300001903;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab37ec = local_1e0;
  DAT_146ab379c = 0x822e0000822e;
  DAT_146ab37a4 = 0x822e0000822e;
  DAT_146ab37ac = 0x140600001903;
  local_1e0 = uVar8 << 0x10;
  DAT_146ab37d4 = 0x822f0000822f;
  DAT_146ab37dc = 0x822f0000822f;
  DAT_146ab37e4 = 0x140b00008227;
  DAT_146ab37f0 = 0x822f0000822f;
  DAT_146ab37f8 = 0x822f0000822f;
  DAT_146ab3800 = 0x140b00008227;
  _DAT_146ab3808 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  DAT_146ab380c = 0x823000008230;
  uRam0000000146ab3814 = 0x823000008230;
  DAT_1464ca770 = 0;
  DAT_1464ca270 = 1;
  DAT_1464ca3d8 = 1;
  DAT_1464ca428 = 1;
  DAT_1464ca450 = 1;
  _DAT_146ab381c = 0x140600008227;
  _DAT_146ab3824 = local_1e0;
  DAT_1464ca478 = 1;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3840 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3894 = local_1e0;
  _DAT_146ab3828 = 0x805900008059;
  uRam0000000146ab3830 = 0x805900008059;
  _DAT_146ab3838 = 0x836800001908;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab38b0 = local_1e0;
  _DAT_146ab387c = 0x822d0000822d;
  uRam0000000146ab3884 = 0x822d0000822d;
  _DAT_146ab388c = 0x140b00001903;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3744 = local_1e0;
  _DAT_146ab3898 = 0x822d0000822d;
  uRam0000000146ab38a0 = 0x822d0000822d;
  _DAT_146ab38a8 = 0x140b00001903;
  local_1e0 = uVar8 << 0x10;
  DAT_146ab372c = 0x8c3a00008c3a;
  DAT_146ab3734 = 0x8c3a00008c3a;
  DAT_146ab373c = 0x8c3b00001907;
  _DAT_146ab3908 = 0x8c3a00008c3a;
  uRam0000000146ab3910 = 0x8c3a00008c3a;
  _DAT_146ab3918 = 0x8c3b00001907;
  _DAT_146ab3920 = local_1e0;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab38d0 = 0x8f95;
  uRam0000000146ab38d8 = 0x8f95;
  DAT_1464ca4a0 = 1;
  DAT_1464ca518 = 1;
  DAT_1464ca540 = 1;
  DAT_1464ca338 = 1;
  DAT_1464ca5e0 = 1;
  _DAT_146ab38e0 = 0x140000008227;
  _DAT_146ab38e8 = local_1e0;
  DAT_1464ca590 = 1;
  uVar1 = (ushort)(uVar22 >> 0x10);
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3aa8 = local_1e0;
  local_1e0 = CONCAT22(uVar1,1);
  _DAT_146ab38cc = local_1e0;
  _DAT_146ab3a90 = 0x822b0000822b;
  uRam0000000146ab3a98 = 0x822b0000822b;
  _DAT_146ab3aa0 = 0x140100008227;
  local_1e0 = CONCAT22(uVar1,1);
  _DAT_146ab3a8c = local_1e0;
  _DAT_146ab38b4 = 0x8dbd00008dbd;
  uRam0000000146ab38bc = 0x8dbd00008dbd;
  _DAT_146ab38c4 = 0x140100008227;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab393c = local_1e0;
  _DAT_146ab3a74 = 0x8dbb00008dbb;
  uRam0000000146ab3a7c = 0x8dbb00008dbb;
  _DAT_146ab3a84 = 0x140100001903;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab3924 = 0x822900008229;
  uRam0000000146ab392c = 0x822900008229;
  _DAT_146ab3934 = 0x140100001903;
  _DAT_146ab3940 = 0x823600008236;
  uRam0000000146ab3948 = 0x823600008236;
  _DAT_146ab3950 = 0x140500008d94;
  _DAT_146ab3958 = local_1e0;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab395c = 0x823500008235;
  uRam0000000146ab3964 = 0x823500008235;
  DAT_1464ca810 = 1;
  DAT_1464ca568 = 1;
  DAT_1464ca7e8 = 1;
  DAT_1464ca608 = 1;
  DAT_1464ca630 = 1;
  _DAT_146ab396c = 0x140400008d94;
  _DAT_146ab3974 = local_1e0;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab39b0 = 0x823400008234;
  uRam0000000146ab39b8 = 0x823400008234;
  _DAT_146ab39c0 = 0x140300008d94;
  _DAT_146ab39c8 = local_1e0;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab39cc = 0x823300008233;
  uRam0000000146ab39d4 = 0x823300008233;
  _DAT_146ab39dc = 0x140200008d94;
  _DAT_146ab39e4 = local_1e0;
  local_1e0 = (uint)uVar1 << 0x10;
  _DAT_146ab3c6c = 0x823200008232;
  uRam0000000146ab3c74 = 0x823200008232;
  _DAT_146ab3c84 = local_1e0;
  _DAT_146ab3c7c = 0x140100008d94;
  local_1f8 = (longlong *)0x881a0000881a;
  uStack_1f0 = 0x881a0000881a;
  local_1e8 = 0x140b00001908;
  local_1e0 = (uint)uVar1 << 0x10;
  DAT_146ab3748._0_4_ = 0x881a;
  DAT_146ab3748._4_4_ = 0x881a;
  DAT_146ab3750._0_4_ = 0x881a;
  DAT_146ab3750._4_4_ = 0x881a;
  DAT_1464ca658 = 1;
  DAT_1464ca6d0 = 1;
  DAT_1464ca6f8 = 1;
  DAT_1464caab8 = 1;
  DAT_146ab3758 = 0x140b00001908;
  _DAT_146ab3760 = local_1e0;
  DAT_1464ca360 = 1;
  cVar4 = FUN_141ed07f0(&local_1c8);
  if ((cVar4 == '\0') || (1 < (uint)local_1c8)) {
    local_1d4 = 0;
    (*DAT_146ab4060)(0x821b,&local_1d4);
    if ((local_1d4 != 3) && (local_1d4 == 4)) {
      local_1d8 = 0;
      (*DAT_146ab4060)(0x821c,&local_1d8);
    }
  }
  uVar22 = local_1e0;
  uVar8 = local_1e0 >> 0x10;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab369c = local_1e0;
  DAT_146ab3684 = 0x8c4100008229;
  DAT_146ab368c = 0x8c4100008229;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3680 = local_1e0;
  DAT_146ab3694 = 0x140100001903;
  DAT_146ab3668 = 0x8c4300008058;
  DAT_146ab3670 = 0x8c4300008058;
  DAT_146ab3678 = 0x8367000080e1;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3a54 = local_1e0;
  _DAT_146ab3a3c = 0x8c4300008058;
  uRam0000000146ab3a44 = 0x8c4300008058;
  _DAT_146ab3a4c = 0x836700001908;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3cd8 = local_1e0;
  _DAT_146ab3cc0 = 0x8d7c00008d7c;
  uRam0000000146ab3cc8 = 0x8d7c00008d7c;
  _DAT_146ab3cd0 = 0x140100008d99;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab3cdc = 0x805800008058;
  uRam0000000146ab3ce4 = 0x805800008058;
  _DAT_146ab3cec = 0x140100001908;
  DAT_146ab37b8 = 0x822c0000822c;
  DAT_146ab37c0 = 0x822c0000822c;
  DAT_1464ca248 = 1;
  DAT_1464ca220 = 1;
  DAT_1464ca798 = 1;
  DAT_1464cab30 = 1;
  _DAT_146ab3cf4 = local_1e0;
  DAT_1464cab58 = 1;
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab37d0 = local_1e0;
  DAT_146ab37c8 = 0x140300008227;
  uVar2 = (undefined2)(uVar22 >> 0x10);
  local_1e0 = uVar8 << 0x10;
  _DAT_146ab377c = local_1e0;
  local_1e0 = CONCAT22(uVar2,1);
  _DAT_146ab36d4 = local_1e0;
  DAT_146ab3764 = 0x88f0;
  DAT_146ab376c = 0x88f0;
  DAT_146ab3774 = 0x84fa000084f9;
  local_1e0 = CONCAT22(uVar2,1);
  DAT_146ab36bc = 0x8c4d000083f1;
  DAT_146ab36c4 = 0x8c4d000083f1;
  DAT_146ab36cc = 0x140100001908;
  DAT_146ab36d8 = 0x8c4e000083f2;
  DAT_146ab36e0 = 0x8c4e000083f2;
  local_1f8 = (longlong *)0x8c4f000083f3;
  uStack_1f0 = 0x8c4f000083f3;
  DAT_146ab36e8 = 0x140100001908;
  _DAT_146ab36f0 = local_1e0;
  local_1e0 = CONCAT22(uVar2,1);
  DAT_146ab36f4._0_4_ = 0x83f3;
  DAT_146ab36f4._4_4_ = 0x8c4f;
  DAT_146ab36fc._0_4_ = 0x83f3;
  DAT_146ab36fc._4_4_ = 0x8c4f;
  DAT_1464ca400 = 1;
  DAT_1464ca388 = 1;
  DAT_1464ca298 = 1;
  DAT_1464ca2c0 = 1;
  DAT_146ab3704 = 0x140100001908;
  _DAT_146ab370c = local_1e0;
  DAT_1464ca2e8 = 1;
  if (DAT_146ab3ded != '\0') {
    local_1e0 = CONCAT22(uVar2,1);
    _DAT_146ab3bc0 = local_1e0;
    local_1e0 = CONCAT22(uVar2,1);
    _DAT_146ab3bdc = local_1e0;
    _DAT_146ab3ba8 = 0x93d0000093b0;
    uRam0000000146ab3bb0 = 0x93d0000093b0;
    _DAT_146ab3bb8 = 0x140100001908;
    local_1e0 = CONCAT22(uVar2,1);
    _DAT_146ab3bf8 = local_1e0;
    _DAT_146ab3bc4 = 0x93d4000093b4;
    uRam0000000146ab3bcc = 0x93d4000093b4;
    _DAT_146ab3bd4 = 0x140100001908;
    local_1e0 = CONCAT22(uVar2,1);
    _DAT_146ab3be0 = 0x93d7000093b7;
    uRam0000000146ab3be8 = 0x93d7000093b7;
    _DAT_146ab3bf0 = 0x140100001908;
    _DAT_146ab3bfc = 0x93db000093bb;
    uRam0000000146ab3c04 = 0x93db000093bb;
    local_1f8 = (longlong *)0x93dd000093bd;
    uStack_1f0 = 0x93dd000093bd;
    _DAT_146ab3c0c = 0x140100001908;
    _DAT_146ab3c14 = local_1e0;
    local_1e0 = CONCAT22(uVar2,1);
    _DAT_146ab3c18 = 0x93bd;
    uRam0000000146ab3c1c = 0x93dd;
    uRam0000000146ab3c20 = 0x93bd;
    uRam0000000146ab3c24 = 0x93dd;
    DAT_1464ca9a0 = 1;
    DAT_1464ca9c8 = 1;
    DAT_1464ca9f0 = 1;
    DAT_1464caa18 = 1;
    _DAT_146ab3c28 = 0x140100001908;
    _DAT_146ab3c30 = local_1e0;
    DAT_1464caa40 = 1;
  }
  local_1e0 = CONCAT22(uVar2,1);
  local_1e8 = 0x140100001908;
  DAT_1464ca37c = 4;
  DAT_1464ca32c = 4;
  DAT_1464ca354 = 8;
  DAT_146ab62e9 = 1;
  if (local_180[2] != 0) {
    FMemory::Free();
  }
  if (local_180[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e73d40 InitializeResources body=265 status=ok
// SIG undefined InitializeResources(void)

void FOpenGLCommonState::InitializeResources(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  uVar4 = SUB168(ZEXT816(0x28) * auVar1,0);
  uVar10 = (ulonglong)param_3;
  if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  lVar5 = operator_new(uVar4);
  lVar6 = 0;
  if ((lVar5 != 0) && (lVar6 = lVar5, uVar11 != 0)) {
    puVar8 = (undefined8 *)(lVar5 + 0x10);
    uVar9 = uVar11;
    do {
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar8 + 0xc) = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8 = puVar8 + 5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *(longlong *)(param_1 + 8) = lVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar11;
  uVar4 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  _Dst = (void *)operator_new(uVar4);
  *(void **)(param_1 + 0x10) = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,uVar11 * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  uVar4 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  puVar7 = (undefined8 *)operator_new(uVar4);
  puVar8 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined8 **)(param_1 + 0x18) = puVar7;
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 141e73e50 InitializeResources body=352 status=ok
// SIG undefined InitializeResources(void)

void FOpenGLContextState::InitializeResources(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)param_2;
  uVar11 = (ulonglong)param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  uVar5 = SUB168(ZEXT816(0x28) * auVar2,0);
  if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (undefined8 *)operator_new(uVar5);
  iVar9 = 0;
  puVar7 = (undefined8 *)0x0;
  if ((puVar6 != (undefined8 *)0x0) && (puVar7 = puVar6, uVar10 != 0)) {
    puVar6 = puVar6 + 2;
    uVar8 = uVar10;
    do {
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6 = puVar6 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  uVar5 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  _Dst = (void *)operator_new(uVar5);
  *(void **)(param_1 + 0x10) = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,uVar10 * 8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  uVar5 = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  puVar6 = (undefined8 *)operator_new(uVar5);
  puVar7 = (undefined8 *)0x0;
  if ((puVar6 != (undefined8 *)0x0) && (puVar7 = puVar6, param_3 != 0)) {
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x3e0);
  *(undefined8 **)(param_1 + 0x18) = puVar7;
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar9 = *(int *)(param_1 + 1000);
  }
  *(int *)(param_1 + 1000) = iVar9 + param_2;
  if (*(int *)(param_1 + 0x3ec) < iVar9 + param_2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar9 * 8),0,uVar10 * 8);
  return;
}



// FUNCTION 141e73fb0 LoadData body=145 status=ok
// SIG undefined LoadData(void)

void TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::LoadData
               (undefined8 param_1,int param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_1464c97d4;
  if (DAT_1464c97d4 == 0) {
    (*DAT_146ab4318)(0x8893,param_2,param_3);
  }
  else if (param_3 != 0) {
    do {
      uVar2 = param_3;
      if (uVar1 <= param_3) {
        uVar2 = uVar1;
      }
      (*DAT_146ab4318)(0x8893,param_2,uVar2,param_4);
      param_2 = param_2 + uVar2;
      param_4 = param_4 + (ulonglong)uVar2;
      param_3 = param_3 - uVar2;
    } while (param_3 != 0);
    return;
  }
  return;
}



// FUNCTION 141e74050 LoadData body=145 status=ok
// SIG undefined LoadData(void)

void TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::LoadData
               (undefined8 param_1,int param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_1464c97d4;
  if (DAT_1464c97d4 == 0) {
    (*DAT_146ab4318)(0x8892,param_2,param_3);
  }
  else if (param_3 != 0) {
    do {
      uVar2 = param_3;
      if (uVar1 <= param_3) {
        uVar2 = uVar1;
      }
      (*DAT_146ab4318)(0x8892,param_2,uVar2,param_4);
      param_2 = param_2 + uVar2;
      param_4 = param_4 + (ulonglong)uVar2;
      param_3 = param_3 - uVar2;
    } while (param_3 != 0);
    return;
  }
  return;
}



// FUNCTION 141e740f0 Lock body=590 status=ok
// SIG undefined Lock(void)

void TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
     ::Lock(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  
  uVar9 = param_2 + 0xffU & 0xffffff00;
  uVar4 = uVar9 * 0x10 + 0xfffff & 0xfff00000;
  uVar7 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) < uVar4) {
    *(uint *)(param_1 + 0x24) = uVar4;
    uVar7 = uVar4;
  }
  iVar11 = *(int *)(param_1 + 0x1c);
  bVar14 = false;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
  uVar13 = 1;
  if (*(uint *)(*(longlong *)(param_1 + 8 + uVar8 * 8) + 0x1c) < iVar11 + uVar9) {
    uVar4 = *(uint *)(param_1 + 0x18) + 1;
    uVar6 = 0;
    iVar11 = 0;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar8 = (ulonglong)uVar4;
    if (uVar4 == 2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar8 = uVar6;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    puVar2 = *(undefined8 **)(param_1 + 8 + uVar8 * 8);
    if (*(uint *)((longlong)puVar2 + 0x1c) < uVar7) {
      *(undefined8 *)(param_1 + 8 + uVar8 * 8) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar14 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar14) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar14) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar2);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      lVar5 = operator_new(0x58);
      if (lVar5 != 0) {
        uVar6 = FUN_141e68fd0(lVar5,2,*(undefined4 *)(param_1 + 0x24),4,0,0,0,0);
      }
      TRefCountPtr<FRHITexture>::operator=
                (param_1 + ((ulonglong)*(uint *)(param_1 + 0x18) + 1) * 8,uVar6);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
      iVar11 = *(int *)(param_1 + 0x1c);
    }
    bVar14 = true;
  }
  *(int *)(param_1 + 0x20) = iVar11;
  *(uint *)(param_1 + 0x1c) = iVar11 + uVar9;
  lVar5 = *(longlong *)(param_1 + 8 + uVar8 * 8);
  FUN_141e6d8b0(lVar5);
  uVar7 = *(uint *)(lVar5 + 0x38);
  *(uint *)(lVar5 + 0x38) = uVar7 & 0xfffffffd | 1;
  if ((bVar14) || (bVar10 = 0, uVar9 == *(uint *)(lVar5 + 0x50))) {
    bVar10 = 1;
  }
  bVar14 = DAT_146ab053c == 0;
  if (((bVar10 != 0) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
    if ((uVar7 & 4) == 0) {
      uVar12 = 0x88e4;
      if ((*(byte *)(lVar5 + 0x20) & 6) != 0) {
        uVar12 = 0x88e8;
      }
    }
    else {
      uVar12 = 0x88e0;
    }
    (*DAT_146ab4310)(0x8893,*(undefined4 *)(lVar5 + 0x50),0,uVar12);
  }
  if (bVar14) {
    *(int *)(lVar5 + 0x40) = iVar11;
    *(uint *)(lVar5 + 0x3c) = uVar9;
    uVar13 = FMemory::Malloc(uVar9,0);
    *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 8;
  }
  else {
    uVar7 = bVar10 ^ 1;
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        uVar13 = 0x2a;
      }
      else if (uVar7 == 1) {
        uVar13 = 0x22;
      }
      else if (uVar7 == 2) {
        uVar13 = 0xc2;
      }
      else {
        uVar13 = 3;
      }
    }
    uVar13 = (*DAT_146ab4778)(0x8893,iVar11,uVar9,uVar13);
    *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) & 0xfffffff7;
    *(int *)(lVar5 + 0x40) = iVar11;
    *(uint *)(lVar5 + 0x3c) = uVar9;
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar13;
  return;
}



// FUNCTION 141e74340 Lock body=588 status=ok
// SIG undefined Lock(void)

void TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>,0>
     ::Lock(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  
  uVar9 = param_2 + 0xffU & 0xffffff00;
  uVar4 = uVar9 * 0x10 + 0xfffff & 0xfff00000;
  uVar7 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) < uVar4) {
    *(uint *)(param_1 + 0x24) = uVar4;
    uVar7 = uVar4;
  }
  iVar11 = *(int *)(param_1 + 0x1c);
  bVar14 = false;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
  uVar13 = 1;
  if (*(uint *)(*(longlong *)(param_1 + 8 + uVar8 * 8) + 0x18) < iVar11 + uVar9) {
    uVar4 = *(uint *)(param_1 + 0x18) + 1;
    uVar6 = 0;
    iVar11 = 0;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar8 = (ulonglong)uVar4;
    if (uVar4 == 2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar8 = uVar6;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    puVar2 = *(undefined8 **)(param_1 + 8 + uVar8 * 8);
    if (*(uint *)(puVar2 + 3) < uVar7) {
      *(undefined8 *)(param_1 + 8 + uVar8 * 8) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar14 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar14) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar14) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar2);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      lVar5 = operator_new(0x58);
      if (lVar5 != 0) {
        uVar6 = FUN_141e69500(lVar5,0,*(undefined4 *)(param_1 + 0x24),4,0,0,0,0);
      }
      TRefCountPtr<FRHITexture>::operator=
                (param_1 + ((ulonglong)*(uint *)(param_1 + 0x18) + 1) * 8,uVar6);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
      iVar11 = *(int *)(param_1 + 0x1c);
    }
    bVar14 = true;
  }
  *(int *)(param_1 + 0x20) = iVar11;
  *(uint *)(param_1 + 0x1c) = iVar11 + uVar9;
  lVar5 = *(longlong *)(param_1 + 8 + uVar8 * 8);
  FUN_141e6d990(lVar5);
  uVar7 = *(uint *)(lVar5 + 0x38);
  *(uint *)(lVar5 + 0x38) = uVar7 & 0xfffffffd | 1;
  if ((bVar14) || (bVar10 = 0, uVar9 == *(uint *)(lVar5 + 0x50))) {
    bVar10 = 1;
  }
  bVar14 = DAT_146ab053c == 0;
  if (((bVar10 != 0) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
    if ((uVar7 & 4) == 0) {
      uVar12 = 0x88e4;
      if ((*(byte *)(lVar5 + 0x1c) & 6) != 0) {
        uVar12 = 0x88e8;
      }
    }
    else {
      uVar12 = 0x88e0;
    }
    (*DAT_146ab4310)(0x8892,*(undefined4 *)(lVar5 + 0x50),0,uVar12);
  }
  if (bVar14) {
    *(int *)(lVar5 + 0x40) = iVar11;
    *(uint *)(lVar5 + 0x3c) = uVar9;
    uVar13 = FMemory::Malloc(uVar9,0);
    *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 8;
  }
  else {
    uVar7 = bVar10 ^ 1;
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        uVar13 = 0x2a;
      }
      else if (uVar7 == 1) {
        uVar13 = 0x22;
      }
      else if (uVar7 == 2) {
        uVar13 = 0xc2;
      }
      else {
        uVar13 = 3;
      }
    }
    uVar13 = (*DAT_146ab4778)(0x8892,iVar11,uVar9,uVar13);
    *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) & 0xfffffff7;
    *(int *)(lVar5 + 0x40) = iVar11;
    *(uint *)(lVar5 + 0x3c) = uVar9;
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar13;
  return;
}



// FUNCTION 141e745c0 FUN_141e745c0 body=143 status=ok
// SIG undefined FUN_141e745c0(void)

void FUN_141e745c0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  
  lVar2 = DAT_146ab3d80;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146ab3d80 + 0x15c40));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x15c40));
  }
  iVar1 = *(int *)(lVar2 + 0x15c38);
  *(int *)(lVar2 + 0x15c38) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x15c3c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x15c30,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x15c30) + (longlong)iVar1 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000141e74648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x15c40));
  return;
}



// FUNCTION 141e74650 FUN_141e74650 body=232 status=ok
// SIG undefined FUN_141e74650(void)

void FUN_141e74650(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = DAT_146ab3d80;
  if (DAT_146ab3d80 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146ab3d80 + 0x15c40));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x15c40));
    }
    plVar1 = *(longlong **)(lVar2 + 0x15c30);
    iVar7 = *(int *)(lVar2 + 0x15c38);
    for (plVar5 = plVar1; plVar5 != plVar1 + iVar7; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        if (iVar4 != -1) {
          iVar6 = (iVar7 - iVar4) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar1 + iVar4,plVar1 + (iVar7 - iVar6),(longlong)iVar6 << 3);
            iVar7 = *(int *)(lVar2 + 0x15c38);
          }
          *(int *)(lVar2 + 0x15c38) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar2 + 0x15c30);
        }
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x15c40));
  }
  return;
}



// FUNCTION 141e74740 FUN_141e74740 body=134 status=ok
// SIG undefined FUN_141e74740(void)

void FUN_141e74740(void)

{
  longlong lVar1;
  BOOL BVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = DAT_146ab3d80;
  if (DAT_146ab3d80 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146ab3d80 + 0x15c40));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x15c40));
    }
    uVar4 = 0;
    *(undefined4 *)(lVar1 + 0x36c) = 0;
    uVar5 = uVar4;
    if (0 < *(int *)(lVar1 + 0x15c38)) {
      do {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar1 + 0x15c30) + -8 + uVar5 + 8) + 0x3d) = 1;
        uVar5 = uVar5 + 8;
      } while ((int)uVar3 < *(int *)(lVar1 + 0x15c38));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x15c40));
  }
  return;
}



// FUNCTION 141e747d0 FUN_141e747d0 body=14 status=ok
// SIG undefined FUN_141e747d0(void)

void FUN_141e747d0(undefined4 param_1)

{
  FUN_141e747e0(DAT_146ab3d80,param_1);
  return;
}



// FUNCTION 141e747e0 FUN_141e747e0 body=650 status=ok
// SIG undefined FUN_141e747e0(void)

void FUN_141e747e0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x14ec0) == param_2) {
    *(undefined4 *)(param_1 + 0x14ec0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15758) == param_2) {
    *(undefined4 *)(param_1 + 0x15758) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14f24) == param_2) {
    *(undefined8 *)(param_1 + 0x14f18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x157bc) == param_2) {
    *(undefined8 *)(param_1 + 0x157b0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14f4c) == param_2) {
    *(undefined8 *)(param_1 + 0x14f40) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x157e4) == param_2) {
    *(undefined8 *)(param_1 + 0x157d8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14f74) == param_2) {
    *(undefined8 *)(param_1 + 0x14f68) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1580c) == param_2) {
    *(undefined8 *)(param_1 + 0x15800) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14f9c) == param_2) {
    *(undefined8 *)(param_1 + 0x14f90) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15834) == param_2) {
    *(undefined8 *)(param_1 + 0x15828) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14fc4) == param_2) {
    *(undefined8 *)(param_1 + 0x14fb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1585c) == param_2) {
    *(undefined8 *)(param_1 + 0x15850) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14fec) == param_2) {
    *(undefined8 *)(param_1 + 0x14fe0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15884) == param_2) {
    *(undefined8 *)(param_1 + 0x15878) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15014) == param_2) {
    *(undefined8 *)(param_1 + 0x15008) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x158ac) == param_2) {
    *(undefined8 *)(param_1 + 0x158a0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1503c) == param_2) {
    *(undefined8 *)(param_1 + 0x15030) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x158d4) == param_2) {
    *(undefined8 *)(param_1 + 0x158c8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15064) == param_2) {
    *(undefined8 *)(param_1 + 0x15058) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x158fc) == param_2) {
    *(undefined8 *)(param_1 + 0x158f0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1508c) == param_2) {
    *(undefined8 *)(param_1 + 0x15080) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15924) == param_2) {
    *(undefined8 *)(param_1 + 0x15918) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x150b4) == param_2) {
    *(undefined8 *)(param_1 + 0x150a8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1594c) == param_2) {
    *(undefined8 *)(param_1 + 0x15940) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x150dc) == param_2) {
    *(undefined8 *)(param_1 + 0x150d0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15974) == param_2) {
    *(undefined8 *)(param_1 + 0x15968) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15104) == param_2) {
    *(undefined8 *)(param_1 + 0x150f8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1599c) == param_2) {
    *(undefined8 *)(param_1 + 0x15990) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1512c) == param_2) {
    *(undefined8 *)(param_1 + 0x15120) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x159c4) == param_2) {
    *(undefined8 *)(param_1 + 0x159b8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15154) == param_2) {
    *(undefined8 *)(param_1 + 0x15148) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x159ec) == param_2) {
    *(undefined8 *)(param_1 + 0x159e0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1517c) == param_2) {
    *(undefined8 *)(param_1 + 0x15170) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x15a14) == param_2) {
    *(undefined8 *)(param_1 + 0x15a08) = 0xffffffff;
  }
  uVar1 = 0;
  plVar2 = (longlong *)(param_1 + 0x15a30);
  do {
    if ((plVar2[-0x113] != 0) && (*(int *)(plVar2[-0x113] + 0x28) == param_2)) {
      (*DAT_146ab4920)(uVar1,0,0,0);
      plVar2[-0x113] = 0;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x28) == param_2)) {
      (*DAT_146ab4920)(uVar1);
      *plVar2 = 0;
    }
    uVar1 = uVar1 + 1;
    plVar2 = plVar2 + 3;
  } while (uVar1 < 0x10);
  return;
}



// FUNCTION 141e74a80 FUN_141e74a80 body=1672 status=ok
// SIG undefined FUN_141e74a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e74a80(undefined8 param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  uint local_1a4;
  int local_1a0 [2];
  wchar_t *local_198;
  undefined8 local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178 [2];
  wchar_t *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar9 = 0;
  iVar4 = 0;
  uVar7 = (*DAT_146ab4070)(0x1f02);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,uVar7);
  local_188 = 0;
  local_180 = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (local_50[lVar12] != 0);
    uVar11 = (int)lVar12 + 1;
    local_180 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    FGenericPlatformString::Memcpy(local_188,local_50,(longlong)(int)uVar11 * 2);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_168 = (wchar_t *)0x0;
  local_160 = 0;
  local_198 = (wchar_t *)0x0;
  local_190 = 0;
  local_178[0] = 0;
  local_178[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
  lVar12 = local_178[0];
  FGenericPlatformString::Memcpy(local_178[0],&DAT_144eb3a5c,4);
  local_1d0 = 0;
  local_1d8 = 1;
  cVar2 = FUN_1404e14f0(&local_188,local_178,&local_168,&local_198);
  if (lVar12 != 0) {
    FMemory::Free(lVar12);
  }
  pwVar1 = local_168;
  iVar3 = iVar4;
  if (cVar2 != '\0') {
    pwVar10 = L"";
    if ((int)local_160 != 0) {
      pwVar10 = local_168;
    }
    iVar3 = _wtoi(pwVar10);
    pwVar10 = L"";
    if ((int)local_190 != 0) {
      pwVar10 = local_198;
    }
    iVar4 = _wtoi(pwVar10);
  }
  local_1d8 = 0xffffffff;
  iVar5 = FUN_141592950(param_1,L"GL_ARB_tessellation_shader",1);
  if ((iVar5 == -1) && (iVar3 < 4)) {
    DAT_146ab053b = '\0';
  }
  else {
    DAT_146ab053b = '\x01';
  }
  DAT_1464c9810 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8b4a,&DAT_1464c9810);
  DAT_1464c9814 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8b49,&DAT_1464c9814);
  DAT_1464c9818 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8ddf,&DAT_1464c9818);
  DAT_1464c9804 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8c29,&DAT_1464c9804);
  DAT_1464c9824 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8dfc,&DAT_1464c9824);
  DAT_1464c981c = 0;
  if (DAT_146ab053b == '\0') {
    DAT_1464c9820 = 0;
    DAT_1464c9808 = 0;
    DAT_1464c980c = 0;
  }
  else {
    DAT_146ab0539 = 1;
    (*DAT_146ab4060)(0x8e7f,&DAT_1464c981c);
    DAT_1464c9820 = 0;
    DAT_146ab0539 = 1;
    (*DAT_146ab4060)(0x8e80,&DAT_1464c9820);
    DAT_1464c9808 = 0;
    DAT_146ab0539 = 1;
    (*DAT_146ab4060)(0x8e81,&DAT_1464c9808);
    DAT_1464c980c = 0;
    DAT_146ab0539 = 1;
    (*DAT_146ab4060)(0x8e82,&DAT_1464c980c);
  }
  DAT_146ab0539 = 0;
  (*DAT_146ab42d0)(0x8e28,0x8864,&DAT_146ab0544);
  FUN_141e9f570(param_1);
  (*DAT_146ab4718)(1,&local_1a8);
  (*DAT_146ab4708)(0x8ca9,local_1a8);
  (*DAT_146ab4038)(1,&local_1a4);
  (*DAT_146ab3f98)(0x806f,local_1a4);
  local_1b0 = 0;
  local_1b8 = 0x1401;
  local_1c0 = 0x1908;
  local_1c8 = 0;
  local_1d0 = 0x100;
  local_1d8 = 0x100;
  (*DAT_146ab4210)(0x806f,0,0x8058,0x100);
  (*DAT_146ab4740)(0x8ca9,0x8ce0,local_1a4,0);
  iVar5 = (*DAT_146ab4720)(0x8ca9);
  DAT_146ab3df0 = iVar5 == 0x8cd5;
  (*DAT_146ab3fd8)(1,&local_1a4);
  (*DAT_146ab4710)(1,&local_1a8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3d90) && (_Init_thread_header(&DAT_146ab3d90), DAT_146ab3d90 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UseSeparateShaderObjects");
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146ab3d88 = lVar9;
    _Init_thread_footer(&DAT_146ab3d90);
  }
  if ((DAT_146ab3d88 == 0) || (*(int *)(DAT_146ab3d88 + 4) != 1)) {
switchD_141e74f5f_caseD_8:
    DAT_146ab3550 = 0;
  }
  else {
    cVar2 = FUN_141ed07f0(local_1a0);
    if (cVar2 == '\0') {
LAB_141e74eee:
      local_1a8 = 0;
      (*DAT_146ab4060)(0x821b,&local_1a8);
      if ((local_1a8 == 3) || (local_1a8 != 4)) {
        uVar6 = 1;
      }
      else {
        local_1a4 = 0;
        (*DAT_146ab4060)(0x821c,&local_1a4);
        uVar6 = 1;
        if (2 < local_1a4) {
          uVar6 = 6;
        }
      }
    }
    else if (local_1a0[0] == 0) {
      uVar6 = 3;
    }
    else {
      if (local_1a0[0] != 1) goto LAB_141e74eee;
      uVar6 = 0xf;
      if (DAT_146ab3551 != '\0') {
        uVar6 = 0x18;
      }
    }
    switch(uVar6) {
    default:
      local_1d8 = 0xffffffff;
      iVar5 = FUN_141592950(param_1,L"GL_ARB_separate_shader_objects",1);
      if ((iVar5 == -1) && ((iVar3 != 4 || (iVar4 < 4)))) goto switchD_141e74f5f_caseD_8;
      DAT_146ab3550 = 1;
      break;
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0x18:
      goto switchD_141e74f5f_caseD_8;
    }
  }
  cVar2 = FUN_141ed07f0(local_1a0);
  if (cVar2 == '\0') {
    local_1a8 = 0;
    (*DAT_146ab4060)(0x821b,&local_1a8);
    if (((local_1a8 != 2) && (local_1a8 != 3)) && (local_1a8 == 4)) {
      local_1a4 = 0;
      (*DAT_146ab4060)(0x821c,&local_1a4);
      local_1a0[0] = (2 < local_1a4) + 2;
      goto LAB_141e74ff5;
    }
  }
  else {
LAB_141e74ff5:
    if (local_1a0[0] == 1) {
      local_1d8 = 0xffffffff;
      iVar4 = FUN_141592950(param_1,L"GL_ARB_ES3_1_compatibility",1,0);
      if (iVar4 != -1) {
        uVar7 = FCommandLine::Get();
        cVar2 = FParse::Param(uVar7,L"GLESCompat");
        if (cVar2 != '\0') {
          DAT_146ab3551 = 1;
          goto LAB_141e7503b;
        }
      }
    }
  }
  DAT_146ab3551 = 0;
LAB_141e7503b:
  if (local_198 != (wchar_t *)0x0) {
    FMemory::Free(local_198);
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e75130 ProcessExtensions body=828 status=ok
// SIG undefined ProcessExtensions(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOpenGL4::ProcessExtensions(undefined8 param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188 [2];
  wchar_t *local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar4 = 0;
  uVar7 = (*DAT_146ab4070)(0x1f02);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,uVar7);
  local_198 = 0;
  local_190 = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (local_50[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_190 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    }
    FGenericPlatformString::Memcpy(local_198,local_50,(longlong)(int)uVar9 * 2);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_178 = (wchar_t *)0x0;
  local_170 = 0;
  local_168 = (wchar_t *)0x0;
  local_160 = 0;
  local_188[0] = 0;
  local_188[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
  lVar10 = local_188[0];
  FGenericPlatformString::Memcpy(local_188[0],&DAT_144eb3b8c,4);
  local_1a0 = 0;
  local_1a8 = 1;
  cVar3 = FUN_1404e14f0(&local_198,local_188,&local_178,&local_168);
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  pwVar2 = local_168;
  pwVar1 = local_178;
  iVar5 = iVar4;
  if (cVar3 != '\0') {
    pwVar8 = L"";
    if ((int)local_170 != 0) {
      pwVar8 = local_178;
    }
    iVar4 = _wtoi(pwVar8);
    pwVar8 = L"";
    if ((int)local_160 != 0) {
      pwVar8 = pwVar2;
    }
    iVar5 = _wtoi(pwVar8);
  }
  local_1a8 = 0xffffffff;
  iVar6 = FUN_141592950(param_1,L"GL_NVX_gpu_memory_info",1);
  DAT_146ab0538 = iVar6 != -1;
  local_1a8 = 0xffffffff;
  iVar6 = FUN_141592950(param_1,L"GL_ARB_compute_shader",1);
  if (iVar6 == -1) {
    if (iVar4 != 4) {
      if (iVar4 < 5) goto LAB_141e7544b;
      goto LAB_141e7530b;
    }
    if (2 < iVar5) goto LAB_141e7530b;
LAB_141e7544b:
    DAT_1464c97cc = '\0';
  }
  else {
LAB_141e7530b:
    DAT_1464c97cc = '\x01';
  }
  local_1a8 = 0xffffffff;
  iVar6 = FUN_141592950(param_1,L"GL_ARB_vertex_attrib_binding",1);
  if (iVar6 == -1) {
    if (iVar4 != 4) {
      if (iVar4 < 5) goto LAB_141e75458;
      goto LAB_141e75349;
    }
    if (2 < iVar5) goto LAB_141e75349;
LAB_141e75458:
    DAT_1464c97cd = 0;
  }
  else {
LAB_141e75349:
    DAT_1464c97cd = 1;
  }
  local_1a8 = 0xffffffff;
  iVar6 = FUN_141592950(param_1,L"GL_ARB_texture_view",1);
  if (iVar6 == -1) {
    if (iVar4 == 4) {
      if (iVar5 < 3) {
LAB_141e75465:
        DAT_1464c97ce = 0;
        goto LAB_141e75389;
      }
    }
    else if (iVar4 < 5) goto LAB_141e75465;
  }
  DAT_1464c97ce = 1;
LAB_141e75389:
  if (DAT_1464c97cc != '\0') {
    DAT_146ab0539 = 1;
    DAT_1464c97c4 = 0;
    (*DAT_146ab4060)(0x91bc,&DAT_1464c97c4);
    DAT_1464c97c8 = 0;
    DAT_146ab0539 = 1;
    (*DAT_146ab4060)(0x8263,&DAT_1464c97c8);
    DAT_146ab0539 = 0;
  }
  FUN_141e74a80(param_1);
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e75470 FUN_141e75470 body=116 status=ok
// SIG undefined FUN_141e75470(void)

void FUN_141e75470(longlong param_1)

{
  BOOL BVar1;
  
  PlatformRenderingContextSetup(*(undefined8 *)(param_1 + 0x15c28));
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0x15c28));
  *(undefined1 *)(param_1 + 0x921) = 1;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  }
  if (*(longlong **)(param_1 + 0x15e30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x15e30) + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141e754dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  return;
}



// FUNCTION 141e754f0 RHIBeginDrawIndexedPrimitiveUP body=223 status=ok
// SIG undefined RHIBeginDrawIndexedPrimitiveUP(void)

void FOpenGLDynamicRHI::RHIBeginDrawIndexedPrimitiveUP
               (longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 *param_6,undefined4 param_7,int param_8,int param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  
  uVar1 = TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>,0>
          ::Lock(param_1 + 0x880,param_4 * param_5);
  *param_6 = uVar1;
  uVar1 = TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>,2>
          ::Lock(param_1 + 0x8a8,param_8 * param_9);
  *param_10 = uVar1;
  *(undefined4 *)(param_1 + 0x3fc) = param_2;
  *(undefined4 *)(param_1 + 0x400) = param_3;
  *(int *)(param_1 + 0x408) = param_9;
  *(int *)(param_1 + 0x3f8) = param_4;
  *(undefined4 *)(param_1 + 0x404) = param_7;
  *(undefined8 *)(param_1 + 0x3e0) =
       *(undefined8 *)(param_1 + 0x888 + (ulonglong)*(uint *)(param_1 + 0x898) * 8);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x8a0);
  *(int *)(param_1 + 1000) = param_5;
  return;
}



// FUNCTION 141e755d0 RHIBeginDrawPrimitiveUP body=156 status=ok
// SIG undefined RHIBeginDrawPrimitiveUP(void)

void FOpenGLDynamicRHI::RHIBeginDrawPrimitiveUP
               (longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  
  uVar1 = TOpenGLStreamedBufferArray<TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>,0>
          ::Lock(param_1 + 0x880,param_4 * param_5);
  *param_6 = uVar1;
  *(undefined4 *)(param_1 + 0x3fc) = param_2;
  *(int *)(param_1 + 0x3f8) = param_4;
  *(undefined4 *)(param_1 + 0x400) = param_3;
  *(undefined8 *)(param_1 + 0x3e0) =
       *(undefined8 *)(param_1 + 0x888 + (ulonglong)*(uint *)(param_1 + 0x898) * 8);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x8a0);
  *(int *)(param_1 + 1000) = param_5;
  return;
}



// FUNCTION 141e75670 FUN_141e75670 body=35 status=ok
// SIG undefined FUN_141e75670(void)

void FUN_141e75670(longlong param_1)

{
  RHIPrivateBeginFrame();
  FUN_141e927b0(param_1 + 0x15c38,param_1 + -0x30);
  return;
}



// FUNCTION 141e756a0 FUN_141e756a0 body=303 status=ok
// SIG undefined FUN_141e756a0(void)

void FUN_141e756a0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  if (*(int *)(param_1 + 0x170) == -1) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3db0) && (_Init_thread_header(&DAT_146ab3db0), DAT_146ab3db0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"rhi.ResourceTableCaching");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146ab3da8 = lVar5;
    _Init_thread_footer(&DAT_146ab3db0);
  }
  lVar5 = DAT_146ab3da8;
  if (DAT_146ab3da8 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    if (*(int *)(lVar6 + lVar5) != 1) goto LAB_141e75741;
  }
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x170);
LAB_141e75741:
  uVar3 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
  *(undefined4 *)(param_1 + 0x15ba0) = uVar3;
  return;
}



// FUNCTION 141e757d0 FUN_141e757d0 body=693 status=ok
// SIG undefined FUN_141e757d0(void)

void FUN_141e757d0(longlong param_1,char param_2,int param_3,longlong param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  byte bVar16;
  
  uVar14 = 0;
  if (param_2 != '\0') {
    plVar11 = (longlong *)(param_1 + 0x378);
    uVar12 = uVar14;
    do {
      if (*plVar11 == 0) break;
      uVar12 = uVar12 + 1;
      plVar11 = plVar11 + 1;
    } while ((longlong)uVar12 < 8);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x338);
  uVar5 = *(undefined4 *)(param_1 + 0x33c);
  uVar6 = *(undefined4 *)(param_1 + 0x340);
  uVar7 = *(undefined4 *)(param_1 + 0x344);
  cVar3 = *(char *)(param_1 + 0x334);
  bVar9 = false;
  if ((*(char *)(param_1 + 0x15c70) != '\0') && (*(longlong *)(param_1 + 0x15ca0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15ca0) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(param_1 + 0x15bd0) == 1) {
    uVar12 = 0x15338;
  }
  else {
    iVar10 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15c28));
    uVar13 = 0x14aa0;
    if (iVar10 == 1) {
      uVar13 = 0x15338;
    }
    uVar12 = (ulonglong)uVar13;
  }
  lVar2 = uVar12 + param_1;
  FUN_141e92c40(param_1,lVar2);
  if ((((cVar3 != '\0') || (*(int *)(param_1 + 0x348) != 0)) || (*(int *)(param_1 + 0x34c) != 0)) ||
     ((*(int *)(param_1 + 0x350) != *(int *)(param_1 + 0x364) ||
      (*(int *)(param_1 + 0x354) != *(int *)(param_1 + 0x368))))) {
    *(undefined1 *)(param_1 + 0x334) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    bVar9 = true;
  }
  FUN_141e7c370(param_1,lVar2);
  bVar8 = false;
  if ((param_2 != '\0') && (bVar8 = true, 0 < param_3)) {
    puVar15 = (uint *)(lVar2 + 0x88);
    uVar12 = uVar14;
    do {
      if (((byte)*puVar15 & 0xf) != 0xf) {
        (*DAT_146ab41c8)(uVar12,1,1,1,1);
        *puVar15 = *puVar15 | 0xf;
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
      puVar15 = puVar15 + 9;
    } while ((int)uVar13 < param_3);
  }
  bVar16 = 0;
  if ((((char)param_5 != '\0') && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     (bVar16 = 1, *(char *)(lVar2 + 0x31) == '\0')) {
    (*DAT_146ab3fe8)(1);
    *(undefined1 *)(lVar2 + 0x31) = 1;
  }
  if ((((char)param_7 != '\0') && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     (bVar16 = bVar16 | 2, *(int *)(lVar2 + 0x60) != -1)) {
    (*DAT_146ab4130)(0xffffffff);
    *(undefined4 *)(lVar2 + 0x60) = 0xffffffff;
  }
  if ((bVar8) && (0 < param_3)) {
    do {
      (*DAT_146ab41a8)(0x1800,uVar14,param_4);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      param_4 = param_4 + 0x10;
    } while ((int)uVar13 < param_3);
  }
  if (bVar16 != 0) {
    param_7 = param_6;
    param_5 = param_8;
    if (bVar16 == 1) {
      (*DAT_146ab41a8)(0x1801,0,&param_7);
    }
    else if (bVar16 == 2) {
      (*DAT_146ab41b0)(0x1802,0,&param_5);
    }
    else if (bVar16 == 3) {
      (*DAT_146ab41c0)(0x84f9,0);
    }
  }
  if (bVar9) {
    *(undefined4 *)(param_1 + 0x338) = uVar4;
    *(undefined4 *)(param_1 + 0x33c) = uVar5;
    *(undefined4 *)(param_1 + 0x340) = uVar6;
    *(undefined4 *)(param_1 + 0x344) = uVar7;
    *(char *)(param_1 + 0x334) = cVar3;
  }
  return;
}



// FUNCTION 141e75a90 FUN_141e75a90 body=622 status=ok
// SIG undefined FUN_141e75a90(void)

undefined8 *
FUN_141e75a90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_1415e13e0(), cVar1 == '\0')) {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    local_res8[0] = 0;
    puVar2 = puVar3 + 0xc;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    DAT_146ab6e80 = puVar3 + 1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x48,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144eb6770;
      puVar2[1] = local_res8;
      puVar2[2] = param_1;
      puVar2[3] = &local_res18;
      puVar2[4] = &local_res20;
      puVar2[5] = &param_5;
      puVar2[6] = &param_6;
      puVar2[7] = &param_7;
      puVar2[8] = &param_8;
    }
    local_78[0] = &LAB_141e6e010;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_78);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    *param_2 = local_res8[0];
    return param_2;
  }
  FUN_141ea0b50(param_1,param_2,local_res18,local_res20,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 141e75d00 RHICreateRenderQuery_RenderThread body=26 status=ok
// SIG undefined RHICreateRenderQuery_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateRenderQuery_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  RHICreateRenderQuery(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e75d20 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141ea2610(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e75d40 FUN_141e75d40 body=32 status=ok
// SIG undefined FUN_141e75d40(void)

undefined8
FUN_141e75d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_141ea26d0(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e75d60 FUN_141e75d60 body=50 status=ok
// SIG undefined FUN_141e75d60(void)

undefined8
FUN_141e75d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  FUN_141ea27d0(param_1,param_2,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 141e75da0 FUN_141e75da0 body=32 status=ok
// SIG undefined FUN_141e75da0(void)

undefined8
FUN_141e75da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_141ea2900(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e75dc0 FUN_141e75dc0 body=32 status=ok
// SIG undefined FUN_141e75dc0(void)

undefined8
FUN_141e75dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_141ea2a10(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e75de0 FUN_141e75de0 body=619 status=ok
// SIG undefined FUN_141e75de0(void)

undefined8 *
FUN_141e75de0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  uVar1 = param_10;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    FUN_141ea2dc0(param_1,param_2,local_res20[0],param_5,param_6,param_7,param_8,param_9,uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_10 = 0;
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144eb6710;
      puVar3[1] = &param_10;
      puVar3[2] = param_1;
      puVar3[3] = local_res20;
      puVar3[4] = &param_5;
      puVar3[5] = &param_6;
      puVar3[6] = &param_7;
      puVar3[7] = &param_8;
      puVar3[8] = &param_9;
      puVar3[9] = uVar1;
    }
    local_68[0] = &LAB_141e6df00;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = param_10;
  }
  return param_2;
}



// FUNCTION 141e76050 FUN_141e76050 body=428 status=ok
// SIG undefined FUN_141e76050(void)

longlong *
FUN_141e76050(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 uStack_ec;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  puVar16 = param_10;
  lVar15 = FOpenGLDynamicRHI::CreateOpenGLRHITextureOnly
                     (param_1,param_4,param_5,0,0,0,&param_6,&param_7,&param_8,1,&param_9,
                      param_10 + 2,*param_10);
  uVar14 = param_9;
  uVar13 = param_8;
  uVar12 = param_7;
  uVar11 = param_6;
  uVar5 = *puVar16;
  uVar6 = puVar16[1];
  uVar7 = puVar16[2];
  uVar8 = puVar16[3];
  uVar9 = puVar16[4];
  uVar10 = puVar16[5];
  uVar1 = *(undefined4 *)(puVar16 + 6);
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x34);
  uVar3 = *(undefined4 *)(puVar16 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x3c);
  local_38 = 0;
  local_28 = 0;
  puVar16 = (undefined8 *)FUN_140438ef0(0x78,local_58);
  if (puVar16 != (undefined8 *)0x0) {
    puVar16[1] = param_1;
    puVar16[2] = lVar15;
    *puVar16 = &PTR_FUN_144eb66f8;
    puVar16[3] = CONCAT44(param_5,param_4);
    puVar16[4] = (ulonglong)CONCAT41(uVar12,uVar11) << 0x18;
    puVar16[5] = CONCAT44(1,uVar13);
    puVar16[6] = CONCAT44(uStack_ec,uVar14);
    puVar16[7] = uVar5;
    puVar16[8] = uVar6;
    puVar16[9] = uVar7;
    puVar16[10] = uVar8;
    puVar16[0xb] = uVar9;
    puVar16[0xc] = uVar10;
    *(undefined4 *)(puVar16 + 0xd) = uVar1;
    *(undefined4 *)((longlong)puVar16 + 0x6c) = uVar2;
    *(undefined4 *)(puVar16 + 0xe) = uVar3;
    *(undefined4 *)((longlong)puVar16 + 0x74) = uVar4;
  }
  local_68[0] = &LAB_141e6de50;
  FUN_141eb4140(local_68,0);
  *param_2 = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e76200 FUN_141e76200 body=619 status=ok
// SIG undefined FUN_141e76200(void)

undefined8 *
FUN_141e76200(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  uVar1 = param_10;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    FUN_141ea3660(param_1,param_2,local_res20[0],param_5,param_6,param_7,param_8,param_9,uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_10 = 0;
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144eb6710;
      puVar3[1] = &param_10;
      puVar3[2] = param_1;
      puVar3[3] = local_res20;
      puVar3[4] = &param_5;
      puVar3[5] = &param_6;
      puVar3[6] = &param_7;
      puVar3[7] = &param_8;
      puVar3[8] = &param_9;
      puVar3[9] = uVar1;
    }
    local_68[0] = &LAB_141e6de40;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = param_10;
  }
  return param_2;
}



// FUNCTION 141e76470 FUN_141e76470 body=570 status=ok
// SIG undefined FUN_141e76470(void)

undefined8 *
FUN_141e76470(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  uVar1 = param_9;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    FOpenGLDynamicRHI::RHICreateTextureCubeArray
              (param_1,param_2,local_res20[0],param_5,param_6,param_7,param_8,uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_9 = 0;
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x48,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144eb6770;
      puVar3[1] = &param_9;
      puVar3[2] = param_1;
      puVar3[3] = local_res20;
      puVar3[4] = &param_5;
      puVar3[5] = &param_6;
      puVar3[6] = &param_7;
      puVar3[7] = &param_8;
      puVar3[8] = uVar1;
    }
    local_68[0] = &LAB_141e6de90;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = param_9;
  }
  return param_2;
}



// FUNCTION 141e766b0 FUN_141e766b0 body=396 status=ok
// SIG undefined FUN_141e766b0(void)

longlong *
FUN_141e766b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 local_res20 [2];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  puVar14 = param_8;
  local_res20[0] = 1;
  lVar13 = FOpenGLDynamicRHI::CreateOpenGLRHITextureOnly
                     (param_1,param_4,param_4,1,0,0,&param_5,&param_6,local_res20,1,&param_7,
                      param_8 + 2,*param_8);
  uVar12 = param_7;
  uVar11 = param_6;
  uVar10 = param_5;
  uVar9 = local_res20[0];
  uVar1 = *puVar14;
  uVar2 = puVar14[1];
  uVar3 = puVar14[2];
  uVar4 = puVar14[3];
  uVar5 = puVar14[4];
  uVar6 = puVar14[5];
  uVar7 = puVar14[6];
  uVar8 = puVar14[7];
  local_38 = 0;
  local_28 = 0;
  puVar14 = (undefined8 *)FUN_140438ef0(0x70,local_58);
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[1] = param_1;
    puVar14[2] = lVar13;
    *puVar14 = &PTR_FUN_144eb6758;
    puVar14[3] = CONCAT17(uVar10,(uint7)CONCAT24(1,param_4));
    puVar14[4] = CONCAT44(uVar9,uVar11);
    puVar14[5] = CONCAT44(uVar12,1);
    puVar14[6] = uVar1;
    puVar14[7] = uVar2;
    puVar14[8] = uVar3;
    puVar14[9] = uVar4;
    puVar14[10] = uVar5;
    puVar14[0xb] = uVar6;
    puVar14[0xc] = uVar7;
    puVar14[0xd] = uVar8;
  }
  local_68[0] = &LAB_141e6dea0;
  FUN_141eb4140(local_68,0);
  *param_2 = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e76840 FUN_141e76840 body=619 status=ok
// SIG undefined FUN_141e76840(void)

undefined8 *
FUN_141e76840(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_res20 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  uVar1 = param_10;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    FOpenGLDynamicRHI::RHICreateTextureExternal2D
              (param_1,param_2,local_res20[0],param_5,param_6,param_7,param_8,param_9,uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_10 = 0;
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar3;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144eb6710;
      puVar3[1] = &param_10;
      puVar3[2] = param_1;
      puVar3[3] = local_res20;
      puVar3[4] = &param_5;
      puVar3[5] = &param_6;
      puVar3[6] = &param_7;
      puVar3[7] = &param_8;
      puVar3[8] = &param_9;
      puVar3[9] = uVar1;
    }
    local_68[0] = &LAB_141e6de20;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = param_10;
  }
  return param_2;
}



// FUNCTION 141e76ab0 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  RHICreateTextureReference(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e76ad0 FUN_141e76ad0 body=501 status=ok
// SIG undefined FUN_141e76ad0(void)

undefined8 *
FUN_141e76ad0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  local_res20 = param_4;
  if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_1415e13e0(), cVar1 == '\0')) {
    puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = 0;
    puVar2 = puVar3 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar2;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3 + 1;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144eb6728;
      puVar2[1] = &local_res8;
      puVar2[2] = param_1;
      puVar2[3] = &local_res20;
      puVar2[4] = &param_5;
      puVar2[5] = &param_6;
    }
    local_78[0] = &LAB_141e6dff0;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_78);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = local_res8;
    return param_2;
  }
  FUN_141ea40c0(param_1,param_2,local_res20,param_5,param_6);
  return param_2;
}


