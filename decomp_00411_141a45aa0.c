// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a45aa0 FUN_141a45aa0 body=672 status=ok
// SIG undefined FUN_141a45aa0(void)

int * FUN_141a45aa0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong *_Src;
  int iVar14;
  void *_Dst;
  bool bVar15;
  int local_res8 [2];
  
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar14 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar14 * 0x38 + *param_1);
  TKeyInitializer<FD3D12Resource_*_const_&>::
  operator<FD3D12Resource_*,CResourceState>_TTuple<FD3D12Resource_*,CResourceState>(param_3,_Src);
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  iVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar14 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    iVar2 = local_res8[0];
    lVar11 = (longlong)local_res8[0];
    bVar15 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar11 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      iVar14 = *param_2;
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar14;
      }
      puVar6 = (undefined4 *)((longlong)iVar14 * 0x38 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar10 = (undefined1)local_res8[0];
      goto LAB_141a45d1c;
    }
  }
  uVar10 = 0;
  cVar4 = TSet<TTuple<TSharedRef<FString,1>,FTextId>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,FTextId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar14,0);
  if (cVar4 == '\0') {
    iVar14 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
    uVar13 = -(iVar14 + uVar9) ^ uVar9 >> 0xd;
    uVar8 = (iVar14 - uVar9) - uVar13 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar13 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 10;
    uVar8 = ((uVar13 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x34) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141a45d1c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar10;
  }
  return param_2;
}



// FUNCTION 141a45d40 FUN_141a45d40 body=1074 status=ok
// SIG undefined FUN_141a45d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a45d40(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6
             )

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined8 *local_150;
  int local_148 [2];
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  int *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148[0] = param_5;
  lVar2 = **(longlong **)(param_1 + 0x50);
  local_140 = param_3;
  local_138[0] = param_4;
  if ((*(byte *)(param_3 + 0x28) & 6) == 0) {
    local_118 = *(longlong *)(param_3 + 0x38);
    local_110 = *(undefined8 *)(param_3 + 0x50);
    if (param_6 == 0) {
      *(uint *)(param_3 + 0x158) = *(uint *)(param_3 + 0x158) | 2;
      local_130 = 0;
      local_158 = local_158 & 0xffffffff00000000;
      iVar3 = FUN_141a6e3f0(lVar2,3,param_4 + param_5,&local_130);
      if (iVar3 < 0) {
        local_150 = &local_108;
        local_108 = 0;
        local_100 = 0;
        local_158 = 0;
        FUN_141a94000(iVar3,
                      "Adapter.CreateBuffer(D3D12_HEAP_TYPE_READBACK, Offset + Size, &StagingBuffer)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp",
                      0x16f);
      }
      local_f8 = &local_118;
      local_f0 = &local_110;
      local_e8 = &local_140;
      local_e0 = &local_130;
      local_d8 = local_138;
      local_d0 = local_148;
      if ((param_2 != 0) && (DAT_146ab6383 != '\0')) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a4e710(&local_f8);
      *(undefined8 *)(param_3 + 0xe8) = 0;
      *(undefined4 *)(param_3 + 0xf8) = 0xc;
      FUN_141a50de0(param_3 + 0xd0,local_130,local_148[0],0);
      FUN_141a7d380(param_3 + 0xd0);
      uVar4 = *(undefined8 *)(param_3 + 0x108);
    }
    else {
      uVar4 = FUN_141a44bf0(local_118 + 0x850,param_5,0x200,param_3 + 0xd0);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
      FUN_141a67840(local_c8,uVar4);
      FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                    *(undefined4 *)(local_140 + 0xc0),local_c8);
      if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                              *(undefined4 *)(local_140 + 0xc0),local_c8);
        FUN_141a7c640(local_140,local_c8);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
          puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar6 + 0x13;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar6;
        *(undefined8 **)(param_2 + 8) = puVar6 + 1;
        puVar6[1] = 0;
        puVar6[2] = local_140;
        *puVar6 = &PTR_FUN_144da7280;
        FUN_141a67840(puVar6 + 3,uVar4);
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                              *(undefined4 *)(local_140 + 0xc0),puVar6 + 3);
        FRHICommandListImmediate::RHIThreadFence(param_2,&local_120,1);
        if (local_120 != 0) {
          LOCK();
          piVar1 = (int *)(local_120 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
            thunk_FUN_141a7bb70(local_c8);
            goto LAB_141a46136;
          }
        }
      }
      thunk_FUN_141a7bb70(local_c8);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x13;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      puVar6[2] = local_140;
      *puVar6 = &PTR_FUN_144da7280;
      FUN_141a67840(puVar6 + 3,uVar4);
      uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                            *(undefined4 *)(local_140 + 0xc0),puVar6 + 3);
      FRHICommandListImmediate::RHIThreadFence(param_2,&local_128,1);
      if (local_128 != 0) {
        LOCK();
        piVar1 = (int *)(local_128 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
LAB_141a46136:
  *(int *)(param_3 + 0x150) = local_138[0];
  *(uint *)(param_3 + 0x158) = *(uint *)(param_3 + 0x158) | 1;
  *(int *)(param_3 + 0x154) = local_148[0];
  return uVar4;
}



// FUNCTION 141a46180 FUN_141a46180 body=1074 status=ok
// SIG undefined FUN_141a46180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a46180(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6
             )

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined8 *local_150;
  int local_148 [2];
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  int *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148[0] = param_5;
  lVar2 = **(longlong **)(param_1 + 0x50);
  local_140 = param_3;
  local_138[0] = param_4;
  if ((*(byte *)(param_3 + 0x28) & 6) == 0) {
    local_118 = *(longlong *)(param_3 + 0x38);
    local_110 = *(undefined8 *)(param_3 + 0x50);
    if (param_6 == 0) {
      *(uint *)(param_3 + 0x158) = *(uint *)(param_3 + 0x158) | 2;
      local_130 = 0;
      local_158 = local_158 & 0xffffffff00000000;
      iVar3 = FUN_141a6e3f0(lVar2,3,param_4 + param_5,&local_130);
      if (iVar3 < 0) {
        local_150 = &local_108;
        local_108 = 0;
        local_100 = 0;
        local_158 = 0;
        FUN_141a94000(iVar3,
                      "Adapter.CreateBuffer(D3D12_HEAP_TYPE_READBACK, Offset + Size, &StagingBuffer)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp",
                      0x16f);
      }
      local_f8 = &local_118;
      local_f0 = &local_110;
      local_e8 = &local_140;
      local_e0 = &local_130;
      local_d8 = local_138;
      local_d0 = local_148;
      if ((param_2 != 0) && (DAT_146ab6383 != '\0')) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a4e710(&local_f8);
      *(undefined8 *)(param_3 + 0xe8) = 0;
      *(undefined4 *)(param_3 + 0xf8) = 0xc;
      FUN_141a50de0(param_3 + 0xd0,local_130,local_148[0],0);
      FUN_141a7d380(param_3 + 0xd0);
      uVar4 = *(undefined8 *)(param_3 + 0x108);
    }
    else {
      uVar4 = FUN_141a44bf0(local_118 + 0x850,param_5,0x200,param_3 + 0xd0);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
      FUN_141a67840(local_c8,uVar4);
      FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                    *(undefined4 *)(local_140 + 0xc0),local_c8);
      if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                              *(undefined4 *)(local_140 + 0xc0),local_c8);
        CAkSrcBaseEx::StopStream(local_140,local_c8);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
          puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar6 + 0x13;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar6;
        *(undefined8 **)(param_2 + 8) = puVar6 + 1;
        puVar6[1] = 0;
        puVar6[2] = local_140;
        *puVar6 = &PTR_FUN_144da7290;
        FUN_141a67840(puVar6 + 3,uVar4);
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                              *(undefined4 *)(local_140 + 0xc0),puVar6 + 3);
        FRHICommandListImmediate::RHIThreadFence(param_2,&local_120,1);
        if (local_120 != 0) {
          LOCK();
          piVar1 = (int *)(local_120 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
            thunk_FUN_141a7bb70(local_c8);
            goto LAB_141a46576;
          }
        }
      }
      thunk_FUN_141a7bb70(local_c8);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x13;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      puVar6[2] = local_140;
      *puVar6 = &PTR_FUN_144da7290;
      FUN_141a67840(puVar6 + 3,uVar4);
      uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x24),
                            *(undefined4 *)(local_140 + 0xc0),puVar6 + 3);
      FRHICommandListImmediate::RHIThreadFence(param_2,&local_128,1);
      if (local_128 != 0) {
        LOCK();
        piVar1 = (int *)(local_128 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
LAB_141a46576:
  *(int *)(param_3 + 0x150) = local_138[0];
  *(uint *)(param_3 + 0x158) = *(uint *)(param_3 + 0x158) | 1;
  *(int *)(param_3 + 0x154) = local_148[0];
  return uVar4;
}



// FUNCTION 141a465c0 FUN_141a465c0 body=1074 status=ok
// SIG undefined FUN_141a465c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a465c0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6
             )

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  undefined8 *local_150;
  int local_148 [2];
  longlong local_140;
  int local_138 [2];
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  int *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148[0] = param_5;
  lVar2 = **(longlong **)(param_1 + 0x50);
  local_140 = param_3;
  local_138[0] = param_4;
  if ((*(byte *)(param_3 + 0x24) & 6) == 0) {
    local_118 = *(longlong *)(param_3 + 0x30);
    local_110 = *(undefined8 *)(param_3 + 0x48);
    if (param_6 == 0) {
      *(uint *)(param_3 + 0x150) = *(uint *)(param_3 + 0x150) | 2;
      local_130 = 0;
      local_158 = local_158 & 0xffffffff00000000;
      iVar3 = FUN_141a6e3f0(lVar2,3,param_4 + param_5,&local_130);
      if (iVar3 < 0) {
        local_150 = &local_108;
        local_108 = 0;
        local_100 = 0;
        local_158 = 0;
        FUN_141a94000(iVar3,
                      "Adapter.CreateBuffer(D3D12_HEAP_TYPE_READBACK, Offset + Size, &StagingBuffer)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp",
                      0x16f);
      }
      local_f8 = &local_118;
      local_f0 = &local_110;
      local_e8 = &local_140;
      local_e0 = &local_130;
      local_d8 = local_138;
      local_d0 = local_148;
      if ((param_2 != 0) && (DAT_146ab6383 != '\0')) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a4e870(&local_f8);
      *(undefined8 *)(param_3 + 0xe0) = 0;
      *(undefined4 *)(param_3 + 0xf0) = 0xc;
      FUN_141a50de0(param_3 + 200,local_130,local_148[0],0);
      FUN_141a7d380(param_3 + 200);
      uVar4 = *(undefined8 *)(param_3 + 0x100);
    }
    else {
      uVar4 = FUN_141a44bf0(local_118 + 0x850,param_5,0x200,param_3 + 200);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
      FUN_141a67840(local_c8,uVar4);
      FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x20),
                    *(undefined4 *)(local_140 + 0xb8),local_c8);
      if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x20),
                              *(undefined4 *)(local_140 + 0xb8),local_c8);
        FUN_141a91480(local_140,local_c8);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
          puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar6 + 0x13;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar6;
        *(undefined8 **)(param_2 + 8) = puVar6 + 1;
        puVar6[1] = 0;
        puVar6[2] = local_140;
        *puVar6 = &PTR_FUN_144da7270;
        FUN_141a67840(puVar6 + 3,uVar4);
        uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x20),
                              *(undefined4 *)(local_140 + 0xb8),puVar6 + 3);
        FRHICommandListImmediate::RHIThreadFence(param_2,&local_120,1);
        if (local_120 != 0) {
          LOCK();
          piVar1 = (int *)(local_120 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
            thunk_FUN_141a7bb70(local_c8);
            goto LAB_141a469b6;
          }
        }
      }
      thunk_FUN_141a7bb70(local_c8);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x13;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa0);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0x13;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      puVar6[2] = local_140;
      *puVar6 = &PTR_FUN_144da7270;
      FUN_141a67840(puVar6 + 3,uVar4);
      uVar4 = FUN_141a4fd40(*(undefined8 *)(lVar2 + 0x700),*(undefined4 *)(local_140 + 0x20),
                            *(undefined4 *)(local_140 + 0xb8),puVar6 + 3);
      FRHICommandListImmediate::RHIThreadFence(param_2,&local_128,1);
      if (local_128 != 0) {
        LOCK();
        piVar1 = (int *)(local_128 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
LAB_141a469b6:
  *(int *)(param_3 + 0x148) = local_138[0];
  *(uint *)(param_3 + 0x150) = *(uint *)(param_3 + 0x150) | 1;
  *(int *)(param_3 + 0x14c) = local_148[0];
  return uVar4;
}



// FUNCTION 141a46a00 FUN_141a46a00 body=166 status=ok
// SIG undefined FUN_141a46a00(void)

undefined8 * FUN_141a46a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144da7260;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 6));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 6),4000);
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xd));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xd),4000);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a46ab0 FUN_141a46ab0 body=184 status=ok
// SIG undefined FUN_141a46ab0(void)

void FUN_141a46ab0(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x518);
  uVar7 = uVar11;
  if (lVar4 != 0) {
    uVar7 = *(ulonglong *)(lVar4 + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar7 + 0x1e);
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar2 != 0) {
    iVar12 = iVar6;
  }
  if (iVar12 != -1) {
    uVar8 = 1;
    puVar9 = (undefined8 *)(param_2 + 0x90);
    do {
      uVar10 = (uint)uVar11;
      if ((uVar8 & uVar2) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x130))(plVar5,uVar10 + bVar1,*puVar9);
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & ~(ushort)(1 << (uVar10 & 0x1f));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar9 = puVar9 + 1;
    } while (uVar10 + 1 < iVar12 + 1U);
  }
  return;
}



// FUNCTION 141a46b70 FUN_141a46b70 body=184 status=ok
// SIG undefined FUN_141a46b70(void)

void FUN_141a46b70(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x518);
  uVar7 = uVar11;
  if (lVar4 != 0) {
    uVar7 = *(ulonglong *)(lVar4 + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar7 + 0x22);
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar2 != 0) {
    iVar12 = iVar6;
  }
  if (iVar12 != -1) {
    uVar8 = 1;
    puVar9 = (undefined8 *)(param_2 + 0x110);
    do {
      uVar10 = (uint)uVar11;
      if ((uVar8 & uVar2) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x130))(plVar5,uVar10 + bVar1,*puVar9);
        *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) & ~(ushort)(1 << (uVar10 & 0x1f));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar9 = puVar9 + 1;
    } while (uVar10 + 1 < iVar12 + 1U);
  }
  return;
}



// FUNCTION 141a46c30 FUN_141a46c30 body=184 status=ok
// SIG undefined FUN_141a46c30(void)

void FUN_141a46c30(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x518);
  uVar7 = uVar11;
  if (lVar4 != 0) {
    uVar7 = *(ulonglong *)(lVar4 + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar7 + 0x12);
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar2 != 0) {
    iVar12 = iVar6;
  }
  if (iVar12 != -1) {
    uVar8 = 1;
    puVar9 = (undefined8 *)(param_2 + 400);
    do {
      uVar10 = (uint)uVar11;
      if ((uVar8 & uVar2) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x130))(plVar5,uVar10 + bVar1,*puVar9);
        *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) & ~(ushort)(1 << (uVar10 & 0x1f));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar9 = puVar9 + 1;
    } while (uVar10 + 1 < iVar12 + 1U);
  }
  return;
}



// FUNCTION 141a46cf0 FUN_141a46cf0 body=184 status=ok
// SIG undefined FUN_141a46cf0(void)

void FUN_141a46cf0(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x518);
  uVar7 = uVar11;
  if (lVar4 != 0) {
    uVar7 = *(ulonglong *)(lVar4 + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar7 + 0x1a);
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar2 != 0) {
    iVar12 = iVar6;
  }
  if (iVar12 != -1) {
    uVar8 = 1;
    puVar9 = (undefined8 *)(param_2 + 0x210);
    do {
      uVar10 = (uint)uVar11;
      if ((uVar8 & uVar2) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x130))(plVar5,uVar10 + bVar1,*puVar9);
        *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & ~(ushort)(1 << (uVar10 & 0x1f));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar9 = puVar9 + 1;
    } while (uVar10 + 1 < iVar12 + 1U);
  }
  return;
}



// FUNCTION 141a46db0 FUN_141a46db0 body=188 status=ok
// SIG undefined FUN_141a46db0(void)

void FUN_141a46db0(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  lVar4 = *(longlong *)(lVar3 + 0xcc0);
  uVar7 = uVar11;
  if (lVar4 != 0) {
    uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + 0x18) + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar7 + 0x26);
  iVar6 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar2 != 0) {
    iVar12 = iVar6;
  }
  if (iVar12 != -1) {
    uVar8 = 1;
    puVar9 = (undefined8 *)(param_2 + 0x290);
    do {
      uVar10 = (uint)uVar11;
      if ((uVar8 & uVar2) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x128))(plVar5,uVar10 + bVar1,*puVar9);
        *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) & ~(ushort)(1 << (uVar10 & 0x1f));
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar9 = puVar9 + 1;
    } while (uVar10 + 1 < iVar12 + 1U);
  }
  return;
}



// FUNCTION 141a46e70 FUN_141a46e70 body=181 status=ok
// SIG undefined FUN_141a46e70(void)

void FUN_141a46e70(longlong param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar10 = 0;
  lVar8 = *(longlong *)(lVar3 + 0x518);
  uVar6 = uVar10;
  if (lVar8 != 0) {
    uVar6 = *(ulonglong *)(lVar8 + 0xd0);
  }
  uVar2 = *param_3;
  bVar1 = *(byte *)(uVar6 + 0x16);
  iVar5 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar11 = 0;
  if (uVar2 != 0) {
    iVar11 = iVar5;
  }
  if (iVar11 != -1) {
    uVar7 = 1;
    lVar8 = 0x10;
    do {
      uVar9 = (uint)uVar10;
      if ((uVar7 & uVar2) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
        (**(code **)(*plVar4 + 0x130))
                  (plVar4,uVar9 + bVar1,*(undefined8 *)(lVar8 + (longlong)param_2));
        *param_2 = *param_2 & ~(ushort)(1 << (uVar9 & 0x1f));
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      lVar8 = lVar8 + 8;
    } while (uVar9 + 1 < iVar11 + 1U);
  }
  return;
}



// FUNCTION 141a46f30 FUN_141a46f30 body=553 status=ok
// SIG undefined FUN_141a46f30(void)

void FUN_141a46f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x70) & (uint)*(ushort *)(param_1 + 0x2c3a);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c3a) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xb8);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x28b0 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a654b0(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x78);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a654b0(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x88);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x2210 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x2210 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f8a) =
               *(ushort *)(param_1 + 0x1f8a) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c3a) = 0;
  return;
}



// FUNCTION 141a47160 FUN_141a47160 body=553 status=ok
// SIG undefined FUN_141a47160(void)

void FUN_141a47160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x58) & (uint)*(ushort *)(param_1 + 0x2c34);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c34) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xa0);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x2730 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a65120(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x60);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a65120(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x2090 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x2090 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f84) =
               *(ushort *)(param_1 + 0x1f84) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c34) = 0;
  return;
}



// FUNCTION 141a47390 FUN_141a47390 body=553 status=ok
// SIG undefined FUN_141a47390(void)

void FUN_141a47390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x58) & (uint)*(ushort *)(param_1 + 0x2c38);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c38) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xa0);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x2830 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a65380(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x60);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a65380(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x2190 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x2190 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f88) =
               *(ushort *)(param_1 + 0x1f88) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c38) = 0;
  return;
}



// FUNCTION 141a475c0 FUN_141a475c0 body=553 status=ok
// SIG undefined FUN_141a475c0(void)

void FUN_141a475c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x58) & (uint)*(ushort *)(param_1 + 0x2c32);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c32) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xa0);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x26b0 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a64ff0(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x60);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a64ff0(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x2010 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x2010 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f82) =
               *(ushort *)(param_1 + 0x1f82) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c32) = 0;
  return;
}



// FUNCTION 141a477f0 FUN_141a477f0 body=553 status=ok
// SIG undefined FUN_141a477f0(void)

void FUN_141a477f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x68) & (uint)*(ushort *)(param_1 + 0x2c36);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c36) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xb0);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x27b0 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a65250(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a65250(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x80);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x2110 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x2110 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f86) =
               *(ushort *)(param_1 + 0x1f86) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c36) = 0;
  return;
}



// FUNCTION 141a47a20 FUN_141a47a20 body=553 status=ok
// SIG undefined FUN_141a47a20(void)

void FUN_141a47a20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_2 + 0x58) & (uint)*(ushort *)(param_1 + 0x2c30);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 0x2c30) = 0;
    return;
  }
  do {
    uVar5 = -uVar10 & uVar10;
    uVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    fVar14 = (float)DAT_1468b5a78;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(param_2 + 0xa0);
    lVar11 = (longlong)(int)uVar7;
    lVar1 = *(longlong *)(param_1 + 0x2630 + lVar11 * 8);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    lVar8 = *(longlong *)(lVar1 + 0xb8);
    if (uVar6 != 0) {
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        plVar2 = *(longlong **)(lVar8 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
        pdVar3 = (double *)plVar2[9];
        if ((double)fVar14 != *pdVar3) {
          *pdVar3 = (double)fVar14;
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))();
        FUN_141a655e0(param_1 + 0x4e0,*(undefined8 *)(lVar4 + 0xa8),uVar9 & 0xff);
        uVar9 = *puVar12;
      } while (uVar9 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x60);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        FUN_141a655e0(param_1 + 0x4e0,*(undefined8 *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8),
                      uVar6 & 0xff);
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
      lVar8 = *(longlong *)(lVar1 + 0xb8);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(uint *)(lVar4 + lVar11 * 4);
    if (uVar6 != 0) {
      puVar12 = (uint *)(lVar4 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(lVar4 + (ulonglong)uVar6 * 4);
      do {
        puVar12 = puVar12 + 1;
        lVar4 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
        if (*(longlong *)(param_1 + 0x1f90 + (ulonglong)(uVar6 & 0xff) * 8) != lVar4) {
          *(longlong *)(param_1 + 0x1f90 + (ulonglong)(uVar6 & 0xff) * 8) = lVar4;
          *(ushort *)(param_1 + 0x1f80) =
               *(ushort *)(param_1 + 0x1f80) | (ushort)(1 << (uVar6 & 0x1f));
        }
        uVar6 = *puVar12;
      } while (uVar6 >> 0x18 == uVar7);
    }
    bVar13 = uVar5 != uVar10;
    uVar10 = uVar10 ^ uVar5;
  } while (bVar13);
  *(undefined2 *)(param_1 + 0x2c30) = 0;
  return;
}



// FUNCTION 141a47c50 FUN_141a47c50 body=518 status=ok
// SIG undefined FUN_141a47c50(void)

void FUN_141a47c50(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong local_res8;
  
  uVar9 = 0;
  lVar3 = param_1[1];
  plVar11 = (longlong *)(param_2 + 0x230);
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar7 = param_1[8];
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar10 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar7 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        if ((*(char *)(lVar7 + 0x80) == '\0') && (*(char *)(lVar7 + 0x81) == '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             ((*(int *)(lVar7 + 0x5c) != 1 ||
              ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xc0,lVar7 + 0x48);
          }
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             (((*(int *)(lVar7 + 0x5c) != 1 || (*(int *)(lVar5 + 0xb8) == 1)) ||
              (*(int *)(lVar5 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xe0,lVar7 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar10,uVar8,0);
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + (ulonglong)uVar2;
      uVar6 = uVar9 & 0x3f;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & ~(1L << uVar6);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar7 = param_1[8];
  }
  lVar10 = 0;
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar11 + 0x100))
            (plVar11,*(undefined1 *)(lVar10 + 0x1c),
             (ulonglong)(uint)(*(int *)(lVar7 + 0x28) * iVar1) + *(longlong *)(lVar7 + 0x38));
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | ~((1L << ((byte)param_4 & 0x3f)) - 1U)
  ;
  return;
}



// FUNCTION 141a47e60 FUN_141a47e60 body=518 status=ok
// SIG undefined FUN_141a47e60(void)

void FUN_141a47e60(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong local_res8;
  
  uVar9 = 0;
  lVar3 = param_1[1];
  plVar11 = (longlong *)(param_2 + 0x430);
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar7 = param_1[8];
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar10 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar7 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        if ((*(char *)(lVar7 + 0x80) == '\0') && (*(char *)(lVar7 + 0x81) == '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             ((*(int *)(lVar7 + 0x5c) != 1 ||
              ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xc0,lVar7 + 0x48);
          }
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             (((*(int *)(lVar7 + 0x5c) != 1 || (*(int *)(lVar5 + 0xb8) == 1)) ||
              (*(int *)(lVar5 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xe0,lVar7 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar10,uVar8,0);
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + (ulonglong)uVar2;
      uVar6 = uVar9 & 0x3f;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) & ~(1L << uVar6);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar7 = param_1[8];
  }
  lVar10 = 0;
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar11 + 0x100))
            (plVar11,*(undefined1 *)(lVar10 + 0x20),
             (ulonglong)(uint)(*(int *)(lVar7 + 0x28) * iVar1) + *(longlong *)(lVar7 + 0x38));
  *(ulonglong *)(param_2 + 0x10) =
       *(ulonglong *)(param_2 + 0x10) | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}



// FUNCTION 141a48070 FUN_141a48070 body=518 status=ok
// SIG undefined FUN_141a48070(void)

void FUN_141a48070(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong local_res8;
  
  uVar9 = 0;
  lVar3 = param_1[1];
  plVar11 = (longlong *)(param_2 + 0x630);
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar7 = param_1[8];
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar10 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar7 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        if ((*(char *)(lVar7 + 0x80) == '\0') && (*(char *)(lVar7 + 0x81) == '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             ((*(int *)(lVar7 + 0x5c) != 1 ||
              ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xc0,lVar7 + 0x48);
          }
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             (((*(int *)(lVar7 + 0x5c) != 1 || (*(int *)(lVar5 + 0xb8) == 1)) ||
              (*(int *)(lVar5 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xe0,lVar7 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar10,uVar8,0);
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + (ulonglong)uVar2;
      uVar6 = uVar9 & 0x3f;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) & ~(1L << uVar6);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar7 = param_1[8];
  }
  lVar10 = 0;
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar11 + 0x100))
            (plVar11,*(undefined1 *)(lVar10 + 0x10),
             (ulonglong)(uint)(*(int *)(lVar7 + 0x28) * iVar1) + *(longlong *)(lVar7 + 0x38));
  *(ulonglong *)(param_2 + 0x18) =
       *(ulonglong *)(param_2 + 0x18) | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}



// FUNCTION 141a48280 FUN_141a48280 body=518 status=ok
// SIG undefined FUN_141a48280(void)

void FUN_141a48280(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong local_res8;
  
  uVar9 = 0;
  lVar3 = param_1[1];
  plVar11 = (longlong *)(param_2 + 0x830);
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar7 = param_1[8];
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar10 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar7 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        if ((*(char *)(lVar7 + 0x80) == '\0') && (*(char *)(lVar7 + 0x81) == '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             ((*(int *)(lVar7 + 0x5c) != 1 ||
              ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xc0,lVar7 + 0x48);
          }
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             (((*(int *)(lVar7 + 0x5c) != 1 || (*(int *)(lVar5 + 0xb8) == 1)) ||
              (*(int *)(lVar5 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xe0,lVar7 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar10,uVar8,0);
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + (ulonglong)uVar2;
      uVar6 = uVar9 & 0x3f;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) & ~(1L << uVar6);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar7 = param_1[8];
  }
  lVar10 = 0;
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar11 + 0x100))
            (plVar11,*(undefined1 *)(lVar10 + 0x18),
             (ulonglong)(uint)(*(int *)(lVar7 + 0x28) * iVar1) + *(longlong *)(lVar7 + 0x38));
  *(ulonglong *)(param_2 + 0x20) =
       *(ulonglong *)(param_2 + 0x20) | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}



// FUNCTION 141a48490 FUN_141a48490 body=522 status=ok
// SIG undefined FUN_141a48490(void)

void FUN_141a48490(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong local_res8;
  
  uVar9 = 0;
  lVar3 = param_1[1];
  plVar11 = (longlong *)(param_2 + 0xa30);
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar7 = param_1[8];
  uVar2 = *(uint *)(lVar7 + 0x28);
  lVar10 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar7 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar8 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        if ((*(char *)(lVar7 + 0x80) == '\0') && (*(char *)(lVar7 + 0x81) == '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             ((*(int *)(lVar7 + 0x5c) != 1 ||
              ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xc0,lVar7 + 0x48);
          }
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x10);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
             (((*(int *)(lVar7 + 0x5c) != 1 || (*(int *)(lVar5 + 0xb8) == 1)) ||
              (*(int *)(lVar5 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar5,0xe0,lVar7 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar10,uVar8,0);
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + (ulonglong)uVar2;
      uVar6 = uVar9 & 0x3f;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 0x28) = *(ulonglong *)(param_2 + 0x28) & ~(1L << uVar6);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar7 = param_1[8];
  }
  lVar10 = 0;
  if (*(longlong *)(param_1[1] + 0xcc0) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xcc0) + 0x18) + 0xd0);
  }
  plVar11 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar11 + 0xf8))
            (plVar11,*(undefined1 *)(lVar10 + 0x24),
             (ulonglong)(uint)(*(int *)(lVar7 + 0x28) * iVar1) + *(longlong *)(lVar7 + 0x38));
  *(ulonglong *)(param_2 + 0x28) =
       *(ulonglong *)(param_2 + 0x28) | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}



// FUNCTION 141a486a0 FUN_141a486a0 body=515 status=ok
// SIG undefined FUN_141a486a0(void)

void FUN_141a486a0(longlong *param_1,ulonglong *param_2,undefined8 param_3,uint param_4,int *param_5
                  )

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong local_res8;
  
  uVar8 = 0;
  lVar3 = param_1[1];
  puVar10 = param_2 + 6;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar6 = param_1[8];
  uVar2 = *(uint *)(lVar6 + 0x28);
  lVar9 = (ulonglong)(uVar2 * iVar1) + *(longlong *)(lVar6 + 0x30);
  if (param_4 != 0) {
    local_res8 = (ulonglong)param_4;
    do {
      uVar5 = *puVar10;
      if (uVar5 == 0) {
        uVar7 = *(undefined8 *)(param_1[2] + 8);
      }
      else {
        uVar7 = *(undefined8 *)(uVar5 + 0x28);
        if ((*(char *)(uVar5 + 0x80) == '\0') && (*(char *)(uVar5 + 0x81) == '\0')) {
          lVar6 = *(longlong *)(*(longlong *)(uVar5 + 0x40) + 0x10);
          if (((lVar6 != 0) && (*(char *)(lVar6 + 0xb4) != '\0')) &&
             ((*(int *)(uVar5 + 0x5c) != 1 ||
              ((*(int *)(lVar6 + 0xb8) == 1 || (*(int *)(lVar6 + 0xb8) == 4)))))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar6,0xc0,uVar5 + 0x48);
          }
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)(uVar5 + 0x40) + 0x10);
          if (((lVar6 != 0) && (*(char *)(lVar6 + 0xb4) != '\0')) &&
             (((*(int *)(uVar5 + 0x5c) != 1 || (*(int *)(lVar6 + 0xb8) == 1)) ||
              (*(int *)(lVar6 + 0xb8) == 4)))) {
            FUN_141a60ce0(lVar3 + 0x460,lVar6,0xe0,uVar5 + 0x48);
          }
        }
      }
      (**(code **)(*plVar4 + 0xc0))(plVar4,1,lVar9,uVar7,0);
      puVar10 = puVar10 + 1;
      lVar9 = lVar9 + (ulonglong)uVar2;
      uVar5 = uVar8 & 0x3f;
      uVar8 = uVar8 + 1;
      *param_2 = *param_2 & ~(1L << uVar5);
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    lVar6 = param_1[8];
  }
  lVar9 = 0;
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x100))
            (plVar4,*(undefined1 *)(lVar9 + 0x14),
             (ulonglong)(uint)(*(int *)(lVar6 + 0x28) * iVar1) + *(longlong *)(lVar6 + 0x38));
  *param_2 = *param_2 | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}



// FUNCTION 141a488b0 FUN_141a488b0 body=919 status=ok
// SIG undefined FUN_141a488b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a488b0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar2 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *(ushort *)(param_2 + 2);
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      plVar4 = (longlong *)(param_2 + 0x90);
      do {
        uVar8 = 0;
        if (*plVar4 != 0) {
          uVar8 = *(undefined2 *)(*plVar4 + 0x2c);
        }
        plVar4 = plVar4 + 1;
        uVar11 = uVar11 & ~(1 << (uVar2 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = uVar8;
        uVar2 = uVar2 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar2 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar5 = (ulonglong)(0x10 - param_4); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar3 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *(ushort *)(param_2 + 2) = uVar10;
        goto LAB_141a48bc8;
      }
    }
  }
  iVar3 = *param_5;
  *param_5 = iVar3 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar3) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar3 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar5 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar2 = (uint)uVar5;
      lVar1 = *(longlong *)(param_2 + 0x90 + uVar5 * 8);
      if (lVar1 == 0) {
        uVar6 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
      }
      local_c8[uVar5] = uVar6;
      uVar11 = uVar2 + 1;
      uVar5 = (ulonglong)uVar11;
      *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & ~(ushort)(1 << (uVar2 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar4 + 0xb8))(plVar4,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar3 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar3 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar3)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar7 = (undefined1 *)
             ((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar7 = 1;
    *(ulonglong *)(puVar7 + 4) = local_1a8;
    *(undefined8 *)(puVar7 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar7 + 0x14) = local_198;
    *(undefined8 *)(puVar7 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar7 + 0x24) = local_188;
    *(longlong *)(puVar7 + 0x28) = lVar14;
  }
LAB_141a48bc8:
  lVar1 = *(longlong *)(param_1[1] + 0x518);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(lVar1 + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x100))(plVar4,*(undefined1 *)(uVar15 + 0x1f),lVar14);
  *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a48c50 FUN_141a48c50 body=919 status=ok
// SIG undefined FUN_141a48c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a48c50(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar2 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *(ushort *)(param_2 + 4);
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      plVar4 = (longlong *)(param_2 + 0x110);
      do {
        uVar8 = 0;
        if (*plVar4 != 0) {
          uVar8 = *(undefined2 *)(*plVar4 + 0x2c);
        }
        plVar4 = plVar4 + 1;
        uVar11 = uVar11 & ~(1 << (uVar2 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = uVar8;
        uVar2 = uVar2 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar2 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar5 = (ulonglong)(0x10 - param_4); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar3 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *(ushort *)(param_2 + 4) = uVar10;
        goto LAB_141a48f68;
      }
    }
  }
  iVar3 = *param_5;
  *param_5 = iVar3 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar3) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar3 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar5 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar2 = (uint)uVar5;
      lVar1 = *(longlong *)(param_2 + 0x110 + uVar5 * 8);
      if (lVar1 == 0) {
        uVar6 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
      }
      local_c8[uVar5] = uVar6;
      uVar11 = uVar2 + 1;
      uVar5 = (ulonglong)uVar11;
      *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) & ~(ushort)(1 << (uVar2 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar4 + 0xb8))(plVar4,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar3 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar3 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar3)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar7 = (undefined1 *)
             ((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar7 = 1;
    *(ulonglong *)(puVar7 + 4) = local_1a8;
    *(undefined8 *)(puVar7 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar7 + 0x14) = local_198;
    *(undefined8 *)(puVar7 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar7 + 0x24) = local_188;
    *(longlong *)(puVar7 + 0x28) = lVar14;
  }
LAB_141a48f68:
  lVar1 = *(longlong *)(param_1[1] + 0x518);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(lVar1 + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x100))(plVar4,*(undefined1 *)(uVar15 + 0x23),lVar14);
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a48ff0 FUN_141a48ff0 body=919 status=ok
// SIG undefined FUN_141a48ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a48ff0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar2 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *(ushort *)(param_2 + 6);
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      plVar4 = (longlong *)(param_2 + 400);
      do {
        uVar8 = 0;
        if (*plVar4 != 0) {
          uVar8 = *(undefined2 *)(*plVar4 + 0x2c);
        }
        plVar4 = plVar4 + 1;
        uVar11 = uVar11 & ~(1 << (uVar2 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = uVar8;
        uVar2 = uVar2 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar2 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar5 = (ulonglong)(0x10 - param_4); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar3 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *(ushort *)(param_2 + 6) = uVar10;
        goto LAB_141a49308;
      }
    }
  }
  iVar3 = *param_5;
  *param_5 = iVar3 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar3) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar3 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar5 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar2 = (uint)uVar5;
      lVar1 = *(longlong *)(param_2 + 400 + uVar5 * 8);
      if (lVar1 == 0) {
        uVar6 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
      }
      local_c8[uVar5] = uVar6;
      uVar11 = uVar2 + 1;
      uVar5 = (ulonglong)uVar11;
      *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) & ~(ushort)(1 << (uVar2 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar4 + 0xb8))(plVar4,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar3 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar3 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar3)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar7 = (undefined1 *)
             ((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar7 = 1;
    *(ulonglong *)(puVar7 + 4) = local_1a8;
    *(undefined8 *)(puVar7 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar7 + 0x14) = local_198;
    *(undefined8 *)(puVar7 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar7 + 0x24) = local_188;
    *(longlong *)(puVar7 + 0x28) = lVar14;
  }
LAB_141a49308:
  lVar1 = *(longlong *)(param_1[1] + 0x518);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(lVar1 + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x100))(plVar4,*(undefined1 *)(uVar15 + 0x13),lVar14);
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a49390 FUN_141a49390 body=919 status=ok
// SIG undefined FUN_141a49390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a49390(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar2 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *(ushort *)(param_2 + 8);
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      plVar4 = (longlong *)(param_2 + 0x210);
      do {
        uVar8 = 0;
        if (*plVar4 != 0) {
          uVar8 = *(undefined2 *)(*plVar4 + 0x2c);
        }
        plVar4 = plVar4 + 1;
        uVar11 = uVar11 & ~(1 << (uVar2 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = uVar8;
        uVar2 = uVar2 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar2 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar5 = (ulonglong)(0x10 - param_4); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar3 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *(ushort *)(param_2 + 8) = uVar10;
        goto LAB_141a496a8;
      }
    }
  }
  iVar3 = *param_5;
  *param_5 = iVar3 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar3) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar3 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar5 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar2 = (uint)uVar5;
      lVar1 = *(longlong *)(param_2 + 0x210 + uVar5 * 8);
      if (lVar1 == 0) {
        uVar6 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
      }
      local_c8[uVar5] = uVar6;
      uVar11 = uVar2 + 1;
      uVar5 = (ulonglong)uVar11;
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) & ~(ushort)(1 << (uVar2 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar4 + 0xb8))(plVar4,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar3 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar3 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar3)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar7 = (undefined1 *)
             ((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar7 = 1;
    *(ulonglong *)(puVar7 + 4) = local_1a8;
    *(undefined8 *)(puVar7 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar7 + 0x14) = local_198;
    *(undefined8 *)(puVar7 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar7 + 0x24) = local_188;
    *(longlong *)(puVar7 + 0x28) = lVar14;
  }
LAB_141a496a8:
  lVar1 = *(longlong *)(param_1[1] + 0x518);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(lVar1 + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0x100))(plVar4,*(undefined1 *)(uVar15 + 0x1b),lVar14);
  *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a49730 FUN_141a49730 body=923 status=ok
// SIG undefined FUN_141a49730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a49730(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar2 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *(ushort *)(param_2 + 10);
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      plVar4 = (longlong *)(param_2 + 0x290);
      do {
        uVar8 = 0;
        if (*plVar4 != 0) {
          uVar8 = *(undefined2 *)(*plVar4 + 0x2c);
        }
        plVar4 = plVar4 + 1;
        uVar11 = uVar11 & ~(1 << (uVar2 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = uVar8;
        uVar2 = uVar2 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar2 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar5 = (ulonglong)(0x10 - param_4); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar3 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *(ushort *)(param_2 + 10) = uVar10;
        goto LAB_141a49a48;
      }
    }
  }
  iVar3 = *param_5;
  *param_5 = iVar3 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar3) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar3 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar5 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar2 = (uint)uVar5;
      lVar1 = *(longlong *)(param_2 + 0x290 + uVar5 * 8);
      if (lVar1 == 0) {
        uVar6 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
      }
      local_c8[uVar5] = uVar6;
      uVar11 = uVar2 + 1;
      uVar5 = (ulonglong)uVar11;
      *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) & ~(ushort)(1 << (uVar2 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar4 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar4 + 0xb8))(plVar4,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar3 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar3 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar3)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar5 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar7 = (undefined1 *)
             ((longlong)(int)((uVar5 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar7 = 1;
    *(ulonglong *)(puVar7 + 4) = local_1a8;
    *(undefined8 *)(puVar7 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar7 + 0x14) = local_198;
    *(undefined8 *)(puVar7 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar7 + 0x24) = local_188;
    *(longlong *)(puVar7 + 0x28) = lVar14;
  }
LAB_141a49a48:
  lVar1 = *(longlong *)(param_1[1] + 0xcc0);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + 0xd0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar4 + 0xf8))(plVar4,*(undefined1 *)(uVar15 + 0x27),lVar14);
  *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a49ad0 FUN_141a49ad0 body=911 status=ok
// SIG undefined FUN_141a49ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a49ad0(longlong *param_1,ushort *param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  uint uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar3 = 0;
  uVar15 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b8[0] = param_4;
  if (param_4 < 0x11) {
    uVar10 = *param_2;
    uVar11 = (uint)uVar10;
    local_1a8 = (ulonglong)param_4;
    if (param_4 != 0) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + 4);
      puVar5 = param_2 + 8;
      do {
        uVar6 = uVar15;
        if (*(longlong *)puVar5 != 0) {
          uVar6 = (ulonglong)*(ushort *)(*(longlong *)puVar5 + 0x2c);
        }
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 & ~(1 << (uVar3 & 0x1f));
        uVar10 = (ushort)uVar11;
        *puVar12 = (short)uVar6;
        uVar3 = uVar3 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar3 < param_4);
    }
    if (param_4 < 0x10) {
      puVar12 = (undefined2 *)((longlong)&local_1a8 + (ulonglong)param_4 * 2 + 4);
      for (uVar6 = (ulonglong)(0x10 - param_4); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
    uVar6 = FUN_141a74790((longlong)&local_1a8 + 4);
    pcVar13 = (char *)((longlong)(int)((uVar6 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b))
                       * 0x30 + param_1[0x3a]);
    if (*pcVar13 != '\0') {
      if (((*(uint *)(pcVar13 + 4) == (uint)local_1a8) &&
          (iVar4 = _guard_xfg_dispatch_icall_nop
                             (pcVar13 + 8,(void *)((longlong)&local_1a8 + 4),
                              (ulonglong)*(uint *)(pcVar13 + 4) * 2), iVar4 == 0)) &&
         ((longlong *)(pcVar13 + 0x28) != (longlong *)0x0)) {
        lVar14 = *(longlong *)(pcVar13 + 0x28);
        *param_2 = uVar10;
        goto LAB_141a49de1;
      }
    }
  }
  iVar4 = *param_5;
  *param_5 = iVar4 + local_1b8[0];
  lVar14 = param_1[9];
  local_1b0 = (ulonglong)(uint)(*(int *)(lVar14 + 0x28) * iVar4) + *(longlong *)(lVar14 + 0x30);
  lVar14 = (ulonglong)(uint)(iVar4 * *(int *)(lVar14 + 0x28)) + *(longlong *)(lVar14 + 0x38);
  uVar6 = uVar15;
  if (local_1b8[0] != 0) {
    do {
      uVar3 = (uint)uVar6;
      if (*(longlong *)(param_2 + uVar6 * 4 + 8) == 0) {
        uVar7 = *(undefined8 *)(param_1[5] + 0x20);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(param_2 + uVar6 * 4 + 8) + 0x20);
      }
      local_c8[uVar6] = uVar7;
      uVar11 = uVar3 + 1;
      uVar6 = (ulonglong)uVar11;
      *param_2 = *param_2 & ~(ushort)(1 << (uVar3 & 0x1f));
    } while (uVar11 < local_1b8[0]);
  }
  local_1d0 = local_c8;
  local_1c0 = 1;
  local_1c8 = 0;
  plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  local_1d8 = local_1b8[0];
  (**(code **)(*plVar2 + 0xb8))(plVar2,1,&local_1b0,local_1b8);
  if (local_1b8[0] < 0x11) {
    uStack_d0 = 0;
    local_178 = (uint)local_1a8;
    uStack_174 = local_1a8._4_4_;
    uStack_170 = (undefined4)uStack_1a0;
    uStack_16c = uStack_1a0._4_4_;
    local_168 = local_198;
    uStack_160 = uStack_190;
    local_158 = local_188;
    _guard_xfg_dispatch_icall_nop(&uStack_150,local_c8,(local_1a8 & 0xffffffff) << 3);
    iVar4 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) < iVar4 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,iVar4)
      ;
    }
    puVar9 = (undefined8 *)((longlong)iVar4 * 0xb0 + param_1[0x3c]);
    *puVar9 = CONCAT44(uStack_174,local_178);
    puVar9[1] = CONCAT44(uStack_16c,uStack_170);
    puVar9[2] = local_168;
    puVar9[3] = uStack_160;
    puVar9[4] = CONCAT44(uStack_154,local_158);
    puVar9[5] = uStack_150;
    puVar9[6] = local_148;
    puVar9[7] = uStack_140;
    puVar9[8] = local_138;
    puVar9[9] = uStack_130;
    puVar9[10] = local_128;
    puVar9[0xb] = uStack_120;
    puVar9[0xc] = local_118;
    puVar9[0xd] = uStack_110;
    puVar9[0xe] = local_108;
    puVar9[0xf] = uStack_100;
    puVar9[0x10] = local_f8;
    puVar9[0x11] = uStack_f0;
    *(undefined4 *)(puVar9 + 0x12) = local_e8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_e4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_dc;
    *(undefined4 *)(puVar9 + 0x14) = local_d8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_d4;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_d0._4_4_;
    uVar6 = FUN_141a74790((longlong)&local_1a8 + 4);
    puVar8 = (undefined1 *)
             ((longlong)(int)((uVar6 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x3b)) * 0x30 +
             param_1[0x3a]);
    *puVar8 = 1;
    *(ulonglong *)(puVar8 + 4) = local_1a8;
    *(undefined8 *)(puVar8 + 0xc) = uStack_1a0;
    *(undefined8 *)(puVar8 + 0x14) = local_198;
    *(undefined8 *)(puVar8 + 0x1c) = uStack_190;
    *(undefined4 *)(puVar8 + 0x24) = local_188;
    *(longlong *)(puVar8 + 0x28) = lVar14;
  }
LAB_141a49de1:
  lVar1 = *(longlong *)(param_1[1] + 0x518);
  if (lVar1 != 0) {
    uVar15 = *(ulonglong *)(lVar1 + 0xd0);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1[1] + 0x468) + 0x28);
  (**(code **)(*plVar2 + 0x100))(plVar2,*(undefined1 *)(uVar15 + 0x17),lVar14);
  *param_2 = *param_2 | -1 << ((byte)local_1b8[0] & 0x1f);
  return;
}



// FUNCTION 141a49e60 FUN_141a49e60 body=456 status=ok
// SIG undefined FUN_141a49e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a49e60(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_d8 [2];
  longlong local_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar13 = 0;
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar5 = param_1[8];
  lVar6 = param_1[1];
  uVar2 = *(uint *)(param_2 + 0x31c);
  lVar10 = lVar6 + 0x460;
  local_d0 = (ulonglong)(uint)(*(int *)(lVar5 + 0x28) * iVar1) + *(longlong *)(lVar5 + 0x30);
  iVar3 = *(int *)(lVar5 + 0x28);
  lVar5 = *(longlong *)(lVar5 + 0x38);
  uVar12 = uVar13;
  local_d8[0] = param_4;
  if (param_4 != 0) {
    do {
      uVar11 = (uint)uVar12;
      if (uVar11 < uVar2) {
LAB_141a49f61:
        local_c8[uVar12] = *(undefined8 *)(param_1[4] + 8);
      }
      else {
        lVar7 = *(longlong *)(uVar12 * 8 + 400 + param_2);
        if (lVar7 == 0) goto LAB_141a49f61;
        local_c8[uVar12] = *(undefined8 *)(lVar7 + 0x28);
        uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x40) + 0x10);
        iVar4 = *(int *)(lVar7 + 0x5c);
        if (iVar4 == 1) {
          FUN_141a60fb0(lVar10,uVar8,8);
        }
        else if (iVar4 == 4) {
          FUN_141a60fb0(lVar10,uVar8,8);
        }
        else if ((iVar4 == 5) || (iVar4 == 8)) {
          FUN_141a60ce0(lVar10,uVar8,8);
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) & ~(ushort)(1 << (uVar11 & 0x1f));
    } while (uVar11 + 1 < local_d8[0]);
  }
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = local_c8;
  local_f8 = local_d8[0];
  plVar9 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  (**(code **)(*plVar9 + 0xb8))(plVar9,1,&local_d0,local_d8);
  if (*(longlong *)(param_1[1] + 0x518) != 0) {
    uVar13 = *(ulonglong *)(*(longlong *)(param_1[1] + 0x518) + 0xd0);
  }
  plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x468) + 0x28);
  (**(code **)(*plVar9 + 0x100))
            (plVar9,*(undefined1 *)(uVar13 + 0x28),(ulonglong)(uint)(iVar3 * iVar1) + lVar5);
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | -1 << ((byte)local_d8[0] & 0x1f);
  return;
}



// FUNCTION 141a4a030 FUN_141a4a030 body=460 status=ok
// SIG undefined FUN_141a4a030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a4a030(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_d8 [2];
  longlong local_d0;
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar13 = 0;
  iVar1 = *param_5;
  *param_5 = iVar1 + param_4;
  lVar5 = param_1[8];
  lVar6 = param_1[1];
  uVar2 = *(uint *)(param_2 + 0x324);
  lVar10 = lVar6 + 0x460;
  local_d0 = (ulonglong)(uint)(*(int *)(lVar5 + 0x28) * iVar1) + *(longlong *)(lVar5 + 0x30);
  iVar3 = *(int *)(lVar5 + 0x28);
  lVar5 = *(longlong *)(lVar5 + 0x38);
  uVar12 = uVar13;
  local_d8[0] = param_4;
  if (param_4 != 0) {
    do {
      uVar11 = (uint)uVar12;
      if (uVar11 < uVar2) {
LAB_141a4a131:
        local_c8[uVar12] = *(undefined8 *)(param_1[4] + 8);
      }
      else {
        lVar7 = *(longlong *)(uVar12 * 8 + 0x290 + param_2);
        if (lVar7 == 0) goto LAB_141a4a131;
        local_c8[uVar12] = *(undefined8 *)(lVar7 + 0x28);
        uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x40) + 0x10);
        iVar4 = *(int *)(lVar7 + 0x5c);
        if (iVar4 == 1) {
          FUN_141a60fb0(lVar10,uVar8,8);
        }
        else if (iVar4 == 4) {
          FUN_141a60fb0(lVar10,uVar8,8);
        }
        else if ((iVar4 == 5) || (iVar4 == 8)) {
          FUN_141a60ce0(lVar10,uVar8,8);
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) & ~(ushort)(1 << (uVar11 & 0x1f));
    } while (uVar11 + 1 < local_d8[0]);
  }
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = local_c8;
  local_f8 = local_d8[0];
  plVar9 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
  (**(code **)(*plVar9 + 0xb8))(plVar9,1,&local_d0,local_d8);
  if (*(longlong *)(param_1[1] + 0xcc0) != 0) {
    uVar13 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1[1] + 0xcc0) + 0x18) + 0xd0);
  }
  plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x468) + 0x28);
  (**(code **)(*plVar9 + 0xf8))
            (plVar9,*(undefined1 *)(uVar13 + 0x28),(ulonglong)(uint)(iVar3 * iVar1) + lVar5);
  *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) | -1 << ((byte)local_d8[0] & 0x1f);
  return;
}



// FUNCTION 141a4a200 FUN_141a4a200 body=347 status=ok
// SIG undefined FUN_141a4a200(void)

void FUN_141a4a200(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((*(byte *)(param_3 + 0x28) & 6) == 0) && ((*(byte *)(param_3 + 0x158) & 2) == 0)) {
    if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
      FUN_141a7d760(param_1,*(undefined8 *)(param_3 + 0x50),
                    *(int *)(param_3 + 0x150) + *(int *)(param_3 + 0x88),
                    *(undefined8 *)(param_3 + 0xe0),*(undefined4 *)(param_3 + 0x118),
                    *(undefined4 *)(param_3 + 0x154));
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 0x14;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa8);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar4 + 0x14;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      uVar1 = *(undefined4 *)(param_3 + 0x154);
      uVar2 = *(undefined4 *)(param_3 + 0x150);
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_144da71f0;
      FUN_141a67840(puVar4 + 2,0);
      *(undefined4 *)(puVar4 + 0x13) = uVar1;
      puVar4[0x12] = param_3 + 0x40;
      *(undefined4 *)((longlong)puVar4 + 0x9c) = uVar2;
      FUN_141a7d3c0(puVar4 + 2,param_3 + 0xd0);
    }
  }
  FUN_141a6c420(param_3 + 0xd0);
  *(uint *)(param_3 + 0x158) = *(uint *)(param_3 + 0x158) & 0xfffffffc;
  *(undefined8 *)(param_3 + 0x150) = 0;
  return;
}



// FUNCTION 141a4a360 FUN_141a4a360 body=347 status=ok
// SIG undefined FUN_141a4a360(void)

void FUN_141a4a360(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((*(byte *)(param_3 + 0x24) & 6) == 0) && ((*(byte *)(param_3 + 0x150) & 2) == 0)) {
    if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
      FUN_141a7d760(param_1,*(undefined8 *)(param_3 + 0x48),
                    *(int *)(param_3 + 0x148) + *(int *)(param_3 + 0x80),
                    *(undefined8 *)(param_3 + 0xd8),*(undefined4 *)(param_3 + 0x110),
                    *(undefined4 *)(param_3 + 0x14c));
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 0x14;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa8);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar4 + 0x14;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      uVar1 = *(undefined4 *)(param_3 + 0x14c);
      uVar2 = *(undefined4 *)(param_3 + 0x148);
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_144da71f0;
      FUN_141a67840(puVar4 + 2,0);
      *(undefined4 *)(puVar4 + 0x13) = uVar1;
      puVar4[0x12] = param_3 + 0x38;
      *(undefined4 *)((longlong)puVar4 + 0x9c) = uVar2;
      FUN_141a7d3c0(puVar4 + 2,param_3 + 200);
    }
  }
  FUN_141a6c420(param_3 + 200);
  *(uint *)(param_3 + 0x150) = *(uint *)(param_3 + 0x150) & 0xfffffffc;
  *(undefined8 *)(param_3 + 0x148) = 0;
  return;
}



// FUNCTION 141a4a4c0 FUN_141a4a4c0 body=583 status=ok
// SIG undefined FUN_141a4a4c0(void)

void FUN_141a4a4c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  
  lVar5 = (longlong)param_3 - (longlong)param_1 >> 4;
  if (lVar5 < 0x29) {
    bVar7 = *(byte *)((longlong)param_2 + 0xc);
    if ((*(byte *)((longlong)param_1 + 0xc) < bVar7) ||
       (*(int *)(param_2 + 1) < *(int *)(param_1 + 1))) {
      uVar2 = param_1[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      bVar7 = *(byte *)((longlong)param_2 + 0xc);
    }
    if ((bVar7 < *(byte *)((longlong)param_3 + 0xc)) ||
       (*(int *)(param_3 + 1) < *(int *)(param_2 + 1))) {
      uVar2 = param_2[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *param_2;
      param_3[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if ((*(byte *)((longlong)param_1 + 0xc) < *(byte *)((longlong)param_2 + 0xc)) ||
         (*(int *)(param_2 + 1) < *(int *)(param_1 + 1))) {
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
    bVar7 = *(byte *)(lVar5 * 0x10 + 0xc + (longlong)param_1);
    puVar1 = param_1 + lVar5 * 2;
    if ((*(byte *)((longlong)param_1 + 0xc) < bVar7) ||
       (*(int *)(puVar1 + 1) < *(int *)(param_1 + 1))) {
      uVar2 = param_1[1];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      *puVar1 = *param_1;
      puVar1[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      bVar7 = *(byte *)((longlong)puVar1 + 0xc);
    }
    if ((bVar7 < *(byte *)(lVar5 * 0x20 + 0xc + (longlong)param_1)) ||
       (*(int *)(param_1 + lVar5 * 4 + 1) < *(int *)(puVar1 + 1))) {
      uVar2 = puVar1[1];
      uVar3 = param_1[lVar5 * 4];
      uVar4 = (param_1 + lVar5 * 4)[1];
      param_1[lVar5 * 4] = *puVar1;
      (param_1 + lVar5 * 4)[1] = uVar2;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      if ((*(byte *)((longlong)param_1 + 0xc) < *(byte *)((longlong)puVar1 + 0xc)) ||
         (*(int *)(puVar1 + 1) < *(int *)(param_1 + 1))) {
        uVar2 = param_1[1];
        *puVar1 = *param_1;
        puVar1[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
    bVar7 = *(byte *)((longlong)param_2 + 0xc);
    puVar6 = param_2 + lVar5 * -2;
    if ((*(byte *)((longlong)puVar6 + 0xc) < bVar7) ||
       (*(int *)(param_2 + 1) < *(int *)(puVar6 + 1))) {
      uVar2 = puVar6[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *puVar6;
      param_2[1] = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      bVar7 = *(byte *)((longlong)param_2 + 0xc);
    }
    if ((bVar7 < *(byte *)(lVar5 * 0x10 + 0xc + (longlong)param_2)) ||
       (*(int *)(param_2 + lVar5 * 2 + 1) < *(int *)(param_2 + 1))) {
      uVar2 = param_2[1];
      uVar3 = param_2[lVar5 * 2];
      uVar4 = (param_2 + lVar5 * 2)[1];
      param_2[lVar5 * 2] = *param_2;
      (param_2 + lVar5 * 2)[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if ((*(byte *)((longlong)puVar6 + 0xc) < *(byte *)((longlong)param_2 + 0xc)) ||
         (*(int *)(param_2 + 1) < *(int *)(puVar6 + 1))) {
        uVar2 = puVar6[1];
        *param_2 = *puVar6;
        param_2[1] = uVar2;
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
      }
    }
    puVar6 = param_3 + lVar5 * -2;
    puVar8 = param_3 + lVar5 * -4;
    bVar7 = *(byte *)((longlong)puVar6 + 0xc);
    if ((*(byte *)((longlong)puVar8 + 0xc) < bVar7) || (*(int *)(puVar6 + 1) < *(int *)(puVar8 + 1))
       ) {
      uVar2 = puVar8[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      bVar7 = *(byte *)((longlong)puVar6 + 0xc);
    }
    if ((bVar7 < *(byte *)((longlong)param_3 + 0xc)) ||
       (*(int *)(param_3 + 1) < *(int *)(puVar6 + 1))) {
      uVar2 = puVar6[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *puVar6;
      param_3[1] = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      if ((*(byte *)((longlong)puVar8 + 0xc) < *(byte *)((longlong)puVar6 + 0xc)) ||
         (*(int *)(puVar6 + 1) < *(int *)(puVar8 + 1))) {
        uVar2 = puVar8[1];
        *puVar6 = *puVar8;
        puVar6[1] = uVar2;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
      }
    }
    bVar7 = *(byte *)((longlong)param_2 + 0xc);
    if ((*(byte *)((longlong)puVar1 + 0xc) < bVar7) ||
       (*(int *)(param_2 + 1) < *(int *)(puVar1 + 1))) {
      uVar2 = puVar1[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      bVar7 = *(byte *)((longlong)param_2 + 0xc);
    }
    if ((bVar7 < *(byte *)((longlong)puVar6 + 0xc)) ||
       (*(int *)(puVar6 + 1) < *(int *)(param_2 + 1))) {
      uVar2 = param_2[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      *puVar6 = *param_2;
      puVar6[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if ((*(byte *)((longlong)puVar1 + 0xc) < *(byte *)((longlong)param_2 + 0xc)) ||
         (*(int *)(param_2 + 1) < *(int *)(puVar1 + 1))) {
        uVar2 = puVar1[1];
        *param_2 = *puVar1;
        param_2[1] = uVar2;
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        return;
      }
    }
  }
  return;
}



// FUNCTION 141a4a710 FUN_141a4a710 body=245 status=ok
// SIG undefined FUN_141a4a710(void)

void FUN_141a4a710(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar7) {
    lVar6 = lVar4 * 0x20 + param_1;
    if ((*(byte *)(lVar6 + 0x1c) < *(byte *)(lVar6 + 0x2c)) ||
       (lVar5 = 2, *(int *)(lVar6 + 0x28) < *(int *)(lVar6 + 0x18))) {
      lVar5 = 1;
    }
    lVar5 = lVar4 * 2 + lVar5;
    puVar1 = (undefined8 *)(param_1 + lVar5 * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    lVar4 = lVar5;
  }
  if ((lVar4 == lVar7) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    uVar3 = puVar2[1];
    puVar1 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar4 = param_3 - 1;
  }
  while ((param_2 < lVar4 &&
         ((lVar7 = lVar4 + -1 >> 1,
          *(byte *)((longlong)param_4 + 0xc) < *(byte *)(param_1 + 0xc + lVar7 * 0x10) ||
          (*(int *)(param_1 + 8 + lVar7 * 0x10) < *(int *)(param_4 + 1)))))) {
    puVar1 = (undefined8 *)(param_1 + lVar7 * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar4 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    lVar4 = lVar7;
  }
  uVar3 = param_4[1];
  puVar1 = (undefined8 *)(param_1 + lVar4 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141a4a810 FUN_141a4a810 body=1177 status=ok
// SIG undefined FUN_141a4a810(void)

void FUN_141a4a810(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  lVar13 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar14 = lVar13 >> 4;
    if (lVar14 < 0x21) {
LAB_141a4aa6b:
      if ((1 < lVar14) && (param_1 != param_2)) {
        for (puVar11 = param_1 + 2; puVar11 != param_2; puVar11 = puVar11 + 2) {
          local_28 = *(undefined4 *)puVar11;
          uStack_24 = *(undefined4 *)((longlong)puVar11 + 4);
          local_38 = *puVar11;
          iStack_20 = *(int *)(puVar11 + 1);
          uStack_1c = *(undefined4 *)((longlong)puVar11 + 0xc);
          uStack_30 = puVar11[1];
          if ((*(byte *)((longlong)param_1 + 0xc) < (byte)uStack_1c) ||
             (puVar5 = puVar11, iStack_20 < *(int *)(param_1 + 1))) {
            _guard_xfg_dispatch_icall_nop(param_1 + 2,param_1,(longlong)puVar11 - (longlong)param_1)
            ;
            *param_1 = CONCAT44(uStack_24,local_28);
            param_1[1] = CONCAT44(uStack_1c,iStack_20);
          }
          else {
            while ((*(byte *)((longlong)puVar5 + -4) < (byte)uStack_1c ||
                   (iStack_20 < *(int *)(puVar5 + -1)))) {
              *puVar5 = puVar5[-2];
              puVar5[1] = puVar5[-1];
              puVar5 = puVar5 + -2;
            }
            *(undefined4 *)puVar5 = local_28;
            *(undefined4 *)((longlong)puVar5 + 4) = uStack_24;
            *(int *)(puVar5 + 1) = iStack_20;
            *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_1c;
          }
        }
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar14) {
        uVar15 = (longlong)param_2 - (longlong)param_1 >> 4;
        lVar13 = (longlong)param_2 - (longlong)param_1 >> 5;
        if (0 < lVar13) {
          lVar14 = (longlong)(uVar15 - 1) >> 1;
          puVar11 = param_1 + lVar13 * 2;
          do {
            uVar1 = puVar11[-2];
            uVar3 = puVar11[-1];
            lVar13 = lVar13 + -1;
            puVar11 = puVar11 + -2;
            lVar10 = lVar13;
            while (lVar10 < lVar14) {
              if ((*(byte *)((longlong)param_1 + lVar10 * 0x20 + 0x1c) <
                   *(byte *)((longlong)param_1 + lVar10 * 0x20 + 0x2c)) ||
                 (lVar6 = 2, *(int *)(param_1 + lVar10 * 4 + 5) < *(int *)(param_1 + lVar10 * 4 + 3)
                 )) {
                lVar6 = 1;
              }
              lVar6 = lVar6 + lVar10 * 2;
              uVar2 = (param_1 + lVar6 * 2)[1];
              param_1[lVar10 * 2] = param_1[lVar6 * 2];
              (param_1 + lVar10 * 2)[1] = uVar2;
              lVar10 = lVar6;
            }
            if ((lVar10 == lVar14) && ((uVar15 & 1) == 0)) {
              uVar2 = (param_1 + uVar15 * 2 + -2)[1];
              param_1[lVar10 * 2] = param_1[uVar15 * 2 + -2];
              (param_1 + lVar10 * 2)[1] = uVar2;
              lVar10 = uVar15 - 1;
            }
            if (lVar13 < lVar10) {
              uStack_30._4_1_ = (byte)((ulonglong)uVar3 >> 0x20);
              uStack_30._0_4_ = (int)uVar3;
              do {
                lVar6 = lVar10 + -1 >> 1;
                if ((*(byte *)((longlong)param_1 + lVar6 * 0x10 + 0xc) <= uStack_30._4_1_) &&
                   ((int)uStack_30 <= *(int *)(param_1 + lVar6 * 2 + 1))) break;
                uVar2 = (param_1 + lVar6 * 2)[1];
                param_1[lVar10 * 2] = param_1[lVar6 * 2];
                (param_1 + lVar10 * 2)[1] = uVar2;
                lVar10 = lVar6;
              } while (lVar13 < lVar6);
            }
            param_1[lVar10 * 2] = uVar1;
            (param_1 + lVar10 * 2)[1] = uVar3;
          } while (0 < lVar13);
        }
        if ((longlong)uVar15 < 2) {
          return;
        }
        param_2 = param_2 + -2;
        do {
          if (1 < (longlong)uVar15) {
            local_38 = *param_2;
            uStack_30 = param_2[1];
            uVar1 = param_1[1];
            *param_2 = *param_1;
            param_2[1] = uVar1;
            FUN_141a4a710(param_1,0,(longlong)param_2 - (longlong)param_1 >> 4,&local_38,param_4);
          }
          param_2 = param_2 + -2;
          uVar15 = (longlong)param_2 + (0x10 - (longlong)param_1) >> 4;
        } while (1 < (longlong)uVar15);
        return;
      }
      goto LAB_141a4aa6b;
    }
    puVar5 = param_1 + (lVar13 >> 5) * 2;
    FUN_141a4a4c0(param_1,puVar5,param_2 + -2,param_4);
    puVar11 = puVar5 + 2;
    if (param_1 < puVar5) {
      while( true ) {
        if (*(byte *)((longlong)puVar5 + 0xc) < *(byte *)((longlong)puVar5 + -4)) break;
        if ((((*(int *)(puVar5 + -1) < *(int *)(puVar5 + 1)) ||
             (*(byte *)((longlong)puVar5 + -4) < *(byte *)((longlong)puVar5 + 0xc))) ||
            (*(int *)(puVar5 + 1) < *(int *)(puVar5 + -1))) ||
           (puVar5 = puVar5 + -2, puVar5 <= param_1)) break;
      }
    }
    puVar4 = puVar11;
    puVar8 = puVar5;
    if (puVar11 < param_2) {
      while (puVar4 = puVar11,
            *(byte *)((longlong)puVar11 + 0xc) <= *(byte *)((longlong)puVar5 + 0xc)) {
        if (((*(int *)(puVar11 + 1) < *(int *)(puVar5 + 1)) ||
            (*(byte *)((longlong)puVar11 + 0xc) < *(byte *)((longlong)puVar5 + 0xc))) ||
           ((*(int *)(puVar5 + 1) < *(int *)(puVar11 + 1) ||
            (puVar11 = puVar11 + 2, puVar4 = puVar11, param_2 <= puVar11)))) break;
      }
    }
joined_r0x000141a4a8e3:
    puVar9 = puVar8;
    if (puVar11 < param_2) {
      puVar12 = puVar4;
      if (*(byte *)((longlong)puVar5 + 0xc) <= *(byte *)((longlong)puVar11 + 0xc)) {
        if (*(int *)(puVar11 + 1) <= *(int *)(puVar5 + 1)) {
          if ((*(byte *)((longlong)puVar5 + 0xc) < *(byte *)((longlong)puVar11 + 0xc)) ||
             (*(int *)(puVar11 + 1) < *(int *)(puVar5 + 1))) goto joined_r0x000141a4a939;
          puVar12 = puVar4 + 2;
          if (puVar4 != puVar11) {
            uVar1 = puVar11[1];
            uVar3 = *puVar4;
            uVar2 = puVar4[1];
            *puVar4 = *puVar11;
            puVar4[1] = uVar1;
            *puVar11 = uVar3;
            puVar11[1] = uVar2;
          }
        }
      }
      puVar11 = puVar11 + 2;
      puVar4 = puVar12;
      goto joined_r0x000141a4a8e3;
    }
joined_r0x000141a4a939:
    for (; param_1 < puVar8; puVar8 = puVar8 + -2) {
      puVar7 = puVar9 + -2;
      puVar12 = puVar5;
      if (*(byte *)((longlong)puVar9 + -4) <= *(byte *)((longlong)puVar5 + 0xc)) {
        if (*(int *)(puVar5 + 1) <= *(int *)(puVar9 + -1)) {
          if ((*(byte *)((longlong)puVar9 + -4) < *(byte *)((longlong)puVar5 + 0xc)) ||
             (*(int *)(puVar5 + 1) < *(int *)(puVar9 + -1))) break;
          puVar12 = puVar5 + -2;
          if (puVar12 != puVar7) {
            uVar1 = puVar9[-1];
            uVar3 = *puVar12;
            uVar2 = puVar5[-1];
            *puVar12 = *puVar7;
            puVar5[-1] = uVar1;
            *puVar7 = uVar3;
            puVar9[-1] = uVar2;
          }
        }
      }
      puVar9 = puVar7;
      puVar5 = puVar12;
    }
    if (puVar8 != param_1) {
      puVar9 = puVar8 + -2;
      if (puVar11 == param_2) {
        puVar12 = puVar5 + -2;
        if (puVar9 != puVar12) {
          uVar1 = puVar5[-1];
          uVar3 = *puVar9;
          uVar2 = puVar8[-1];
          *puVar9 = *puVar12;
          puVar8[-1] = uVar1;
          *puVar12 = uVar3;
          puVar5[-1] = uVar2;
        }
        uVar1 = puVar4[-1];
        uVar3 = *puVar12;
        uVar2 = puVar5[-1];
        *puVar12 = puVar4[-2];
        puVar5[-1] = uVar1;
        puVar4[-2] = uVar3;
        puVar4[-1] = uVar2;
        puVar4 = puVar4 + -2;
        puVar5 = puVar12;
        puVar8 = puVar9;
      }
      else {
        uVar3 = *puVar11;
        uVar2 = puVar11[1];
        uVar1 = puVar8[-1];
        *puVar11 = *puVar9;
        puVar11[1] = uVar1;
        puVar11 = puVar11 + 2;
        *puVar9 = uVar3;
        puVar8[-1] = uVar2;
        puVar8 = puVar9;
      }
      goto joined_r0x000141a4a8e3;
    }
    if (puVar11 != param_2) {
      if (puVar4 != puVar11) {
        uVar1 = puVar4[1];
        uVar3 = *puVar5;
        uVar2 = puVar5[1];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        *puVar4 = uVar3;
        puVar4[1] = uVar2;
      }
      uVar1 = puVar11[1];
      uVar3 = *puVar5;
      uVar2 = puVar5[1];
      *puVar5 = *puVar11;
      puVar5[1] = uVar1;
      *puVar11 = uVar3;
      puVar11[1] = uVar2;
      puVar11 = puVar11 + 2;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
      goto joined_r0x000141a4a8e3;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)puVar5 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - (longlong)puVar4 & 0xfffffffffffffff0U)) {
      FUN_141a4a810(param_1,puVar5,param_3,param_4);
      param_1 = puVar4;
      puVar5 = param_2;
    }
    else {
      FUN_141a4a810(puVar4,param_2,param_3,param_4);
    }
    lVar13 = (longlong)puVar5 - (longlong)param_1;
    param_2 = puVar5;
  } while( true );
}



// FUNCTION 141a4acb0 FUN_141a4acb0 body=978 status=ok
// SIG undefined FUN_141a4acb0(void)

undefined8 * FUN_141a4acb0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *local_18;
  longlong *local_10;
  
  puVar10 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144da7068;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  lVar12 = 2;
  puVar9 = param_1 + 9;
  do {
    puVar13 = param_2;
    puVar8 = puVar9;
    uVar7 = puVar13[1];
    *puVar8 = *puVar13;
    puVar8[1] = uVar7;
    uVar7 = puVar13[3];
    puVar8[2] = puVar13[2];
    puVar8[3] = uVar7;
    uVar7 = puVar13[5];
    puVar8[4] = puVar13[4];
    puVar8[5] = uVar7;
    uVar7 = puVar13[7];
    puVar8[6] = puVar13[6];
    puVar8[7] = uVar7;
    uVar7 = puVar13[9];
    puVar8[8] = puVar13[8];
    puVar8[9] = uVar7;
    uVar7 = puVar13[0xb];
    puVar8[10] = puVar13[10];
    puVar8[0xb] = uVar7;
    uVar7 = puVar13[0xd];
    puVar8[0xc] = puVar13[0xc];
    puVar8[0xd] = uVar7;
    uVar7 = puVar13[0xf];
    puVar8[0xe] = puVar13[0xe];
    puVar8[0xf] = uVar7;
    lVar12 = lVar12 + -1;
    puVar9 = puVar8 + 0x10;
    param_2 = puVar13 + 0x10;
  } while (lVar12 != 0);
  uVar7 = puVar13[0x11];
  puVar8[0x10] = puVar13[0x10];
  puVar8[0x11] = uVar7;
  uVar7 = puVar13[0x13];
  puVar8[0x12] = puVar13[0x12];
  puVar8[0x13] = uVar7;
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0xa4);
  uVar5 = *(undefined4 *)(puVar13 + 0x15);
  uVar6 = *(undefined4 *)((longlong)puVar13 + 0xac);
  *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar13 + 0x14);
  *(undefined4 *)((longlong)puVar8 + 0xa4) = uVar4;
  *(undefined4 *)(puVar8 + 0x15) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0xac) = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0xb4);
  uVar5 = *(undefined4 *)(puVar13 + 0x17);
  uVar6 = *(undefined4 *)((longlong)puVar13 + 0xbc);
  *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar13 + 0x16);
  *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar4;
  *(undefined4 *)(puVar8 + 0x17) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0xbc) = uVar6;
  param_1[0x31] = 0;
  param_1[0x32] = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x33));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x33),4000);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  FUN_141a94aa0(param_1 + 0x42,param_1);
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd8] = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd9),4000);
  puVar9 = (undefined8 *)operator_new(0x10);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar10 = puVar9;
  }
  param_1[0xdf] = puVar10;
  param_1[0xde] = puVar10;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  FD3D12DeferredDeletionQueue::FD3D12DeferredDeletionQueue(param_1 + 0xe8,param_1);
  FUN_141a4b940(param_1 + 0xf6,param_1,1,0);
  param_1[0x12d] = 0;
  param_1[0xf6] = &PTR_FUN_144da6cc0;
  param_1[0xf7] = &PTR_StartProfileThreadUsage_144da6fe8;
  FUN_141a4b940(param_1 + 0x12e,param_1,0,1);
  param_1[0x12e] = &PTR_FUN_144da6cc0;
  param_1[0x12f] = &PTR_StartProfileThreadUsage_144da6fe8;
  param_1[0x165] = 0;
  FUN_141a4cbf0(param_1 + 0x166,param_1);
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd24) = 0;
  param_1[0x1a6] = 0;
  *(undefined4 *)(param_1 + 0x1a7) = 0;
  plVar11 = (longlong *)FUN_141a46a00();
  plVar1 = plVar11 + 2;
  local_18 = plVar1;
  local_10 = plVar11;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_18,plVar1);
  param_1[0x1a8] = plVar1;
  param_1[0x1a9] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  param_1[0x1aa] = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1ac));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1ac),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b1),4000);
  param_1[0x1b6] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  *(undefined4 *)(param_1 + 0x1bd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdec) = 0;
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1;
}



// FUNCTION 141a4b090 FUN_141a4b090 body=436 status=ok
// SIG undefined FUN_141a4b090(void)

undefined8 *
FUN_141a4b090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
             uint param_13,uint param_14)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  
  param_1[1] = param_3;
  *param_1 = &PTR_FUN_144da6570;
  *(undefined4 *)(param_1 + 2) = param_11;
  FString::FString(param_1 + 3,param_4);
  *(undefined4 *)(param_1 + 5) = param_6;
  *(undefined4 *)(param_1 + 6) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  *param_1 = &PTR_FUN_144da6598;
  *(uint *)(param_1 + 0xc) = param_13;
  *(uint *)((longlong)param_1 + 100) = param_14;
  param_1[0x10] = param_2;
  plVar1 = param_1 + 0x15;
  *(uint *)(param_1 + 0xd) = param_13 / param_14;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_7;
  *(undefined4 *)(param_1 + 0xe) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_5;
  *(undefined1 *)(param_1 + 0xf) = param_12;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *plVar1 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  }
  uVar2 = *(uint *)(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar3 = *(int *)(param_1 + 0x16);
  *(int *)(param_1 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xb4) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = (ulonglong)uVar2 << 0x20;
  LOCK();
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_1 + 0xd);
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return param_1;
}



// FUNCTION 141a4b250 FUN_141a4b250 body=163 status=ok
// SIG undefined FUN_141a4b250(void)

longlong * FUN_141a4b250(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  plVar1 = (longlong *)*param_1;
  *param_1 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2,*param_3,&DAT_144da7240,param_1);
  if (iVar2 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar2,
                  "InDevice->CreateCommandAllocator(InType, IID_PPV_ARGS(CommandAllocator.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                  ,0x9e,0,&local_18);
  }
  return param_1;
}



// FUNCTION 141a4b300 FUN_141a4b300 body=1589 status=ok
// SIG undefined FUN_141a4b300(void)

undefined8 *
FUN_141a4b300(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar5 = param_5;
  cVar4 = (char)param_5;
  FUN_141a4b940(param_1,*(undefined8 *)(param_2 + 0x10),param_4,(char)param_5);
  param_1[0x37] = param_2;
  *param_1 = &PTR_FUN_144da6950;
  param_1[1] = &PTR_StartProfileThreadUsage_144da6c98;
  iVar8 = DAT_1464c113c;
  if ((cVar4 == '\0') && (iVar8 = DAT_1464c1134, param_4 == '\0')) {
    iVar8 = DAT_1464c1138;
  }
  puVar2 = param_1 + 0x38;
  FUN_141a4c410(puVar2,param_2,iVar8 << 10);
  param_1[0x8c] = &PTR_FUN_144da6378;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_5 = (uVar5 & 0xff) * 2;
  FD3D12CommandAllocatorManager::FD3D12CommandAllocatorManager(param_1 + 0x90,param_2,&param_5);
  FUN_141a67ea0(param_1 + 0x9c);
  plVar9 = param_1 + 0x526;
  uVar5 = 0;
  param_1[0x4aa] = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10);
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  *plVar9 = 0;
  param_1[0x527] = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  param_1[0x52a] = 0;
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  param_1[0x52d] = 0;
  param_1[0x52e] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  param_1[0x532] = 0;
  param_1[0x533] = 0;
  param_1[0x534] = 0;
  param_1[0x535] = 0;
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  param_1[0x538] = 0;
  param_1[0x539] = 0;
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  param_1[0x540] = 0;
  param_1[0x541] = 0;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  param_1[0x544] = 0;
  param_1[0x545] = 0;
  param_1[0x546] = 0;
  param_1[0x547] = 0;
  param_1[0x548] = 0;
  param_1[0x549] = 0;
  param_1[0x54a] = 0;
  param_1[0x54b] = 0;
  param_1[0x54c] = 0;
  param_1[0x54d] = 0;
  param_1[0x54e] = 0;
  param_1[0x54f] = 0;
  param_1[0x550] = 0;
  param_1[0x551] = 0;
  param_1[0x552] = 0;
  param_1[0x553] = 0;
  param_1[0x554] = 0;
  param_1[0x555] = 0;
  param_1[0x556] = 0;
  param_1[0x557] = 0;
  param_1[0x558] = 0;
  param_1[0x559] = 0;
  param_1[0x55a] = 0;
  param_1[0x55b] = 0;
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0;
  param_1[0x55f] = 0;
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  param_1[0x562] = 0;
  param_1[0x563] = 0;
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x566] = 0;
  param_1[0x567] = 0;
  param_1[0x568] = 0;
  param_1[0x569] = 0;
  param_1[0x56a] = 0;
  param_1[0x56b] = 0;
  param_1[0x56c] = 0;
  param_1[0x56d] = 0;
  param_1[0x56e] = 0;
  param_1[0x56f] = 0;
  param_1[0x570] = 0;
  param_1[0x571] = 0;
  param_1[0x572] = 0;
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  param_1[0x576] = 0;
  param_1[0x577] = 0;
  param_1[0x578] = 0;
  param_1[0x579] = 0;
  param_1[0x57a] = 0;
  param_1[0x57b] = 0;
  param_1[0x57c] = 0;
  param_1[0x57d] = 0;
  param_1[0x57e] = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  param_1[0x583] = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c3c) = 0x22;
  *(undefined2 *)(param_1 + 0x588) = 0;
  FUN_141a666a0(param_1 + 0x58c,param_2);
  FUN_141a666a0(param_1 + 0x59e);
  param_1[0x5b2] = param_2;
  param_1[0x5b0] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x7b4] = 0;
  *(undefined1 *)(param_1 + 0x7b5) = 0;
  param_1[0x7b6] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x5b4,0,0x1000);
  param_1[0x7ba] = param_2;
  param_1[0x7b8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x9bc] = 0;
  *(undefined1 *)(param_1 + 0x9bd) = 0;
  param_1[0x9be] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x7bc,0,0x1000);
  param_1[0x9c2] = param_2;
  param_1[0x9c0] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0xbc4] = 0;
  *(undefined1 *)(param_1 + 0xbc5) = 0;
  param_1[0xbc6] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x9c4,0,0x1000);
  param_1[0xbca] = param_2;
  param_1[0xbc8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0xdcc] = 0;
  *(undefined1 *)(param_1 + 0xdcd) = 0;
  param_1[0xdce] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xbcc,0,0x1000);
  param_1[0xdd2] = param_2;
  param_1[0xdd0] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0xfd4] = 0;
  *(undefined1 *)(param_1 + 0xfd5) = 0;
  param_1[0xfd6] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xdd4,0,0x1000);
  param_1[0xfda] = param_2;
  param_1[0xfd8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x11dc] = 0;
  *(undefined1 *)(param_1 + 0x11dd) = 0;
  param_1[0x11de] = puVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xfdc,0,0x1000);
  param_1[0x586] = 0;
  *(undefined4 *)(param_1 + 0x587) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x4c6,0,0x300);
  do {
    uVar6 = 0;
    plVar7 = plVar9;
    do {
      puVar2 = (undefined8 *)*plVar7;
      *plVar7 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar10 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar10) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar10) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2);
          }
        }
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 < 0x10);
    uVar5 = uVar5 + 1;
    plVar9 = plVar9 + 0x10;
  } while (uVar5 < 6);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x4ab,0,0xc0);
  FUN_141a74d90(param_1 + 0x9c,param_1[0x37],param_1,0,param_3);
  lVar3 = *(longlong *)(param_1[0x39] + 0x10);
  FUN_141a5e190(param_1 + 0x38);
  param_1[0x4b] = *(undefined8 *)(lVar3 + 0x738);
  param_1[0x4f] = 0;
  return param_1;
}



// FUNCTION 141a4b940 FUN_141a4b940 body=332 status=ok
// SIG undefined FUN_141a4b940(void)

undefined8 *
FUN_141a4b940(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x160);
  param_1[0x2e] = param_2;
  *param_1 = &PTR_FUN_144da6640;
  param_1[1] = &PTR__purecall_144d83e88;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x1a9) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  return param_1;
}



// FUNCTION 141a4ba90 FUN_141a4ba90 body=485 status=ok
// SIG undefined FUN_141a4ba90(void)

longlong *
FUN_141a4ba90(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar1 = param_1 + 5;
  puVar6 = (undefined8 *)0x0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_5;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = (longlong)param_4;
  param_1[8] = 1;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar5 = (undefined8 *)operator_new(0x20);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar6 = puVar5;
  }
  param_1[0xd] = (longlong)puVar6;
  param_1[0xc] = (longlong)puVar6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  plVar2 = (longlong *)*plVar1;
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x18);
  *plVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,0,(int)param_1[4],*param_4,0,&DAT_144da7220,plVar1);
  if (iVar4 < 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_141a94000(iVar4,
                  "ParentDevice->GetDevice()->CreateCommandList(0, CommandListType, CommandAllocator, nullptr, IID_PPV_ARGS(CommandList.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                  ,0x3c,0,&local_38);
  }
  plVar2 = (longlong *)param_1[6];
  puVar6 = (undefined8 *)*plVar1;
  param_1[6] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  (**(code **)*puVar6)(puVar6,&DAT_144da7230,param_1 + 6);
  FUN_141a52670(param_1);
  if (*(int *)((longlong)param_1 + 0xa4) < 0x100) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x13,0x100);
  }
  return param_1;
}



// FUNCTION 141a4bc80 FUN_141a4bc80 body=462 status=ok
// SIG undefined FUN_141a4bc80(void)

undefined8 * FUN_141a4bc80(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FD3D12ThreadLocalOnlineHeap::FD3D12ThreadLocalOnlineHeap(param_1 + 0xc,0,param_1);
  param_1[0x23] = 0;
  param_1[0x24] = param_1;
  param_1[0x25] = &PTR_FUN_144da6378;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x22] = &PTR_FUN_144da6520;
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = &PTR_FUN_144da6378;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = 1;
    puVar3 = puVar2;
  }
  param_1[0x31] = puVar3;
  param_1[0x30] = puVar3;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = &PTR_FUN_144da6378;
  plVar1 = param_1 + 0x3a;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 1;
  *plVar1 = 0;
  param_1[0x3b] = 0x10f;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,0);
  puVar3 = puVar4;
  if (0 < *(int *)(param_1 + 0x3b)) {
    do {
      uVar5 = (int)puVar3 + 1;
      *(undefined1 *)((longlong)puVar4 + *plVar1) = 0;
      puVar4 = puVar4 + 6;
      puVar3 = (undefined8 *)(ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x3b));
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 141a4be50 FUN_141a4be50 body=1369 status=ok
// SIG undefined FUN_141a4be50(void)

undefined8 * FUN_141a4be50(undefined8 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144da7058;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_res8[0] = 3;
  FD3D12CommandAllocatorManager::FD3D12CommandAllocatorManager(param_1 + 10,param_1,local_res8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x100;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x25) = 3;
  *(undefined4 *)((longlong)param_1 + 300) = 0x100;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f),4000);
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x400;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x400;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4d),4000);
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x52) = 1;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x80;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x5c),4000);
  FD3D12GlobalOnlineHeap::FD3D12GlobalOnlineHeap(param_1 + 0x61,param_1);
  FD3D12GlobalOnlineHeap::FD3D12GlobalOnlineHeap(param_1 + 0x7e,param_1);
  local_res10[0] = 0;
  FUN_141a67510(param_1 + 0x9b,param_1,local_res10,0x10000,4);
  local_res18[0] = 1;
  FUN_141a67510(param_1 + 0xab,param_1,local_res18,0x2000,0x14);
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xbf),4000);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xd8] = param_1;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xdd),4000);
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  param_1[0x10a] = param_1;
  param_1[0x10b] = param_1;
  *(undefined4 *)(param_1 + 0x10c) = 0x400000;
  *(undefined4 *)((longlong)param_1 + 0x864) = 2;
  *(undefined4 *)(param_1 + 0x10d) = 1;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x111));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x111),4000);
  param_1[0x116] = param_1;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x117,0,0x80);
  FUN_141a88b40(param_1);
  return param_1;
}



// FUNCTION 141a4c3b0 FUN_141a4c3b0 body=88 status=ok
// SIG undefined FUN_141a4c3b0(void)

undefined8 *
FUN_141a4c3b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  return param_1;
}



// FUNCTION 141a4c410 FUN_141a4c410 body=169 status=ok
// SIG undefined FUN_141a4c410(void)

undefined8 * FUN_141a4c410(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_144da6618;
  FUN_141a67840();
  *(uint *)(param_1 + 0x12) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x94) = 2;
  param_1[0x14] = (ulonglong)(param_3 >> 8);
  param_1[0x15] = (ulonglong)(param_3 >> 8);
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  return param_1;
}



// FUNCTION 141a4c4c0 FUN_141a4c4c0 body=74 status=ok
// SIG undefined FUN_141a4c4c0(void)

undefined8 * FUN_141a4c4c0(undefined8 *param_1)

{
  DWORD DVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1440104d0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 2) = DVar1;
  *param_1 = &PTR_FUN_144da6638;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 141a4c510 FD3D12GlobalOnlineHeap body=185 status=ok
// SIG undefined FD3D12GlobalOnlineHeap(void)

undefined8 * FD3D12GlobalOnlineHeap::FD3D12GlobalOnlineHeap(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_144da6378;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_144da6500;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x18),4000);
  return param_1;
}



// FUNCTION 141a4c5d0 FUN_141a4c5d0 body=284 status=ok
// SIG undefined FUN_141a4c5d0(void)

undefined8 *
FUN_141a4c5d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *param_1 = &PTR_FUN_144024f50;
  param_1[7] = param_2;
  param_1[1] = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__144da6250;
  param_1[1] = &PTR_LAB_144da6270;
  param_1[6] = &PTR_LAB_144da6278;
  FUN_141a67840(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_2;
  FUN_141a67840(param_1 + 0x1a,param_2);
  *(uint *)(param_1 + 0x2b) = *(uint *)(param_1 + 0x2b) & 0xfffffffc;
  param_1[0x2a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2c),4000);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x34),4000);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0xc] = param_1 + 6;
  return param_1;
}



// FUNCTION 141a4c6f0 FUN_141a4c6f0 body=457 status=ok
// SIG undefined FUN_141a4c6f0(void)

undefined8 *
FUN_141a4c6f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_144da6570;
  *(undefined4 *)(param_1 + 2) = param_10;
  FString::FString(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)(param_1 + 6) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *param_1 = &PTR_FUN_144da65c0;
  plVar1 = param_1 + 0x10;
  uVar5 = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_6;
  *(undefined1 *)(param_1 + 0xd) = param_11;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_7;
  *(undefined4 *)(param_1 + 0xe) = param_12;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_13;
  *(undefined4 *)(param_1 + 0xf) = param_14;
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_15;
  *plVar1 = 0;
  param_1[0x11] = 0;
  if (*(int *)(param_1 + 0xf) != 0) {
    do {
      lVar3 = operator_new(0x110);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_141a4b090(lVar3,param_1,param_1[1],param_1 + 3,*(undefined4 *)(param_1 + 0xc),
                              *(undefined4 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 100),
                              *(undefined4 *)((longlong)param_1 + 0x6c),
                              *(undefined4 *)((longlong)param_1 + 0x34),*(undefined4 *)(param_1 + 6)
                              ,*(undefined4 *)(param_1 + 2),*(undefined1 *)(param_1 + 0xd),
                              *(undefined4 *)(param_1 + 0xe),
                              *(undefined4 *)((longlong)param_1 + 0x74));
      }
      FUN_141a56370(uVar4);
      iVar2 = *(int *)(param_1 + 0x11);
      *(int *)(param_1 + 0x11) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x8c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      uVar5 = uVar5 + 1;
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
    } while (uVar5 < *(uint *)(param_1 + 0xf));
  }
  return param_1;
}



// FUNCTION 141a4c8c0 FUN_141a4c8c0 body=284 status=ok
// SIG undefined FUN_141a4c8c0(void)

undefined8 *
FUN_141a4c8c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *param_1 = &PTR_FUN_144024f50;
  param_1[7] = param_2;
  param_1[1] = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__144da6298;
  param_1[1] = &PTR_LAB_144da62b8;
  param_1[6] = &PTR_LAB_144da62c0;
  FUN_141a67840(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_2;
  FUN_141a67840(param_1 + 0x1a,param_2);
  *(uint *)(param_1 + 0x2b) = *(uint *)(param_1 + 0x2b) & 0xfffffffc;
  param_1[0x2a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2c),4000);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x34),4000);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0xc] = param_1 + 6;
  return param_1;
}



// FUNCTION 141a4c9e0 FD3D12ThreadLocalOnlineHeap body=233 status=ok
// SIG undefined FD3D12ThreadLocalOnlineHeap(void)

undefined8 *
FD3D12ThreadLocalOnlineHeap::FD3D12ThreadLocalOnlineHeap
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = param_2;
  puVar3 = (undefined8 *)0x0;
  param_1[2] = param_3;
  param_1[3] = &PTR_FUN_144da6378;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_144da6540;
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = &PTR_FUN_144da6378;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar2 = puVar1;
  }
  param_1[0xf] = puVar2;
  param_1[0xe] = puVar2;
  param_1[0x10] = 0;
  param_1[0x11] = &PTR_FUN_144da6378;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_144da6378;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar3 = puVar2;
  }
  param_1[0x15] = puVar3;
  param_1[0x14] = puVar3;
  return param_1;
}



// FUNCTION 141a4cad0 FUN_141a4cad0 body=287 status=ok
// SIG undefined FUN_141a4cad0(void)

undefined8 *
FUN_141a4cad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *param_1 = &PTR_FUN_144024f50;
  param_1[6] = param_2;
  param_1[1] = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined4 *)(param_1 + 4) = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__144da62e0;
  param_1[1] = &DAT_144da6300;
  param_1[5] = &PTR_LAB_144da6308;
  FUN_141a67840(param_1 + 7);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = param_2;
  FUN_141a67840(param_1 + 0x19,param_2);
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfffffffc;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2c),4000);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x34),4000);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0xb] = param_1 + 5;
  return param_1;
}



// FUNCTION 141a4cbf0 FUN_141a4cbf0 body=469 status=ok
// SIG undefined FUN_141a4cbf0(void)

undefined8 * FUN_141a4cbf0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
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
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0x12);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0x12) = iVar3;
  if (*(int *)((longlong)param_1 + 0x94) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *plVar1),0,lVar4 << 4);
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0xb);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0xb) = iVar3;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 10);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + param_1[10]),0,lVar4 << 4);
  param_1[0x19] = param_2;
  *param_1 = &PTR_FUN_144da7010;
  FUN_141a663c0(param_1 + 0x1a,param_2,8);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2d));
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  return param_1;
}



// FUNCTION 141a4cdd0 FUN_141a4cdd0 body=334 status=ok
// SIG undefined FUN_141a4cdd0(void)

void FUN_141a4cdd0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar5 = param_1 + 0x27d;
  lVar6 = 0x180;
  do {
    puVar3 = (undefined8 *)plVar5[-1];
    plVar5 = plVar5 + -1;
    lVar6 = lVar6 + -1;
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
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar6 != 0);
  puVar3 = (undefined8 *)param_1[0xf5];
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
        bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)*param_1;
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
        bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141a4cf20 ~TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator> body=208 status=ok
// SIG undefined ~TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>(void)

void TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>::
     ~TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      plVar2[1] = (longlong)&PTR__scalar_deleting_destructor__144da63b8;
      lVar1 = plVar2[2];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(plVar2[2] + 0x10);
        FMemory::operator_delete(plVar2[2],0x20);
        plVar2[2] = lVar1;
      }
      plVar2[3] = 0;
      plVar2[2] = 0;
      (**(code **)(plVar2[1] + 8))(plVar2 + 1,0);
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
    return;
  }
  return;
}



// FUNCTION 141a4cff0 FUN_141a4cff0 body=142 status=ok
// SIG undefined FUN_141a4cff0(void)

void FUN_141a4cff0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    do {
      *puVar3 = &PTR_FUN_144da6378;
      if (puVar3[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[1] + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar3[1] != 0)) {
          FUN_141a4ed50(puVar3[1],1);
        }
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar3);
  return;
}



// FUNCTION 141a4d080 FUN_141a4d080 body=150 status=ok
// SIG undefined FUN_141a4d080(void)

void FUN_141a4d080(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
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



// FUNCTION 141a4d120 FUN_141a4d120 body=146 status=ok
// SIG undefined FUN_141a4d120(void)

void FUN_141a4d120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  while (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar3 != 0) {
      *(undefined ***)(lVar3 + 8) = &PTR_FUN_144da6378;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (*(longlong *)(lVar3 + 0x10) != 0)) {
          FUN_141a4ed50(*(longlong *)(lVar3 + 0x10),1);
        }
      }
      FMemory::operator_delete(lVar3,0x30);
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141a4d1c0 FUN_141a4d1c0 body=161 status=ok
// SIG undefined FUN_141a4d1c0(void)

void FUN_141a4d1c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  while (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar3 != 0) {
      *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_144da6378;
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (*(longlong *)(lVar3 + 0x18) != 0)) {
          FUN_141a4ed50(*(longlong *)(lVar3 + 0x18),1);
        }
      }
      if (*(longlong **)(lVar3 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 8) + 0x10))();
      }
      FMemory::operator_delete(lVar3,0x28);
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141a4d270 FUN_141a4d270 body=146 status=ok
// SIG undefined FUN_141a4d270(void)

void FUN_141a4d270(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  while (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar3 != 0) {
      *(undefined ***)(lVar3 + 8) = &PTR_FUN_144da6378;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (*(longlong *)(lVar3 + 0x10) != 0)) {
          FUN_141a4ed50(*(longlong *)(lVar3 + 0x10),1);
        }
      }
      FMemory::operator_delete(lVar3,0x28);
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141a4d310 ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 141a4d380 FUN_141a4d380 body=395 status=ok
// SIG undefined FUN_141a4d380(void)

void FUN_141a4d380(longlong *param_1)

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
      if (bVar4) goto LAB_141a4d441;
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
LAB_141a4d441:
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
      FUN_141a68350((longlong)iStack_1c * 0x98 + 0x10 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 141a4d510 FUN_141a4d510 body=687 status=ok
// SIG undefined FUN_141a4d510(void)

void FUN_141a4d510(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144da7068;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (param_1[0x1bf] != 0) {
    FMemory::Free();
  }
  FUN_141a54600(param_1 + 0x1b7,0);
  if (param_1[0x1bb] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1b7] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b1));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1ac));
  plVar4 = (longlong *)param_1[0x1a9];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  *(undefined4 *)(param_1 + 0x1a7) = 0;
  if (param_1[0x1a6] != 0) {
    FMemory::Free();
  }
  FUN_141a4d380(param_1 + 0x19e);
  *(undefined4 *)(param_1 + 0x19d) = 0;
  if (param_1[0x19c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x194);
  FUN_141a4d080(param_1 + 0x191);
  FUN_141a4d7c0(param_1 + 0x180);
  FUN_141a24df0(param_1 + 0x166);
  param_1[0x12e] = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[0x12f] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 0x130);
  param_1[0xf6] = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[0xf7] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 0xf8);
  FD3D12DeferredDeletionQueue::~FD3D12DeferredDeletionQueue(param_1 + 0xe8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xe7);
  if ((longlong *)param_1[0xe6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe6] + 0x10))();
  }
  if ((longlong *)param_1[0xe5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe5] + 0x10))();
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xe4);
  if (param_1[0xe2] != 0) {
    FMemory::Free();
  }
  lVar6 = param_1[0xdf];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0xdf];
    param_1[0xdf] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0xdf];
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd9));
  if ((longlong *)param_1[0xd6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd6] + 0x10))();
  }
  if ((longlong *)param_1[0xd5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd5] + 0x10))();
  }
  if ((longlong *)param_1[0xd4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd4] + 0x10))();
  }
  FUN_141a94c80(param_1 + 0x42);
  FD3D12RootSignatureManager::~FD3D12RootSignatureManager(param_1 + 0x32);
  if ((longlong *)param_1[0x31] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  return;
}



// FUNCTION 141a4d7c0 FUN_141a4d7c0 body=188 status=ok
// SIG undefined FUN_141a4d7c0(void)

void FUN_141a4d7c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x70);
  puVar3 = *(undefined8 **)(param_1 + 0x68);
  if (iVar4 != 0) {
    do {
      *puVar3 = &PTR_FUN_144da6378;
      if (puVar3[1] != 0) {
        LOCK();
        piVar1 = (int *)(puVar3[1] + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (puVar3[1] != 0)) {
          FUN_141a4ed50(puVar3[1],1);
        }
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = *(undefined8 **)(param_1 + 0x68);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144da0c80;
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141a4d880 FUN_141a4d880 body=57 status=ok
// SIG undefined FUN_141a4d880(void)

void FUN_141a4d880(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)0x0;
  *param_1 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a4d8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141a4d8c0 ~FD3D12CommandAllocatorManager body=200 status=ok
// SIG undefined ~FD3D12CommandAllocatorManager(void)

void FD3D12CommandAllocatorManager::~FD3D12CommandAllocatorManager(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  while ((iVar5 = (int)plVar6, -1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x10)))) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8);
    if (plVar6 != (longlong *)0x0) {
      plVar1 = (longlong *)*plVar6;
      *plVar6 = 0;
      plVar4 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar4 = (longlong *)*plVar6;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      FMemory::operator_delete(plVar6,0x20);
    }
    plVar6 = (longlong *)(ulonglong)(iVar5 + 1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar2 = *(longlong *)(param_1 + 0x28);
  while (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *puVar3;
    FMemory::operator_delete(puVar3,0x10);
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141a4d990 FUN_141a4d990 body=454 status=ok
// SIG undefined FUN_141a4d990(void)

void FUN_141a4d990(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  *param_1 = &PTR_FUN_144da6950;
  param_1[1] = &PTR_StartProfileThreadUsage_144da6c98;
  FUN_141a524e0();
  param_1[0xfd8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0xdd0] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0xbc8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x9c0] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x7b8] = &PTR__scalar_deleting_destructor__144da63b0;
  param_1[0x5b0] = &PTR__scalar_deleting_destructor__144da63b0;
  FUN_141a68320(param_1 + 0x59e);
  FUN_141a68320(param_1 + 0x58c);
  lVar5 = 0x60;
  puVar6 = param_1 + 0x586;
  do {
    puVar3 = (undefined8 *)puVar6[-1];
    puVar6 = puVar6 + -1;
    lVar5 = lVar5 + -1;
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
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar5 != 0);
  FUN_141a4e160(param_1 + 0x9c);
  FD3D12CommandAllocatorManager::~FD3D12CommandAllocatorManager(param_1 + 0x90);
  param_1[0x8c] = &PTR_FUN_144da6378;
  if (param_1[0x8d] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x8d] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (param_1[0x8d] != 0)) {
      FUN_141a4ed50(param_1[0x8d],1);
    }
  }
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (param_1[0x8a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
            (param_1 + 0x50);
  thunk_FUN_141a7bb70(param_1 + 0x3a);
  param_1[0x38] = &PTR_FUN_144da60b0;
  *param_1 = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[1] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 2);
  return;
}



// FUNCTION 141a4db60 FUN_141a4db60 body=245 status=ok
// SIG undefined FUN_141a4db60(void)

void FUN_141a4db60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa8,0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  lVar2 = *(longlong *)(param_1 + 0x68);
  while (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *puVar3;
    FMemory::operator_delete(puVar3,0x20);
    lVar2 = *(longlong *)(param_1 + 0x68);
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 141a4dc60 FUN_141a4dc60 body=511 status=ok
// SIG undefined FUN_141a4dc60(void)

void FUN_141a4dc60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_144da7058;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x111));
  if (param_1[0x10e] != 0) {
    FMemory::Free();
  }
  FUN_141a4e260(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xcf) = 0;
  if (param_1[0xce] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc6,0);
  if (param_1[0xca] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc6] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc4] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbf));
  if (param_1[0xbd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xbb] != 0) {
    FMemory::Free();
  }
  FUN_141a68d00(param_1 + 0xab);
  FUN_141a68d00(param_1 + 0x9b);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x96));
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_1[0x93] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x8b);
  FUN_141a4e100(param_1 + 0x7e);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x79));
  *(undefined4 *)(param_1 + 0x77) = 0;
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x6e);
  FUN_141a4e100(param_1 + 0x61);
  FUN_141a4e080(param_1 + 0x52);
  FUN_141a4e080(param_1 + 0x43);
  FUN_141a4e080(param_1 + 0x34);
  FUN_141a4e080(param_1 + 0x25);
  FUN_141a4e080(param_1 + 0x16);
  FD3D12CommandAllocatorManager::~FD3D12CommandAllocatorManager(param_1 + 10);
  FUN_141a4cff0(param_1 + 4);
  return;
}



// FUNCTION 141a4de60 FUN_141a4de60 body=114 status=ok
// SIG undefined FUN_141a4de60(void)

void FUN_141a4de60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141a541e0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141a4dec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a4dee0 FUN_141a4dee0 body=401 status=ok
// SIG undefined FUN_141a4dee0(void)

void FUN_141a4dee0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  BOOL BVar7;
  bool bVar8;
  undefined8 local_38 [2];
  
  *param_1 = &PTR_FUN_144da6638;
  if ((param_1[3] != 0) && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          lVar4 = param_1[4];
          if (lVar4 != 0) {
            uVar5 = param_1[3];
            BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
            if (BVar7 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
            }
            iVar6 = *(int *)(lVar4 + 0x50);
            *(int *)(lVar4 + 0x50) = iVar6 + 1;
            if (*(int *)(lVar4 + 0x54) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x48,iVar6);
            }
            *(undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar6 * 8) = uVar5;
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x58));
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (param_1 + 4 != local_38) {
    param_1[4] = 0;
    plVar3 = (longlong *)param_1[5];
    param_1[5] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  param_1[3] = 0;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 141a4e080 FUN_141a4e080 body=122 status=ok
// SIG undefined FUN_141a4e080(void)

void FUN_141a4e080(longlong param_1)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  ppuVar2 = &PTR__scalar_deleting_destructor__143fc4528;
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__143fc4528;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
      FMemory::operator_delete(*(longlong *)(param_1 + 0x38),0x18);
      *(longlong *)(param_1 + 0x38) = lVar1;
    } while (lVar1 != 0);
    ppuVar2 = *(undefined ***)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  (*(code *)ppuVar2[1])(param_1 + 0x30,0);
  TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>::
  ~TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>(param_1 + 0x20);
  return;
}



// FUNCTION 141a4e100 FUN_141a4e100 body=96 status=ok
// SIG undefined FUN_141a4e100(void)

void FUN_141a4e100(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144da64e0;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[3] = &PTR_FUN_144da6378;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (param_1[4] != 0)) {
      FUN_141a4ed50(param_1[4],1);
      return;
    }
  }
  return;
}



// FUNCTION 141a4e160 FUN_141a4e160 body=245 status=ok
// SIG undefined FUN_141a4e160(void)

void FUN_141a4e160(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_144da6560;
  puVar3 = (undefined8 *)param_1[0x3ce];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined4 *)(param_1 + 0x40b) = 0;
  if (param_1[0x40a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x402);
  if (param_1[0x400] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3fe] != 0) {
    FMemory::Free();
  }
  param_1[0x3f8] = &PTR_FUN_144da6378;
  if (param_1[0x3f9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x3f9] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (param_1[0x3f9] != 0)) {
      FUN_141a4ed50(param_1[0x3f9],1);
    }
  }
  FUN_141a4d120(param_1 + 0x3f4);
  FUN_141a4e100(param_1 + 0x3e6);
  FUN_141a4e390(param_1 + 0x3d0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3c9);
  FUN_141a4cdd0(param_1 + 7);
  return;
}



// FUNCTION 141a4e260 FUN_141a4e260 body=289 status=ok
// SIG undefined FUN_141a4e260(void)

void FUN_141a4e260(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}



// FUNCTION 141a4e390 FUN_141a4e390 body=121 status=ok
// SIG undefined FUN_141a4e390(void)

void FUN_141a4e390(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_141a4d1c0(param_1 + 0xa0);
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_144da6378;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(longlong *)(param_1 + 0x90) != 0)) {
      FUN_141a4ed50(*(longlong *)(param_1 + 0x90),1);
    }
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
  }
  FUN_141a4d270(param_1 + 0x70);
  FUN_141a4e100(param_1);
  return;
}



// FUNCTION 141a4e410 operator= body=505 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FD3D12UniqueDescriptorTable<16>,FD3D12UniqueDescriptorTableKeyFuncs<FD3D12UniqueDescriptorTable<16>,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141a4e56b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_141a4e56b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141a455e0(param_1,local_res8,(longlong)iStack_4c * 0xb8 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141a4e610 FUN_141a4e610 body=139 status=ok
// SIG undefined FUN_141a4e610(void)

longlong FUN_141a4e610(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(param_1 + 8) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 8),1);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 8) = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x40);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 141a4e6a0 FUN_141a4e6a0 body=108 status=ok
// SIG undefined FUN_141a4e6a0(void)

longlong FUN_141a4e6a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(param_1 + 8) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 8),1);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 8) = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 141a4e710 FUN_141a4e710 body=337 status=ok
// SIG undefined FUN_141a4e710(void)

void FUN_141a4e710(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar4 = **(longlong **)(*(longlong *)*param_1 + 0x5d8);
  lVar5 = *(longlong *)param_1[1];
  uVar3 = *(undefined4 *)(lVar5 + 0xa8);
  FUN_141a4f5b0(lVar4 + 0x460,lVar5,uVar3,0x800,in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  lVar6 = *(longlong *)(*(longlong *)param_1[2] + 0x88);
  *(int *)(lVar4 + 0x2c54) = *(int *)(lVar4 + 0x2c54) + 1;
  lVar7 = *(longlong *)(lVar4 + 0x468);
  if (*(int *)(lVar7 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
              (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8));
    *(undefined4 *)(lVar7 + 0x100) = 0;
    lVar7 = *(longlong *)(lVar4 + 0x468);
  }
  uVar8 = (ulonglong)*(uint *)param_1[4] + lVar6;
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x78))
            (*(longlong **)(lVar7 + 0x28),*(undefined8 *)(*(longlong *)param_1[3] + 0x18),0,
             *(undefined8 *)(*(longlong *)param_1[1] + 0x18),uVar8,*(undefined4 *)param_1[5]);
  FUN_141a55210(lVar4,local_38,1);
  if (local_30 != 0) {
    LOCK();
    piVar1 = (int *)(local_30 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_30,1);
    }
  }
  FUN_141a4f5b0(lVar4 + 0x460,lVar5,0x800,uVar3,uVar8 & 0xffffffff00000000);
  return;
}



// FUNCTION 141a4e870 FUN_141a4e870 body=337 status=ok
// SIG undefined FUN_141a4e870(void)

void FUN_141a4e870(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar4 = **(longlong **)(*(longlong *)*param_1 + 0x5d8);
  lVar5 = *(longlong *)param_1[1];
  uVar3 = *(undefined4 *)(lVar5 + 0xa8);
  FUN_141a4f5b0(lVar4 + 0x460,lVar5,uVar3,0x800,in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  lVar6 = *(longlong *)(*(longlong *)param_1[2] + 0x80);
  *(int *)(lVar4 + 0x2c54) = *(int *)(lVar4 + 0x2c54) + 1;
  lVar7 = *(longlong *)(lVar4 + 0x468);
  if (*(int *)(lVar7 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
              (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8));
    *(undefined4 *)(lVar7 + 0x100) = 0;
    lVar7 = *(longlong *)(lVar4 + 0x468);
  }
  uVar8 = (ulonglong)*(uint *)param_1[4] + lVar6;
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x78))
            (*(longlong **)(lVar7 + 0x28),*(undefined8 *)(*(longlong *)param_1[3] + 0x18),0,
             *(undefined8 *)(*(longlong *)param_1[1] + 0x18),uVar8,*(undefined4 *)param_1[5]);
  FUN_141a55210(lVar4,local_38,1);
  if (local_30 != 0) {
    LOCK();
    piVar1 = (int *)(local_30 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_30,1);
    }
  }
  FUN_141a4f5b0(lVar4 + 0x460,lVar5,0x800,uVar3,uVar8 & 0xffffffff00000000);
  return;
}



// FUNCTION 141a4e9c4 FUN_141a4e9c4 body=9 status=ok
// SIG undefined FUN_141a4e9c4(void)

void FUN_141a4e9c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4e9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



// FUNCTION 141a4e9d0 FUN_141a4e9d0 body=9 status=ok
// SIG undefined FUN_141a4e9d0(void)

void FUN_141a4e9d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a4e9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



// FUNCTION 141a4ea30 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TDoubleLinkedList<FD3D12OfflineDescriptorManager::SFreeRange>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__scalar_deleting_destructor__144da63b8;
  *param_1 = &PTR__scalar_deleting_destructor__144da63b8;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[1] + 0x10);
      FMemory::operator_delete(param_1[1],0x20);
      param_1[1] = lVar1;
    } while (lVar1 != 0);
    ppuVar2 = (undefined **)*param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  (*(code *)ppuVar2[1])(param_1,0);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141a4eac0 FUN_141a4eac0 body=52 status=ok
// SIG undefined FUN_141a4eac0(void)

undefined8 FUN_141a4eac0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4d510();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe10);
  }
  return param_1;
}



// FUNCTION 141a4eb00 FUN_141a4eb00 body=241 status=ok
// SIG undefined FUN_141a4eb00(void)

undefined8 * FUN_141a4eb00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)param_1[0x12];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0x11];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *param_1 = &PTR_FUN_144da6570;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141a4ec00 FUN_141a4ec00 body=52 status=ok
// SIG undefined FUN_141a4ec00(void)

undefined8 FUN_141a4ec00(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4d990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8f00);
  }
  return param_1;
}



// FUNCTION 141a4ec40 FUN_141a4ec40 body=77 status=ok
// SIG undefined FUN_141a4ec40(void)

undefined8 * FUN_141a4ec40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[1] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141a4ec90 FUN_141a4ec90 body=102 status=ok
// SIG undefined FUN_141a4ec90(void)

undefined8 * FUN_141a4ec90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da7200;
  FUN_141a4cff0(param_1 + 4);
  *param_1 = &PTR_FUN_144da6090;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a4ed00 FUN_141a4ed00 body=77 status=ok
// SIG undefined FUN_141a4ed00(void)

undefined8 * FUN_141a4ed00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[1] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 141a4ed50 FUN_141a4ed50 body=272 status=ok
// SIG undefined FUN_141a4ed50(void)

longlong FUN_141a4ed50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa8,0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  lVar2 = *(longlong *)(param_1 + 0x68);
  while (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *puVar3;
    FMemory::operator_delete(puVar3,0x20);
    lVar2 = *(longlong *)(param_1 + 0x68);
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141a4ee60 FUN_141a4ee60 body=98 status=ok
// SIG undefined FUN_141a4ee60(void)

undefined8 * FUN_141a4ee60(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144da6378;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (param_1[1] != 0)) {
      FUN_141a4ed50(param_1[1],1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141a4eed0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12ConstantBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da63b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1040);
  }
  return param_1;
}



// FUNCTION 141a4ef00 FUN_141a4ef00 body=52 status=ok
// SIG undefined FUN_141a4ef00(void)

undefined8 FUN_141a4ef00(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4dc60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x940);
  }
  return param_1;
}



// FUNCTION 141a4ef40 FUN_141a4ef40 body=116 status=ok
// SIG undefined FUN_141a4ef40(void)

undefined8 * FUN_141a4ef40(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
            (param_1 + 0x18);
  thunk_FUN_141a7bb70(param_1 + 2);
  *param_1 = &PTR_FUN_144da60b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 141a4efc0 FUN_141a4efc0 body=52 status=ok
// SIG undefined FUN_141a4efc0(void)

undefined8 FUN_141a4efc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4dee0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a4f000 FUN_141a4f000 body=115 status=ok
// SIG undefined FUN_141a4f000(void)

longlong FUN_141a4f000(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x68);
  FUN_141a4e100(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141a4f080 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a68700();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 141a4f0c0 FUN_141a4f0c0 body=78 status=ok
// SIG undefined FUN_141a4f0c0(void)

undefined8 FUN_141a4f0c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a68350();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_141a69040();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141a4f110 FUN_141a4f110 body=99 status=ok
// SIG undefined FUN_141a4f110(void)

undefined8 * FUN_141a4f110(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144da6570;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141a4f180 FUN_141a4f180 body=52 status=ok
// SIG undefined FUN_141a4f180(void)

undefined8 FUN_141a4f180(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4e100();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141a4f1c0 FUN_141a4f1c0 body=82 status=ok
// SIG undefined FUN_141a4f1c0(void)

undefined8 * FUN_141a4f1c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da6570;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141a4f220 FUN_141a4f220 body=52 status=ok
// SIG undefined FUN_141a4f220(void)

undefined8 FUN_141a4f220(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4e160();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2070);
  }
  return param_1;
}



// FUNCTION 141a4f260 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a82900();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 141a4f2a0 FUN_141a4f2a0 body=125 status=ok
// SIG undefined FUN_141a4f2a0(void)

longlong FUN_141a4f2a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_144da6378;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_141a4ed50(*(longlong *)(param_1 + 0x98),1);
    }
  }
  FUN_141a4d120(param_1 + 0x70);
  FUN_141a4e100(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141a4f320 FUN_141a4f320 body=150 status=ok
// SIG undefined FUN_141a4f320(void)

undefined8 * FUN_141a4f320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da65e8;
  param_1[2] = &PTR_LAB_144da65f0;
  LOCK();
  DAT_146ab6300 = DAT_146ab6300 - (*(uint *)(param_1 + 0x10) >> 10);
  UNLOCK();
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  param_1[2] = &PTR_FUN_144da6570;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141a4f3c0 FUN_141a4f3c0 body=52 status=ok
// SIG undefined FUN_141a4f3c0(void)

undefined8 FUN_141a4f3c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a4e390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141a4f400 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a82b10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 141a4f440 FUN_141a4f440 body=129 status=ok
// SIG undefined FUN_141a4f440(void)

longlong FUN_141a4f440(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x170);
  FUN_141a4d080(param_1 + 0x158);
  FUN_141a4d7c0(param_1 + 0xd0);
  FUN_141a24df0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 141a4f4d0 FUN_141a4f4d0 body=43 status=ok
// SIG undefined FUN_141a4f4d0(void)

undefined8 * FUN_141a4f4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da60b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141a4f500 FUN_141a4f500 body=43 status=ok
// SIG undefined FUN_141a4f500(void)

undefined8 * FUN_141a4f500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da6090;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141a4f530 AddPendingResourceBarrier body=100 status=ok
// SIG undefined AddPendingResourceBarrier(void)

void FD3D12CommandListHandle::AddPendingResourceBarrier
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 0xa0);
  *(int *)(lVar3 + 0xa0) = iVar2 + 1;
  if (*(int *)(lVar3 + 0xa4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x98,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = CONCAT44(param_4,param_3);
  return;
}



// FUNCTION 141a4f5b0 FUN_141a4f5b0 body=149 status=ok
// SIG undefined FUN_141a4f5b0(void)

void FUN_141a4f5b0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  iVar3 = *(int *)(lVar4 + 0x100) + 1;
  *(int *)(lVar4 + 0x100) = iVar3;
  if (*(int *)(lVar4 + 0x104) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar4 + 0xf8));
    iVar3 = *(int *)(lVar4 + 0x100);
  }
  lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar4 + 0xf8);
  *(undefined8 *)(lVar4 + -0x20) = 0;
  *(undefined4 *)(lVar4 + -0xc) = param_3;
  *(undefined4 *)(lVar4 + -8) = param_4;
  *(undefined4 *)(lVar4 + -0x10) = param_5;
  *(undefined8 *)(lVar4 + -0x18) = uVar2;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x2c50);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 141a4f650 FUN_141a4f650 body=100 status=ok
// SIG undefined FUN_141a4f650(void)

void FUN_141a4f650(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(lVar2 + 0x100) + 1;
  *(int *)(lVar2 + 0x100) = iVar3;
  if (*(int *)(lVar2 + 0x104) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar2 + 0xf8));
    iVar3 = *(int *)(lVar2 + 0x100);
  }
  lVar2 = *(longlong *)(lVar2 + 0xf8);
  *(undefined8 *)((longlong)iVar3 * 0x20 + -0x20 + lVar2) = 2;
  *(undefined8 *)((longlong)iVar3 * 0x20 + -0x18 + lVar2) = 0;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x2c50);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 141a4f6c0 FUN_141a4f6c0 body=513 status=ok
// SIG undefined FUN_141a4f6c0(void)

int * FUN_141a4f6c0(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar8 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar8 + 1;
    if (*(int *)(param_1 + 0x18c) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
      ::ResizeGrow(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x1a0);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x1a0) = iVar4;
    if (*(int *)(param_1 + 0x1a4) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x1a4) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x1a0);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x1a4) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 400,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar7 = param_1 + 400;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1a8);
    lVar7 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(param_1 + 0x1ac) + -1;
    iVar4 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 0x1a8) = iVar4;
    *(int *)(param_1 + 0x1ac) = iVar2;
    if (iVar2 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar7 = param_1 + 400;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x18;
  return param_2;
}



// FUNCTION 141a4f8d0 FUN_141a4f8d0 body=129 status=ok
// SIG undefined FUN_141a4f8d0(void)

void FUN_141a4f8d0(char param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (param_2 != 3) {
    if (4 < param_2) {
      if (param_2 < 9) {
        plVar1 = &DAT_1469fce98;
        if (param_1 == '\0') {
          plVar1 = &DAT_1469fceb8;
        }
        LOCK();
        *plVar1 = *plVar1 + param_3;
        UNLOCK();
        return;
      }
      if (param_2 == 9) {
        plVar1 = &DAT_1469fcea0;
        if (param_1 == '\0') {
          plVar1 = &DAT_1469fcec0;
        }
        LOCK();
        *plVar1 = *plVar1 + param_3;
        UNLOCK();
        return;
      }
      if (param_2 == 10) goto LAB_141a4f937;
    }
    plVar1 = &DAT_1469fce88;
    if (param_1 == '\0') {
      plVar1 = &DAT_1469fcea8;
    }
    LOCK();
    *plVar1 = *plVar1 + param_3;
    UNLOCK();
    return;
  }
LAB_141a4f937:
  plVar1 = &DAT_1469fce90;
  if (param_1 == '\0') {
    plVar1 = &DAT_1469fceb0;
  }
  LOCK();
  *plVar1 = *plVar1 + param_3;
  UNLOCK();
  return;
}



// FUNCTION 141a4f960 FUN_141a4f960 body=984 status=ok
// SIG undefined FUN_141a4f960(void)

undefined8 FUN_141a4f960(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  lVar10 = *param_1;
  iVar4 = *(int *)(param_2 + 0x30);
  plVar9 = (longlong *)0x0;
  if (((longlong)iVar4 & 7U) == 0) {
    if (param_1[(longlong)iVar4 + 1] == 0) {
      local_58[0] = 0;
      local_58[1] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      lVar7 = local_58[0];
      FGenericPlatformString::Memcpy(local_58[0],L"Default Buffer Tiny Allocator",0x3c);
      lVar5 = operator_new(0x90);
      local_48 = plVar9;
      if (lVar5 != 0) {
        uVar11 = CONCAT44(uVar12,0xc0);
        in_stack_ffffffffffffff48 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff48 >> 0x20),1);
        local_48 = (longlong *)
                   FUN_141a4c6f0(lVar5,lVar10,local_58,2,in_stack_ffffffffffffff48,uVar11,0x10000,
                                 *(undefined4 *)(param_2 + 0x30),0x4000,3,1,0x40000,0x100,0,3);
        uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
        lVar7 = local_58[0];
      }
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
      local_58[0] = 0;
      local_58[1] = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      lVar7 = local_58[0];
      FGenericPlatformString::Memcpy(local_58[0],L"Default Buffer Basic Allocator",0x3e);
      lVar5 = operator_new(0x90);
      uStack_40 = plVar9;
      if (lVar5 != 0) {
        in_stack_ffffffffffffff48 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff48 >> 0x20),1);
        uStack_40 = (longlong *)
                    FUN_141a4c6f0(lVar5,lVar10,local_58,2,in_stack_ffffffffffffff48,
                                  CONCAT44(uVar12,0xc0),0x10000,*(undefined4 *)(param_2 + 0x30),
                                  0x1000000,3,1,0x1000000,0x1000,0,3);
        lVar7 = local_58[0];
      }
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = lVar10;
        plVar6[1] = 0;
        plVar6[2] = 0;
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar6 + 1,2);
        puVar1 = (undefined4 *)plVar6[1];
        *puVar1 = (undefined4)local_48;
        puVar1[1] = local_48._4_4_;
        puVar1[2] = (undefined4)uStack_40;
        puVar1[3] = uStack_40._4_4_;
        *(undefined4 *)(plVar6 + 2) = 2;
        plVar9 = plVar6;
      }
      param_1[(longlong)*(int *)(param_2 + 0x30) + 1] = (longlong)plVar9;
      iVar4 = *(int *)(param_2 + 0x30);
    }
    plVar9 = (longlong *)param_1[(longlong)iVar4 + 1];
    local_res10 = *(undefined8 *)(*plVar9 + 0x10);
    FUN_141a6c420(param_3);
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
    lVar10 = *(longlong *)(param_2 + 0x10);
    if (lVar10 != 0) {
      plVar8 = (longlong *)plVar9[1];
      plVar6 = plVar8 + (int)plVar9[2];
      if (plVar8 != plVar6) {
        do {
          uVar2 = *(ulonglong *)(param_2 + 0x10);
          if (((uVar2 < *(uint *)(*plVar8 + 0x30)) && ((short)uVar2 != 0)) &&
             (cVar3 = FUN_141a613d0(*plVar8,uVar2,param_4,param_3), cVar3 != '\0')) {
            return 0;
          }
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar6);
        plVar8 = (longlong *)plVar9[1];
        lVar10 = *(longlong *)(param_2 + 0x10);
      }
      local_res8 = 0;
      iVar4 = FUN_141a6e3f0(local_res10,1,lVar10,&local_res8,
                            CONCAT44(uVar12,*(undefined4 *)(*plVar8 + 0x34)));
      if (iVar4 < 0) {
        local_58[0] = 0;
        local_58[1] = 0;
        FUN_141a94000(iVar4,
                      "Adapter->CreateBuffer(D3D12_HEAP_TYPE_DEFAULT, Desc.Width, &NewResource, Allocators[0]->ResourceFlags)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                      ,0x6d1,0,local_58);
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)local_res8);
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x28) = 10;
      FUN_141a50de0(param_3,local_res8,*(undefined4 *)(param_2 + 0x10),0);
      FUN_141a7d380(param_3);
    }
  }
  else {
    local_res8 = 0;
    iVar4 = FUN_141a6e3f0(*(undefined8 *)(lVar10 + 0x10),1,*(undefined8 *)(param_2 + 0x10),
                          &local_res8,iVar4);
    if (iVar4 < 0) {
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_141a94000(iVar4,
                    "Adapter->CreateBuffer(D3D12_HEAP_TYPE_DEFAULT, Desc.Width, &NewResource, Desc.Flags)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                    ,0x702,0,local_58);
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)local_res8);
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x28) = 10;
    FUN_141a50de0(param_3,local_res8,*(undefined4 *)(param_2 + 0x10),0);
    FUN_141a7d380(param_3);
  }
  return 0;
}



// FUNCTION 141a4fd40 FUN_141a4fd40 body=294 status=ok
// SIG undefined FUN_141a4fd40(void)

undefined8 FUN_141a4fd40(longlong *param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *param_1;
  FUN_141a6c420(param_4);
  uVar4 = 0x10;
  if (param_2 != 0) {
    uVar4 = param_2;
  }
  if (0x80 < *(uint *)(lVar1 + 0x790)) {
    FUN_141a7bd00(lVar1 + 0x740,1);
    FUN_141a51690(param_1 + 1,0);
  }
  if (uVar4 <= *(uint *)(param_1 + 7)) {
    cVar2 = FUN_141a613d0(param_1 + 1,uVar4,param_3,param_4);
    if (cVar2 != '\0') goto LAB_141a4fe49;
  }
  local_res8 = 0;
  iVar3 = FUN_141a6e3f0(lVar1,2,uVar4,&local_res8,(ulonglong)uVar5 << 0x20);
  if (iVar3 < 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_141a94000(iVar3,"Adapter->CreateBuffer(D3D12_HEAP_TYPE_UPLOAD, Size, &NewResource)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp",
                  0x640,0,&local_28);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_res8);
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x28) = 0xb;
  FUN_141a50de0(param_4,local_res8,uVar4,0);
  FUN_141a7d380(param_4);
LAB_141a4fe49:
  return *(undefined8 *)(param_4 + 0x38);
}



// FUNCTION 141a4fe70 FUN_141a4fe70 body=853 status=ok
// SIG undefined FUN_141a4fe70(void)

ulonglong FUN_141a4fe70(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  uVar15 = *(ulonglong *)(*param_1 + 0x40);
  local_res10 = param_2;
  local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98);
  if ((ulonglong)param_1[4] < uVar15) {
    iVar13 = 0x20;
    plVar12 = param_1 + 5;
    puStack_58 = (uint *)(param_1 + 0x37);
    param_1[4] = uVar15;
    iVar3 = (int)param_1[0x39];
    local_a8 = 0x100000000;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    if (iVar3 != 0) {
      puVar16 = (uint *)param_1[0x38];
      if ((uint *)param_1[0x38] == (uint *)0x0) {
        puVar16 = puStack_58;
      }
      uVar5 = *puVar16;
      uStack_90 = 0;
      iVar10 = 0;
      while (uVar5 == 0) {
        uStack_90 = uStack_90 + 0x20;
        uVar1 = (ulonglong)local_a8 >> 0x20;
        local_a8 = CONCAT44((int)uVar1,iVar10 + 1);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_141a4ff69;
        uVar5 = puVar16[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar10 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar5,(undefined4)local_a8);
      iVar6 = iVar13;
      if (uVar5 != 0) {
        iVar6 = 0x1f - iVar10;
      }
      local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
      if (iVar3 < local_98._4_4_) {
LAB_141a4ff69:
        local_98._4_4_ = iVar3;
      }
    }
    auStack_50._4_4_ = local_98._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_90;
    auStack_50._12_4_ = iStack_8c;
    uStack_60 = local_a8;
    local_70 = 0;
    local_40._0_4_ = SUB84(plVar12,0);
    local_40._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
    uStack_a0 = local_a8;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = auStack_50._8_8_;
    local_88._12_4_ = local_40._4_4_;
    bVar2 = local_98._4_4_ < (int)param_1[0x39];
    local_78 = plVar12;
    local_68 = plVar12;
    local_40 = plVar12;
    local_98 = puStack_58;
    if (bVar2) {
      do {
        plVar8 = (longlong *)param_1[0x35];
        plVar7 = plVar8;
        if (plVar8 == (longlong *)0x0) {
          plVar7 = plVar12;
        }
        if ((ulonglong)plVar7[(longlong)iStack_8c * 3] < uVar15) {
          if (plVar8 == (longlong *)0x0) {
            plVar8 = plVar12;
          }
          param_1[2] = param_1[2] + plVar8[(longlong)iStack_8c * 3 + 1];
          TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
          ::Remove(local_88._8_8_);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        FUN_1406e9690(&uStack_a0);
      } while (iStack_8c < (int)local_98[4]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        uVar14 = (int)local_78[0x31] - *(int *)((longlong)local_78 + 0x1ac);
        uVar5 = uVar14 >> 1;
        iVar3 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar10 = iVar13;
        if (uVar5 != 0) {
          iVar10 = 0x1f - iVar3;
        }
        uVar5 = uVar5 - 1;
        iVar3 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uVar5 != 0) {
          iVar13 = 0x1f - iVar3;
        }
        uVar17 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - (char)iVar13 & 0x1f);
        uVar5 = 8;
        if ((7 < uVar17) && (uVar5 = uVar17, uVar14 < 4)) {
          uVar5 = 8;
        }
        if ((0 < (int)uVar14) &&
           (((iVar3 = (int)local_78[0x3b], iVar3 == 0 || (iVar3 < (int)uVar5)) ||
            ((int)uVar5 < iVar3)))) {
          *(uint *)(local_78 + 0x3b) = uVar5;
          FUN_141a5e5f0(local_78);
        }
      }
    }
  }
  lVar4 = local_res10;
  uVar1 = param_1[1];
  uVar15 = param_1[3];
  uVar11 = uVar15 % uVar1;
  if (uVar1 < uVar11 + local_res10) {
    lVar9 = FUN_141a4fe70(param_1,uVar1 - uVar11);
    if (lVar9 == -1) {
      return 0xffffffffffffffff;
    }
    uVar15 = param_1[3];
    uVar11 = uVar15 % (ulonglong)param_1[1];
  }
  uVar15 = uVar15 + lVar4;
  if ((ulonglong)param_1[2] <= uVar15) {
    return 0xffffffffffffffff;
  }
  param_1[3] = uVar15;
  plVar12 = param_1 + 5;
  local_res8 = *(undefined8 *)(*param_1 + 0x30);
  TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
  ::FindId(plVar12,&local_res10);
  if ((int)local_res10 != -1) {
    plVar8 = (longlong *)param_1[0x35];
    if ((longlong *)param_1[0x35] == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    plVar8 = plVar8 + (longlong)(int)local_res10 * 3;
    if (plVar8 != (longlong *)0x0) goto LAB_141a501b0;
  }
  local_res18 = &local_res8;
  FUN_141a458a0(plVar12,&local_res10,&local_res18,0);
  plVar8 = (longlong *)param_1[0x35];
  if ((longlong *)param_1[0x35] == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  plVar8 = plVar8 + (longlong)(int)local_res10 * 3;
LAB_141a501b0:
  plVar8[1] = plVar8[1] + lVar4;
  return uVar11;
}



// FUNCTION 141a501d0 FUN_141a501d0 body=467 status=ok
// SIG undefined FUN_141a501d0(void)

longlong FUN_141a501d0(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)(param_2 + 0xffU) & 0xffffff00;
  lVar3 = FUN_141a4fe70(param_1 + 0x98,param_2 + 0xffU >> 8);
  if (lVar3 == -1) {
    do {
      *(uint *)(param_1 + 0x90) =
           *(uint *)(param_1 + 0x90) + 0xff + (*(uint *)(param_1 + 0x90) >> 1) & 0xffffff00;
      FUN_141a5e190(param_1);
      uVar4 = (ulonglong)(*(uint *)(param_1 + 0x90) >> 8);
      *(ulonglong *)(param_1 + 0xa0) = uVar4;
      *(ulonglong *)(param_1 + 0xa8) = uVar4;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      if (*(int *)(param_1 + 0x24c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
        ::ResizeTo(param_1 + 0xc0,0);
      }
      *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x26c) = 0;
      *(undefined4 *)(param_1 + 0x260) = 0;
      if (*(int *)(param_1 + 0x264) != 0) {
        *(undefined4 *)(param_1 + 0x264) = 0;
        TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x250,0);
      }
      if (0 < (int)*(uint *)(param_1 + 0x298)) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x298);
        uVar4 = 0;
        do {
          lVar3 = *(longlong *)(param_1 + 0x290);
          if (*(longlong *)(param_1 + 0x290) == 0) {
            lVar3 = param_1 + 0x270;
          }
          uVar5 = (longlong)*(int *)(param_1 + 0x298) - 1U & uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(lVar3 + uVar5 * 4) = 0xffffffff;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar3 = FUN_141a4fe70(param_1 + 0x98);
    } while (lVar3 == -1);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_3 + 8) = 3;
  lVar3 = lVar3 * 0x100;
  FStringTable::SetOwnerAsset(param_3,uVar2);
  *(ulonglong *)(param_3 + 0x60) = uVar8;
  *(ulonglong *)(param_3 + 0x68) = uVar8;
  *(ulonglong *)(param_3 + 0x70) = uVar8;
  *(longlong *)(param_3 + 0x48) = lVar3;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_3 + 0x38);
  }
  else {
    lVar6 = lVar6 + lVar3;
    *(longlong *)(param_3 + 0x38) = lVar6;
  }
  *(longlong *)(param_3 + 0x40) = lVar1 + lVar3;
  return lVar6;
}



// FUNCTION 141a503b0 FUN_141a503b0 body=194 status=ok
// SIG undefined FUN_141a503b0(void)

void FUN_141a503b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,byte param_5,
                  longlong param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_5 & 6) == 0) {
    iVar1 = FUN_141a4f960(param_2 + 0x8b0,param_3,param_9,param_7);
    if (iVar1 < 0) {
      local_18 = 0;
      local_10 = 0;
      FUN_141a94000(iVar1,
                    "In_Device->GetDefaultBufferAllocator().AllocDefaultResource(InDesc, ResourceLocation, Alignment)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp",
                    0x74,0,&local_18);
      return;
    }
  }
  else {
    _Dst = (void *)FUN_141a4fd40(*(undefined8 *)(param_1 + 0x700),param_4,param_7,param_9);
    if (*(undefined8 **)(param_6 + 8) != (undefined8 *)0x0) {
      _Src = (void *)(**(code **)**(undefined8 **)(param_6 + 8))();
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)param_4);
    }
  }
  return;
}



// FUNCTION 141a50480 FUN_141a50480 body=536 status=ok
// SIG undefined FUN_141a50480(void)

void FUN_141a50480(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *local_res8;
  longlong local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res8 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))
                    (*(longlong **)(param_1 + 0x18),param_1,&DAT_144da63c8,&local_res8);
  if (iVar3 < 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141a94000(iVar3,
                  "m_pDevice->CreateDescriptorHeap(&m_Desc, IID_PPV_ARGS(Heap.GetInitReference()))",
                  "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12DescriptorCache.h"
                  ,0x133,0,&local_28);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_res8);
  (**(code **)(*local_res8 + 0x48))(local_res8,&local_res10);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x28) + 1;
  if (iVar3 < iVar7) {
    *(int *)(param_1 + 0x28) = iVar7;
    iVar9 = iVar7 - iVar3;
    if (*(int *)(param_1 + 0x2c) < iVar7) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar3);
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x28);
    if (iVar9 != 0) {
      puVar4 = puVar8 + 3;
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + 5;
        puVar4[-2] = &PTR__scalar_deleting_destructor__144da63b8;
        puVar4[-1] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4 = puVar4 + 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (iVar7 < iVar3) {
    TArray<FD3D12OfflineDescriptorManager::SHeapEntry,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0x20,iVar7,iVar3 - iVar7,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 0x28;
  uStack_20 = (ulonglong)(uint)(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 4)) + local_res10;
  local_28 = local_res10;
  puVar5 = (undefined4 *)operator_new(0x20);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *puVar5 = (undefined4)local_28;
    puVar5[1] = local_28._4_4_;
    puVar5[2] = (undefined4)uStack_20;
    puVar5[3] = uStack_20._4_4_;
    if (*(longlong *)(lVar1 + -0x10) == 0) {
      *(undefined4 **)(lVar1 + -0x18) = puVar5;
    }
    else {
      *(undefined4 **)(*(longlong *)(lVar1 + -0x10) + 0x10) = puVar5;
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(lVar1 + -0x10);
    }
    *(undefined4 **)(lVar1 + -0x10) = puVar5;
    (**(code **)(*(longlong *)(lVar1 + -0x20) + 8))(lVar1 + -0x20,*(int *)(lVar1 + -8) + 1);
  }
  plVar2 = *(longlong **)(lVar1 + -0x28);
  *(longlong **)(lVar1 + -0x28) = local_res8;
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 8))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  piVar6 = (int *)operator_new(0x18);
  if (piVar6 != (int *)0x0) {
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = iVar3 + -1;
    piVar6[4] = 0;
    piVar6[5] = 0;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *(int **)(param_1 + 0x38) = piVar6;
    }
    else {
      *(int **)(*(longlong *)(param_1 + 0x40) + 8) = piVar6;
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_1 + 0x40);
    }
    *(int **)(param_1 + 0x40) = piVar6;
    (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30,*(int *)(param_1 + 0x48) + 1);
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return;
}



// FUNCTION 141a506a0 AllocateHeapSlot body=359 status=ok
// SIG undefined AllocateHeapSlot(void)

longlong * FDescriptorHeapManager::AllocateHeapSlot(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  BOOL BVar7;
  longlong lVar8;
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_141a50480(param_1);
  }
  piVar4 = *(int **)(param_1 + 0x38);
  iVar2 = *piVar4;
  *param_3 = iVar2;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)iVar2 * 0x28);
  lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x28;
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar8 = *plVar5;
  *param_2 = lVar8;
  lVar8 = lVar8 + (ulonglong)uVar3;
  *plVar5 = lVar8;
  if (lVar8 == plVar5[1]) {
    lVar8 = *(longlong *)(lVar1 + 0x10);
    if (lVar8 != 0) {
      if (*(int *)(lVar1 + 0x20) == 1) {
        TDoubleLinkedList<FD3D12OfflineDescriptorManager::SFreeRange>::Empty(lVar1 + 8);
      }
      else {
        lVar6 = *(longlong *)(lVar8 + 0x10);
        *(longlong *)(lVar1 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        FMemory::operator_delete(lVar8,0x20);
        (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1 + 8,*(int *)(lVar1 + 0x20) + -1);
      }
    }
    if (*(int *)(lVar1 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x48) == 1) {
        TDoubleLinkedList<unsigned_int>::Empty(param_1 + 0x30);
      }
      else {
        if (piVar4 == *(int **)(param_1 + 0x38)) {
          lVar1 = *(longlong *)(*(int **)(param_1 + 0x38) + 2);
          *(longlong *)(param_1 + 0x38) = lVar1;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        else if (piVar4 == *(int **)(param_1 + 0x40)) {
          lVar1 = *(longlong *)(*(int **)(param_1 + 0x40) + 4);
          *(longlong *)(param_1 + 0x40) = lVar1;
          *(undefined8 *)(lVar1 + 8) = 0;
        }
        else {
          *(undefined8 *)(*(longlong *)(piVar4 + 2) + 0x10) = *(undefined8 *)(piVar4 + 4);
          *(undefined8 *)(*(longlong *)(piVar4 + 4) + 8) = *(undefined8 *)(piVar4 + 2);
        }
        FMemory::operator_delete(piVar4,0x18);
        (**(code **)(*(longlong *)(param_1 + 0x30) + 8))
                  (param_1 + 0x30,*(int *)(param_1 + 0x48) + -1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return param_2;
}



// FUNCTION 141a50810 FUN_141a50810 body=664 status=ok
// SIG undefined FUN_141a50810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141a50810(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 longlong param_5)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = *param_1;
  *(undefined8 *)(param_3 + 8) = 0;
  plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
  local_e8 = (undefined1 *)param_3;
  local_b0 = param_4;
  (**(code **)(*plVar4 + 200))(plVar4,&local_58,0,1);
  uStack_80 = 0;
  uVar8 = *(uint *)(param_3 + 0x30) & 7;
  local_60 = 1;
  local_88 = 1;
  uStack_7c = 1;
  iVar6 = (uVar8 != 0) + 8;
  local_70 = 1;
  uStack_6c = 0;
  iStack_68 = 0;
  uStack_64 = 1;
  lVar1 = *(longlong *)(*param_1 + 0x10);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xd60));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xd60));
  }
  if ((local_70 == 1) &&
     (DAT_1469fce78 <=
      (longlong)
      (DAT_1469fce90 + DAT_1469fcea0 + DAT_1469fce98 +
       (local_58 + -1 + lStack_50 & ~(lStack_50 - 1U)) + DAT_1469fce80))) {
    local_70 = 4;
    uStack_6c = 1;
    iStack_68 = 1;
  }
  local_d8 = &local_c8;
  local_c8 = 0;
  local_e0 = local_b0;
  local_e8 = &stack0x00000030;
  iVar3 = FUN_141a6e5e0(lVar1,param_3,&local_70,iVar6);
  if (-1 < iVar3) {
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(int *)(param_5 + 0x28) = iVar6;
    *(longlong *)(param_5 + 0x50) = local_58;
    *(longlong *)(param_5 + 0x58) = lStack_50;
    FUN_141a50de0(param_5,local_c8,local_58,0);
    FUN_141a7d380(param_5);
    local_70 = *(int *)(local_c8 + 0xb8);
    uStack_6c = *(undefined4 *)(local_c8 + 0xbc);
    iStack_68 = *(int *)(local_c8 + 0xc0);
    uStack_64 = *(undefined4 *)(local_c8 + 0xc4);
    local_60 = *(undefined4 *)(local_c8 + 200);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
    }
    if (uVar8 == 0) {
      if ((local_70 == 1) || ((local_70 == 4 && (iStack_68 == 2)))) {
        local_90 = *(undefined8 *)(param_5 + 0x20);
        plVar4 = param_1 + 0x1e;
        puVar7 = &local_90;
        puVar5 = local_b4;
      }
      else {
        plVar4 = param_1 + 0x28;
        puVar7 = &local_98;
        *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
        puVar5 = local_b8;
        local_98 = *(undefined8 *)(param_5 + 0x20);
      }
    }
    else if ((local_70 == 1) || ((local_70 == 4 && (iStack_68 == 2)))) {
      local_a0 = *(undefined8 *)(param_5 + 0x20);
      plVar4 = param_1 + 10;
      puVar7 = &local_a0;
      puVar5 = local_bc;
    }
    else {
      plVar4 = param_1 + 0x14;
      puVar7 = &local_a8;
      *(int *)(param_1 + 4) = (int)param_1[4] + 1;
      puVar5 = local_c0;
      local_a8 = *(undefined8 *)(param_5 + 0x20);
    }
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(plVar4,puVar5,puVar7,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xd60));
  return iVar3;
}



// FUNCTION 141a50ab0 FUN_141a50ab0 body=268 status=ok
// SIG undefined FUN_141a50ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_141a50ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  local_48 = 0;
  FUN_141a6c420(param_5);
  plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
  local_68 = (undefined1 *)param_3;
  (**(code **)(*plVar3 + 200))(plVar3,&local_40,0,1);
  cVar4 = FUN_141a613d0(param_1 + 0x10,local_40,uStack_38,param_5);
  if (cVar4 == '\0') {
    uVar5 = 0x80004005;
  }
  else {
    uVar6 = (**(code **)(**(longlong **)(param_5 + 0x18) + 0x10))();
    local_58 = &local_48;
    local_50 = 0;
    local_68 = &stack0x00000030;
    local_60 = param_4;
    uVar5 = FUN_141a6f000(uVar2,param_3,uVar6,*(undefined8 *)(param_5 + 0x48));
    *(undefined4 *)(param_5 + 8) = 2;
    *(undefined4 *)(param_5 + 0x50) = local_40;
    *(undefined4 *)(param_5 + 0x54) = uStack_3c;
    *(undefined4 *)(param_5 + 0x58) = uStack_38;
    *(undefined4 *)(param_5 + 0x5c) = uStack_34;
    FStringTable::SetOwnerAsset(param_5,local_48);
  }
  return uVar5;
}



// FUNCTION 141a50bc0 FUN_141a50bc0 body=534 status=ok
// SIG undefined FUN_141a50bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a50bc0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)((longlong)param_3 + 0x24) == 1) {
    if ((*(byte *)(param_3 + 6) & 7) == 0) {
      lVar1 = *param_1;
      param_3[1] = 0x1000;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
      local_b8 = param_3;
      (**(code **)(*plVar2 + 200))(plVar2,&local_68,0,1);
      if (((uStack_60 == 0x1000) && (lVar1 = param_1[1], lVar1 != 0)) &&
         (local_68 <= *(uint *)(lVar1 + 0x40))) {
        local_a8 = *param_3;
        uStack_a0 = param_3[1];
        local_b0 = param_6;
        local_98 = param_3[2];
        uStack_90 = param_3[3];
        local_88 = *(undefined4 *)(param_3 + 4);
        uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_80 = *(undefined4 *)(param_3 + 5);
        uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
        local_b8 = (undefined8 *)param_5;
        local_78 = param_3[6];
        iVar3 = FUN_141a50ab0(lVar1,param_2,&local_a8,param_4);
        if (-1 < iVar3) {
          return;
        }
      }
      lVar1 = *param_1;
      param_3[1] = 0x10000;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
      local_b8 = param_3;
      puVar4 = (ulonglong *)(**(code **)(*plVar2 + 200))(plVar2,local_58,0,1);
      lVar1 = param_1[2];
      local_68 = *puVar4;
      uStack_60 = puVar4[1];
      if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x40) < local_68)) {
        lVar1 = param_1[3];
        if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x40) < local_68)) goto LAB_141a50d7c;
        local_a8 = *param_3;
        uStack_a0 = param_3[1];
        local_b0 = param_6;
        local_98 = param_3[2];
        uStack_90 = param_3[3];
        local_88 = *(undefined4 *)(param_3 + 4);
        uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_80 = *(undefined4 *)(param_3 + 5);
        uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
        local_b8 = (undefined8 *)param_5;
        local_78 = param_3[6];
        iVar3 = FUN_141a50ab0(lVar1,param_2,&local_a8,param_4);
      }
      else {
        local_a8 = *param_3;
        uStack_a0 = param_3[1];
        local_b0 = param_6;
        local_98 = param_3[2];
        uStack_90 = param_3[3];
        local_88 = *(undefined4 *)(param_3 + 4);
        uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_80 = *(undefined4 *)(param_3 + 5);
        uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
        local_b8 = (undefined8 *)param_5;
        local_78 = param_3[6];
        iVar3 = FUN_141a50ab0(lVar1,param_2,&local_a8,param_4);
      }
      if (-1 < iVar3) {
        return;
      }
    }
    else {
      param_3[1] = 0;
    }
  }
LAB_141a50d7c:
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_b0 = param_6;
  local_98 = param_3[2];
  uStack_90 = param_3[3];
  local_88 = *(undefined4 *)(param_3 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_80 = *(undefined4 *)(param_3 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_b8 = (undefined8 *)param_5;
  local_78 = param_3[6];
  FUN_141a50810(param_1,param_2,&local_a8,param_4);
  return;
}



// FUNCTION 141a50de0 FUN_141a50de0 body=121 status=ok
// SIG undefined FUN_141a50de0(void)

void FUN_141a50de0(longlong param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_3;
  *(undefined4 *)(param_1 + 8) = 1;
  FStringTable::SetOwnerAsset();
  *(ulonglong *)(param_1 + 0x60) = uVar2;
  *(ulonglong *)(param_1 + 0x68) = uVar2;
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  if ((*(int *)(param_2 + 0xb8) != 1) && (*(int *)(param_2 + 0xb8) != 4)) {
    uVar1 = FUN_141a57830(param_2);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x78) = param_4;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 141a50e60 FUN_141a50e60 body=145 status=ok
// SIG undefined FUN_141a50e60(void)

void FUN_141a50e60(longlong *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *param_1;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x3c8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x3c8));
  }
  if (*(char *)(lVar1 + 0x3c0) != '\0') {
    TSet<FD3D12UniqueDescriptorTable<16>,FD3D12UniqueDescriptorTableKeyFuncs<FD3D12UniqueDescriptorTable<16>,0>,FDefaultSetAllocator>
    ::operator=(param_1 + 0x3e,lVar1 + 0x370);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x3c8));
  if ((char)param_1[0x48] == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 1;
    param_1[9] = *param_1 + 0x308;
    FUN_141a5fe20(param_1);
  }
  return;
}



// FUNCTION 141a50f00 FUN_141a50f00 body=180 status=ok
// SIG undefined FUN_141a50f00(void)

void FUN_141a50f00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = *(longlong *)(param_1 + 0xd50);
  FUN_141a55210(**(undefined8 **)(lVar3 + 0x5d8),local_28,0);
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_20,1);
    }
  }
  if (DAT_1464c9c58 != '\0') {
    FUN_141a55210(**(undefined8 **)(lVar3 + 0x620),local_18,0);
    if (local_10 != 0) {
      LOCK();
      piVar1 = (int *)(local_10 + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_141a4ed50(local_10,1);
      }
    }
  }
  FUN_141a7d960(*(undefined8 *)(lVar3 + 0x30));
  FUN_141a7d960(*(undefined8 *)(lVar3 + 0x38));
  FUN_141a7d960(*(undefined8 *)(lVar3 + 0x40));
  return;
}



// FUNCTION 141a50fc0 FUN_141a50fc0 body=748 status=ok
// SIG undefined FUN_141a50fc0(void)

ulonglong FUN_141a50fc0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint local_60;
  uint uStack_5c;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar2 = (longlong *)(param_1 + 0xa0);
    uStack_b4 = 1;
    uVar3 = *(uint *)(param_1 + 200);
    puVar1 = (uint *)(param_1 + 0xb0);
    local_b8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    if (uVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = *puVar13;
      uVar7 = uVar10;
      uVar11 = uVar10;
      while (uVar12 == 0) {
        iVar5 = (int)uVar7;
        uStack_a0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_a0;
        local_b8 = iVar5 + 1;
        uVar7 = (ulonglong)local_b8;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141a510bc;
        uVar12 = puVar13[(longlong)iVar5 + 1];
      }
      uStack_b4 = -uVar12 & uVar12;
      iVar5 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_a4 = (uStack_a0 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_a4) {
LAB_141a510bc:
        uStack_a4 = uVar3;
      }
    }
    uStack_5c = *(uint *)(param_1 + 200);
    uStack_48 = CONCAT44(uStack_b4,local_b8);
    uStack_80 = 0xffffffff;
    uStack_7c = uStack_a4;
    local_78 = CONCAT44(uStack_9c,uStack_a0);
    local_60 = -1 << ((byte)uStack_5c & 0x1f);
    uVar12 = uStack_5c & 0xffffffe0;
    uStack_90 = local_b8;
    uStack_8c = uStack_b4;
    local_88 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_30 = local_78;
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    uVar8 = uStack_5c;
    if (uStack_5c != uVar3) {
      puVar13 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar8 = puVar13[(int)uStack_5c >> 5] & local_60;
      iVar5 = (int)uStack_5c >> 5;
      while (uVar8 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141a51182;
        uVar8 = puVar13[(longlong)iVar5 + 1];
        local_60 = 0xffffffff;
        iVar5 = iVar5 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_5c = (uVar12 - iVar5) + 0x1f;
      uVar8 = uStack_5c;
      if ((int)uVar3 < (int)uStack_5c) {
LAB_141a51182:
        uStack_5c = uVar3;
        uVar8 = uVar3;
      }
    }
    while ((uStack_7c != uVar8 || (local_88 != puVar1))) {
      lVar6 = (**(code **)(**(longlong **)(*plVar2 + (longlong)(int)uStack_7c * 0x10) + 8))();
      uVar10 = uVar10 + lVar6;
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (0 < (longlong)uVar10) {
      return uVar10;
    }
  }
  lVar6 = DAT_1469fced0;
  if (0 < (longlong)*(int *)(DAT_1469fcf08 + 4)) {
    lVar6 = (longlong)*(int *)(DAT_1469fcf08 + 4) * 0x100000 + DAT_1469fce80;
  }
  lVar9 = (((DAT_1469fce78 - DAT_1469fce80) - DAT_1469fce90) - DAT_1469fce98) - DAT_1469fcea0;
  if (lVar9 < 1) {
    lVar9 = 0;
  }
  lVar9 = lVar9 - lVar6;
  if (0 < lVar9) {
    lVar6 = DAT_1469fceb8 + DAT_1469fceb0;
    if (lVar9 <= DAT_1469fceb8 + DAT_1469fceb0) {
      lVar6 = lVar9;
    }
    return -lVar6;
  }
  return 0;
}



// FUNCTION 141a512b0 FUN_141a512b0 body=97 status=ok
// SIG undefined FUN_141a512b0(void)

undefined8 FUN_141a512b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_res10 [6];
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if (param_2 != 0) {
    if (uVar1 < param_2) {
      local_res10[0] = 0x8007000e;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_res10,(ThrowInfo *)&DAT_1461db398);
    }
    if ((uVar1 < param_2 + (int)param_1[8]) && (*(uint *)((longlong)param_1 + 0x44) < param_2)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141a51320 FUN_141a51320 body=866 status=ok
// SIG undefined FUN_141a51320(void)

void FUN_141a51320(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong local_res18;
  
  plVar13 = *(longlong **)(param_1 + 8);
  plVar3 = plVar13 + *(int *)(param_1 + 0x10);
  do {
    if (plVar13 == plVar3) {
      return;
    }
    lVar4 = *plVar13;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x38);
    BVar9 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar9 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    puVar2 = (ulonglong *)(lVar4 + 0x80);
    local_res18 = 0;
    plVar17 = (longlong *)*puVar2;
    uVar12 = (longlong)*(int *)(lVar4 + 0x88) & 0x1fffffffffffffff;
    if (plVar17 + *(int *)(lVar4 + 0x88) < plVar17) {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      do {
        uVar15 = 0;
        lVar20 = *plVar17;
        BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar20 + 0x38));
        if (BVar9 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar20 + 0x38));
        }
        uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar20 + 8) + 0x10) + 0x738);
        uVar21 = uVar15;
        if (0 < *(int *)(lVar20 + 0xa0)) {
          do {
            uVar19 = (uint)uVar15;
            plVar16 = (longlong *)(*(longlong *)(lVar20 + 0x98) + uVar21);
            cVar8 = FUN_141a75550(uVar5,plVar16[1]);
            if (cVar8 == '\0') break;
            FUN_141a53d00(lVar20,plVar16[2]);
            if (*(int *)(lVar20 + 0x74) == 1) {
              puVar6 = (undefined8 *)*plVar16;
              LOCK();
              piVar1 = (int *)(puVar6 + 1);
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar18 == 1) && (puVar6 != (undefined8 *)0x0)) {
                (**(code **)*puVar6)(puVar6,1);
              }
              *plVar16 = 0;
            }
            uVar19 = uVar19 + 1;
            uVar15 = (ulonglong)uVar19;
            uVar21 = uVar21 + 0x20;
          } while ((int)uVar19 < *(int *)(lVar20 + 0xa0));
          if (uVar19 != 0) {
            iVar18 = *(int *)(lVar20 + 0xa0);
            if (iVar18 - uVar19 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (*(void **)(lVar20 + 0x98),
                         (void *)((longlong)(int)uVar19 * 0x20 + (longlong)*(void **)(lVar20 + 0x98)
                                 ),(longlong)(int)(iVar18 - uVar19) << 5);
              iVar18 = *(int *)(lVar20 + 0xa0);
            }
            *(uint *)(lVar20 + 0xa0) = iVar18 - uVar19;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar20 + 0x38));
        plVar17 = plVar17 + 1;
        local_res18 = local_res18 + 1;
      } while (local_res18 != uVar12);
    }
    uVar19 = 0;
    iVar18 = *(int *)(lVar4 + 0x88);
    iVar14 = iVar18 + -1;
    if (*(int *)(lVar4 + 0x78) <= iVar14) {
      lVar20 = (longlong)iVar14 * 8;
      do {
        lVar7 = *(longlong *)(lVar20 + *puVar2);
        lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar7 + 0x38);
        BVar9 = TryEnterCriticalSection(lpCriticalSection_00);
        if (BVar9 == 0) {
          EnterCriticalSection(lpCriticalSection_00);
        }
        LOCK();
        iVar10 = *(int *)(lVar7 + 0x108);
        if (iVar10 == 0) {
          *(int *)(lVar7 + 0x108) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        iVar11 = *(int *)(lVar7 + 0x68);
        LeaveCriticalSection(lpCriticalSection_00);
        if ((iVar10 == iVar11) && (uVar19 = uVar19 + 1, *(uint *)(lVar4 + 0x7c) < uVar19)) {
          FUN_141a53ff0(*(undefined8 *)(lVar20 + *puVar2));
          puVar6 = *(undefined8 **)(lVar20 + *puVar2);
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6,1);
          }
          iVar10 = *(int *)(lVar4 + 0x88);
          iVar11 = (iVar10 - iVar14) + -1;
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*puVar2 + (longlong)iVar14 * 8),
                       (void *)(*puVar2 + (longlong)iVar18 * 8),(longlong)iVar11 << 3);
            iVar10 = *(int *)(lVar4 + 0x88);
          }
          *(int *)(lVar4 + 0x88) = iVar10 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar2);
        }
        iVar14 = iVar14 + -1;
        iVar18 = iVar18 + -1;
        lVar20 = lVar20 + -8;
      } while (*(int *)(lVar4 + 0x78) <= iVar14);
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar13 = plVar13 + 1;
  } while( true );
}



// FUNCTION 141a51690 FUN_141a51690 body=757 status=ok
// SIG undefined FUN_141a51690(void)

void FUN_141a51690(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong local_70;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar2 = (ulonglong *)(param_1 + 0x80);
  plVar14 = (longlong *)*puVar2;
  local_70 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
  if (plVar14 + *(int *)(param_1 + 0x88) < plVar14) {
    uVar10 = 0;
  }
  if (uVar10 != 0) {
    do {
      uVar12 = 0;
      lVar17 = *plVar14;
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x38));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x38));
      }
      uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar17 + 8) + 0x10) + 0x738);
      uVar18 = uVar12;
      if (0 < *(int *)(lVar17 + 0xa0)) {
        do {
          uVar16 = (uint)uVar12;
          plVar13 = (longlong *)(*(longlong *)(lVar17 + 0x98) + uVar18);
          if ((param_2 == '\0') && (cVar6 = FUN_141a75550(uVar3,plVar13[1]), cVar6 == '\0')) break;
          FUN_141a53d00(lVar17,plVar13[2]);
          if (*(int *)(lVar17 + 0x74) == 1) {
            puVar4 = (undefined8 *)*plVar13;
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar15 == 1) && (puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *plVar13 = 0;
          }
          uVar16 = uVar16 + 1;
          uVar12 = (ulonglong)uVar16;
          uVar18 = uVar18 + 0x20;
        } while ((int)uVar16 < *(int *)(lVar17 + 0xa0));
        if (uVar16 != 0) {
          iVar15 = *(int *)(lVar17 + 0xa0);
          if (iVar15 - uVar16 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(lVar17 + 0x98),
                       (void *)((longlong)(int)uVar16 * 0x20 + (longlong)*(void **)(lVar17 + 0x98)),
                       (longlong)(int)(iVar15 - uVar16) << 5);
            iVar15 = *(int *)(lVar17 + 0xa0);
          }
          *(uint *)(lVar17 + 0xa0) = iVar15 - uVar16;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x38));
      plVar14 = plVar14 + 1;
      local_70 = local_70 + 1;
    } while (local_70 != uVar10);
  }
  uVar16 = 0;
  iVar15 = *(int *)(param_1 + 0x88);
  iVar11 = iVar15 + -1;
  if (*(int *)(param_1 + 0x78) <= iVar11) {
    lVar17 = (longlong)iVar11 * 8;
    do {
      lVar5 = *(longlong *)(lVar17 + *puVar2);
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar5 + 0x38);
      BVar7 = TryEnterCriticalSection(lpCriticalSection_00);
      if (BVar7 == 0) {
        EnterCriticalSection(lpCriticalSection_00);
      }
      LOCK();
      iVar8 = *(int *)(lVar5 + 0x108);
      if (iVar8 == 0) {
        *(int *)(lVar5 + 0x108) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      iVar9 = *(int *)(lVar5 + 0x68);
      LeaveCriticalSection(lpCriticalSection_00);
      if ((iVar8 == iVar9) && (uVar16 = uVar16 + 1, *(uint *)(param_1 + 0x7c) < uVar16)) {
        FUN_141a53ff0(*(undefined8 *)(lVar17 + *puVar2));
        puVar4 = *(undefined8 **)(lVar17 + *puVar2);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        iVar8 = *(int *)(param_1 + 0x88);
        iVar9 = (iVar8 - iVar11) + -1;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*puVar2 + (longlong)iVar11 * 8),
                     (void *)(*puVar2 + (longlong)iVar15 * 8),(longlong)iVar9 << 3);
          iVar8 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar8 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar2);
      }
      iVar11 = iVar11 + -1;
      iVar15 = iVar15 + -1;
      lVar17 = lVar17 + -8;
    } while (*(int *)(param_1 + 0x78) <= iVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a5197e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a51990 FUN_141a51990 body=1687 status=ok
// SIG undefined FUN_141a51990(void)

void FUN_141a51990(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  bool bVar19;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
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
  
  lVar11 = 0;
  FUN_141ee24f0();
  AK::MemoryMgr::StartProfileThreadUsage(lVar11);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  uVar12 = 0;
  DAT_146ab62c8 = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x710);
  uVar17 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(param_1 + 0x718) < puVar10) {
    uVar17 = uVar12;
  }
  uVar16 = uVar12;
  if (uVar17 != 0) {
    do {
      FUN_141a88e40(*puVar10);
      FUN_141a942b0(*puVar10);
      uVar16 = uVar16 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar16 != uVar17);
  }
  FUN_141a95940(param_1 + 0x210);
  plVar4 = (longlong *)(param_1 + 0xcf0);
  uStack_a4 = 1;
  uVar6 = *(uint *)(param_1 + 0xd18);
  puVar1 = (uint *)(param_1 + 0xd00);
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar6 != 0) {
    puVar18 = *(uint **)(param_1 + 0xd10);
    if (*(uint **)(param_1 + 0xd10) == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar14 = *puVar18;
    uVar17 = uVar12;
    while (uVar14 == 0) {
      iVar9 = (int)uVar12;
      uStack_90 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uStack_90;
      local_a8 = iVar9 + 1;
      uVar12 = (ulonglong)local_a8;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141a51b1f;
      uVar14 = puVar18[(longlong)iVar9 + 1];
    }
    uStack_a4 = -uVar14 & uVar14;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (uStack_90 - iVar9) + 0x1f;
    if ((int)uVar6 < (int)uStack_94) {
LAB_141a51b1f:
      uStack_94 = uVar6;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0xd18);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  local_88 = (int)uStack_74 >> 5;
  uStack_84 = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uStack_70 = uStack_74 & 0xffffffe0;
  uStack_6c = uStack_94;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  puStack_a0 = puVar1;
  local_50 = puVar1;
  local_40 = uStack_68;
  local_60 = plVar4;
  uVar14 = uStack_74;
  if (uStack_74 != uVar6) {
    puVar18 = *(uint **)(param_1 + 0xd10);
    if (*(uint **)(param_1 + 0xd10) == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar14 = puVar18[local_88] & uStack_78;
    while (uVar14 == 0) {
      lVar13 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar19 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar19) goto LAB_141a51bfd;
      uVar14 = puVar18[lVar13 + 1];
      uStack_78 = 0xffffffff;
    }
    uVar14 = -uVar14 & uVar14;
    iVar9 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uStack_70 - iVar9) + 0x1f;
    uVar14 = uStack_74;
    if ((int)uVar6 < (int)uStack_74) {
LAB_141a51bfd:
      uStack_74 = uVar6;
      uVar14 = uVar6;
    }
  }
  while (((uStack_44 != uVar14 || (local_50 != puVar1)) || (local_60 != plVar4))) {
    FUN_141a702a0((longlong)(int)uStack_44 * 0x98 + *local_60 + 0x10);
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  puVar10 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar10 = (undefined8 *)*puVar10; puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)*puVar10) {
    (**(code **)(*(longlong *)puVar10[2] + 0x20))();
  }
  puVar10 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar10 = (undefined8 *)*puVar10; puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)*puVar10) {
    (**(code **)(*(longlong *)puVar10[2] + 0x10))();
  }
  puVar10 = (undefined8 *)(param_1 + 0xd40);
  FUN_141a541e0(*puVar10);
  iVar9 = 0;
  lVar13 = 0;
  local_b0 = (longlong *)0x0;
  if (puVar10 != &local_b8) {
    *puVar10 = 0;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd48,&local_b0);
    plVar4 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  FUN_141ec6070(0);
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar15 + 0x48)) {
    do {
      FUN_141a45530(*(undefined8 *)(*(longlong *)(lVar15 + 0x38) + lVar13));
      lVar15 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar13 + *(longlong *)(lVar15 + 0x38));
      if (lVar7 != 0) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x38));
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar7,0x60);
        lVar15 = *(longlong *)(param_1 + 0x10);
      }
      iVar9 = iVar9 + 1;
      lVar13 = lVar13 + 8;
    } while (iVar9 < *(int *)(lVar15 + 0x48));
  }
  FUN_141a7bd00(param_1 + 0x740,1);
  (**(code **)(**(longlong **)(param_1 + 0xd50) + 8))();
  puVar10 = *(undefined8 **)(param_1 + 0xd50);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  *(undefined8 *)(param_1 + 0xd50) = 0;
  (**(code **)(*(longlong *)(param_1 + 0xc00) + 0x30))();
  *(undefined4 *)(param_1 + 0x718) = 0;
  if (*(int *)(param_1 + 0x71c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x710,0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x720) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar10 + 1);
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      if (*(char *)(puVar10 + 2) == '\0') {
        if (DAT_146ab62f5 == '\0') {
          cVar8 = FOutputDevice::CanBeUsedOnAnyThread();
          if (cVar8 != '\0') goto LAB_141a51e2e;
        }
        LOCK();
        bVar19 = *(int *)((longlong)puVar10 + 0xc) == 0;
        if (bVar19) {
          *(int *)((longlong)puVar10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar19) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar10);
        }
      }
      else {
LAB_141a51e2e:
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x700);
  iVar9 = *(int *)(lVar13 + 0x90) + -1;
  lVar15 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      FUN_141a53ff0(*(undefined8 *)(*(longlong *)(lVar13 + 0x88) + lVar15 * 8));
      puVar10 = *(undefined8 **)(*(longlong *)(lVar13 + 0x88) + lVar15 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  *(undefined4 *)(lVar13 + 0x90) = 0;
  if (*(int *)(lVar13 + 0x94) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar13 + 0x88,0);
  }
  lVar13 = *(longlong *)(param_1 + 0x700);
  if (lVar13 != 0) {
    if (*(longlong *)(lVar13 + 0x88) != 0) {
      FMemory::Free();
    }
    *(undefined ***)(lVar13 + 8) = &PTR_FUN_144da6570;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x40));
    if (*(longlong *)(lVar13 + 0x20) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar13,0x98);
  }
  lVar13 = *(longlong *)(param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x700) = 0;
  iVar9 = *(int *)(lVar13 + 0x90) + -1;
  lVar15 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      FUN_141a53ff0(*(undefined8 *)(*(longlong *)(lVar13 + 0x88) + lVar15 * 8));
      puVar10 = *(undefined8 **)(*(longlong *)(lVar13 + 0x88) + lVar15 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  *(undefined4 *)(lVar13 + 0x90) = 0;
  if (*(int *)(lVar13 + 0x94) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar13 + 0x88,0);
  }
  lVar13 = *(longlong *)(param_1 + 0x708);
  if (lVar13 != 0) {
    if (*(longlong *)(lVar13 + 0x88) != 0) {
      FMemory::Free();
    }
    *(undefined ***)(lVar13 + 8) = &PTR_FUN_144da6570;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x40));
    if (*(longlong *)(lVar13 + 0x20) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar13,0x98);
  }
  *(undefined8 *)(param_1 + 0x708) = 0;
  if (*(longlong *)(param_1 + 0x738) == 0) goto LAB_141a52001;
  FUN_141a702a0();
  puVar10 = *(undefined8 **)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x738) = 0;
  if (puVar10 == (undefined8 *)0x0) goto LAB_141a52001;
  LOCK();
  piVar3 = (int *)(puVar10 + 1);
  iVar9 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar9 != 1) goto LAB_141a52001;
  if (*(char *)(puVar10 + 2) == '\0') {
    if (DAT_146ab62f5 == '\0') {
      cVar8 = FOutputDevice::CanBeUsedOnAnyThread();
      if (cVar8 != '\0') goto LAB_141a51ff6;
    }
    LOCK();
    bVar19 = *(int *)((longlong)puVar10 + 0xc) == 0;
    if (bVar19) {
      *(int *)((longlong)puVar10 + 0xc) = 1;
    }
    UNLOCK();
    if (bVar19) {
      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar10);
    }
  }
  else {
LAB_141a51ff6:
    (**(code **)*puVar10)(puVar10,1);
  }
LAB_141a52001:
  FD3D12FenceCorePool::Destroy(param_1 + 0x6c0);
  return;
}



// FUNCTION 141a52030 FUN_141a52030 body=606 status=ok
// SIG undefined FUN_141a52030(void)

void FUN_141a52030(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  FUN_141a7d960(*(undefined8 *)(param_1 + 0x30));
  FUN_141a7d960(*(undefined8 *)(param_1 + 0x38));
  FUN_141a7d960(*(undefined8 *)(param_1 + 0x40));
  TSparseArray<TSetElement<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x630,0);
  uVar9 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x678)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x678);
    uVar7 = uVar9;
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x678) - 1U & uVar7;
      lVar5 = *(longlong *)(param_1 + 0x670);
      if (*(longlong *)(param_1 + 0x670) == 0) {
        lVar5 = param_1 + 0x668;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar5 + uVar4 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar2 = *(int *)(param_1 + 0x5e0) + -1;
  lVar5 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x5d8);
      plVar10 = *(longlong **)(lVar3 + lVar5 * 8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x90))(plVar10,1);
        lVar3 = *(longlong *)(param_1 + 0x5d8);
      }
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  FUN_141ec6070(0);
  plVar10 = (longlong *)(param_1 + 0x8b8);
  lVar5 = 0x10;
  do {
    if (*plVar10 != 0) {
      FUN_141a51320(*plVar10);
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        plVar6 = *(longlong **)(lVar3 + 8);
        uVar7 = (longlong)*(int *)(lVar3 + 0x10) & 0x1fffffffffffffff;
        if (plVar6 + *(int *)(lVar3 + 0x10) < plVar6) {
          uVar7 = uVar9;
        }
        uVar8 = uVar9;
        if (uVar7 != 0) {
          do {
            puVar1 = (undefined8 *)*plVar6;
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,1);
            }
            plVar6 = plVar6 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar7);
          plVar6 = *(longlong **)(lVar3 + 8);
        }
        if (plVar6 != (longlong *)0x0) {
          FMemory::Free(plVar6);
        }
        FMemory::operator_delete(lVar3,0x18);
      }
    }
    *plVar10 = 0;
    plVar10 = plVar10 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_141a45530(param_1 + 0x850);
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_141a51690(*(longlong *)(param_1 + 0x6c8) + 0x10,0);
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FUN_141a51690(*(longlong *)(param_1 + 0x6d0) + 0x10,0);
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_141a51690(*(longlong *)(param_1 + 0x6d8) + 0x10,0);
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_141a54290(*(longlong *)(param_1 + 0x6c8) + 0x10);
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FUN_141a54290(*(longlong *)(param_1 + 0x6d0) + 0x10);
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_141a54290(*(longlong *)(param_1 + 0x6d8) + 0x10);
  }
  FUN_141a6ffc0(*(undefined8 *)(param_1 + 0x30));
  FUN_141a6ffc0(*(undefined8 *)(param_1 + 0x38));
  FUN_141a6ffc0(*(undefined8 *)(param_1 + 0x40));
  FUN_141a70420(param_1 + 0x4d8);
  FUN_141a70420(param_1 + 0x558);
  return;
}



// FUNCTION 141a52290 FUN_141a52290 body=246 status=ok
// SIG undefined FUN_141a52290(void)

void FUN_141a52290(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  BOOL BVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  }
  uStack_30 = 0;
  uStack_28 = 0;
  while (**(longlong **)(param_1 + 0x68) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x68);
    local_38 = *(undefined8 *)(lVar1 + 8);
    uStack_30 = *(undefined8 *)(lVar1 + 0x10);
    uStack_28 = *(undefined8 *)(lVar1 + 0x18);
    cVar3 = FUN_141a88e20(&uStack_30);
    if (cVar3 == '\0') break;
    lVar1 = **(longlong **)(param_1 + 0x68);
    if (lVar1 != 0) {
      local_38 = *(undefined8 *)(lVar1 + 8);
      uStack_30 = *(undefined8 *)(lVar1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      local_20 = 0;
      uStack_18 = 0;
      uStack_28 = *(undefined8 *)(lVar1 + 0x18);
      *(longlong *)(param_1 + 0x68) = lVar1;
      *(undefined4 *)(lVar1 + 8) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      local_10 = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      FMemory::operator_delete(uVar2,0x20);
    }
    *(undefined8 *)(param_1 + 0x48) = local_38;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return;
}



// FUNCTION 141a52390 FUN_141a52390 body=326 status=ok
// SIG undefined FUN_141a52390(void)

void FUN_141a52390(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = FUN_141a7d850(*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x738));
  iVar8 = (int)param_1[4] + -1;
  if (-1 < iVar8) {
    lVar11 = (longlong)(int)param_1[4] << 3;
    lVar9 = (longlong)iVar8 * 8;
    lVar10 = lVar9;
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1[3] + lVar9) + 8) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 == 1) {
        lVar2 = param_1[3];
        lVar3 = *(longlong *)(lVar9 + lVar2);
        if ((ulonglong)(*(longlong *)(lVar3 + 0x20) + param_2) <= uVar7) {
          iVar5 = (int)param_1[4];
          iVar6 = (iVar5 - iVar8) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar10 + lVar2),(void *)(lVar11 + lVar2),(longlong)iVar6 << 3);
            iVar5 = (int)param_1[4];
          }
          *(int *)(param_1 + 4) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 3);
          if (lVar3 != 0) {
            puVar4 = *(undefined8 **)(lVar3 + 8);
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 1);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar5 == 1) && (puVar4 != (undefined8 *)0x0)) {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
            FMemory::operator_delete(lVar3,0x28);
          }
        }
      }
      lVar11 = lVar11 + -8;
      lVar10 = lVar10 + -8;
      lVar9 = lVar9 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 141a524e0 FUN_141a524e0 body=400 status=ok
// SIG undefined FUN_141a524e0(void)

void FUN_141a524e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  
  (**(code **)(*(longlong *)(param_1 + 0x4e0) + 8))();
  *(undefined1 *)(param_1 + 0x2c40) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2630),0,0x300);
  plVar6 = (longlong *)(param_1 + 0x2930);
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x2c30) = 0;
  *(undefined4 *)(param_1 + 0x2c38) = 0;
  uVar5 = uVar7;
  uVar9 = uVar7;
  plVar8 = plVar6;
  do {
    do {
      puVar3 = (undefined8 *)*plVar6;
      *plVar6 = 0;
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
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3);
          }
        }
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 < 0x10);
    uVar9 = uVar9 + 1;
    plVar6 = plVar8 + 0x10;
    uVar5 = uVar7;
    plVar8 = plVar6;
  } while (uVar9 < 6);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2598),0,0x80);
  *(undefined4 *)(param_1 + 0x262c) = 0;
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    *(undefined8 *)(param_1 + 0x2558) = 0;
    *(undefined8 *)(param_1 + 0x2560) = 0;
    *(undefined8 *)(param_1 + 0x2568) = 0;
    *(undefined8 *)(param_1 + 0x2570) = 0;
    *(undefined8 *)(param_1 + 0x2578) = 0;
    *(undefined8 *)(param_1 + 0x2580) = 0;
    *(undefined8 *)(param_1 + 0x2588) = 0;
    *(undefined8 *)(param_1 + 0x2590) = 0;
    *(undefined4 *)(param_1 + 0x2628) = 0;
    *(undefined8 *)(param_1 + 0x2618) = 0;
    *(undefined8 *)(param_1 + 0x2620) = 0;
    *(undefined4 *)(param_1 + 0x2c3c) = 0x22;
    *(undefined1 *)(param_1 + 0x2c41) = 0;
  }
  return;
}



// FUNCTION 141a52670 FUN_141a52670 body=139 status=ok
// SIG undefined FUN_141a52670(void)

void FUN_141a52670(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x100) != 0) {
      (**(code **)(*plVar2 + 0xd0))
                (plVar2,*(int *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf8));
      *(undefined4 *)(param_1 + 0x100) = 0;
      plVar2 = *(longlong **)(param_1 + 0x28);
    }
    iVar1 = (**(code **)(*plVar2 + 0x48))();
    if (iVar1 < 0) {
      local_18 = 0;
      local_10 = 0;
      FUN_141a94000(iVar1,"CommandList->Close()",
                    "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h",
                    0x46,0,&local_18);
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 141a52700 FUN_141a52700 body=203 status=ok
// SIG undefined FUN_141a52700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a52700(longlong param_1)

{
  char cVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [64];
  undefined8 local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)(param_1 + 0x2c40);
  FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
  uVar2 = *(uint *)(param_1 + 0x8ee0);
  if (uVar2 != 0) {
    uVar3 = uVar2;
    if ((cVar1 == '\0') &&
       (uVar3 = *(uint *)(param_1 + 0x8ee4), *(uint *)(param_1 + 0x8ee4) <= uVar2)) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x8ee4) = uVar3;
    _Dst = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x8ef0),uVar3,local_98);
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(param_1 + 0x7ee0),(ulonglong)*(uint *)(param_1 + 0x8ee4));
    *(undefined1 *)(param_1 + 0x8ee8) = 0;
    *(undefined8 *)(param_1 + 0x1bd8) = local_58;
    *(ushort *)(param_1 + 0x1952) = *(ushort *)(param_1 + 0x1952) | 1;
  }
  thunk_FUN_141a7bb70(local_98);
  return;
}



// FUNCTION 141a527d0 FUN_141a527d0 body=113 status=ok
// SIG undefined FUN_141a527d0(void)

void FUN_141a527d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x518);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    FUN_141a47a20();
  }
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_141a477f0(param_1);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_141a475c0(param_1);
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_141a47160(param_1);
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_141a47390(param_1);
  }
  return;
}



// FUNCTION 141a52850 FUN_141a52850 body=855 status=ok
// SIG undefined FUN_141a52850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a52850(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [64];
  undefined8 local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x518);
  if (*(char *)(lVar3 + 0x118) != '\0') {
    cVar1 = *(char *)(param_1 + 0x2c40);
    FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
    uVar2 = *(uint *)(param_1 + 0x3da0);
    if (uVar2 != 0) {
      uVar5 = uVar2;
      if ((cVar1 == '\0') &&
         (uVar5 = *(uint *)(param_1 + 0x3da4), *(uint *)(param_1 + 0x3da4) <= uVar2)) {
        uVar5 = uVar2;
      }
      *(uint *)(param_1 + 0x3da4) = uVar5;
      pvVar4 = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x3db0),uVar5,local_98);
      _guard_xfg_dispatch_icall_nop
                (pvVar4,(void *)(param_1 + 0x2da0),(ulonglong)*(uint *)(param_1 + 0x3da4));
      *(undefined1 *)(param_1 + 0x3da8) = 0;
      *(undefined8 *)(param_1 + 0x1958) = local_58;
      *(ushort *)(param_1 + 0x1948) = *(ushort *)(param_1 + 0x1948) | 1;
    }
    thunk_FUN_141a7bb70(local_98);
  }
  if (*(char *)(param_1 + 0x2c41) != '\0') {
    if (*(char *)(lVar3 + 0x119) != '\0') {
      cVar1 = *(char *)(param_1 + 0x2c40);
      FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
      uVar2 = *(uint *)(param_1 + 0x4de0);
      if (uVar2 != 0) {
        uVar5 = uVar2;
        if ((cVar1 == '\0') &&
           (uVar5 = *(uint *)(param_1 + 0x4de4), *(uint *)(param_1 + 0x4de4) <= uVar2)) {
          uVar5 = uVar2;
        }
        *(uint *)(param_1 + 0x4de4) = uVar5;
        pvVar4 = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x4df0),uVar5,local_98);
        _guard_xfg_dispatch_icall_nop
                  (pvVar4,(void *)(param_1 + 0x3de0),(ulonglong)*(uint *)(param_1 + 0x4de4));
        *(undefined1 *)(param_1 + 0x4de8) = 0;
        *(undefined8 *)(param_1 + 0x19d8) = local_58;
        *(ushort *)(param_1 + 0x194a) = *(ushort *)(param_1 + 0x194a) | 1;
      }
      thunk_FUN_141a7bb70(local_98);
    }
    if (*(char *)(lVar3 + 0x11a) != '\0') {
      cVar1 = *(char *)(param_1 + 0x2c40);
      FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
      uVar2 = *(uint *)(param_1 + 0x5e20);
      if (uVar2 != 0) {
        uVar5 = uVar2;
        if ((cVar1 == '\0') &&
           (uVar5 = *(uint *)(param_1 + 0x5e24), *(uint *)(param_1 + 0x5e24) <= uVar2)) {
          uVar5 = uVar2;
        }
        *(uint *)(param_1 + 0x5e24) = uVar5;
        pvVar4 = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x5e30),uVar5,local_98);
        _guard_xfg_dispatch_icall_nop
                  (pvVar4,(void *)(param_1 + 20000),(ulonglong)*(uint *)(param_1 + 0x5e24));
        *(undefined1 *)(param_1 + 0x5e28) = 0;
        *(undefined8 *)(param_1 + 0x1a58) = local_58;
        *(ushort *)(param_1 + 0x194c) = *(ushort *)(param_1 + 0x194c) | 1;
      }
      thunk_FUN_141a7bb70(local_98);
    }
  }
  if (*(char *)(lVar3 + 0x11c) != '\0') {
    cVar1 = *(char *)(param_1 + 0x2c40);
    FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
    uVar2 = *(uint *)(param_1 + 0x7ea0);
    if (uVar2 != 0) {
      uVar5 = uVar2;
      if ((cVar1 == '\0') &&
         (uVar5 = *(uint *)(param_1 + 0x7ea4), *(uint *)(param_1 + 0x7ea4) <= uVar2)) {
        uVar5 = uVar2;
      }
      *(uint *)(param_1 + 0x7ea4) = uVar5;
      pvVar4 = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x7eb0),uVar5,local_98);
      _guard_xfg_dispatch_icall_nop
                (pvVar4,(void *)(param_1 + 0x6ea0),(ulonglong)*(uint *)(param_1 + 0x7ea4));
      *(undefined1 *)(param_1 + 0x7ea8) = 0;
      *(undefined8 *)(param_1 + 7000) = local_58;
      *(ushort *)(param_1 + 0x1950) = *(ushort *)(param_1 + 0x1950) | 1;
    }
    thunk_FUN_141a7bb70(local_98);
  }
  if (*(char *)(lVar3 + 0x11b) != '\0') {
    cVar1 = *(char *)(param_1 + 0x2c40);
    FUN_141a67840(local_98,*(undefined8 *)(param_1 + 0x4f0));
    uVar2 = *(uint *)(param_1 + 0x6e60);
    if (uVar2 != 0) {
      uVar5 = uVar2;
      if ((cVar1 == '\0') &&
         (uVar5 = *(uint *)(param_1 + 0x6e64), *(uint *)(param_1 + 0x6e64) <= uVar2)) {
        uVar5 = uVar2;
      }
      *(uint *)(param_1 + 0x6e64) = uVar5;
      pvVar4 = (void *)FUN_141a501d0(*(undefined8 *)(param_1 + 0x6e70),uVar5,local_98);
      _guard_xfg_dispatch_icall_nop
                (pvVar4,(void *)(param_1 + 0x5e60),(ulonglong)*(uint *)(param_1 + 0x6e64));
      *(undefined1 *)(param_1 + 0x6e68) = 0;
      *(undefined8 *)(param_1 + 0x1ad8) = local_58;
      *(ushort *)(param_1 + 0x194e) = *(ushort *)(param_1 + 0x194e) | 1;
    }
    thunk_FUN_141a7bb70(local_98);
  }
  *(undefined1 *)(param_1 + 0x2c40) = 0;
  return;
}



// FUNCTION 141a52bb0 FUN_141a52bb0 body=171 status=ok
// SIG undefined FUN_141a52bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a52bb0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_141a7cc80(param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x2628),param_1 + 0x2558,
                *(undefined8 *)(param_1 + 0x2618));
  uVar1 = *(uint *)(param_1 + 0x262c);
  if (uVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x2628);
    puVar4 = local_58;
    for (uVar3 = (ulonglong)uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    local_68 = local_58;
    FUN_141a65710(param_1 + 0x4e0,uVar2,(ulonglong)uVar1,param_1 + 0x2598);
  }
  return;
}



// FUNCTION 141a52c60 Compact body=592 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0xb8 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0xb8 + lVar5),
                   (void *)((longlong)iVar13 * 0xb8 + lVar5),0xb8);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar17 * 0xb8 + *param_1),
               (void *)((longlong)iVar3 * 0xb8 + *param_1),(longlong)iVar8 * 0xb8);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeShrink(param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 141a52eb0 FUN_141a52eb0 body=449 status=ok
// SIG undefined FUN_141a52eb0(void)

void FUN_141a52eb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x4e0;
  iVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x1930)) {
    plVar2 = (longlong *)(param_1 + 0xd00);
    iVar3 = 0;
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a655e0(lVar1,0,iVar3);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x1930));
  }
  if (-1 < *(int *)(param_1 + 0x1934)) {
    plVar2 = (longlong *)(param_1 + 0xf00);
    iVar3 = 0;
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a64ff0(lVar1,0,iVar3);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x1934));
  }
  if (-1 < *(int *)(param_1 + 0x1938)) {
    plVar2 = (longlong *)(param_1 + 0x1100);
    iVar3 = 0;
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a65120(lVar1,0,iVar3);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x1938));
  }
  if (-1 < *(int *)(param_1 + 0x193c)) {
    plVar2 = (longlong *)(param_1 + 0x1300);
    iVar3 = 0;
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a65250(lVar1,0,iVar3);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x193c));
  }
  if (-1 < *(int *)(param_1 + 0x1940)) {
    plVar2 = (longlong *)(param_1 + 0x1500);
    iVar3 = 0;
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a65380(lVar1,0,iVar3);
      }
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x1940));
  }
  if (-1 < *(int *)(param_1 + 0x1944)) {
    plVar2 = (longlong *)(param_1 + 0x1700);
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x40) == param_2)) {
        FUN_141a654b0(lVar1,0,iVar4);
      }
      iVar4 = iVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar4 <= *(int *)(param_1 + 0x1944));
  }
  return;
}



// FUNCTION 141a53080 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FD3D12UniqueDescriptorTable<16>,FD3D12UniqueDescriptorTableKeyFuncs<FD3D12UniqueDescriptorTable<16>,0>,FDefaultSetAllocator>
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
      FUN_141a5e3d0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a53130 FUN_141a53130 body=153 status=ok
// SIG undefined FUN_141a53130(void)

undefined8 FUN_141a53130(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  cVar5 = '\0';
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar5 = '\x1f' - (char)iVar1;
  }
  uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
  uVar2 = 8;
  if ((7 < uVar3) && (uVar2 = uVar3, param_2 < 4)) {
    uVar2 = 8;
  }
  if ((0 < (int)param_2) &&
     (((iVar1 = *(int *)(param_1 + 0x1d8), iVar1 == 0 || (iVar1 < (int)uVar2)) ||
      (((int)uVar2 < iVar1 && (param_3 != '\0')))))) {
    *(uint *)(param_1 + 0x1d8) = uVar2;
    FUN_141a5e5f0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 141a531d0 FUN_141a531d0 body=103 status=ok
// SIG undefined FUN_141a531d0(void)

void FUN_141a531d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x110);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141a4ba90(lVar1,param_2,param_3,param_4,param_5);
  }
  *(longlong *)(param_1 + 8) = lVar2;
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 141a53240 FUN_141a53240 body=706 status=ok
// SIG undefined FUN_141a53240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a53240(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  uint local_78;
  undefined8 local_70;
  uint local_68;
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FTaskGraphInterface::Get();
  uVar10 = *DAT_146ab6ce0;
  iVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
  uVar3 = iVar2 + 1;
  if ((int)uVar3 < 1) {
    uVar10 = 1;
  }
  else if ((int)uVar3 < (int)uVar10) {
    uVar10 = uVar3;
  }
  uVar9 = 0;
  plVar4 = (longlong *)(param_1 + 0x5d8);
  uVar3 = (uint)(DAT_1464c9c58 != '\0');
  local_68 = uVar3;
  local_50 = plVar4;
  if (*(int *)(param_1 + 0x5e4) < (int)uVar10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,uVar10);
  }
  iVar2 = uVar10 - 1;
  plVar12 = (longlong *)(param_1 + 0x5e8);
  if (*(int *)(param_1 + 0x5f4) < iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar12,iVar2);
  }
  pvVar5 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,iVar2,iVar2,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0x18) = pvVar5;
  if (*(int *)(param_1 + 0x62c) < (int)uVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x620);
  }
  uVar6 = (**(code **)(*(longlong *)(param_1 + 0x3f0) + 0x18))();
  local_70 = (ulonglong)local_70._4_4_ << 0x20;
  uVar6 = (uVar6 & 0xffffffff) / (ulonglong)(uVar3 + uVar10);
  local_78 = (uint)uVar6;
  uVar8 = uVar9;
  uVar11 = uVar9;
  if (uVar10 != 0) {
    do {
      local_60 = param_1 + 0x3f0;
      local_54 = (undefined4)uVar6;
      local_88 = 0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
      local_58 = uVar11;
      local_70 = (**(code **)(*plVar1 + 0x740))(plVar1,param_1,&local_60,uVar8 == 0);
      uVar11 = uVar11 + local_78;
      local_40 = DAT_1464c9c64;
      local_3c = DAT_1464c9c64;
      local_48 = 0;
      FUN_141a7ce50(local_70 + 0x4e0,&local_48);
      iVar2 = *(int *)(param_1 + 0x5e0);
      *(int *)(param_1 + 0x5e0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x5e4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
      }
      *(longlong *)(*plVar4 + (longlong)iVar2 * 8) = local_70;
      if (uVar8 != 0) {
        local_70 = *plVar4;
        iVar2 = *(int *)(param_1 + 0x5f0);
        *(int *)(param_1 + 0x5f0) = iVar2 + 1;
        if (*(int *)(param_1 + 0x5f4) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar2);
        }
        *(undefined8 *)(*plVar12 + (longlong)iVar2 * 8) =
             *(undefined8 *)(local_70 + (longlong)(int)uVar8 * 8);
      }
      uVar6 = (ulonglong)local_78;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
    local_70 = CONCAT44(local_70._4_4_,uVar11);
    uVar3 = local_68;
  }
  plVar12 = (longlong *)(param_1 + 0x620);
  if (uVar3 != 0) {
    uVar10 = (uint)local_70;
    do {
      local_54 = (undefined4)uVar6;
      local_60 = param_1 + 0x3f0;
      local_88 = 1;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
      local_58 = uVar10;
      uVar7 = (**(code **)(*plVar4 + 0x740))(plVar4,param_1,&local_60,uVar9 == 0);
      iVar2 = *(int *)(param_1 + 0x628);
      uVar10 = uVar10 + local_78;
      *(int *)(param_1 + 0x628) = iVar2 + 1;
      if (*(int *)(param_1 + 0x62c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar2);
      }
      uVar9 = uVar9 + 1;
      *(undefined8 *)(*plVar12 + (longlong)iVar2 * 8) = uVar7;
      uVar6 = (ulonglong)local_78;
      plVar4 = local_50;
    } while (uVar9 < uVar3);
  }
  FUN_141a58a90(*(undefined8 *)*plVar4);
  if (DAT_1464c9c58 != '\0') {
    FUN_141a58a90(*(undefined8 *)*plVar12);
  }
  return;
}



// FUNCTION 141a53510 FUN_141a53510 body=28 status=ok
// SIG undefined FUN_141a53510(void)

longlong FUN_141a53510(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141a53530();
  if (lVar1 != 0) {
    return lVar1 + 0x30;
  }
  return 0;
}



// FUNCTION 141a53530 FUN_141a53530 body=392 status=ok
// SIG undefined FUN_141a53530(void)

longlong * FUN_141a53530(longlong param_1,char param_2)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  plVar7 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x88);
  iVar5 = *(int *)(param_1 + 0xc4);
  if (*(int *)(lVar3 + 8 + (longlong)iVar2 * 0x10) <= iVar5) {
    lVar3 = operator_new(0x88);
    plVar4 = plVar7;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_141a663c0(lVar3,*(undefined8 *)(param_1 + 200),1);
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0xc0) * 0x10 + *(longlong *)(param_1 + 0x88))
    ;
    iVar2 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar4 + 6;
    iVar5 = *(int *)(param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xc0);
    lVar3 = *(longlong *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0xc4) = iVar5 + 1;
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + (longlong)iVar2 * 0x10) + (longlong)iVar5 * 8);
  plVar4 = (longlong *)(lVar3 + -0x30);
  if (lVar3 == 0) {
    plVar4 = plVar7;
  }
  if (param_2 == '\0') {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa0);
    plVar6 = plVar4 + 6;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    *(int *)(param_1 + 0xa0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar2);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = plVar6;
    iVar2 = *(int *)(param_1 + 0xc0) * 10000 + *(int *)(param_1 + 0xa0);
  }
  *(int *)(plVar4 + 7) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return plVar4;
}



// FUNCTION 141a536c0 FUN_141a536c0 body=911 status=ok
// SIG undefined FUN_141a536c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a536c0(longlong param_1,char param_2)

{
  wchar_t _C;
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong **local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar1 = *(longlong **)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x728) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar7 = _guard_xfg_dispatch_icall_nop(&DAT_144da7080,param_1 + 0x728);
  if (iVar7 < 0) {
    local_f0 = &local_e8;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_f8 = 0;
    FUN_141a94000(iVar7,"::CreateDXGIFactory(IID_PPV_ARGS(DxgiFactory.GetInitReference()))",
                  "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12Adapter.h",0xb8);
  }
  plVar1 = *(longlong **)(param_1 + 0x730);
  puVar2 = *(undefined8 **)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x730) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar7 = (**(code **)*puVar2)(puVar2,&DAT_144da1e48,param_1 + 0x730);
  if (iVar7 < 0) {
    local_f0 = &local_e8;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_f8 = 0;
    FUN_141a94000(iVar7,"DxgiFactory->QueryInterface(IID_PPV_ARGS(DxgiFactory2.GetInitReference()))"
                  ,"d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12Adapter.h",0xb9)
    ;
  }
  local_d0 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x38))
            (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x48),&local_d0);
  plVar3 = local_d0;
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar7 = (**(code **)*plVar3)(plVar3,&DAT_144da7190,param_1 + 0x188);
  if (iVar7 < 0) {
    local_f0 = &local_e8;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_f8 = 0;
    FUN_141a94000(iVar7,"TempAdapter->QueryInterface(IID_PPV_ARGS(DxgiAdapter.GetInitReference()))",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",0xf2
                 );
  }
  for (pwVar9 = L"NVIDIA PerfHUD";
      (_C = *(wchar_t *)(param_1 + -0x144da2c78 + (longlong)pwVar9), _C != L'\0' ||
      (*pwVar9 != L'\0')); pwVar9 = pwVar9 + 1) {
    if (_C != *pwVar9) {
      wVar5 = towlower(_C);
      wVar6 = towlower(*pwVar9);
      if (wVar5 != wVar6) break;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar7 = _guard_xfg_dispatch_icall_nop
                    (*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x4c),&DAT_144da61b8
                     ,param_1 + 0x18);
  if (iVar7 < 0) {
    local_f0 = &local_e8;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    local_f8 = 0;
    FUN_141a94000(iVar7,
                  "D3D12CreateDevice( GetAdapter(), GetFeatureLevel(), IID_PPV_ARGS(RootDevice.GetInitReference()) )"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x109);
  }
  if (param_2 != '\0') {
    local_e8 = (longlong *)0x0;
    iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x18))
                      (*(undefined8 **)(param_1 + 0x18),&DAT_144da71a0,&local_e8);
    if (iVar7 < 0) {
      local_f0 = &local_c8;
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      local_f8 = 0;
      FUN_141a94000(iVar7,
                    "RootDevice->QueryInterface(__uuidof(ID3D12InfoQueue), (void**)&pd3dInfoQueue)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                    0x11f);
    }
    plVar1 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x60);
      local_70 = local_d8;
      local_60 = &local_58;
      local_d8[0] = 3;
      local_78 = 1;
      local_58 = 0xfd000000f2;
      uStack_50 = 0x334000000d5;
      local_38 = 0x3cb;
      local_48 = 0x39f00000335;
      uStack_40 = 0x2d1000003f0;
      local_68 = 9;
      (**(code **)(*plVar1 + 0x88))(plVar1,local_b8);
      (**(code **)(*local_e8 + 0xf8))(local_e8,1,1);
      uVar8 = FCommandLine::Get();
      cVar4 = FParse::Param(uVar8,L"d3dbreakonwarning");
      if (cVar4 != '\0') {
        (**(code **)(*local_e8 + 0xf8))(local_e8,2,1);
      }
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  return;
}



// FUNCTION 141a53a50 FUN_141a53a50 body=452 status=ok
// SIG undefined FUN_141a53a50(void)

void FUN_141a53a50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 *local_20;
  undefined8 local_18;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x6a0);
  local_24 = 1;
  local_48 = 0;
  local_40 = 0;
  plVar4 = (longlong *)*plVar1;
  local_20 = &local_48;
  local_18 = 0;
  local_28 = 0x10;
  *plVar1 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0x148))(plVar2,&local_28,0,&DAT_144da71d0,plVar1);
  if (iVar3 < 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_141a94000(iVar3,
                  "LocalDevice->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndirectCommandSignature.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x28a,0,&local_38);
  }
  plVar1 = (longlong *)(param_1 + 0x6a8);
  local_48 = CONCAT44(local_48._4_4_,1);
  plVar4 = (longlong *)*plVar1;
  local_28 = 0x14;
  *plVar1 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0x148))(plVar2,&local_28,0,&DAT_144da71d0,plVar1);
  if (iVar3 < 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_141a94000(iVar3,
                  "LocalDevice->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DrawIndexedIndirectCommandSignature.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x28e,0,&local_38);
  }
  plVar4 = (longlong *)(param_1 + 0x6b0);
  local_48 = CONCAT44(local_48._4_4_,2);
  local_28 = 0xc;
  plVar1 = (longlong *)*plVar4;
  *plVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0x148))(plVar2,&local_28,0,&DAT_144da71d0,plVar4);
  if (iVar3 < 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_141a94000(iVar3,
                  "LocalDevice->CreateCommandSignature(&commandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectCommandSignature.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x292,0,&local_38);
  }
  return;
}



// FUNCTION 141a53c20 FUN_141a53c20 body=209 status=ok
// SIG undefined FUN_141a53c20(void)

void FUN_141a53c20(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(char *)(param_1 + 0x78) != '\0') && (*(longlong *)(param_2 + 0x20) != 0)) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0xb8);
  }
  FUN_141a7d3a0(param_2);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x738);
  iVar3 = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = iVar3;
  if (*(int *)(param_1 + 0xa4) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(param_1 + 0x98));
    iVar3 = *(int *)(param_1 + 0xa0);
  }
  lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(lVar4 + -0xc) = *(undefined4 *)(param_2 + 0x30);
  if (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) != 0) {
    *(longlong *)(lVar4 + -0x20) = *(longlong *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a53cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a53d00 FUN_141a53d00 body=438 status=ok
// SIG undefined FUN_141a53d00(void)

void FUN_141a53d00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  LOCK();
  iVar9 = (int)((ulonglong)param_2 >> 0x20);
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar9;
  UNLOCK();
  iVar8 = *(int *)(param_1 + 0xb0);
  plVar1 = (longlong *)(param_1 + 0xa8);
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar8 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar8 * 8) = param_2;
    return;
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  lVar4 = *plVar1;
  uVar7 = (uint)param_2;
  lVar11 = lVar4;
  lVar13 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      lVar10 = lVar13 >> 1;
      if (*(uint *)(lVar11 + lVar10 * 8) < uVar7) {
        lVar11 = lVar11 + lVar10 * 8 + 8;
        lVar10 = lVar13 + (-1 - lVar10);
      }
      lVar13 = lVar10;
    } while (0 < lVar10);
  }
  bVar5 = false;
  iVar12 = (int)(lVar11 - lVar4 >> 3);
  if (((0 < iVar12) && (iVar12 + -1 < iVar8)) &&
     (*(int *)(lVar4 + -4 + (longlong)iVar12 * 8) + *(int *)(lVar4 + -8 + (longlong)iVar12 * 8) ==
      uVar7)) {
    bVar5 = true;
  }
  lVar11 = (longlong)iVar12;
  bVar6 = false;
  if ((-1 < iVar12) && (iVar12 < iVar8)) {
    bVar6 = false;
    if (uVar7 + iVar9 == *(int *)(lVar4 + lVar11 * 8)) {
      bVar6 = true;
    }
  }
  if (bVar5) {
    piVar2 = (int *)(lVar4 + -4 + lVar11 * 8);
    *piVar2 = *piVar2 + iVar9;
    if (bVar6) {
      piVar2 = (int *)(lVar4 + -4 + lVar11 * 8);
      *piVar2 = *piVar2 + *(int *)(lVar4 + 4 + lVar11 * 8);
      iVar8 = *(int *)(param_1 + 0xb0);
      iVar9 = (iVar8 - iVar12) + -1;
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar11 * 8),(void *)(*plVar1 + (longlong)(iVar12 + 1) * 8),
                   (longlong)iVar9 << 3);
        iVar8 = *(int *)(param_1 + 0xb0);
      }
      *(int *)(param_1 + 0xb0) = iVar8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  else if (bVar6) {
    *(uint *)(lVar4 + lVar11 * 8) = uVar7;
    piVar2 = (int *)(lVar4 + 4 + lVar11 * 8);
    *piVar2 = *piVar2 + iVar9;
  }
  else {
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    _Src = (void *)(*plVar1 + lVar11 * 8);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 8),_Src,(longlong)(iVar3 - iVar12) << 3)
    ;
    *(undefined8 *)(*plVar1 + lVar11 * 8) = param_2;
  }
  return;
}



// FUNCTION 141a53ec0 FUN_141a53ec0 body=301 status=ok
// SIG undefined FUN_141a53ec0(void)

undefined8 FUN_141a53ec0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined **local_38;
  longlong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 == 0) {
    return 0;
  }
  FUN_141a4e6a0(param_2,lVar3 + 8);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(lVar3 + 0x2c);
  lVar4 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar3;
  local_38 = &PTR_FUN_144da6378;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 1;
  FUN_141a4e6a0(lVar3 + 8,&local_38);
  *(undefined4 *)(lVar3 + 0x20) = (undefined4)local_20;
  *(undefined4 *)(lVar3 + 0x24) = local_20._4_4_;
  *(undefined4 *)(lVar3 + 0x28) = local_18;
  *(undefined1 *)(lVar3 + 0x2c) = local_14;
  if (local_30 != 0) {
    LOCK();
    piVar1 = (int *)(local_30 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_141a4ed50(local_30,1);
    }
  }
  if (lVar4 != 0) {
    *(undefined ***)(lVar4 + 8) = &PTR_FUN_144da6378;
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x10) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        FUN_141a4ed50(*(longlong *)(lVar4 + 0x10),1);
      }
    }
    FMemory::operator_delete(lVar4,0x30);
  }
  return 1;
}



// FUNCTION 141a53ff0 FUN_141a53ff0 body=291 status=ok
// SIG undefined FUN_141a53ff0(void)

ulonglong FUN_141a53ff0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong local_res18;
  
  uVar6 = *(ulonglong *)(param_1 + 0x90);
  if ((uVar6 != 0) && (*(char *)(uVar6 + 0x6c) != '\0')) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    local_res18 = uVar6;
    uVar6 = FUN_141a6f9f0(&local_res18,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x98);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0xa0) * 4;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 4) {
    uVar6 = FUN_141a53d00(param_1,plVar7[2]);
    if (*(int *)(param_1 + 0x74) == 1) {
      puVar5 = (undefined8 *)*plVar7;
      LOCK();
      puVar1 = (uint *)(puVar5 + 1);
      uVar3 = *puVar1;
      uVar6 = (ulonglong)uVar3;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 == 1) && (puVar5 != (undefined8 *)0x0)) {
        uVar6 = (**(code **)*puVar5)(puVar5,1);
      }
      *plVar7 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar6 = TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(param_1 + 0x98,0);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar6 = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x88) + 8);
    LOCK();
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      *puVar1 = 0;
    }
    else {
      uVar6 = (ulonglong)uVar3;
    }
    UNLOCK();
    puVar5 = *(undefined8 **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar6 = (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar6 = FUN_141a703f0();
  }
  return uVar6;
}



// FUNCTION 141a54120 FUN_141a54120 body=177 status=ok
// SIG undefined FUN_141a54120(void)

void FUN_141a54120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x18));
      if (lVar3 != 0) {
        puVar4 = *(undefined8 **)(lVar3 + 8);
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        FMemory::operator_delete(lVar3,0x28);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  return;
}



// FUNCTION 141a541e0 FUN_141a541e0 body=172 status=ok
// SIG undefined FUN_141a541e0(void)

void FUN_141a541e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar3 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x18) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_1 + 0x54) < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  return;
}



// FUNCTION 141a54290 FUN_141a54290 body=118 status=ok
// SIG undefined FUN_141a54290(void)

void FUN_141a54290(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x88) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      FUN_141a53ff0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar3 * 8));
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  return;
}



// FUNCTION 141a54320 Empty body=91 status=ok
// SIG undefined Empty(void)

void TDoubleLinkedList<unsigned_int>::Empty(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_1[1] + 8);
    FMemory::operator_delete(param_1[1],0x18);
    param_1[1] = lVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000141a54377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 141a54380 Empty body=91 status=ok
// SIG undefined Empty(void)

void TDoubleLinkedList<FD3D12OfflineDescriptorManager::SFreeRange>::Empty(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_1[1] + 0x10);
    FMemory::operator_delete(param_1[1],0x20);
    param_1[1] = lVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000141a543d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 141a543e0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FD3D12Resource_*,CResourceState>,TDefaultMapHashableKeyFuncs<FD3D12Resource_*,CResourceState,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FD3D12Resource_*,CResourceState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<TSharedRef<FString,1>,FTextId>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,FTextId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 141a54460 Empty body=404 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_141a54531;
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
LAB_141a54531:
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
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>
                (*param_1 + ((longlong)iStack_1c * 9 + 7) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141a54600 FUN_141a54600 body=531 status=ok
// SIG undefined FUN_141a54600(void)

void FUN_141a54600(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  int local_60;
  uint uStack_5c;
  uint *puStack_58;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  
  iVar8 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar8 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar4 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar4) goto LAB_141a546d4;
      uVar5 = puVar10[lVar6 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_74 = (iStack_70 - iVar9) + 0x1f;
    if (iVar8 < iStack_74) {
LAB_141a546d4:
      iStack_74 = iVar8;
    }
  }
  local_60 = local_88;
  uStack_5c = uStack_84;
  local_50 = 0xffffffff;
  iStack_4c = iStack_74;
  iStack_48 = iStack_70;
  puStack_58 = puVar1;
  if (iStack_74 < iVar8) {
    do {
      lVar6 = (longlong)iStack_4c * 0x20 + *param_1;
      iVar8 = *(int *)(lVar6 + 0x10);
      plVar7 = *(longlong **)(lVar6 + 8);
      if (iVar8 != 0) {
        do {
          puVar3 = (undefined8 *)*plVar7;
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar3 + 1);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (puVar3 != (undefined8 *)0x0)) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          plVar7 = plVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        plVar7 = *(longlong **)(lVar6 + 8);
      }
      if (plVar7 != (longlong *)0x0) {
        FMemory::Free(plVar7);
      }
      local_50 = local_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    } while (iStack_4c < (int)puStack_58[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141a54820 FUN_141a54820 body=7 status=ok
// SIG undefined FUN_141a54820(void)

void FUN_141a54820(undefined8 param_1)

{
  TSet<TTuple<FD3D12Resource_*,CResourceState>,TDefaultMapHashableKeyFuncs<FD3D12Resource_*,CResourceState,0>,FDefaultSetAllocator>
  ::Empty(param_1,0);
  return;
}



// FUNCTION 141a54830 FUN_141a54830 body=516 status=ok
// SIG undefined FUN_141a54830(void)

void FUN_141a54830(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_res18;
  
  if ((int)param_1[0x3d] != 0) {
    lVar2 = *param_1;
    plVar8 = (longlong *)(lVar2 + 0x308);
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x3c8));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x3c8));
    }
    puVar9 = (uint *)param_1[0x3c];
    puVar10 = puVar9 + (longlong)(int)param_1[0x3d] * 0x2c;
    for (; puVar9 != puVar10; puVar9 = puVar9 + 0x2c) {
      piVar7 = (int *)FUN_141a54eb0(lVar2 + 0x370,local_res8,puVar9);
      if (*piVar7 == -1) {
        uVar1 = *puVar9;
        uVar5 = (**(code **)(*plVar8 + 0x18))(plVar8);
        if (uVar1 != 0) {
          if (uVar5 < uVar1) {
            local_res8[0] = 0x8007000e;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_res8,(ThrowInfo *)&DAT_1461db398);
          }
          if ((uVar5 < *(int *)(lVar2 + 0x348) + uVar1) && (*(uint *)(lVar2 + 0x34c) < uVar1))
          goto LAB_141a549a3;
        }
        iVar6 = FUN_141a5f440(plVar8,*puVar9);
        if (iVar6 != -1) {
          local_res18 = (ulonglong)(uint)(iVar6 * *(int *)(lVar2 + 0x330)) +
                        *(longlong *)(lVar2 + 0x338);
          plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 0x18);
          (**(code **)(*plVar3 + 0xb8))(plVar3,1,&local_res18,puVar9,*puVar9,puVar9 + 10,0,1);
          *(ulonglong *)(puVar9 + 0x2a) =
               (ulonglong)(uint)(iVar6 * *(int *)(lVar2 + 0x330)) + *(longlong *)(lVar2 + 0x340);
          FUN_141a455e0(lVar2 + 0x370,local_res10,puVar9,0);
          *(undefined1 *)(lVar2 + 0x3c0) = 1;
        }
      }
LAB_141a549a3:
    }
    *(undefined4 *)(param_1 + 0x3d) = 0;
    if (*(int *)((longlong)param_1 + 0x1ec) != 0) {
      TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1 + 0x3c,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x3c8));
  }
  return;
}



// FUNCTION 141a54a40 FUN_141a54a40 body=215 status=ok
// SIG undefined FUN_141a54a40(void)

void FUN_141a54a40(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((*(char *)(param_1 + 0x68) != '\0') && (0 < *param_2)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar3 = 0;
    plVar4 = *(longlong **)(param_1 + 0x80);
    uVar5 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x88) < plVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        lVar1 = *plVar4;
        if (((*(char *)(lVar1 + 0x78) != '\0') && (*(char *)(lVar1 + 0x10c) != '\0')) &&
           (0 < *param_2)) {
          FUN_141a5e9a0(lVar1);
          *param_2 = *param_2 - (ulonglong)*(uint *)(lVar1 + 0x60);
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141a54b20 FUN_141a54b20 body=35 status=ok
// SIG undefined FUN_141a54b20(void)

void FUN_141a54b20(longlong param_1)

{
  FUN_141a7c640(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a54b50 FUN_141a54b50 body=35 status=ok
// SIG undefined FUN_141a54b50(void)

void FUN_141a54b50(longlong param_1)

{
  CAkSrcBaseEx::StopStream(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a54b80 FUN_141a54b80 body=35 status=ok
// SIG undefined FUN_141a54b80(void)

void FUN_141a54b80(longlong param_1)

{
  FUN_141a91480(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a54bb0 FUN_141a54bb0 body=28 status=ok
// SIG undefined FUN_141a54bb0(void)

void FUN_141a54bb0(longlong param_1)

{
  FUN_141a54c50();
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a54bd0 FUN_141a54bd0 body=28 status=ok
// SIG undefined FUN_141a54bd0(void)

void FUN_141a54bd0(longlong param_1)

{
  FUN_141a54d80();
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a54c00 FUN_141a54c00 body=78 status=ok
// SIG undefined FUN_141a54c00(void)

void FUN_141a54c00(longlong param_1)

{
  FUN_141a7d760(DAT_1469fd070,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10),
                *(int *)(*(longlong *)(param_1 + 0x90) + 0x48) + *(int *)(param_1 + 0x9c),
                *(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x58),
                *(undefined4 *)(param_1 + 0x98));
  thunk_FUN_141a7bb70(param_1 + 0x10);
  return;
}



// FUNCTION 141a54c50 FUN_141a54c50 body=301 status=ok
// SIG undefined FUN_141a54c50(void)

void FUN_141a54c50(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffffd8;
  ulonglong uVar8;
  
  uVar5 = 0xffffffff;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
  lVar6 = *(longlong *)(lVar3 + 0x10);
  cVar2 = *(char *)(lVar3 + 0xb4);
  lVar4 = **(longlong **)(lVar6 + 0x5d8);
  lVar7 = lVar4 + 0x460;
  if (cVar2 == '\0') {
    uVar5 = *(undefined4 *)(lVar3 + 0xa8);
    FUN_141a4f5b0(lVar7,lVar3,uVar5,0x400,in_stack_ffffffffffffffd8 & 0xffffffff00000000);
  }
  else {
    FUN_141a60fb0(lVar7,lVar3,0x400,0);
  }
  piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  lVar6 = *(longlong *)(lVar4 + 0x468);
  if (*(int *)(lVar6 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x28) + 0xd0))
              (*(longlong **)(lVar6 + 0x28),*(int *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0xf8));
    *(undefined4 *)(lVar6 + 0x100) = 0;
    lVar6 = *(longlong *)(lVar4 + 0x468);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x60);
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x78))
            (*(longlong **)(lVar6 + 0x28),*(undefined8 *)(lVar3 + 0x18),
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88),
             *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18),uVar8,
             *(undefined4 *)(param_1 + 0x98));
  if (cVar2 == '\0') {
    FUN_141a4f5b0(lVar7,lVar3,0x400,uVar5,uVar8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141a54d80 FUN_141a54d80 body=301 status=ok
// SIG undefined FUN_141a54d80(void)

void FUN_141a54d80(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffffd8;
  ulonglong uVar8;
  
  uVar5 = 0xffffffff;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
  lVar6 = *(longlong *)(lVar3 + 0x10);
  cVar2 = *(char *)(lVar3 + 0xb4);
  lVar4 = **(longlong **)(lVar6 + 0x5d8);
  lVar7 = lVar4 + 0x460;
  if (cVar2 == '\0') {
    uVar5 = *(undefined4 *)(lVar3 + 0xa8);
    FUN_141a4f5b0(lVar7,lVar3,uVar5,0x400,in_stack_ffffffffffffffd8 & 0xffffffff00000000);
  }
  else {
    FUN_141a60fb0(lVar7,lVar3,0x400,0);
  }
  piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  lVar6 = *(longlong *)(lVar4 + 0x468);
  if (*(int *)(lVar6 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x28) + 0xd0))
              (*(longlong **)(lVar6 + 0x28),*(int *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0xf8));
    *(undefined4 *)(lVar6 + 0x100) = 0;
    lVar6 = *(longlong *)(lVar4 + 0x468);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x60);
  (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x78))
            (*(longlong **)(lVar6 + 0x28),*(undefined8 *)(lVar3 + 0x18),
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x80),
             *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18),uVar8,
             *(undefined4 *)(param_1 + 0x98));
  if (cVar2 == '\0') {
    FUN_141a4f5b0(lVar7,lVar3,0x400,uVar5,uVar8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141a54eb0 FUN_141a54eb0 body=205 status=ok
// SIG undefined FUN_141a54eb0(void)

int * FUN_141a54eb0(longlong *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_141a74790(param_3 + 1,(ulonglong)*param_3 * 2);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      uVar1 = *param_3;
      do {
        lVar6 = (longlong)iVar3 * 0xb8;
        if ((*(uint *)(lVar6 + lVar2) == uVar1) &&
           (iVar4 = _guard_xfg_dispatch_icall_nop
                              ((void *)(lVar2 + 4 + lVar6),param_3 + 1,
                               (ulonglong)*(uint *)(lVar6 + lVar2) * 2), iVar4 == 0)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0xb0 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a54f80 FindId body=187 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
      ::FindId(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1ac)) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar2 = param_1 + 0x1b0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar2 = param_1;
      }
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar1 * 0x18) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a55040 FUN_141a55040 body=258 status=ok
// SIG undefined FUN_141a55040(void)

void FUN_141a55040(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  FUN_141a52670(*(undefined8 *)(param_1 + 0x468));
  if (*(int *)(param_1 + 0x2c58) + *(int *)(param_1 + 0x2c54) + *(int *)(param_1 + 0x2c50) +
      *(int *)(param_1 + 0x2c4c) + *(int *)(param_1 + 0x2c48) + *(int *)(param_1 + 0x2c44) == 0) {
    if (*(char *)(param_1 + 0x1a9) == '\0') {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x30);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x40);
    }
    FUN_141a7bae0(uVar5,param_1 + 0x460);
  }
  else {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    *puVar4 = &PTR_FUN_144da6378;
    lVar3 = *(longlong *)(param_1 + 0x468);
    puVar4[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  if ((undefined1 *)(param_1 + 0x460) != local_18) {
    if (*(longlong *)(param_1 + 0x468) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x468) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(param_1 + 0x468) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 0x468),1);
      }
    }
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  return;
}



// FUNCTION 141a55150 FUN_141a55150 body=185 status=ok
// SIG undefined FUN_141a55150(void)

void FUN_141a55150(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141a55040(*(longlong *)(param_1 + 0x10),param_1 + 0x20);
    FUN_141a5e8f0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b8),
                  *(longlong *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1b8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    FUN_141a55040(uVar1,param_1 + 0x20);
    FUN_141a5e8f0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1b8),
                  *(longlong *)(param_1 + 0x10));
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_StartProfileThreadUsage_144d83b88;
      puVar2[1] = &PTR__purecall_144d83e88;
      FRHIRenderPassInfo::~FRHIRenderPassInfo(puVar2 + 2);
      FMemory::operator_delete(puVar2,0x1c0);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 141a55210 FUN_141a55210 body=320 status=ok
// SIG undefined FUN_141a55210(void)

undefined8 * FUN_141a55210(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  iVar2 = *(int *)(lVar3 + 0x28);
  if ((*(int *)(param_1 + 0x2c58) + *(int *)(param_1 + 0x2c54) + *(int *)(param_1 + 0x2c50) +
       *(int *)(param_1 + 0x2c4c) + *(int *)(param_1 + 0x2c48) + *(int *)(param_1 + 0x2c44) != 0) ||
     (bVar4 = false, 0 < iVar2)) {
    bVar4 = true;
  }
  if ((param_3 != '\0') || (bVar4)) {
    FUN_141a52670(*(undefined8 *)(param_1 + 0x468));
    if (iVar2 < 1) {
      FUN_141a70ff0(*(undefined8 *)(*(longlong *)(param_1 + 0x468) + 0x10),param_1 + 0x460,param_3);
    }
    else {
      plVar1 = (longlong *)(lVar3 + 0x20);
      iVar2 = *(int *)(lVar3 + 0x28);
      *(int *)(lVar3 + 0x28) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x2c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = &PTR_FUN_144da6378;
      lVar3 = *(longlong *)(param_1 + 0x468);
      puVar5[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (*(char *)(param_1 + 0x1a9) == '\0') {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x1b8) + 0x30);
      }
      else {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x1b8) + 0x40);
      }
      (**(code **)(*plVar6 + 8))(plVar6,plVar1,param_3);
      FUN_141a5f4e0(plVar1,0);
    }
    FUN_141a58a90(param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x468);
  *param_2 = &PTR_FUN_144da6378;
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a55350 FUN_141a55350 body=507 status=ok
// SIG undefined FUN_141a55350(void)

void FUN_141a55350(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  bool bVar4;
  BOOL BVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  puVar9 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)param_3 * 0x28);
  lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)param_3 * 0x28;
  bVar4 = false;
  lVar6 = *(uint *)(param_1 + 0x10) + param_2;
  uStack_34 = (undefined4)(param_2 >> 0x20);
  uStack_2c = (undefined4)((ulonglong)lVar6 >> 0x20);
  uVar3 = (undefined4)lVar6;
  if (puVar9 != (ulonglong *)0x0) {
    do {
      if (bVar4) goto LAB_141a55525;
      if (*puVar9 == *(uint *)(param_1 + 0x10) + param_2) {
        *puVar9 = param_2;
LAB_141a5546d:
        bVar4 = true;
      }
      else {
        if (puVar9[1] == param_2) {
          puVar9[1] = puVar9[1] + (ulonglong)*(uint *)(param_1 + 0x10);
          goto LAB_141a5546d;
        }
        if (param_2 < *puVar9) {
          puVar8 = (undefined4 *)operator_new(0x20);
          if (puVar8 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar8 + 4) = 0;
            *(undefined8 *)(puVar8 + 6) = 0;
            *puVar8 = (int)param_2;
            puVar8[1] = uStack_34;
            puVar8[2] = uVar3;
            puVar8[3] = uStack_2c;
            puVar2 = *(ulonglong **)(lVar1 + 0x10);
            if (puVar9 == puVar2) {
              if (puVar2 == (ulonglong *)0x0) {
                *(undefined4 **)(lVar1 + 0x18) = puVar8;
              }
              else {
                *(ulonglong **)(puVar8 + 4) = puVar2;
                *(undefined4 **)(*(longlong *)(lVar1 + 0x10) + 0x18) = puVar8;
              }
              *(undefined4 **)(lVar1 + 0x10) = puVar8;
            }
            else {
              *(ulonglong *)(puVar8 + 6) = puVar9[3];
              *(ulonglong **)(puVar8 + 4) = puVar9;
              *(undefined4 **)(puVar9[3] + 0x10) = puVar8;
              puVar9[3] = (ulonglong)puVar8;
            }
            (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1 + 8,*(int *)(lVar1 + 0x20) + 1);
          }
          goto LAB_141a5546d;
        }
      }
      puVar9 = (ulonglong *)puVar9[2];
    } while (puVar9 != (ulonglong *)0x0);
    if (bVar4) goto LAB_141a55525;
  }
  if (*(int *)(lVar1 + 0x20) == 0) {
    piVar7 = (int *)operator_new(0x18);
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_3;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
      if (*(longlong *)(param_1 + 0x40) == 0) {
        *(int **)(param_1 + 0x38) = piVar7;
      }
      else {
        *(int **)(*(longlong *)(param_1 + 0x40) + 8) = piVar7;
        *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(param_1 + 0x40);
      }
      *(int **)(param_1 + 0x40) = piVar7;
      (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30,*(int *)(param_1 + 0x48) + 1);
    }
  }
  puVar8 = (undefined4 *)operator_new(0x20);
  if (puVar8 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0;
    *puVar8 = (int)param_2;
    puVar8[1] = uStack_34;
    puVar8[2] = uVar3;
    puVar8[3] = uStack_2c;
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      *(undefined4 **)(lVar1 + 0x10) = puVar8;
    }
    else {
      *(undefined4 **)(*(longlong *)(lVar1 + 0x18) + 0x10) = puVar8;
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(lVar1 + 0x18);
    }
    *(undefined4 **)(lVar1 + 0x18) = puVar8;
    (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1 + 8,*(int *)(lVar1 + 0x20) + 1);
  }
LAB_141a55525:
                    /* WARNING: Could not recover jumptable at 0x000141a55544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 141a55550 FUN_141a55550 body=85 status=ok
// SIG undefined FUN_141a55550(void)

undefined8 FUN_141a55550(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc0,
             L"Pure virtual not implemented (%s)",L"GetAlignedResourceSizeInBytes");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc0,
             L"Pure virtual not implemented (%s)",L"GetAlignedResourceSizeInBytes");
  return 0;
}



// FUNCTION 141a555c0 FUN_141a555c0 body=4 status=ok
// SIG undefined FUN_141a555c0(void)

undefined4 FUN_141a555c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 141a555d0 FUN_141a555d0 body=154 status=ok
// SIG undefined FUN_141a555d0(void)

undefined8 FUN_141a555d0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined8 uVar2;
  BOOL BVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd50);
  WaitForSingleObject(*(HANDLE *)(lVar1 + 0x18),0xffffffff);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x5f8);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x5e8) + -8 + (longlong)*(int *)(lVar1 + 0x5f0) * 8)
  ;
  *(int *)(lVar1 + 0x5f0) = *(int *)(lVar1 + 0x5f0) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  LeaveCriticalSection(lpCriticalSection);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  FUN_141a524e0(uVar2);
  FUN_141a58a90(*(undefined8 *)(param_1 + 0x10));
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 141a55680 FUN_141a55680 body=576 status=ok
// SIG undefined FUN_141a55680(void)

undefined4 FUN_141a55680(uint param_1,char param_2)

{
  if (param_2 != '\0') {
    if (param_1 == 0) {
switchD_141a55709_caseD_8:
      return 0x23;
    }
    if (param_1 < 6) {
      LowLevelFatalErrorHandler
                ("Unknown",0x1f7,
                 L"Invalid type specified for tessellated render, probably missing a case in FSkeletalMeshSceneProxy::DrawDynamicElementsByMaterial or FStaticMeshSceneProxy::GetMeshElement"
                );
      FDebug::AssertFailed
                (&DAT_144da218a,"Unknown",0x1f7,
                 L"Invalid type specified for tessellated render, probably missing a case in FSkeletalMeshSceneProxy::DrawDynamicElementsByMaterial or FStaticMeshSceneProxy::GetMeshElement"
                );
    }
    else {
      if (param_1 == 6) {
        return 0x21;
      }
      if (param_1 == 7) {
        return 0x22;
      }
    }
  }
  switch(param_1) {
  case 0:
    return 4;
  case 1:
    return 5;
  case 2:
    return 2;
  default:
    LowLevelFatalErrorHandler("Unknown",0x22c,L"Unknown primitive type: %u",param_1);
    FDebug::AssertFailed(&DAT_144da218b,"Unknown",0x22c,L"Unknown primitive type: %u",param_1);
    return 4;
  case 4:
    return 1;
  case 8:
    goto switchD_141a55709_caseD_8;
  case 9:
    return 0x24;
  case 10:
    return 0x25;
  case 0xb:
    return 0x26;
  case 0xc:
    return 0x27;
  case 0xd:
    return 0x28;
  case 0xe:
    return 0x29;
  case 0xf:
    return 0x2a;
  case 0x10:
    return 0x2b;
  case 0x11:
    return 0x2c;
  case 0x12:
    return 0x2d;
  case 0x13:
    return 0x2e;
  case 0x14:
    return 0x2f;
  case 0x15:
    return 0x30;
  case 0x16:
    return 0x31;
  case 0x17:
    return 0x32;
  case 0x18:
    return 0x33;
  case 0x19:
    return 0x34;
  case 0x1a:
    return 0x35;
  case 0x1b:
    return 0x36;
  case 0x1c:
    return 0x37;
  case 0x1d:
    return 0x38;
  case 0x1e:
    return 0x39;
  case 0x1f:
    return 0x3a;
  case 0x20:
    return 0x3b;
  case 0x21:
    return 0x3c;
  case 0x22:
    return 0x3d;
  case 0x23:
    return 0x3e;
  case 0x24:
    return 0x3f;
  case 0x25:
    return 0x40;
  }
}



// FUNCTION 141a55960 FUN_141a55960 body=44 status=ok
// SIG undefined FUN_141a55960(void)

undefined8 FUN_141a55960(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
}



// FUNCTION 141a55990 GetFaceBuffers body=9 status=ok
// SIG undefined GetFaceBuffers(void)

undefined8 mu::Mesh::GetFaceBuffers(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
}



// FUNCTION 141a559a0 FUN_141a559a0 body=202 status=ok
// SIG undefined FUN_141a559a0(void)

void FUN_141a559a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *local_res8;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res8 = (longlong *)0x0;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x188))
                    (*(undefined8 **)(param_1 + 0x188),&DAT_144da71e0,&local_res8);
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,"GetAdapter()->QueryInterface(IID_PPV_ARGS(Adapter3.GetInitReference()))",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x34f,0,&local_18);
  }
  iVar1 = (**(code **)(*local_res8 + 0x70))(local_res8,0,0,param_2);
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,
                  "Adapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, LocalVideoMemoryInfo)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x351,0,&local_18);
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return;
}



// FUNCTION 141a55a70 GetSystemInstanceID body=9 status=ok
// SIG undefined GetSystemInstanceID(void)

undefined8 FNDIGpuComputePrePostStageContext::GetSystemInstanceID(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
}



// FUNCTION 141a55a90 FUN_141a55a90 body=137 status=ok
// SIG undefined FUN_141a55a90(void)

longlong FUN_141a55a90(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  if ((local_res8[0] == -1) || (lVar2 = (longlong)local_res8[0] * 0x38 + *param_1, lVar2 == 0)) {
    local_res18[0] = &local_res10;
    FUN_141a45aa0(param_1,local_res8,local_res18,0);
    lVar2 = (longlong)local_res8[0] * 0x38 + *param_1;
    param_2 = local_res10;
  }
  lVar2 = lVar2 + 8;
  cVar1 = FUN_141a84570(lVar2);
  if (cVar1 == '\0') {
    CResourceState::Initialize(lVar2,*(undefined2 *)(param_2 + 0x7e));
  }
  return lVar2;
}



// FUNCTION 141a55b20 FUN_141a55b20 body=158 status=ok
// SIG undefined FUN_141a55b20(void)

longlong FUN_141a55b20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0xa8,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar3 = (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar1 + 0xa8), lVar3 == 0)) {
    local_res18[0] = &local_res10;
    FUN_141a45aa0(lVar1 + 0xa8,local_res8,local_res18,0);
    lVar3 = (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar1 + 0xa8);
    param_2 = local_res10;
  }
  lVar3 = lVar3 + 8;
  cVar2 = FUN_141a84570(lVar3);
  if (cVar2 == '\0') {
    CResourceState::Initialize(lVar3,*(undefined2 *)(param_2 + 0x7e));
  }
  return lVar3;
}



// FUNCTION 141a55bc0 FUN_141a55bc0 body=7 status=ok
// SIG undefined FUN_141a55bc0(void)

undefined4 FUN_141a55bc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// FUNCTION 141a55bd0 GetTypeHash body=10 status=ok
// SIG undefined GetTypeHash(void)

void GetTypeHash(undefined8 param_1)

{
  FUN_141a74790(param_1,0x19);
  return;
}



// FUNCTION 141a55be0 FUN_141a55be0 body=14 status=ok
// SIG undefined FUN_141a55be0(void)

void FUN_141a55be0(uint *param_1)

{
  FUN_141a74790(param_1 + 1,(ulonglong)*param_1 * 2);
  return;
}



// FUNCTION 141a55bf0 FUN_141a55bf0 body=754 status=ok
// SIG undefined FUN_141a55bf0(void)

undefined8 *
FUN_141a55bf0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_1 = param_2;
  param_1[0x23] = param_2;
  param_1[0xd] = param_2;
  param_1[1] = param_3;
  param_1[0x24] = (longlong)param_1;
  param_1[0xe] = (longlong)param_1;
  local_48 = *param_6;
  uStack_44 = param_6[1];
  uStack_40 = param_6[2];
  uStack_3c = param_6[3];
  FUN_141a56070(param_1 + 0x22,&local_48);
  FUN_141a56210(param_1 + 0xc,param_5,1);
  param_1[8] = (longlong)(param_1 + 0x22);
  plVar10 = (longlong *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x244) = param_4;
  param_1[9] = (longlong)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x48) = 0;
  local_98 = 0x1688;
  local_8c = 1;
  local_80 = 0;
  local_9c = 4;
  local_a0 = 0x57;
  local_90 = 0;
  local_84 = 0;
  plVar8 = (longlong *)operator_new(0x18);
  plVar9 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    lVar5 = *param_1;
    *plVar8 = lVar5;
    plVar9 = (longlong *)FDescriptorHeapManager::AllocateHeapSlot(lVar5 + 0x1a0,&param_6,plVar8 + 2)
    ;
    plVar8[1] = *plVar9;
    plVar9 = plVar8;
  }
  param_1[2] = (longlong)plVar9;
  FUN_1404c2138(*(undefined8 *)(*(longlong *)(*plVar9 + 0x10) + 0x18),0,&local_a0,plVar9[1]);
  local_ac = 0;
  local_a4 = 0;
  local_b4 = 4;
  local_b8 = 0x57;
  local_b0 = 0;
  plVar8 = (longlong *)operator_new(0x18);
  plVar9 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    lVar5 = *param_1;
    *plVar8 = lVar5;
    plVar9 = (longlong *)
             FDescriptorHeapManager::AllocateHeapSlot(lVar5 + 0xb0,local_res8,plVar8 + 2);
    plVar8[1] = *plVar9;
    plVar9 = plVar8;
  }
  param_1[3] = (longlong)plVar9;
  FUN_141a4e9d0(*(undefined8 *)(*(longlong *)(*plVar9 + 0x10) + 0x18),0,&local_b8,plVar9[1]);
  local_5c = 0;
  local_54 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_74 = 4;
  local_78 = 0x1c;
  local_70 = 0;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    lVar5 = *param_1;
    *plVar9 = lVar5;
    plVar10 = (longlong *)
              FDescriptorHeapManager::AllocateHeapSlot(lVar5 + 0x218,local_res10,plVar9 + 2);
    plVar9[1] = *plVar10;
    plVar10 = plVar9;
  }
  param_1[4] = (longlong)plVar10;
  FUN_141a4e9c4(*(undefined8 *)(*(longlong *)(*plVar10 + 0x10) + 0x18),0,0,&local_78,plVar10[1]);
  local_cc = 0x7f7fffff;
  local_d8 = 0x1010102;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  puVar11 = (undefined8 *)FUN_141a6f270(param_2,&local_d8);
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)param_1[5];
  param_1[5] = (longlong)puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  puVar12 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (uint *)(puVar6 + 1);
    uVar3 = *puVar1;
    puVar12 = (undefined8 *)(ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      if ((*(char *)(puVar6 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))
         ) {
        puVar12 = (undefined8 *)0x0;
        LOCK();
        uVar3 = *(uint *)((longlong)puVar6 + 0xc);
        if (uVar3 == 0) {
          *(uint *)((longlong)puVar6 + 0xc) = 1;
        }
        else {
          puVar12 = (undefined8 *)(ulonglong)uVar3;
        }
        UNLOCK();
        if (uVar3 == 0) {
          puVar12 = (undefined8 *)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
        }
      }
      else {
        puVar12 = (undefined8 *)(**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar11 + 1);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if ((*(char *)(puVar11 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))
         ) {
        puVar12 = (undefined8 *)0x0;
        LOCK();
        uVar3 = *(uint *)((longlong)puVar11 + 0xc);
        if (uVar3 == 0) {
          *(uint *)((longlong)puVar11 + 0xc) = 1;
        }
        else {
          puVar12 = (undefined8 *)(ulonglong)uVar3;
        }
        UNLOCK();
        if (uVar3 == 0) {
          puVar12 = (undefined8 *)
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar11);
        }
      }
      else {
        puVar12 = (undefined8 *)(**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  return puVar12;
}



// FUNCTION 141a55ef0 FUN_141a55ef0 body=62 status=ok
// SIG undefined FUN_141a55ef0(void)

void FUN_141a55ef0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_141a5e190();
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x738);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 141a55f30 FUN_141a55f30 body=318 status=ok
// SIG undefined FUN_141a55f30(void)

void FUN_141a55f30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x48);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1 + 0x50,&DAT_144da63c8,param_1 + 0x48);
  if (iVar3 < 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141a94000(iVar3,
                  "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap.GetInitReference()))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                  ,0x3b1,0,&local_28);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0x48));
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))
                     (*(longlong **)(param_1 + 0x48),local_res8);
  *(undefined8 *)(param_1 + 0x30) = *puVar5;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                     (*(longlong **)(param_1 + 0x48),local_res8);
  *(undefined8 *)(param_1 + 0x38) = *puVar5;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18);
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_141a5f440(param_1,param_2);
  }
  return;
}



// FUNCTION 141a56070 FUN_141a56070 body=404 status=ok
// SIG undefined FUN_141a56070(void)

void FUN_141a56070(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  iVar11 = *(int *)(param_1 + 0x88);
  iVar10 = 0;
  uVar12 = (ulonglong)(*(int *)(param_1 + 0x8c) + 9999) / 10000;
  if ((int)uVar12 != 0) {
    do {
      if (*(uint *)(param_1 + 0x8c) < iVar10 + 10000U) {
        uVar9 = *(uint *)(param_1 + 0x8c) % 10000;
      }
      else {
        uVar9 = 10000;
      }
      puVar8 = (undefined8 *)operator_new(0x30);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = &PTR_FUN_144da6378;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(int *)(puVar8 + 4) = iVar11;
        *(uint *)((longlong)puVar8 + 0x24) = uVar9;
        *(undefined4 *)(puVar8 + 5) = 0;
        *(undefined1 *)((longlong)puVar8 + 0x2c) = 1;
        puVar1 = *(undefined8 **)(param_1 + 0x70);
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        *puVar1 = puVar8;
      }
      iVar11 = iVar11 + uVar9;
      iVar10 = iVar10 + uVar9;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x48);
  *(longlong **)(param_1 + 0x48) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar4 + 0x28);
  uVar5 = *(undefined4 *)(lVar4 + 0x54);
  uVar6 = *(undefined4 *)(lVar4 + 0x58);
  uVar7 = *(undefined4 *)(lVar4 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  FUN_141a53ec0(param_1 + 0x70,param_1 + 0x90);
  lVar4 = *(longlong *)(param_1 + 0x80);
  *(ulonglong *)(param_1 + 0x30) =
       (ulonglong)(uint)(*(int *)(lVar4 + 0x28) * *(int *)(param_1 + 0xa8)) +
       *(longlong *)(lVar4 + 0x30);
  *(ulonglong *)(param_1 + 0x38) =
       (ulonglong)(uint)(*(int *)(lVar4 + 0x28) * *(int *)(param_1 + 0xa8)) +
       *(longlong *)(lVar4 + 0x38);
  return;
}



// FUNCTION 141a56210 FUN_141a56210 body=345 status=ok
// SIG undefined FUN_141a56210(void)

void FUN_141a56210(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x48);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1 + 0x50,&DAT_144da63c8,param_1 + 0x48);
  if (iVar3 < 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_141a94000(iVar3,
                  "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap.GetInitReference()))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                  ,0x46f,0,&local_28);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0x48));
  plVar1 = *(longlong **)(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x80);
  *(longlong **)(param_1 + 0x80) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))
                     (*(longlong **)(param_1 + 0x48),local_res8);
  *(undefined8 *)(param_1 + 0x30) = *puVar5;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                     (*(longlong **)(param_1 + 0x48),local_res8);
  *(undefined8 *)(param_1 + 0x38) = *puVar5;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18);
  uVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,param_3);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return;
}



// FUNCTION 141a56370 FUN_141a56370 body=651 status=ok
// SIG undefined FUN_141a56370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a56370(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  int *local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined4 local_114;
  int local_110 [6];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 *local_c0;
  int local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  int local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_110[1] = 0;
  local_110[2] = 0;
  local_110[3] = 1;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  local_110[0] = *(int *)(param_1 + 0x28);
  uStack_ac = 1;
  bVar7 = local_110[0] == 4;
  uStack_b0 = (uint)bVar7;
  uStack_b4 = (uint)bVar7;
  uStack_90 = (uint)bVar7;
  uStack_94 = (uint)bVar7;
  local_a0 = (ulonglong)*(uint *)(param_1 + 0x60);
  local_80 = (ulonglong)*(uint *)(param_1 + 0x70);
  local_78 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  local_88 = 1;
  local_74 = 0;
  uStack_8c = 1;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_138 = (undefined4 *)&DAT_143f3eda8;
  }
  else {
    local_138 = *(undefined4 **)(param_1 + 0x18);
  }
  local_120 = 1;
  local_128 = (longlong *)CONCAT71(local_128._1_7_,1);
  local_130 = (int *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_b8 = local_110[0];
  local_98 = local_110[0];
  plVar6 = (longlong *)FUN_141a6ea90(uVar3,&local_c0,&local_a0,*(undefined4 *)(param_1 + 0x10));
  plVar2 = (longlong *)(param_1 + 0x90);
  if (plVar2 != plVar6) {
    puVar4 = (undefined8 *)*plVar2;
    *plVar2 = *plVar6;
    *plVar6 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c0 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (local_c0 != (undefined8 *)0x0)) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(*plVar2 + 0x6e);
  if (*(int *)(param_1 + 0x74) == 2) {
    local_e8 = (ulonglong)*(uint *)(param_1 + 0x60);
    local_c8 = *(undefined4 *)(param_1 + 0x34);
    local_114 = 0xac3;
    if (local_b8 == 3) {
      local_114 = 0x400;
    }
    uStack_dc = 0x10001;
    uStack_d8 = 0;
    local_f8 = 1;
    uStack_f0 = 0;
    local_70 = CONCAT44(uStack_f4,1);
    uStack_e0 = 1;
    uStack_58 = 0x1000100000001;
    plVar6 = (longlong *)(param_1 + 0x88);
    puVar4 = (undefined8 *)*plVar6;
    uStack_d4 = 1;
    uStack_cc = 1;
    *plVar6 = 0;
    uStack_68 = 0;
    local_40 = CONCAT44(uStack_c4,local_c8);
    local_50 = 0;
    uStack_4c = 1;
    uStack_48 = 0;
    uStack_44 = 1;
    local_60 = local_e8;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    local_138 = &local_114;
    local_120 = 0;
    local_130 = (int *)0x0;
    local_128 = plVar6;
    iVar5 = FUN_141a6f000(uVar3,&local_70,*plVar2,0);
    if (iVar5 < 0) {
      local_130 = local_110;
      local_110[0] = 0;
      local_110[1] = 0;
      local_110[2] = 0;
      local_110[3] = 0;
      local_138 = (undefined4 *)0x0;
      FUN_141a94000(iVar5,
                    "Adapter->CreatePlacedResource(ResourceDesc, BackingHeap, 0, InitialState, nullptr, BackingResource.GetInitReference(), BResourceOwnsHeap(false))"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                    ,0x128);
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)*plVar6);
    if (*(int *)(param_1 + 0x28) == 2) {
      FUN_141a57830(*plVar6);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}



// FUNCTION 141a56600 FUN_141a56600 body=2942 status=ok
// SIG undefined FUN_141a56600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a56600(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  short *psVar17;
  undefined2 *puVar18;
  undefined1 auStack_1c8 [32];
  undefined2 **local_1a8;
  undefined2 **local_1a0;
  undefined2 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined2 *local_148;
  ulonglong local_140;
  undefined4 local_138 [2];
  short *local_130;
  int local_128;
  int local_124;
  undefined1 local_120 [8];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [2];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  int local_dc;
  longlong local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  int local_c0;
  int local_bc;
  longlong *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  undefined2 *puVar16;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FUN_141edc760(local_120,0);
  if (*(char *)((longlong)param_1 + 0x44) != '\0') {
    iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x128))();
    local_1a0 = (undefined2 **)&DAT_144da2324;
    if (iVar3 == -0x7785ffff) {
      local_1a0 = (undefined2 **)0x144da3e40;
    }
    else if (iVar3 == -0x7785fffb) {
      local_1a0 = (undefined2 **)0x144da3848;
    }
    else if (iVar3 == -0x7785fffa) {
      local_1a0 = (undefined2 **)0x144da3e30;
    }
    else if (iVar3 == -0x7785fff9) {
      local_1a0 = (undefined2 **)0x144da3918;
    }
    else if (iVar3 == -0x7785ffe0) {
      local_1a0 = (undefined2 **)0x144da3928;
    }
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
    FUN_141a51990(param_1);
    local_1a8 = local_1a0;
    LowLevelFatalErrorHandler
              ("Unknown",0x1a8,
               L"The Direct3D 12 device that was being used has been removed (Error: %d \'%s\').  Please restart the game."
               ,iVar3);
    local_1a8 = (undefined2 **)CONCAT44(local_1a8._4_4_,iVar3);
    FDebug::AssertFailed
              (&DAT_144da21cf,"Unknown",0x1a8,
               L"The Direct3D 12 device that was being used has been removed (Error: %d \'%s\').  Please restart the game."
              );
  }
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar13 < DAT_1469fcfc4) && (_Init_thread_header(&DAT_1469fcfc4), DAT_1469fcfc4 == -1)) {
    uVar10 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar10,L"d3ddebug");
    if (cVar2 == '\0') {
      uVar10 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar10,L"d3debug");
      if (cVar2 != '\0') goto LAB_141a57111;
      uVar10 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar10,L"dxdebug");
      DAT_1469fcfc0 = 0;
      if (cVar2 != '\0') goto LAB_141a57111;
    }
    else {
LAB_141a57111:
      DAT_1469fcfc0 = 1;
    }
    _Init_thread_footer(&DAT_1469fcfc4);
  }
  if (param_1[3] != 0) goto LAB_141a57074;
  (**(code **)(*param_1 + 8))(param_1,DAT_1469fcfc0);
  if ((*piVar13 < DAT_1469fcfcc) && (_Init_thread_header(&DAT_1469fcfcc), DAT_1469fcfcc == -1)) {
    uVar10 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar10,L"d3dcompat");
    if (cVar2 == '\0') {
      uVar10 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar10,L"d3d12compat");
      DAT_1469fcfc8 = '\0';
      if (cVar2 != '\0') goto LAB_141a57177;
    }
    else {
LAB_141a57177:
      DAT_1469fcfc8 = '\x01';
    }
    _Init_thread_footer(&DAT_1469fcfcc);
  }
  puVar8 = (undefined8 *)0x0;
  if (DAT_1469fcfc8 == '\0') {
    plVar7 = (longlong *)param_1[4];
    puVar4 = (undefined8 *)param_1[3];
    param_1[4] = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    (**(code **)*puVar4)(puVar4,&DAT_144da71b0,param_1 + 4);
    plVar7 = (longlong *)param_1[5];
    puVar4 = (undefined8 *)param_1[3];
    param_1[5] = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    (**(code **)*puVar4)(puVar4,&DAT_144da71c0,param_1 + 5);
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x68))((longlong *)param_1[3],0,&local_78,0x3c);
  if (iVar3 < 0) {
    local_1a0 = &local_148;
    local_148 = (undefined2 *)0x0;
    local_140 = 0;
    local_1a8 = (undefined2 **)0x0;
    FUN_141a94000(iVar3,
                  "RootDevice->CheckFeatureSupport(D3D12_FEATURE_D3D12_OPTIONS, &D3D12Caps, sizeof(D3D12Caps))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x1c8);
  }
  *(undefined4 *)(param_1 + 6) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x34) = (undefined4)local_68;
  local_118 = 0;
  iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x68))((longlong *)param_1[3],0x12,&local_118);
  if (iVar3 < 0) {
    local_118 = 0;
    local_118._0_4_ = 0;
  }
  else {
  }
  local_138[0] = 2;
  *(bool *)((longlong)param_1 + 0x3c) = (int)local_118 != 0;
  iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x68))((longlong *)param_1[3],0xc,local_138);
  if (iVar3 < 0) {
    local_138[0] = 1;
  }
  *(undefined4 *)(param_1 + 7) = local_138[0];
  puVar4 = (undefined8 *)FUN_141a69030(0x80);
  if (puVar4 != (undefined8 *)0x0) {
    FName::FName(&local_110,L"Adapter Frame Fence",1);
    FUN_141a66d10(puVar4,param_1,&local_110);
    *puVar4 = &PTR_FUN_144da6398;
    puVar8 = puVar4;
  }
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0xe7,puVar8);
  FUN_141a6e860(param_1[0xe7]);
  FUN_141a53a50(param_1);
  lVar5 = operator_new(0x940);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_141a4be50(lVar5,param_1);
  }
  puVar8 = (undefined8 *)0x0;
  param_1[0x1aa] = lVar5;
  thunk_FUN_141a602d0(lVar5);
  param_1[0x12d] = **(longlong **)(param_1[0x1aa] + 0x5d8);
  if (DAT_1464c9c58 != '\0') {
    param_1[0x165] = **(longlong **)(param_1[0x1aa] + 0x620);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x46ab6e78);
  AK::MemoryMgr::StartProfileThreadUsage(0x46ab7030);
  (**(code **)(param_1[0x180] + 0x28))();
  local_98 = 0;
  local_90 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"Upload Buffer Allocator",0x30);
  puVar6 = (undefined8 *)operator_new(0x98);
  puVar4 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = param_1[0x1aa];
    local_158 = 1;
    local_160 = 0;
    local_168 = 0x100;
    local_170 = 0x800000;
    local_178 = 0;
    local_180 = 4;
    local_188 = 0x400000;
    local_190 = 0;
    local_198 = (undefined2 *)CONCAT44(local_198._4_4_,0x10000);
    local_1a0 = (undefined2 **)CONCAT44(local_1a0._4_4_,0xc0);
    local_1a8 = (undefined2 **)CONCAT44(local_1a8._4_4_,2);
    *puVar6 = param_1;
    FUN_141a4c6f0(puVar6 + 1,lVar5,&local_98,2);
    puVar4 = puVar6;
  }
  param_1[0xe0] = (longlong)puVar4;
  puVar4 = (undefined8 *)operator_new(0x98);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = param_1[0x1aa];
    local_158 = 1;
    local_160 = 0;
    local_168 = 0x100;
    local_170 = 0x100000;
    local_178 = 0;
    local_180 = 4;
    local_188 = 0x10000;
    local_190 = 0;
    local_198 = (undefined2 *)CONCAT44(local_198._4_4_,0x10000);
    local_1a0 = (undefined2 **)CONCAT44(local_1a0._4_4_,0xc0);
    local_1a8 = (undefined2 **)CONCAT44(local_1a8._4_4_,2);
    *puVar4 = param_1;
    FUN_141a4c6f0(puVar4 + 1,lVar5,&local_98,2);
    puVar8 = puVar4;
  }
  param_1[0xe1] = (longlong)puVar8;
  FString::PrintfImpl(&local_88,L"GBX_%d",1);
  local_198 = &DAT_143f3eda8;
  if (local_80 != 0) {
    local_198 = local_88;
  }
  local_1a0 = (undefined2 **)CONCAT44(local_1a0._4_4_,*(undefined4 *)((longlong)param_1 + 0x15c));
  local_1a8 = (undefined2 **)CONCAT44(local_1a8._4_4_,(int)param_1[0x2b]);
  FString::PrintfImpl(&local_a8,L"V%d_D%d_S%d_R%d_%s.ushaderprecache",(int)param_1[0x2a],
                      *(undefined4 *)((longlong)param_1 + 0x154));
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar8 = (undefined8 *)FUN_14167d1b0(&local_148);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*puVar8;
  }
  (**(code **)(*plVar7 + 0x70))(plVar7,&local_b8,puVar18,L"ushaderprecache");
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_b8 + (longlong)(int)local_b0 * 2;
  plVar7 = local_b8;
  local_110 = plVar9;
  if (local_b8 != plVar9) {
    do {
      local_f0 = (int)plVar7[1];
      lVar5 = (longlong)local_f0;
      local_f8 = (void *)0x0;
      _Src = (void *)*plVar7;
      if (local_f0 == 0) {
        local_ec = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
        _guard_xfg_dispatch_icall_nop(local_f8,_Src,lVar5 * 2);
      }
      puVar16 = (undefined2 *)0x0;
      local_1a8 = (undefined2 **)CONCAT44(local_1a8._4_4_,0xffffffff);
      puVar18 = &DAT_143f3eda8;
      if (local_80 != 0) {
        puVar18 = local_88;
      }
      iVar3 = FUN_141592950(&local_f8,puVar18,1,0);
      if (iVar3 == -1) {
        puVar8 = (undefined8 *)FUN_14167d1b0(local_108);
        iVar3 = 0;
        if (local_f0 != 0) {
          iVar3 = local_f0 + -1;
        }
        if ((*(int *)(puVar8 + 1) != 0) || (puVar18 = (undefined2 *)0x1, iVar3 + 1 == 0)) {
          puVar18 = puVar16;
        }
        local_130 = (short *)*puVar8;
        *puVar8 = 0;
        local_128 = *(int *)(puVar8 + 1);
        local_124 = *(int *)((longlong)puVar8 + 0xc);
        puVar8[1] = 0;
        if (local_124 < iVar3 + 1 + local_128 + (int)puVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_130);
        }
        FString::PathAppend(&local_130,local_f8);
        psVar17 = &DAT_143f3eda8;
        if (local_128 != 0) {
          psVar17 = local_130;
        }
        local_148 = (undefined2 *)0x0;
        local_140 = local_140 & 0xffffffff;
        puVar18 = puVar16;
        if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
          lVar5 = -1;
          do {
            lVar1 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar17[lVar1] != 0);
          uVar14 = (int)lVar5 + 1;
          local_140 = (ulonglong)uVar14;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
            uVar14 = (uint)local_140;
          }
          puVar18 = local_148;
          puVar16 = (undefined2 *)(ulonglong)uVar14;
          FGenericPlatformString::Memcpy(local_148,psVar17);
        }
        if (local_130 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_108[0] != 0) {
          FMemory::Free();
        }
        plVar9 = (longlong *)FUN_1415c3d50();
        local_1a8 = (undefined2 **)((ulonglong)local_1a8 & 0xffffffffffffff00);
        puVar11 = &DAT_143f3eda8;
        if ((int)puVar16 != 0) {
          puVar11 = puVar18;
        }
        (**(code **)(*plVar9 + 0x30))(plVar9,puVar11);
        plVar9 = local_110;
        if (puVar18 != (undefined2 *)0x0) {
          FMemory::Free(puVar18);
          plVar9 = local_110;
        }
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar9);
  }
  puVar18 = &DAT_143f3eda8;
  puVar16 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar16 = local_a8;
  }
  FString::PrintfImpl(&local_148,L"D3DGraphics_%s",puVar16);
  plVar7 = (longlong *)FUN_14167d1b0(local_108);
  iVar15 = 0;
  iVar3 = iVar15;
  if ((uint)local_140 != 0) {
    iVar3 = (uint)local_140 + -1;
  }
  if (((int)plVar7[1] != 0) || (iVar12 = 1, iVar3 + 1 == 0)) {
    iVar12 = 0;
  }
  local_c8 = *plVar7;
  *plVar7 = 0;
  local_c0 = (int)plVar7[1];
  local_bc = *(int *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (local_bc < iVar3 + 1 + local_c0 + iVar12) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
  }
  FString::PathAppend(&local_c8,local_148,iVar3);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar16 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar16 = local_a8;
  }
  FString::PrintfImpl(&local_148,L"D3DCompute_%s",puVar16);
  plVar7 = (longlong *)FUN_14167d1b0(local_108);
  iVar3 = iVar15;
  if ((uint)local_140 != 0) {
    iVar3 = (uint)local_140 + -1;
  }
  if (((int)plVar7[1] != 0) || (iVar12 = 1, iVar3 + 1 == 0)) {
    iVar12 = 0;
  }
  local_d8 = *plVar7;
  *plVar7 = 0;
  local_d0 = (int)plVar7[1];
  local_cc = *(int *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (local_cc < iVar3 + 1 + local_d0 + iVar12) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
  }
  FString::PathAppend(&local_d8,local_148,iVar3);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar16 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar16 = local_a8;
  }
  FString::PrintfImpl(&local_148,L"D3DDriverByteCodeBlob_%s",puVar16);
  plVar7 = (longlong *)FUN_14167d1b0(local_108);
  iVar3 = iVar15;
  if ((uint)local_140 != 0) {
    iVar3 = (uint)local_140 + -1;
  }
  if (((int)plVar7[1] != 0) || (iVar12 = 1, iVar3 + 1 == 0)) {
    iVar12 = iVar15;
  }
  local_e8 = *plVar7;
  *plVar7 = 0;
  local_e0 = (int)plVar7[1];
  local_dc = *(int *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (local_dc < iVar3 + 1 + local_e0 + iVar12) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
  }
  FString::PathAppend(&local_e8,local_148,iVar3);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar10 = FPlatformFileManager::Get();
  plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar10);
  puVar8 = (undefined8 *)FUN_14167d1b0(local_108);
  if (*(int *)(puVar8 + 1) != 0) {
    puVar18 = (undefined2 *)*puVar8;
  }
  (**(code **)(*plVar7 + 0x150))(plVar7,puVar18);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  FUN_141a96c80(param_1 + 0x42,&local_c8,&local_d8,&local_e8);
  FUN_141a977e0(param_1 + 0x42,0,0);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  plVar7 = local_b8;
  for (iVar3 = (int)local_b0; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free(local_98);
  }
LAB_141a57074:
  FUN_141edd460(local_120);
  return;
}



// FUNCTION 141a57180 FUN_141a57180 body=764 status=ok
// SIG undefined FUN_141a57180(void)

ulonglong FUN_141a57180(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong local_48 [4];
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)operator_new(0xa8);
  puVar6 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    local_48[0] = 0;
    local_48[1] = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"Tiny Read-Only Texture allocator",0x42);
    uVar3 = *param_1;
    *puVar5 = &PTR_FUN_1440104c8;
    *(undefined4 *)(puVar5 + 1) = 0;
    FUN_141a4c6f0(puVar5 + 2,uVar3,local_48,1,1,0x44,0x10000,0,0x80000,5,1,0x2000000,0x1000,4,1);
    *puVar5 = &PTR_FUN_144da65e8;
    puVar5[2] = &PTR_LAB_144da65f0;
    puVar5[0x14] = param_1;
    LOCK();
    DAT_146ab6300 = DAT_146ab6300 + (*(uint *)(puVar5 + 0x10) >> 10);
    UNLOCK();
    puVar6 = puVar5;
  }
  puVar4 = (undefined8 *)param_1[1];
  param_1[1] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((puVar5 != (undefined8 *)0x0) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  puVar6 = (undefined8 *)operator_new(0xa8);
  if (puVar6 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    local_48[2] = 0;
    local_48[3] = 0x22;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    FGenericPlatformString::Memcpy(local_48[2],L"Large Read-Only Texture allocator",0x44);
    uVar3 = *param_1;
    *puVar6 = &PTR_FUN_1440104c8;
    *(undefined4 *)(puVar6 + 1) = 0;
    FUN_141a4c6f0(puVar6 + 2,uVar3,local_48 + 2,1,1,0x44,0x10000,0,0x8000000,7,1,0x8000000,0x10000,0
                  ,1);
    *puVar6 = &PTR_FUN_144da65e8;
    puVar6[2] = &PTR_LAB_144da65f0;
    puVar6[0x14] = param_1;
    LOCK();
    uVar7 = (ulonglong)DAT_146ab6300;
    UNLOCK();
    puVar8 = puVar6;
    DAT_146ab6300 = DAT_146ab6300 + (*(uint *)(puVar6 + 0x10) >> 10);
  }
  puVar5 = (undefined8 *)param_1[3];
  param_1[3] = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar7 = (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((puVar6 != (undefined8 *)0x0) && (local_48[2] != 0)) {
    uVar7 = FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 141a57480 FUN_141a57480 body=572 status=ok
// SIG undefined FUN_141a57480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a57480(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [5];
  
  local_30[4] = DAT_1468387a8 ^ (ulonglong)auStack_88;
  DAT_1469fce78 = 0;
  DAT_1469fce80 = 0;
  DAT_1469fce88 = 0;
  DAT_1469fce90 = 0;
  DAT_1469fce98 = 0;
  DAT_1469fcea0 = 0;
  DAT_1469fcea8 = 0;
  DAT_1469fceb0 = 0;
  DAT_1469fceb8 = 0;
  DAT_1469fcec0 = 0;
  DAT_1469fcec8 = 0;
  DAT_1469fced0 = 0;
  DAT_1469fced8 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_58 = (longlong *)0x0;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x188))
                    (*(undefined8 **)(param_1 + 0x188),&DAT_144da71e0,&local_58);
  if (iVar1 < 0) {
    local_60 = &local_50;
    local_50 = 0;
    local_48 = 0;
    local_68 = 0;
    FUN_141a94000(iVar1,"GetAdapter()->QueryInterface(IID_PPV_ARGS(Adapter3.GetInitReference()))",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x34f);
  }
  iVar1 = (**(code **)(*local_58 + 0x70))(local_58,0,0,local_30);
  if (iVar1 < 0) {
    local_60 = &local_40;
    local_40 = 0;
    local_38 = 0;
    local_68 = 0;
    FUN_141a94000(iVar1,
                  "Adapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, LocalVideoMemoryInfo)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.cpp",
                  0x351);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  DAT_1469fce78 = (local_30[0] + 0xfffffU & 0xfffffffffff00000) - 0x100000;
  uVar2 = FCommandLine::Get();
  FParse::Value(uVar2,L"D3D12VRAMBudgetOS=",&DAT_1469fcec8);
  lVar3 = DAT_1469fcec8 * 0x100000;
  DAT_1469fce80 = 0x8000000;
  if (lVar3 < 0) {
    DAT_1469fcec8 = 0;
  }
  else {
    DAT_1469fcec8 = DAT_1469fce78;
    if (lVar3 < DAT_1469fce78) {
      DAT_1469fcec8 = lVar3;
    }
    DAT_1469fce80 = 0x8000000;
    if (0 < DAT_1469fcec8) {
      DAT_1469fce80 = DAT_1469fcec8;
    }
  }
  uVar2 = FCommandLine::Get();
  FParse::Value(uVar2,L"D3D12VRAMThreshold=",&DAT_1469fced8);
  lVar3 = DAT_1469fced8 * 0x100000;
  DAT_1469fced8 = 0;
  if ((-1 < lVar3) && (DAT_1469fced8 = DAT_1469fce78, lVar3 < DAT_1469fce78)) {
    DAT_1469fced8 = lVar3;
  }
  DAT_1469fced0 = DAT_1469fce80 + 0x10000000;
  if (0 < DAT_1469fced8) {
    DAT_1469fced0 = DAT_1469fce80 + DAT_1469fcec8;
  }
  return;
}



// FUNCTION 141a576c0 FUN_141a576c0 body=48 status=ok
// SIG undefined FUN_141a576c0(void)

undefined8 FUN_141a576c0(undefined8 param_1,longlong param_2)

{
  param_2 = DAT_1469fce90 + DAT_1469fcea0 + DAT_1469fce98 + DAT_1469fce80 + param_2;
  return CONCAT71((int7)((ulonglong)param_2 >> 8),param_2 < DAT_1469fce78);
}



// FUNCTION 141a576f0 FUN_141a576f0 body=306 status=ok
// SIG undefined FUN_141a576f0(void)

undefined1 FUN_141a576f0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(ulonglong *)(param_1 + 0x40) <= param_2) {
    return 0;
  }
  if (*(ulonglong *)(param_1 + 0x48) < param_2) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uStack_20 = 0;
    uStack_18 = 0;
    if (**(longlong **)(param_1 + 0x68) != 0) {
      lVar1 = **(longlong **)(param_1 + 0x68);
      uVar5 = *(ulonglong *)(lVar1 + 8);
      uStack_20 = *(undefined8 *)(lVar1 + 0x10);
      uStack_18 = *(undefined8 *)(lVar1 + 0x18);
      if (param_2 < uVar5) {
        LeaveCriticalSection(lpCriticalSection);
        return 1;
      }
      cVar2 = FUN_141a88e20(&uStack_20);
      if (cVar2 != '\0') {
        FUN_141a52290(param_1);
        uVar3 = FUN_141a576f0(param_1,param_2,param_3,param_4,uVar5);
        LeaveCriticalSection(lpCriticalSection);
        return uVar3;
      }
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}



// FUNCTION 141a57830 FUN_141a57830 body=101 status=ok
// SIG undefined FUN_141a57830(void)

undefined8 FUN_141a57830(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                    (*(longlong **)(param_1 + 0x18),0,0,(undefined8 *)(param_1 + 0xd8));
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,"Resource->Map(0, nullptr, &ResourceBaseAddress)",
                  "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\../Public/D3D12Resources.h"
                  ,0xf9,0,&local_18);
  }
  return *(undefined8 *)(param_1 + 0xd8);
}



// FUNCTION 141a578a0 FUN_141a578a0 body=85 status=ok
// SIG undefined FUN_141a578a0(void)

undefined1 FUN_141a578a0(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc2,
             L"Pure virtual not implemented (%s)",L"MigrateCommitedResource");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc2,
             L"Pure virtual not implemented (%s)",L"MigrateCommitedResource");
  return 0;
}



// FUNCTION 141a57900 FUN_141a57900 body=133 status=ok
// SIG undefined FUN_141a57900(void)

void FUN_141a57900(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc1,
             L"Pure virtual not implemented (%s)",L"MigratePlacedResource");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHICommon.h",0xc1,
             L"Pure virtual not implemented (%s)",L"MigratePlacedResource");
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}



// FUNCTION 141a57990 FUN_141a57990 body=1011 status=ok
// SIG undefined FUN_141a57990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a57990(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  longlong local_290;
  undefined *local_288;
  longlong **local_280;
  ulonglong local_278;
  longlong *local_270;
  longlong *local_268 [2];
  undefined2 local_258;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_280 = &local_270;
  local_270 = (longlong *)0x0;
  local_288 = &DAT_144da7250;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  local_290 = param_3 + 0x68;
  if (*(char *)(param_3 + 0x7c) == '\0') {
    local_290 = 0;
  }
  local_298 = 0x400;
  local_268[0] = param_4;
  iVar6 = (**(code **)(*plVar2 + 0xd8))(plVar2,param_4,0,param_3 + 0x30);
  if (iVar6 < 0) {
    if (local_270 != (longlong *)0x0) {
      (**(code **)(*local_270 + 0x10))();
    }
    uVar7 = 0;
  }
  else {
    FUN_141a7d3a0(param_2);
    plVar5 = local_270;
    plVar2 = *(longlong **)(param_3 + 0x18);
    local_278 = CONCAT44(local_278._4_4_,0x100);
    lVar3 = **(longlong **)(param_1 + 0x5d8);
    iVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_144da45b8,&local_278,&local_258);
    if (-1 < iVar6) {
      if (((uint)local_278 >> 1) - 2 < 0xff) {
        uVar8 = (ulonglong)(((uint)local_278 >> 1) - 1);
        if (0x1ff < uVar8 * 2) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        lVar4 = *plVar5;
        (&local_258)[uVar8] = 0;
        (**(code **)(lVar4 + 0x20))(plVar5,&DAT_144da45b8,local_278 & 0xffffffff,&local_258);
      }
    }
    local_278 = CONCAT44(local_278._4_4_,0x100);
    iVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,&DAT_144da4708,&local_278,&local_258);
    if (-1 < iVar6) {
      if ((uint)local_278 - 2 < 0xff) {
        if (0xff < (uint)local_278 - 1) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        *(undefined1 *)((longlong)&local_258 + (ulonglong)((uint)local_278 - 1)) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_144da4708,local_278 & 0xffffffff,&local_258);
      }
    }
    lVar4 = lVar3 + 0x460;
    if (*(char *)(param_3 + 0xb4) == '\0') {
      uVar1 = *(undefined4 *)(param_3 + 0xa8);
      local_298 = 0xffffffff;
      FUN_141a4f5b0(lVar4,param_3,uVar1,0x800);
      lVar9 = *(longlong *)(lVar3 + 0x468);
      if (*(int *)(lVar9 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xd0))
                  (*(longlong **)(lVar9 + 0x28),*(int *)(lVar9 + 0x100),
                   *(undefined8 *)(lVar9 + 0xf8));
        *(undefined4 *)(lVar9 + 0x100) = 0;
        lVar9 = *(longlong *)(lVar3 + 0x468);
      }
      (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x88))
                (*(longlong **)(lVar9 + 0x28),plVar5,plVar2);
      *(int *)(lVar3 + 0x2c54) = *(int *)(lVar3 + 0x2c54) + 1;
      local_298 = 0xffffffff;
      FUN_141a4f5b0(lVar4,param_3,0x800,uVar1);
      param_4 = local_268[0];
    }
    else {
      FUN_141a60fb0(lVar4,param_3,0,0xffffffff);
      lVar9 = *(longlong *)(lVar3 + 0x468);
      if (*(int *)(lVar9 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xd0))
                  (*(longlong **)(lVar9 + 0x28),*(int *)(lVar9 + 0x100),
                   *(undefined8 *)(lVar9 + 0xf8));
        *(undefined4 *)(lVar9 + 0x100) = 0;
      }
      FUN_141a60fb0(lVar4,param_3,0x800,0xffffffff);
      lVar9 = *(longlong *)(lVar3 + 0x468);
      if (*(int *)(lVar9 + 0x100) != 0) {
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xd0))
                  (*(longlong **)(lVar9 + 0x28),*(int *)(lVar9 + 0x100),
                   *(undefined8 *)(lVar9 + 0xf8));
        *(undefined4 *)(lVar9 + 0x100) = 0;
        lVar9 = *(longlong *)(lVar3 + 0x468);
      }
      (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x88))
                (*(longlong **)(lVar9 + 0x28),plVar5,plVar2);
      *(int *)(lVar3 + 0x2c54) = *(int *)(lVar3 + 0x2c54) + 1;
    }
    local_268[0] = local_270;
    if (local_270 != (longlong *)0x0) {
      (**(code **)(*local_270 + 8))();
    }
    local_278 = 0;
    FUN_141a5f070(param_3,&local_278,local_268,param_4);
    if (*(char *)(param_3 + 0xb4) == '\0') {
      local_298 = 0xffffffff;
      FUN_141a4f5b0(lVar4,param_3,0x400,*(undefined4 *)(param_3 + 0xa8));
    }
    else {
      uVar7 = FUN_141a55b20();
      CResourceState::SetResourceState(uVar7,0x400);
      FUN_141a60fb0(lVar4,param_3,*(undefined4 *)(param_3 + 0xac),0xffffffff);
    }
    lVar3 = *(longlong *)(lVar3 + 0x468);
    if (*(int *)(lVar3 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar3 + 0x28) + 0xd0))
                (*(longlong **)(lVar3 + 0x28),*(int *)(lVar3 + 0x100),*(undefined8 *)(lVar3 + 0xf8))
      ;
      *(undefined4 *)(lVar3 + 0x100) = 0;
    }
    FUN_141a7d380(param_2);
    if (local_270 != (longlong *)0x0) {
      (**(code **)(*local_270 + 0x10))();
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 141a57d90 FUN_141a57d90 body=636 status=ok
// SIG undefined FUN_141a57d90(void)

void FUN_141a57d90(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  
  local_res10 = (longlong *)0x0;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  (**(code **)(*plVar4 + 0xe8))
            (plVar4,*(undefined8 *)(*param_3 + 0x18),param_4,param_2 + 0x30,0x400,0,&DAT_144da7250,
             &local_res10);
  plVar4 = local_res10;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = **(longlong **)(param_1 + 0x5d8);
  if (*(char *)(param_2 + 0xb4) == '\0') {
    uVar3 = *(undefined4 *)(param_2 + 0xa8);
    FUN_141a4f5b0(lVar6 + 0x460,param_2,uVar3,0x800,0xffffffff);
    *(int *)(lVar6 + 0x2c54) = *(int *)(lVar6 + 0x2c54) + 1;
    lVar8 = *(longlong *)(lVar6 + 0x468);
    if (*(int *)(lVar8 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar8 + 0x28) + 0xd0))
                (*(longlong **)(lVar8 + 0x28),*(int *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0xf8))
      ;
      *(undefined4 *)(lVar8 + 0x100) = 0;
      lVar8 = *(longlong *)(lVar6 + 0x468);
    }
    (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x88))(*(longlong **)(lVar8 + 0x28),plVar4,uVar5);
    FUN_141a4f5b0(lVar6 + 0x460,param_2,0x800,uVar3,0xffffffff);
  }
  else {
    FUN_141a60fb0(lVar6 + 0x460,param_2,0x800,0xffffffff);
    *(int *)(lVar6 + 0x2c54) = *(int *)(lVar6 + 0x2c54) + 1;
    lVar8 = *(longlong *)(lVar6 + 0x468);
    if (*(int *)(lVar8 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar8 + 0x28) + 0xd0))
                (*(longlong **)(lVar8 + 0x28),*(int *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0xf8))
      ;
      *(undefined4 *)(lVar8 + 0x100) = 0;
      lVar8 = *(longlong *)(lVar6 + 0x468);
    }
    (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x88))(*(longlong **)(lVar8 + 0x28),plVar4,uVar5);
  }
  lVar8 = *param_3;
  local_res8 = local_res10;
  local_res18 = lVar8;
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 8))();
    local_res18 = *param_3;
  }
  if (local_res18 != 0) {
    LOCK();
    *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
    UNLOCK();
  }
  FUN_141a5f070(param_2,&local_res18,&local_res8,lVar8 + 0x38);
  if (*(char *)(param_2 + 0xb4) == '\0') {
    FUN_141a4f5b0(lVar6 + 0x460,param_2,0x400,*(undefined4 *)(param_2 + 0xa8),0xffffffff);
    lVar6 = *(longlong *)(lVar6 + 0x468);
    if (*(int *)(lVar6 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar6 + 0x28) + 0xd0))
                (*(longlong **)(lVar6 + 0x28),*(int *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0xf8))
      ;
      *(undefined4 *)(lVar6 + 0x100) = 0;
    }
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  puVar7 = (undefined8 *)*param_3;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  return;
}



// FUNCTION 141a58010 FUN_141a58010 body=297 status=ok
// SIG undefined FUN_141a58010(void)

void FUN_141a58010(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong local_res18 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  iVar6 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x20))();
  if (iVar6 == 1) {
    plVar3 = *(longlong **)(lVar2 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(longlong **)(*param_2 + (longlong)iVar6 * 8) = plVar3;
    local_res18[0] = *param_4;
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    if (local_res18[0] != 0) {
      LOCK();
      *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
      UNLOCK();
    }
    FUN_141a57d90(param_1,lVar2,local_res18,uVar4);
  }
  else if (iVar6 == 2) {
    *(longlong *)(param_3 + 0x40) =
         *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd0) + *(longlong *)(param_3 + 0x48);
    if (*(int *)(*(longlong *)(param_3 + 0x18) + 0x28) == 2) {
      *(longlong *)(param_3 + 0x38) =
           *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd8) + *(longlong *)(param_3 + 0x48);
    }
  }
  puVar5 = (undefined8 *)*param_4;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (puVar5 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141a58131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)(puVar5,1);
      return;
    }
  }
  return;
}



// FUNCTION 141a58140 FUN_141a58140 body=1591 status=ok
// SIG undefined FUN_141a58140(void)

void FUN_141a58140(longlong *param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  LPCRITICAL_SECTION p_Var15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong *local_158;
  undefined8 local_150;
  longlong *local_148;
  ulonglong local_140;
  ulonglong *local_138;
  int local_130;
  uint uStack_12c;
  uint *puStack_128;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  LPCRITICAL_SECTION local_e0;
  longlong local_d8;
  int local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  uint *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *puStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  undefined8 uStack_58;
  uint local_50;
  uint uStack_4c;
  
  p_Var15 = (LPCRITICAL_SECTION)(param_1 + 5);
  local_e0 = p_Var15;
  BVar4 = TryEnterCriticalSection(p_Var15);
  if (BVar4 == 0) {
    EnterCriticalSection(p_Var15);
  }
  iVar5 = (int)param_3[1];
  puVar9 = (ulonglong *)0x0;
  iVar8 = *(int *)((longlong)param_3 + 0x34);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_138 = (ulonglong *)0x0;
  local_158 = (ulonglong *)0x0;
  local_150 = 0;
  if (0 < iVar5 - iVar8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_148,iVar5 - iVar8);
    iVar8 = *(int *)((longlong)param_3 + 0x34);
    iVar5 = (int)param_3[1];
  }
  puVar16 = puVar9;
  puVar17 = puVar9;
  if (0 < iVar5 - iVar8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_158);
    puVar16 = (ulonglong *)(local_150 & 0xffffffff);
    local_138 = local_158;
    puVar17 = local_158;
  }
  uVar14 = *(uint *)(param_3 + 5);
  puVar1 = (uint *)(param_3 + 2);
  uStack_104 = 1;
  local_108 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  if (uVar14 != 0) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar13 = *puVar12;
    puVar18 = puVar9;
    while (uVar13 == 0) {
      iVar5 = (int)puVar9;
      uStack_f0 = (int)puVar18 + 0x20;
      puVar18 = (ulonglong *)(ulonglong)uStack_f0;
      local_108 = iVar5 + 1;
      puVar9 = (ulonglong *)(ulonglong)local_108;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_141a58294;
      uVar13 = puVar12[(longlong)iVar5 + 1];
    }
    uStack_104 = -uVar13 & uVar13;
    local_d0 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> local_d0 == 0; local_d0 = local_d0 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_d0;
    }
    uStack_f4 = (uStack_f0 - iVar5) + 0x1f;
    if ((int)uVar14 < (int)uStack_f4) {
LAB_141a58294:
      uStack_f4 = uVar14;
    }
  }
  local_f8 = 0xffffffff;
  uStack_11c = *(uint *)(param_3 + 5);
  uStack_b8 = CONCAT44(uStack_104,local_108);
  uStack_a8 = 0xffffffff;
  uStack_a4 = uStack_f4;
  uStack_110 = CONCAT44(uStack_ec,uStack_f0);
  bVar7 = (byte)uStack_11c & 0x1f;
  uStack_12c = 1 << bVar7;
  uStack_118 = uStack_11c & 0xffffffe0;
  local_130 = (int)uStack_11c >> 5;
  uStack_120 = -1 << bVar7;
  uStack_114 = uStack_f4;
  if (uStack_11c != uVar14) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar13 = puVar12[local_130] & uStack_120;
    while (uVar13 == 0) {
      lVar10 = (longlong)local_130;
      uStack_118 = uStack_118 + 0x20;
      iVar5 = local_130 + 1;
      bVar2 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_130;
      local_130 = iVar5;
      if (bVar2) goto LAB_141a583a9;
      uVar13 = puVar12[lVar10 + 1];
      uStack_120 = 0xffffffff;
    }
    uStack_12c = -uVar13 & uVar13;
    iVar5 = 0x1f;
    if (uStack_12c != 0) {
      for (; uStack_12c >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_12c == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_11c = (uStack_118 - iVar5) + 0x1f;
    if ((int)uVar14 < (int)uStack_11c) {
LAB_141a583a9:
      uStack_11c = uVar14;
    }
  }
  uVar14 = uStack_11c;
  uStack_80 = uStack_120;
  uStack_7c = uStack_11c;
  uStack_78 = uStack_118;
  uStack_74 = uStack_f4;
  iStack_90 = local_130;
  uStack_8c = uStack_12c;
  uStack_58 = CONCAT44(uStack_11c,uStack_120);
  iStack_68 = local_130;
  uStack_64 = uStack_12c;
  local_50 = uStack_118;
  uStack_4c = uStack_f4;
  puStack_128 = puVar1;
  puStack_100 = puVar1;
  local_c0 = param_3;
  local_b0 = puVar1;
  local_a0 = uStack_110;
  local_98 = param_3;
  puStack_88 = puVar1;
  local_70 = param_3;
  local_60 = puVar1;
  while( true ) {
    uVar13 = (uint)puVar16;
    if (((uStack_a4 == uVar14) && (local_b0 == puVar1)) && (local_c0 == param_3)) break;
    plVar21 = *(longlong **)(*local_c0 + (longlong)(int)uStack_a4 * 0x10);
    cVar3 = (**(code **)(*plVar21 + 0x18))(plVar21,&local_148);
    if (cVar3 != '\0') {
      lVar10 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      local_150 = CONCAT44(local_150._4_4_,uVar13);
      if (local_150._4_4_ < (int)uVar13) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158,puVar16);
        puVar17 = local_158;
        uVar13 = (uint)local_150;
      }
      puVar16 = (ulonglong *)(ulonglong)uVar13;
      puVar17[lVar10] = (ulonglong)plVar21;
      if (*param_2 <= (int)uVar13) break;
    }
    uStack_a8 = uStack_a8 & ~uStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
  }
  p_Var15 = local_e0;
  local_138 = puVar17;
  if (0 < (int)uVar13) {
    puVar9 = puVar17 + (int)uVar13;
    if (puVar17 != puVar9) {
LAB_141a584a0:
      local_c8 = *puVar17;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar22 = (longlong)(int)param_3[9] - 1;
        iVar5 = (int)(local_c8 >> 4);
        uVar13 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
        uVar14 = -(uVar13 + iVar5) ^ uVar13 >> 0xd;
        uVar20 = (iVar5 - uVar13) - uVar14 ^ uVar14 >> 0xc;
        uVar13 = (uVar13 - uVar20) - uVar14 ^ uVar20 << 0x10;
        uVar14 = (uVar14 - uVar13) - uVar20 ^ uVar13 >> 5;
        uVar20 = (uVar20 - uVar13) - uVar14 ^ uVar14 >> 3;
        uVar13 = (uVar13 - uVar20) - uVar14 ^ uVar20 << 10;
        plVar21 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar21 = param_3 + 7;
        }
        iVar5 = *(int *)((longlong)plVar21 +
                        (((longlong)(int)((uVar14 - uVar13) - uVar20) ^ (ulonglong)(uVar13 >> 0xf))
                        & uVar22) * 4);
        if (iVar5 != -1) {
          lVar10 = *param_3;
          do {
            lVar19 = (longlong)iVar5;
            if (*(ulonglong *)(lVar10 + lVar19 * 0x10) == local_c8) {
              uVar22 = (longlong)*(int *)(lVar10 + 0xc + lVar19 * 0x10) & uVar22;
              piVar11 = (int *)((longlong)plVar21 + uVar22 * 4);
              iVar8 = *(int *)((longlong)plVar21 + uVar22 * 4);
              goto joined_r0x000141a585a8;
            }
            iVar5 = *(int *)(lVar10 + 8 + lVar19 * 0x10);
          } while (iVar5 != -1);
        }
      }
      goto LAB_141a58632;
    }
LAB_141a5865b:
    p_Var15 = local_e0;
    puVar17 = local_138;
    *(int *)(param_1 + 4) = (int)param_1[0x15] - *(int *)((longlong)param_1 + 0xd4);
    *(int *)((longlong)param_1 + 0x24) = (int)param_1[0x29] - *(int *)((longlong)param_1 + 0x174);
    FUN_141a55210(**(undefined8 **)(*param_1 + 0x5d8),&local_e0,1);
    if (local_d8 != 0) {
      LOCK();
      piVar11 = (int *)(local_d8 + 8);
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      puVar17 = local_158;
      if (iVar5 == 1) {
        FUN_141a4ed50(local_d8,1);
        puVar17 = local_158;
      }
    }
    plVar21 = local_148;
    for (iVar5 = (int)local_140; iVar5 != 0; iVar5 = iVar5 + -1) {
      if ((longlong *)*plVar21 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar21 + 0x10))();
      }
      plVar21 = plVar21 + 1;
    }
    uVar22 = local_140 >> 0x20;
    local_140 = local_140 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_148,0);
    }
    uVar22 = local_150 >> 0x20;
    local_150 = local_150 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_158,0);
      puVar17 = local_158;
    }
  }
  if (puVar17 != (ulonglong *)0x0) {
    FMemory::Free(puVar17);
  }
  plVar21 = local_148;
  for (iVar5 = (int)local_140; iVar5 != 0; iVar5 = iVar5 + -1) {
    if ((longlong *)*plVar21 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar21 + 0x10))();
    }
    plVar21 = plVar21 + 1;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  LeaveCriticalSection(p_Var15);
  return;
joined_r0x000141a585a8:
  if (iVar8 == -1) goto LAB_141a585d0;
  if (iVar8 == iVar5) {
    *piVar11 = *(int *)(lVar10 + lVar19 * 0x10 + 8);
    goto LAB_141a585d0;
  }
  piVar11 = (int *)(lVar10 + 8 + (longlong)iVar8 * 0x10);
  iVar8 = *piVar11;
  goto joined_r0x000141a585a8;
LAB_141a585d0:
  bVar7 = (byte)iVar5 & 0x1f;
  if (*(int *)((longlong)param_3 + 0x34) != 0) {
    *(int *)(*param_3 + (longlong)(int)param_3[6] * 0x10) = iVar5;
  }
  lVar10 = *param_3;
  *(undefined4 *)(lVar10 + lVar19 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_3 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_3[6];
  }
  *(undefined4 *)(lVar10 + 4 + lVar19 * 0x10) = uVar6;
  *(int *)((longlong)param_3 + 0x34) = *(int *)((longlong)param_3 + 0x34) + 1;
  *(int *)(param_3 + 6) = iVar5;
  puVar12 = (uint *)param_3[4];
  if ((uint *)param_3[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x1f;
  }
  puVar12[iVar5 >> 5] = puVar12[iVar5 >> 5] & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
LAB_141a58632:
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
  Emplace<FObjectReplicator_*_const_&>(param_4,local_e8,&local_c8,0);
  puVar17 = puVar17 + 1;
  if (puVar17 == puVar9) goto LAB_141a5865b;
  goto LAB_141a584a0;
}



// FUNCTION 141a58780 FUN_141a58780 body=98 status=ok
// SIG undefined FUN_141a58780(void)

void FUN_141a58780(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 + 0x18 != param_2) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(param_1 + 0x20) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 0x20),1);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141a587f0 FUN_141a587f0 body=658 status=ok
// SIG undefined FUN_141a587f0(void)

void FUN_141a587f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (iVar5 = *(int *)(param_1 + 0x40), iVar5 != 0)) {
    local_68 = &PTR_FUN_144da6378;
    local_60 = 0;
    if ((&local_68 != (undefined ***)(param_1 + 0x18)) &&
       (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0)) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      iVar5 = *(int *)(param_1 + 0x40);
      local_60 = lVar7;
    }
    lVar7 = local_60;
    uVar8 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x40);
    }
    local_58 = uVar8;
    local_50 = iVar5 + -1;
    puVar6 = (undefined8 *)operator_new(0x28);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = &PTR_FUN_144da6378;
      puVar6[2] = lVar7;
      iVar5 = iVar5 + -1;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        uVar8 = local_58;
        iVar5 = local_50;
      }
      puVar6[3] = uVar8;
      *(int *)(puVar6 + 4) = iVar5;
      puVar2 = *(undefined8 **)(param_1 + 0x70);
      *(undefined8 **)(param_1 + 0x70) = puVar6;
      *puVar2 = puVar6;
    }
    FUN_141a4e610(param_1 + 0x88,(undefined ***)(param_1 + 0x18));
    while (lVar7 = local_60, **(longlong **)(param_1 + 0x78) != 0) {
      lVar3 = **(longlong **)(param_1 + 0x78);
      FUN_141a4e6a0(&local_68,lVar3 + 8);
      lVar7 = local_60;
      local_50 = *(int *)(lVar3 + 0x20);
      if ((local_60 != 0) && (cVar4 = FUN_141a576f0(local_60,local_58), cVar4 == '\0')) break;
      lVar7 = **(longlong **)(param_1 + 0x78);
      if (lVar7 != 0) {
        FUN_141a4e6a0(&local_68,lVar7 + 8);
        local_50 = *(int *)(lVar7 + 0x20);
        lVar3 = *(longlong *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x78) = lVar7;
        local_48 = &PTR_FUN_144da6378;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        FUN_141a4e6a0(lVar7 + 8,&local_48);
        *(undefined4 *)(lVar7 + 0x20) = local_30;
        if (local_40 != 0) {
          LOCK();
          piVar1 = (int *)(local_40 + 8);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            FUN_141a4ed50(local_40,1);
          }
        }
        if (lVar3 != 0) {
          *(undefined ***)(lVar3 + 8) = &PTR_FUN_144da6378;
          if (*(longlong *)(lVar3 + 0x10) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 8);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar5 == 1) && (*(longlong *)(lVar3 + 0x10) != 0)) {
              FUN_141a4ed50(*(longlong *)(lVar3 + 0x10),1);
            }
          }
          FMemory::operator_delete(lVar3,0x28);
        }
      }
      *(int *)(param_1 + 0x44) = local_50 + 1;
    }
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FUN_141a4ed50(local_60,1);
      }
    }
  }
  if (param_1 + 0x18 != param_2) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (*(longlong *)(param_1 + 0x20) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 0x20),1);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    lVar7 = *(longlong *)(param_2 + 8);
    if (lVar7 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar7;
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141a58a90 FUN_141a58a90 body=342 status=ok
// SIG undefined FUN_141a58a90(void)

void FUN_141a58a90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **local_28;
  longlong local_20;
  
  lVar3 = *(longlong *)(param_1 + 0x470);
  if (lVar3 == 0) {
    lVar3 = FUN_141a75680(param_1 + 0x480);
    *(longlong *)(param_1 + 0x470) = lVar3;
  }
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x30);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x40);
  }
  lVar4 = FUN_141a75810(uVar5,&local_28,lVar3);
  lVar3 = param_1 + 0x460;
  if (lVar3 != lVar4) {
    if (*(longlong *)(param_1 + 0x468) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x468) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(longlong *)(param_1 + 0x468) != 0)) {
        FUN_141a4ed50(*(longlong *)(param_1 + 0x468),1);
      }
    }
    *(undefined8 *)(param_1 + 0x468) = 0;
    lVar4 = *(longlong *)(lVar4 + 8);
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 0x468) = lVar4;
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  local_28 = &PTR_FUN_144da6378;
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_20 != 0)) {
      FUN_141a4ed50(local_20,1);
    }
  }
  *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x2330) = 0;
  *(undefined8 *)(param_1 + 0x2338) = 0;
  FUN_141a5fe20(param_1 + 0x2300);
  (**(code **)(**(longlong **)(param_1 + 0x2340) + 0x10))(*(longlong **)(param_1 + 0x2340),lVar3);
  (**(code **)(*(longlong *)(param_1 + 0x2360) + 0x10))((longlong *)(param_1 + 0x2360),lVar3);
  FUN_141a706d0(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x2c44) = 0;
  *(undefined8 *)(param_1 + 0x2c4c) = 0;
  *(undefined8 *)(param_1 + 0x2c54) = 0;
  return;
}



// FUNCTION 141a58c10 FUN_141a58c10 body=146 status=ok
// SIG undefined FUN_141a58c10(void)

void FUN_141a58c10(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 *param_6,undefined4 param_7,int param_8,int param_9,
                  undefined8 *param_10)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 400) = param_7;
  *(int *)(param_1 + 0x180) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(int *)(param_1 + 0x198) = param_9;
  *(int *)(param_1 + 0x194) = param_8;
  *(int *)(param_1 + 0x184) = param_5;
  uVar1 = FUN_141a755c0(param_1 + 0x2c60,param_4 * param_5);
  *param_6 = uVar1;
  uVar1 = FUN_141a755c0(param_1 + 0x2cf0,param_8 * param_9);
  *param_10 = uVar1;
  return;
}



// FUNCTION 141a58cb0 RHIBeginDrawIndexedPrimitiveUP body=129 status=ok
// SIG undefined RHIBeginDrawIndexedPrimitiveUP(void)

void FD3D12CommandContextRedirector::RHIBeginDrawIndexedPrimitiveUP
               (longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 *param_6,undefined4 param_7,int param_8,int param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x180) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(int *)(param_1 + 0x184) = param_5;
  uVar1 = FMemory::Malloc(param_4 * param_5,0);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  *param_6 = uVar1;
  *(undefined4 *)(param_1 + 400) = param_7;
  *(int *)(param_1 + 0x194) = param_8;
  *(int *)(param_1 + 0x198) = param_9;
  uVar1 = FMemory::Malloc(param_8 * param_9,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *param_10 = uVar1;
  return;
}



// FUNCTION 141a58d40 FUN_141a58d40 body=66 status=ok
// SIG undefined FUN_141a58d40(void)

void FUN_141a58d40(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x180) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(int *)(param_1 + 0x184) = param_5;
  uVar1 = FUN_141a755c0(param_1 + 0x2c60,param_4 * param_5);
  *param_6 = uVar1;
  return;
}



// FUNCTION 141a58d90 RHIBeginDrawPrimitiveUP body=77 status=ok
// SIG undefined RHIBeginDrawPrimitiveUP(void)

void FD3D12CommandContextRedirector::RHIBeginDrawPrimitiveUP
               (longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x180) = param_4;
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  *(int *)(param_1 + 0x184) = param_5;
  uVar1 = FMemory::Malloc(param_4 * param_5,0x10);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  *param_6 = uVar1;
  return;
}



// FUNCTION 141a58de0 FUN_141a58de0 body=475 status=ok
// SIG undefined FUN_141a58de0(void)

void FUN_141a58de0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_141a616b0(*(undefined8 *)(param_1[0x2e] + 0xd50));
  uVar7 = 0;
  if ((*(int *)((longlong)param_1 + 0x1ac) == 0) && (0 < (int)param_1[0x36])) {
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  uVar5 = (ulonglong)_tls_index;
  *(int *)((longlong)param_1 + 0x1ac) = *(int *)((longlong)param_1 + 0x1ac) + 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x38) <
      DAT_1469fcfd8) {
    _Init_thread_header(&DAT_1469fcfd8);
    if (DAT_1469fcfd8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fcfd0 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHILogBeginEndScopes")
      ;
      _Init_thread_footer(&DAT_1469fcfd8);
    }
  }
  if (DAT_1469fcfd0 != (longlong *)0x0) {
    (**(code **)(*DAT_1469fcfd0 + 0x68))();
  }
  RHIPrivateBeginFrame();
  lVar2 = *(longlong *)(param_1[0x2e] + 0xd50);
  lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
  if (lVar4 != 0) {
    FUN_141a70af0(lVar2 + 0x558,lVar4);
  }
  if (*(char *)(lVar2 + 0x3c0) != '\0') {
    cVar3 = TSparseArray<TSetElement<FD3D12UniqueDescriptorTable<16>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::Compact(lVar2 + 0x370);
    if (cVar3 != '\0') {
      FUN_141a5e3d0(lVar2 + 0x370);
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x5e0);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      FUN_141a50e60(*(longlong *)(*(longlong *)(lVar2 + 0x5d8) + (longlong)(int)uVar6 * 8) + 0x2300)
      ;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uVar1 = *(uint *)(lVar2 + 0x628);
  if (uVar1 != 0) {
    do {
      FUN_141a50e60(*(longlong *)(*(longlong *)(lVar2 + 0x620) + (longlong)(int)uVar7 * 8) + 0x2300)
      ;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  *(undefined1 *)(lVar2 + 0x3c0) = 0;
  if (*(int *)((longlong)param_1 + 0x1ac) == 1) {
    FUN_141a83f20(param_1[0x2e] + 0xb30,*(undefined8 *)(param_1[0x2e] + 0x10));
  }
  return;
}



// FUNCTION 141a58fc0 FUN_141a58fc0 body=528 status=ok
// SIG undefined FUN_141a58fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a58fc0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_338 [48];
  undefined1 local_308 [480];
  longlong local_128;
  undefined1 local_120 [168];
  longlong local_78 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  FUN_141ed9160(param_2);
  if (*(char *)((longlong)param_2 + 0x10d) != '\0') {
    plVar8 = local_78;
    iVar11 = 0;
    plVar6 = param_2;
    do {
      if (*plVar6 == 0) break;
      *plVar8 = *plVar6;
      iVar11 = iVar11 + 1;
      plVar8 = plVar8 + 1;
      plVar6 = plVar6 + 3;
    } while (iVar11 < 8);
    uVar9 = (longlong)plVar8 - (longlong)local_78 >> 3;
    if ((int)uVar9 != 0) {
      (**(code **)(*param_1 + 0xd8))(param_1,4,local_78,uVar9 & 0xffffffff);
    }
  }
  FUN_1404999a0(local_308);
  FUN_141ebe4d0(param_2,local_308);
  (**(code **)(*param_1 + 600))(param_1,local_308);
  lVar12 = 2;
  plVar8 = param_1 + 2;
  plVar6 = param_2;
  do {
    plVar10 = plVar6;
    plVar7 = plVar8;
    lVar14 = plVar10[1];
    *plVar7 = *plVar10;
    plVar7[1] = lVar14;
    lVar14 = plVar10[3];
    plVar7[2] = plVar10[2];
    plVar7[3] = lVar14;
    lVar14 = plVar10[5];
    plVar7[4] = plVar10[4];
    plVar7[5] = lVar14;
    lVar14 = plVar10[7];
    plVar7[6] = plVar10[6];
    plVar7[7] = lVar14;
    lVar14 = plVar10[9];
    plVar7[8] = plVar10[8];
    plVar7[9] = lVar14;
    lVar14 = plVar10[0xb];
    plVar7[10] = plVar10[10];
    plVar7[0xb] = lVar14;
    lVar14 = plVar10[0xd];
    plVar7[0xc] = plVar10[0xc];
    plVar7[0xd] = lVar14;
    lVar14 = plVar10[0xf];
    plVar7[0xe] = plVar10[0xe];
    plVar7[0xf] = lVar14;
    lVar12 = lVar12 + -1;
    plVar8 = plVar7 + 0x10;
    plVar6 = plVar10 + 0x10;
  } while (lVar12 != 0);
  lVar12 = plVar10[0x11];
  lVar14 = 8;
  puVar13 = local_120;
  plVar7[0x10] = plVar10[0x10];
  plVar7[0x11] = lVar12;
  lVar12 = plVar10[0x13];
  plVar7[0x12] = plVar10[0x12];
  plVar7[0x13] = lVar12;
  lVar12 = plVar10[0x15];
  plVar7[0x14] = plVar10[0x14];
  plVar7[0x15] = lVar12;
  lVar12 = plVar10[0x17];
  plVar7[0x16] = plVar10[0x16];
  plVar7[0x17] = lVar12;
  uVar3 = *(undefined4 *)((longlong)plVar10 + 0xc4);
  lVar12 = plVar10[0x19];
  uVar4 = *(undefined4 *)((longlong)plVar10 + 0xcc);
  *(int *)(plVar7 + 0x18) = (int)plVar10[0x18];
  *(undefined4 *)((longlong)plVar7 + 0xc4) = uVar3;
  *(int *)(plVar7 + 0x19) = (int)lVar12;
  *(undefined4 *)((longlong)plVar7 + 0xcc) = uVar4;
  lVar12 = plVar10[0x1b];
  plVar7[0x1a] = plVar10[0x1a];
  plVar7[0x1b] = lVar12;
  do {
    puVar2 = *(undefined8 **)(puVar13 + -8);
    puVar13 = puVar13 + -8;
    lVar14 = lVar14 + -1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        if ((*(char *)(puVar2 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar15 = *(int *)((longlong)puVar2 + 0xc) == 0;
          if (bVar15) {
            *(int *)((longlong)puVar2 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar15) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar2);
          }
        }
        else {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  } while (lVar14 != 0);
  if (*(char *)((longlong)param_2 + 0x10c) != '\0') {
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  }
  return;
}



// FUNCTION 141a591d0 FUN_141a591d0 body=528 status=ok
// SIG undefined FUN_141a591d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a591d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_338 [48];
  undefined1 local_308 [480];
  longlong local_128;
  undefined1 local_120 [168];
  longlong local_78 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar2 = *(longlong **)(param_1 + 0x1b8);
  FUN_141ed9160(param_2);
  if (*(char *)((longlong)param_2 + 0x10d) != '\0') {
    plVar9 = local_78;
    iVar12 = 0;
    plVar7 = param_2;
    do {
      if (*plVar7 == 0) break;
      *plVar9 = *plVar7;
      iVar12 = iVar12 + 1;
      plVar9 = plVar9 + 1;
      plVar7 = plVar7 + 3;
    } while (iVar12 < 8);
    uVar10 = (longlong)plVar9 - (longlong)local_78 >> 3;
    if ((int)uVar10 != 0) {
      (**(code **)(*plVar2 + 0xd8))(plVar2,4,local_78,uVar10 & 0xffffffff);
    }
  }
  FUN_1404999a0(local_308);
  FUN_141ebe4d0(param_2,local_308);
  (**(code **)(*plVar2 + 600))(plVar2,local_308);
  lVar13 = 2;
  plVar9 = plVar2 + 2;
  plVar7 = param_2;
  do {
    plVar11 = plVar7;
    plVar8 = plVar9;
    lVar15 = plVar11[1];
    *plVar8 = *plVar11;
    plVar8[1] = lVar15;
    lVar15 = plVar11[3];
    plVar8[2] = plVar11[2];
    plVar8[3] = lVar15;
    lVar15 = plVar11[5];
    plVar8[4] = plVar11[4];
    plVar8[5] = lVar15;
    lVar15 = plVar11[7];
    plVar8[6] = plVar11[6];
    plVar8[7] = lVar15;
    lVar15 = plVar11[9];
    plVar8[8] = plVar11[8];
    plVar8[9] = lVar15;
    lVar15 = plVar11[0xb];
    plVar8[10] = plVar11[10];
    plVar8[0xb] = lVar15;
    lVar15 = plVar11[0xd];
    plVar8[0xc] = plVar11[0xc];
    plVar8[0xd] = lVar15;
    lVar15 = plVar11[0xf];
    plVar8[0xe] = plVar11[0xe];
    plVar8[0xf] = lVar15;
    lVar13 = lVar13 + -1;
    plVar9 = plVar8 + 0x10;
    plVar7 = plVar11 + 0x10;
  } while (lVar13 != 0);
  lVar13 = plVar11[0x11];
  lVar15 = 8;
  puVar14 = local_120;
  plVar8[0x10] = plVar11[0x10];
  plVar8[0x11] = lVar13;
  lVar13 = plVar11[0x13];
  plVar8[0x12] = plVar11[0x12];
  plVar8[0x13] = lVar13;
  lVar13 = plVar11[0x15];
  plVar8[0x14] = plVar11[0x14];
  plVar8[0x15] = lVar13;
  lVar13 = plVar11[0x17];
  plVar8[0x16] = plVar11[0x16];
  plVar8[0x17] = lVar13;
  uVar4 = *(undefined4 *)((longlong)plVar11 + 0xc4);
  lVar13 = plVar11[0x19];
  uVar5 = *(undefined4 *)((longlong)plVar11 + 0xcc);
  *(int *)(plVar8 + 0x18) = (int)plVar11[0x18];
  *(undefined4 *)((longlong)plVar8 + 0xc4) = uVar4;
  *(int *)(plVar8 + 0x19) = (int)lVar13;
  *(undefined4 *)((longlong)plVar8 + 0xcc) = uVar5;
  lVar13 = plVar11[0x1b];
  plVar8[0x1a] = plVar11[0x1a];
  plVar8[0x1b] = lVar13;
  do {
    puVar3 = *(undefined8 **)(puVar14 + -8);
    puVar14 = puVar14 + -8;
    lVar15 = lVar15 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          LOCK();
          bVar16 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar16) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar16) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar15 != 0);
  if (*(char *)((longlong)param_2 + 0x10c) != '\0') {
    AK::MemoryMgr::StartProfileThreadUsage((long)plVar2);
  }
  return;
}



// FUNCTION 141a593e0 FUN_141a593e0 body=51 status=ok
// SIG undefined FUN_141a593e0(void)

void FUN_141a593e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfc;
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  uVar1 = FUN_141a6b7a0(*(longlong *)(param_1 + 0x1b8) + 0x4d8,param_1);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  return;
}



// FUNCTION 141a59420 FUN_141a59420 body=55 status=ok
// SIG undefined FUN_141a59420(void)

void FUN_141a59420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfc;
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  uVar2 = FUN_141a6b7a0(*(longlong *)(lVar1 + 0x1b8) + 0x4d8);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  return;
}



// FUNCTION 141a59460 FUN_141a59460 body=263 status=ok
// SIG undefined FUN_141a59460(void)

void FUN_141a59460(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **local_38;
  longlong local_30;
  undefined **local_28;
  longlong local_20;
  
  iVar3 = *(int *)(param_1 + 0x58);
  if (0 < (longlong)iVar3) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) + 0xd50);
      FUN_141a55210(**(undefined8 **)(lVar4 + 0x5d8),&local_38,0);
      local_38 = &PTR_FUN_144da6378;
      if (local_30 != 0) {
        LOCK();
        piVar1 = (int *)(local_30 + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FUN_141a4ed50(local_30,1);
        }
      }
      if (DAT_1464c9c58 != '\0') {
        FUN_141a55210(**(undefined8 **)(lVar4 + 0x620),&local_28,0);
        local_28 = &PTR_FUN_144da6378;
        if (local_20 != 0) {
          LOCK();
          piVar1 = (int *)(local_20 + 8);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FUN_141a4ed50(local_20,1);
          }
        }
      }
      FUN_141a7d960(*(undefined8 *)(lVar4 + 0x30));
      FUN_141a7d960(*(undefined8 *)(lVar4 + 0x38));
      FUN_141a7d960(*(undefined8 *)(lVar4 + 0x40));
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}



// FUNCTION 141a59570 FUN_141a59570 body=1203 status=ok
// SIG undefined FUN_141a59570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a59570(longlong param_1,char param_2,undefined8 param_3,longlong param_4,char param_5,
                  undefined4 param_6,char param_7,undefined1 param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  int *local_188;
  uint local_180;
  int *local_178;
  char local_168;
  uint local_164;
  int *local_160;
  longlong local_158;
  longlong local_148 [8];
  longlong local_108;
  int local_100;
  undefined1 local_f8 [8];
  float local_f0;
  float local_ec;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  ulonglong local_58;
  int *piVar15;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  bVar6 = true;
  iVar1 = *(int *)(param_1 + 0x538);
  if (0 < *(int *)(param_1 + 0x538)) {
    iVar1 = 1;
  }
  iVar10 = 0x10;
  if (iVar1 < 0x11) {
    iVar10 = iVar1;
  }
  local_158 = param_4;
  if (iVar10 < 1) {
    _guard_xfg_dispatch_icall_nop
              (local_f8 + (longlong)iVar10 * 0x18,0,(longlong)(1 - iVar10) * 0x18);
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_f8,(void *)(param_1 + 0x53c),(longlong)iVar10 * 0x18);
  }
  iVar1 = *(int *)(param_1 + 0xa1c);
  iVar10 = *(int *)(param_1 + 0xa20);
  iVar4 = *(int *)(param_1 + 0xa24);
  iVar5 = *(int *)(param_1 + 0xa28);
  if (iVar4 <= iVar1) {
    return;
  }
  if (iVar5 <= iVar10) {
    return;
  }
  local_d8 = *(undefined8 *)(param_1 + 0xc60);
  uStack_d0 = *(undefined8 *)(param_1 + 0xc68);
  local_c8 = *(undefined8 *)(param_1 + 0xc70);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc78);
  local_b8 = *(undefined8 *)(param_1 + 0xc80);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc88);
  local_a8 = *(undefined8 *)(param_1 + 0xc90);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc98);
  FD3D12BoundRenderTargets::FD3D12BoundRenderTargets
            (local_148,&local_d8,*(undefined4 *)(param_1 + 0xca0),*(undefined8 *)(param_1 + 0xca8));
  bVar8 = 0;
  if ((((iVar1 < 1) && (iVar10 < 1)) && ((int)ROUND(local_f0 * 2.0 + 0.5) >> 1 <= iVar4)) &&
     (bVar8 = 0, (int)ROUND(local_ec * 2.0 + 0.5) >> 1 <= iVar5)) {
    bVar8 = 1;
  }
  if (bVar8 == 0) {
    local_98 = iVar1;
    iStack_94 = iVar10;
    iStack_90 = iVar4;
    iStack_8c = iVar5;
  }
  uVar13 = 0;
  piVar15 = (int *)0x0;
  local_160 = &local_98;
  if (bVar8 != 0) {
    local_160 = piVar15;
  }
  local_164 = bVar8 ^ 1;
  if ((param_2 == '\0') || (local_100 < 1)) {
    bVar6 = false;
  }
  if (((param_5 == '\0') && (param_7 == '\0')) || (local_108 == 0)) {
    local_168 = '\0';
  }
  else {
    local_168 = '\x01';
  }
  if ((bVar6) && (0 < local_100)) {
    plVar11 = local_148;
    uVar12 = uVar13;
    do {
      lVar16 = *plVar11;
      if (lVar16 != 0) {
        iVar1 = *(int *)(lVar16 + 0x44);
        uVar2 = *(undefined8 *)(*(longlong *)(lVar16 + 0x28) + 0x10);
        if (iVar1 == 4) {
LAB_141a597cc:
          FUN_141a60fb0(param_1 + 0x460,uVar2,4,*(undefined4 *)(lVar16 + 0x48));
        }
        else if (iVar1 == 5) {
          FUN_141a60ce0(param_1 + 0x460,uVar2,4,lVar16 + 0x30);
        }
        else if ((iVar1 == 6) || (iVar1 == 8)) goto LAB_141a597cc;
      }
      uVar12 = uVar12 + 1;
      plVar11 = plVar11 + 1;
    } while ((int)uVar12 < local_100);
  }
  if (local_168 == '\0') goto LAB_141a598cc;
  if ((param_5 != '\0') && (*(char *)(local_108 + 0x70) != '\0')) {
    uVar13 = 1;
  }
  if ((param_7 != '\0') && (*(char *)(local_108 + 0x71) != '\0')) {
    uVar13 = uVar13 | 2;
  }
  if ((param_5 == '\0') || ((*(char *)(local_108 + 0x71) != '\0' && (param_7 == '\0')))) {
    lVar16 = local_108 + 0x72;
    lVar9 = *(longlong *)(*(longlong *)(local_108 + 0x28) + 0x10);
    if (param_5 == '\0') {
      lVar16 = local_108 + 0x82;
    }
  }
  else {
    iVar1 = *(int *)(local_108 + 0x44);
    lVar9 = *(longlong *)(*(longlong *)(local_108 + 0x28) + 0x10);
    if (iVar1 == 3) {
LAB_141a59872:
      if (*(byte *)(lVar9 + 0x7d) < 2) {
        FUN_141a60fb0(param_1 + 0x460,lVar9,0x10,*(undefined4 *)(local_108 + 0x4c));
        goto LAB_141a598cc;
      }
    }
    else if (iVar1 != 4) {
      if (iVar1 == 5) goto LAB_141a59872;
      if (iVar1 != 6) goto LAB_141a598cc;
    }
    lVar16 = local_108 + 0x30;
  }
  FUN_141a60ce0(param_1 + 0x460,lVar9,0x10,lVar16);
LAB_141a598cc:
  if ((bVar6) || (local_168 != '\0')) {
    lVar16 = *(longlong *)(param_1 + 0x468);
    if (*(int *)(lVar16 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar16 + 0x28) + 0xd0))
                (*(longlong **)(lVar16 + 0x28),*(int *)(lVar16 + 0x100),
                 *(undefined8 *)(lVar16 + 0xf8));
      *(undefined4 *)(lVar16 + 0x100) = 0;
    }
    lVar16 = local_158;
    piVar7 = local_160;
    uVar12 = local_164;
    if ((bVar6) && (0 < local_100)) {
      plVar11 = local_148;
      do {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
          local_188 = piVar7;
          (**(code **)(*plVar3 + 0x180))
                    (plVar3,*(undefined8 *)(lVar9 + 0x10),(longlong)(int)piVar15 * 0x10 + lVar16,
                     uVar12);
        }
        uVar14 = (int)piVar15 + 1;
        piVar15 = (int *)(ulonglong)uVar14;
        plVar11 = plVar11 + 1;
      } while ((int)uVar14 < local_100);
    }
    if (local_168 != '\0') {
      *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
      local_178 = piVar7;
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
      local_180 = uVar12;
      local_188 = (int *)CONCAT71(local_188._1_7_,param_8);
      (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(local_108 + 0x10),uVar13,param_6);
    }
  }
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar16 + 0xb38) != '\0')) && (lVar16 = *(longlong *)(lVar16 + 0xb68), lVar16 != 0))
  {
    piVar15 = (int *)(lVar16 + 0x10);
    *piVar15 = *piVar15 + 1;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_148);
  return;
}



// FUNCTION 141a59a80 FUN_141a59a80 body=464 status=ok
// SIG undefined FUN_141a59a80(void)

void FUN_141a59a80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *local_38;
  undefined8 *local_30;
  
  puVar7 = (undefined8 *)0x0;
  bVar5 = true;
  bVar8 = false;
  if (*(longlong *)(param_1 + 0xcc0) == 0) {
    local_30 = (undefined8 *)0x0;
    bVar5 = false;
    bVar8 = true;
  }
  else {
    puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0xcc0) + 0x18);
    local_38 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
  }
  if ((bVar8) && (local_30 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_30 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)local_30 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)local_30 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_30);
        }
      }
      else {
        (**(code **)*local_30)(local_30);
      }
    }
  }
  if ((bVar5) && (local_38 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_38 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar8 = *(int *)((longlong)local_38 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)local_38 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_38);
        }
      }
      else {
        (**(code **)*local_38)(local_38,1);
      }
    }
  }
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar3 + 0xb38) != '\0')) && (*(longlong *)(lVar3 + 0xb68) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar3 + 0xb68) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0xb68) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)(puVar7 + 0x19) != '\0') {
    FUN_141a52700(param_1);
  }
  FUN_141a46f30(param_1,puVar7);
  FUN_141a61980(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c48) = *(int *)(param_1 + 0x2c48) + 1;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000141a59c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x70))(plVar4,param_2,param_3,param_4);
  return;
}



// FUNCTION 141a59c60 FUN_141a59c60 body=603 status=ok
// SIG undefined FUN_141a59c60(void)

void FUN_141a59c60(longlong param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *local_res8;
  undefined8 *local_res10;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar3 + 0xb38) != '\0')) && (*(longlong *)(lVar3 + 0xb68) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar3 + 0xb68) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0xb68) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  if (*(longlong *)(param_1 + 0xcc0) == 0) {
    bVar5 = false;
    bVar10 = true;
    puVar9 = (undefined8 *)0x0;
    local_res10 = (undefined8 *)0x0;
  }
  else {
    puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0xcc0) + 0x18);
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar10 = false;
    local_res8 = puVar9;
  }
  if ((bVar10) && (local_res10 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res10 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_res10 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar10 = *(int *)((longlong)local_res10 + 0xc) == 0;
        if (bVar10) {
          *(int *)((longlong)local_res10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar10) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res10);
        }
      }
      else {
        (**(code **)*local_res10)(local_res10,1);
      }
    }
  }
  if ((bVar5) && (local_res8 != (undefined8 *)0x0)) {
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
        bVar10 = *(int *)((longlong)local_res8 + 0xc) == 0;
        if (bVar10) {
          *(int *)((longlong)local_res8 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar10) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res8);
        }
      }
      else {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  if (*(char *)(puVar9 + 0x19) != '\0') {
    FUN_141a52700(param_1);
  }
  FUN_141a46f30(param_1,puVar9);
  plVar8 = (longlong *)(param_2 + 0x40);
  if (param_2 == 0) {
    plVar8 = (longlong *)&DAT_00000048;
  }
  FUN_141a60fb0(param_1 + 0x460,*plVar8,0x200,0xffffffff);
  FUN_141a61980(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c48) = *(int *)(param_1 + 0x2c48) + 1;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  plVar7 = (longlong *)(param_2 + 0x78);
  if (param_2 == 0) {
    plVar7 = (longlong *)&DAT_00000080;
  }
  (**(code **)(*plVar4 + 0x1d8))
            (plVar4,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0x6b0),1,
             *(undefined8 *)(*plVar8 + 0x18),(param_3 & 0xffffffff) + *plVar7,0,0);
  return;
}



// FUNCTION 141a59ed0 FUN_141a59ed0 body=396 status=ok
// SIG undefined FUN_141a59ed0(void)

void FUN_141a59ed0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,int param_5
                  )

{
  longlong *plVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar5 + 0xb38) != '\0')) && (*(longlong *)(lVar5 + 0xb68) != 0)) {
    piVar3 = (int *)(*(longlong *)(lVar5 + 0xb68) + 0x10);
    *piVar3 = *piVar3 + 1;
    piVar3 = (int *)(*(longlong *)(lVar5 + 0xb68) + 0x14);
    *piVar3 = *piVar3 + 1;
  }
  FUN_141a527d0();
  FUN_141a52850(param_1);
  piVar3 = (int *)(param_2 + 0x18);
  lVar5 = param_2 + 0x38;
  if (param_2 == 0) {
    piVar3 = (int *)&DAT_00000020;
  }
  uVar7 = 0x2a;
  if (*piVar3 == 2) {
    uVar7 = 0x39;
  }
  if (param_2 == 0) {
    lVar5 = 0x40;
  }
  FUN_141a75330(param_1 + 0x4e0,lVar5,uVar7,0);
  uVar2 = FUN_141a55680(param_3,*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar2);
  plVar6 = (longlong *)(param_4 + 0x48);
  if (param_4 == 0) {
    plVar6 = (longlong *)&DAT_00000050;
  }
  FUN_141a60fb0(param_1 + 0x460,*plVar6,0x200,0xffffffff);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  piVar3 = (int *)(param_4 + 0x18);
  if (param_4 == 0) {
    piVar3 = (int *)&DAT_00000020;
  }
  plVar4 = (longlong *)(param_4 + 0x80);
  if (param_4 == 0) {
    plVar4 = (longlong *)&DAT_00000088;
  }
  (**(code **)(*plVar1 + 0x1d8))
            (plVar1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0x6a8),1,
             *(undefined8 *)(*plVar6 + 0x18),(ulonglong)(uint)(*piVar3 * param_5) + *plVar4,0,0);
  return;
}



// FUNCTION 141a5a070 FUN_141a5a070 body=371 status=ok
// SIG undefined FUN_141a5a070(void)

void FUN_141a5a070(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 param_7,int param_8,uint param_9)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar6 + 0xb38) != '\0')) && (*(longlong *)(lVar6 + 0xb68) != 0)) {
    piVar5 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x10);
    *piVar5 = *piVar5 + 1;
    piVar5 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x14);
    *piVar5 = *piVar5 + param_8 * param_9;
    piVar5 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x18);
    *piVar5 = *piVar5 + param_6 * param_9;
  }
  FUN_141a527d0(param_1);
  FUN_141a52850(param_1);
  piVar5 = (int *)(param_2 + 0x18);
  if (param_2 == 0) {
    piVar5 = (int *)&DAT_00000020;
  }
  iVar1 = *piVar5;
  uVar3 = FUN_141a310e0(param_8,param_3);
  lVar6 = param_2 + 0x38;
  uVar7 = 0x2a;
  if (iVar1 == 2) {
    uVar7 = 0x39;
  }
  if (param_2 == 0) {
    lVar6 = 0x40;
  }
  FUN_141a75330(param_1 + 0x4e0,lVar6,uVar7,0);
  uVar4 = FUN_141a55680(param_3,*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar4);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  if (param_9 < 2) {
    param_9 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a5a1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,uVar3,param_9,param_7);
  return;
}



// FUNCTION 141a5a200 FUN_141a5a200 body=368 status=ok
// SIG undefined FUN_141a5a200(void)

void FUN_141a5a200(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  uint param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar5 + 0xb38) != '\0')) && (lVar5 = *(longlong *)(lVar5 + 0xb68), lVar5 != 0)) {
    piVar3 = (int *)(lVar5 + 0x10);
    *piVar3 = *piVar3 + 1;
  }
  FUN_141a527d0();
  FUN_141a52850(param_1);
  piVar3 = (int *)(param_3 + 0x18);
  lVar5 = param_3 + 0x38;
  if (param_3 == 0) {
    piVar3 = (int *)&DAT_00000020;
  }
  uVar7 = 0x2a;
  if (*piVar3 == 2) {
    uVar7 = 0x39;
  }
  if (param_3 == 0) {
    lVar5 = 0x40;
  }
  FUN_141a75330(param_1 + 0x4e0,lVar5,uVar7,0);
  uVar2 = FUN_141a55680(param_2,*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar2);
  plVar6 = (longlong *)(param_4 + 0x40);
  if (param_4 == 0) {
    plVar6 = (longlong *)&DAT_00000048;
  }
  FUN_141a60fb0(param_1 + 0x460,*plVar6,0x200,0xffffffff);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  plVar4 = (longlong *)(param_4 + 0x78);
  if (param_4 == 0) {
    plVar4 = (longlong *)&DAT_00000080;
  }
  (**(code **)(*plVar1 + 0x1d8))
            (plVar1,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0x6a8),1,
             *(undefined8 *)(*plVar6 + 0x18),(ulonglong)param_5 + *plVar4,0,0);
  return;
}



// FUNCTION 141a5a380 FUN_141a5a380 body=252 status=ok
// SIG undefined FUN_141a5a380(void)

void FUN_141a5a380(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_141a527d0();
  FUN_141a52850(param_1);
  iVar4 = FUN_141a310e0(param_4,param_2);
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar2 + 0xb38) != '\0')) && (*(longlong *)(lVar2 + 0xb68) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x14);
    *piVar1 = *piVar1 + param_4 * param_5;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0xb68) + 0x18);
    *piVar1 = *piVar1 + iVar4 * param_5;
  }
  uVar5 = FUN_141a55680(param_2,*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar5);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  if (param_5 < 2) {
    param_5 = 1;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000141a5a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3,iVar4,param_5,param_3);
  return;
}



// FUNCTION 141a5a490 FUN_141a5a490 body=299 status=ok
// SIG undefined FUN_141a5a490(void)

void FUN_141a5a490(longlong param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((*(char *)(param_1 + 0x1a8) != '\0') &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
      *(char *)(lVar2 + 0xb38) != '\0')) && (lVar2 = *(longlong *)(lVar2 + 0xb68), lVar2 != 0)) {
    piVar1 = (int *)(lVar2 + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  FUN_141a527d0();
  FUN_141a52850(param_1);
  uVar4 = FUN_141a55680(param_2,*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar4);
  plVar6 = (longlong *)(param_3 + 0x40);
  if (param_3 == 0) {
    plVar6 = (longlong *)&DAT_00000048;
  }
  FUN_141a60fb0(param_1 + 0x460,*plVar6,0x200,0xffffffff);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  plVar5 = (longlong *)(param_3 + 0x78);
  if (param_3 == 0) {
    plVar5 = (longlong *)&DAT_00000080;
  }
  (**(code **)(*plVar3 + 0x1d8))
            (plVar3,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0x6a0),1,
             *(undefined8 *)(*plVar6 + 0x18),(param_4 & 0xffffffff) + *plVar5,0,0);
  return;
}



// FUNCTION 141a5a670 FUN_141a5a670 body=408 status=ok
// SIG undefined FUN_141a5a670(void)

void FUN_141a5a670(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    iVar2 = *(int *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x17c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
    if ((*(char *)(lVar4 + 0xb38) != '\0') && (*(longlong *)(lVar4 + 0xb68) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x10);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x14);
      *piVar1 = *piVar1 + iVar3;
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x18);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  uVar7 = FUN_1405859b0(param_1 + 0x2c60);
  uVar8 = FUN_1405859b0(param_1 + 0x2cf0);
  FUN_141a527d0(param_1);
  FUN_141a52850(param_1);
  FUN_141a75420(param_1 + 0x4e0,uVar7,0,*(undefined4 *)(param_1 + 0x184),0);
  uVar7 = 0x2a;
  if (*(int *)(param_1 + 0x198) == 2) {
    uVar7 = 0x39;
  }
  FUN_141a75330(param_1 + 0x4e0,uVar8,uVar7,0);
  uVar6 = FUN_141a55680(*(undefined4 *)(param_1 + 0x178),*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar6);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  (**(code **)(*plVar5 + 0x68))
            (plVar5,*(undefined4 *)(param_1 + 0x194),1,0,*(undefined4 *)(param_1 + 400),0);
  FUN_141a6c420(param_1 + 0x2c70);
  FUN_141a6c420(param_1 + 0x2d00);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 141a5a810 FUN_141a5a810 body=753 status=ok
// SIG undefined FUN_141a5a810(void)

void FUN_141a5a810(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  void *_Dst;
  void *_Dst_00;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    uVar11 = *(undefined4 *)(param_1 + 400);
    iVar2 = *(int *)(param_1 + 0x184);
    iVar3 = *(int *)(param_1 + 0x180);
    uVar4 = *(undefined4 *)(param_1 + 0x178);
    iVar5 = *(int *)(param_1 + 0x194);
    iVar6 = *(int *)(param_1 + 0x198);
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    uVar7 = *(undefined4 *)(param_1 + 0x17c);
    *(int *)(lVar8 + 0x180) = iVar3;
    *(undefined4 *)(lVar8 + 0x17c) = uVar7;
    *(undefined4 *)(lVar8 + 400) = uVar11;
    *(undefined4 *)(lVar8 + 0x178) = uVar4;
    *(int *)(lVar8 + 0x198) = iVar6;
    *(int *)(lVar8 + 0x194) = iVar5;
    *(int *)(lVar8 + 0x184) = iVar2;
    _Dst = (void *)FUN_141a755c0(lVar8 + 0x2c60,iVar3 * iVar2);
    _Dst_00 = (void *)FUN_141a755c0(lVar8 + 0x2cf0,iVar5 * iVar6);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x188),
                 (ulonglong)(uint)(*(int *)(param_1 + 0x180) * *(int *)(param_1 + 0x184)));
    }
    if (_Dst_00 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst_00,*(void **)(param_1 + 0x1a0),
                 (ulonglong)(uint)(*(int *)(param_1 + 0x198) * *(int *)(param_1 + 0x194)));
    }
    if (*(char *)(lVar8 + 0x1a8) != '\0') {
      iVar2 = *(int *)(lVar8 + 0x180);
      iVar3 = *(int *)(lVar8 + 0x17c);
      lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x1b8) + 0x10);
      if ((*(char *)(lVar9 + 0xb38) != '\0') && (*(longlong *)(lVar9 + 0xb68) != 0)) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0xb68) + 0x10);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(lVar9 + 0xb68) + 0x14);
        *piVar1 = *piVar1 + iVar3;
        piVar1 = (int *)(*(longlong *)(lVar9 + 0xb68) + 0x18);
        *piVar1 = *piVar1 + iVar2;
      }
    }
    uVar12 = FUN_1405859b0(lVar8 + 0x2c60);
    uVar13 = FUN_1405859b0(lVar8 + 0x2cf0);
    FUN_141a527d0(lVar8);
    FUN_141a52850(lVar8);
    FUN_141a75420(lVar8 + 0x4e0,uVar12,0,*(undefined4 *)(lVar8 + 0x184),0);
    uVar12 = 0x2a;
    if (*(int *)(lVar8 + 0x198) == 2) {
      uVar12 = 0x39;
    }
    FUN_141a75330(lVar8 + 0x4e0,uVar13,uVar12,0);
    uVar11 = FUN_141a55680(*(undefined4 *)(lVar8 + 0x178),*(undefined1 *)(lVar8 + 0x2c41));
    FUN_141a7cc60(lVar8 + 0x4e0,uVar11);
    FUN_141a61c90(lVar8 + 0x4e0);
    *(int *)(lVar8 + 0x2c44) = *(int *)(lVar8 + 0x2c44) + 1;
    plVar10 = *(longlong **)(*(longlong *)(lVar8 + 0x468) + 0x28);
    (**(code **)(*plVar10 + 0x68))
              (plVar10,*(undefined4 *)(lVar8 + 0x194),1,0,*(undefined4 *)(lVar8 + 400),0);
    FUN_141a6c420(lVar8 + 0x2c70);
    FUN_141a6c420(lVar8 + 0x2d00);
    *(undefined8 *)(lVar8 + 0x178) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x1a0) = 0;
    FMemory::Free(*(undefined8 *)(param_1 + 0x188));
    FMemory::Free(*(undefined8 *)(param_1 + 0x1a0));
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 141a5ab10 FUN_141a5ab10 body=308 status=ok
// SIG undefined FUN_141a5ab10(void)

void FUN_141a5ab10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    iVar2 = *(int *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x17c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
    if ((*(char *)(lVar4 + 0xb38) != '\0') && (*(longlong *)(lVar4 + 0xb68) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x10);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x14);
      *piVar1 = *piVar1 + iVar3;
      piVar1 = (int *)(*(longlong *)(lVar4 + 0xb68) + 0x18);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  uVar7 = FUN_1405859b0(param_1 + 0x2c60);
  FUN_141a527d0(param_1);
  FUN_141a52850(param_1);
  FUN_141a75420(param_1 + 0x4e0,uVar7,0,*(undefined4 *)(param_1 + 0x184),0);
  uVar6 = FUN_141a55680(*(undefined4 *)(param_1 + 0x178),*(undefined1 *)(param_1 + 0x2c41));
  FUN_141a7cc60(param_1 + 0x4e0,uVar6);
  FUN_141a61c90(param_1 + 0x4e0);
  *(int *)(param_1 + 0x2c44) = *(int *)(param_1 + 0x2c44) + 1;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined4 *)(param_1 + 0x180),1,0,0);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 141a5ac50 FUN_141a5ac50 body=501 status=ok
// SIG undefined FUN_141a5ac50(void)

void FUN_141a5ac50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  void *_Dst;
  undefined8 uVar9;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    iVar2 = *(int *)(param_1 + 0x184);
    iVar3 = *(int *)(param_1 + 0x180);
    uVar8 = *(undefined4 *)(param_1 + 0x17c);
    uVar4 = *(undefined4 *)(param_1 + 0x178);
    lVar5 = *(longlong *)(param_1 + 0x1b8);
    *(int *)(lVar5 + 0x180) = iVar3;
    *(undefined4 *)(lVar5 + 0x178) = uVar4;
    *(undefined4 *)(lVar5 + 0x17c) = uVar8;
    *(int *)(lVar5 + 0x184) = iVar2;
    _Dst = (void *)FUN_141a755c0(lVar5 + 0x2c60,iVar3 * iVar2);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x188),
                 (ulonglong)(uint)(*(int *)(param_1 + 0x184) * *(int *)(param_1 + 0x180)));
    }
    if (*(char *)(lVar5 + 0x1a8) != '\0') {
      iVar2 = *(int *)(lVar5 + 0x180);
      iVar3 = *(int *)(lVar5 + 0x17c);
      lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x1b8) + 0x10);
      if ((*(char *)(lVar6 + 0xb38) != '\0') && (*(longlong *)(lVar6 + 0xb68) != 0)) {
        piVar1 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x10);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x14);
        *piVar1 = *piVar1 + iVar3;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0xb68) + 0x18);
        *piVar1 = *piVar1 + iVar2;
      }
    }
    uVar9 = FUN_1405859b0(lVar5 + 0x2c60);
    FUN_141a527d0(lVar5);
    FUN_141a52850(lVar5);
    FUN_141a75420(lVar5 + 0x4e0,uVar9,0,*(undefined4 *)(lVar5 + 0x184),0);
    uVar8 = FUN_141a55680(*(undefined4 *)(lVar5 + 0x178),*(undefined1 *)(lVar5 + 0x2c41));
    FUN_141a7cc60(lVar5 + 0x4e0,uVar8);
    FUN_141a61c90(lVar5 + 0x4e0);
    *(int *)(lVar5 + 0x2c44) = *(int *)(lVar5 + 0x2c44) + 1;
    plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x468) + 0x28);
    (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined4 *)(lVar5 + 0x180),1,0,0);
    *(undefined8 *)(lVar5 + 0x178) = 0;
    *(undefined8 *)(lVar5 + 0x180) = 0;
    *(undefined8 *)(lVar5 + 0x188) = 0;
    *(undefined8 *)(lVar5 + 400) = 0;
    *(undefined8 *)(lVar5 + 0x198) = 0;
    *(undefined8 *)(lVar5 + 0x1a0) = 0;
    FMemory::Free(*(undefined8 *)(param_1 + 0x188));
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 141a5ae50 FUN_141a5ae50 body=856 status=ok
// SIG undefined FUN_141a5ae50(void)

void FUN_141a5ae50(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  piVar1 = (int *)((longlong)param_1 + 0x1ac);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (0 < (int)param_1[0x36])) {
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x1ac) == 0) {
    iVar2 = *(int *)(param_1[0x2e] + 0xb50);
    while (0 < iVar2) {
      FUN_141a85780(param_1[0x2e] + 0xb30,*(undefined8 *)(param_1[0x2e] + 0x10));
      iVar2 = *(int *)(param_1[0x2e] + 0xb50);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcfe8) && (_Init_thread_header(&DAT_1469fcfe8), DAT_1469fcfe8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fcfe0 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHILogBeginEndScopes");
    _Init_thread_footer(&DAT_1469fcfe8);
  }
  if (DAT_1469fcfe0 != (longlong *)0x0) {
    (**(code **)(*DAT_1469fcfe0 + 0x68))();
  }
  lVar4 = param_1[0x2e];
  FUN_141a51690(*(longlong *)(lVar4 + 0x700) + 8,0);
  FUN_141a51690(*(longlong *)(lVar4 + 0x708) + 8,0);
  FUN_141a7bd00(lVar4 + 0x740,0);
  lVar4 = *(longlong *)(param_1[0x2e] + 0xd50);
  uVar9 = *(uint *)(lVar4 + 0x5e0);
  uVar7 = uVar10;
  if (uVar9 != 0) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x5d8) + (longlong)(int)uVar7 * 8);
      FUN_141a54830(lVar8 + 0x2300);
      if ((*(char *)(lVar8 + 0x1a8) == '\0') && (*(longlong *)(lVar8 + 0x470) != 0)) {
        FD3D12CommandAllocatorManager::ReleaseCommandAllocator(lVar8 + 0x480);
        *(undefined8 *)(lVar8 + 0x470) = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar9);
  }
  uVar9 = *(uint *)(lVar4 + 0x628);
  uVar7 = uVar10;
  if (uVar9 != 0) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x620) + (longlong)(int)uVar7 * 8);
      FUN_141a54830(lVar8 + 0x2300);
      if ((*(char *)(lVar8 + 0x1a8) == '\0') && (*(longlong *)(lVar8 + 0x470) != 0)) {
        FD3D12CommandAllocatorManager::ReleaseCommandAllocator(lVar8 + 0x480);
        *(undefined8 *)(lVar8 + 0x470) = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar9);
  }
  if (*(longlong *)(lVar4 + 0x6c8) != 0) {
    FUN_141a51690(*(longlong *)(lVar4 + 0x6c8) + 0x10,0);
  }
  if (*(longlong *)(lVar4 + 0x6d0) != 0) {
    FUN_141a51690(*(longlong *)(lVar4 + 0x6d0) + 0x10,0);
  }
  if (*(longlong *)(lVar4 + 0x6d8) != 0) {
    FUN_141a51690(*(longlong *)(lVar4 + 0x6d8) + 0x10,0);
  }
  plVar5 = (longlong *)(lVar4 + 0x8b8);
  lVar8 = 0x10;
  do {
    if (*plVar5 != 0) {
      FUN_141a51320();
    }
    plVar5 = plVar5 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x888));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x888));
  }
  FUN_141a52390(lVar4 + 0x858,10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x888));
  lVar4 = DAT_1469fd070;
  uVar7 = uVar10;
  if (0 < *(int *)(DAT_1469fd070 + 0x48)) {
    do {
      lVar8 = *(longlong *)(uVar7 + *(longlong *)(lVar4 + 0x38));
      if (lVar8 != 0) {
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x38));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x38));
        }
        FUN_141a52390(lVar8 + 8,10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x38));
        lVar4 = DAT_1469fd070;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 8;
    } while ((int)uVar9 < *(int *)(lVar4 + 0x48));
  }
  FUN_141a7bc60(*(undefined8 *)(*(longlong *)(param_1[0x2e] + 0xd50) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000141a5b146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}



// FUNCTION 141a5b1b0 FUN_141a5b1b0 body=146 status=ok
// SIG undefined FUN_141a5b1b0(void)

void FUN_141a5b1b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)((longlong)param_1 + 0x11c) != '\0') {
    FUN_141a78e90();
  }
  lVar3 = 0;
  plVar2 = param_1;
  do {
    if (plVar2[2] == 0) break;
    lVar1 = plVar2[3];
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xb8))(param_1,plVar2[2],lVar1,param_1 + 0x1d);
    }
    lVar3 = lVar3 + 1;
    plVar2 = plVar2 + 3;
  } while (lVar3 < 8);
  if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
    (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x1a],param_1[0x1b],param_1 + 0x1d);
  }
  return;
}



// FUNCTION 141a5b250 FUN_141a5b250 body=156 status=ok
// SIG undefined FUN_141a5b250(void)

void FUN_141a5b250(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (*(char *)((longlong)plVar1 + 0x11c) != '\0') {
    FUN_141a78e90(plVar1);
  }
  lVar4 = 0;
  plVar3 = plVar1;
  do {
    if (plVar3[2] == 0) break;
    lVar2 = plVar3[3];
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0xb8))(plVar1,plVar3[2],lVar2,plVar1 + 0x1d);
    }
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 3;
  } while (lVar4 < 8);
  if ((plVar1[0x1a] != 0) && (plVar1[0x1b] != 0)) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,plVar1[0x1a],plVar1[0x1b],plVar1 + 0x1d);
  }
  return;
}



// FUNCTION 141a5b2f0 FUN_141a5b2f0 body=148 status=ok
// SIG undefined FUN_141a5b2f0(void)

void FUN_141a5b2f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x34) == 1) {
    FUN_141a70a70(*(longlong *)(param_1 + 0x1b8) + 0x4d8,param_1,*(undefined4 *)(param_2 + 0x20),
                  param_2);
  }
  else {
    if (*(int *)(param_2 + 0x34) != 2) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x1b8);
    *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfc;
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    uVar2 = FUN_141a6b080(lVar1 + 0x558,param_1);
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    FUN_141a70a70(lVar1 + 0x558,param_1,uVar2,param_2);
  }
  *(ulonglong *)(param_2 + 0x38) = (ulonglong)DAT_1464aaa90;
  return;
}



// FUNCTION 141a5b3d0 FUN_141a5b3d0 body=106 status=ok
// SIG undefined FUN_141a5b3d0(void)

undefined8 * FUN_141a5b3d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FMemory::Malloc(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x50);
    *puVar2 = &PTR_FUN_144da7200;
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar2 + 4,0x10);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a5b440 FUN_141a5b440 body=90 status=ok
// SIG undefined FUN_141a5b440(void)

void FUN_141a5b440(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0xb30) + 0x20)
    )();
  }
  if ((DAT_1469fce70 != 0) && (DAT_1464c1140 != 0)) {
    agsDriverExtensionsDX12_PopMarker
              (DAT_1464c1140,*(undefined8 *)(*(longlong *)(param_1 + 0x468) + 0x28));
    return;
  }
  return;
}



// FUNCTION 141a5b4a0 FUN_141a5b4a0 body=94 status=ok
// SIG undefined FUN_141a5b4a0(void)

void FUN_141a5b4a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (*(char *)(lVar1 + 0x1a8) != '\0') {
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x1b8) + 0x10) + 0xb30) + 0x20))
              ();
  }
  if ((DAT_1469fce70 != 0) && (DAT_1464c1140 != 0)) {
    agsDriverExtensionsDX12_PopMarker
              (DAT_1464c1140,*(undefined8 *)(*(longlong *)(lVar1 + 0x468) + 0x28));
    return;
  }
  return;
}



// FUNCTION 141a5b500 FUN_141a5b500 body=191 status=ok
// SIG undefined FUN_141a5b500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a5b500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0xb30) + 0x18)
    )();
  }
  lVar1 = DAT_1464c1140;
  if ((DAT_1469fce70 != 0) && (DAT_1464c1140 != 0)) {
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,param_2);
    agsDriverExtensionsDX12_PushMarker
              (lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x468) + 0x28),local_30);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141a5b600 FUN_141a5b600 body=170 status=ok
// SIG undefined FUN_141a5b600(void)

void FUN_141a5b600(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_141a7c9a0(param_1 + 0x4e0,*(undefined8 *)(param_2 + 0x18));
  if (*(longlong *)(param_1 + 0xcc0) != param_2) {
    *(undefined1 *)(param_1 + 0x2298) = 1;
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0xcc0,param_2);
    cVar1 = *(char *)(param_1 + 0x2298);
    lVar3 = FUN_141a73380(*(undefined8 *)(*(longlong *)(param_1 + 0xcc0) + 0x20));
    lVar4 = *(longlong *)(param_1 + 0x2290);
    if (lVar4 == lVar3) {
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      *(longlong *)(param_1 + 0x2290) = lVar3;
      lVar4 = lVar3;
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x468) + 0x28);
    (**(code **)(*plVar2 + 200))(plVar2,lVar4);
    *(undefined1 *)(param_1 + 0x2298) = 0;
  }
  return;
}



// FUNCTION 141a5b6c0 FUN_141a5b6c0 body=157 status=ok
// SIG undefined FUN_141a5b6c0(void)

void FUN_141a5b6c0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *local_res20;
  
  (**(code **)(*DAT_146ab6358 + 0x108))(DAT_146ab6358,&local_res20,param_2);
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_res20 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar4 = *(int *)((longlong)local_res20 + 0xc) == 0;
        if (bVar4) {
          *(int *)((longlong)local_res20 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar4) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res20);
        }
      }
      else if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
  FUN_141a5b600(param_1,local_res20);
  return;
}



// FUNCTION 141a5b7e0 FUN_141a5b7e0 body=1057 status=ok
// SIG undefined FUN_141a5b7e0(void)

void FUN_141a5b7e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x2c41) = uVar7;
  lVar13 = 0;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x3da0) = 0;
  *(undefined4 *)(param_1 + 0x6e60) = 0;
  *(undefined4 *)(param_1 + 0x4de0) = 0;
  *(undefined4 *)(param_1 + 0x5e20) = 0;
  *(undefined4 *)(param_1 + 0x7ea0) = 0;
  *(undefined4 *)(param_1 + 0x8ee0) = 0;
  *(undefined1 *)(param_1 + 0x2c40) = 1;
  if ((*(char *)(param_2 + 0x60) == '\0') &&
     ((*(float *)(param_1 + 0xcb0) != 0.0 || (*(float *)(param_1 + 0xcb4) != 1.0)))) {
    *(undefined4 *)(param_1 + 0xcb0) = 0;
    *(undefined4 *)(param_1 + 0xcb4) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x50a) = DAT_146ab62ec;
  }
  if (*(longlong *)(param_1 + 0x518) != param_2) {
    uVar6 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xc20) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0xc28) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xc30) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xc38) = uVar6;
    uVar3 = *(undefined4 *)(param_2 + 0xfc);
    uVar4 = *(undefined4 *)(param_2 + 0x100);
    uVar5 = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xc44) = uVar3;
    *(undefined4 *)(param_1 + 0xc48) = uVar4;
    *(undefined4 *)(param_1 + 0xc4c) = uVar5;
    uVar3 = *(undefined4 *)(param_2 + 0x10c);
    uVar4 = *(undefined4 *)(param_2 + 0x110);
    uVar5 = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0xc50) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0xc54) = uVar3;
    *(undefined4 *)(param_1 + 0xc58) = uVar4;
    *(undefined4 *)(param_1 + 0xc5c) = uVar5;
    lVar10 = *(longlong *)(param_1 + 0x518);
    lVar11 = *(longlong *)(param_2 + 0x20);
    lVar14 = lVar13;
    if (lVar10 != 0) {
      lVar14 = *(longlong *)(lVar10 + 0x20);
    }
    uVar8 = 0;
    uVar9 = 0;
    if (lVar14 != lVar11) {
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc5);
      }
      *(uint *)(param_1 + 0x229c) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc6);
      }
      *(uint *)(param_1 + 0x22b4) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 199);
      }
      *(uint *)(param_1 + 0x22cc) = uVar12;
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 200);
      }
      *(uint *)(param_1 + 0x22e4) = uVar12;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f8) + 0x2c30) = 0xffff;
      lVar10 = *(longlong *)(param_1 + 0x518);
    }
    lVar11 = *(longlong *)(param_2 + 0x38);
    lVar14 = lVar13;
    if (lVar10 != 0) {
      lVar14 = *(longlong *)(lVar10 + 0x38);
    }
    if (lVar14 != lVar11) {
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc1);
      }
      *(uint *)(param_1 + 0x22a8) = uVar12;
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc2);
      }
      *(uint *)(param_1 + 0x22c0) = uVar12;
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc3);
      }
      *(uint *)(param_1 + 0x22d8) = uVar12;
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc4);
      }
      *(uint *)(param_1 + 0x22f0) = uVar12;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f8) + 0x2c36) = 0xffff;
      lVar10 = *(longlong *)(param_1 + 0x518);
    }
    lVar11 = *(longlong *)(param_2 + 0x30);
    lVar14 = lVar13;
    if (lVar10 != 0) {
      lVar14 = *(longlong *)(lVar10 + 0x30);
    }
    if (lVar14 != lVar11) {
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc1);
      }
      *(uint *)(param_1 + 0x22a4) = uVar12;
      uVar12 = uVar8;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc2);
      }
      *(uint *)(param_1 + 0x22bc) = uVar12;
      if (lVar11 != 0) {
        uVar8 = (uint)*(byte *)(lVar11 + 0xc3);
      }
      *(uint *)(param_1 + 0x22d4) = uVar8;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc4);
      }
      *(uint *)(param_1 + 0x22ec) = uVar12;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f8) + 0x2c34) = 0xffff;
      lVar10 = *(longlong *)(param_1 + 0x518);
    }
    lVar11 = *(longlong *)(param_2 + 0x28);
    lVar14 = lVar13;
    if (lVar10 != 0) {
      lVar14 = *(longlong *)(lVar10 + 0x28);
    }
    if (lVar14 != lVar11) {
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc1);
      }
      *(uint *)(param_1 + 0x22a0) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc2);
      }
      *(uint *)(param_1 + 0x22b8) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc3);
      }
      *(uint *)(param_1 + 0x22d0) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xc4);
      }
      *(uint *)(param_1 + 0x22e8) = uVar12;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f8) + 0x2c32) = 0xffff;
      lVar10 = *(longlong *)(param_1 + 0x518);
    }
    lVar11 = *(longlong *)(param_2 + 0x40);
    lVar14 = lVar13;
    if (lVar10 != 0) {
      lVar14 = *(longlong *)(lVar10 + 0x40);
    }
    if (lVar14 != lVar11) {
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xf2);
      }
      *(uint *)(param_1 + 0x22ac) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xf3);
      }
      *(uint *)(param_1 + 0x22c4) = uVar12;
      uVar12 = uVar9;
      if (lVar11 != 0) {
        uVar12 = (uint)*(byte *)(lVar11 + 0xf4);
      }
      *(uint *)(param_1 + 0x22dc) = uVar12;
      if (lVar11 != 0) {
        uVar9 = (uint)*(byte *)(lVar11 + 0xf5);
      }
      *(uint *)(param_1 + 0x22f4) = uVar9;
      *(undefined2 *)(*(longlong *)(param_1 + 0x4f8) + 0x2c38) = 0xffff;
      lVar10 = *(longlong *)(param_1 + 0x518);
    }
    if (lVar10 != 0) {
      lVar13 = *(longlong *)(lVar10 + 0xd0);
    }
    if (lVar13 != *(longlong *)(param_2 + 0xd0)) {
      *(undefined1 *)(param_1 + 0x520) = 1;
    }
    *(undefined1 *)(param_1 + 0x2298) = 1;
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x518,param_2);
    cVar1 = *(char *)(param_1 + 0x2298);
    lVar11 = FUN_141a73380(*(undefined8 *)(*(longlong *)(param_1 + 0x518) + 0x120));
    lVar13 = *(longlong *)(param_1 + 0x2290);
    if (lVar13 == lVar11) {
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      *(longlong *)(param_1 + 0x2290) = lVar11;
      lVar13 = lVar11;
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x468) + 0x28);
    (**(code **)(*plVar2 + 200))(plVar2,lVar13);
    *(undefined1 *)(param_1 + 0x2298) = 0;
  }
  return;
}


