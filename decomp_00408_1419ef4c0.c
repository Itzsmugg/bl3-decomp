// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1419ef4c0 GetId body=80 status=ok
// SIG undefined GetId(void)

undefined4 * FShaderResource::GetId(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x10);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  *param_2 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x8c);
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(param_2 + 3) = uVar2;
  param_2[5] = *(undefined4 *)(param_1 + 0x94);
  *(undefined8 *)(param_2 + 6) = uVar3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  param_2[0xc] = uVar1;
  return param_2;
}



// FUNCTION 1419ef510 GetKeyHash body=217 status=ok
// SIG undefined GetKeyHash(void)

void FSamplerStateInitializerRHIKeyFuncs::GetKeyHash(undefined8 param_1)

{
  longlong local_e8;
  undefined8 local_e0;
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  if (DAT_1469f6068 == 0) {
    local_e8 = 0;
    local_e0 = 0;
    FArchive::FArchive(local_d8);
    local_48 = 0;
    local_d8[0] = &PTR_FUN_143f4a100;
    local_40 = &local_e8;
    local_38 = 0;
    FArchive::SetIsSaving(local_d8,1);
    FArchive::SetIsPersistent(local_d8,0);
    FUN_1419dbd20(local_d8,local_28);
    DAT_1469f6068 = (int)local_e0;
    FArchive::~FArchive(local_d8);
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  FCrc::MemCrc_DEPRECATED(param_1,DAT_1469f6068,0);
  return;
}



// FUNCTION 1419ef5f0 FUN_1419ef5f0 body=62 status=ok
// SIG undefined FUN_1419ef5f0(void)

undefined8 FUN_1419ef5f0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
    return 3;
  case 1:
  case 5:
  case 0x13:
    return 2;
  case 3:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x17:
    return 0;
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1d:
    return 1;
  default:
    return 4;
  }
}



// FUNCTION 1419ef660 GetNameToTypeMap body=103 status=ok
// SIG undefined GetNameToTypeMap(void)

undefined8 * FShaderPipelineType::GetNameToTypeMap(void)

{
  undefined8 *puVar1;
  
  if (DAT_1469f5e10 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new();
    DAT_1469f5e10 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[7] = 0;
      puVar1[9] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      DAT_1469f5e10 = puVar1;
      return puVar1;
    }
  }
  return DAT_1469f5e10;
}



// FUNCTION 1419ef6d0 GetNameToTypeMap body=103 status=ok
// SIG undefined GetNameToTypeMap(void)

undefined8 * FShaderType::GetNameToTypeMap(void)

{
  undefined8 *puVar1;
  
  if (DAT_1469f5e00 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new();
    DAT_1469f5e00 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[7] = 0;
      puVar1[9] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      DAT_1469f5e00 = puVar1;
      return puVar1;
    }
  }
  return DAT_1469f5e00;
}



// FUNCTION 1419ef740 FUN_1419ef740 body=667 status=ok
// SIG undefined FUN_1419ef740(void)

undefined8 FUN_1419ef740(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  undefined8 uVar11;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_78 = 0;
  uStack_74 = 1;
  iVar1 = *(int *)(param_1 + 0x70);
  puStack_40 = (uint *)(param_1 + 0x58);
  uVar11 = 0;
  local_68._4_4_ = 0;
  iVar7 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar9 = puStack_40;
    }
    uVar2 = *puVar9;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78;
      iVar7 = iVar7 + 0x20;
      iVar10 = local_78 + 1;
      uStack_60._4_4_ = (int)(uStack_60 >> 0x20);
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
      bVar4 = (int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar4) goto LAB_1419ef81e;
      uVar2 = puVar9[lVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_68._4_4_ = (iVar7 - iVar10) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_1419ef81e:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  uStack_30 = (uint)uStack_60;
  uStack_2c = uStack_60._4_4_;
  iStack_48 = local_78;
  uStack_44 = uStack_74;
  iVar7 = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = (uint)uStack_60;
  uStack_54 = uStack_60._4_4_;
  bVar4 = local_68._4_4_ < iVar1;
  local_68 = puStack_40;
  local_50 = (longlong *)(param_1 + 0x48);
  uStack_60._0_4_ = 0xffffffff;
  uStack_60._4_4_ = iVar7;
  if (bVar4) {
    do {
      plVar3 = *(longlong **)
                ((longlong)uStack_60._4_4_ * 0x88 + 0x78 + *(longlong *)(param_1 + 0x48));
      lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar6 = (longlong *)FUN_1419f03e0(*(undefined8 *)(param_1 + 0x20));
      lVar8 = *(longlong *)((longlong)plVar3 + 0x9c) - *plVar6;
      if ((lVar8 == 0) && (lVar8 = *(longlong *)((longlong)plVar3 + 0xa4) - plVar6[1], lVar8 == 0))
      {
        lVar8 = (ulonglong)*(uint *)((longlong)plVar3 + 0xac) - (ulonglong)*(uint *)(plVar6 + 2);
      }
      if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
         ((plVar6 = (longlong *)FUN_1419f03e0(*(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x18)),
          *plVar6 == *(longlong *)(lVar5 + 0x14) &&
          ((plVar6[1] == *(longlong *)(lVar5 + 0x1c) && ((int)plVar6[2] == *(int *)(lVar5 + 0x24))))
          ))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (lVar8 != 0) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,plVar3 + 0x12);
        uVar11 = 1;
      }
      if (bVar4) {
        plVar3 = (longlong *)*param_3;
        iVar1 = (int)param_3[1];
        lVar5 = *(longlong *)(lVar5 + 8);
        for (plVar6 = plVar3; plVar6 != plVar3 + iVar1; plVar6 = plVar6 + 1) {
          if (*plVar6 == lVar5) {
            if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) != -1) goto LAB_1419ef98a;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_3) = lVar5;
LAB_1419ef98a:
        uVar11 = 1;
      }
      uStack_60._0_4_ = (uint)uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (uStack_60._4_4_ < (int)local_68[6]);
  }
  return uVar11;
}



// FUNCTION 1419ef9e0 GetOutdatedTypes body=72 status=ok
// SIG undefined GetOutdatedTypes(void)

void FShaderType::GetOutdatedTypes(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = DAT_1469f5dd8; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    FUN_1419ef740(puVar1[2],param_1,param_2);
  }
  return;
}



// FUNCTION 1419efa30 FUN_1419efa30 body=157 status=ok
// SIG undefined FUN_1419efa30(void)

undefined8 FUN_1419efa30(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f6078) {
    _Init_thread_header(&DAT_1469f6078);
    if (DAT_1469f6078 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f6070 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveUserCache");
      _Init_thread_footer(&DAT_1469f6078);
    }
  }
  if (DAT_1469f6070 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_1469f6070 + 0x68))();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419efad0 FUN_1419efad0 body=814 status=ok
// SIG undefined FUN_1419efad0(void)

longlong *
FUN_1419efad0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 local_res20;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  local_res20 = param_4;
  FString::PrintfImpl(&local_58,L"ShaderArchive-%s-",puVar8);
  iVar6 = 0;
  if (local_50 != 0) {
    iVar6 = local_50 + -1;
  }
  iVar4 = *(int *)(param_2 + 1);
  if ((iVar4 != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  pvVar10 = (void *)*param_2;
  local_78 = (void *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar4);
  if ((iVar4 == 0) && (iVar3 + iVar6 == 0)) {
    local_70 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar4 + iVar3 + iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar10,(longlong)iVar4 * 2);
  }
  FString::PathAppend(&local_78,local_58,iVar6);
  plVar5 = (longlong *)FName::ToString(&local_res20,local_48);
  if ((int)local_70 < 2) {
    pvVar10 = (void *)*plVar5;
    *plVar5 = 0;
    lVar7 = plVar5[1];
    plVar5[1] = 0;
    iVar3 = (int)lVar7;
    iVar9 = *(int *)((longlong)plVar5 + 0xc);
  }
  else {
    iVar6 = (int)plVar5[1] + -1;
    if ((int)plVar5[1] == 0) {
      iVar6 = 0;
    }
    if (((int)local_70 != 0) || (iVar4 = 1, iVar6 == 0)) {
      iVar4 = 0;
    }
    iVar3 = local_70._4_4_;
    iVar4 = iVar4 + iVar6 + (int)local_70;
    local_68 = local_78;
    local_78 = (void *)0x0;
    local_60 = (int)local_70;
    local_5c = local_70._4_4_;
    local_70 = 0;
    if (iVar3 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    iVar4 = local_60;
    pvVar11 = (void *)*plVar5;
    pvVar10 = local_68;
    iVar3 = local_60;
    iVar9 = local_5c;
    if (iVar6 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar6 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
      }
      iVar9 = local_5c;
      iVar3 = local_60;
      pvVar10 = local_68;
      pvVar1 = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (iVar3 < 2) {
    *param_1 = 0;
    uVar2 = DAT_1464c0d30;
    pvVar11 = DAT_1464c0d28;
    iVar6 = (int)DAT_1464c0d30;
    *(int *)(param_1 + 1) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar2 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar11,(longlong)iVar6 * 2);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  else {
    iVar6 = (int)DAT_1464c0d30 + -1;
    if ((int)DAT_1464c0d30 == 0) {
      iVar6 = 0;
    }
    if ((iVar3 != 0) || (iVar4 = 1, iVar6 == 0)) {
      iVar4 = 0;
    }
    local_68 = pvVar10;
    local_60 = iVar3;
    local_5c = iVar9;
    if (iVar9 < iVar3 + iVar4 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar4 = local_60;
    pvVar10 = DAT_1464c0d28;
    pvVar11 = local_68;
    iVar3 = local_60;
    iVar9 = local_5c;
    if (iVar6 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar6;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
      }
      iVar9 = local_5c;
      iVar3 = local_60;
      pvVar11 = local_68;
      pvVar1 = (void *)((longlong)local_68 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    *param_1 = (longlong)pvVar11;
    *(int *)(param_1 + 1) = iVar3;
    *(int *)((longlong)param_1 + 0xc) = iVar9;
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419efe00 FUN_1419efe00 body=536 status=ok
// SIG undefined FUN_1419efe00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419efe00(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_68 = param_4[4];
  *param_2 = 0;
  local_64 = 3;
  local_5c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x708,local_d0,&local_78);
    if ((local_d0[0] == -1) ||
       (lVar5 = (longlong)local_d0[0] * 0x30 + *(longlong *)(param_1 + 0x708), lVar5 == 0)) {
      local_c8 = 0;
    }
    else {
      local_c8 = *(longlong *)(lVar5 + 0x20);
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_c8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  local_d8 = 0;
  if (DAT_1469f5a08 == 0) {
LAB_1419eff2e:
    (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,&local_c0,&DAT_146ab6e78,param_5);
    lVar5 = local_c0;
    local_d8 = local_c0;
    local_c0 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
    if (lVar5 == 0) goto LAB_1419eff76;
  }
  else {
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uVar6 = FUN_1419ea120(DAT_1469f5a08,local_b0,param_3,&local_98);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_d8,uVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
    lVar5 = local_d8;
    if (local_d8 == 0) goto LAB_1419eff2e;
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
LAB_1419eff76:
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  lVar5 = *param_2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_a8 = &local_78;
    local_a0 = param_2;
    FUN_1419d0700(param_1 + 0x708,local_b8,&local_a8,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419f0020 GetReadAccess body=108 status=ok
// SIG undefined GetReadAccess(void)

int * FShaderCode::GetReadAccess(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    *param_1 = *param_1 + 4;
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 4;
    if (param_1[5] < iVar1 + 4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    *(int *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) = *param_1;
    *param_1 = -1;
    return param_1 + 2;
  }
  return param_1 + 2;
}



// FUNCTION 1419f0090 GetRuntimeShaderPlatform body=22 status=ok
// SIG undefined GetRuntimeShaderPlatform(void)

undefined4 FShaderCodeLibrary::GetRuntimeShaderPlatform(void)

{
  if (DAT_1469f5a08 != 0) {
    return *(undefined4 *)(DAT_1469f5a08 + 0x60);
  }
  return 0x20;
}



// FUNCTION 1419f00b0 FUN_1419f00b0 body=781 status=ok
// SIG undefined FUN_1419f00b0(void)

undefined8 * FUN_1419f00b0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Dst;
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong lVar7;
  
  FUN_141eca160(local_res10,param_3);
  puVar2 = PTR_u_DrawCache_1464c0ae8;
  lVar6 = -1;
  do {
    lVar7 = lVar6;
    lVar6 = lVar7 + 1;
  } while (*(short *)(PTR_u_DrawCache_1464c0ae8 + lVar6 * 2) != 0);
  iVar5 = *(int *)(param_2 + 1);
  if ((iVar5 != 0) || (iVar3 = 2, (int)lVar7 == -2)) {
    iVar3 = 1;
  }
  pvVar9 = (void *)*param_2;
  iVar3 = iVar3 + (int)lVar6;
  local_60 = CONCAT44(local_60._4_4_,iVar5);
  local_68 = (void *)0x0;
  if ((iVar5 == 0) && (iVar3 == 0)) {
    local_60 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar5 + iVar3,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar9,(longlong)iVar5 * 2);
  }
  FString::PathAppend(&local_68,puVar2);
  iVar5 = (int)local_60;
  iVar3 = local_60._4_4_;
  bVar12 = (int)local_60 != 0;
  local_58 = local_68;
  pvVar9 = (void *)0x0;
  local_50 = (int)local_60;
  local_68 = (void *)0x0;
  local_4c = local_60._4_4_;
  local_60 = 0;
  if (iVar3 < (int)((2 - (uint)bVar12) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar5 = local_50;
  }
  local_50 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
  }
  iVar8 = local_4c;
  iVar3 = local_50;
  pvVar1 = local_58;
  lVar6 = ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2;
  *(undefined2 *)(lVar6 + (longlong)local_58) = 0x2d;
  *(undefined2 *)(lVar6 + 2 + (longlong)local_58) = 0;
  puVar4 = (undefined8 *)FName::ToString(local_res10);
  if (iVar3 < 2) {
    pvVar11 = (void *)*puVar4;
    *puVar4 = 0;
    iVar8 = *(int *)(puVar4 + 1);
    puVar4[1] = 0;
    pvVar9 = pvVar1;
    iVar10 = *(int *)((longlong)puVar4 + 0xc);
  }
  else {
    iVar5 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar5 = 0;
    }
    if ((iVar3 != 0) || (iVar10 = 1, iVar5 == 0)) {
      iVar10 = 0;
    }
    local_58 = pvVar1;
    local_4c = iVar8;
    if (iVar8 < iVar5 + iVar10 + iVar3) {
      local_50 = iVar3;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar3 = local_50;
    }
    pvVar1 = (void *)*puVar4;
    pvVar11 = local_58;
    iVar10 = local_4c;
    iVar8 = iVar3;
    if (iVar5 != 0) {
      local_50 = iVar3 + (uint)(iVar3 == 0) + iVar5;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
      }
      iVar10 = local_4c;
      iVar8 = local_50;
      pvVar11 = local_58;
      _Dst = (void *)((longlong)local_58 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
  }
  local_58 = pvVar11;
  local_4c = iVar10;
  if (iVar10 < (int)((0xe - (uint)(iVar8 != 0)) + iVar8)) {
    local_50 = iVar8;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar8 = local_50;
  }
  local_50 = (0xe - (uint)(iVar8 != 0)) + iVar8;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
  }
  builtin_wcsncpy((wchar_t *)((longlong)local_58 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2),
                  L".ushadercache",0xe);
  *param_1 = local_58;
  *(int *)(param_1 + 1) = local_50;
  *(int *)((longlong)param_1 + 0xc) = local_4c;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419f03e0 FUN_1419f03e0 body=507 status=ok
// SIG undefined FUN_1419f03e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1419f03e0(short *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  int local_138 [2];
  longlong local_130;
  ulonglong local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar5 = 0;
  local_130 = 0;
  local_128 = 0;
  lVar1 = -1;
  lVar6 = lVar5;
  if ((param_1 != (short *)0x0) && (lVar4 = lVar1, lVar6 = 0, *param_1 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_128 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
    }
    lVar6 = local_130;
    FGenericPlatformString::Memcpy(local_130,param_1,(longlong)(int)uVar3 * 2);
  }
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c0d90,local_138,&local_130);
  lVar4 = lVar5;
  if (local_138[0] != -1) {
    lVar4 = (longlong)local_138[0] * 0x30 + DAT_1464c0d90;
  }
  lVar2 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar2 = lVar5;
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  if (lVar2 == 0) {
    FSHA1::FSHA1(local_f8);
    FUN_141a10e70(local_f8,param_1);
    FSHA1::Final(local_f8);
    local_130 = 0;
    local_128 = 0;
    if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
      do {
        lVar1 = lVar1 + 1;
      } while (param_1[lVar1] != 0);
      uVar3 = (int)lVar1 + 1;
      local_128 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
      }
      FGenericPlatformString::Memcpy(local_130,param_1,(longlong)(int)uVar3 * 2);
    }
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_120 = &local_130;
    local_118 = &local_110;
    FUN_1419ce580(&DAT_1464c0d90,local_138,&local_120,0);
    lVar2 = (longlong)local_138[0] * 0x30 + DAT_1464c0d90;
    if (local_130 != 0) {
      FMemory::Free();
    }
    FSHA1::GetHash(local_f8,lVar2 + 0x10);
    FSHA1::~FSHA1(local_f8);
    lVar2 = lVar2 + 0x10;
  }
  return lVar2;
}



// FUNCTION 1419f05e0 FUN_1419f05e0 body=739 status=ok
// SIG undefined FUN_1419f05e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419f05e0(longlong *param_1)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  ulonglong local_148;
  uint local_140;
  uint uStack_13c;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar2 = 0;
  local_148 = 0;
  local_140 = 0;
  uStack_13c = 0;
  puVar5 = (undefined8 *)*param_1;
  puVar7 = puVar5 + (longlong)(int)param_1[1] * 2;
  uVar9 = uVar2;
  uVar10 = uVar2;
  for (; local_128 = param_1, puVar5 != puVar7; puVar5 = puVar5 + 2) {
    iVar6 = *(int *)(puVar5 + 1) + -1;
    local_138 = (longlong *)*puVar5;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      iVar8 = (int)uVar9;
      local_140 = iVar8 + (uint)(iVar8 == 0) + iVar6;
      if ((int)uVar2 < (int)local_140) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar9);
        uVar2 = (ulonglong)uStack_13c;
        uVar10 = local_148;
      }
      uVar9 = (ulonglong)local_140;
      _Dst = (void *)(uVar10 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,local_138,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    param_1 = local_128;
  }
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c0d90,&local_138,&local_148);
  if ((int)local_138 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)local_138 * 0x30 + DAT_1464c0d90;
  }
  uVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    FSHA1::FSHA1(local_108);
    puVar5 = (undefined8 *)*param_1;
    puVar7 = puVar5 + (longlong)(int)param_1[1] * 2;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
      if (*(int *)(puVar5 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar5;
      }
      local_138 = (longlong *)0x0;
      local_130 = 0;
      local_128 = (longlong *)0x0;
      local_120 = 0;
      LowLevelFatalErrorHandler
                ("Unknown",0x20e,L"Couldn\'t find source file of virtual shader path \'%s\'",puVar4)
      ;
      local_158 = puVar4;
      FDebug::AssertFailed
                (&DAT_144d8553f,"Unknown",0x20e,
                 L"Couldn\'t find source file of virtual shader path \'%s\'");
      if ((int)local_120 == 0) {
        plVar3 = (longlong *)&DAT_143f3eda8;
        uVar2 = 0;
      }
      else {
        plVar3 = local_128;
        uVar2 = (ulonglong)((int)local_120 - 1);
      }
      FSHA1::UpdateWithString(local_108,plVar3,uVar2);
      if (local_128 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar3 = local_138;
      for (iVar6 = (int)local_130; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
    }
    FSHA1::Final(local_108);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_118 = 0;
    uVar2 = FUN_1419cd060(&DAT_1464c0d90,&local_148,&local_128);
    FSHA1::GetHash(local_108,uVar2);
    FSHA1::~FSHA1(local_108);
    uVar10 = local_148;
  }
  if (uVar10 != 0) {
    FMemory::Free(uVar10);
  }
  return uVar2;
}



// FUNCTION 1419f08d0 FUN_1419f08d0 body=148 status=ok
// SIG undefined FUN_1419f08d0(void)

undefined8 FUN_1419f08d0(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_1469f606c == '\0') {
    DAT_1469f606c = '\x01';
    uVar4 = FCommandLine::Get();
    DAT_1469f606d = FParse::Param(uVar4,L"logpso");
  }
  lVar1 = DAT_1469f5d90;
  if (DAT_1469f606d == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419f0970 FUN_1419f0970 body=582 status=ok
// SIG undefined FUN_1419f0970(void)

void FUN_1419f0970(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0xb0);
  puVar2 = (uint *)(param_1 + 0x98);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar4 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar11 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar11) goto LAB_1419f0a4c;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1419f0a4c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_70 = CONCAT44(uStack_94,local_98);
  uVar9 = uVar4 & 0xffffffe0;
  local_68 = puVar2;
  local_50 = plVar1;
  uStack_48 = uStack_70;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1419f0b12;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1419f0b12:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    plVar5 = *(longlong **)(*plVar1 + (longlong)(int)uStack_5c * 0x18 + 8);
    if (*(char *)(*plVar5 + 0x6c) == '\0') {
      bVar11 = param_3 == 2;
    }
    else {
      bVar11 = param_3 == 1;
    }
    if (!bVar11) {
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      *(longlong **)(*param_2 + (longlong)iVar6 * 8) = plVar5;
    }
    uStack_60 = uStack_60 & ~uStack_70._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  return;
}



// FUNCTION 1419f0bc0 GetShaderPipelineTypeByName body=41 status=ok
// SIG undefined GetShaderPipelineTypeByName(void)

longlong FShaderPipelineType::GetShaderPipelineTypeByName(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_1469f5de0;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_1 == *(longlong *)(puVar1[2] + 8)) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1[2];
}



// FUNCTION 1419f0bf0 GetShaderTypeByName body=74 status=ok
// SIG undefined GetShaderTypeByName(void)

longlong FShaderType::GetShaderTypeByName(short *param_1)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  short *psVar4;
  
  puVar3 = DAT_1469f5dd8;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    psVar4 = param_1;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + (*(longlong *)(puVar3[2] + 0x10) - (longlong)param_1));
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      return puVar3[2];
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



// FUNCTION 1419f0c40 FUN_1419f0c40 body=102 status=ok
// SIG undefined FUN_1419f0c40(void)

int FUN_1419f0c40(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x330)) {
    puVar6 = (undefined4 *)(param_1 + 0x38);
    puVar5 = param_2;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 6;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x330));
  }
  if ((param_3 != '\0') && (iVar7 < 0x20)) {
    lVar4 = (longlong)iVar7;
    iVar2 = 0x20 - iVar7;
    iVar7 = iVar7 + iVar2;
    puVar6 = param_2 + lVar4;
    for (lVar3 = (longlong)iVar2; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  return iVar7;
}



// FUNCTION 1419f0cb0 FUN_1419f0cb0 body=529 status=ok
// SIG undefined FUN_1419f0cb0(void)

int FUN_1419f0cb0(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  undefined2 local_resc;
  undefined2 local_rese;
  
  iVar3 = *(int *)(param_1 + 0x1a8);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x100);
    if (param_1 != param_1 + (longlong)iVar3 * 8) {
      puVar9 = param_1 + 2;
      do {
        local_res8 = puVar9[-2];
        local_res9 = puVar9[-1];
        local_resa = *puVar9;
        local_resb = puVar9[1];
        local_resc = *(undefined2 *)(puVar9 + 2);
        local_rese = *(undefined2 *)(puVar9 + 4);
        uVar4 = FCrc::MemCrc_DEPRECATED(&local_res8,8);
        *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) ^ uVar4;
        puVar1 = puVar9 + 6;
        puVar9 = puVar9 + 8;
      } while (puVar1 != param_1 + (longlong)iVar3 * 8);
    }
    uVar4 = *(uint *)(param_1 + 0x120);
    if (uVar4 == 0) {
      iVar3 = *(int *)(param_1 + 0x11c);
      bVar2 = param_1[0x124];
      uVar4 = FCrc::MemCrc_DEPRECATED(param_1 + 0x108,0x14,0);
      uVar4 = uVar4 ^ iVar3 << 0x10 ^ (uint)bVar2;
      *(uint *)(param_1 + 0x120) = uVar4;
    }
    uVar5 = *(uint *)(param_1 + 0x140);
    if (uVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x13c);
      bVar2 = param_1[0x144];
      uVar5 = FCrc::MemCrc_DEPRECATED(param_1 + 0x128,0x14,0);
      uVar5 = uVar5 ^ iVar3 << 0x10 ^ (uint)bVar2;
      *(uint *)(param_1 + 0x140) = uVar5;
    }
    uVar6 = *(uint *)(param_1 + 0x160);
    if (uVar6 == 0) {
      iVar3 = *(int *)(param_1 + 0x15c);
      bVar2 = param_1[0x164];
      uVar6 = FCrc::MemCrc_DEPRECATED(param_1 + 0x148,0x14,0);
      uVar6 = uVar6 ^ iVar3 << 0x10 ^ (uint)bVar2;
      *(uint *)(param_1 + 0x160) = uVar6;
    }
    uVar7 = *(uint *)(param_1 + 0x180);
    if (uVar7 == 0) {
      iVar3 = *(int *)(param_1 + 0x17c);
      bVar2 = param_1[0x184];
      uVar7 = FCrc::MemCrc_DEPRECATED(param_1 + 0x168,0x14,0);
      uVar7 = uVar7 ^ iVar3 << 0x10 ^ (uint)bVar2;
      *(uint *)(param_1 + 0x180) = uVar7;
    }
    uVar8 = *(uint *)(param_1 + 0x1a0);
    if (uVar8 == 0) {
      iVar3 = *(int *)(param_1 + 0x19c);
      bVar2 = param_1[0x1a4];
      uVar8 = FCrc::MemCrc_DEPRECATED(param_1 + 0x188,0x14,0);
      uVar8 = uVar8 ^ iVar3 << 0x10 ^ (uint)bVar2;
      *(uint *)(param_1 + 0x1a0) = uVar8;
    }
    *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) ^ uVar8 ^ uVar7 ^ uVar6 ^ uVar5 ^ uVar4;
    iVar3 = *(int *)(param_1 + 0x1a8);
  }
  return iVar3;
}



// FUNCTION 1419f0ed0 FUN_1419f0ed0 body=1057 status=ok
// SIG undefined FUN_1419f0ed0(void)

uint FUN_1419f0ed0(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  
  uVar2 = param_1[0x30];
  if (uVar2 == 0) {
    pbVar4 = (byte *)((longlong)param_1 + 0xaa);
    puVar5 = param_1 + 0x21;
    puVar3 = param_1 + 4;
    lVar1 = 2;
    uVar2 = -(uint)((char)param_1[0x10] != '\0') & 0x80000000 ^
            (uint)*(byte *)((longlong)param_1 + 0xbd) ^ (uint)(byte)param_1[0x2f] ^ param_1[1] ^
            *param_1;
    param_1[0x30] = uVar2;
    do {
      uVar2 = (uint)(byte)puVar3[-2] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + -7) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + -6) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = *(byte *)((longlong)puVar3 + -2) ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + -5) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)(byte)puVar3[-1] << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + -3) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[-9] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[-1] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-10] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-2] << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + -1) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)(byte)*puVar3 << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 1) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = *(byte *)((longlong)puVar3 + 5) ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 2) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 3) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)(byte)puVar3[1] << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[-8] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = uVar2 ^ *puVar5;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-9] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-1] << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 6) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 7) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)(byte)puVar3[2] << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (byte)puVar3[3] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 9) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 10) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0xb) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[-7] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[1] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-8] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*pbVar4 << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0xd) << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0xe) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0xf) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = *(byte *)((longlong)puVar3 + 0x13) ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)(byte)puVar3[4] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0x11) << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)*(byte *)((longlong)puVar3 + 0x12) << 8 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[-6] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = puVar5[2] ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[-7] << 0x18 ^ uVar2;
      param_1[0x30] = uVar2;
      uVar2 = (uint)pbVar4[1] << 0x10 ^ uVar2;
      param_1[0x30] = uVar2;
      puVar5 = puVar5 + 4;
      puVar3 = puVar3 + 7;
      pbVar4 = pbVar4 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    uVar2 = (uint)CONCAT21(CONCAT11((byte)param_1[0x2e] ^ (byte)param_1[0x16] ^
                                    *(byte *)((longlong)param_1 + 0x53) ^
                                    *(byte *)((longlong)param_1 + 0x51),
                                    *(byte *)((longlong)param_1 + 0xb9) ^
                                    *(byte *)((longlong)param_1 + 0x59) ^ (byte)param_1[0x15]),
                           *(byte *)((longlong)param_1 + 0xba) ^ (byte)param_1[0x17] ^
                           *(byte *)((longlong)param_1 + 0x5a) ^ *(byte *)((longlong)param_1 + 0x55)
                          ) << 8 ^ -(uint)(*(char *)((longlong)param_1 + 0x52) != '\0') & 0x800000 ^
            -(uint)(*(char *)((longlong)param_1 + 0x57) != '\0') & 0x8000 ^
            -(uint)((char)param_1[0x14] != '\0') & 0x80000000 ^
            (uint)*(byte *)((longlong)param_1 + 0xbb) ^ (uint)*(byte *)((longlong)param_1 + 0x5d) ^
            (uint)*(byte *)((longlong)param_1 + 0x5b) ^ (uint)*(byte *)((longlong)param_1 + 0x56) ^
            param_1[0x2d] ^ param_1[0x2c] ^ uVar2;
    param_1[0x30] = uVar2;
    uVar2 = (uint)(byte)param_1[0x13] << 8 ^
            -(uint)(*(char *)((longlong)param_1 + 0x4e) != '\0') & 2 ^
            (uint)(*(char *)((longlong)param_1 + 0x4f) != '\0') ^
            (uint)*(byte *)((longlong)param_1 + 0x4d) ^ param_1[0x12] ^ param_1[0x11] ^ uVar2;
    param_1[0x30] = uVar2;
  }
  return uVar2;
}



// FUNCTION 1419f1300 GetTypeHash body=116 status=ok
// SIG undefined GetTypeHash(void)

void GetTypeHash(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = FCrc::MemCrc32(param_1,0x14,0);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = FCrc::MemCrc32(param_1 + 0x14,0x14,uVar1);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = FCrc::MemCrc32(param_1 + 0x28,0x14,uVar1);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = FCrc::MemCrc32(param_1 + 0x3c,0x14,uVar1);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = FCrc::MemCrc32(param_1 + 0x50,0x14,uVar1);
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}



// FUNCTION 1419f1380 GetTypeHash body=713 status=ok
// SIG undefined GetTypeHash(void)

void GetTypeHash(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  if (*(int *)(param_1 + 0xde4) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0xde0);
    puVar11 = (uint *)(param_1 + 8);
    puVar6 = (ulonglong *)(param_1 + 0xd80);
    lVar7 = 6;
    puVar8 = (uint *)(param_1 + 0x180);
    *(uint *)(param_1 + 0xde4) = (uint)*(byte *)(param_1 + 0xde0);
    do {
      uVar9 = puVar11[-2];
      *(uint *)(param_1 + 0xde4) = uVar9 ^ uVar1;
      uVar1 = puVar11[-1] ^ uVar9 ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = *puVar11 ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[1] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[2] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[3] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[4] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[5] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[6] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[7] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[8] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[9] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[10] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[0xb] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[0xc] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar1 = puVar11[0xd] ^ uVar1;
      *(uint *)(param_1 + 0xde4) = uVar1;
      uVar5 = puVar6[6];
      if (uVar5 == 0) {
        uVar5 = *puVar6;
        uVar9 = 0x20;
        if (uVar5 < 0x100000000) {
          uVar9 = 0;
        }
        uVar4 = uVar5 >> 0x20;
        if (uVar5 < 0x100000000) {
          uVar4 = uVar5;
        }
        if (0xffff < uVar4) {
          uVar4 = uVar4 >> 0x10;
          uVar9 = uVar9 + 0x10;
        }
        uVar10 = uVar9 + 8;
        if (uVar4 < 0x100) {
          uVar10 = uVar9;
        }
        uVar5 = uVar4 >> 8;
        if (uVar4 < 0x100) {
          uVar5 = uVar4;
        }
        uVar9 = uVar10 + 4;
        if (uVar5 < 0x10) {
          uVar9 = uVar10;
        }
        uVar4 = uVar5 >> 4;
        if (uVar5 < 0x10) {
          uVar4 = uVar5;
        }
        uVar10 = uVar9 + 2;
        if (uVar4 < 4) {
          uVar10 = uVar9;
        }
        uVar2 = uVar4 >> 2;
        if (uVar4 < 4) {
          uVar2 = uVar4;
        }
        uVar9 = uVar10 + 1;
        if (uVar2 < 2) {
          uVar9 = uVar10;
        }
        uVar5 = (ulonglong)uVar9;
        if (uVar2 == 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar9 = 0x20;
        if (uVar5 < 0x100000000) {
          uVar9 = 0;
        }
        uVar4 = uVar5 >> 0x20;
        if (uVar5 < 0x100000000) {
          uVar4 = uVar5;
        }
        if (0xffff < uVar4) {
          uVar4 = uVar4 >> 0x10;
          uVar9 = uVar9 + 0x10;
        }
        uVar10 = uVar9 + 8;
        if (uVar4 < 0x100) {
          uVar10 = uVar9;
        }
        uVar5 = uVar4 >> 8;
        if (uVar4 < 0x100) {
          uVar5 = uVar4;
        }
        uVar9 = uVar10 + 4;
        if (uVar5 < 0x10) {
          uVar9 = uVar10;
        }
        uVar4 = uVar5 >> 4;
        if (uVar5 < 0x10) {
          uVar4 = uVar5;
        }
        uVar10 = uVar9 + 2;
        if (uVar4 < 4) {
          uVar10 = uVar9;
        }
        uVar5 = uVar4 >> 2;
        if (uVar4 < 4) {
          uVar5 = uVar4;
        }
        uVar9 = uVar10 + 1;
        if (uVar5 < 2) {
          uVar9 = uVar10;
        }
        if (uVar5 == 0) {
          uVar9 = 0;
        }
        uVar5 = (ulonglong)(uVar9 + 0x3f);
      }
      puVar3 = puVar8;
      if ((int)uVar5 != 0) {
        do {
          uVar1 = uVar1 ^ *puVar3;
          *(uint *)(param_1 + 0xde4) = uVar1;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 != 0);
      }
      puVar6 = puVar6 + 1;
      puVar11 = puVar11 + 0x10;
      puVar8 = puVar8 + 0x80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1419f1650 GetTypeHash body=353 status=ok
// SIG undefined GetTypeHash(void)

int GetTypeHash(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      bVar1 = *(byte *)(param_1 + 0x1c);
      uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0x14,0);
      uVar3 = uVar3 ^ iVar2 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_1 + 0x18) = uVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    if (uVar4 == 0) {
      iVar2 = *(int *)(param_1 + 0x34);
      bVar1 = *(byte *)(param_1 + 0x3c);
      uVar4 = FCrc::MemCrc_DEPRECATED(param_1 + 0x20,0x14,0);
      uVar4 = uVar4 ^ iVar2 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_1 + 0x38) = uVar4;
    }
    uVar5 = *(uint *)(param_1 + 0x58);
    if (uVar5 == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      bVar1 = *(byte *)(param_1 + 0x5c);
      uVar5 = FCrc::MemCrc_DEPRECATED(param_1 + 0x40,0x14,0);
      uVar5 = uVar5 ^ iVar2 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_1 + 0x58) = uVar5;
    }
    uVar6 = *(uint *)(param_1 + 0x78);
    if (uVar6 == 0) {
      iVar2 = *(int *)(param_1 + 0x74);
      bVar1 = *(byte *)(param_1 + 0x7c);
      uVar6 = FCrc::MemCrc_DEPRECATED(param_1 + 0x60,0x14,0);
      uVar6 = uVar6 ^ iVar2 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_1 + 0x78) = uVar6;
    }
    uVar7 = *(uint *)(param_1 + 0x98);
    if (uVar7 == 0) {
      iVar2 = *(int *)(param_1 + 0x94);
      bVar1 = *(byte *)(param_1 + 0x9c);
      uVar7 = FCrc::MemCrc_DEPRECATED(param_1 + 0x80,0x14,0);
      uVar7 = uVar7 ^ iVar2 << 0x10 ^ (uint)bVar1;
      *(uint *)(param_1 + 0x98) = uVar7;
    }
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) ^ uVar7 ^ uVar6 ^ uVar5 ^ uVar4 ^ uVar3;
    iVar2 = *(int *)(param_1 + 0xa0);
  }
  return iVar2;
}



// FUNCTION 1419f17c0 GetTypeHash body=115 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[8];
  if (uVar1 == 0) {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      uVar1 = (param_1[5] << 8 ^ param_1[6]) << 8 ^ (uint)(byte)param_1[7] << 0x18 ^
              (uint)*(byte *)((longlong)param_1 + 0x1d) ^ param_1[2] * 2 ^ param_1[1] * 3 ^
              param_1[4] ^ param_1[3];
      *param_1 = uVar1;
    }
    uVar1 = (param_1[9] << 8 ^ param_1[10]) << 0x10 ^ (uint)(byte)param_1[0xb] << 8 ^
            (uint)*(byte *)((longlong)param_1 + 0x2d) ^ uVar1;
    param_1[8] = uVar1;
  }
  return uVar1;
}



// FUNCTION 1419f1840 GetTypeHash body=370 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar3 = (int)(*param_1 >> 4);
  iVar9 = (int)(param_1[1] >> 4);
  iVar1 = (int)(param_1[2] >> 4);
  uVar6 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
  uVar2 = -(uVar6 + iVar3) ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar2 ^ uVar2 >> 0xc;
  uVar7 = (uVar6 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar6 = (uVar2 - uVar7) - uVar4 ^ uVar7 >> 5;
  uVar5 = (uVar4 - uVar7) - uVar6 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar2 = -(uVar4 + iVar9) ^ uVar4 >> 0xd;
  uVar10 = (iVar9 - uVar4) - uVar2 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar10) - uVar2 ^ uVar10 << 0x10;
  uVar8 = (uVar2 - uVar4) - uVar10 ^ uVar4 >> 5;
  uVar11 = (uVar10 - uVar4) - uVar8 ^ uVar8 >> 3;
  uVar10 = (uVar4 - uVar11) - uVar8 ^ uVar11 << 10;
  uVar12 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar4 = -(uVar12 + iVar1) ^ uVar12 >> 0xd;
  uVar2 = (iVar1 - uVar12) - uVar4 ^ uVar4 >> 0xc;
  uVar12 = (uVar12 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar12) - uVar2 ^ uVar12 >> 5;
  uVar2 = (uVar2 - uVar12) - uVar4 ^ uVar4 >> 3;
  uVar12 = (uVar12 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar12) - uVar2 ^ (uVar12 ^ uVar10 ^ uVar7) >> 0xf ^ (uVar8 - uVar10) - uVar11 ^
         (uVar6 - uVar7) - uVar5;
}



// FUNCTION 1419f19c0 FUN_1419f19c0 body=8 status=ok
// SIG undefined FUN_1419f19c0(void)

undefined8 * FUN_1419f19c0(void)

{
  return &DAT_1469f5de0;
}



// FUNCTION 1419f19d0 FUN_1419f19d0 body=8 status=ok
// SIG undefined FUN_1419f19d0(void)

undefined8 * FUN_1419f19d0(void)

{
  return &DAT_1469f5dd8;
}



// FUNCTION 1419f19e0 FUN_1419f19e0 body=8 status=ok
// SIG undefined FUN_1419f19e0(void)

undefined8 * FUN_1419f19e0(void)

{
  return &DAT_1469f60a0;
}



// FUNCTION 1419f19f0 GetVFByName body=295 status=ok
// SIG undefined GetVFByName(void)

longlong FVertexFactoryType::GetVFByName(void)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  if (DAT_1469f60a0 != (longlong *)0x0) {
    plVar6 = DAT_1469f60a0;
    do {
      local_28 = (undefined2 *)0x0;
      iVar3 = 0;
      local_1c = 0;
      psVar1 = *(short **)(plVar6[2] + 0x10);
      puVar7 = (undefined2 *)0x0;
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        lVar4 = -1;
        do {
          lVar2 = lVar4 + 1;
          lVar4 = lVar4 + 1;
        } while (psVar1[lVar2] != 0);
        local_20 = (int)lVar4 + 1;
        lVar4 = (longlong)local_20;
        if (0 < local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        iVar3 = local_20;
        puVar7 = local_28;
        FGenericPlatformString::Memcpy(local_28,psVar1,lVar4 * 2);
      }
      puVar5 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar5 = puVar7;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5);
      if (iVar3 == 0) {
        lVar4 = plVar6[2];
        if (puVar7 == (undefined2 *)0x0) {
          return lVar4;
        }
        FMemory::Free(puVar7);
        return lVar4;
      }
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 1419f1b20 FUN_1419f1b20 body=92 status=ok
// SIG undefined FUN_1419f1b20(void)

undefined4 FUN_1419f1b20(undefined4 *param_1,char param_2)

{
  char cVar1;
  DWORD DVar2;
  
  if (param_2 != '\0') {
    return *param_1;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      return param_1[1];
    }
  }
  return *param_1;
}



// FUNCTION 1419f1b80 FUN_1419f1b80 body=532 status=ok
// SIG undefined FUN_1419f1b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1419f1b80(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_68 = param_4[4];
  *param_2 = 0;
  local_64 = 0;
  local_5c = 1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x6b8,local_d0,&local_78);
    if ((local_d0[0] == -1) ||
       (lVar5 = (longlong)local_d0[0] * 0x30 + *(longlong *)(param_1 + 0x6b8), lVar5 == 0)) {
      local_c8 = 0;
    }
    else {
      local_c8 = *(longlong *)(lVar5 + 0x20);
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_c8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (*param_2 != 0) {
      return param_2;
    }
  }
  local_d8 = 0;
  if (DAT_1469f5a08 == 0) {
LAB_1419f1caa:
    (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,&local_c0,&DAT_146ab6e78,param_5);
    lVar5 = local_c0;
    local_d8 = local_c0;
    local_c0 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
    if (lVar5 == 0) goto LAB_1419f1cf2;
  }
  else {
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uVar6 = FUN_1419ea7a0(DAT_1469f5a08,local_b0,param_3,&local_98);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_d8,uVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b0);
    lVar5 = local_d8;
    if (local_d8 == 0) goto LAB_1419f1caa;
  }
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
LAB_1419f1cf2:
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  lVar5 = *param_2;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar1 = param_4[4];
  *(undefined4 *)(lVar5 + 0x18) = *param_4;
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  if (param_3 == *(int *)(param_1 + 0x2b0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_a8 = &local_78;
    local_a0 = param_2;
    FUN_1419d0700(param_1 + 0x6b8,local_b8,&local_a8,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return param_2;
}



// FUNCTION 1419f1da0 FUN_1419f1da0 body=73 status=ok
// SIG undefined FUN_1419f1da0(void)

void FUN_1419f1da0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1419f1df0 FUN_1419f1df0 body=916 status=ok
// SIG undefined FUN_1419f1df0(void)

void FUN_1419f1df0(undefined4 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  longlong local_28 [2];
  longlong *local_18;
  ulonglong uVar12;
  
  if (DAT_1469f5a08 == (undefined8 *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar6 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar6,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      puVar5 = (undefined8 *)operator_new(0x80);
      puVar10 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        *(undefined4 *)(puVar5 + 8) = 0xffffffff;
        *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
        puVar5[10] = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
        *(undefined4 *)(puVar5 + 0xc) = 0x20;
        puVar5[0xd] = 0;
        InitializeSRWLock((PSRWLOCK)(puVar5 + 0xe));
        *(undefined2 *)(puVar5 + 0xf) = 0;
        puVar10 = puVar5;
      }
      local_48 = 0;
      local_40 = 7;
      DAT_1469f5a08 = puVar10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"Global",0xe);
      uVar6 = FPaths::ProjectContentDir(local_28);
      cVar4 = FUN_141a01550(DAT_1469f5a08,uVar6,param_1,&local_48);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      puVar10 = DAT_1469f5a08;
      if (cVar4 == '\0') {
        if (DAT_1469f5a08 != (undefined8 *)0x0) {
          *(undefined4 *)(DAT_1469f5a08 + 0xb) = 0;
          if (puVar10[10] != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (puVar10 + 2);
          TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
          ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(puVar10);
          FMemory::operator_delete(puVar10,0x80);
          DAT_1469f5a08 = (undefined8 *)0x0;
        }
      }
      else {
        plVar7 = (longlong *)FUN_1416ba600();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x70))(plVar7);
        plVar8 = (longlong *)FMemory::Realloc(0,0x20);
        local_18 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_GetPoolName_143f4c9a8;
          plVar8[1] = (longlong)FShaderCodeLibraryPluginMountedCallback;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[3] = lVar9;
          *plVar8 = (longlong)&PTR_GetPoolName_143f4c9f0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,local_res10);
          iVar3 = (int)plVar7[1];
          *(int *)(plVar7 + 1) = iVar3 + 1;
          if (*(int *)((longlong)plVar7 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar3);
          }
          puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar7);
          *puVar10 = plVar8;
          *(undefined4 *)(puVar10 + 1) = 2;
        }
        plVar7 = (longlong *)FUN_1416ba600();
        (**(code **)(*plVar7 + 0x40))(plVar7,&local_38);
        puVar5 = local_38 + (longlong)(int)local_30 * 2;
        uVar12 = local_30;
        for (puVar10 = local_38; puVar10 != puVar5; puVar10 = puVar10 + 2) {
          plVar7 = (longlong *)puVar10[1];
          uVar6 = *puVar10;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_30 = uVar12;
          FShaderCodeLibraryPluginMountedCallback(uVar6);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          uVar12 = local_30;
        }
        if ((int)uVar12 != 0) {
          plVar7 = local_38 + 1;
          do {
            plVar8 = (longlong *)*plVar7;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar8 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar7 = plVar7 + 2;
            uVar11 = (int)uVar12 - 1;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 != 0);
        }
        if (local_38 != (undefined8 *)0x0) {
          FMemory::Free(local_38);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1419f2190 FUN_1419f2190 body=73 status=ok
// SIG undefined FUN_1419f2190(void)

void FUN_1419f2190(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_res8,&DAT_146ab6e78,param_2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x650,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1419f21e0 FUN_1419f21e0 body=4985 status=ok
// SIG undefined FUN_1419f21e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419f24c5) */

void FUN_1419f21e0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  size_t _Size;
  void **ppvVar17;
  longlong lVar18;
  char cVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  bool bVar22;
  undefined1 auStack_778 [32];
  void **local_758;
  undefined2 *local_750;
  longlong local_748;
  undefined4 local_740;
  void *local_738;
  int local_730;
  undefined4 local_72c;
  undefined8 *local_720;
  undefined8 *local_718;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  undefined4 local_6f8 [2];
  longlong local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 *local_6d8;
  undefined8 *local_6d0;
  undefined8 *local_6c8;
  undefined8 *local_6c0;
  longlong local_6b8;
  undefined8 *local_6b0;
  undefined1 local_6a8 [8];
  longlong local_6a0;
  undefined8 local_698;
  undefined1 local_690 [8];
  undefined1 local_688 [8];
  undefined1 local_680 [8];
  undefined1 local_678 [8];
  undefined1 local_670 [8];
  undefined1 local_668 [16];
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined1 local_4a8 [8];
  longlong local_4a0 [2];
  longlong local_490 [2];
  longlong local_480 [2];
  void *local_470 [2];
  undefined1 local_460 [8];
  longlong local_458 [2];
  longlong local_448 [2];
  longlong local_438 [2];
  longlong local_428 [2];
  longlong local_418 [2];
  longlong local_408 [2];
  longlong local_3f8 [2];
  undefined1 local_3e8 [8];
  longlong local_3e0 [2];
  undefined1 local_3d0 [8];
  longlong local_3c8 [2];
  longlong local_3b8 [2];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  longlong local_380 [2];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  void *local_338 [96];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar15 = DAT_146ab62cc;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_778;
  uVar16 = *(uint *)(param_1 + 0x68) >> 3 & 0x1f;
  if ((((DAT_146ab62cc == uVar16) || (0x1b < DAT_146ab62cc)) ||
      ((0x8dfc0ebU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) ||
     ((0x1b < uVar16 || ((0x8dfc0ebU >> uVar16 & 1) == 0)))) {
    if (DAT_146ab62cc != uVar16) goto LAB_1419f2370;
  }
  else {
    iVar9 = FUN_1419ef5f0(uVar16);
    iVar10 = FUN_1419ef5f0();
    if ((uVar16 < 0xf) && ((0x40a1U >> uVar16 & 1) != 0)) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    if ((((uVar15 == 0) || (uVar15 == 5)) || (uVar16 == 0xe)) || (uVar15 == 7)) {
      cVar19 = '\x01';
    }
    else {
      cVar19 = '\0';
    }
    if ((uVar15 < 0x1c) && ((0x8c51800U >> (uVar15 & 0x1f) & 1) != 0)) {
      cVar14 = '\x01';
    }
    else {
      cVar14 = '\0';
    }
    if ((uVar16 < 0x1c) && ((0x8c51800U >> uVar16 & 1) != 0)) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    if ((cVar14 == cVar7) && ((0x1b < uVar15 || ((0x8c51800U >> (uVar15 & 0x1f) & 1) == 0)))) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if ((uVar15 < 0x1b) && ((0x700a74aU >> (uVar15 & 0x1f) & 1) != 0)) {
      cVar14 = '\x01';
    }
    else {
      cVar14 = '\0';
    }
    if ((uVar16 < 0x1b) && ((0x700a74aU >> uVar16 & 1) != 0)) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    if ((((iVar10 < iVar9) || (cVar19 != cVar8)) || (!bVar22)) || (cVar14 != cVar7)) {
LAB_1419f2370:
      uVar11 = FUN_141eca160(local_340,uVar15);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_490);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      uVar11 = FUN_141eca160(local_4a8,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_4a0);
      if (*(int *)(puVar12 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar12;
      }
      local_758 = (void **)puVar21;
      LowLevelFatalErrorHandler
                ("Unknown",0x2c1,
                 L"FShaderResource::InitRHI got platform %s but it is not compatible with %s",
                 puVar20);
      if (local_4a0[0] != 0) {
        FMemory::Free();
      }
      if (local_490[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_3e8,DAT_146ab62cc);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_470);
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      uVar11 = FUN_141eca160(local_3d0,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_480);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      local_750 = puVar21;
      FDebug::AssertFailed
                (&DAT_144d85104,"Unknown",0x2c1,
                 L"FShaderResource::InitRHI got platform %s but it is not compatible with %s");
      if (local_480[0] != 0) {
        FMemory::Free();
      }
      goto LAB_1419f3532;
    }
  }
  lVar13 = 0;
  local_738 = (void *)0x0;
  local_730 = 0;
  local_72c = 0;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar9 = *(int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x78) == iVar9) {
      if (&local_738 != (void **)(param_1 + 0x70)) {
        local_730 = *(int *)(param_1 + 0x78);
        _Size = (size_t)local_730;
        _Src = *(void **)(param_1 + 0x70);
        if (local_730 != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_738,local_730,0);
          _guard_xfg_dispatch_icall_nop(local_738,_Src,_Size);
        }
      }
    }
    else {
      if (iVar9 < 1) {
        if ((iVar9 < 0) && (iVar9 != 0)) {
          local_730 = iVar9;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_738);
        }
      }
      else {
        local_730 = iVar9;
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_738);
        _guard_xfg_dispatch_icall_nop(local_738,0,(longlong)iVar9);
      }
      local_748 = CONCAT44(local_748._4_4_,0xf);
      local_750 = (undefined2 *)((ulonglong)local_750 & 0xffffffffffffff00);
      local_758 = (void **)CONCAT44(local_758._4_4_,*(undefined4 *)(param_1 + 0x78));
      FUN_14165b8a0(1,local_738,*(undefined4 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70));
    }
  }
  uVar15 = *(uint *)(param_1 + 0x68);
  uVar16 = uVar15 & 7;
  if (uVar16 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    uVar15 = uVar15 >> 3 & 0x1f;
    if (DAT_1469f59d8 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      local_720 = (undefined8 *)0x0;
      local_6e8 = uVar3;
      uStack_6e4 = uVar4;
      uStack_6e0 = uVar5;
      uStack_6dc = uVar6;
      if (DAT_1469f5a08 == 0) {
LAB_1419f2606:
        (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,&local_6d8,&DAT_146ab6e78,&local_738);
        puVar12 = local_720;
        local_720 = local_6d8;
        local_6d8 = (undefined8 *)0x0;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar15 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar15);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6d8);
        if (local_720 == (undefined8 *)0x0) goto LAB_1419f26e8;
      }
      else {
        local_608 = *(undefined4 *)(param_1 + 0x84);
        uStack_604 = *(undefined4 *)(param_1 + 0x88);
        uStack_600 = *(undefined4 *)(param_1 + 0x8c);
        uStack_5fc = *(undefined4 *)(param_1 + 0x90);
        local_5f8 = uVar2;
        uVar11 = FUN_1419ea7a0(DAT_1469f5a08,local_678,uVar15,&local_608);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_720,uVar11);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_678);
        if (local_720 == (undefined8 *)0x0) goto LAB_1419f2606;
      }
      *(undefined4 *)(local_720 + 3) = local_6e8;
      *(undefined4 *)((longlong)local_720 + 0x1c) = uStack_6e4;
      *(undefined4 *)(local_720 + 4) = uStack_6e0;
      *(undefined4 *)((longlong)local_720 + 0x24) = uStack_6dc;
      *(undefined4 *)(local_720 + 5) = uVar2;
    }
    else {
      local_618 = *(undefined4 *)(param_1 + 0x94);
      local_758 = &local_738;
      local_628 = uVar3;
      uStack_624 = uVar4;
      uStack_620 = uVar5;
      uStack_61c = uVar6;
      FUN_1419f1b80(DAT_1469f59d8,&local_720,uVar15,&local_628);
    }
LAB_1419f26e8:
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,&local_720);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_720);
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x38) == 0)) {
      uVar11 = FUN_141eca160(local_3a8,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_458);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2d2,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_458[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_3a0,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_448);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d85105,"Unknown",0x2d2,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
LAB_1419f34ea:
      if (local_448[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else if (uVar16 == 3) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    uVar15 = uVar15 >> 3 & 0x1f;
    if (DAT_1469f59d8 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      local_718 = (undefined8 *)0x0;
      local_6e8 = uVar3;
      uStack_6e4 = uVar4;
      uStack_6e0 = uVar5;
      uStack_6dc = uVar6;
      if (DAT_1469f5a08 == 0) {
LAB_1419f2897:
        (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,&local_6d0,&DAT_146ab6e78,&local_738);
        puVar12 = local_718;
        local_718 = local_6d0;
        local_6d0 = (undefined8 *)0x0;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar15 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar15);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6d0);
        if (local_718 == (undefined8 *)0x0) goto LAB_1419f2979;
      }
      else {
        local_5c8 = *(undefined4 *)(param_1 + 0x84);
        uStack_5c4 = *(undefined4 *)(param_1 + 0x88);
        uStack_5c0 = *(undefined4 *)(param_1 + 0x8c);
        uStack_5bc = *(undefined4 *)(param_1 + 0x90);
        local_5b8 = uVar2;
        uVar11 = FUN_1419ea120(DAT_1469f5a08,local_670,uVar15,&local_5c8);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_718,uVar11);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_670);
        if (local_718 == (undefined8 *)0x0) goto LAB_1419f2897;
      }
      *(undefined4 *)(local_718 + 3) = local_6e8;
      *(undefined4 *)((longlong)local_718 + 0x1c) = uStack_6e4;
      *(undefined4 *)(local_718 + 4) = uStack_6e0;
      *(undefined4 *)((longlong)local_718 + 0x24) = uStack_6dc;
      *(undefined4 *)(local_718 + 5) = uVar2;
    }
    else {
      local_5d8 = *(undefined4 *)(param_1 + 0x94);
      local_758 = &local_738;
      local_5e8 = uVar3;
      uStack_5e4 = uVar4;
      uStack_5e0 = uVar5;
      uStack_5dc = uVar6;
      FUN_1419efe00(DAT_1469f59d8,&local_718,uVar15,&local_5e8);
    }
LAB_1419f2979:
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,&local_718);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_718);
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x40) == 0)) {
      uVar11 = FUN_141eca160(local_350,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_438);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2d7,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_438[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_398,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_428);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d85106,"Unknown",0x2d7,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
      local_448[0] = local_428[0];
      goto LAB_1419f34ea;
    }
  }
  else if (uVar16 == 1) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    uVar15 = uVar15 >> 3 & 0x1f;
    if (DAT_1469f59d8 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      local_710 = (undefined8 *)0x0;
      local_6e8 = uVar3;
      uStack_6e4 = uVar4;
      uStack_6e0 = uVar5;
      uStack_6dc = uVar6;
      if (DAT_1469f5a08 == 0) {
LAB_1419f2b1f:
        (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,&local_6c8,&DAT_146ab6e78,&local_738);
        puVar12 = local_710;
        local_710 = local_6c8;
        local_6c8 = (undefined8 *)0x0;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar15 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar15);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6c8);
        if (local_710 == (undefined8 *)0x0) goto LAB_1419f2c01;
      }
      else {
        local_648 = *(undefined4 *)(param_1 + 0x84);
        uStack_644 = *(undefined4 *)(param_1 + 0x88);
        uStack_640 = *(undefined4 *)(param_1 + 0x8c);
        uStack_63c = *(undefined4 *)(param_1 + 0x90);
        local_638 = uVar2;
        uVar11 = FUN_1419e97d0(DAT_1469f5a08,local_668,uVar15,&local_648);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_710,uVar11);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_668);
        if (local_710 == (undefined8 *)0x0) goto LAB_1419f2b1f;
      }
      *(undefined4 *)(local_710 + 3) = local_6e8;
      *(undefined4 *)((longlong)local_710 + 0x1c) = uStack_6e4;
      *(undefined4 *)(local_710 + 4) = uStack_6e0;
      *(undefined4 *)((longlong)local_710 + 0x24) = uStack_6dc;
      *(undefined4 *)(local_710 + 5) = uVar2;
    }
    else {
      local_598 = *(undefined4 *)(param_1 + 0x94);
      local_758 = &local_738;
      local_5a8 = uVar3;
      uStack_5a4 = uVar4;
      uStack_5a0 = uVar5;
      uStack_59c = uVar6;
      FUN_1419ef220(DAT_1469f59d8,&local_710,uVar15,&local_5a8);
    }
LAB_1419f2c01:
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,&local_710);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_710);
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x48) == 0)) {
      uVar11 = FUN_141eca160(local_390,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_418);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2dc,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_418[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_388,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_408);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d85107,"Unknown",0x2dc,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
      local_448[0] = local_408[0];
      goto LAB_1419f34ea;
    }
  }
  else if (uVar16 == 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = *(undefined4 *)(param_1 + 0x90);
    uVar15 = uVar15 >> 3 & 0x1f;
    if (DAT_1469f59d8 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      local_708 = (undefined8 *)0x0;
      local_6e8 = uVar3;
      uStack_6e4 = uVar4;
      uStack_6e0 = uVar5;
      uStack_6dc = uVar6;
      if (DAT_1469f5a08 == 0) {
LAB_1419f2db0:
        (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,&local_6c0,&DAT_146ab6e78,&local_738);
        puVar12 = local_708;
        local_708 = local_6c0;
        local_6c0 = (undefined8 *)0x0;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar15 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar13 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar15);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6c0);
        if (local_708 == (undefined8 *)0x0) goto LAB_1419f2e92;
      }
      else {
        local_568 = *(undefined4 *)(param_1 + 0x84);
        uStack_564 = *(undefined4 *)(param_1 + 0x88);
        uStack_560 = *(undefined4 *)(param_1 + 0x8c);
        uStack_55c = *(undefined4 *)(param_1 + 0x90);
        local_558 = uVar2;
        uVar11 = FUN_1419e7530(DAT_1469f5a08,local_690,uVar15,&local_568);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_708,uVar11);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_690);
        if (local_708 == (undefined8 *)0x0) goto LAB_1419f2db0;
      }
      *(undefined4 *)(local_708 + 3) = local_6e8;
      *(undefined4 *)((longlong)local_708 + 0x1c) = uStack_6e4;
      *(undefined4 *)(local_708 + 4) = uStack_6e0;
      *(undefined4 *)((longlong)local_708 + 0x24) = uStack_6dc;
      *(undefined4 *)(local_708 + 5) = uVar2;
    }
    else {
      local_578 = *(undefined4 *)(param_1 + 0x94);
      local_758 = &local_738;
      local_588 = uVar3;
      uStack_584 = uVar4;
      uStack_580 = uVar5;
      uStack_57c = uVar6;
      FUN_1419eedd0(DAT_1469f59d8,&local_708,uVar15,&local_588);
    }
LAB_1419f2e92:
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x50,&local_708);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_708);
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x50) == 0)) {
      uVar11 = FUN_141eca160(local_370,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_3f8);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2e1,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_3f8[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_368,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,&local_658);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d851a4,"Unknown",0x2e1,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
      local_448[0] = CONCAT44(uStack_654,local_658);
      goto LAB_1419f34ea;
    }
  }
  else if (uVar16 == 4) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      uVar4 = *(undefined4 *)(param_1 + 0x88);
      uVar5 = *(undefined4 *)(param_1 + 0x8c);
      uVar6 = *(undefined4 *)(param_1 + 0x90);
      uVar15 = uVar15 >> 3 & 0x1f;
      if (DAT_1469f59d8 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x94);
        local_700 = (undefined8 *)0x0;
        local_6e8 = uVar3;
        uStack_6e4 = uVar4;
        uStack_6e0 = uVar5;
        uStack_6dc = uVar6;
        if (DAT_1469f5a08 == 0) {
LAB_1419f31b9:
          (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,&local_6b0,&DAT_146ab6e78,&local_738);
          puVar12 = local_700;
          local_700 = local_6b0;
          local_6b0 = (undefined8 *)0x0;
          if (puVar12 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar12 + 1);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              if ((*(char *)(puVar12 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
                LOCK();
                bVar22 = *(int *)((longlong)puVar12 + 0xc) == 0;
                if (bVar22) {
                  *(int *)((longlong)puVar12 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar22) {
                  uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar15 != 0) {
                    lVar13 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar13 + 8) = puVar12;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar15);
                }
              }
              else {
                (**(code **)*puVar12)(puVar12,1);
              }
            }
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6b0);
          if (local_700 == (undefined8 *)0x0) goto LAB_1419f329b;
        }
        else {
          local_508 = *(undefined4 *)(param_1 + 0x84);
          uStack_504 = *(undefined4 *)(param_1 + 0x88);
          uStack_500 = *(undefined4 *)(param_1 + 0x8c);
          uStack_4fc = *(undefined4 *)(param_1 + 0x90);
          local_4f8 = uVar2;
          uVar11 = FUN_1419e7a60(DAT_1469f5a08,local_680,uVar15,&local_508);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_700,uVar11);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_680);
          if (local_700 == (undefined8 *)0x0) goto LAB_1419f31b9;
        }
        *(undefined4 *)(local_700 + 3) = local_6e8;
        *(undefined4 *)((longlong)local_700 + 0x1c) = uStack_6e4;
        *(undefined4 *)(local_700 + 4) = uStack_6e0;
        *(undefined4 *)((longlong)local_700 + 0x24) = uStack_6dc;
        *(undefined4 *)(local_700 + 5) = uVar2;
      }
      else {
        local_518 = *(undefined4 *)(param_1 + 0x94);
        local_758 = &local_738;
        local_528 = uVar3;
        uStack_524 = uVar4;
        uStack_520 = uVar5;
        uStack_51c = uVar6;
        FUN_1419eeff0(DAT_1469f59d8,&local_700,uVar15,&local_528);
      }
LAB_1419f329b:
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,&local_700);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_700);
    }
    else {
      local_6f8[0] = 0xffffffff;
      local_38 = 0;
      local_6a0 = 0;
      local_698 = 0;
      (**(code **)(*(longlong *)(param_1 + 0x98) + 0x40))(local_338,&local_6a0,local_6f8);
      lVar13 = local_6a0;
      uVar4 = local_6f8[0];
      local_658 = *(undefined4 *)(param_1 + 0x84);
      uStack_654 = *(undefined4 *)(param_1 + 0x88);
      uStack_650 = *(undefined4 *)(param_1 + 0x8c);
      uStack_64c = *(undefined4 *)(param_1 + 0x90);
      uVar3 = *(undefined4 *)(param_1 + 0x94);
      uVar5 = (undefined4)local_698;
      local_6f0 = 0;
      if (DAT_1469f5a08 == 0) {
LAB_1419f3061:
        local_758 = local_338;
        local_740 = uVar4;
        local_748 = lVar13;
        local_750 = (undefined2 *)CONCAT44(local_750._4_4_,uVar5);
        (**(code **)(*DAT_146ab6358 + 0x548))(DAT_146ab6358,&local_6b8,&DAT_146ab6e78,&local_738);
        lVar18 = local_6b8;
        local_6f0 = local_6b8;
        local_6b8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6b8);
        if (lVar18 != 0) goto LAB_1419f30b6;
      }
      else {
        local_740 = local_6f8[0];
        local_748 = local_6a0;
        local_758 = local_338;
        local_750 = (undefined2 *)CONCAT44(local_750._4_4_,(undefined4)local_698);
        local_548 = local_658;
        uStack_544 = uStack_654;
        uStack_540 = uStack_650;
        uStack_53c = uStack_64c;
        local_538 = uVar3;
        uVar11 = FUN_1419e7f50(DAT_1469f5a08,local_688,*(uint *)(param_1 + 0x68) >> 3 & 0x1f,
                               &local_548);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_6f0,uVar11);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_688);
        lVar18 = local_6f0;
        if (local_6f0 == 0) goto LAB_1419f3061;
LAB_1419f30b6:
        *(undefined4 *)(lVar18 + 0x18) = local_658;
        *(undefined4 *)(lVar18 + 0x1c) = uStack_654;
        *(undefined4 *)(lVar18 + 0x20) = uStack_650;
        *(undefined4 *)(lVar18 + 0x24) = uStack_64c;
        *(undefined4 *)(lVar18 + 0x28) = uVar3;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,&local_6f0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6f0);
      if (local_6a0 != 0) {
        FMemory::Free();
      }
    }
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x58) == 0)) {
      uVar11 = FUN_141eca160(local_360,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_3e0);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2f4,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_3e0[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_358,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_380);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d851a5,"Unknown",0x2f4,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
      local_448[0] = local_380[0];
      goto LAB_1419f34ea;
    }
  }
  else if (uVar16 == 5) {
    uVar15 = uVar15 >> 3 & 0x1f;
    if (DAT_1469f59d8 == 0) {
      local_4c8 = *(undefined4 *)(param_1 + 0x84);
      uStack_4c4 = *(undefined4 *)(param_1 + 0x88);
      uStack_4c0 = *(undefined4 *)(param_1 + 0x8c);
      uStack_4bc = *(undefined4 *)(param_1 + 0x90);
      local_4b8 = *(undefined4 *)(param_1 + 0x94);
      FUN_1419e6e40(local_6a8,uVar15,&local_4c8,&local_738);
    }
    else {
      local_758 = &local_738;
      local_4e8 = *(undefined4 *)(param_1 + 0x84);
      uStack_4e4 = *(undefined4 *)(param_1 + 0x88);
      uStack_4e0 = *(undefined4 *)(param_1 + 0x8c);
      uStack_4dc = *(undefined4 *)(param_1 + 0x90);
      local_4d8 = *(undefined4 *)(param_1 + 0x94);
      FUN_1419eec20(DAT_1469f59d8,local_6a8,uVar15,&local_4e8);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,local_6a8);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_6a8);
    if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0x60) == 0)) {
      uVar11 = FUN_141eca160(local_460,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_3c8);
      ppvVar17 = (void **)&DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar12;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x2f9,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]",puVar21);
      if (local_3c8[0] != 0) {
        FMemory::Free();
      }
      uVar11 = FUN_141eca160(local_348,*(uint *)(param_1 + 0x68) >> 3 & 0x1f);
      puVar12 = (undefined8 *)FName::ToString(uVar11,local_3b8);
      if (*(int *)(puVar12 + 1) != 0) {
        ppvVar17 = (void **)*puVar12;
      }
      local_758 = ppvVar17;
      FDebug::AssertFailed
                (&DAT_144d851a6,"Unknown",0x2f9,
                 L"FShaderResource::SerializeShaderCode can\'t find shader code for: [%s]");
      local_448[0] = local_3b8[0];
      goto LAB_1419f34ea;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  local_470[0] = local_738;
  if (*(char *)(param_1 + 0xb4) != '\0') {
    FUN_141a08660(param_1 + 0x84);
    *(undefined1 *)(param_1 + 0xb4) = 0;
    local_470[0] = local_738;
  }
LAB_1419f3532:
  if (local_470[0] != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419f3560 FUN_1419f3560 body=337 status=ok
// SIG undefined FUN_1419f3560(void)

void FUN_1419f3560(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (DAT_1469f59d4 == 0) {
    uVar3 = FEngineVersion::Current();
    DAT_1469f59d4 = FEngineVersionBase::GetChangelist(uVar3);
  }
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f6060) && (_Init_thread_header(&DAT_1469f6060), DAT_1469f6060 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.Enabled");
    lVar5 = lVar7;
    if (plVar6 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469f6058 = lVar5;
    _Init_thread_footer(&DAT_1469f6060);
  }
  lVar5 = DAT_1469f6058;
  if (DAT_1469f6058 == 0) goto LAB_1419f3602;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar2 == DAT_1468c21c0) goto LAB_1419f35fa;
  }
  else {
LAB_1419f35fa:
    lVar4 = lVar7;
  }
  if (*(int *)(lVar4 + lVar5) != 0) {
    return;
  }
LAB_1419f3602:
  lVar5 = DAT_1469f59d8;
  if ((DAT_1469f59e0 != 0) && (lVar4 = operator_new(0xd20), lVar5 = lVar7, lVar4 != 0)) {
    lVar5 = FUN_1419d67c0(lVar4,param_1,param_2);
  }
  DAT_1469f59d8 = lVar5;
  return;
}



// FUNCTION 1419f36c0 FUN_1419f36c0 body=348 status=ok
// SIG undefined FUN_1419f36c0(void)

void FUN_1419f36c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  short *psVar5;
  undefined4 local_res10 [2];
  longlong local_18;
  ulonglong local_10;
  
  uVar2 = DAT_1469f59c8;
  if (DAT_1469f5a08 != 0) {
    uVar2 = FEngineVersion::Current();
    local_res10[0] = FEngineVersionBase::GetChangelist(uVar2);
    psVar5 = &DAT_143f3eda8;
    if (DAT_1468e2418 != 0) {
      psVar5 = DAT_1468e2410;
    }
    local_10 = 0;
    local_18 = 0;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (psVar5[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_10 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,psVar5,(longlong)(int)uVar3 * 2);
    }
    FConfigCacheIni::GetInt
              (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
               PTR_u_GameVersion_1464c0df0,local_res10,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    FPipelineFileCache::Initialize(local_res10[0]);
    lVar4 = operator_new(0x170);
    uVar2 = 0;
    if (lVar4 != 0) {
      uVar2 = FUN_1419d7a60(lVar4,param_1);
    }
  }
  DAT_1469f59c8 = uVar2;
  DAT_146ab63a8 = (longlong *)FQueuedThreadPool::Allocate();
  uVar1 = FUN_1416a58c0();
  (**(code **)*DAT_146ab63a8)(DAT_146ab63a8,uVar1,0x20000,5);
                    /* WARNING: Could not recover jumptable at 0x0001419f3818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab63a8 + 0x38))(DAT_146ab63a8,2,1);
  return;
}



// FUNCTION 1419f3820 FUN_1419f3820 body=39 status=ok
// SIG undefined FUN_1419f3820(void)

void FUN_1419f3820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d8dea0;
    return;
  }
  return;
}



// FUNCTION 1419f3850 FUN_1419f3850 body=11 status=ok
// SIG undefined FUN_1419f3850(void)

void FUN_1419f3850(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackX_20 [8];
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  cVar3 = IsInRenderingThread();
  if (cVar3 == '\0') {
    FScopedEvent::FScopedEvent(auStackX_20);
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144ede9f8;
    *(undefined1 *)(plVar8 + 4) = 0;
    plVar8[5] = 0;
    plVar8[3] = (longlong)auStackX_20;
    plVar8[2] = (longlong)param_1;
    lVar6 = plVar8[5];
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_141ee59f0(plVar8,0,0xff,1,0);
    if (lVar6 != 0) {
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
    FScopedEvent::~FScopedEvent(auStackX_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ee3b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 1419f3860 InitializeShaderTypes body=303 status=ok
// SIG undefined InitializeShaderTypes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void InitializeShaderTypes(void)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_141a00350();
  local_68 = 0;
  local_78 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  DAT_1469f59c2 = 1;
  DAT_1469f59c1 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_70 = 0;
  for (puVar1 = DAT_1469f5de0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    local_c0 = *(undefined8 *)(puVar1[2] + 8);
    FUN_140800100(&local_b8,local_c8,&local_c0,0);
  }
  DAT_1469f59c0 = 1;
  local_70 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b8);
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_68,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419f3990 FUN_1419f3990 body=575 status=ok
// SIG undefined FUN_1419f3990(void)

undefined8 * FUN_1419f3990(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_38;
  undefined8 **local_30;
  
  local_res10 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb8));
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xcc8,local_res8,local_res10);
  local_res18[0] = (undefined8 *)0x0;
  puVar2 = local_res18[0];
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xcc8) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = local_res18[0];
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0xfa8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined1 *)puVar2 = 0;
      *(undefined4 *)((longlong)puVar2 + 4) = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar2 + 5) = 0;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar2 + 8) = 0;
      puVar2[9] = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0xb) = 0;
      puVar2[0xc] = 0;
      *(undefined4 *)(puVar2 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0xe) = 0;
      puVar2[0xf] = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0x11) = 0;
      puVar2[0x12] = 0;
      *(undefined4 *)(puVar2 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0x14) = 0;
      puVar2[0x15] = 0;
      *(undefined4 *)(puVar2 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0x17) = 0;
      puVar2[0x18] = 0;
      *(undefined4 *)(puVar2 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar2 + 0x1a) = 0;
      FUN_1419d74d0(puVar2 + 0x1b);
      *(undefined1 *)(puVar2 + 0x1f0) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xf84) = 0;
      _guard_xfg_dispatch_icall_nop(puVar2 + 0x34,0xff,0x180);
      _guard_xfg_dispatch_icall_nop(puVar2 + 100,0xff,0xc00);
      _guard_xfg_dispatch_icall_nop(puVar2 + 0x1e4,0,0x60);
      *(undefined2 *)(puVar2 + 500) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xfa4) = 0;
      puVar2[0x1f2] = 0;
      puVar2[0x1f1] = 0;
      puVar2[499] = 0;
      local_res18[0] = puVar2;
    }
    local_38 = &local_res10;
    local_30 = local_res18;
    FUN_1405c0510(param_1 + 0xcc8,local_res8,&local_38,0);
  }
  else {
    local_res18[0] = (undefined8 *)*puVar1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb8));
  return local_res18[0];
}



// FUNCTION 1419f3bd0 InternalCreateRenderTarget body=233 status=ok
// SIG undefined InternalCreateRenderTarget(void)

longlong *
FShaderCache::InternalCreateRenderTarget(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res10 [2];
  longlong local_res18;
  longlong local_28;
  longlong *local_20;
  
  uVar1 = 0;
  *param_2 = 0;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    TSet<TTuple<FShaderRenderTargetKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderRenderTargetKey,FRHITexture_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x1f0,local_res10);
    if ((local_res10[0] != -1) &&
       (lVar2 = (longlong)local_res10[0] * 0x40 + *(longlong *)(param_1 + 0x1f0), lVar2 != 0)) {
      uVar1 = *(undefined8 *)(lVar2 + 0x30);
    }
    TRefCountPtr<FRHITexture>::operator=(param_2,uVar1);
    if (*param_2 == 0) {
      uVar1 = FUN_1419f3f30(param_1,local_res10,param_3,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,uVar1);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res10);
      local_res18 = *param_2;
      local_20 = &local_res18;
      local_28 = param_3;
      FUN_1419d0f40(param_1 + 0x1f0,local_res10,&local_28,0);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1419f3cc0 FUN_1419f3cc0 body=614 status=ok
// SIG undefined FUN_1419f3cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1419f3cc0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  char local_b8;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  TSet<TTuple<FShaderResourceKey,FShaderResourceViewBinding>,TDefaultMapHashableKeyFuncs<FShaderResourceKey,FShaderResourceViewBinding,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x150,local_a8);
  uVar7 = 0;
  if ((local_a8[0] == -1) ||
     (lVar6 = (longlong)local_a8[0] * 0x50 + *(longlong *)(param_1 + 0x150), lVar6 == 0)) {
    local_a0 = 0;
    uStack_98 = 0;
  }
  else {
    local_a0 = *(undefined8 *)(lVar6 + 0x30);
    uStack_98 = *(undefined8 *)(lVar6 + 0x38);
    uVar7 = *(undefined8 *)(lVar6 + 0x40);
    local_90 = uVar7;
  }
  plVar5 = param_2 + 1;
  *param_2 = 0;
  *plVar5 = 0;
  param_2[2] = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_a0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5,uStack_98);
  TRefCountPtr<FRHITexture>::operator=(param_2 + 2,uVar7);
  if (*param_2 == 0) {
    if (*(char *)(param_3 + 0x1d) == '\x02') {
      uVar7 = FUN_1419f3f30(param_1,local_a8,param_3,1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 2,uVar7);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_a8);
      cVar1 = *(char *)(param_3 + 0x2c);
      plVar5 = (longlong *)param_2[2];
      if (cVar1 == '\0') {
        uVar2 = *(undefined1 *)(param_3 + 0x24);
        uVar7 = (**(code **)(*plVar5 + 8))();
        local_c8 = CONCAT31(local_c8._1_3_,uVar2);
        (**(code **)(*DAT_146ab6358 + 0x658))(DAT_146ab6358,local_a8,&DAT_146ab6e78,uVar7);
      }
      else {
        iVar3 = *(int *)(param_3 + 0x24);
        uVar8 = *(int *)((longlong)plVar5 + 0x34) - iVar3;
        uVar4 = *(uint *)(param_3 + 0x28);
        uVar9 = uVar8;
        if ((uVar4 != 0) && (uVar9 = uVar4, uVar8 <= uVar4)) {
          uVar9 = uVar8;
        }
        uVar7 = (**(code **)(*plVar5 + 8))();
        local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,(char)uVar9);
        local_c8 = CONCAT31(local_c8._1_3_,(char)iVar3);
        local_b8 = cVar1;
        (**(code **)(*DAT_146ab6358 + 0x650))(DAT_146ab6358,local_a8,&DAT_146ab6e78,uVar7);
      }
    }
    else {
      if (*(char *)(param_3 + 0x1d) != '\b') {
        return param_2;
      }
      local_c0 = &local_88;
      local_c8 = *(undefined4 *)(param_3 + 8);
      local_74 = _DAT_1468b5d78;
      uStack_70 = uRam00000001468b5d7c;
      uStack_6c = uRam00000001468b5d80;
      uStack_68 = uRam00000001468b5d84;
      local_78 = 1;
      local_88 = 0;
      uStack_80 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*DAT_146ab6358 + 0x490))
                (DAT_146ab6358,local_a8,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5,local_a8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
      local_c0 = (undefined8 *)CONCAT71(local_c0._1_7_,*(undefined1 *)(param_3 + 0x1c));
      local_c8 = *(undefined4 *)(param_3 + 0xc);
      (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_a8,&DAT_146ab6e78,*plVar5);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
  }
  return param_2;
}



// FUNCTION 1419f3f30 FUN_1419f3f30 body=729 status=ok
// SIG undefined FUN_1419f3f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1419f3f30(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar4 = 0;
  if (param_4 != '\0') {
    TSet<TTuple<FShaderTextureKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderTextureKey,FRHITexture_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x100),local_a8);
    if ((local_a8[0] != -1) &&
       (lVar3 = (longlong)local_a8[0] * 0x30 + *(longlong *)(param_1 + 0x100), lVar3 != 0)) {
      lVar4 = *(longlong *)(lVar3 + 0x20);
    }
  }
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    if (*param_2 != 0) {
      return param_2;
    }
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  cVar1 = *(char *)(param_3 + 0x1d);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  if (cVar1 == '\x02') {
    local_b0 = &local_78;
    local_b8 = (undefined8 *)(CONCAT44(local_b8._4_4_,uVar2) & 0xfffffffffffdffff);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_3 + 0x18));
    local_c8 = *(undefined4 *)(param_3 + 0x14);
    local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_3 + 0x1c));
    local_d8 = *(undefined4 *)(param_3 + 8);
    (**(code **)(*DAT_146ab6358 + 0x5e0))
              (DAT_146ab6358,&local_80,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
    TRefCountPtr<FRHITexture>::operator=(param_2,local_80);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
  }
  else if (cVar1 == '\x03') {
    local_b0 = &local_78;
    local_b8 = (undefined8 *)(CONCAT44(local_b8._4_4_,uVar2) & 0xfffffffffffdffff);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_3 + 0x14));
    local_c8 = CONCAT31(local_c8._1_3_,*(undefined1 *)(param_3 + 0x1c));
    local_d0 = *(undefined4 *)(param_3 + 0xc);
    local_d8 = *(undefined4 *)(param_3 + 8);
    (**(code **)(*DAT_146ab6358 + 0x5f8))
              (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
    TRefCountPtr<FRHITexture>::operator=(param_2,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  }
  else if (cVar1 == '\x04') {
    local_c0 = &local_78;
    local_d0 = *(undefined4 *)(param_3 + 0x14);
    local_d8 = CONCAT31(local_d8._1_3_,*(undefined1 *)(param_3 + 0x1c));
    local_c8 = uVar2 & 0xfffdffff;
    (**(code **)(*DAT_146ab6358 + 0x660))
              (DAT_146ab6358,&local_90,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
    TRefCountPtr<FRHITexture>::operator=(param_2,local_90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  }
  else if (cVar1 == '\x06') {
    local_b0 = &local_78;
    local_b8 = (undefined8 *)(CONCAT44(local_b8._4_4_,uVar2) & 0xfffffffffffdffff);
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_3 + 0x14));
    local_c8 = CONCAT31(local_c8._1_3_,*(undefined1 *)(param_3 + 0x1c));
    local_d0 = *(undefined4 *)(param_3 + 0xc);
    local_d8 = *(undefined4 *)(param_3 + 8);
    (**(code **)(*DAT_146ab6358 + 0x5f0))
              (DAT_146ab6358,&local_98,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
    TRefCountPtr<FRHITexture>::operator=(param_2,local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  }
  else if (cVar1 == '\a') {
    local_b8 = &local_78;
    local_c8 = *(undefined4 *)(param_3 + 0x14);
    local_c0 = (undefined8 *)(CONCAT44(local_c0._4_4_,uVar2) & 0xfffffffffffdffff);
    local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_3 + 0x1c));
    local_d8 = *(undefined4 *)(param_3 + 0xc);
    (**(code **)(*DAT_146ab6358 + 0x668))
              (DAT_146ab6358,&local_a0,&DAT_146ab6e78,*(undefined4 *)(param_3 + 4));
    TRefCountPtr<FRHITexture>::operator=(param_2,local_a0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a0);
  }
  return param_2;
}



// FUNCTION 1419f4210 InternalLogBlendState body=135 status=ok
// SIG undefined InternalLogBlendState(void)

void FShaderCache::InternalLogBlendState
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    local_res20 = param_4;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
    local_20 = &local_res20;
    local_18 = param_3;
    FUN_1419cd940(param_1 + 0x988,local_28,&local_20,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419f42a0 InternalLogBoundShaderState body=197 status=ok
// SIG undefined InternalLogBoundShaderState(void)

void FShaderCache::InternalLogBoundShaderState
               (longlong param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  if (((param_3 == *(int *)(param_1 + 0x2b0)) && (*(char *)(param_2 + 0xfa1) == '\0')) &&
     (*(char *)(param_2 + 4000) == '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fbd70(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return;
}



// FUNCTION 1419f4370 InternalLogDepthStencilState body=135 status=ok
// SIG undefined InternalLogDepthStencilState(void)

void FShaderCache::InternalLogDepthStencilState
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    local_res20 = param_4;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
    local_20 = &local_res20;
    local_18 = param_3;
    FUN_1419cdb00(param_1 + 0xa28,local_28,&local_20,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419f4400 FUN_1419f4400 body=1909 status=ok
// SIG undefined FUN_1419f4400(void)

void FUN_1419f4400(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  uint local_78;
  int local_74;
  uint *local_70;
  undefined1 local_68 [4];
  uint local_64;
  uint local_60;
  uint uStack_5c;
  undefined4 local_58;
  uint *local_50;
  uint *local_48;
  
  if (((DAT_1469f59ec != 0) && (*(char *)(param_2 + 4000) == '\0')) &&
     (*(int *)(param_2 + 0xfa4) == 0)) {
    puVar4 = (uint *)0x0;
    SRWLock = (PSRWLOCK)(param_1 + 0xcb0);
    local_74 = 0;
    AcquireSRWLockShared(SRWLock);
    *(undefined1 *)(param_2 + 0xf80) = param_4;
    if ((0x1b < DAT_146ab62cc) || ((0x8c51800U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) {
      *(undefined4 *)(param_2 + 0xd8) = param_3;
      *(undefined4 *)(param_2 + 0x198) = 0;
    }
    local_70 = (uint *)(param_2 + 0x1a0);
    plVar11 = (longlong *)(param_1 + 0x380);
    TSet<TTuple<FShaderDrawKey,int>,TDefaultMapKeyFuncs<FShaderDrawKey,int,0>,FDefaultSetAllocator>
    ::FindId(plVar11,&local_78,local_70);
    puVar5 = puVar4;
    if (local_78 != 0xffffffff) {
      puVar5 = (uint *)((longlong)(int)local_78 * 0xdf8 + *plVar11);
    }
    uVar10 = 0xffffffff;
    puVar6 = puVar5 + 0x37a;
    if (puVar5 == (uint *)0x0) {
      puVar6 = puVar4;
    }
    if (puVar6 == (uint *)0x0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *puVar6;
    }
    if ((*(uint *)(param_1 + 0x2b0) < 0x1c) &&
       ((0x8c51800U >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
      uVar2 = *(uint *)(param_2 + 0x19c);
    }
    else {
      TSet<TTuple<FShaderCacheGraphicsPipelineState,int>,TDefaultMapKeyFuncs<FShaderCacheGraphicsPipelineState,int,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x560),&local_78,param_2 + 0xd8);
      puVar5 = puVar4;
      if (local_78 != 0xffffffff) {
        puVar5 = (uint *)((longlong)(int)local_78 * 0xd4 + *(longlong *)(param_1 + 0x560));
      }
      puVar6 = puVar5 + 0x32;
      if (puVar5 == (uint *)0x0) {
        puVar6 = puVar4;
      }
      if (puVar6 == (uint *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *puVar6;
      }
    }
    if ((int)uVar8 < 0) {
      ReleaseSRWLockShared(SRWLock);
      AcquireSRWLockExclusive(SRWLock);
      local_74 = 1;
      TSet<TTuple<FShaderDrawKey,int>,TDefaultMapKeyFuncs<FShaderDrawKey,int,0>,FDefaultSetAllocator>
      ::FindId(plVar11,&local_78,param_2 + 0x1a0);
      puVar5 = puVar4;
      if (local_78 != 0xffffffff) {
        puVar5 = (uint *)((longlong)(int)local_78 * 0xdf8 + *plVar11);
      }
      puVar6 = puVar5 + 0x37a;
      if (puVar5 == (uint *)0x0) {
        puVar6 = puVar4;
      }
      if (puVar6 == (uint *)0x0) {
        local_78 = *(uint *)(param_1 + 0x3d8);
        lVar9 = (longlong)(int)local_78;
        *(uint *)(param_1 + 0x3d8) = local_78 + 1;
        if (*(int *)(param_1 + 0x3dc) < (int)(local_78 + 1)) {
          TArray<FShaderDrawKey,FDefaultAllocator>::ResizeGrow(param_1 + 0x3d0,local_78);
        }
        puVar5 = local_70;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar9 * 0xde8 + *(longlong *)(param_1 + 0x3d0)),local_70,0xde8);
        local_48 = &local_78;
        local_50 = puVar5;
        FUN_1419d09e0(plVar11,&local_70,&local_50,0);
        uVar8 = local_78;
      }
      else {
        uVar8 = *puVar6;
      }
    }
    if ((int)uVar2 < 0) {
      if (local_74 == 0) {
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        local_74 = 1;
      }
      if ((*(uint *)(param_1 + 0x2b0) < 0x1c) &&
         ((0x8c51800U >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
        uVar2 = *(uint *)(param_2 + 0x19c);
      }
      else {
        uVar2 = FUN_1419e2680(param_1 + 0x560,param_2 + 0xd8);
      }
    }
    plVar11 = (longlong *)(param_1 + 0x500);
    local_58 = CONCAT31(local_58._1_3_,1);
    if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
      lVar9 = *(longlong *)(param_1 + 0x540);
      if (*(longlong *)(param_1 + 0x540) == 0) {
        lVar9 = param_1 + 0x538;
      }
      uVar3 = *(uint *)(lVar9 + ((longlong)(int)(uVar2 ^ uVar8) &
                                (longlong)*(int *)(param_1 + 0x548) - 1U) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar5 = (uint *)(*plVar11 + (longlong)(int)uVar3 * 0x18);
          if ((*(uint *)(*plVar11 + (longlong)(int)uVar3 * 0x18) == uVar2) && (puVar5[1] == uVar8))
          {
            if (uVar3 != 0xffffffff) goto LAB_1419f4708;
            break;
          }
          uVar3 = puVar5[4];
        } while (uVar3 != 0xffffffff);
      }
    }
    puVar5 = puVar4;
LAB_1419f4708:
    puVar6 = puVar5 + 3;
    if (puVar5 == (uint *)0x0) {
      puVar6 = puVar4;
    }
    if (puVar6 != (uint *)0x0) {
      uVar10 = *puVar6;
    }
    local_60 = uVar2;
    uStack_5c = uVar8;
    if ((int)uVar10 < 0) {
      if (local_74 == 0) {
        local_78 = uVar10;
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        local_74 = 1;
      }
      if (*(int *)(param_1 + 0x508) != *(int *)(param_1 + 0x534)) {
        lVar9 = *(longlong *)(param_1 + 0x540);
        if (*(longlong *)(param_1 + 0x540) == 0) {
          lVar9 = param_1 + 0x538;
        }
        uVar10 = *(uint *)(lVar9 + ((longlong)(int)(uStack_5c ^ local_60) &
                                   (longlong)*(int *)(param_1 + 0x548) - 1U) * 4);
        if (uVar10 != 0xffffffff) {
          do {
            puVar5 = (uint *)(*plVar11 + (longlong)(int)uVar10 * 0x18);
            if ((*(uint *)(*plVar11 + (longlong)(int)uVar10 * 0x18) == local_60) &&
               (puVar5[1] == uStack_5c)) {
              if (uVar10 != 0xffffffff) goto LAB_1419f47b8;
              break;
            }
            uVar10 = puVar5[4];
          } while (uVar10 != 0xffffffff);
        }
      }
      puVar5 = puVar4;
LAB_1419f47b8:
      puVar6 = puVar5 + 3;
      if (puVar5 == (uint *)0x0) {
        puVar6 = puVar4;
      }
      if (puVar6 == (uint *)0x0) {
        local_78 = *(uint *)(param_1 + 0x558);
        lVar9 = (longlong)(int)local_78;
        *(uint *)(param_1 + 0x558) = local_78 + 1;
        if (*(int *)(param_1 + 0x55c) < (int)(local_78 + 1)) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x550,local_78);
        }
        lVar1 = *(longlong *)(param_1 + 0x550);
        *(ulonglong *)(lVar1 + lVar9 * 0xc) = CONCAT44(uStack_5c,local_60);
        *(undefined4 *)(lVar1 + lVar9 * 0xc + 8) = local_58;
        local_50 = &local_60;
        local_48 = &local_78;
        FUN_1419d0ca0(plVar11,&local_70,&local_50,0);
        uVar10 = local_78;
      }
      else {
        uVar10 = *puVar6;
      }
    }
    plVar11 = (longlong *)(param_1 + 0x610);
    if (*(int *)(param_1 + 0x618) != *(int *)(param_1 + 0x644)) {
      lVar9 = *(longlong *)(param_1 + 0x650);
      if (*(longlong *)(param_1 + 0x650) == 0) {
        lVar9 = param_1 + 0x648;
      }
      uVar8 = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x658) - 1U &
                                (longlong)(int)*(uint *)(param_1 + 0xb68)) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar8 * 0x60 + *plVar11);
          if (*puVar5 == *(uint *)(param_1 + 0xb68)) {
            if (uVar8 != 0xffffffff) goto LAB_1419f48a5;
            break;
          }
          uVar8 = puVar5[0x16];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar5 = puVar4;
LAB_1419f48a5:
    puVar6 = puVar5 + 2;
    if (puVar5 == (uint *)0x0) {
      puVar6 = puVar4;
    }
    local_78 = uVar10;
    if (puVar6 == (uint *)0x0) {
      if (local_74 == 0) {
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        local_74 = 1;
      }
      if (*(int *)(param_1 + 0x618) != *(int *)(param_1 + 0x644)) {
        uVar8 = *(uint *)(param_1 + 0xb68);
        lVar9 = *(longlong *)(param_1 + 0x650);
        if (*(longlong *)(param_1 + 0x650) == 0) {
          lVar9 = param_1 + 0x648;
        }
        uVar2 = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x658) - 1U & (longlong)(int)uVar8)
                                  * 4);
        if (uVar2 != 0xffffffff) {
          do {
            puVar6 = (uint *)((longlong)(int)uVar2 * 0x60 + *plVar11);
            if (*puVar6 == uVar8) {
              if ((uVar2 != 0xffffffff) && (puVar6 != (uint *)0x0)) goto LAB_1419f496d;
              break;
            }
            uVar2 = puVar6[0x16];
          } while (uVar2 != 0xffffffff);
        }
      }
      local_70 = (uint *)(param_1 + 0xb68);
      TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>(plVar11,&local_64,&local_70,0);
      puVar6 = (uint *)((longlong)(int)local_64 * 0x60 + *plVar11);
LAB_1419f496d:
      puVar6 = puVar6 + 2;
    }
    if (puVar6[2] != puVar6[0xd]) {
      puVar5 = *(uint **)(puVar6 + 0x10);
      if (*(uint **)(puVar6 + 0x10) == (uint *)0x0) {
        puVar5 = puVar6 + 0xe;
      }
      uVar8 = puVar5[(longlong)(int)puVar6[0x12] - 1U & (longlong)(int)*(uint *)(param_2 + 0xdc)];
      if (uVar8 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar8 * 0x60 + *(longlong *)puVar6);
          if (*puVar5 == *(uint *)(param_2 + 0xdc)) {
            if (uVar8 != 0xffffffff) goto LAB_1419f49d5;
            break;
          }
          uVar8 = puVar5[0x16];
        } while (uVar8 != 0xffffffff);
      }
    }
    puVar5 = puVar4;
LAB_1419f49d5:
    puVar7 = puVar5 + 2;
    if (puVar5 == (uint *)0x0) {
      puVar7 = puVar4;
    }
    if (puVar7 == (uint *)0x0) {
      if (local_74 == 0) {
        ReleaseSRWLockShared(SRWLock);
        AcquireSRWLockExclusive(SRWLock);
        local_74 = 1;
      }
      local_64 = *(uint *)(param_2 + 0xdc);
      if (puVar6[2] != puVar6[0xd]) {
        puVar4 = *(uint **)(puVar6 + 0x10);
        if (*(uint **)(puVar6 + 0x10) == (uint *)0x0) {
          puVar4 = puVar6 + 0xe;
        }
        uVar8 = puVar4[(longlong)(int)puVar6[0x12] - 1U & (longlong)(int)local_64];
        if (uVar8 != 0xffffffff) {
          do {
            puVar7 = (uint *)((longlong)(int)uVar8 * 0x60 + *(longlong *)puVar6);
            if (*puVar7 == local_64) {
              if ((uVar8 != 0xffffffff) && (puVar7 != (uint *)0x0)) goto LAB_1419f4aa1;
              break;
            }
            uVar8 = puVar7[0x16];
          } while (uVar8 != 0xffffffff);
        }
      }
      local_50 = &local_64;
      FUN_1419cd360(puVar6,&local_70,&local_50,0);
      puVar7 = (uint *)((longlong)(int)local_70 * 0x60 + *(longlong *)puVar6);
LAB_1419f4aa1:
      puVar7 = puVar7 + 2;
    }
    if (puVar7[2] != puVar7[0xd]) {
      puVar4 = *(uint **)(puVar7 + 0x10);
      if (*(uint **)(puVar7 + 0x10) == (uint *)0x0) {
        puVar4 = puVar7 + 0xe;
      }
      uVar8 = puVar4[(longlong)(int)puVar7[0x12] - 1U & (longlong)(int)uVar10];
      if (uVar8 != 0xffffffff) {
        do {
          if (*(uint *)(*(longlong *)puVar7 + (longlong)(int)uVar8 * 0xc) == uVar10) {
            if (uVar8 != 0xffffffff) goto LAB_1419f4b31;
            break;
          }
          uVar8 = *(uint *)(*(longlong *)puVar7 + 4 + (longlong)(int)uVar8 * 0xc);
        } while (uVar8 != 0xffffffff);
      }
    }
    if (local_74 == 0) {
      ReleaseSRWLockShared(SRWLock);
      AcquireSRWLockExclusive(SRWLock);
      local_74 = 1;
    }
    FUN_14044be50(puVar7,&local_70,&local_78,local_68);
LAB_1419f4b31:
    if (local_74 == 0) {
      ReleaseSRWLockShared(SRWLock);
      return;
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}



// FUNCTION 1419f4b80 InternalLogRasterizerState body=135 status=ok
// SIG undefined InternalLogRasterizerState(void)

void FShaderCache::InternalLogRasterizerState
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    local_res20 = param_4;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
    local_20 = &local_res20;
    local_18 = param_3;
    FUN_1419cdef0(param_1 + 0x9d8,local_28,&local_20,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419f4c10 InternalLogSRV body=371 status=ok
// SIG undefined InternalLogSRV(void)

void FShaderCache::InternalLogSRV
               (longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5,
               undefined1 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  int local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  longlong local_28;
  uint local_20;
  undefined1 local_1c;
  undefined1 uStack_1b;
  
  if ((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) {
    local_res10 = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x60,local_78);
    lVar1 = 0;
    if (local_78[0] != -1) {
      lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)local_78[0] * 0x18;
    }
    puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 8) * 0x30 + *(longlong *)(param_1 + 0x490));
    local_48 = *puVar2;
    local_40 = puVar2[1];
    local_38 = puVar2[2];
    local_30 = *(undefined4 *)(puVar2 + 3);
    local_2c = *(undefined2 *)((longlong)puVar2 + 0x1c);
    local_28 = (ulonglong)param_4 << 0x20;
    local_20 = (uint)param_5;
    local_70 = &local_res10;
    local_68 = &local_48;
    _local_1c = CONCAT11(1,param_6);
    FUN_1419cedd0(param_1 + 0xb0,local_78,&local_70,0);
    local_70 = &local_48;
    local_50 = 0;
    local_68 = &local_60;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1419d14f0(param_1 + 0x150,local_78,&local_70,0);
    FUN_1419e2920(param_1 + 0x440,&local_48);
  }
  return;
}



// FUNCTION 1419f4d90 InternalLogSRV body=239 status=ok
// SIG undefined InternalLogSRV(void)

void FShaderCache::InternalLogSRV
               (longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined1 param_5)

{
  undefined8 local_res10;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  if ((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) {
    local_38._4_4_ = *(undefined4 *)(param_3 + 0x18);
    local_30 = *(undefined4 *)(param_3 + 0x1c);
    local_1c = param_5;
    local_60 = &local_res10;
    local_58 = &local_38;
    local_38._0_4_ = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0x100;
    local_1b = 8;
    local_res10 = param_2;
    local_2c = param_4;
    FUN_1419cedd0(param_1 + 0xb0,local_68,&local_60,0);
    local_60 = &local_38;
    local_40 = 0;
    local_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1419d14f0(param_1 + 0x150,local_68,&local_60,0);
    FUN_1419e2920(param_1 + 0x440,&local_38);
  }
  return;
}



// FUNCTION 1419f4e80 FUN_1419f4e80 body=352 status=ok
// SIG undefined FUN_1419f4e80(void)

void FUN_1419f4e80(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 local_res20;
  int local_38;
  int local_34;
  undefined1 local_30 [8];
  undefined8 *local_28;
  int *local_20;
  
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    plVar1 = (longlong *)(param_1 + 0x4a0);
    local_res20 = param_4;
    TSet<TTuple<FSamplerStateInitializerRHI,int>,FSamplerStateInitializerRHIKeyFuncs,FDefaultSetAllocator>
    ::FindId(plVar1,&local_38);
    piVar3 = (int *)0x0;
    if (local_38 != -1) {
      piVar3 = (int *)(*plVar1 + (longlong)local_38 * 0x28);
    }
    piVar2 = piVar3 + 7;
    if (piVar3 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      local_38 = *(int *)(param_1 + 0x4f8);
      lVar5 = (longlong)local_38;
      *(int *)(param_1 + 0x4f8) = local_38 + 1;
      if (*(int *)(param_1 + 0x4fc) < local_38 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x4f0,local_38);
      }
      puVar4 = (undefined1 *)(lVar5 * 0x1c + *(longlong *)(param_1 + 0x4f0));
      *puVar4 = *(undefined1 *)param_3;
      puVar4[1] = *(undefined1 *)((longlong)param_3 + 1);
      puVar4[2] = *(undefined1 *)((longlong)param_3 + 2);
      puVar4[3] = *(undefined1 *)((longlong)param_3 + 3);
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)((longlong)param_3 + 4);
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_3 + 1);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(param_3 + 2);
      *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
      puVar4[0x18] = *(undefined1 *)(param_3 + 3);
      local_20 = &local_38;
      local_28 = param_3;
      FUN_1419cf2d0(plVar1,local_30,&local_28,0);
      local_34 = local_38;
    }
    else {
      local_34 = *piVar2;
    }
    local_28 = &local_res20;
    local_20 = &local_34;
    TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
              (param_1 + 0x10,local_30,&local_28,0);
  }
  return;
}



// FUNCTION 1419f4fe0 FUN_1419f4fe0 body=823 status=ok
// SIG undefined FUN_1419f4fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f4fe0(longlong param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong *plVar14;
  size_t sVar15;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  longlong local_110;
  undefined1 local_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (param_2 != *(uint *)(param_1 + 0x2b0)) {
    return;
  }
  if (0 < param_3) {
    if (param_3 < 3) {
      bVar7 = FUN_141ed13a0(param_2);
      bVar8 = (bool)(bVar7 & 1);
    }
    else if (param_3 == 4) {
      iVar10 = FUN_1419ef5f0(param_2);
      if ((iVar10 < 2) || ((param_2 < 0x1e && ((0x28e71800U >> (param_2 & 0x1f) & 1) != 0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    else {
      if (param_3 != 5) goto LAB_1419f5078;
      iVar10 = FUN_1419ef5f0(param_2);
      bVar8 = 2 < iVar10;
    }
    if (bVar8 == false) {
      return;
    }
  }
LAB_1419f5078:
  local_98 = param_4[4];
  local_a8 = *param_4;
  uStack_a4 = param_4[1];
  uStack_a0 = param_4[2];
  uStack_9c = param_4[3];
  uStack_90 = 0;
  uStack_8c = CONCAT31(uStack_8c._1_3_,1);
  iStack_94 = param_3;
  if ((*(uint *)(param_1 + 0x2b0) < 0x1e) &&
     ((0x25e2cf88U >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    piVar12 = (int *)TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
                     ::FindId(param_1 + 0x2c0,local_118,&local_a8);
    if (*piVar12 == -1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
      return;
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
  }
  local_b0 = *(int *)(param_6 + 1);
  sVar15 = (size_t)local_b0;
  pvVar2 = (void *)*param_6;
  local_c0 = param_5;
  local_b8 = (void *)0x0;
  local_d0 = local_98;
  iStack_cc = iStack_94;
  uStack_c8 = uStack_90;
  uStack_c4 = uStack_8c;
  local_e8 = param_1;
  local_e0 = local_a8;
  uStack_dc = uStack_a4;
  uStack_d8 = uStack_a0;
  uStack_d4 = uStack_9c;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,sVar15);
  }
  if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
      pvVar2 = local_b8;
      sVar15 = (size_t)local_b0;
      local_88 = local_e8;
      local_60 = local_c0;
      local_58 = (void *)0x0;
      local_50 = local_b0;
      local_80 = local_e0;
      uStack_7c = uStack_dc;
      uStack_78 = uStack_d8;
      uStack_74 = uStack_d4;
      local_70 = local_d0;
      iStack_6c = iStack_cc;
      uStack_68 = uStack_c8;
      uStack_64 = uStack_c4;
      if (local_b0 == 0) {
        local_4c = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_58,local_b0,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar2,sVar15);
      }
      uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
      <lambda_45e7de7f1b75a8ceba72ef3f8146f214>::operator()(&local_88,uVar13);
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      plVar14 = (longlong *)FUN_1419ea2f0(local_108,0,0xff);
      pvVar2 = local_b8;
      lVar3 = *plVar14;
      *(longlong *)(lVar3 + 0x10) = local_e8;
      puVar1 = (undefined8 *)(lVar3 + 0x40);
      *(undefined4 *)(lVar3 + 0x18) = local_e0;
      *(undefined4 *)(lVar3 + 0x1c) = uStack_dc;
      *(undefined4 *)(lVar3 + 0x20) = uStack_d8;
      *(undefined4 *)(lVar3 + 0x24) = uStack_d4;
      *(undefined4 *)(lVar3 + 0x28) = local_d0;
      *(int *)(lVar3 + 0x2c) = iStack_cc;
      *(undefined4 *)(lVar3 + 0x30) = uStack_c8;
      *(undefined4 *)(lVar3 + 0x34) = uStack_c4;
      *(undefined4 *)(lVar3 + 0x38) = local_c0;
      *puVar1 = 0;
      sVar15 = (size_t)local_b0;
      *(int *)(lVar3 + 0x48) = local_b0;
      if (local_b0 == 0) {
        *(undefined4 *)(lVar3 + 0x4c) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,local_b0,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar2,sVar15);
      }
      lVar3 = *plVar14;
      lVar6 = plVar14[2];
      lVar4 = plVar14[1];
      lVar5 = *(longlong *)(lVar3 + 0x58);
      piVar12 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      local_110 = lVar5;
      FUN_141a0d200(lVar3,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
        LOCK();
        iVar10 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(local_110);
        }
      }
    }
  }
  else {
    uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
    <lambda_45e7de7f1b75a8ceba72ef3f8146f214>::operator()(&local_e8,uVar13);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419f5320 InternalLogTexture body=229 status=ok
// SIG undefined InternalLogTexture(void)

void FShaderCache::InternalLogTexture(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  if ((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) {
    local_24 = *(undefined1 *)((longlong)param_2 + 0x1c);
    local_20 = 0;
    local_18 = 0;
    local_13 = 0;
    local_40 = *(undefined4 *)param_2;
    local_3c = *(undefined4 *)((longlong)param_2 + 4);
    local_38 = *(undefined4 *)(param_2 + 1);
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_30 = *(undefined4 *)(param_2 + 2);
    local_2c = *(undefined4 *)((longlong)param_2 + 0x14);
    local_28 = *(undefined4 *)(param_2 + 3);
    local_23 = *(undefined1 *)((longlong)param_2 + 0x1d);
    local_res18 = param_3;
    local_14 = local_24;
    local_res20[0] = FUN_1419e2920(param_1 + 0x440,&local_40);
    local_50 = &local_res18;
    local_48 = (undefined8 *)local_res20;
    FUN_1409bf4b0(param_1 + 0x60,local_58,&local_50,0);
    local_48 = &local_res18;
    local_50 = param_2;
    FUN_1419d1a10(param_1 + 0x100,local_58,&local_50,0);
  }
  return;
}



// FUNCTION 1419f5410 InternalLogVertexDeclaration body=126 status=ok
// SIG undefined InternalLogVertexDeclaration(void)

void FShaderCache::InternalLogVertexDeclaration
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 *local_18;
  undefined8 local_10;
  
  if ((*(char *)(param_2 + 0xfa1) == '\0') && (*(char *)(param_2 + 4000) == '\0')) {
    local_res20 = param_4;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    local_18 = &local_res20;
    local_10 = param_3;
    FUN_1419ce0d0(param_1 + 0x898,local_res10,&local_18,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  }
  return;
}



// FUNCTION 1419f5490 FUN_1419f5490 body=17357 status=ok
// SIG undefined FUN_1419f5490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419f5490(longlong param_1,longlong param_2,ushort *param_3,longlong *param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined4 uVar11;
  void *pvVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ushort *puVar27;
  ulonglong uVar28;
  uint *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  undefined8 *puVar32;
  longlong *plVar33;
  int *piVar34;
  undefined8 uVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  undefined1 auStack_7f8 [32];
  undefined8 *local_7d8;
  undefined8 *local_7d0;
  undefined8 *local_7c8;
  undefined8 *local_7c0;
  char local_7b8;
  ulonglong local_7b0;
  longlong local_7a8;
  longlong *local_7a0;
  ushort *local_798;
  ulonglong *local_790;
  longlong local_788;
  uint local_780;
  undefined8 *local_778;
  longlong *local_770;
  longlong local_768;
  undefined4 local_760 [2];
  undefined8 *local_758;
  undefined8 *local_750;
  undefined8 *local_748;
  undefined8 *local_740;
  undefined8 *local_738;
  undefined8 *local_730;
  undefined8 *local_728;
  int local_720 [2];
  undefined8 *local_718;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  undefined8 *local_6f8;
  undefined8 *local_6f0;
  undefined8 *local_6e8;
  undefined8 *local_6e0;
  undefined8 *local_6d8;
  undefined8 *local_6d0;
  undefined8 *local_6c8;
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  undefined8 *local_6b0;
  undefined8 *local_6a8;
  undefined8 *local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  int local_688;
  int local_684;
  int local_680;
  int local_67c;
  int local_678;
  int local_674;
  int local_670;
  int local_66c;
  int local_668;
  int local_664;
  int local_660;
  int local_65c;
  int local_658;
  int local_654;
  int local_650;
  int local_64c;
  int local_648;
  int local_644;
  int local_640;
  int local_63c;
  int local_638;
  int local_634;
  int local_630;
  int local_62c;
  int local_628;
  int local_624;
  longlong local_620;
  longlong local_618;
  longlong local_610;
  longlong local_608;
  longlong local_600;
  undefined8 *local_5f8;
  undefined8 *local_5f0;
  undefined8 *local_5e8;
  undefined8 *local_5e0;
  undefined8 *local_5d8;
  undefined8 *local_5d0;
  int local_5c8;
  undefined1 local_5c4;
  undefined1 local_5c3;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b4;
  undefined1 local_5b3;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a4;
  undefined1 local_5a3;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_594;
  undefined1 local_593;
  undefined4 local_590;
  undefined4 local_58c;
  undefined1 local_588;
  undefined1 local_587;
  int local_580;
  uint uStack_57c;
  uint *puStack_578;
  undefined4 local_570;
  uint uStack_56c;
  int iStack_568;
  undefined4 uStack_564;
  longlong local_560;
  undefined8 *local_558;
  longlong local_550 [2];
  undefined8 *local_540;
  longlong local_538 [2];
  undefined8 *local_528;
  undefined8 *local_520;
  longlong local_518;
  undefined8 *local_510;
  undefined8 *local_508;
  undefined1 local_500 [8];
  undefined1 local_4f8 [8];
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  int local_490;
  uint *local_488;
  uint local_480;
  uint uStack_47c;
  uint local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  uint *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined1 local_42c;
  undefined1 local_42b;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_404;
  undefined1 local_3fc;
  undefined1 local_3fb;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  longlong *plStack_3e0;
  uint local_3d8;
  int iStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8 [4];
  undefined1 local_3c4 [4];
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  int local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined1 local_358 [4];
  int local_354;
  undefined8 *local_350;
  undefined1 local_348 [4];
  undefined1 local_344 [4];
  undefined1 local_340 [4];
  undefined1 local_33c [4];
  undefined1 local_338 [4];
  undefined1 local_334 [4];
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  undefined1 local_328 [8];
  undefined4 local_320;
  undefined4 uStack_31c;
  int iStack_318;
  uint uStack_314;
  uint *local_310;
  uint uStack_308;
  uint uStack_304;
  undefined8 local_300;
  undefined1 local_2f8 [4];
  undefined1 local_2f4 [4];
  undefined1 local_2f0 [8];
  undefined4 *local_2e8;
  undefined4 *local_2e0;
  undefined4 *local_2d8;
  undefined8 **local_2d0;
  undefined8 **local_2c8;
  undefined4 *local_2c0;
  undefined8 **local_2b8;
  undefined4 *local_2b0;
  undefined8 **local_2a8;
  undefined8 *local_2a0;
  undefined8 **local_298;
  undefined8 *local_290;
  undefined8 **local_288;
  undefined1 *local_280;
  undefined8 **local_278;
  undefined4 *local_270;
  undefined8 **local_268;
  undefined1 *local_260;
  longlong *local_250;
  int local_244;
  longlong *local_238;
  undefined8 uStack_230;
  longlong *plStack_228;
  uint uStack_220;
  int iStack_21c;
  undefined8 uStack_218;
  undefined8 *local_208;
  undefined8 *puStack_200;
  undefined8 *local_1f8;
  undefined8 *puStack_1f0;
  undefined8 *local_1e8;
  undefined8 *puStack_1e0;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  ulonglong local_1bc;
  undefined8 local_1b4;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  ulonglong local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7f8;
  uVar31 = 0;
  local_720[0] = 0;
  local_780 = 0;
  uVar18 = 0;
  local_7a8 = param_1;
  local_798 = param_3;
  local_770 = param_4;
  if ((*(uint *)(param_1 + 0x2b0) < 0x1c) &&
     ((0x8c51800U >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
    uVar18 = *(uint *)(param_4 + 5);
    puStack_578 = (uint *)(param_4 + 2);
    local_580 = 0;
    uStack_57c = 1;
    uStack_56c = 0;
    iStack_568 = 0;
    if (uVar18 != 0) {
      puVar29 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar29 = puStack_578;
      }
      uVar20 = *puVar29;
      while (uVar20 == 0) {
        lVar21 = (longlong)local_580;
        iStack_568 = iStack_568 + 0x20;
        iVar17 = local_580 + 1;
        bVar36 = (int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_580;
        local_580 = iVar17;
        if (bVar36) goto LAB_1419f55d0;
        uVar20 = puVar29[lVar21 + 1];
      }
      uStack_57c = -uVar20 & uVar20;
      local_390 = 0x1f;
      if (uStack_57c != 0) {
        for (; uStack_57c >> local_390 == 0; local_390 = local_390 + -1) {
        }
      }
      if (uStack_57c == 0) {
        iVar17 = 0x20;
      }
      else {
        iVar17 = 0x1f - local_390;
      }
      uStack_56c = (iStack_568 - iVar17) + 0x1f;
      if ((int)uVar18 < (int)uStack_56c) {
LAB_1419f55d0:
        uStack_56c = uVar18;
      }
    }
    local_570 = 0xffffffff;
    uStack_47c = *(uint *)(param_4 + 5);
    uStack_468 = CONCAT44(uStack_57c,local_580);
    uStack_458 = CONCAT44(uStack_56c,0xffffffff);
    uStack_450 = CONCAT44(uStack_564,iStack_568);
    local_490 = (int)uStack_47c >> 5;
    local_470._0_4_ = SUB84(param_4,0);
    local_470._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
    local_480 = -1 << ((byte)uStack_47c & 0x1f);
    local_478 = uStack_47c & 0xffffffe0;
    local_320 = (undefined4)local_470;
    uStack_31c = local_470._4_4_;
    iStack_318 = local_580;
    uStack_314 = uStack_57c;
    uStack_308 = 0xffffffff;
    uStack_304 = uStack_56c;
    if (uStack_47c != uVar18) {
      puVar29 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar29 = puStack_578;
      }
      uVar20 = puVar29[local_490] & local_480;
      while (uVar20 == 0) {
        lVar21 = (longlong)local_490;
        local_478 = local_478 + 0x20;
        iVar17 = local_490 + 1;
        bVar36 = (int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_490;
        local_490 = iVar17;
        if (bVar36) goto LAB_1419f56ea;
        uVar20 = puVar29[lVar21 + 1];
        local_480 = 0xffffffff;
      }
      uVar20 = -uVar20 & uVar20;
      local_354 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> local_354 == 0; local_354 = local_354 + -1) {
        }
      }
      if (uVar20 == 0) {
        iVar17 = 0x20;
      }
      else {
        iVar17 = 0x1f - local_354;
      }
      uStack_47c = (local_478 - iVar17) + 0x1f;
      if ((int)uVar18 < (int)uStack_47c) {
LAB_1419f56ea:
        uStack_47c = uVar18;
      }
    }
    local_7b0 = (ulonglong)uStack_47c;
    local_488 = puStack_578;
    local_470 = param_4;
    puStack_460 = puStack_578;
    local_300 = uStack_450;
    local_310 = puStack_578;
    do {
      if (((uStack_304 == (uint)local_7b0) && (local_310 == local_488)) &&
         ((longlong *)CONCAT44(uStack_31c,local_320) == local_770)) {
        return;
      }
      lVar21 = *(longlong *)(param_1 + 0x550);
      lVar19 = (longlong)
               *(int *)(*(longlong *)CONCAT44(uStack_31c,local_320) +
                       (longlong)(int)uStack_304 * 0xc);
      local_778 = (undefined8 *)(lVar19 * 3);
      local_788 = lVar21;
      if (*(char *)(lVar21 + 8 + lVar19 * 0xc) == '\0') {
        puVar30 = (undefined4 *)
                  ((longlong)*(int *)(lVar21 + lVar19 * 0xc) * 200 + *(longlong *)(param_1 + 0x5b0))
        ;
        TSet<TTuple<FShaderCacheGraphicsPipelineState,TRefCountPtr<FRHIGraphicsPipelineState>_>,TDefaultMapHashableKeyFuncs<FShaderCacheGraphicsPipelineState,TRefCountPtr<FRHIGraphicsPipelineState>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x938,&local_688,puVar30);
        if (local_688 == -1) {
          lVar22 = 0;
        }
        else {
          lVar22 = (longlong)local_688 * 0xd8 + *(longlong *)(param_1 + 0x938);
        }
        lVar16 = lVar22 + 200;
        if (lVar22 == 0) {
          lVar16 = 0;
        }
        if (lVar16 == 0) {
          if ((byte)param_3[0x92] == 0) {
            uVar31 = uVar31 | 2;
            local_550[0] = 0;
            plVar13 = local_550;
          }
          else {
            uVar31 = uVar31 | 1;
            FUN_1419ed7a0(param_1 + 0x6b8,&local_684,param_3 + 0x84);
            if ((local_684 == -1) ||
               (lVar21 = (longlong)local_684 * 0x30 + *(longlong *)(param_1 + 0x6b8), lVar21 == 0))
            {
              local_620 = 0;
            }
            else {
              local_620 = *(longlong *)(lVar21 + 0x20);
              if (local_620 != 0) {
                LOCK();
                *(int *)(local_620 + 8) = *(int *)(local_620 + 8) + 1;
                UNLOCK();
                plVar13 = &local_620;
                goto LAB_1419f583d;
              }
            }
            plVar13 = &local_620;
          }
LAB_1419f583d:
          puVar32 = (undefined8 *)*plVar13;
          *plVar13 = 0;
          if ((uVar31 & 2) != 0) {
            uVar31 = uVar31 & 0xfffffffd;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_550);
          }
          if ((uVar31 & 1) != 0) {
            uVar31 = uVar31 & 0xfffffffe;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_620);
          }
          lVar21 = local_7a8;
          if ((byte)param_3[0xa2] == 0) {
            local_550[1] = 0;
            plVar13 = local_550 + 1;
            uVar18 = 8;
          }
          else {
            FUN_1419ed7a0(local_7a8 + 0x708,&local_680,param_3 + 0x94);
            if ((local_680 == -1) ||
               (lVar19 = (longlong)local_680 * 0x30 + *(longlong *)(lVar21 + 0x708), lVar19 == 0)) {
              local_618 = 0;
            }
            else {
              local_618 = *(longlong *)(lVar19 + 0x20);
              if (local_618 != 0) {
                LOCK();
                *(int *)(local_618 + 8) = *(int *)(local_618 + 8) + 1;
                UNLOCK();
                plVar13 = &local_618;
                uVar18 = 4;
                goto LAB_1419f58f9;
              }
            }
            plVar13 = &local_618;
            uVar18 = 4;
          }
LAB_1419f58f9:
          puVar14 = (undefined8 *)*plVar13;
          uVar31 = uVar31 | uVar18;
          *plVar13 = 0;
          if ((uVar31 & 8) != 0) {
            uVar31 = uVar31 & 0xfffffff7;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_550 + 1);
          }
          if ((uVar31 & 4) != 0) {
            uVar31 = uVar31 & 0xfffffffb;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_618);
          }
          puVar24 = local_798;
          if ((byte)local_798[0xb2] == 0) {
            local_560 = 0;
            plVar13 = &local_560;
            uVar18 = 0x20;
          }
          else {
            FUN_1419ed7a0(lVar21 + 0x758,&local_67c,local_798 + 0xa4);
            if ((local_67c == -1) ||
               (lVar19 = (longlong)local_67c * 0x30 + *(longlong *)(lVar21 + 0x758), lVar19 == 0)) {
              local_610 = 0;
            }
            else {
              local_610 = *(longlong *)(lVar19 + 0x20);
              if (local_610 != 0) {
                LOCK();
                *(int *)(local_610 + 8) = *(int *)(local_610 + 8) + 1;
                UNLOCK();
                plVar13 = &local_610;
                uVar18 = 0x10;
                goto LAB_1419f59b7;
              }
            }
            plVar13 = &local_610;
            uVar18 = 0x10;
          }
LAB_1419f59b7:
          puVar25 = (undefined8 *)*plVar13;
          uVar31 = uVar31 | uVar18;
          *plVar13 = 0;
          if ((uVar31 & 0x20) != 0) {
            uVar31 = uVar31 & 0xffffffdf;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_560);
          }
          if ((uVar31 & 0x10) != 0) {
            uVar31 = uVar31 & 0xffffffef;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_610);
          }
          if ((byte)puVar24[0xc2] == 0) {
            plVar13 = local_538;
            local_538[0] = 0;
            uVar18 = 0x80;
          }
          else {
            FUN_1419ed7a0(lVar21 + 0x7a8,&local_678,local_798 + 0xb4);
            puVar24 = local_798;
            if ((local_678 == -1) ||
               (lVar21 = (longlong)local_678 * 0x30 + *(longlong *)(lVar21 + 0x7a8), lVar21 == 0)) {
              plVar13 = &local_608;
              local_608 = 0;
              uVar18 = 0x40;
            }
            else {
              local_608 = *(longlong *)(lVar21 + 0x20);
              if (local_608 != 0) {
                LOCK();
                *(int *)(local_608 + 8) = *(int *)(local_608 + 8) + 1;
                UNLOCK();
              }
              plVar13 = &local_608;
              uVar18 = 0x40;
            }
          }
          puVar4 = (undefined8 *)*plVar13;
          uVar31 = uVar31 | uVar18;
          *plVar13 = 0;
          if ((char)uVar31 < '\0') {
            uVar31 = uVar31 & 0xffffff7f;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_538);
          }
          if ((uVar31 & 0x40) != 0) {
            uVar31 = uVar31 & 0xffffffbf;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_608);
          }
          lVar21 = local_7a8;
          if ((byte)puVar24[0xd2] == 0) {
            plVar13 = local_538 + 1;
            local_538[1] = 0;
            uVar18 = 0x200;
          }
          else {
            FUN_1419ed7a0(local_7a8 + 0x7f8,&local_674,local_798 + 0xc4);
            if ((local_674 == -1) ||
               (lVar21 = (longlong)local_674 * 0x30 + *(longlong *)(lVar21 + 0x7f8), lVar21 == 0)) {
              plVar13 = &local_600;
              local_600 = 0;
              uVar18 = 0x100;
            }
            else {
              local_600 = *(longlong *)(lVar21 + 0x20);
              if (local_600 != 0) {
                LOCK();
                *(int *)(local_600 + 8) = *(int *)(local_600 + 8) + 1;
                UNLOCK();
              }
              plVar13 = &local_600;
              uVar18 = 0x100;
            }
          }
          puVar5 = (undefined8 *)*plVar13;
          uVar31 = uVar31 | uVar18;
          *plVar13 = 0;
          if (uVar31 >> 9 != 0) {
            uVar31 = uVar31 & 0xfffffdff;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_538 + 1);
          }
          if ((uVar31 >> 8 & 1) != 0) {
            uVar31 = uVar31 & 0xfffffeff;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_600);
          }
          if ((bool)(byte)local_798[0x92] == (puVar32 != (undefined8 *)0x0) &&
              (((bool)(byte)local_798[0xb2] == (puVar25 != (undefined8 *)0x0) &&
               ((bool)(byte)local_798[0xd2] == (puVar5 != (undefined8 *)0x0) &&
               (bool)(byte)local_798[0xc2] == (puVar4 != (undefined8 *)0x0))) &&
              (bool)(byte)local_798[0xa2] == (puVar14 != (undefined8 *)0x0))) {
            local_1c8 = (undefined8 *)0x0;
            local_208 = (undefined8 *)0x0;
            puStack_200 = (undefined8 *)0x0;
            local_1f8 = (undefined8 *)0x0;
            puStack_1f0 = (undefined8 *)0x0;
            local_1e8 = (undefined8 *)0x0;
            puStack_1e0 = (undefined8 *)0x0;
            local_1d8 = (undefined8 *)0x0;
            puStack_1d0 = (undefined8 *)0x0;
            local_1c0 = 0;
            local_1bc = 0x26;
            local_1b4 = 0;
            local_1ac = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = 0;
            local_190 = 0;
            local_188 = 0;
            local_180 = 0;
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            local_164 = 0;
            local_15c = 0;
            local_154 = 0;
            (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_508,&DAT_146ab6e78,local_798)
            ;
            local_208 = local_508;
            local_154 = CONCAT22(local_154._2_2_,(ushort)*(byte *)((longlong)puVar30 + 0xbd));
            (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,&local_510,puVar30 + 2);
            local_1d8 = local_510;
            (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_520,puVar30 + 0x14);
            local_5b0 = puVar30[0x11];
            local_5ac = puVar30[0x12];
            local_1c8 = local_520;
            local_5b4 = *(undefined1 *)(puVar30 + 0x13);
            local_5b3 = *(undefined1 *)((longlong)puVar30 + 0x4d);
            local_5a8 = *(undefined1 *)((longlong)puVar30 + 0x4e);
            local_5a7 = *(undefined1 *)((longlong)puVar30 + 0x4f);
            (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_528,&local_5b4);
            puStack_1d0 = local_528;
            if ((uint)puVar30[0x2c] < 0xfffffffe) {
              local_164 = CONCAT44(puVar30[0x2d],puVar30[0x2c]);
              local_15c = CONCAT44(local_15c._4_4_,puVar30[0x2e]);
            }
            else {
              local_164 = 0;
              local_15c = local_15c & 0xffffffff00000000;
            }
            local_1bc = (ulonglong)CONCAT14(*(undefined1 *)(puVar30 + 0x2f),*puVar30);
            uVar18 = puVar30[0x18];
            if (uVar18 < 0xfffffffe) {
              local_1b4 = CONCAT44(local_1b4._4_4_,uVar18);
              if (uVar18 - 1 < 0x40) {
                local_198 = CONCAT44(puVar30[0x20],(undefined4)local_198);
                local_178._0_5_ = CONCAT14(*(undefined1 *)(puVar30 + 0x28),(undefined4)local_178);
                local_170._0_5_ = CONCAT14(*(undefined1 *)(puVar30 + 0x2a),(undefined4)local_170);
              }
              else {
                local_1b4 = (ulonglong)local_1b4._4_4_ << 0x20;
              }
            }
            uVar28 = local_1b4;
            uVar18 = puVar30[0x19];
            if (uVar18 < 0xfffffffe) {
              local_1b4 = CONCAT44(uVar18,(undefined4)local_1b4);
              if (uVar18 - 1 < 0x40) {
                local_190 = CONCAT44(local_190._4_4_,puVar30[0x21]);
                local_178._0_6_ =
                     CONCAT15(*(undefined1 *)((longlong)puVar30 + 0xa1),(undefined5)local_178);
                local_170._0_6_ =
                     CONCAT15(*(undefined1 *)((longlong)puVar30 + 0xa9),(undefined5)local_170);
              }
              else {
                local_1b4 = uVar28 & 0xffffffff;
              }
            }
            uVar18 = puVar30[0x1a];
            if (uVar18 < 0xfffffffe) {
              if (uVar18 - 1 < 0x40) {
                local_190 = CONCAT44(puVar30[0x22],(undefined4)local_190);
                local_178._0_7_ =
                     CONCAT16(*(undefined1 *)((longlong)puVar30 + 0xa2),(undefined6)local_178);
                local_170._0_7_ =
                     CONCAT16(*(undefined1 *)((longlong)puVar30 + 0xaa),(undefined6)local_170);
                local_1ac = uVar18;
              }
              else {
                local_1ac = 0;
              }
            }
            uVar18 = puVar30[0x1b];
            if (uVar18 < 0xfffffffe) {
              local_1a8 = CONCAT44(local_1a8._4_4_,uVar18);
              if (uVar18 - 1 < 0x40) {
                local_188 = CONCAT44(local_188._4_4_,puVar30[0x23]);
                local_178 = CONCAT17(*(undefined1 *)((longlong)puVar30 + 0xa3),(undefined7)local_178
                                    );
                local_170 = CONCAT17(*(undefined1 *)((longlong)puVar30 + 0xab),(undefined7)local_170
                                    );
              }
              else {
                local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
              }
            }
            uVar28 = local_1a8;
            uVar18 = puVar30[0x1c];
            if (uVar18 < 0xfffffffe) {
              local_1a8 = CONCAT44(uVar18,(undefined4)local_1a8);
              if (uVar18 - 1 < 0x40) {
                local_188 = CONCAT44(puVar30[0x24],(undefined4)local_188);
                local_170 = CONCAT71(local_170._1_7_,*(undefined1 *)(puVar30 + 0x29));
                local_168 = CONCAT31(local_168._1_3_,*(undefined1 *)(puVar30 + 0x2b));
              }
              else {
                local_1a8 = uVar28 & 0xffffffff;
              }
            }
            uVar18 = puVar30[0x1d];
            if (uVar18 < 0xfffffffe) {
              uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar18);
              if (uVar18 - 1 < 0x40) {
                local_180 = CONCAT44(local_180._4_4_,puVar30[0x25]);
                local_170._0_2_ =
                     CONCAT11(*(undefined1 *)((longlong)puVar30 + 0xa5),(undefined1)local_170);
                local_168._0_2_ =
                     CONCAT11(*(undefined1 *)((longlong)puVar30 + 0xad),(undefined1)local_168);
              }
              else {
                uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
              }
            }
            uVar28 = uStack_1a0;
            uVar18 = puVar30[0x1e];
            if (uVar18 < 0xfffffffe) {
              uStack_1a0 = CONCAT44(uVar18,(undefined4)uStack_1a0);
              if (uVar18 - 1 < 0x40) {
                local_180 = CONCAT44(puVar30[0x26],(undefined4)local_180);
                local_170._0_3_ =
                     CONCAT12(*(undefined1 *)((longlong)puVar30 + 0xa6),(undefined2)local_170);
                local_168._0_3_ =
                     CONCAT12(*(undefined1 *)((longlong)puVar30 + 0xae),(undefined2)local_168);
              }
              else {
                uStack_1a0 = uVar28 & 0xffffffff;
              }
            }
            uVar18 = puVar30[0x1f];
            if (uVar18 < 0xfffffffe) {
              local_198 = CONCAT44(local_198._4_4_,uVar18);
              if (uVar18 - 1 < 0x40) {
                local_178 = CONCAT44(local_178._4_4_,puVar30[0x27]);
                local_170._0_4_ =
                     CONCAT13(*(undefined1 *)((longlong)puVar30 + 0xa7),(undefined3)local_170);
                local_168 = CONCAT13(*(undefined1 *)((longlong)puVar30 + 0xaf),(undefined3)local_168
                                    );
              }
              else {
                local_198 = (ulonglong)local_198._4_4_ << 0x20;
              }
            }
            local_2b8 = &local_1d8;
            local_2b0 = puVar30 + 2;
            FUN_1419cd940(local_7a8 + 0x988,local_348,&local_2b8,0);
            local_278 = &local_1c8;
            local_270 = puVar30 + 0x14;
            FUN_1419cdb00(local_7a8 + 0xa28,local_344,&local_278,0);
            local_5c4 = *(undefined1 *)(puVar30 + 0x13);
            local_5c0 = puVar30[0x11];
            local_5bc = puVar30[0x12];
            local_5c3 = *(undefined1 *)((longlong)puVar30 + 0x4d);
            local_5b8 = *(undefined1 *)((longlong)puVar30 + 0x4e);
            local_5b7 = *(undefined1 *)((longlong)puVar30 + 0x4f);
            local_268 = &puStack_1d0;
            local_260 = &local_5c4;
            FUN_1419cdef0(local_7a8 + 0x9d8,local_340,&local_268,0);
            puStack_200 = puVar32;
            local_1f8 = puVar4;
            puStack_1f0 = puVar5;
            local_1e8 = puVar14;
            puStack_1e0 = puVar25;
            (**(code **)(*DAT_146ab6358 + 0xf8))(DAT_146ab6358,&local_5f8,&local_208);
            local_7a0 = (longlong *)(local_7a8 + 0x560);
            TSet<TTuple<FShaderCacheGraphicsPipelineState,int>,TDefaultMapKeyFuncs<FShaderCacheGraphicsPipelineState,int,0>,FDefaultSetAllocator>
            ::FindId(local_7a0,&local_670,puVar30);
            if (local_670 == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_670 * 0xd4 + *local_7a0;
            }
            puVar23 = (undefined4 *)(lVar21 + 200);
            if (lVar21 == 0) {
              puVar23 = (undefined4 *)0x0;
            }
            if (puVar23 == (undefined4 *)0x0) {
              local_760[0] = (undefined4)local_7a0[0xb];
              iVar17 = (int)local_7a0[0xb];
              local_790 = (ulonglong *)CONCAT44(local_790._4_4_,iVar17);
              *(int *)(local_7a0 + 0xb) = iVar17 + 1;
              if (*(int *)((longlong)local_7a0 + 0x5c) < iVar17 + 1) {
                FUN_140ae1ad0();
                iVar17 = (uint)local_790;
              }
              FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState
                        ((longlong)iVar17 * 200 + *(longlong *)(local_7a8 + 0x5b0),puVar30);
              local_2e0 = local_760;
              local_2e8 = puVar30;
              FUN_1419cfb10(local_7a0,local_33c,&local_2e8,0);
              uVar11 = local_760[0];
            }
            else {
              uVar11 = *puVar23;
            }
            puVar30[0x31] = uVar11;
            local_2d0 = &local_5f8;
            local_2d8 = puVar30;
            FUN_1419cfdc0(local_7a8 + 0x938,local_338,&local_2d8,0);
            local_3c0 = local_5f8;
            local_2c8 = &local_3c0;
            local_2c0 = puVar30;
            FUN_1419cdd30(local_7a8 + 0xac8,local_334,&local_2c8,0);
            *(undefined1 *)(local_788 + 8 + (longlong)local_778 * 4) = 1;
            local_7a0 = local_5f8;
            if (local_5f8 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(local_5f8 + 1);
              iVar17 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                if (*(char *)(local_5f8 + 2) == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar10 != '\0') goto LAB_1419f63cc;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)local_7a0 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)local_7a0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar18 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18
                      ;
                    }
                    *(longlong **)(lVar21 + 8) = local_7a0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
LAB_1419f63cc:
                  (**(code **)*local_7a0)(local_7a0,1);
                }
              }
            }
            local_7a0 = local_528;
            if (local_528 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(local_528 + 1);
              iVar17 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                if (*(char *)(local_528 + 2) == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar10 != '\0') goto LAB_1419f647c;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)local_7a0 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)local_7a0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar18 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18
                      ;
                    }
                    *(longlong **)(lVar21 + 8) = local_7a0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
LAB_1419f647c:
                  (**(code **)*local_7a0)(local_7a0,1);
                }
              }
            }
            local_7a0 = local_520;
            if (local_520 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(local_520 + 1);
              iVar17 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                if (*(char *)(local_520 + 2) == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar10 != '\0') goto LAB_1419f651e;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)local_7a0 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)local_7a0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar18 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18
                      ;
                    }
                    *(longlong **)(lVar21 + 8) = local_7a0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
LAB_1419f651e:
                  (**(code **)*local_7a0)(local_7a0,1);
                }
              }
            }
            local_7a0 = local_510;
            if (local_510 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(local_510 + 1);
              iVar17 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                if (*(char *)(local_510 + 2) == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar10 != '\0') goto LAB_1419f65c0;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)local_7a0 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)local_7a0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar18 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18
                      ;
                    }
                    *(longlong **)(lVar21 + 8) = local_7a0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
LAB_1419f65c0:
                  (**(code **)*local_7a0)(local_7a0,1);
                }
              }
            }
            local_7a0 = local_508;
            if (local_508 != (undefined8 *)0x0) {
              LOCK();
              piVar34 = (int *)(local_508 + 1);
              iVar17 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                if (*(char *)(local_508 + 2) == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar10 != '\0') goto LAB_1419f6662;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)local_7a0 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)local_7a0 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar18 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18
                      ;
                    }
                    *(longlong **)(lVar21 + 8) = local_7a0;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
LAB_1419f6662:
                  (**(code **)*local_7a0)(local_7a0,1);
                }
              }
            }
          }
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar5 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if (*(char *)(puVar5 + 2) == '\0') {
                if (DAT_146ab62f5 == '\0') {
                  cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                  if (cVar10 != '\0') goto LAB_1419f66f6;
                }
                LOCK();
                bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar5 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar18 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar5;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
LAB_1419f66f6:
                (**(code **)*puVar5)(puVar5,1);
              }
            }
          }
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar4 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if (*(char *)(puVar4 + 2) == '\0') {
                if (DAT_146ab62f5 == '\0') {
                  cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                  if (cVar10 != '\0') goto LAB_1419f6791;
                }
                LOCK();
                bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar4 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar18 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar4;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
LAB_1419f6791:
                (**(code **)*puVar4)(puVar4,1);
              }
            }
          }
          if (puVar25 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar25 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if (*(char *)(puVar25 + 2) == '\0') {
                if (DAT_146ab62f5 == '\0') {
                  cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                  if (cVar10 != '\0') goto LAB_1419f681e;
                }
                LOCK();
                bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar25 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar18 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar25;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
LAB_1419f681e:
                (**(code **)*puVar25)(puVar25,1);
              }
            }
          }
          if (puVar14 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar14 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if (*(char *)(puVar14 + 2) == '\0') {
                if (DAT_146ab62f5 == '\0') {
                  cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                  if (cVar10 != '\0') goto LAB_1419f68ad;
                }
                LOCK();
                bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar14 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar18 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar14;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
LAB_1419f68ad:
                (**(code **)*puVar14)(puVar14,1);
              }
            }
          }
          param_3 = local_798;
          param_1 = local_7a8;
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if (*(char *)(puVar32 + 2) == '\0') {
                if (DAT_146ab62f5 == '\0') {
                  cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
                  if (cVar10 != '\0') goto LAB_1419f6974;
                }
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                param_3 = local_798;
                param_1 = local_7a8;
                if (bVar36) {
                  uVar18 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar18 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = (&DAT_1468a81f8)[uVar18 >> 0xe] + (ulonglong)(uVar18 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar21 + 8) = puVar32;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  param_3 = local_798;
                  param_1 = local_7a8;
                }
              }
              else {
LAB_1419f6974:
                (**(code **)*puVar32)(puVar32,1);
                param_3 = local_798;
                param_1 = local_7a8;
              }
            }
          }
        }
        else {
          *(undefined1 *)(lVar21 + 8 + lVar19 * 0xc) = 1;
        }
      }
      uStack_308 = uStack_308 & ~uStack_314;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_318);
    } while( true );
  }
  local_788 = param_2;
  FUN_1419ed370(param_1 + 0x8e8);
  if ((local_66c == -1) ||
     (lVar21 = (longlong)local_66c * 0x1c0 + *(longlong *)(param_1 + 0x8e8), lVar21 == 0)) {
    local_768 = 0;
  }
  else {
    local_768 = *(longlong *)(lVar21 + 0x1b0);
    if (local_768 != 0) {
      LOCK();
      *(int *)(local_768 + 8) = *(int *)(local_768 + 8) + 1;
      UNLOCK();
    }
  }
  if (param_3 != param_3 + (longlong)*(int *)(param_3 + 0x80) * 4) {
    puVar24 = param_3 + 2;
    uVar18 = uVar31;
    do {
      uVar31 = (uint)*(byte *)((longlong)puVar24 + -3) + (uint)*puVar24;
      puVar27 = puVar24 + 2;
      if (uVar31 < uVar18) {
        uVar31 = uVar18;
      }
      uVar18 = uVar31;
      puVar24 = puVar24 + 4;
    } while (puVar27 != param_3 + (longlong)*(int *)(param_3 + 0x80) * 4);
  }
  local_124 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 1;
  local_118 = 0;
  local_110 = 0;
  local_134 = _DAT_1468b5d78;
  uStack_130 = uRam00000001468b5d7c;
  uStack_12c = uRam00000001468b5d80;
  uStack_128 = uRam00000001468b5d84;
  if ((uVar18 != 0) &&
     ((((*(longlong *)(param_1 + 0x2a0) == 0 || (*(longlong *)(param_1 + 0x2a8) == 0)) ||
       (*(uint *)(*(longlong *)(param_1 + 0x2a0) + 0x18) < uVar18)) ||
      (*(uint *)(*(longlong *)(param_1 + 0x2a8) + 0x18) < uVar18)))) {
    FUN_1419cc730(param_1 + 0x240,local_330,param_1 + 0x2a0,0);
    FUN_1419cc730(param_1 + 0x240,local_3c4,param_1 + 0x2a8,0);
    local_7d0 = &local_148;
    local_7d8._0_4_ = 1;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_500,&DAT_146ab6e78,uVar18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2a0,local_500);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_500);
    local_7d0 = (undefined8 *)CONCAT44(local_7d0._4_4_,1);
    local_7d8 = (undefined8 *)CONCAT44(local_7d8._4_4_,uVar18);
    pvVar12 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x2a0),0);
    if (pvVar12 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(pvVar12,0,(ulonglong)uVar18);
    }
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x2a0));
    local_7d0 = &local_148;
    local_7d8._0_4_ = 0x801;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_4f8,&DAT_146ab6e78,uVar18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2a8,local_4f8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_4f8);
    local_7d0 = (undefined8 *)CONCAT44(local_7d0._4_4_,1);
    local_7d8 = (undefined8 *)CONCAT44(local_7d8._4_4_,uVar18);
    pvVar12 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x2a8),0);
    if (pvVar12 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(pvVar12,0,(ulonglong)uVar18);
    }
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x2a8));
  }
  plVar33 = local_770;
  cVar10 = '\0';
  local_7b8 = '\0';
  local_3e8 = 0;
  uStack_3e4 = 1;
  plVar13 = local_770 + 2;
  local_3d8 = 0xffffffff;
  iStack_3d4 = 0;
  uStack_3d0 = 0;
  local_244 = 0;
  plStack_3e0 = plVar13;
  if ((int)local_770[5] != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e8);
    local_244 = (int)plVar33[5];
  }
  uStack_230 = CONCAT44(uStack_3e4,local_3e8);
  local_238 = plVar33;
  uStack_458._0_4_ = local_3d8;
  uStack_458._4_4_ = iStack_3d4;
  uStack_450 = CONCAT44(uStack_3cc,uStack_3d0);
  plStack_228 = plStack_3e0;
  local_470 = plVar33;
  uStack_468 = CONCAT44(uStack_3e4,local_3e8);
  puStack_460 = (uint *)plStack_3e0;
  local_250 = plVar13;
  uStack_218 = uStack_450;
  uStack_220 = (uint)uStack_458;
  iStack_21c = uStack_458._4_4_;
  do {
    if (((uStack_458._4_4_ == local_244) && (puStack_460 == (uint *)local_250)) &&
       (local_470 == plVar33)) goto LAB_1419f9439;
    lVar19 = (longlong)*(int *)(*local_470 + (longlong)uStack_458._4_4_ * 0xc);
    lVar21 = *(longlong *)(param_1 + 0x550);
    if (*(char *)(lVar21 + 8 + lVar19 * 0xc) == '\0') {
      puVar32 = (undefined8 *)
                ((longlong)*(int *)(lVar21 + lVar19 * 0xc) * 200 + *(longlong *)(param_1 + 0x5b0));
      local_7a0 = (longlong *)
                  ((longlong)*(int *)(lVar21 + 4 + lVar19 * 0xc) * 0xde8 +
                  *(longlong *)(param_1 + 0x3d0));
      local_778 = puVar32;
      (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,&local_6f0,puVar32 + 1);
      (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_6e8,puVar32 + 10);
      local_5a4 = *(undefined1 *)((longlong)puVar32 + 0x4c);
      local_5a0 = *(undefined4 *)((longlong)puVar32 + 0x44);
      local_59c = *(undefined4 *)(puVar32 + 9);
      local_5a3 = *(undefined1 *)((longlong)puVar32 + 0x4d);
      local_598 = *(undefined1 *)((longlong)puVar32 + 0x4e);
      local_597 = *(undefined1 *)((longlong)puVar32 + 0x4f);
      (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_6e0,&local_5a4);
      local_3b8 = local_6f0;
      local_2a8 = &local_3b8;
      local_2a0 = puVar32 + 1;
      FUN_1419cd940(param_1 + 0x988,local_32c,&local_2a8,0);
      local_3b0 = local_6e8;
      local_298 = &local_3b0;
      local_290 = puVar32 + 10;
      FUN_1419cdb00(param_1 + 0xa28,local_358,&local_298,0);
      local_590 = *(undefined4 *)((longlong)puVar32 + 0x44);
      local_58c = *(undefined4 *)(puVar32 + 9);
      local_3a8 = local_6e0;
      local_594 = *(undefined1 *)((longlong)puVar32 + 0x4c);
      local_593 = *(undefined1 *)((longlong)puVar32 + 0x4d);
      local_588 = *(undefined1 *)((longlong)puVar32 + 0x4e);
      local_587 = *(undefined1 *)((longlong)puVar32 + 0x4f);
      local_288 = &local_3a8;
      local_280 = &local_594;
      FUN_1419cdef0(param_1 + 0x9d8,local_3c8,&local_288,0);
      lVar21 = local_7a8;
      uVar18 = 0;
      local_790 = (ulonglong *)((ulonglong)local_790 & 0xffffffff00000000);
      local_108 = 0;
      local_100[0] = 0;
      local_100[1] = 0xffffffff;
      local_f8[0]._0_2_ = 0;
      local_f8[1] = 0;
      local_e8 = 0;
      local_e4 = 0xffffffff;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 0xffffffff;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b4 = 0xffffffff;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0xffffffff;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_84 = 0xffffffff;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0xffffffff;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0xffffffff;
      local_50 = 0;
      local_698 = 0;
      local_690 = 0;
      if ((*(uint *)(param_1 + 0x2b0) < 0x1b) &&
         ((0x700a74aU >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
        puVar30 = local_100 + 1;
        piVar34 = (int *)(local_778 + 0xc);
        do {
          if (*piVar34 == -1) break;
          local_4f0 = 0;
          uStack_4e8 = 0;
          local_4e0 = 0;
          lVar19 = (longlong)*piVar34 * 0x2c + *(longlong *)(lVar21 + 0x430);
          plVar13 = (longlong *)FShaderCache::InternalCreateRenderTarget(lVar21,&local_3a0,lVar19);
          puVar32 = local_3a0;
          if (&local_4e0 != plVar13) {
            local_4e0 = *plVar13;
            *plVar13 = 0;
          }
          if (local_3a0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_3a0 + 1);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(local_3a0 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32,1);
              }
            }
          }
          lVar22 = local_4e0;
          uVar31 = *(uint *)(lVar19 + 0x24);
          if (*(uint *)(local_4e0 + 0x34) <= uVar31) {
            uVar31 = 0;
          }
          puVar30[-1] = uVar31;
          *puVar30 = *(undefined4 *)(lVar19 + 0x28);
          FUN_1419cc430(lVar21 + 0x1a0,local_2f8,&local_4f0,0);
          local_790 = (ulonglong *)CONCAT44(local_790._4_4_,(uint)local_790 + 1);
          *(longlong *)(puVar30 + -3) = lVar22;
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_4e0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_4e8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4f0);
          uVar18 = uVar18 + 1;
          piVar34 = piVar34 + 1;
          puVar30 = puVar30 + 6;
        } while (uVar18 < 8);
        uVar31 = local_780;
        lVar21 = local_7a8;
        bVar36 = *(int *)(local_778 + 0x16) != -1;
        if (bVar36) {
          local_4d8 = 0;
          uStack_4d0 = 0;
          local_4c8 = 0;
          puVar14 = (undefined8 *)
                    FShaderCache::InternalCreateRenderTarget
                              (local_7a8,&local_398,
                               (longlong)*(int *)(local_778 + 0x16) * 0x2c +
                               *(longlong *)(local_7a8 + 0x430));
          puVar32 = local_398;
          if (&local_4c8 != puVar14) {
            local_4c8 = *puVar14;
            *puVar14 = 0;
          }
          if (local_398 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_398 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(local_398 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar37 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar37) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar37) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32,1);
              }
            }
          }
          FUN_1419cc430(lVar21 + 0x1a0,local_328,&local_4d8,0);
          local_698 = local_4c8;
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_4c8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_4d0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4d8);
        }
        uVar18 = (uint)local_790;
      }
      else {
        puVar30 = local_100 + 1;
        puVar32 = puVar32 + 0x10;
        uVar31 = uVar18;
        do {
          if (*(int *)(puVar32 + -4) < 1) break;
          local_438 = *(undefined4 *)puVar32;
          local_42c = (undefined1)*(int *)(puVar32 + -4);
          local_4b0 = 0;
          local_448 = 0;
          local_4c0 = 0;
          uStack_4b8 = 0;
          local_440 = 1;
          local_434 = 1;
          local_428 = 0;
          local_420 = 0;
          local_444 = 1;
          local_42b = 2;
          plVar13 = (longlong *)
                    FShaderCache::InternalCreateRenderTarget(lVar21,&local_350,&local_448);
          puVar14 = local_350;
          if (&local_4b0 != plVar13) {
            local_4b0 = *plVar13;
            *plVar13 = 0;
          }
          if (local_350 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_350 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(local_350 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar14 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar14);
                }
              }
              else {
                (**(code **)*puVar14)(puVar14,1);
              }
            }
          }
          lVar19 = local_4b0;
          uVar20 = 0;
          if (local_428._4_4_ < *(uint *)(local_4b0 + 0x34)) {
            uVar20 = local_428._4_4_;
          }
          puVar30[-1] = uVar20;
          *puVar30 = local_420;
          FUN_1419cc430(lVar21 + 0x1a0,local_2f0,&local_4c0,0);
          *(longlong *)(puVar30 + -3) = lVar19;
          uVar18 = uVar18 + 1;
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_4b0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_4b8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4c0);
          uVar31 = uVar31 + 1;
          puVar32 = (undefined8 *)((longlong)puVar32 + 4);
          puVar30 = puVar30 + 6;
        } while (uVar31 < 8);
        uVar31 = local_780;
        lVar21 = local_7a8;
        iVar17 = *(int *)(local_778 + 0x16);
        bVar36 = iVar17 != 0;
        if (iVar17 != 0) {
          local_408 = *(undefined4 *)((longlong)local_778 + 0xb4);
          local_3fc = (undefined1)iVar17;
          local_498 = 0;
          local_418 = 0;
          local_4a8 = 0;
          uStack_4a0 = 0;
          local_410 = 1;
          local_404 = 1;
          local_3f8 = 0;
          local_3f0 = 0;
          local_414 = 1;
          local_3fb = 2;
          puVar14 = (undefined8 *)
                    FShaderCache::InternalCreateRenderTarget(local_7a8,&local_388,&local_418);
          puVar32 = local_388;
          if (&local_498 != puVar14) {
            local_498 = *puVar14;
            *puVar14 = 0;
          }
          if (local_388 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_388 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(local_388 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar37 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar37) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar37) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32,1);
              }
            }
          }
          FUN_1419cc430(lVar21 + 0x1a0,local_2f4,&local_4a8,0);
          local_698 = local_498;
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_498);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_4a0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4a8);
        }
      }
      puVar32 = &local_698;
      if (!bVar36) {
        puVar32 = (undefined8 *)0x0;
      }
      FRHICommandListBase::CacheActiveRenderTargets(local_788,uVar18,&local_108,puVar32);
      puVar2 = (ulonglong *)(local_788 + 0x30);
      puVar25 = (undefined8 *)(*(longlong *)(local_788 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar25 + 0x26;
      local_790 = puVar2;
      if (*(undefined8 **)(local_788 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(puVar2,0x138);
        puVar25 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar25 + 0x26;
      }
      lVar19 = local_788;
      *puVar2 = (ulonglong)puVar14;
      uVar26 = 0;
      iVar17 = 0;
      *(int *)(local_788 + 0x14) = *(int *)(local_788 + 0x14) + 1;
      **(undefined8 **)(local_788 + 8) = puVar25;
      *(undefined8 **)(local_788 + 8) = puVar25 + 1;
      puVar25[1] = 0;
      *puVar25 = &PTR_LAB_143f59440;
      *(uint *)(puVar25 + 2) = uVar18;
      puVar25[3] = 0;
      *(undefined4 *)(puVar25 + 4) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar25 + 5) = 0;
      puVar25[6] = 0;
      *(undefined4 *)(puVar25 + 7) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar25 + 8) = 0;
      puVar25[9] = 0;
      *(undefined4 *)(puVar25 + 10) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0xb) = 0;
      puVar25[0xc] = 0;
      *(undefined4 *)(puVar25 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0xe) = 0;
      puVar25[0xf] = 0;
      *(undefined4 *)(puVar25 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0x11) = 0;
      puVar25[0x12] = 0;
      *(undefined4 *)(puVar25 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0x14) = 0;
      puVar25[0x15] = 0;
      *(undefined4 *)(puVar25 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar25 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0x17) = 0;
      puVar25[0x18] = 0;
      *(undefined4 *)(puVar25 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar25 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar25 + 0x1a) = 0;
      puVar25[0x1b] = 0;
      *(undefined4 *)(puVar25 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar25 + 0xe4) = 0;
      uVar28 = uVar26;
      if (*(int *)(puVar25 + 2) != 0) {
        do {
          uVar18 = (int)uVar28 + 1;
          uVar11 = *(undefined4 *)((longlong)&local_108 + uVar28 * 0x18 + 4);
          uVar6 = local_100[uVar28 * 6];
          uVar7 = *(undefined4 *)((longlong)local_f8 + (uVar28 * 0xc + -2) * 2);
          puVar14 = puVar25 + uVar28 * 3 + 3;
          *(undefined4 *)puVar14 = *(undefined4 *)(&local_108 + uVar28 * 3);
          *(undefined4 *)((longlong)puVar14 + 4) = uVar11;
          *(undefined4 *)(puVar14 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uVar7;
          puVar25[uVar28 * 3 + 5] = local_f8[uVar28 * 3];
          uVar28 = (ulonglong)uVar18;
        } while (uVar18 < *(uint *)(puVar25 + 2));
        iVar17 = *(int *)(puVar25 + 0x1d);
      }
      uVar28 = uVar26;
      if (iVar17 != 0) {
        do {
          uVar18 = (int)uVar28 + 1;
          puVar25[uVar28 + 0x1e] = *(undefined8 *)(uVar28 * 8);
          uVar28 = (ulonglong)uVar18;
        } while (uVar18 < *(uint *)(puVar25 + 0x1d));
      }
      if (puVar32 != (undefined8 *)0x0) {
        uVar11 = *(undefined4 *)((longlong)puVar32 + 4);
        uVar6 = *(undefined4 *)(puVar32 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar32 + 0xc);
        *(undefined4 *)(puVar25 + 0x1b) = *(undefined4 *)puVar32;
        *(undefined4 *)((longlong)puVar25 + 0xdc) = uVar11;
        *(undefined4 *)(puVar25 + 0x1c) = uVar6;
        *(undefined4 *)((longlong)puVar25 + 0xe4) = uVar7;
      }
      iVar17 = *(int *)(local_788 + 0x98);
      *(int *)(lVar21 + 0xc28) = iVar17;
      uVar28 = uVar26;
      if (iVar17 != 0) {
        do {
          lVar22 = *(longlong *)(local_788 + 0xa0 + uVar28 * 0x18);
          if (lVar22 == 0) {
            *(undefined4 *)(lVar21 + 0xc2c + uVar28 * 4) = 0;
          }
          else {
            *(undefined4 *)(lVar21 + 0xc2c + uVar28 * 4) = *(undefined4 *)(lVar22 + 0x3c);
            *(undefined4 *)(lVar21 + 0xc4c + uVar28 * 4) =
                 *(undefined4 *)(*(longlong *)(local_788 + 0xa0 + uVar28 * 0x18) + 0x40);
          }
          *(undefined1 *)(lVar21 + 0xc6c + uVar28) =
               *(undefined1 *)(local_788 + 0xb0 + uVar28 * 0x18);
          *(undefined1 *)(lVar21 + 0xc74 + uVar28) =
               *(undefined1 *)(local_788 + 0xb1 + uVar28 * 0x18);
          if (*(int *)(lVar21 + 0xc2c + uVar28 * 4) != 0) {
            *(undefined2 *)(lVar21 + 0xc8c) =
                 *(undefined2 *)(*(longlong *)(local_788 + 0xa0 + uVar28 * 0x18) + 0x38);
          }
          uVar18 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar18;
        } while (uVar18 < *(uint *)(lVar21 + 0xc28));
      }
      if (*(longlong *)(local_788 + 0x160) == 0) {
        *(undefined4 *)(lVar21 + 0xc7c) = 0;
      }
      else {
        uVar18 = *(uint *)(*(longlong *)(local_788 + 0x160) + 0x3c);
        uVar26 = (ulonglong)uVar18;
        *(uint *)(lVar21 + 0xc7c) = uVar18;
        *(undefined4 *)(lVar21 + 0xc80) = *(undefined4 *)(*(longlong *)(local_788 + 0x160) + 0x40);
      }
      *(undefined1 *)(lVar21 + 0xc84) = *(undefined1 *)(local_788 + 0x168);
      *(undefined1 *)(lVar21 + 0xc85) = *(undefined1 *)(local_788 + 0x169);
      *(undefined1 *)(lVar21 + 0xc86) = *(undefined1 *)(local_788 + 0x16a);
      *(undefined1 *)(lVar21 + 0xc87) = *(undefined1 *)(local_788 + 0x16b);
      *(undefined4 *)(lVar21 + 0xc88) = *(undefined4 *)(local_788 + 0x16c);
      if ((int)uVar26 != 0) {
        *(undefined2 *)(lVar21 + 0xc8c) = *(undefined2 *)(*(longlong *)(local_788 + 0x160) + 0x38);
      }
      *(undefined8 **)(lVar21 + 0xc08) = local_6f0;
      *(undefined8 **)(lVar21 + 0xc18) = local_6e8;
      *(undefined8 **)(lVar21 + 0xc10) = local_6e0;
      puVar24 = local_798 + (longlong)*(int *)(local_798 + 0x80) * 4;
      if (local_798 != puVar24) {
        puVar2 = (ulonglong *)(local_788 + 0x30);
        puVar27 = local_798;
        lVar22 = local_788;
        do {
          bVar3 = *(byte *)((longlong)puVar27 + 1);
          uVar8 = *puVar27;
          puVar14 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar14 + 5;
          if (puVar27[2] == 0) {
            uVar35 = *(undefined8 *)(lVar21 + 0x2a8);
          }
          else {
            uVar35 = *(undefined8 *)(lVar21 + 0x2a0);
          }
          if (*(undefined8 **)(lVar19 + 0x38) < puVar32) {
            FMemStackBase::AllocateNewChunk(puVar2);
            puVar14 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar32 = puVar14 + 5;
            lVar22 = local_788;
          }
          *puVar2 = (ulonglong)puVar32;
          puVar27 = puVar27 + 4;
          *(int *)(lVar22 + 0x14) = *(int *)(lVar22 + 0x14) + 1;
          **(undefined8 **)(lVar22 + 8) = puVar14;
          *(undefined8 **)(lVar22 + 8) = puVar14 + 1;
          puVar14[1] = 0;
          *(uint *)(puVar14 + 4) = (uint)bVar3;
          puVar14[3] = uVar35;
          *(uint *)(puVar14 + 2) = (uint)(byte)uVar8;
          *puVar14 = &PTR_LAB_143f489e0;
          lVar21 = local_7a8;
          uVar31 = local_780;
        } while (puVar27 != puVar24);
      }
      puVar24 = local_798;
      if (local_768 == 0) {
        if ((byte)local_798[0x92] == 0) {
          uVar31 = uVar31 | 0x800;
          local_6a8 = (undefined8 *)0x0;
          ppuVar15 = &local_6a8;
        }
        else {
          uVar31 = uVar31 | 0x400;
          FUN_1419ed7a0(lVar21 + 0x6b8,&local_668,local_798 + 0x84);
          if ((local_668 == -1) ||
             (lVar19 = (longlong)local_668 * 0x30 + *(longlong *)(lVar21 + 0x6b8), lVar19 == 0)) {
            local_758 = (undefined8 *)0x0;
          }
          else {
            local_758 = *(undefined8 **)(lVar19 + 0x20);
            if (local_758 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_758 + 1) = *(int *)(local_758 + 1) + 1;
              UNLOCK();
              ppuVar15 = &local_758;
              goto LAB_1419f79b7;
            }
          }
          ppuVar15 = &local_758;
        }
LAB_1419f79b7:
        puVar32 = *ppuVar15;
        *ppuVar15 = (undefined8 *)0x0;
        puVar14 = local_6a8;
        if (((uVar31 >> 0xb & 1) != 0) &&
           (uVar31 = uVar31 & 0xfffff7ff, local_6a8 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_6a8 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_6a8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar14 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar14)(puVar14);
            }
          }
        }
        puVar14 = local_758;
        if (((uVar31 >> 10 & 1) != 0) &&
           (uVar31 = uVar31 & 0xfffffbff, local_758 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_758 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_758 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar14 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar14)(puVar14);
            }
          }
        }
        if ((byte)puVar24[0xa2] == 0) {
          local_6a0 = (undefined8 *)0x0;
          ppuVar15 = &local_6a0;
          uVar18 = 0x2000;
        }
        else {
          FUN_1419ed7a0(lVar21 + 0x708,&local_664,puVar24 + 0x94);
          if ((local_664 == -1) ||
             (lVar21 = (longlong)local_664 * 0x30 + *(longlong *)(lVar21 + 0x708), lVar21 == 0)) {
            local_750 = (undefined8 *)0x0;
          }
          else {
            local_750 = *(undefined8 **)(lVar21 + 0x20);
            if (local_750 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_750 + 1) = *(int *)(local_750 + 1) + 1;
              UNLOCK();
              ppuVar15 = &local_750;
              uVar18 = 0x1000;
              goto LAB_1419f7b00;
            }
          }
          ppuVar15 = &local_750;
          uVar18 = 0x1000;
        }
LAB_1419f7b00:
        puVar14 = *ppuVar15;
        uVar18 = uVar18 | uVar31;
        *ppuVar15 = (undefined8 *)0x0;
        puVar25 = local_6a0;
        if (((uVar18 >> 0xd & 1) != 0) &&
           (uVar18 = uVar18 & 0xffffdfff, local_6a0 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_6a0 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_6a0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar25 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar25)(puVar25);
            }
          }
        }
        puVar25 = local_750;
        if (((uVar18 >> 0xc & 1) != 0) &&
           (uVar18 = uVar18 & 0xffffefff, local_750 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_750 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_750 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar25 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar25)(puVar25);
            }
          }
        }
        lVar21 = local_7a8;
        if ((byte)puVar24[0xb2] == 0) {
          local_6c8 = (undefined8 *)0x0;
          ppuVar15 = &local_6c8;
          uVar31 = 0x8000;
        }
        else {
          FUN_1419ed7a0(local_7a8 + 0x758,&local_660,puVar24 + 0xa4);
          if ((local_660 == -1) ||
             (lVar19 = (longlong)local_660 * 0x30 + *(longlong *)(lVar21 + 0x758), lVar19 == 0)) {
            local_748 = (undefined8 *)0x0;
          }
          else {
            local_748 = *(undefined8 **)(lVar19 + 0x20);
            if (local_748 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_748 + 1) = *(int *)(local_748 + 1) + 1;
              UNLOCK();
              ppuVar15 = &local_748;
              uVar31 = 0x4000;
              goto LAB_1419f7c5a;
            }
          }
          ppuVar15 = &local_748;
          uVar31 = 0x4000;
        }
LAB_1419f7c5a:
        puVar25 = *ppuVar15;
        uVar18 = uVar18 | uVar31;
        *ppuVar15 = (undefined8 *)0x0;
        puVar4 = local_6c8;
        if (((uVar18 >> 0xf & 1) != 0) &&
           (uVar18 = uVar18 & 0xffff7fff, local_6c8 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_6c8 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_6c8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4);
            }
          }
        }
        puVar4 = local_748;
        if (((uVar18 >> 0xe & 1) != 0) &&
           (uVar18 = uVar18 & 0xffffbfff, local_748 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_748 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_748 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4);
            }
          }
        }
        if ((byte)local_798[0xc2] == 0) {
          ppuVar15 = &local_6c0;
          local_6c0 = (undefined8 *)0x0;
          uVar31 = 0x20000;
        }
        else {
          FUN_1419ed7a0(lVar21 + 0x7a8,&local_65c,local_798 + 0xb4);
          if ((local_65c == -1) ||
             (lVar21 = (longlong)local_65c * 0x30 + *(longlong *)(lVar21 + 0x7a8), lVar21 == 0)) {
            ppuVar15 = &local_740;
            local_740 = (undefined8 *)0x0;
            uVar31 = 0x10000;
          }
          else {
            local_740 = *(undefined8 **)(lVar21 + 0x20);
            if (local_740 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_740 + 1) = *(int *)(local_740 + 1) + 1;
              UNLOCK();
            }
            ppuVar15 = &local_740;
            uVar31 = 0x10000;
          }
        }
        puVar4 = *ppuVar15;
        uVar18 = uVar18 | uVar31;
        *ppuVar15 = (undefined8 *)0x0;
        puVar5 = local_6c0;
        if (((uVar18 >> 0x11 & 1) != 0) &&
           (uVar18 = uVar18 & 0xfffdffff, local_6c0 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_6c0 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_6c0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5);
            }
          }
        }
        puVar5 = local_740;
        if (((uVar18 >> 0x10 & 1) != 0) &&
           (uVar18 = uVar18 & 0xfffeffff, local_740 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_740 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_740 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5);
            }
          }
        }
        lVar21 = local_7a8;
        if ((byte)local_798[0xd2] == 0) {
          ppuVar15 = &local_6b8;
          local_6b8 = (undefined8 *)0x0;
          uVar31 = 0x80000;
        }
        else {
          FUN_1419ed7a0(local_7a8 + 0x7f8,&local_658,local_798 + 0xc4);
          if ((local_658 == -1) ||
             (lVar21 = (longlong)local_658 * 0x30 + *(longlong *)(lVar21 + 0x7f8), lVar21 == 0)) {
            ppuVar15 = &local_738;
            local_738 = (undefined8 *)0x0;
            uVar31 = 0x40000;
          }
          else {
            local_738 = *(undefined8 **)(lVar21 + 0x20);
            if (local_738 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_738 + 1) = *(int *)(local_738 + 1) + 1;
              UNLOCK();
            }
            ppuVar15 = &local_738;
            uVar31 = 0x40000;
          }
        }
        puVar5 = *ppuVar15;
        uVar31 = uVar18 | uVar31;
        *ppuVar15 = (undefined8 *)0x0;
        puVar9 = local_6b8;
        if (((uVar31 >> 0x13 & 1) != 0) &&
           (uVar31 = uVar31 & 0xfff7ffff, local_6b8 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_6b8 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_6b8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar9 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar9 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_6b8);
              }
            }
            else {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        }
        puVar9 = local_738;
        if (((uVar31 >> 0x12 & 1) != 0) &&
           (uVar31 = uVar31 & 0xfffbffff, local_738 != (undefined8 *)0x0)) {
          LOCK();
          piVar34 = (int *)(local_738 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(local_738 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar9 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar9 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_738);
              }
            }
            else {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        }
        bVar36 = (bool)(byte)local_798[0xd2] == (puVar5 != (undefined8 *)0x0);
        bVar37 = (bool)(byte)local_798[0xc2] == (puVar4 != (undefined8 *)0x0);
        bVar38 = (bool)(byte)local_798[0xb2] == (puVar25 != (undefined8 *)0x0);
        bVar39 = (bool)(byte)local_798[0xa2] == (puVar14 != (undefined8 *)0x0);
        bVar40 = (bool)(byte)local_798[0x92] == (puVar32 != (undefined8 *)0x0);
        if (bVar40 && ((bVar38 && (bVar36 && bVar37)) && bVar39)) {
          (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_558,&DAT_146ab6e78,local_798);
          local_778 = local_558;
          if ((bVar40 && ((bVar38 && (bVar36 && bVar37)) && bVar39)) &&
              local_558 != (undefined8 *)0x0) {
            local_7d8 = puVar4;
            local_7d0 = puVar5;
            local_7c8 = puVar14;
            local_7c0 = puVar25;
            (**(code **)(*DAT_146ab6358 + 0xe8))(DAT_146ab6358,&local_518,local_558,puVar32);
            local_768 = local_518;
            local_518 = 0;
          }
          local_778 = local_558;
          if (local_558 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(local_558 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(local_558 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)local_778 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)local_778 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*local_778)(local_778);
              }
            }
          }
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar34 = (int *)(puVar5 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(puVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5);
            }
          }
        }
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar34 = (int *)(puVar4 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4);
            }
          }
        }
        if (puVar25 != (undefined8 *)0x0) {
          LOCK();
          piVar34 = (int *)(puVar25 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(puVar25 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar25 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar25)(puVar25);
            }
          }
        }
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar34 = (int *)(puVar14 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(puVar14 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar14 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar14)(puVar14);
            }
          }
        }
        if (puVar32 != (undefined8 *)0x0) {
          LOCK();
          piVar34 = (int *)(puVar32 + 1);
          iVar17 = *piVar34;
          *piVar34 = *piVar34 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            if ((*(char *)(puVar32 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
              if (bVar36) {
                *(int *)((longlong)puVar32 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar36) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar32)(puVar32);
            }
          }
        }
        if (local_768 == 0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6e0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6e8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6f0);
          param_2 = local_788;
          plVar33 = local_770;
          cVar10 = local_7b8;
LAB_1419f9439:
          lVar21 = local_7a8;
          puVar24 = local_798;
          if ((((cVar10 != '\0') && (local_768 != 0)) &&
              ((int)plVar33[1] != *(int *)((longlong)plVar33 + 0x34))) &&
             ((*(uint *)(local_7a8 + 0x2b0) < 0x1b &&
              ((0x700a74aU >> (*(uint *)(local_7a8 + 0x2b0) & 0x1f) & 1) != 0)))) {
            lVar19 = FUN_1419f3990(local_7a8);
            puVar24 = local_798;
            if ((byte)local_798[0x92] != 0) {
              FUN_1419ed7a0(lVar21 + 0x6b8,&local_630,local_798 + 0x84);
              if ((local_630 == -1) ||
                 (lVar22 = (longlong)local_630 * 0x30 + *(longlong *)(lVar21 + 0x6b8), lVar22 == 0))
              {
                local_5f0 = (undefined8 *)0x0;
              }
              else {
                local_5f0 = *(undefined8 **)(lVar22 + 0x20);
                if (local_5f0 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_5f0 + 1) = *(int *)(local_5f0 + 1) + 1;
                  UNLOCK();
                }
              }
              local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
              local_7d8 = local_5f0;
              FUN_1419d42d0(lVar21,param_2,lVar19 + 0x1a0,0);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5f0);
            }
            lVar22 = lVar19 + 0x1a0;
            if ((byte)puVar24[0xa2] != 0) {
              FUN_1419ed7a0(lVar21 + 0x708,&local_62c,puVar24 + 0x94);
              if ((local_62c == -1) ||
                 (lVar16 = (longlong)local_62c * 0x30 + *(longlong *)(lVar21 + 0x708), lVar16 == 0))
              {
                local_5e8 = (undefined8 *)0x0;
              }
              else {
                local_5e8 = *(undefined8 **)(lVar16 + 0x20);
                if (local_5e8 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_5e8 + 1) = *(int *)(local_5e8 + 1) + 1;
                  UNLOCK();
                }
              }
              local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
              local_7d8 = local_5e8;
              FUN_1419d3cf0(lVar21,param_2,lVar19 + 0x1a0,3);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5e8);
            }
            if ((byte)puVar24[0xb2] != 0) {
              FUN_1419ed7a0(lVar21 + 0x758,&local_628,puVar24 + 0xa4);
              if ((local_628 == -1) ||
                 (lVar19 = (longlong)local_628 * 0x30 + *(longlong *)(lVar21 + 0x758), lVar19 == 0))
              {
                local_5e0 = (undefined8 *)0x0;
              }
              else {
                local_5e0 = *(undefined8 **)(lVar19 + 0x20);
                if (local_5e0 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_5e0 + 1) = *(int *)(local_5e0 + 1) + 1;
                  UNLOCK();
                }
              }
              local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
              local_7d8 = local_5e0;
              FUN_1419d3130(lVar21,param_2,lVar22,4);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5e0);
            }
            if ((byte)puVar24[0xc2] != 0) {
              FUN_1419ed7a0(lVar21 + 0x7a8,&local_624,puVar24 + 0xb4);
              if ((local_624 == -1) ||
                 (lVar19 = (longlong)local_624 * 0x30 + *(longlong *)(lVar21 + 0x7a8), lVar19 == 0))
              {
                local_5d8 = (undefined8 *)0x0;
              }
              else {
                local_5d8 = *(undefined8 **)(lVar19 + 0x20);
                if (local_5d8 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_5d8 + 1) = *(int *)(local_5d8 + 1) + 1;
                  UNLOCK();
                }
              }
              local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
              local_7d8 = local_5d8;
              FUN_1419d3710(lVar21,param_2,lVar22,1);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5d8);
            }
            if ((byte)puVar24[0xd2] != 0) {
              FUN_1419ed7a0(lVar21 + 0x7f8,local_720,puVar24 + 0xc4);
              if ((local_720[0] == -1) ||
                 (lVar19 = (longlong)local_720[0] * 0x30 + *(longlong *)(lVar21 + 0x7f8),
                 lVar19 == 0)) {
                local_5d0 = (undefined8 *)0x0;
              }
              else {
                local_5d0 = *(undefined8 **)(lVar19 + 0x20);
                if (local_5d0 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_5d0 + 1) = *(int *)(local_5d0 + 1) + 1;
                  UNLOCK();
                }
              }
              local_7d0 = (undefined8 *)CONCAT71(local_7d0._1_7_,1);
              local_7d8 = local_5d0;
              FUN_1419d2b50(lVar21,param_2,lVar22,2);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5d0);
            }
          }
          puVar27 = puVar24 + (longlong)*(int *)(puVar24 + 0x80) * 4;
          for (; puVar24 != puVar27; puVar24 = puVar24 + 4) {
            uVar8 = *puVar24;
            puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar32 = puVar14 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar32) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30);
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar32 = puVar14 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar32;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar14;
            *(undefined8 **)(param_2 + 8) = puVar14 + 1;
            puVar14[1] = 0;
            *puVar14 = &PTR_LAB_143f489e0;
            *(uint *)(puVar14 + 2) = (uint)(byte)uVar8;
            puVar14[3] = 0;
            *(undefined4 *)(puVar14 + 4) = 0;
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_768);
          return;
        }
      }
      puVar24 = local_798;
      lVar21 = local_7a8;
      if ((byte)local_798[0x92] == 0) {
        uVar31 = uVar31 | 0x200000;
        ppuVar15 = &local_6b0;
        local_6b0 = (undefined8 *)0x0;
      }
      else {
        uVar31 = uVar31 | 0x100000;
        FUN_1419ed7a0(local_7a8 + 0x6b8,&local_654,local_798 + 0x84);
        if ((local_654 == -1) ||
           (lVar19 = (longlong)local_654 * 0x30 + *(longlong *)(lVar21 + 0x6b8), lVar19 == 0)) {
          ppuVar15 = &local_730;
          local_730 = (undefined8 *)0x0;
        }
        else {
          local_730 = *(undefined8 **)(lVar19 + 0x20);
          if (local_730 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_730 + 1) = *(int *)(local_730 + 1) + 1;
            UNLOCK();
          }
          ppuVar15 = &local_730;
        }
      }
      puVar32 = *ppuVar15;
      *ppuVar15 = (undefined8 *)0x0;
      puVar14 = local_6b0;
      if (((uVar31 >> 0x15 & 1) != 0) &&
         (uVar31 = uVar31 & 0xffdfffff, local_6b0 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_6b0 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6b0 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar14 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar14)(puVar14);
          }
        }
      }
      puVar14 = local_730;
      if (((uVar31 >> 0x14 & 1) != 0) &&
         (uVar31 = uVar31 & 0xffefffff, local_730 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_730 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_730 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar14 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar14)(puVar14);
          }
        }
      }
      if ((byte)puVar24[0xa2] == 0) {
        local_700 = (undefined8 *)0x0;
        ppuVar15 = &local_700;
        uVar18 = 0x800000;
      }
      else {
        FUN_1419ed7a0(lVar21 + 0x708,&local_5c8,puVar24 + 0x94);
        if ((local_5c8 == -1) ||
           (lVar19 = (longlong)local_5c8 * 0x30 + *(longlong *)(lVar21 + 0x708), lVar19 == 0)) {
          local_728 = (undefined8 *)0x0;
        }
        else {
          local_728 = *(undefined8 **)(lVar19 + 0x20);
          if (local_728 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_728 + 1) = *(int *)(local_728 + 1) + 1;
            UNLOCK();
            ppuVar15 = &local_728;
            uVar18 = 0x400000;
            goto LAB_1419f84ea;
          }
        }
        ppuVar15 = &local_728;
        uVar18 = 0x400000;
      }
LAB_1419f84ea:
      puVar14 = *ppuVar15;
      uVar31 = uVar31 | uVar18;
      *ppuVar15 = (undefined8 *)0x0;
      puVar25 = local_700;
      if (((uVar31 >> 0x17 & 1) != 0) &&
         (uVar31 = uVar31 & 0xff7fffff, local_700 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_700 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_700 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar25 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar25)(puVar25);
          }
        }
      }
      puVar25 = local_728;
      if (((uVar31 >> 0x16 & 1) != 0) &&
         (uVar31 = uVar31 & 0xffbfffff, local_728 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_728 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_728 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar25 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar25)(puVar25);
          }
        }
      }
      if ((byte)puVar24[0xb2] == 0) {
        local_6f8 = (undefined8 *)0x0;
        uVar18 = 0x2000000;
        ppuVar15 = &local_6f8;
      }
      else {
        FUN_1419ed7a0(lVar21 + 0x758,&local_650,puVar24 + 0xa4);
        if ((local_650 == -1) ||
           (lVar19 = (longlong)local_650 * 0x30 + *(longlong *)(lVar21 + 0x758), lVar19 == 0)) {
          local_718 = (undefined8 *)0x0;
          uVar18 = 0x1000000;
          ppuVar15 = &local_718;
        }
        else {
          local_718 = *(undefined8 **)(lVar19 + 0x20);
          if (local_718 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_718 + 1) = *(int *)(local_718 + 1) + 1;
            UNLOCK();
          }
          uVar18 = 0x1000000;
          ppuVar15 = &local_718;
        }
      }
      puVar25 = *ppuVar15;
      uVar31 = uVar31 | uVar18;
      *ppuVar15 = (undefined8 *)0x0;
      puVar4 = local_6f8;
      if (((uVar31 >> 0x19 & 1) != 0) &&
         (uVar31 = uVar31 & 0xfdffffff, local_6f8 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_6f8 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6f8 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4);
          }
        }
      }
      puVar4 = local_718;
      if (((uVar31 >> 0x18 & 1) != 0) &&
         (uVar31 = uVar31 & 0xfeffffff, local_718 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_718 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_718 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4);
          }
        }
      }
      if ((byte)local_798[0xc2] == 0) {
        ppuVar15 = &local_6d0;
        local_6d0 = (undefined8 *)0x0;
        uVar18 = 0x8000000;
      }
      else {
        FUN_1419ed7a0(lVar21 + 0x7a8,&local_64c,local_798 + 0xb4);
        if ((local_64c == -1) ||
           (lVar21 = (longlong)local_64c * 0x30 + *(longlong *)(lVar21 + 0x7a8), lVar21 == 0)) {
          ppuVar15 = &local_710;
          local_710 = (undefined8 *)0x0;
          uVar18 = 0x4000000;
        }
        else {
          local_710 = *(undefined8 **)(lVar21 + 0x20);
          if (local_710 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_710 + 1) = *(int *)(local_710 + 1) + 1;
            UNLOCK();
          }
          ppuVar15 = &local_710;
          uVar18 = 0x4000000;
        }
      }
      puVar4 = *ppuVar15;
      uVar31 = uVar31 | uVar18;
      *ppuVar15 = (undefined8 *)0x0;
      puVar5 = local_6d0;
      if (((uVar31 >> 0x1b & 1) != 0) &&
         (uVar31 = uVar31 & 0xf7ffffff, local_6d0 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_6d0 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6d0 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar5 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar5)(puVar5);
          }
        }
      }
      puVar5 = local_710;
      if (((uVar31 >> 0x1a & 1) != 0) &&
         (uVar31 = uVar31 & 0xfbffffff, local_710 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_710 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_710 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar5 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar5)(puVar5);
          }
        }
      }
      lVar21 = local_7a8;
      if ((byte)local_798[0xd2] == 0) {
        ppuVar15 = &local_6d8;
        local_6d8 = (undefined8 *)0x0;
        uVar18 = 0x20000000;
      }
      else {
        FUN_1419ed7a0(local_7a8 + 0x7f8,&local_648,local_798 + 0xc4);
        if ((local_648 == -1) ||
           (lVar21 = (longlong)local_648 * 0x30 + *(longlong *)(lVar21 + 0x7f8), lVar21 == 0)) {
          ppuVar15 = &local_708;
          local_708 = (undefined8 *)0x0;
          uVar18 = 0x10000000;
        }
        else {
          local_708 = *(undefined8 **)(lVar21 + 0x20);
          if (local_708 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_708 + 1) = *(int *)(local_708 + 1) + 1;
            UNLOCK();
          }
          ppuVar15 = &local_708;
          uVar18 = 0x10000000;
        }
      }
      puVar5 = *ppuVar15;
      uVar31 = uVar31 | uVar18;
      *ppuVar15 = (undefined8 *)0x0;
      puVar9 = local_6d8;
      local_780 = uVar31;
      if (((uVar31 >> 0x1d & 1) != 0) &&
         (uVar31 = uVar31 & 0xdfffffff, local_780 = uVar31, local_6d8 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_6d8 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6d8 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar9 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar9 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_6d8);
            }
          }
          else {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
      puVar9 = local_708;
      if (((uVar31 >> 0x1c & 1) != 0) &&
         (local_780 = uVar31 & 0xefffffff, local_708 != (undefined8 *)0x0)) {
        LOCK();
        piVar34 = (int *)(local_708 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_708 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar9 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar9 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_708);
            }
          }
          else {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
      puVar24 = local_798;
      (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_540,&DAT_146ab6e78,local_798);
      local_778 = local_540;
      if (local_540 != (undefined8 *)0x0 &&
          ((bool)(byte)puVar24[0x92] == (puVar32 != (undefined8 *)0x0) &&
          (((bool)(byte)puVar24[0xb2] == (puVar25 != (undefined8 *)0x0) &&
           ((bool)(byte)puVar24[0xd2] == (puVar5 != (undefined8 *)0x0) &&
           (bool)(byte)puVar24[0xc2] == (puVar4 != (undefined8 *)0x0))) &&
          (bool)(byte)puVar24[0xa2] == (puVar14 != (undefined8 *)0x0)))) {
        *(undefined8 **)(local_7a8 + 0xbe0) = puVar32;
        *(undefined8 *)(local_7a8 + 0xbd8) = local_540;
        *(undefined8 **)(local_7a8 + 0xbe8) = puVar4;
        *(undefined8 **)(local_7a8 + 0xbf0) = puVar5;
        *(undefined8 **)(local_7a8 + 0xbf8) = puVar14;
        *(undefined8 **)(local_7a8 + 0xc00) = puVar25;
        *(undefined4 *)(local_7a8 + 0xc24) = 0;
        FUN_141ed6ac0(local_788,(undefined8 *)(local_7a8 + 0xbd8),2);
      }
      local_778 = local_540;
      if (local_540 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(local_540 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_540 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)local_778 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)local_778 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*local_778)(local_778);
          }
        }
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(puVar5 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(puVar5 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar5 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar5 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar5)(puVar5);
          }
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(puVar4 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4);
          }
        }
      }
      if (puVar25 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(puVar25 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(puVar25 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar25 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar25 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar25)(puVar25);
          }
        }
      }
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(puVar14 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(puVar14 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar14 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar14 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar14)(puVar14);
          }
        }
      }
      if (puVar32 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(puVar32 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(puVar32 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar32 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar32)(puVar32);
          }
        }
      }
      puVar24 = local_798;
      param_1 = local_7a8;
      if ((*(uint *)(local_7a8 + 0x2b0) < 0x1b) &&
         ((0x700a74aU >> (*(uint *)(local_7a8 + 0x2b0) & 0x1f) & 1) != 0)) {
        lVar21 = local_788;
        if ((byte)local_798[0x92] != 0) {
          plVar13 = (longlong *)(local_7a8 + 0x6b8);
          FUN_1419ed7a0(plVar13,&local_644,local_798 + 0x84);
          lVar21 = local_788;
          if ((local_644 == -1) || (lVar19 = (longlong)local_644 * 0x30 + *plVar13, lVar19 == 0)) {
            puVar32 = (undefined8 *)0x0;
          }
          else {
            puVar32 = *(undefined8 **)(lVar19 + 0x20);
            local_380 = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
              UNLOCK();
            }
          }
          local_7d0 = (undefined8 *)((ulonglong)local_7d0 & 0xffffffffffffff00);
          local_7d8 = puVar32;
          FUN_1419d42d0(param_1,local_788,local_7a0);
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar32 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32);
              }
            }
          }
        }
        if ((byte)puVar24[0xa2] != 0) {
          FUN_1419ed7a0((longlong *)(param_1 + 0x708),&local_640,puVar24 + 0x94);
          if ((local_640 == -1) ||
             (lVar19 = (longlong)local_640 * 0x30 + *(longlong *)(param_1 + 0x708), lVar19 == 0)) {
            puVar32 = (undefined8 *)0x0;
          }
          else {
            puVar32 = *(undefined8 **)(lVar19 + 0x20);
            local_378 = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
              UNLOCK();
            }
          }
          local_7d0 = (undefined8 *)((ulonglong)local_7d0 & 0xffffffffffffff00);
          local_7d8 = puVar32;
          FUN_1419d3cf0(param_1,lVar21,local_7a0);
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar32 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32);
              }
            }
          }
        }
        if ((byte)puVar24[0xb2] != 0) {
          FUN_1419ed7a0((longlong *)(param_1 + 0x758),&local_63c,puVar24 + 0xa4);
          if ((local_63c == -1) ||
             (lVar19 = (longlong)local_63c * 0x30 + *(longlong *)(param_1 + 0x758), lVar19 == 0)) {
            puVar32 = (undefined8 *)0x0;
          }
          else {
            puVar32 = *(undefined8 **)(lVar19 + 0x20);
            local_370 = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
              UNLOCK();
            }
          }
          local_7d0 = (undefined8 *)((ulonglong)local_7d0 & 0xffffffffffffff00);
          local_7d8 = puVar32;
          FUN_1419d3130(param_1,lVar21,local_7a0);
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar32 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32);
              }
            }
          }
        }
        if ((byte)puVar24[0xc2] != 0) {
          FUN_1419ed7a0((longlong *)(param_1 + 0x7a8),&local_638,puVar24 + 0xb4);
          if ((local_638 == -1) ||
             (lVar19 = (longlong)local_638 * 0x30 + *(longlong *)(param_1 + 0x7a8), lVar19 == 0)) {
            puVar32 = (undefined8 *)0x0;
          }
          else {
            puVar32 = *(undefined8 **)(lVar19 + 0x20);
            local_368 = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
              UNLOCK();
            }
          }
          local_7d0 = (undefined8 *)((ulonglong)local_7d0 & 0xffffffffffffff00);
          local_7d8 = puVar32;
          FUN_1419d3710(param_1,lVar21,local_7a0);
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar32 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32);
              }
            }
          }
        }
        if ((byte)puVar24[0xd2] != 0) {
          FUN_1419ed7a0((longlong *)(param_1 + 0x7f8),&local_634,puVar24 + 0xc4);
          if ((local_634 == -1) ||
             (lVar19 = (longlong)local_634 * 0x30 + *(longlong *)(param_1 + 0x7f8), lVar19 == 0)) {
            puVar32 = (undefined8 *)0x0;
          }
          else {
            puVar32 = *(undefined8 **)(lVar19 + 0x20);
            local_360 = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
              UNLOCK();
            }
          }
          local_7d0 = (undefined8 *)((ulonglong)local_7d0 & 0xffffffffffffff00);
          local_7d8 = puVar32;
          FUN_1419d2b50(param_1,lVar21,local_7a0);
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar34 = (int *)(puVar32 + 1);
            iVar17 = *piVar34;
            *piVar34 = *piVar34 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar32 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                LOCK();
                bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
                if (bVar36) {
                  *(int *)((longlong)puVar32 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar36) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar32)(puVar32);
              }
            }
          }
        }
      }
      puVar2 = local_790;
      cVar10 = *(char *)(local_7a0 + 0x1bc);
      if (cVar10 == '\0') {
        puVar14 = (undefined8 *)(*local_790 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar14 + 4;
        if ((undefined8 *)local_790[1] < puVar32) {
          FMemStackBase::AllocateNewChunk(local_790);
          puVar14 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar14 + 4;
        }
        *puVar2 = (ulonglong)puVar32;
        *(int *)(local_788 + 0x14) = *(int *)(local_788 + 0x14) + 1;
        **(undefined8 **)(local_788 + 8) = puVar14;
        *(undefined8 **)(local_788 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f59410;
        puVar14[2] = 0;
        *(undefined4 *)(puVar14 + 3) = 1;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 1;
      }
      else {
        if (cVar10 == '\x02') {
          lVar21 = *(longlong *)(param_1 + 0x290);
        }
        else {
          if (cVar10 != '\x04') goto LAB_1419f92d4;
          lVar21 = *(longlong *)(param_1 + 0x298);
        }
        if (lVar21 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x8d8);
        }
        puVar2 = local_790;
        puVar14 = (undefined8 *)(*local_790 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar14 + 7;
        if ((undefined8 *)local_790[1] < puVar32) {
          FMemStackBase::AllocateNewChunk(local_790);
          puVar14 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar14 + 7;
        }
        *puVar2 = (ulonglong)puVar32;
        *(int *)(local_788 + 0x14) = *(int *)(local_788 + 0x14) + 1;
        **(undefined8 **)(local_788 + 8) = puVar14;
        *(undefined8 **)(local_788 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f489d0;
        puVar14[2] = lVar21;
        puVar14[3] = 0;
        *(undefined4 *)(puVar14 + 4) = 0;
        *(undefined8 *)((longlong)puVar14 + 0x24) = 3;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = 1;
        *(undefined4 *)(puVar14 + 6) = 1;
      }
LAB_1419f92d4:
      puVar32 = local_6e0;
      param_2 = local_788;
      if (local_6e0 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(local_6e0 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6e0 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar32 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
            }
          }
          else {
            (**(code **)*puVar32)(puVar32,1);
          }
        }
      }
      puVar32 = local_6e8;
      if (local_6e8 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(local_6e8 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          if ((*(char *)(local_6e8 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            LOCK();
            bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar32 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
            }
          }
          else {
            (**(code **)*puVar32)(puVar32,1);
          }
        }
      }
      puVar32 = local_6f0;
      if (local_6f0 != (undefined8 *)0x0) {
        LOCK();
        piVar34 = (int *)(local_6f0 + 1);
        iVar17 = *piVar34;
        *piVar34 = *piVar34 + -1;
        UNLOCK();
        local_7b8 = 1;
        if (iVar17 == 1) {
          if ((*(char *)(local_6f0 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
            local_7b8 = 1;
            LOCK();
            bVar36 = *(int *)((longlong)puVar32 + 0xc) == 0;
            if (bVar36) {
              *(int *)((longlong)puVar32 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar36) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar32);
            }
          }
          else {
            (**(code **)*puVar32)(puVar32,1);
          }
        }
      }
      local_7b8 = '\x01';
      cVar10 = '\x01';
      plVar33 = local_770;
    }
    uStack_458._0_4_ = (uint)uStack_458 & ~uStack_468._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_468);
  } while( true );
}



// FUNCTION 1419f9860 FUN_1419f9860 body=2757 status=ok
// SIG undefined FUN_1419f9860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419f9860(longlong param_1,longlong param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined4 local_290;
  undefined8 *local_288;
  undefined8 **local_280;
  ulonglong local_278;
  int local_270;
  int local_26c;
  longlong *local_268;
  int local_260;
  uint uStack_25c;
  uint *puStack_258;
  undefined4 local_250;
  int iStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 local_230 [8];
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 uStack_200;
  uint *local_1f8;
  undefined8 uStack_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  byte local_1d0;
  char local_1cf;
  int *local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  int *local_1b0 [2];
  LARGE_INTEGER local_1a0;
  LARGE_INTEGER local_198 [2];
  int local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  uint uStack_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (((DAT_1469f6064 == DAT_1464aaa90) && (*(int *)(param_1 + 0xc90) == 0)) &&
     (*(int *)(param_1 + 0xc94) == 0)) {
    return;
  }
  local_220 = param_2;
  lVar7 = FUN_1419f3990(param_1,*(undefined8 *)(param_2 + 0x20));
  uVar18 = 0;
  DAT_1469f6064 = DAT_1464aaa90;
  local_278 = 0;
  local_218 = 0;
  local_210 = 0;
  uVar16 = uVar18;
  if (((DAT_1469f59f0 != 0) && (uVar16 = 0, DAT_1469f59f4 != 0)) &&
     (uVar15 = uVar18, 0 < *(int *)(param_1 + 0xb78))) {
    while( true ) {
      iVar6 = *(int *)(param_1 + 0xc90);
      if (*(int *)(param_1 + 0xc90) == 0) {
        iVar6 = DAT_1464c0ad4;
      }
      if ((iVar6 != -1) || (*(int *)(param_1 + 0xb78) < 1)) goto LAB_1419f9a8b;
      plVar3 = (longlong *)**(longlong **)(param_1 + 0xb70);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_268 = plVar3;
      cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      while ((cVar5 != '\0' && ((uint)uVar15 < DAT_1464c0df8))) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_78);
        if ((5 < local_64) || (bVar4 = true, 0x1f < local_60)) {
          bVar4 = false;
        }
        if (bVar4) {
          local_128 = (longlong *)CONCAT44(uStack_74,local_78);
          uStack_120 = CONCAT44(uStack_6c,uStack_70);
          local_118 = (uint *)CONCAT44(local_64,local_68);
          uStack_110 = CONCAT35((int3)((ulonglong)uStack_110 >> 0x28),0x100000000);
          local_298 = lVar7;
          FUN_1419fdb30(param_1,&local_128,&local_218);
          uVar15 = (ulonglong)((uint)uVar15 + 1);
        }
        *(int *)(param_1 + 0xb6c) = *(int *)(param_1 + 0xb6c) + -1;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      }
      cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      if (cVar5 != '\0') break;
      TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                (param_1 + 0xb70,0,1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_268);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_268);
LAB_1419f9a8b:
    iVar6 = *(int *)(param_1 + 0xc90);
    iVar11 = iVar6;
    if (iVar6 == 0) {
      iVar11 = DAT_1464c0ad4;
    }
    uVar16 = uVar18;
    if (iVar11 != -1) {
      iVar11 = iVar6;
      if (iVar6 == 0) {
        iVar11 = DAT_1464c0ad4;
      }
      if ((longlong)(param_3 * 1000.0) < (longlong)iVar11) {
        DAT_1464c0df8 = DAT_1464c0df8 + 1;
      }
      else {
        DAT_1464c0df8 = DAT_1464c0df8 >> 1;
        if (DAT_1464c0df8 < 2) {
          DAT_1464c0df8 = 1;
        }
      }
      iVar11 = *(int *)(param_1 + 0xc94);
      if (*(int *)(param_1 + 0xc94) == 0) {
        iVar11 = DAT_1464c0ad0;
      }
      if (iVar11 != -1) {
        if (iVar6 == 0) {
          iVar6 = DAT_1464c0ad4;
        }
        uVar15 = (longlong)(param_3 * 1000.0) - (longlong)iVar6;
        local_278 = uVar18;
        if (-1 < (longlong)uVar15) {
          uVar16 = uVar15;
          local_278 = uVar15;
        }
      }
    }
    QueryPerformanceCounter(&local_1a0);
    param_2 = local_220;
  }
  if (1 < DAT_1469f6064) {
    cVar5 = FShaderCache::ShouldPreDrawShaders(param_1,uVar16);
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar7 + 4000) = 1;
      if (*(longlong *)(param_1 + 0x290) == 0) {
        local_280 = &local_238;
        local_e8 = 1;
        local_e4 = _DAT_1468b5d78;
        uStack_e0 = uRam00000001468b5d7c;
        uStack_dc = uRam00000001468b5d80;
        uStack_d8 = uRam00000001468b5d84;
        local_288 = &local_f8;
        local_d4 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_238 = (undefined8 *)0x0;
        local_290 = 1;
        local_298 = CONCAT44(local_298._4_4_,6);
        (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_240,&DAT_146ab6e78);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x290,local_240);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        if (local_238 != (undefined8 *)0x0) {
          *(undefined4 *)local_238 = 0;
          *(undefined2 *)((longlong)local_238 + 4) = 0;
        }
        (**(code **)(*DAT_146ab6358 + 0x500))
                  (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x290));
      }
      if (*(longlong *)(param_1 + 0x298) == 0) {
        local_280 = &local_228;
        local_a8 = 1;
        local_a4 = _DAT_1468b5d78;
        uStack_a0 = uRam00000001468b5d7c;
        uStack_9c = uRam00000001468b5d80;
        uStack_98 = uRam00000001468b5d84;
        local_288 = &local_b8;
        local_94 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_228 = (undefined8 *)0x0;
        local_290 = 1;
        local_298 = CONCAT44(local_298._4_4_,0xc);
        (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_230,&DAT_146ab6e78);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x298,local_230);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        if (local_228 != (undefined8 *)0x0) {
          *local_228 = 0;
          *(undefined4 *)(local_228 + 1) = 0;
        }
        (**(code **)(*DAT_146ab6358 + 0x500))
                  (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x298));
      }
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f59420;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0x800000;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = 3;
      *(undefined4 *)(puVar12 + 4) = 3;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0x7f7fffff;
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
      plVar3 = (longlong *)(param_1 + 0xb80);
      piVar1 = (int *)(param_1 + 0xb68);
      if (*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xbb4)) {
        lVar9 = *(longlong *)(param_1 + 0xbc0);
        if (*(longlong *)(param_1 + 0xbc0) == 0) {
          lVar9 = param_1 + 3000;
        }
        iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0xbc8) - 1U & (longlong)*piVar1) * 4)
        ;
        if (iVar6 != -1) {
          do {
            piVar13 = (int *)((longlong)iVar6 * 0x60 + *plVar3);
            if (*piVar13 == *piVar1) {
              if ((iVar6 != -1) && (piVar13 != (int *)0x0)) goto LAB_1419f9e1f;
              break;
            }
            iVar6 = piVar13[0x16];
          } while (iVar6 != -1);
        }
      }
      local_1c8 = piVar1;
      TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>(plVar3,&local_270);
      piVar13 = (int *)((longlong)local_270 * 0x60 + *plVar3);
LAB_1419f9e1f:
      lVar9 = local_220;
      local_208 = (longlong *)(piVar13 + 2);
      iVar6 = piVar13[0xc];
      puStack_258 = (uint *)(piVar13 + 6);
      uVar16 = 0;
      local_260 = 0;
      iStack_24c = 0;
      uStack_248 = 0;
      uStack_25c = 1;
      if (iVar6 != 0) {
        puVar17 = *(uint **)(piVar13 + 10);
        if (*(uint **)(piVar13 + 10) == (uint *)0x0) {
          puVar17 = puStack_258;
        }
        uVar2 = *puVar17;
        local_260 = 0;
        while (uVar2 == 0) {
          lVar14 = (longlong)local_260;
          uStack_248 = (int)uVar16 + 0x20;
          uVar16 = (ulonglong)uStack_248;
          iVar11 = local_260 + 1;
          bVar4 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_260;
          local_260 = iVar11;
          if (bVar4) goto LAB_1419f9ed4;
          uVar2 = puVar17[lVar14 + 1];
        }
        uStack_25c = -uVar2 & uVar2;
        iVar11 = 0x1f;
        if (uStack_25c != 0) {
          for (; uStack_25c >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_25c == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uVar16 = (ulonglong)(uStack_248 - iVar11);
        iStack_24c = (uStack_248 - iVar11) + 0x1f;
        if (iVar6 < iStack_24c) {
LAB_1419f9ed4:
          iStack_24c = iVar6;
        }
      }
      local_250 = 0xffffffff;
      uStack_200 = CONCAT44(uStack_25c,local_260);
      uVar16 = uVar16 & 0xffffffffffffff00;
      uStack_1f0 = CONCAT44(iStack_24c,0xffffffff);
      uStack_108 = uStack_248;
      uStack_104 = uStack_244;
      local_1cf = '\0';
      local_1e8 = uStack_248;
      uStack_1e4 = uStack_244;
      uVar18 = local_278;
      local_1f8 = puStack_258;
      local_1d8 = local_208;
      local_128 = local_208;
      uStack_120 = uStack_200;
      local_118 = puStack_258;
      uStack_110 = uStack_1f0;
      plStack_100 = local_208;
      uStack_1e0 = local_208;
      do {
        iVar6 = *(int *)(param_1 + 0xc94);
        iVar11 = iVar6;
        if (iVar6 == 0) {
          iVar11 = DAT_1464c0ad0;
        }
        if (iVar11 != -1) {
          if (iVar6 == 0) {
            iVar6 = DAT_1464c0ad0;
          }
          if ((longlong)iVar6 <= (longlong)uVar18) goto LAB_1419fa088;
        }
        iVar6 = uStack_1f0._4_4_;
        lVar14 = (longlong)uStack_1f0._4_4_;
        if ((int)local_1f8[6] <= uStack_1f0._4_4_) goto LAB_1419fa088;
        QueryPerformanceCounter(&local_1b8);
        piVar13 = (int *)(lVar14 * 0x60 + *local_208);
        local_188 = *piVar13;
        local_180 = 0;
        local_178 = 0;
        local_160 = 0;
        local_158 = 0;
        local_14c = 0;
        local_140 = 0;
        local_138 = 0;
        local_150 = 0xffffffff;
        FUN_1419daec0(&local_180,piVar13 + 2);
        if (-1 < local_188) {
          FUN_1419f5490(param_1,lVar9,(longlong)local_188 * 0x1ac + *(longlong *)(param_1 + 0x370));
        }
        TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Remove(uStack_1e0,iVar6);
        local_1d0 = 1;
        QueryPerformanceCounter(&local_1c0);
        local_138 = 0;
        uVar18 = (ulonglong)
                 ((float)((double)(local_1c0.s.LowPart - local_1b8._0_4_) * DAT_1468b02f8 * 1000.0)
                 + (float)(longlong)uVar18);
        if (local_140 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_180);
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0 & ~uStack_200._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_200);
        uVar16 = (ulonglong)local_1d0;
      } while( true );
    }
  }
  goto LAB_1419fa2ad;
LAB_1419fa088:
  if (((char)uVar16 != '\0') && (local_1cf != '\0')) {
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_1d8,(int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34),
                        CONCAT71((int7)(uVar16 >> 8),1));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  (**(code **)(*DAT_146ab6358 + 0x380))();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
  uVar16 = 0;
  if (*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xbb4)) {
    lVar9 = *(longlong *)(param_1 + 0xbc0);
    if (*(longlong *)(param_1 + 0xbc0) == 0) {
      lVar9 = param_1 + 3000;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0xbc8) - 1U & (longlong)*piVar1) * 4);
    if (iVar6 != -1) {
      do {
        piVar13 = (int *)((longlong)iVar6 * 0x60 + *plVar3);
        if (*piVar13 == *piVar1) {
          if ((iVar6 != -1) && (piVar13 != (int *)0x0)) goto LAB_1419fa1bf;
          break;
        }
        iVar6 = piVar13[0x16];
      } while (iVar6 != -1);
    }
  }
  local_1b0[0] = piVar1;
  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>(plVar3,&local_26c,local_1b0,0);
  piVar13 = (int *)((longlong)local_26c * 0x60 + *plVar3);
LAB_1419fa1bf:
  if (piVar13[4] == piVar13[0xf]) {
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x1f0,0);
    FUN_1419ebda0(param_1 + 0x1a0,0);
    if (0 < (int)*(uint *)(param_1 + 0x1e8)) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x1e8);
      uVar18 = uVar16;
      do {
        lVar9 = *(longlong *)(param_1 + 0x1e0);
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          lVar9 = param_1 + 0x1d8;
        }
        uVar10 = (longlong)*(int *)(param_1 + 0x1e8) - 1U & uVar18;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(lVar9 + uVar10 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    FUN_1419ebf60(param_1 + 0x240,0);
    if (0 < (int)*(uint *)(param_1 + 0x288)) {
      uVar18 = (ulonglong)*(uint *)(param_1 + 0x288);
      do {
        lVar9 = *(longlong *)(param_1 + 0x280);
        if (*(longlong *)(param_1 + 0x280) == 0) {
          lVar9 = param_1 + 0x278;
        }
        uVar15 = (longlong)*(int *)(param_1 + 0x288) - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(lVar9 + uVar15 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
  *(undefined1 *)(lVar7 + 4000) = 0;
  QueryPerformanceCounter(local_198);
LAB_1419fa2ad:
  if (*(int *)(param_1 + 0xc90) == -1) {
    *(undefined4 *)(param_1 + 0xc90) = 0;
  }
  if (*(int *)(param_1 + 0xc94) == -1) {
    *(undefined4 *)(param_1 + 0xc94) = 0;
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419fa330 FUN_1419fa330 body=6673 status=ok
// SIG undefined FUN_1419fa330(void)

/* WARNING: Removing unreachable block (ram,0x0001419fa91d) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1419fa330(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  longlong *plVar19;
  int *piVar20;
  uint uVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  int **ppiVar24;
  uint *puVar25;
  longlong *plVar26;
  bool bVar27;
  int local_3a8 [2];
  int *local_3a0;
  longlong local_398;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  int local_2c8 [2];
  longlong local_2c0;
  longlong local_2b8;
  uint local_2b0;
  uint uStack_2ac;
  uint *puStack_2a8;
  undefined4 local_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  uint local_290;
  uint uStack_28c;
  uint *puStack_288;
  undefined4 local_280;
  uint uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  uint *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  longlong local_248 [4];
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210 [7];
  int local_1d8;
  uint *local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1c0;
  int local_1b8;
  uint *local_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  int local_198;
  undefined1 local_194 [4];
  undefined1 local_190 [4];
  int local_18c;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  longlong local_178;
  longlong local_170;
  int *local_168;
  int *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  int *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  int *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  ulonglong local_100;
  PSRWLOCK local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  longlong *local_90;
  longlong local_88;
  int *local_80;
  int *local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  bVar8 = false;
  bVar7 = false;
  switch(*(undefined4 *)(param_1 + 0x2b0)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
    break;
  default:
    if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
      bVar27 = false;
      bVar9 = false;
      if (DAT_1469f59e8 == 0) {
        return;
      }
      goto LAB_1419fa3c1;
    }
  }
  bVar27 = true;
  bVar9 = true;
LAB_1419fa3c1:
  if (param_3 != 0) {
    local_f8 = (PSRWLOCK)(param_1 + 0xca0);
    AcquireSRWLockExclusive(local_f8);
    *(undefined1 *)(param_3 + 0xfa1) = 1;
    if ((*(uint *)(param_1 + 0x2b0) < 0x1b) &&
       ((0x700a74aU >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x668,local_2c8,param_2);
      if (local_2c8[0] == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = (longlong)local_2c8[0] * 0x78 + *(longlong *)(param_1 + 0x668);
      }
      plVar26 = (longlong *)0x0;
      plVar19 = (longlong *)(lVar13 + 0x20);
      if (lVar13 == 0) {
        plVar19 = plVar26;
      }
      if ((plVar19 != (longlong *)0x0) && (bVar27)) {
        uVar18 = *(uint *)(plVar19 + 5);
        local_1d0 = (uint *)(plVar19 + 2);
        uStack_2ac = 1;
        local_2b0 = 0;
        puStack_2a8 = local_1d0;
        local_2a0 = 0xffffffff;
        uStack_29c = 0;
        uStack_298 = 0;
        if (uVar18 != 0) {
          puVar25 = (uint *)plVar19[4];
          if ((uint *)plVar19[4] == (uint *)0x0) {
            puVar25 = local_1d0;
          }
          uVar21 = *puVar25;
          plVar23 = plVar26;
          while (uVar21 == 0) {
            iVar11 = (int)plVar26;
            uStack_298 = (int)plVar23 + 0x20;
            plVar23 = (longlong *)(ulonglong)uStack_298;
            plVar26 = (longlong *)(ulonglong)(iVar11 + 1U);
            local_2b0 = iVar11 + 1U;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_1419fa521;
            uVar21 = puVar25[(longlong)iVar11 + 1];
            local_2a0 = 0xffffffff;
          }
          uStack_2ac = -uVar21 & uVar21;
          local_198 = 0x1f;
          if (uStack_2ac != 0) {
            for (; uStack_2ac >> local_198 == 0; local_198 = local_198 + -1) {
            }
          }
          if (uStack_2ac == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - local_198;
          }
          uStack_29c = (uStack_298 - iVar11) + 0x1f;
          if ((int)uVar18 < (int)uStack_29c) {
LAB_1419fa521:
            uStack_29c = uVar18;
          }
        }
        local_2a0 = 0xffffffff;
        uStack_1c4 = *(uint *)(plVar19 + 5);
        local_270 = plVar19;
        plVar26 = local_270;
        uStack_c8 = CONCAT44(uStack_29c,0xffffffff);
        local_c0 = CONCAT44(uStack_294,uStack_298);
        uStack_268 = CONCAT44(uStack_2ac,local_2b0);
        local_260 = local_1d0;
        local_1d8 = (int)uStack_1c4 >> 5;
        local_270._0_4_ = SUB84(plVar19,0);
        local_270._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
        local_1c8 = -1 << ((byte)uStack_1c4 & 0x1f);
        local_1c0 = uStack_1c4 & 0xffffffe0;
        uStack_258 = uStack_c8;
        local_250 = local_c0;
        local_e0 = (undefined4)local_270;
        uStack_dc = local_270._4_4_;
        uStack_d8 = local_2b0;
        uStack_d4 = uStack_2ac;
        if (uStack_1c4 != uVar18) {
          puVar25 = (uint *)plVar19[4];
          if ((uint *)plVar19[4] == (uint *)0x0) {
            puVar25 = local_1d0;
          }
          uVar21 = puVar25[local_1d8] & local_1c8;
          while (uVar21 == 0) {
            lVar13 = (longlong)local_1d8;
            local_1c0 = local_1c0 + 0x20;
            iVar11 = local_1d8 + 1;
            bVar27 = (int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1d8;
            local_1d8 = iVar11;
            if (bVar27) goto LAB_1419fa63c;
            uVar21 = puVar25[lVar13 + 1];
            local_1c8 = 0xffffffff;
          }
          uVar21 = -uVar21 & uVar21;
          local_ec = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> local_ec == 0; local_ec = local_ec + -1) {
            }
          }
          if (uVar21 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - local_ec;
          }
          uStack_1c4 = (local_1c0 - iVar11) + 0x1f;
          if ((int)uVar18 < (int)uStack_1c4) {
LAB_1419fa63c:
            uStack_1c4 = uVar18;
          }
        }
        local_3a0 = (int *)(ulonglong)uStack_1c4;
        local_270 = plVar26;
        local_d0 = local_1d0;
        while( true ) {
          if (((uStack_c8._4_4_ == (int)local_3a0) && (local_d0 == local_1d0)) &&
             ((longlong *)CONCAT44(uStack_dc,local_e0) == plVar19)) break;
          lVar13 = (longlong)uStack_c8._4_4_ * 0xac + *(longlong *)CONCAT44(uStack_dc,local_e0);
          if (*(char *)(lVar13 + 0x1c) == '\0') {
            bVar8 = true;
            plVar26 = local_248 + 1;
            local_248[1] = 0;
          }
          else {
            bVar7 = true;
            FUN_1419ed7a0(param_1 + 0x6b8,&local_390,lVar13);
            if ((local_390 == -1) ||
               (lVar14 = (longlong)local_390 * 0x30 + *(longlong *)(param_1 + 0x6b8), lVar14 == 0))
            {
              plVar26 = &local_2c0;
              local_2c0 = 0;
            }
            else {
              local_2c0 = *(longlong *)(lVar14 + 0x20);
              if (local_2c0 != 0) {
                LOCK();
                *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
                UNLOCK();
              }
              plVar26 = &local_2c0;
            }
          }
          local_210[0] = *plVar26;
          *plVar26 = 0;
          if (bVar8) {
            bVar8 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248 + 1);
          }
          if (bVar7) {
            bVar7 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c0);
          }
          if (*(char *)(lVar13 + 0x3c) == '\0') {
            local_248[2] = 0;
            plVar26 = local_248 + 2;
            bVar6 = false;
            bVar27 = true;
          }
          else {
            FUN_1419ed7a0(param_1 + 0x708,&local_38c,lVar13 + 0x20);
            if ((local_38c == -1) ||
               (lVar14 = (longlong)local_38c * 0x30 + *(longlong *)(param_1 + 0x708), lVar14 == 0))
            {
              local_2b8 = 0;
            }
            else {
              local_2b8 = *(longlong *)(lVar14 + 0x20);
              if (local_2b8 != 0) {
                LOCK();
                *(int *)(local_2b8 + 8) = *(int *)(local_2b8 + 8) + 1;
                UNLOCK();
                plVar26 = &local_2b8;
                bVar6 = true;
                bVar27 = false;
                goto LAB_1419fa7b3;
              }
            }
            plVar26 = &local_2b8;
            bVar6 = true;
            bVar27 = false;
          }
LAB_1419fa7b3:
          local_218 = *plVar26;
          *plVar26 = 0;
          if (bVar27) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248 + 2);
          }
          if (bVar6) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2b8);
          }
          if (*(char *)(lVar13 + 0x5c) == '\0') {
            local_248[3] = 0;
            plVar26 = local_248 + 3;
            bVar6 = false;
            bVar27 = true;
          }
          else {
            FUN_1419ed7a0(param_1 + 0x758,&local_388,lVar13 + 0x40);
            if ((local_388 == -1) ||
               (lVar14 = (longlong)local_388 * 0x30 + *(longlong *)(param_1 + 0x758), lVar14 == 0))
            {
              local_2e0 = 0;
            }
            else {
              local_2e0 = *(longlong *)(lVar14 + 0x20);
              if (local_2e0 != 0) {
                LOCK();
                *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
                UNLOCK();
                plVar26 = &local_2e0;
                bVar6 = true;
                bVar27 = false;
                goto LAB_1419fa85f;
              }
            }
            plVar26 = &local_2e0;
            bVar6 = true;
            bVar27 = false;
          }
LAB_1419fa85f:
          lVar14 = *plVar26;
          local_2d0 = lVar14;
          *plVar26 = 0;
          if (bVar27) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248 + 3);
          }
          if (bVar6) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2e0);
          }
          if (*(char *)(lVar13 + 0x7c) == '\0') {
            local_228 = 0;
            plVar26 = local_248 + 4;
            bVar27 = false;
          }
          else {
            FUN_1419ed7a0(param_1 + 0x7a8,&local_384,lVar13 + 0x60);
            if ((local_384 == -1) ||
               (lVar15 = (longlong)local_384 * 0x30 + *(longlong *)(param_1 + 0x7a8), lVar15 == 0))
            {
              local_310 = 0;
            }
            else {
              local_310 = *(longlong *)(lVar15 + 0x20);
              if (local_310 != 0) {
                LOCK();
                *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
                UNLOCK();
                plVar26 = &local_310;
                bVar27 = true;
                lVar14 = local_2d0;
                goto LAB_1419fa90a;
              }
            }
            plVar26 = &local_310;
            bVar27 = true;
          }
LAB_1419fa90a:
          lVar15 = *plVar26;
          local_248[0] = lVar15;
          *plVar26 = 0;
          if (bVar27) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_310);
          }
          if (*(char *)(lVar13 + 0x9c) == '\0') {
            local_220 = 0;
            plVar26 = local_248 + 5;
            bVar6 = false;
            bVar27 = true;
          }
          else {
            FUN_1419ed7a0(param_1 + 0x7f8,&local_380,lVar13 + 0x80);
            if ((local_380 == -1) ||
               (lVar16 = (longlong)local_380 * 0x30 + *(longlong *)(param_1 + 0x7f8), lVar16 == 0))
            {
              local_300 = 0;
            }
            else {
              local_300 = *(longlong *)(lVar16 + 0x20);
              if (local_300 != 0) {
                LOCK();
                *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + 1;
                UNLOCK();
                plVar26 = &local_300;
                bVar6 = true;
                bVar27 = false;
                lVar14 = local_2d0;
                lVar15 = local_248[0];
                goto LAB_1419fa9d4;
              }
            }
            plVar26 = &local_300;
            bVar6 = true;
            bVar27 = false;
          }
LAB_1419fa9d4:
          lVar16 = *plVar26;
          *plVar26 = 0;
          local_178 = lVar16;
          if (bVar27) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248 + 5);
          }
          if (bVar6) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_300);
          }
          if ((bool)*(char *)(lVar13 + 0x1c) == (local_210[0] != 0) &&
              (((bool)*(char *)(lVar13 + 0x5c) == (lVar14 != 0) &&
               ((bool)*(char *)(lVar13 + 0x7c) == (lVar15 != 0) &&
               (bool)*(char *)(lVar13 + 0x9c) == (lVar16 != 0))) &&
              (bool)*(char *)(lVar13 + 0x3c) == (local_218 != 0))) {
            (**(code **)(*DAT_146ab6358 + 0xe8))
                      (DAT_146ab6358,local_180,0,local_210[0],lVar15,lVar16,local_218,lVar14);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_180);
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_178);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248 + 6);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_210);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
        }
      }
    }
    bVar8 = false;
    bVar7 = false;
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_37c,param_2);
    if (local_37c == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)local_37c * 0x2c + *(longlong *)(param_1 + 0x2c0);
    }
    plVar26 = (longlong *)0x0;
    plVar19 = (longlong *)(lVar13 + 0x20);
    if (lVar13 == 0) {
      plVar19 = plVar26;
    }
    if (plVar19 == (longlong *)0x0) {
      iVar11 = -1;
    }
    else {
      iVar11 = (int)*plVar19;
    }
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar13 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar13 = param_1 + 0x5f8;
      }
      iVar12 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)iVar11) * 4);
      if (iVar12 != -1) {
        do {
          plVar19 = (longlong *)((longlong)iVar12 * 0x60 + *(longlong *)(param_1 + 0x5c0));
          if ((int)*plVar19 == iVar11) {
            if (iVar12 != -1) goto LAB_1419fabf5;
            break;
          }
          iVar12 = (int)plVar19[0xb];
        } while (iVar12 != -1);
      }
    }
    plVar19 = plVar26;
LAB_1419fabf5:
    local_108 = plVar19 + 1;
    if (plVar19 == (longlong *)0x0) {
      local_108 = plVar26;
    }
    if (local_108 != (longlong *)0x0) {
      uVar18 = *(uint *)(local_108 + 5);
      local_1b0 = (uint *)(local_108 + 2);
      uStack_28c = 1;
      local_290 = 0;
      puStack_288 = local_1b0;
      local_280 = 0xffffffff;
      uStack_27c = 0;
      uStack_278 = 0;
      if (uVar18 != 0) {
        puVar25 = (uint *)local_108[4];
        if ((uint *)local_108[4] == (uint *)0x0) {
          puVar25 = local_1b0;
        }
        uVar21 = *puVar25;
        plVar19 = plVar26;
        while (uVar21 == 0) {
          iVar11 = (int)plVar26;
          uStack_278 = (int)plVar19 + 0x20;
          plVar19 = (longlong *)(ulonglong)uStack_278;
          plVar26 = (longlong *)(ulonglong)(iVar11 + 1U);
          local_290 = iVar11 + 1U;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1419facc4;
          uVar21 = puVar25[(longlong)iVar11 + 1];
          local_280 = 0xffffffff;
        }
        uStack_28c = -uVar21 & uVar21;
        local_f0 = 0x1f;
        if (uStack_28c != 0) {
          for (; uStack_28c >> local_f0 == 0; local_f0 = local_f0 + -1) {
          }
        }
        if (uStack_28c == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - local_f0;
        }
        uStack_27c = (uStack_278 - iVar11) + 0x1f;
        if ((int)uVar18 < (int)uStack_27c) {
LAB_1419facc4:
          uStack_27c = uVar18;
        }
      }
      local_280 = 0xffffffff;
      uStack_1a4 = *(uint *)(local_108 + 5);
      uStack_68 = CONCAT44(uStack_28c,local_290);
      uStack_58 = CONCAT44(uStack_27c,0xffffffff);
      uStack_50 = CONCAT44(uStack_274,uStack_278);
      local_1b8 = (int)uStack_1a4 >> 5;
      local_1a8 = -1 << ((byte)uStack_1a4 & 0x1f);
      local_1a0 = uStack_1a4 & 0xffffffe0;
      local_250 = uStack_50;
      local_270 = local_108;
      uStack_268 = CONCAT44(uStack_28c,local_290);
      local_260 = local_1b0;
      uStack_258 = uStack_58;
      if (uStack_1a4 != uVar18) {
        puVar25 = (uint *)local_108[4];
        if ((uint *)local_108[4] == (uint *)0x0) {
          puVar25 = local_1b0;
        }
        uVar21 = puVar25[local_1b8] & local_1a8;
        while (uVar21 == 0) {
          lVar13 = (longlong)local_1b8;
          local_1a0 = local_1a0 + 0x20;
          iVar11 = local_1b8 + 1;
          bVar27 = (int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1b8;
          local_1b8 = iVar11;
          if (bVar27) goto LAB_1419fadda;
          uVar21 = puVar25[lVar13 + 1];
          local_1a8 = 0xffffffff;
        }
        uVar21 = -uVar21 & uVar21;
        local_18c = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> local_18c == 0; local_18c = local_18c + -1) {
          }
        }
        if (uVar21 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - local_18c;
        }
        uStack_1a4 = (local_1a0 - iVar11) + 0x1f;
        if ((int)uVar18 < (int)uStack_1a4) {
LAB_1419fadda:
          uStack_1a4 = uVar18;
        }
      }
      local_100 = (ulonglong)uStack_1a4;
      local_70 = local_108;
      puStack_60 = local_1b0;
      while( true ) {
        if (((uStack_258._4_4_ == (int)local_100) && (local_260 == local_1b0)) &&
           (local_270 == local_108)) break;
        local_3a8[0] = *(int *)(*local_270 + (longlong)uStack_258._4_4_ * 0xc);
        lVar13 = (longlong)local_3a8[0] * 0x1ac + *(longlong *)(param_1 + 0x370);
        if (*(char *)(lVar13 + 0x124) == '\0') {
          bVar7 = true;
          plVar26 = local_210 + 1;
          local_210[1] = 0;
        }
        else {
          bVar8 = true;
          FUN_1419ed7a0(param_1 + 0x6b8,&local_378,lVar13 + 0x108);
          if ((local_378 == -1) ||
             (lVar14 = (longlong)local_378 * 0x30 + *(longlong *)(param_1 + 0x6b8), lVar14 == 0)) {
            plVar26 = &local_2d8;
            local_2d8 = 0;
          }
          else {
            local_2d8 = *(longlong *)(lVar14 + 0x20);
            if (local_2d8 != 0) {
              LOCK();
              *(int *)(local_2d8 + 8) = *(int *)(local_2d8 + 8) + 1;
              UNLOCK();
            }
            plVar26 = &local_2d8;
          }
        }
        puVar1 = (undefined8 *)*plVar26;
        *plVar26 = 0;
        if (bVar7) {
          bVar7 = false;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (bVar8) {
          bVar8 = false;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (*(char *)(lVar13 + 0x144) == '\0') {
          local_210[2] = 0;
          plVar26 = local_210 + 2;
          bVar6 = false;
          bVar27 = true;
        }
        else {
          FUN_1419ed7a0(param_1 + 0x708,&local_374,lVar13 + 0x128);
          if ((local_374 == -1) ||
             (lVar14 = (longlong)local_374 * 0x30 + *(longlong *)(param_1 + 0x708), lVar14 == 0)) {
            local_308 = 0;
          }
          else {
            local_308 = *(longlong *)(lVar14 + 0x20);
            if (local_308 != 0) {
              LOCK();
              *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
              UNLOCK();
              plVar26 = &local_308;
              bVar6 = true;
              bVar27 = false;
              goto LAB_1419faf79;
            }
          }
          plVar26 = &local_308;
          bVar6 = true;
          bVar27 = false;
        }
LAB_1419faf79:
        puVar2 = (undefined8 *)*plVar26;
        *plVar26 = 0;
        if (bVar27) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (*(char *)(lVar13 + 0x164) == '\0') {
          local_210[3] = 0;
          plVar26 = local_210 + 3;
          bVar6 = false;
          bVar27 = true;
        }
        else {
          FUN_1419ed7a0(param_1 + 0x758,&local_370,lVar13 + 0x148);
          if ((local_370 == -1) ||
             (lVar14 = (longlong)local_370 * 0x30 + *(longlong *)(param_1 + 0x758), lVar14 == 0)) {
            local_2e8 = 0;
          }
          else {
            local_2e8 = *(longlong *)(lVar14 + 0x20);
            if (local_2e8 != 0) {
              LOCK();
              *(int *)(local_2e8 + 8) = *(int *)(local_2e8 + 8) + 1;
              UNLOCK();
              plVar26 = &local_2e8;
              bVar6 = true;
              bVar27 = false;
              goto LAB_1419fb02d;
            }
          }
          plVar26 = &local_2e8;
          bVar6 = true;
          bVar27 = false;
        }
LAB_1419fb02d:
        puVar3 = (undefined8 *)*plVar26;
        *plVar26 = 0;
        if (bVar27) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (*(char *)(lVar13 + 0x184) == '\0') {
          plVar26 = local_210 + 4;
          local_210[4] = 0;
          bVar6 = false;
          bVar27 = true;
        }
        else {
          FUN_1419ed7a0(param_1 + 0x7a8,&local_36c,lVar13 + 0x168);
          if ((local_36c == -1) ||
             (lVar14 = (longlong)local_36c * 0x30 + *(longlong *)(param_1 + 0x7a8), lVar14 == 0)) {
            plVar26 = &local_2f0;
            local_2f0 = 0;
            bVar6 = true;
            bVar27 = false;
          }
          else {
            local_2f0 = *(longlong *)(lVar14 + 0x20);
            if (local_2f0 != 0) {
              LOCK();
              *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
              UNLOCK();
            }
            plVar26 = &local_2f0;
            bVar6 = true;
            bVar27 = false;
          }
        }
        puVar4 = (undefined8 *)*plVar26;
        *plVar26 = 0;
        if (bVar27) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        }
        if (*(char *)(lVar13 + 0x1a4) == '\0') {
          plVar26 = local_210 + 5;
          local_210[5] = 0;
          bVar6 = false;
          bVar27 = true;
        }
        else {
          FUN_1419ed7a0(param_1 + 0x7f8,&local_368,lVar13 + 0x188);
          plVar26 = &local_2f8;
          if ((local_368 == -1) ||
             (lVar14 = (longlong)local_368 * 0x30 + *(longlong *)(param_1 + 0x7f8), lVar14 == 0)) {
            local_2f8 = 0;
            bVar6 = true;
            bVar27 = false;
          }
          else {
            local_2f8 = *(longlong *)(lVar14 + 0x20);
            if (local_2f8 != 0) {
              LOCK();
              *(int *)(local_2f8 + 8) = *(int *)(local_2f8 + 8) + 1;
              UNLOCK();
            }
            bVar6 = true;
            bVar27 = false;
          }
        }
        puVar5 = (undefined8 *)*plVar26;
        *plVar26 = 0;
        if (bVar27) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_210 + 5);
        }
        if (bVar6) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2f8);
        }
        uVar18 = 0;
        if ((bool)*(char *)(lVar13 + 0x124) == (puVar1 != (undefined8 *)0x0)) {
          uVar18 = (uint)(((bool)*(char *)(lVar13 + 0x164) == (puVar3 != (undefined8 *)0x0) &&
                          ((bool)*(char *)(lVar13 + 0x1a4) == (puVar5 != (undefined8 *)0x0) &&
                          (bool)*(char *)(lVar13 + 0x184) == (puVar4 != (undefined8 *)0x0))) &&
                         (bool)*(char *)(lVar13 + 0x144) == (puVar2 != (undefined8 *)0x0));
        }
        local_3a0 = (int *)CONCAT44(local_3a0._4_4_,uVar18);
        if ((char)uVar18 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_398,&DAT_146ab6e78);
          if (((byte)local_3a0 & local_398 != 0) != 0) {
            local_170 = local_398;
            local_90 = &local_170;
            local_88 = lVar13;
            FUN_1419ce0d0(param_1 + 0x898,local_188,&local_90);
            if ((*(uint *)(param_1 + 0x2b0) < 0x1c) &&
               ((0x8c51800U >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
              if (DAT_1469f59e8 != 0) {
                AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
                plVar26 = (longlong *)(param_1 + 0x610);
                if (*(int *)(param_1 + 0x618) != *(int *)(param_1 + 0x644)) {
                  iVar11 = *(int *)(param_1 + 0xb68);
                  lVar13 = *(longlong *)(param_1 + 0x650);
                  if (*(longlong *)(param_1 + 0x650) == 0) {
                    lVar13 = param_1 + 0x648;
                  }
                  iVar12 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x658) - 1U &
                                             (longlong)iVar11) * 4);
                  if (iVar12 != -1) {
                    do {
                      piVar20 = (int *)((longlong)iVar12 * 0x60 + *plVar26);
                      if (*piVar20 == iVar11) {
                        if ((iVar12 != -1) && (piVar20 != (int *)0x0)) goto LAB_1419fb3a4;
                        break;
                      }
                      iVar12 = piVar20[0x16];
                    } while (iVar12 != -1);
                  }
                }
                local_168 = (int *)(param_1 + 0xb68);
                TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                          (plVar26,&local_364,&local_168);
                piVar20 = (int *)((longlong)local_364 * 0x60 + *plVar26);
LAB_1419fb3a4:
                plVar26 = (longlong *)(piVar20 + 2);
                if (piVar20[4] != piVar20[0xf]) {
                  piVar17 = *(int **)(piVar20 + 0x12);
                  if (*(int **)(piVar20 + 0x12) == (int *)0x0) {
                    piVar17 = piVar20 + 0x10;
                  }
                  iVar11 = piVar17[(longlong)piVar20[0x14] - 1U & (longlong)local_3a8[0]];
                  if (iVar11 != -1) {
                    do {
                      piVar20 = (int *)((longlong)iVar11 * 0x60 + *plVar26);
                      if (*piVar20 == local_3a8[0]) {
                        if ((iVar11 != -1) && (piVar20 != (int *)0x0)) goto LAB_1419fb451;
                        break;
                      }
                      iVar11 = piVar20[0x16];
                    } while (iVar11 != -1);
                  }
                }
                local_160 = local_3a8;
                FUN_1419cd360(plVar26,&local_360,&local_160);
                piVar20 = (int *)((longlong)local_360 * 0x60 + *plVar26);
LAB_1419fb451:
                local_3a0 = piVar20 + 2;
                plVar26 = (longlong *)(param_1 + 0xb80);
                if (*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xbb4)) {
                  lVar13 = *(longlong *)(param_1 + 0xbc0);
                  if (*(longlong *)(param_1 + 0xbc0) == 0) {
                    lVar13 = param_1 + 3000;
                  }
                  iVar11 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0xbc8) - 1U &
                                             (longlong)*(int *)(param_1 + 0xb68)) * 4);
                  if (iVar11 != -1) {
                    do {
                      piVar20 = (int *)((longlong)iVar11 * 0x60 + *plVar26);
                      if (*piVar20 == *(int *)(param_1 + 0xb68)) {
                        if ((iVar11 != -1) && (piVar20 != (int *)0x0)) goto LAB_1419fb517;
                        break;
                      }
                      iVar11 = piVar20[0x16];
                    } while (iVar11 != -1);
                  }
                }
                local_158 = param_1 + 0xb68;
                TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                          (plVar26,&local_35c,&local_158,0);
                piVar20 = (int *)((longlong)local_35c * 0x60 + *plVar26);
LAB_1419fb517:
                if (piVar20[4] != piVar20[0xf]) {
                  piVar17 = *(int **)(piVar20 + 0x12);
                  if (*(int **)(piVar20 + 0x12) == (int *)0x0) {
                    piVar17 = piVar20 + 0x10;
                  }
                  iVar11 = piVar17[(longlong)piVar20[0x14] - 1U & (longlong)local_3a8[0]];
                  if (iVar11 != -1) {
                    do {
                      if (*(int *)((longlong)iVar11 * 0x60 + *(longlong *)(piVar20 + 2)) ==
                          local_3a8[0]) {
                        if (iVar11 != -1) goto LAB_1419fbafe;
                        break;
                      }
                      iVar11 = *(int *)((longlong)iVar11 * 0x60 + 0x58 + *(longlong *)(piVar20 + 2))
                      ;
                    } while (iVar11 != -1);
                  }
                }
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(plVar26,&local_358,*(undefined4 *)(param_1 + 0xb68));
                if ((local_358 == -1) ||
                   (lVar13 = (longlong)local_358 * 0x60 + *plVar26, lVar13 == 0)) {
                  local_150 = param_1 + 0xb68;
                  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                            (plVar26,&local_354,&local_150,0);
                  lVar13 = (longlong)local_354 * 0x60 + *plVar26;
                }
                local_80 = local_3a8;
                ppiVar24 = &local_80;
                puVar22 = local_190;
                local_78 = local_3a0;
LAB_1419fbaf2:
                FUN_1419ce8c0(lVar13 + 8,puVar22,ppiVar24,0);
LAB_1419fbafe:
                ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
              }
            }
            else if (bVar9) {
              (**(code **)(*DAT_146ab6358 + 0xe8))
                        (DAT_146ab6358,local_210 + 6,local_398,puVar1,puVar4,puVar5,puVar2,puVar3);
              if ((local_210[6] != 0) &&
                 (FUN_1419fbd70(param_1,*(undefined4 *)(param_1 + 0x2b0),local_398,puVar1,puVar2,
                                puVar4,puVar5,puVar3,local_210[6]), DAT_1469f59e8 != 0)) {
                AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(param_1 + 0x610,&local_350,*(undefined4 *)(param_1 + 0xb68));
                if ((local_350 == -1) ||
                   (lVar13 = (longlong)local_350 * 0x60 + *(longlong *)(param_1 + 0x610),
                   lVar13 == 0)) {
                  local_148 = param_1 + 0xb68;
                  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                            (param_1 + 0x610,&local_34c,&local_148,0);
                  lVar13 = (longlong)local_34c * 0x60 + *(longlong *)(param_1 + 0x610);
                }
                plVar26 = (longlong *)(lVar13 + 8);
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(plVar26,&local_348,local_3a8[0]);
                if ((local_348 == -1) ||
                   (lVar13 = (longlong)local_348 * 0x60 + *plVar26, lVar13 == 0)) {
                  local_140 = local_3a8;
                  FUN_1419cd360(plVar26,&local_344,&local_140,0);
                  lVar13 = (longlong)local_344 * 0x60 + *plVar26;
                }
                local_3a0 = (int *)(lVar13 + 8);
                plVar26 = (longlong *)(param_1 + 0xb80);
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(plVar26,&local_340,*(undefined4 *)(param_1 + 0xb68));
                if ((local_340 == -1) ||
                   (lVar13 = (longlong)local_340 * 0x60 + *plVar26, lVar13 == 0)) {
                  local_138 = param_1 + 0xb68;
                  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                            (plVar26,&local_33c,&local_138,0);
                  lVar13 = (longlong)local_33c * 0x60 + *plVar26;
                }
                piVar20 = (int *)TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                                 ::FindId(lVar13 + 8,local_194,local_3a8[0]);
                if (*piVar20 == -1) {
                  TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  ::FindId(plVar26,&local_338,*(undefined4 *)(param_1 + 0xb68));
                  if ((local_338 == -1) ||
                     (lVar13 = (longlong)local_338 * 0x60 + *plVar26, lVar13 == 0)) {
                    local_130 = param_1 + 0xb68;
                    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                    ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                              (plVar26,&local_334,&local_130,0);
                    lVar13 = (longlong)local_334 * 0x60 + *plVar26;
                  }
                  local_b0 = local_3a8;
                  local_a8 = local_3a0;
                  FUN_1419ce8c0(lVar13 + 8,local_b8,&local_b0,0);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_210 + 6);
            }
            else if (DAT_1469f59e8 != 0) {
              AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
              TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 0x610,&local_330,*(undefined4 *)(param_1 + 0xb68));
              if ((local_330 == -1) ||
                 (lVar13 = (longlong)local_330 * 0x60 + *(longlong *)(param_1 + 0x610), lVar13 == 0)
                 ) {
                local_128 = param_1 + 0xb68;
                TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                          (param_1 + 0x610,&local_32c,&local_128,0);
                lVar13 = (longlong)local_32c * 0x60 + *(longlong *)(param_1 + 0x610);
              }
              plVar26 = (longlong *)(lVar13 + 8);
              TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindId(plVar26,&local_328,local_3a8[0]);
              if ((local_328 == -1) || (lVar13 = (longlong)local_328 * 0x60 + *plVar26, lVar13 == 0)
                 ) {
                local_120 = local_3a8;
                FUN_1419cd360(plVar26,&local_324,&local_120,0);
                lVar13 = (longlong)local_324 * 0x60 + *plVar26;
              }
              local_3a0 = (int *)(lVar13 + 8);
              plVar26 = (longlong *)(param_1 + 0xb80);
              TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindId(plVar26,&local_320,*(undefined4 *)(param_1 + 0xb68));
              if ((local_320 == -1) || (lVar13 = (longlong)local_320 * 0x60 + *plVar26, lVar13 == 0)
                 ) {
                local_118 = param_1 + 0xb68;
                TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                          (plVar26,&local_31c,&local_118,0);
                lVar13 = (longlong)local_31c * 0x60 + *plVar26;
              }
              piVar20 = (int *)TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                               ::FindId(lVar13 + 8,local_e4,local_3a8[0]);
              if (*piVar20 == -1) {
                TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(plVar26,&local_318,*(undefined4 *)(param_1 + 0xb68));
                if ((local_318 == -1) ||
                   (lVar13 = (longlong)local_318 * 0x60 + *plVar26, lVar13 == 0)) {
                  local_110 = param_1 + 0xb68;
                  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                            (plVar26,&local_314,&local_110,0);
                  lVar13 = (longlong)local_314 * 0x60 + *plVar26;
                }
                local_a0 = local_3a8;
                ppiVar24 = &local_a0;
                puVar22 = local_e8;
                local_98 = local_3a0;
                goto LAB_1419fbaf2;
              }
              goto LAB_1419fbafe;
            }
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar20 = (int *)(puVar5 + 1);
          iVar11 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar5);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar20 = (int *)(puVar4 + 1);
          iVar11 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar20 = (int *)(puVar3 + 1);
          iVar11 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar3 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar20 = (int *)(puVar2 + 1);
          iVar11 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar2 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)puVar2 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)puVar2 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar2);
              }
            }
            else {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
        if (puVar1 != (undefined8 *)0x0) {
          LOCK();
          piVar20 = (int *)(puVar1 + 1);
          iVar11 = *piVar20;
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar1 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar1);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
        uStack_258 = CONCAT44(uStack_258._4_4_,(uint)uStack_258 & ~uStack_268._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_268);
      }
    }
    *(undefined1 *)(param_3 + 0xfa1) = 0;
    ReleaseSRWLockExclusive(local_f8);
  }
  return;
}



// FUNCTION 1419fbd70 FUN_1419fbd70 body=3811 status=ok
// SIG undefined FUN_1419fbd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1419fbd70(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
                 longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_438 [32];
  undefined4 local_418;
  int local_408;
  uint local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined1 local_368 [4];
  undefined1 local_364 [4];
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  undefined1 local_358 [4];
  undefined1 local_354 [4];
  undefined1 local_350 [4];
  undefined1 local_34c [4];
  undefined1 local_348 [4];
  undefined1 local_344 [4];
  undefined1 local_340 [4];
  undefined1 local_33c [4];
  undefined1 local_338 [8];
  int *local_330;
  undefined8 *local_328;
  int *local_320;
  undefined8 *local_318;
  int *local_310;
  undefined8 *local_308;
  int *local_300;
  undefined8 *local_2f8;
  int *local_2f0;
  undefined8 *local_2e8;
  int *local_2e0;
  int *local_2d8;
  int *local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  int *local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  ulonglong uStack_294;
  uint uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined8 uStack_274;
  uint uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 uStack_254;
  uint uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 uStack_234;
  uint uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 uStack_214;
  uint uStack_20c;
  undefined4 local_208;
  int local_1f8 [64];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  ulonglong uStack_dc;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 uStack_bc;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  uint uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 uStack_7c;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 uStack_5c;
  uint uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  piVar7 = (int *)0x0;
  local_380 = param_6;
  local_390 = param_5;
  local_378 = param_7;
  local_388 = param_8;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_294 = 6;
  uStack_28c = uStack_28c & 0xffffff00;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_274 = 6;
  uStack_26c = uStack_26c & 0xffffff00;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_254 = 6;
  uStack_24c = uStack_24c & 0xffffff00;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_234 = 6;
  uStack_22c = uStack_22c & 0xffffff00;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_214 = 6;
  uStack_20c = uStack_20c & 0xffffff00;
  local_208 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_dc = 6;
  uStack_d4 = uStack_d4 & 0xffffff00;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_bc = 6;
  uStack_b4 = uStack_b4 & 0xffffff00;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_9c = 6;
  uStack_94 = uStack_94 & 0xffffff00;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_7c = 6;
  uStack_74 = uStack_74 & 0xffffff00;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_5c = 6;
  uStack_54 = uStack_54 & 0xffffff00;
  local_50 = 0;
  local_404 = param_2;
  if (param_3 != 0) {
    FUN_1419ed010(param_1 + 0x898,&local_3fc);
    piVar9 = piVar7;
    if (local_3fc != -1) {
      piVar9 = (int *)((longlong)local_3fc * 0x118 + *(longlong *)(param_1 + 0x898));
    }
    if (local_1f8 != piVar9 + 2) {
      local_418 = 0;
      FUN_1419cbcc0(local_1f8,piVar9 + 2,piVar9[0x42],0);
    }
  }
  uVar2 = uStack_dc;
  if (param_4 != 0) {
    local_2a8 = *(undefined8 *)(param_4 + 0x18);
    uStack_2a0 = *(undefined8 *)(param_4 + 0x20);
    local_298 = *(undefined4 *)(param_4 + 0x28);
    uStack_dc = uStack_dc & 0xffffffff00000000;
    uStack_d4 = CONCAT31(uStack_d4._1_3_,1);
    uStack_294 = uVar2 & 0xffffffff00000000;
    uStack_28c = uStack_d4;
    local_f0 = local_2a8;
    uStack_e8 = uStack_2a0;
    local_e0 = local_298;
  }
  if (local_390 != 0) {
    local_288 = *(undefined8 *)(local_390 + 0x18);
    uStack_280 = *(undefined8 *)(local_390 + 0x20);
    local_278 = *(undefined4 *)(local_390 + 0x28);
    uStack_bc = CONCAT44(uStack_bc._4_4_,3);
    uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
    uStack_274 = CONCAT44(uStack_bc._4_4_,3);
    uStack_26c = uStack_b4;
    local_d0 = local_288;
    uStack_c8 = uStack_280;
    local_c0 = local_278;
  }
  if (local_388 != 0) {
    local_268 = *(undefined8 *)(local_388 + 0x18);
    uStack_260 = *(undefined8 *)(local_388 + 0x20);
    local_258 = *(undefined4 *)(local_388 + 0x28);
    uStack_9c = CONCAT44(uStack_9c._4_4_,4);
    uStack_94 = CONCAT31(uStack_94._1_3_,1);
    uStack_254 = CONCAT44(uStack_9c._4_4_,4);
    uStack_24c = uStack_94;
    local_b0 = local_268;
    uStack_a8 = uStack_260;
    local_a0 = local_258;
  }
  if (local_380 != 0) {
    local_248 = *(undefined8 *)(local_380 + 0x18);
    uStack_240 = *(undefined8 *)(local_380 + 0x20);
    local_238 = *(undefined4 *)(local_380 + 0x28);
    uStack_7c = CONCAT44(uStack_7c._4_4_,1);
    uStack_74 = CONCAT31(uStack_74._1_3_,1);
    uStack_234 = CONCAT44(uStack_7c._4_4_,1);
    uStack_22c = uStack_74;
    local_90 = local_248;
    uStack_88 = uStack_240;
    local_80 = local_238;
  }
  if (local_378 != 0) {
    local_228 = *(undefined8 *)(local_378 + 0x18);
    uStack_220 = *(undefined8 *)(local_378 + 0x20);
    local_218 = *(undefined4 *)(local_378 + 0x28);
    uStack_5c = CONCAT44(uStack_5c._4_4_,2);
    uStack_54 = CONCAT31(uStack_54._1_3_,1);
    uStack_214 = CONCAT44(uStack_5c._4_4_,2);
    uStack_20c = uStack_54;
    local_70 = local_228;
    uStack_68 = uStack_220;
    local_60 = local_218;
  }
  if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
    iVar4 = FUN_1419f0cb0(local_1f8);
    lVar10 = *(longlong *)(param_1 + 0x360);
    if (*(longlong *)(param_1 + 0x360) == 0) {
      lVar10 = param_1 + 0x358;
    }
    iVar4 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x368) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      lVar10 = *(longlong *)(param_1 + 800);
      do {
        piVar9 = (int *)((longlong)iVar4 * 0x1b8 + lVar10);
        cVar3 = FUN_1419e0e00(piVar9,local_1f8);
        if (cVar3 != '\0') {
          if (iVar4 != -1) goto LAB_1419fc195;
          break;
        }
        iVar4 = piVar9[0x6c];
      } while (iVar4 != -1);
    }
  }
  piVar9 = piVar7;
LAB_1419fc195:
  piVar6 = piVar9 + 0x6b;
  if (piVar9 == (int *)0x0) {
    piVar6 = piVar7;
  }
  if (piVar6 == (int *)0x0) {
    local_400 = *(int *)(param_1 + 0x378);
    lVar10 = (longlong)local_400;
    *(int *)(param_1 + 0x378) = local_400 + 1;
    if (*(int *)(param_1 + 0x37c) < local_400 + 1) {
      FUN_141a09e50(param_1 + 0x370,local_400);
    }
    FUN_1419d7130(lVar10 * 0x1ac + *(longlong *)(param_1 + 0x370),local_1f8);
    local_2e0 = local_1f8;
    local_2d8 = &local_400;
    FUN_1419cf860((longlong *)(param_1 + 800),local_348,&local_2e0,0);
    iVar4 = local_400;
  }
  else {
    iVar4 = *piVar6;
  }
  local_408 = iVar4;
  if (param_9 != 0) {
    local_370 = param_9;
    LOCK();
    *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 1;
    UNLOCK();
    local_2d0 = local_1f8;
    local_2c8 = &local_370;
    FUN_1419cf550(param_1 + 0x8e8,local_344,&local_2d0,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_370);
  }
  uVar11 = local_404;
  if (param_4 != 0) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_3f8,&local_f0);
    piVar9 = piVar7;
    if (local_3f8 != -1) {
      piVar9 = (int *)((longlong)local_3f8 * 0x2c + *(longlong *)(param_1 + 0x2c0));
    }
    local_3f4 = piVar9[8];
    plVar1 = (longlong *)(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar10 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar10 = param_1 + 0x5f8;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)local_3f4) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x60 + *plVar1);
          if (*piVar9 == local_3f4) {
            if ((iVar5 != -1) && (piVar9 != (int *)0x0)) goto LAB_1419fc344;
            break;
          }
          iVar5 = piVar9[0x16];
        } while (iVar5 != -1);
      }
    }
    local_330 = &local_3f4;
    FUN_1419cd360(plVar1,&local_3f0,&local_330,0);
    piVar9 = (int *)((longlong)local_3f0 * 0x60 + *plVar1);
LAB_1419fc344:
    if (piVar9[4] != piVar9[0xf]) {
      piVar6 = *(int **)(piVar9 + 0x12);
      if (*(int **)(piVar9 + 0x12) == (int *)0x0) {
        piVar6 = piVar9 + 0x10;
      }
      iVar5 = piVar6[(longlong)piVar9[0x14] - 1U & (longlong)iVar4];
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(piVar9 + 2);
        do {
          lVar8 = lVar10 + (longlong)iVar5 * 0xc;
          if (*(int *)(lVar10 + (longlong)iVar5 * 0xc) == iVar4) {
            if ((iVar5 != -1) && (lVar8 != 0)) goto LAB_1419fc3b9;
            break;
          }
          iVar5 = *(int *)(lVar8 + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_14044be50(piVar9 + 2,local_340,&local_408,0);
LAB_1419fc3b9:
    uVar11 = local_404;
    if (((DAT_1469f59f0 != 0) && (local_404 < 0x1b)) &&
       ((0x700a74aU >> (local_404 & 0x1f) & 1) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x88,&local_3ec,&local_f0);
      if ((local_3ec == -1) ||
         (lVar8 = (longlong)local_3ec * 0x78 + *(longlong *)(lVar10 + 0x88), lVar8 == 0)) {
        local_328 = &local_f0;
        FUN_1419cd720(lVar10 + 0x88,&local_3e8,&local_328,0);
        lVar8 = (longlong)local_3e8 * 0x78 + *(longlong *)(lVar10 + 0x88);
      }
      FUN_1419cc1a0(lVar8 + 0x20,local_33c,&local_2a8,0);
    }
  }
  if (local_390 != 0) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_3e4,&local_d0);
    piVar9 = piVar7;
    if (local_3e4 != -1) {
      piVar9 = (int *)((longlong)local_3e4 * 0x2c + *(longlong *)(param_1 + 0x2c0));
    }
    local_3e0 = piVar9[8];
    plVar1 = (longlong *)(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar10 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar10 = param_1 + 0x5f8;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)local_3e0) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x60 + *plVar1);
          if (*piVar9 == local_3e0) {
            if ((iVar5 != -1) && (piVar9 != (int *)0x0)) goto LAB_1419fc544;
            break;
          }
          iVar5 = piVar9[0x16];
        } while (iVar5 != -1);
      }
    }
    local_320 = &local_3e0;
    FUN_1419cd360(plVar1,&local_3dc,&local_320,0);
    piVar9 = (int *)((longlong)local_3dc * 0x60 + *plVar1);
LAB_1419fc544:
    if (piVar9[4] != piVar9[0xf]) {
      piVar6 = *(int **)(piVar9 + 0x12);
      if (*(int **)(piVar9 + 0x12) == (int *)0x0) {
        piVar6 = piVar9 + 0x10;
      }
      iVar5 = piVar6[(longlong)piVar9[0x14] - 1U & (longlong)iVar4];
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(piVar9 + 2);
        do {
          lVar8 = lVar10 + (longlong)iVar5 * 0xc;
          if (*(int *)(lVar10 + (longlong)iVar5 * 0xc) == iVar4) {
            if ((iVar5 != -1) && (lVar8 != 0)) goto LAB_1419fc5b9;
            break;
          }
          iVar5 = *(int *)(lVar8 + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_14044be50(piVar9 + 2,local_338,&local_408,0);
LAB_1419fc5b9:
    if (((DAT_1469f59f0 != 0) && (uVar11 < 0x1b)) && ((0x700a74aU >> (uVar11 & 0x1f) & 1) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x88,&local_3d8,&local_d0);
      if ((local_3d8 == -1) ||
         (lVar8 = (longlong)local_3d8 * 0x78 + *(longlong *)(lVar10 + 0x88), lVar8 == 0)) {
        local_318 = &local_d0;
        FUN_1419cd720(lVar10 + 0x88,&local_3d4,&local_318,0);
        lVar8 = (longlong)local_3d4 * 0x78 + *(longlong *)(lVar10 + 0x88);
      }
      FUN_1419cc1a0(lVar8 + 0x20,local_368,&local_2a8,0);
    }
  }
  if (local_388 != 0) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_3d0,&local_b0);
    piVar9 = piVar7;
    if (local_3d0 != -1) {
      piVar9 = (int *)((longlong)local_3d0 * 0x2c + *(longlong *)(param_1 + 0x2c0));
    }
    local_3cc = piVar9[8];
    plVar1 = (longlong *)(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar10 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar10 = param_1 + 0x5f8;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)local_3cc) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x60 + *plVar1);
          if (*piVar9 == local_3cc) {
            if ((iVar5 != -1) && (piVar9 != (int *)0x0)) goto LAB_1419fc734;
            break;
          }
          iVar5 = piVar9[0x16];
        } while (iVar5 != -1);
      }
    }
    local_310 = &local_3cc;
    FUN_1419cd360(plVar1,&local_3c8,&local_310,0);
    piVar9 = (int *)((longlong)local_3c8 * 0x60 + *plVar1);
LAB_1419fc734:
    if (piVar9[4] != piVar9[0xf]) {
      piVar6 = *(int **)(piVar9 + 0x12);
      if (*(int **)(piVar9 + 0x12) == (int *)0x0) {
        piVar6 = piVar9 + 0x10;
      }
      iVar5 = piVar6[(longlong)piVar9[0x14] - 1U & (longlong)iVar4];
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(piVar9 + 2);
        do {
          lVar8 = lVar10 + (longlong)iVar5 * 0xc;
          if (*(int *)(lVar10 + (longlong)iVar5 * 0xc) == iVar4) {
            if ((iVar5 != -1) && (lVar8 != 0)) goto LAB_1419fc7a9;
            break;
          }
          iVar5 = *(int *)(lVar8 + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_14044be50(piVar9 + 2,local_364,&local_408,0);
LAB_1419fc7a9:
    if (((DAT_1469f59f0 != 0) && (uVar11 < 0x1b)) && ((0x700a74aU >> (uVar11 & 0x1f) & 1) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x88,&local_3c4,&local_b0);
      if ((local_3c4 == -1) ||
         (lVar8 = (longlong)local_3c4 * 0x78 + *(longlong *)(lVar10 + 0x88), lVar8 == 0)) {
        local_308 = &local_b0;
        FUN_1419cd720(lVar10 + 0x88,&local_3c0,&local_308,0);
        lVar8 = (longlong)local_3c0 * 0x78 + *(longlong *)(lVar10 + 0x88);
      }
      FUN_1419cc1a0(lVar8 + 0x20,local_360,&local_2a8,0);
    }
  }
  if (local_380 != 0) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_3bc,&local_90);
    piVar9 = piVar7;
    if (local_3bc != -1) {
      piVar9 = (int *)((longlong)local_3bc * 0x2c + *(longlong *)(param_1 + 0x2c0));
    }
    local_3b8 = piVar9[8];
    plVar1 = (longlong *)(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar10 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar10 = param_1 + 0x5f8;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)local_3b8) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x60 + *plVar1);
          if (*piVar9 == local_3b8) {
            if ((iVar5 != -1) && (piVar9 != (int *)0x0)) goto LAB_1419fc921;
            break;
          }
          iVar5 = piVar9[0x16];
        } while (iVar5 != -1);
      }
    }
    local_300 = &local_3b8;
    FUN_1419cd360(plVar1,&local_3b4,&local_300,0);
    piVar9 = (int *)((longlong)local_3b4 * 0x60 + *plVar1);
LAB_1419fc921:
    if (piVar9[4] != piVar9[0xf]) {
      piVar6 = *(int **)(piVar9 + 0x12);
      if (*(int **)(piVar9 + 0x12) == (int *)0x0) {
        piVar6 = piVar9 + 0x10;
      }
      iVar5 = piVar6[(longlong)piVar9[0x14] - 1U & (longlong)iVar4];
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(piVar9 + 2);
        do {
          lVar8 = lVar10 + (longlong)iVar5 * 0xc;
          if (*(int *)(lVar10 + (longlong)iVar5 * 0xc) == iVar4) {
            if ((iVar5 != -1) && (lVar8 != 0)) goto LAB_1419fc999;
            break;
          }
          iVar5 = *(int *)(lVar8 + 4);
        } while (iVar5 != -1);
      }
    }
    FUN_14044be50(piVar9 + 2,local_35c,&local_408,0);
LAB_1419fc999:
    if (((DAT_1469f59f0 != 0) && (uVar11 < 0x1b)) && ((0x700a74aU >> (uVar11 & 0x1f) & 1) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x88,&local_3b0,&local_90);
      if ((local_3b0 == -1) ||
         (lVar8 = (longlong)local_3b0 * 0x78 + *(longlong *)(lVar10 + 0x88), lVar8 == 0)) {
        local_2f8 = &local_90;
        FUN_1419cd720(lVar10 + 0x88,&local_3ac,&local_2f8,0);
        lVar8 = (longlong)local_3ac * 0x78 + *(longlong *)(lVar10 + 0x88);
      }
      FUN_1419cc1a0(lVar8 + 0x20,local_358,&local_2a8,0);
    }
  }
  if (local_378 != 0) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,&local_3a8,&local_70);
    if (local_3a8 != -1) {
      piVar7 = (int *)((longlong)local_3a8 * 0x2c + *(longlong *)(param_1 + 0x2c0));
    }
    local_3a4 = piVar7[8];
    plVar1 = (longlong *)(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
      lVar10 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar10 = param_1 + 0x5f8;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x608) - 1U & (longlong)local_3a4) * 4
                      );
      if (iVar5 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar5 * 0x60 + *plVar1);
          if (*piVar7 == local_3a4) {
            if ((iVar5 != -1) && (piVar7 != (int *)0x0)) goto LAB_1419fcb01;
            break;
          }
          iVar5 = piVar7[0x16];
        } while (iVar5 != -1);
      }
    }
    local_2f0 = &local_3a4;
    FUN_1419cd360(plVar1,&local_3a0,&local_2f0,0);
    piVar7 = (int *)((longlong)local_3a0 * 0x60 + *plVar1);
LAB_1419fcb01:
    plVar1 = (longlong *)(piVar7 + 2);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::FindId(plVar1,&local_39c,iVar4);
    if ((local_39c == -1) || (*plVar1 + (longlong)local_39c * 0xc == 0)) {
      FUN_14044be50(plVar1,local_354,&local_408,0);
    }
    if (((DAT_1469f59f0 != 0) && (uVar11 < 0x1b)) && ((0x700a74aU >> (uVar11 & 0x1f) & 1) != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x88,&local_398,&local_70);
      if ((local_398 == -1) ||
         (lVar8 = (longlong)local_398 * 0x78 + *(longlong *)(lVar10 + 0x88), lVar8 == 0)) {
        local_2e8 = &local_70;
        FUN_1419cd720(lVar10 + 0x88,&local_394,&local_2e8,0);
        lVar8 = (longlong)local_394 * 0x78 + *(longlong *)(lVar10 + 0x88);
      }
      FUN_1419cc1a0(lVar8 + 0x20,local_350,&local_2a8,0);
    }
  }
  if (param_9 != 0) {
    local_2c0 = &param_9;
    local_2b8 = local_1f8;
    FUN_1419ceac0(param_1 + 0xa78,local_34c,&local_2c0,0);
  }
  return iVar4;
}



// FUNCTION 1419fcc60 InternalRemoveSRV body=269 status=ok
// SIG undefined InternalRemoveSRV(void)

void FShaderCache::InternalRemoveSRV(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  if ((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb0,local_res18,param_2);
    if ((local_res18[0] == -1) ||
       (lVar1 = (longlong)local_res18[0] * 0x40 + *(longlong *)(param_1 + 0xb0), lVar1 == 0)) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_10 = 0;
      local_c = 0;
    }
    else {
      local_38 = *(undefined8 *)(lVar1 + 8);
      local_30 = *(undefined8 *)(lVar1 + 0x10);
      local_28 = *(undefined8 *)(lVar1 + 0x18);
      local_20 = *(undefined4 *)(lVar1 + 0x20);
      local_1c = *(undefined2 *)(lVar1 + 0x24);
      local_18 = *(undefined8 *)(lVar1 + 0x28);
      local_10 = *(undefined4 *)(lVar1 + 0x30);
      local_c = *(undefined2 *)(lVar1 + 0x34);
    }
    TSet<TTuple<FShaderResourceKey,FShaderResourceViewBinding>,TDefaultMapHashableKeyFuncs<FShaderResourceKey,FShaderResourceViewBinding,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x150,&local_38);
    TSet<TTuple<FRHIShaderResourceView_*,FShaderResourceKey>,TDefaultMapHashableKeyFuncs<FRHIShaderResourceView_*,FShaderResourceKey,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0xb0,param_2);
  }
  return;
}



// FUNCTION 1419fcd70 InternalRemoveTexture body=141 status=ok
// SIG undefined InternalRemoveTexture(void)

void FShaderCache::InternalRemoveTexture(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res18 [4];
  
  if ((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x60,local_res18,param_2);
    if (local_res18[0] == -1) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)local_res18[0] * 0x18;
    }
    TSet<TTuple<FShaderTextureKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderTextureKey,FRHITexture_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x100,(longlong)*(int *)(lVar1 + 8) * 0x30 + *(longlong *)(param_1 + 0x490));
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x60,param_2);
  }
  return;
}



// FUNCTION 1419fce00 InternalSetBlendState body=183 status=ok
// SIG undefined InternalSetBlendState(void)

void FShaderCache::InternalSetBlendState(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int local_res20 [2];
  
  if ((((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) &&
     (param_3 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
    TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x988,local_res20,param_3);
    if (local_res20[0] == -1) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)local_res20[0] * 0x50 + *(longlong *)(param_1 + 0x988);
    }
    FBlendStateInitializerRHI::FBlendStateInitializerRHI(param_2 + 0xe0,lVar1 + 8);
    *(undefined4 *)(param_2 + 0x198) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419fcec0 FUN_1419fcec0 body=436 status=ok
// SIG undefined FUN_1419fcec0(void)

void FUN_1419fcec0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res20 [2];
  
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x1a0),0xff,0x180);
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 800),0xff,0xc00);
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0xf20),0,0x60);
    if (param_3 == 0) {
      *(undefined4 *)(param_2 + 0xdc) = 0xffffffff;
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
      FUN_1419ecdd0(param_1 + 0xa78,local_res20,param_3);
      lVar2 = 0;
      if (local_res20[0] != -1) {
        lVar2 = (longlong)local_res20[0] * 0x1c0 + *(longlong *)(param_1 + 0xa78);
      }
      lVar3 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      if (lVar3 == 0) {
        iVar1 = -1;
      }
      else {
        FUN_1419ed2c0(param_1 + 800,local_res20,lVar3);
        iVar1 = iRam00000000000001ac;
        if (local_res20[0] != -1) {
          iVar1 = *(int *)((longlong)local_res20[0] * 0x1b8 + *(longlong *)(param_1 + 800) + 0x1ac);
        }
      }
      if ((lVar3 == 0) || (iVar1 < 0)) {
        LowLevelFatalErrorHandler("Unknown",0x791,L"Binding invalid bound-shader-state %p",param_3);
        FDebug::AssertFailed
                  (&DAT_144d8549f,"Unknown",0x791,L"Binding invalid bound-shader-state %p",param_3);
        iVar1 = -1;
      }
      *(int *)(param_2 + 0xdc) = iVar1;
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    }
    *(undefined4 *)(param_2 + 0x198) = 0;
    *(undefined4 *)(param_2 + 0xf84) = 0;
  }
  return;
}



// FUNCTION 1419fd080 InternalSetDepthStencilState body=318 status=ok
// SIG undefined InternalSetDepthStencilState(void)

void FShaderCache::InternalSetDepthStencilState(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int local_res20 [2];
  
  if ((((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) &&
     (param_3 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xa28,local_res20,param_3);
    if (local_res20[0] == -1) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0xa28);
    }
    *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(lVar1 + 8);
    *(undefined1 *)(param_2 + 0x129) = *(undefined1 *)(lVar1 + 9);
    *(undefined1 *)(param_2 + 0x12a) = *(undefined1 *)(lVar1 + 10);
    *(undefined1 *)(param_2 + 299) = *(undefined1 *)(lVar1 + 0xb);
    *(undefined1 *)(param_2 + 300) = *(undefined1 *)(lVar1 + 0xc);
    *(undefined1 *)(param_2 + 0x12d) = *(undefined1 *)(lVar1 + 0xd);
    *(undefined1 *)(param_2 + 0x12e) = *(undefined1 *)(lVar1 + 0xe);
    *(undefined1 *)(param_2 + 0x12f) = *(undefined1 *)(lVar1 + 0xf);
    *(undefined1 *)(param_2 + 0x130) = *(undefined1 *)(lVar1 + 0x10);
    *(undefined1 *)(param_2 + 0x131) = *(undefined1 *)(lVar1 + 0x11);
    *(undefined1 *)(param_2 + 0x132) = *(undefined1 *)(lVar1 + 0x12);
    *(undefined1 *)(param_2 + 0x133) = *(undefined1 *)(lVar1 + 0x13);
    *(undefined1 *)(param_2 + 0x134) = *(undefined1 *)(lVar1 + 0x14);
    *(undefined1 *)(param_2 + 0x135) = *(undefined1 *)(lVar1 + 0x15);
    *(undefined4 *)(param_2 + 0x198) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419fd1c0 InternalSetRasterizerState body=236 status=ok
// SIG undefined InternalSetRasterizerState(void)

void FShaderCache::InternalSetRasterizerState(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int local_res20 [2];
  
  if ((((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) &&
     (param_3 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x9d8,local_res20,param_3);
    if (local_res20[0] == -1) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x9d8);
    }
    *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined1 *)(param_2 + 0x124) = *(undefined1 *)(lVar1 + 8);
    *(undefined1 *)(param_2 + 0x125) = *(undefined1 *)(lVar1 + 9);
    *(undefined1 *)(param_2 + 0x126) = *(undefined1 *)(lVar1 + 0x14);
    *(undefined1 *)(param_2 + 0x127) = *(undefined1 *)(lVar1 + 0x15);
    *(undefined4 *)(param_2 + 0x198) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca8));
  }
  return;
}



// FUNCTION 1419fd2b0 FUN_1419fd2b0 body=917 status=ok
// SIG undefined FUN_1419fd2b0(void)

void FUN_1419fd2b0(longlong param_1,longlong param_2,uint param_3,void *param_4,longlong *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  undefined4 uVar11;
  longlong lVar12;
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  longlong local_50;
  undefined4 local_48;
  
  if ((DAT_1469f59ec != 0) && (*(char *)(param_2 + 4000) == '\0')) {
    *(uint *)(param_2 + 4) = param_3;
    *(bool *)param_2 = param_5 != (longlong *)0x0;
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x18),0,0xc0);
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x18),param_4,(ulonglong)param_3 * 0x18);
    if (param_5 != (longlong *)0x0) {
      lVar12 = param_5[1];
      *(longlong *)(param_2 + 8) = *param_5;
      *(longlong *)(param_2 + 0x10) = lVar12;
    }
    if ((*(uint *)(param_1 + 0x2b0) < 0x1b) &&
       ((0x700a74aU >> (*(uint *)(param_1 + 0x2b0) & 0x1f) & 1) != 0)) {
      *(undefined8 *)(param_2 + 0x138) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x140) = 0xffffffffffffffff;
      piVar10 = (int *)0x0;
      *(undefined8 *)(param_2 + 0x148) = 0xffffffffffffffff;
      uVar3 = 0xfffffffe;
      *(undefined8 *)(param_2 + 0x150) = 0xffffffffffffffff;
      lVar12 = (longlong)(int)(param_3 - 1);
      if (-1 < (int)(param_3 - 1)) {
        piVar8 = (int *)(param_2 + 0x138 + lVar12 * 4);
        puVar6 = (undefined4 *)((longlong)param_4 + lVar12 * 0x18 + 0xc);
        do {
          *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) - (uint)(*piVar8 == -2);
          if (*(longlong *)(puVar6 + -3) == 0) {
            *piVar8 = -1;
          }
          else {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x60,local_78);
            piVar5 = piVar10;
            if (local_78[0] != -1) {
              piVar5 = (int *)(*(longlong *)(param_1 + 0x60) + (longlong)local_78[0] * 0x18);
            }
            piVar4 = piVar5 + 2;
            if (piVar5 == (int *)0x0) {
              piVar4 = piVar10;
            }
            if (piVar4 == (int *)0x0) {
              *piVar8 = -2;
              *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
            }
            else {
              puVar7 = (undefined8 *)((longlong)*piVar4 * 0x30 + *(longlong *)(param_1 + 0x490));
              local_70 = *puVar7;
              local_68 = puVar7[1];
              local_60 = puVar7[2];
              local_58 = *(undefined4 *)(puVar7 + 3);
              local_54 = *(undefined2 *)((longlong)puVar7 + 0x1c);
              uVar1 = 0;
              if ((uint)puVar6[-1] < *(uint *)((longlong)puVar7 + 0x14)) {
                uVar1 = puVar6[-1];
              }
              local_50 = (ulonglong)uVar1 << 0x20;
              local_48 = *puVar6;
              iVar2 = FUN_1419e2820(param_1 + 0x3e0,&local_70);
              *piVar8 = iVar2;
            }
          }
          piVar8 = piVar8 + -1;
          puVar6 = puVar6 + -6;
          lVar12 = lVar12 + -1;
        } while (-1 < lVar12);
      }
      iVar2 = *(int *)(param_2 + 0xfa4) - (uint)(*(int *)(param_2 + 0x188) == -2);
      *(int *)(param_2 + 0xfa4) = iVar2;
      if ((param_5 == (longlong *)0x0) || (*param_5 == 0)) {
        uVar3 = 0xffffffff;
      }
      else {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x60,local_78);
        piVar8 = piVar10;
        if (local_78[0] != -1) {
          piVar8 = (int *)(*(longlong *)(param_1 + 0x60) + (longlong)local_78[0] * 0x18);
        }
        piVar5 = piVar8 + 2;
        if (piVar8 == (int *)0x0) {
          piVar5 = piVar10;
        }
        if (piVar5 == (int *)0x0) {
          *(int *)(param_2 + 0xfa4) = iVar2 + 1;
        }
        else {
          local_50 = 0;
          local_48 = 0;
          puVar7 = (undefined8 *)((longlong)*piVar5 * 0x30 + *(longlong *)(param_1 + 0x490));
          local_70 = *puVar7;
          local_68 = puVar7[1];
          local_60 = puVar7[2];
          local_58 = *(undefined4 *)(puVar7 + 3);
          local_54 = *(undefined2 *)((longlong)puVar7 + 0x1c);
          uVar3 = FUN_1419e2820(param_1 + 0x3e0,&local_70);
        }
      }
    }
    else {
      lVar12 = (longlong)(int)(param_3 - 1);
      uVar3 = 0;
      if (-1 < (int)(param_3 - 1)) {
        plVar9 = (longlong *)((longlong)param_4 + lVar12 * 0x18);
        puVar6 = (undefined4 *)(param_2 + 0x138 + lVar12 * 4);
        do {
          uVar11 = uVar3;
          if (*plVar9 != 0) {
            uVar11 = *(undefined4 *)(*plVar9 + 0x3c);
          }
          *puVar6 = uVar11;
          plVar9 = plVar9 + -3;
          puVar6 = puVar6 + -1;
          lVar12 = lVar12 + -1;
        } while (-1 < lVar12);
      }
      if ((param_5 != (longlong *)0x0) && (*param_5 != 0)) {
        uVar3 = *(undefined4 *)(*param_5 + 0x3c);
      }
    }
    *(undefined4 *)(param_2 + 0x188) = uVar3;
    *(undefined4 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 1419fd650 InternalSetSRV body=442 status=ok
// SIG undefined InternalSetSRV(void)

void FShaderCache::InternalSetSRV
               (longlong param_1,longlong param_2,int param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int local_38 [4];
  
  uVar6 = (ulonglong)param_4;
  if ((DAT_1469f59ec != 0) && (*(char *)(param_2 + 4000) == '\0')) {
    lVar5 = (longlong)param_3;
    lVar1 = param_2 + (lVar5 * 0x80 + uVar6) * 4;
    *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) - (uint)(*(int *)(lVar1 + 800) == -2);
    if (param_5 == 0) {
      *(undefined4 *)(lVar1 + 800) = 0xffffffff;
      if (param_4 < 0x40) {
        *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
             *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) & ~(1L << (uVar6 & 0x3f));
      }
      else {
        *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
             *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) &
             ~(1L << ((ulonglong)(param_4 - 0x40) & 0x3f));
      }
    }
    else {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xb0,local_38);
      lVar3 = 0;
      if (local_38[0] != -1) {
        lVar3 = (longlong)local_38[0] * 0x40 + *(longlong *)(param_1 + 0xb0);
      }
      lVar4 = lVar3 + 8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      if (lVar4 == 0) {
        *(undefined4 *)(lVar1 + 800) = 0xfffffffe;
        if (param_4 < 0x40) {
          *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) | 1L << (uVar6 & 0x3f);
          *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
        }
        else {
          *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) |
               1L << ((ulonglong)(param_4 - 0x40) & 0x3f);
          *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
        }
      }
      else {
        uVar2 = FUN_1419e2920(param_1 + 0x440);
        *(undefined4 *)(lVar1 + 800) = uVar2;
        if (param_4 < 0x40) {
          *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) | 1L << (uVar6 & 0x3f);
        }
        else {
          *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) |
               1L << ((ulonglong)(param_4 - 0x40) & 0x3f);
        }
      }
    }
    *(undefined4 *)(param_2 + 0xf84) = 0;
  }
  return;
}



// FUNCTION 1419fd810 InternalSetSamplerState body=231 status=ok
// SIG undefined InternalSetSamplerState(void)

void FShaderCache::InternalSetSamplerState
               (longlong param_1,longlong param_2,int param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_18 [4];
  
  if (((DAT_1469f59ec != 0) && (*(char *)(param_2 + 4000) == '\0')) && (param_4 < 0x10)) {
    lVar1 = param_2 + ((longlong)param_3 * 0x10 + (ulonglong)param_4) * 4;
    *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) - (uint)(*(int *)(lVar1 + 0x1a0) == -2);
    if (param_5 == 0) {
      *(undefined4 *)(lVar1 + 0x1a0) = 0xffffffff;
    }
    else {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x10),local_18);
      puVar3 = (undefined4 *)0x0;
      if (local_18[0] != -1) {
        puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18[0] * 0x18);
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x1a0) = 0xfffffffe;
        *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
      }
      else {
        *(undefined4 *)(lVar1 + 0x1a0) = *puVar2;
      }
    }
    *(undefined4 *)(param_2 + 0xf84) = 0;
  }
  return;
}



// FUNCTION 1419fd900 InternalSetTexture body=459 status=ok
// SIG undefined InternalSetTexture(void)

void FShaderCache::InternalSetTexture
               (longlong param_1,longlong param_2,int param_3,uint param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int local_38 [4];
  
  uVar6 = (ulonglong)param_4;
  if ((DAT_1469f59ec != 0) && (*(char *)(param_2 + 4000) == '\0')) {
    lVar5 = (longlong)param_3;
    lVar1 = param_2 + (lVar5 * 0x80 + uVar6) * 4;
    *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) - (uint)(*(int *)(lVar1 + 800) == -2);
    if (param_5 == (longlong *)0x0) {
      *(undefined4 *)(lVar1 + 800) = 0xffffffff;
      if (param_4 < 0x40) {
        *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
             *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) & ~(1L << (uVar6 & 0x3f));
      }
      else {
        *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
             *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) &
             ~(1L << ((ulonglong)(param_4 - 0x40) & 0x3f));
      }
    }
    else {
      lVar2 = (**(code **)(*param_5 + 0x28))(param_5);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_5 + 0x28))(param_5);
        param_5 = *(longlong **)(lVar2 + 0x60);
      }
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x60,local_38,param_5);
      puVar4 = (undefined4 *)0x0;
      if (local_38[0] != -1) {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)local_38[0] * 0x18);
      }
      puVar3 = puVar4 + 2;
      if (puVar4 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 800) = 0xfffffffe;
        if (param_4 < 0x40) {
          *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) | 1L << (uVar6 & 0x3f);
          *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
        }
        else {
          *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) |
               1L << ((ulonglong)(param_4 - 0x40) & 0x3f);
          *(int *)(param_2 + 0xfa4) = *(int *)(param_2 + 0xfa4) + 1;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 800) = *puVar3;
        if (param_4 < 0x40) {
          *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf20 + lVar5 * 8) | 1L << (uVar6 & 0x3f);
        }
        else {
          *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) =
               *(ulonglong *)(param_2 + 0xf50 + lVar5 * 8) |
               1L << ((ulonglong)(param_4 - 0x40) & 0x3f);
        }
      }
    }
    *(undefined4 *)(param_2 + 0xf84) = 0;
  }
  return;
}



// FUNCTION 1419fdad0 InternalSetViewport body=90 status=ok
// SIG undefined InternalSetViewport(void)

void FShaderCache::InternalSetViewport
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  if (((DAT_1469f59e8 != 0) || (DAT_1469f59ec != 0)) && (*(char *)(param_2 + 4000) == '\0')) {
    *(undefined4 *)(param_2 + 0xf90) = param_6;
    *(undefined4 *)(param_2 + 0xf94) = param_7;
    *(undefined4 *)(param_2 + 0xf98) = param_5;
    *(undefined4 *)(param_2 + 0xf9c) = param_8;
    *(undefined4 *)(param_2 + 0xf88) = param_3;
    *(undefined4 *)(param_2 + 0xf8c) = param_4;
  }
  return;
}



// FUNCTION 1419fdb30 FUN_1419fdb30 body=3283 status=ok
// SIG undefined FUN_1419fdb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419fdb30(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined8 local_358;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338 [2];
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [4];
  undefined1 local_2cc [4];
  undefined1 local_2c8 [4];
  undefined1 local_2c4 [4];
  undefined1 local_2c0 [4];
  undefined1 local_2bc [4];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined4 *local_258;
  longlong *local_250;
  undefined4 *local_248;
  longlong *local_240;
  undefined4 *local_238;
  longlong *local_230;
  undefined4 *local_228;
  longlong *local_220;
  undefined4 *local_218;
  longlong *local_210;
  undefined8 *local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  puVar9 = local_2b8;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_358 = param_3;
  switch(param_2[5]) {
  case 0:
    local_380 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x6b8,local_338,param_2);
    if ((local_338[0] == -1) ||
       (lVar7 = (longlong)local_338[0] * 0x30 + *(longlong *)(param_1 + 0x6b8), lVar7 == 0)) {
      local_330 = 0;
    }
    else {
      local_330 = *(longlong *)(lVar7 + 0x20);
      if (local_330 != 0) {
        LOCK();
        *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_380,&local_330);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_330);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (local_380 != 0) goto LAB_1419fdd6f;
    if (param_4 == (longlong *)0x0) {
LAB_1419fdcb8:
      local_1d8 = *param_2;
      uStack_1d4 = param_2[1];
      uStack_1d0 = param_2[2];
      uStack_1cc = param_2[3];
      local_1c8 = param_2[4];
      uVar8 = FUN_1419ea6d0(local_2b0,*(undefined4 *)(param_1 + 0x2b0),&local_1d8,local_358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_380,uVar8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_2b0);
      if (local_380 == 0) goto LAB_1419fdd6f;
    }
    else {
      cVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*param_4 + 0x38))(param_4,puVar9,param_2);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_380,uVar8);
      }
      else {
        local_1e8 = param_2[4];
        local_398 = &local_1f8;
        local_1f8 = *param_2;
        uStack_1f4 = param_2[1];
        uStack_1f0 = param_2[2];
        uStack_1ec = param_2[3];
        (**(code **)(*DAT_146ab6358 + 0x510))(DAT_146ab6358,local_300,&DAT_146ab6e78,param_4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_380,local_300);
        puVar9 = local_300;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar9);
      if (local_380 == 0) goto LAB_1419fdcb8;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(local_380 + 0x18) = *param_2;
    *(undefined4 *)(local_380 + 0x1c) = uVar1;
    *(undefined4 *)(local_380 + 0x20) = uVar2;
    *(undefined4 *)(local_380 + 0x24) = uVar3;
    *(undefined4 *)(local_380 + 0x28) = param_2[4];
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,param_2);
    local_250 = &local_380;
    local_258 = param_2;
    FUN_1419d0700(param_1 + 0x6b8,local_2bc,&local_258,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fa330(param_1,param_2,param_5);
LAB_1419fdd6f:
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_380);
    return;
  case 1:
    local_370 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x7a8,&local_348,param_2);
    if ((local_348 == -1) ||
       (lVar7 = (longlong)local_348 * 0x30 + *(longlong *)(param_1 + 0x7a8), lVar7 == 0)) {
      local_318 = 0;
    }
    else {
      local_318 = *(longlong *)(lVar7 + 0x20);
      if (local_318 != 0) {
        LOCK();
        *(int *)(local_318 + 8) = *(int *)(local_318 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_370,&local_318);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_318);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (local_370 != 0) goto LAB_1419fe333;
    if (param_4 == (longlong *)0x0) {
LAB_1419fe273:
      local_118 = *param_2;
      uStack_114 = param_2[1];
      uStack_110 = param_2[2];
      uStack_10c = param_2[3];
      local_108 = param_2[4];
      uVar8 = FUN_1419e9700(local_280,*(undefined4 *)(param_1 + 0x2b0),&local_118,local_358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_370,uVar8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_280);
      if (local_370 == 0) goto LAB_1419fe333;
    }
    else {
      cVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*param_4 + 0x40))(param_4,local_288,param_2);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_370,uVar8);
        puVar9 = local_288;
      }
      else {
        local_128 = param_2[4];
        local_398 = &local_138;
        local_138 = *param_2;
        uStack_134 = param_2[1];
        uStack_130 = param_2[2];
        uStack_12c = param_2[3];
        (**(code **)(*DAT_146ab6358 + 0x560))(DAT_146ab6358,local_2e8,&DAT_146ab6e78,param_4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_370,local_2e8);
        puVar9 = local_2e8;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar9);
      if (local_370 == 0) goto LAB_1419fe273;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(local_370 + 0x18) = *param_2;
    *(undefined4 *)(local_370 + 0x1c) = uVar1;
    *(undefined4 *)(local_370 + 0x20) = uVar2;
    *(undefined4 *)(local_370 + 0x24) = uVar3;
    *(undefined4 *)(local_370 + 0x28) = param_2[4];
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,param_2);
    local_220 = &local_370;
    local_228 = param_2;
    FUN_1419d0700(param_1 + 0x7a8,local_2c8,&local_228,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fa330(param_1,param_2,param_5);
LAB_1419fe333:
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_370);
    return;
  case 2:
    local_368 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x7f8,&local_344,param_2);
    if ((local_344 == -1) ||
       (lVar7 = (longlong)local_344 * 0x30 + *(longlong *)(param_1 + 0x7f8), lVar7 == 0)) {
      local_310 = 0;
    }
    else {
      local_310 = *(longlong *)(lVar7 + 0x20);
      if (local_310 != 0) {
        LOCK();
        *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_368,&local_310);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_310);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (local_368 != 0) goto LAB_1419fe522;
    if (param_4 == (longlong *)0x0) {
LAB_1419fe462:
      local_d8 = *param_2;
      uStack_d4 = param_2[1];
      uStack_d0 = param_2[2];
      uStack_cc = param_2[3];
      local_c8 = param_2[4];
      uVar8 = FUN_1419e7460(local_270,*(undefined4 *)(param_1 + 0x2b0),&local_d8,local_358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_368,uVar8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_270);
      if (local_368 == 0) goto LAB_1419fe522;
    }
    else {
      cVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*param_4 + 0x48))(param_4,local_278,param_2);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_368,uVar8);
        puVar9 = local_278;
      }
      else {
        local_e8 = param_2[4];
        local_398 = &local_f8;
        local_f8 = *param_2;
        uStack_f4 = param_2[1];
        uStack_f0 = param_2[2];
        uStack_ec = param_2[3];
        (**(code **)(*DAT_146ab6358 + 0x570))(DAT_146ab6358,local_2e0,&DAT_146ab6e78,param_4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_368,local_2e0);
        puVar9 = local_2e0;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar9);
      if (local_368 == 0) goto LAB_1419fe462;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(local_368 + 0x18) = *param_2;
    *(undefined4 *)(local_368 + 0x1c) = uVar1;
    *(undefined4 *)(local_368 + 0x20) = uVar2;
    *(undefined4 *)(local_368 + 0x24) = uVar3;
    *(undefined4 *)(local_368 + 0x28) = param_2[4];
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,param_2);
    local_210 = &local_368;
    local_218 = param_2;
    FUN_1419d0700(param_1 + 0x7f8,local_2c4,&local_218,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fa330(param_1,param_2,param_5);
LAB_1419fe522:
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_368);
    return;
  case 3:
    local_388 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x708,&local_350,param_2);
    if ((local_350 == -1) ||
       (lVar7 = (longlong)local_350 * 0x30 + *(longlong *)(param_1 + 0x708), lVar7 == 0)) {
      local_328 = 0;
    }
    else {
      local_328 = *(longlong *)(lVar7 + 0x20);
      if (local_328 != 0) {
        LOCK();
        *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_388,&local_328);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_328);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (local_388 != 0) goto LAB_1419fdf55;
    if (param_4 == (longlong *)0x0) {
LAB_1419fde9e:
      local_198 = *param_2;
      uStack_194 = param_2[1];
      uStack_190 = param_2[2];
      uStack_18c = param_2[3];
      local_188 = param_2[4];
      uVar8 = FUN_1419ea050(local_2a0,*(undefined4 *)(param_1 + 0x2b0),&local_198,local_358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_388,uVar8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_2a0);
      if (local_388 == 0) goto LAB_1419fdf55;
    }
    else {
      cVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*param_4 + 0x30))(param_4,local_2a8,param_2);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_388,uVar8);
        puVar9 = local_2a8;
      }
      else {
        local_1a8 = param_2[4];
        local_398 = &local_1b8;
        local_1b8 = *param_2;
        uStack_1b4 = param_2[1];
        uStack_1b0 = param_2[2];
        uStack_1ac = param_2[3];
        (**(code **)(*DAT_146ab6358 + 0x520))(DAT_146ab6358,local_2f8,&DAT_146ab6e78,param_4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_388,local_2f8);
        puVar9 = local_2f8;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar9);
      if (local_388 == 0) goto LAB_1419fde9e;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(local_388 + 0x18) = *param_2;
    *(undefined4 *)(local_388 + 0x1c) = uVar1;
    *(undefined4 *)(local_388 + 0x20) = uVar2;
    *(undefined4 *)(local_388 + 0x24) = uVar3;
    *(undefined4 *)(local_388 + 0x28) = param_2[4];
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,param_2);
    local_240 = &local_388;
    local_248 = param_2;
    FUN_1419d0700(param_1 + 0x708,local_2d0,&local_248,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fa330(param_1,param_2,param_5);
LAB_1419fdf55:
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_388);
    return;
  case 4:
    local_378 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419ed7a0(param_1 + 0x758,&local_34c,param_2);
    if ((local_34c == -1) ||
       (lVar7 = (longlong)local_34c * 0x30 + *(longlong *)(param_1 + 0x758), lVar7 == 0)) {
      local_320 = 0;
    }
    else {
      local_320 = *(longlong *)(lVar7 + 0x20);
      if (local_320 != 0) {
        LOCK();
        *(int *)(local_320 + 8) = *(int *)(local_320 + 8) + 1;
        UNLOCK();
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_378,&local_320);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_320);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (local_378 == 0) {
      if (param_4 == (longlong *)0x0) {
LAB_1419fe084:
        local_158 = *param_2;
        uStack_154 = param_2[1];
        uStack_150 = param_2[2];
        uStack_14c = param_2[3];
        local_148 = param_2[4];
        uVar8 = FUN_1419e7990(local_290,*(undefined4 *)(param_1 + 0x2b0),&local_158,local_358);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_378,uVar8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_290);
        if (local_378 == 0) goto LAB_1419fe144;
      }
      else {
        cVar5 = (**(code **)(*param_4 + 8))(param_4);
        if (cVar5 == '\0') {
          uVar8 = (**(code **)(*param_4 + 0x50))(param_4,local_298,param_2);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_378,uVar8);
          puVar9 = local_298;
        }
        else {
          local_168 = param_2[4];
          local_398 = &local_178;
          local_178 = *param_2;
          uStack_174 = param_2[1];
          uStack_170 = param_2[2];
          uStack_16c = param_2[3];
          (**(code **)(*DAT_146ab6358 + 0x530))(DAT_146ab6358,local_2f0,&DAT_146ab6e78,param_4);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_378,local_2f0);
          puVar9 = local_2f0;
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar9);
        if (local_378 == 0) goto LAB_1419fe084;
      }
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(local_378 + 0x18) = *param_2;
      *(undefined4 *)(local_378 + 0x1c) = uVar1;
      *(undefined4 *)(local_378 + 0x20) = uVar2;
      *(undefined4 *)(local_378 + 0x24) = uVar3;
      *(undefined4 *)(local_378 + 0x28) = param_2[4];
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
      FUN_1419e2750(param_1 + 0x2c0,param_2);
      local_230 = &local_378;
      local_238 = param_2;
      FUN_1419d0700(param_1 + 0x758,local_2cc,&local_238,0);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
      FUN_1419fa330(param_1,param_2,param_5);
    }
LAB_1419fe144:
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
    goto switchD_1419fdb98_default;
  case 5:
    break;
  default:
    goto switchD_1419fdb98_default;
  }
  switch(*(undefined4 *)(param_1 + 0x2b0)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
switchD_1419fe54f_caseD_0:
    bVar4 = true;
    break;
  default:
    if ((param_5 != 0) && (*(int *)(param_5 + 4) != 0)) goto switchD_1419fe54f_caseD_0;
    bVar4 = false;
  }
  FUN_1419ed7a0(param_1 + 0x848,&local_340,param_2);
  lVar7 = 0;
  if (local_340 != -1) {
    lVar7 = (longlong)local_340 * 0x30 + *(longlong *)(param_1 + 0x848);
  }
  lVar6 = lVar7 + 0x20;
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    return;
  }
  if (!bVar4) {
    return;
  }
  local_360 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
  FUN_1419ed7a0(param_1 + 0x848,&local_33c,param_2);
  if ((local_33c == -1) ||
     (lVar7 = (longlong)local_33c * 0x30 + *(longlong *)(param_1 + 0x848), lVar7 == 0)) {
    local_308 = 0;
  }
  else {
    local_308 = *(longlong *)(lVar7 + 0x20);
    if (local_308 != 0) {
      LOCK();
      *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
      UNLOCK();
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(&local_360,&local_308);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_308);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
  if (local_360 == 0) {
    if (param_4 == (longlong *)0x0) {
LAB_1419fe6d4:
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
      local_88 = param_2[4];
      uVar8 = FUN_1419e6e40(local_260,*(undefined4 *)(param_1 + 0x2b0),&local_98,local_358);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_360,uVar8);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_260);
      if (local_360 == 0) goto LAB_1419fe7c3;
    }
    else {
      cVar5 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar5 == '\0') {
        uVar8 = (**(code **)(*param_4 + 0x60))(param_4,local_268,param_2);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_360,uVar8);
        puVar9 = local_268;
      }
      else {
        local_a8 = param_2[4];
        local_398 = &local_b8;
        local_b8 = *param_2;
        uStack_b4 = param_2[1];
        uStack_b0 = param_2[2];
        uStack_ac = param_2[3];
        (**(code **)(*DAT_146ab6358 + 0x550))(DAT_146ab6358,local_2d8,&DAT_146ab6e78,param_4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_360,local_2d8);
        puVar9 = local_2d8;
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(puVar9);
      if (local_360 == 0) goto LAB_1419fe6d4;
    }
    uStack_64 = param_2[5];
    uStack_60 = param_2[6];
    uStack_5c = param_2[7];
    local_78 = *(undefined8 *)(local_360 + 0x18);
    uStack_70 = *(undefined8 *)(local_360 + 0x20);
    local_68 = *(undefined4 *)(local_360 + 0x28);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419e2750(param_1 + 0x2c0,&local_78);
    local_208 = &local_78;
    local_200 = &local_360;
    FUN_1419d0420(param_1 + 0x848,local_2c0,&local_208,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
    FUN_1419fa330(param_1,&local_78,param_5);
  }
LAB_1419fe7c3:
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_360);
switchD_1419fdb98_default:
  return;
}



// FUNCTION 1419fe850 IsTickable body=528 status=ok
// SIG undefined IsTickable(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FShaderCache::IsTickable(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  bVar4 = false;
  if (((*(char *)(param_1 + 0xc98) == '\0') && (DAT_1469f59f0 != 0)) && (DAT_1469f59f4 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    iVar1 = *(int *)(param_1 + 0xb6c);
    bVar4 = iVar1 != 0;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xca0));
    if (iVar1 != 0) {
      return bVar4;
    }
  }
  if ((*(char *)(param_1 + 0xc98) == '\0') && (DAT_1469f59e8 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
    local_70._0_4_ = 0;
    if (*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xbb4)) {
      lVar2 = *(longlong *)(param_1 + 0xbc0);
      if (*(longlong *)(param_1 + 0xbc0) == 0) {
        lVar2 = param_1 + 3000;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xbc8) - 1U &
                               (longlong)*(int *)(param_1 + 0xb68)) * 4);
      if (iVar1 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0xb80));
          if (*piVar3 == *(int *)(param_1 + 0xb68)) {
            if ((iVar1 != -1) && (piVar3 != (int *)0x0)) {
              local_78 = 0;
              local_70 = 0;
              local_58 = 0;
              local_50 = 0;
              local_48 = 0xffffffff;
              local_44 = 0;
              local_38 = 0;
              local_30 = 0;
              FUN_1419db0c0(&local_78,piVar3 + 2);
              goto LAB_1419fe999;
            }
            break;
          }
          iVar1 = piVar3[0x16];
        } while (iVar1 != -1);
      }
    }
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_44 = 0;
    local_38 = 0;
    local_2c = 0;
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
LAB_1419fe999:
    local_30 = 0;
    bVar4 = 0 < (int)local_70 - local_44;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_78,0);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
  }
  return bVar4;
}



// FUNCTION 1419fea60 FUN_1419fea60 body=101 status=ok
// SIG undefined FUN_1419fea60(void)

undefined8 FUN_1419fea60(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0xc0) != '\0') || (*(longlong *)(param_1 + 0x168) != 0)) {
    return 0;
  }
  LOCK();
  bVar2 = *(longlong *)(param_1 + 200) == 0;
  if (bVar2) {
    *(longlong *)(param_1 + 200) = 0;
  }
  UNLOCK();
  if (bVar2) {
    LOCK();
    bVar2 = *(longlong *)(param_1 + 0xd0) == 0;
    if (bVar2) {
      *(longlong *)(param_1 + 0xd0) = 0;
    }
    UNLOCK();
    if (bVar2) {
      LOCK();
      bVar2 = *(longlong *)(param_1 + 0xd8) == 0;
      if (bVar2) {
        *(longlong *)(param_1 + 0xd8) = 0;
      }
      UNLOCK();
      if ((((bVar2) && (*(int *)(param_1 + 0x38) < 1)) && (cVar1 = FUN_141a037f0(), cVar1 == '\0'))
         && (cVar1 = FUN_1419f08d0(), cVar1 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1419fead0 FUN_1419fead0 body=734 status=ok
// SIG undefined FUN_1419fead0(void)

undefined8 FUN_1419fead0(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  wint_t *pwVar13;
  undefined2 *puVar14;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  puVar14 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x80) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(param_1 + 0x78);
  }
  plVar8 = (longlong *)FName::FName(local_res8,puVar12,1);
  lVar11 = *plVar8;
  plVar9 = (longlong *)FShaderType::GetNameToTypeMap();
  plVar8 = (longlong *)0x0;
  if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
    plVar10 = (longlong *)plVar9[8];
    if ((longlong *)plVar9[8] == (longlong *)0x0) {
      plVar10 = plVar9 + 7;
    }
    iVar7 = *(int *)((longlong)plVar10 +
                    ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                    (longlong)(int)plVar9[9] - 1U) * 4);
    if (iVar7 != -1) {
      do {
        plVar10 = (longlong *)(*plVar9 + (longlong)iVar7 * 0x18);
        if (*(longlong *)(*plVar9 + (longlong)iVar7 * 0x18) == lVar11) {
          if (iVar7 != -1) goto LAB_1419feb83;
          break;
        }
        iVar7 = (int)plVar10[2];
      } while (iVar7 != -1);
    }
  }
  plVar10 = plVar8;
LAB_1419feb83:
  plVar9 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar9 = plVar8;
  }
  if ((((plVar9 == (longlong *)0x0) ||
       (plVar10 = (longlong *)FUN_1419f03e0(*(undefined8 *)(*plVar9 + 0x20)),
       *(longlong *)(param_1 + 0x8c) != *plVar10)) || (*(longlong *)(param_1 + 0x94) != plVar10[1]))
     || ((*(int *)(param_1 + 0x9c) != (int)plVar10[2] ||
         (cVar4 = FSerializationHistory::operator==(param_1 + 0xa0,*plVar9 + 0xb0),
         puVar3 = DAT_1469f60a0, cVar4 == '\0')))) {
    return 0;
  }
  do {
    if (puVar3 == (undefined8 *)0x0) {
LAB_1419fecf0:
      if (*(int *)(param_1 + 0x20) != 0) {
        puVar14 = *(undefined2 **)(param_1 + 0x18);
      }
      pwVar13 = &DAT_144d8536c;
      do {
        wVar5 = *(wint_t *)((longlong)(puVar14 + -0xa26c29b6) + (longlong)pwVar13);
        if ((wVar5 == 0) && (*pwVar13 == 0)) {
          return 1;
        }
        if (wVar5 != *pwVar13) {
          wVar5 = towlower(wVar5);
          wVar6 = towlower(*pwVar13);
          if (wVar5 != wVar6) {
            if (wVar5 != wVar6) {
              if (plVar8 == (longlong *)0x0) {
                return 0;
              }
              plVar9 = (longlong *)FUN_1419f03e0(plVar8[3]);
              if (*(longlong *)(param_1 + 0x38) != *plVar9) {
                return 0;
              }
              if (*(longlong *)(param_1 + 0x40) != plVar9[1]) {
                return 0;
              }
              if (*(int *)(param_1 + 0x48) != (int)plVar9[2]) {
                return 0;
              }
              cVar4 = FSerializationHistory::operator==
                                (param_1 + 0x50,
                                 plVar8 + (ulonglong)(*(uint *)(param_1 + 200) & 7) * 5 + 0x18);
              if (cVar4 == '\0') {
                return 0;
              }
            }
            return 1;
          }
        }
        pwVar13 = pwVar13 + 1;
      } while( true );
    }
    local_38 = (longlong *)0x0;
    local_2c = 0;
    psVar1 = *(short **)(puVar3[2] + 0x10);
    plVar9 = plVar8;
    iVar7 = 0;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar11 = -1;
      do {
        lVar2 = lVar11 + 1;
        lVar11 = lVar11 + 1;
      } while (psVar1[lVar2] != 0);
      local_30 = (int)lVar11 + 1;
      lVar11 = (longlong)local_30;
      if (0 < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      iVar7 = local_30;
      plVar9 = local_38;
      FGenericPlatformString::Memcpy(local_38,psVar1,lVar11 * 2);
    }
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar7 != 0) {
      plVar10 = plVar9;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar10);
    if (iVar7 == 0) {
      plVar8 = (longlong *)puVar3[2];
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      goto LAB_1419fecf0;
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}



// FUNCTION 1419fedd0 FUN_1419fedd0 body=37 status=ok
// SIG undefined FUN_1419fedd0(void)

undefined8 FUN_1419fedd0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419fee00 FUN_1419fee00 body=941 status=ok
// SIG undefined FUN_1419fee00(void)

undefined8 FUN_1419fee00(longlong param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  longlong *local_res10;
  void *local_res18;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  int local_3c;
  
  local_res10 = param_2;
  FUN_141eca160(local_res8,*(undefined4 *)(param_1 + 0x18));
  lVar2 = FName::GetComparisonNameEntry(local_res8);
  pvVar7 = (void *)0x0;
  if (lVar2 == 0) {
    local_68 = (void *)0x0;
    local_60 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar2,&local_68);
  }
  iVar1 = (int)local_60;
  iVar10 = local_60._4_4_;
  bVar12 = (int)local_60 != 0;
  local_48 = local_68;
  local_68 = (void *)0x0;
  local_40 = (int)local_60;
  local_3c = local_60._4_4_;
  local_60 = 0;
  if (iVar10 < (int)((2 - (uint)bVar12) + iVar1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar1 = local_40;
  }
  local_40 = (2 - (uint)(iVar1 != 0)) + iVar1;
  pvVar8 = local_48;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    pvVar8 = local_48;
  }
  puVar5 = (undefined2 *)((longlong)pvVar8 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
  *puVar5 = 0x5f;
  puVar5[1] = 0;
  iVar1 = *(int *)(param_1 + 0xe0);
  if (local_40 < 2) {
    local_48 = (void *)0x0;
    _Src = *(void **)(param_1 + 0xd8);
    pvVar9 = pvVar7;
    local_40 = iVar1;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1,0);
      pvVar9 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar1 * 2);
      pvVar7 = pvVar8;
      iVar6 = local_40;
      goto LAB_1419ff011;
    }
  }
  else {
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    if ((local_40 != 0) || (iVar1 = 1, iVar10 == 0)) {
      iVar1 = 0;
    }
    local_48 = pvVar8;
    if (local_3c < iVar10 + iVar1 + local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar1 = local_40;
    local_res18 = *(void **)(param_1 + 0xd8);
    pvVar9 = local_48;
    iVar6 = local_40;
    if (iVar10 != 0) {
      lVar2 = (longlong)local_40;
      local_40 = iVar10 + (uint)(local_40 == 0) + local_40;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      }
      iVar6 = local_40;
      pvVar9 = local_48;
      pvVar8 = (void *)((longlong)local_48 + (lVar2 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar8,local_res18,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar8 + (longlong)iVar10 * 2) = 0;
    }
LAB_1419ff011:
    pvVar8 = pvVar7;
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      goto LAB_1419ff01f;
    }
  }
  iVar6 = 0;
LAB_1419ff01f:
  uVar11 = 0;
  local_50 = (int)local_res10[1];
  lVar2 = (longlong)local_50;
  if ((local_50 != 0) || (iVar1 = 2, iVar6 == -1)) {
    iVar1 = 1;
  }
  pvVar7 = (void *)*local_res10;
  local_58 = (undefined2 *)0x0;
  if ((local_50 == 0) && (iVar1 + iVar6 == 0)) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50 + iVar1 + iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar7,lVar2 * 2);
  }
  FString::PathAppend(&local_58,pvVar9,iVar6);
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  lVar2 = (**(code **)(*plVar3 + 0xe8))(plVar3,puVar5);
  if (0 < lVar2) {
    plVar3 = (longlong *)FUN_1415c3d50();
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar5,0);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1419e0890(puVar4,param_1);
      if (((*(char *)(puVar4 + 5) < '\0') ||
          (iVar1 = FArchive::CustomVer(puVar4,&DAT_1464c0c90), iVar1 != 0x10)) ||
         (iVar1 = FArchive::CustomVer(puVar4,&DAT_1464c0ca0), iVar1 != DAT_1469f59d4)) {
        plVar3 = (longlong *)FUN_1415c3d50();
        puVar5 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar5 = local_58;
        }
        (**(code **)(*plVar3 + 0x30))(plVar3,puVar5,0,0,0);
      }
      else {
        uVar11 = 1;
      }
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*local_res10 != 0) {
    FMemory::Free();
  }
  return uVar11;
}



// FUNCTION 1419ff1b0 FUN_1419ff1b0 body=4198 status=ok
// SIG undefined FUN_1419ff1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419ff1b0(void)

{
  uint *puVar1;
  double dVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 local_358;
  longlong local_350;
  ulonglong local_348;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  undefined8 local_310;
  int local_308;
  uint uStack_304;
  uint *puStack_300;
  undefined4 local_2f8;
  uint uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  uint uStack_2e4;
  uint *puStack_2e0;
  undefined4 local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 *local_2c8;
  longlong *local_2c0;
  int local_2b8;
  uint local_2a8;
  uint uStack_2a4;
  uint local_2a0;
  longlong local_298;
  undefined8 local_290;
  int local_288;
  uint local_278;
  uint uStack_274;
  uint local_270;
  int local_268;
  int local_264;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  longlong *local_250;
  undefined8 *local_248;
  longlong *local_240;
  undefined8 *local_238;
  longlong local_230;
  undefined1 local_228 [8];
  LARGE_INTEGER local_220;
  LARGE_INTEGER local_218;
  int local_210;
  undefined1 local_208 [8];
  int local_200;
  undefined1 local_1fc [4];
  LARGE_INTEGER local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  uint *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  uint *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  uint *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_170 [24];
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  ulonglong local_124;
  char local_11c;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  ulonglong local_104;
  char local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulonglong local_e4;
  char local_dc;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  ulonglong local_c4;
  char local_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  if (DAT_1469f59d8 != 0) {
    uVar5 = FUN_1419f3990(DAT_1469f59d8,DAT_146ab6e98);
    local_310 = uVar5;
    QueryPerformanceCounter(&local_1f8);
    _DAT_1469f5de8 = (double)local_1f8.QuadPart * DAT_1468b02f8 + 16777216.0;
    *(undefined4 *)(DAT_1469f59d8 + 0xb6c) = 0;
    if (DAT_1469f59f0 != 0) {
      local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
      if ((DAT_1469f5a08 != (longlong *)0x0) &&
         (local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8),
         (int)DAT_1469f5a08[0xd] != 0)) {
        local_358 = 0;
        *(int *)(DAT_1469f59d8 + 0xb6c) = (int)DAT_1469f5a08[0xd];
        plVar10 = DAT_1469f5a08;
        if (DAT_1469f5a08 != (longlong *)0x0) {
          puVar6 = (undefined8 *)operator_new(0x48);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            *puVar6 = &PTR_FUN_143f3ece8;
            *(undefined4 *)(puVar6 + 1) = 0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            *(undefined2 *)(puVar6 + 2) = 0x100;
            puVar6[3] = 0;
            *puVar6 = &PTR__scalar_deleting_destructor__144d8e3a8;
            puVar6[4] = (PSRWLOCK)(plVar10 + 0xe);
            *(undefined4 *)(puVar6 + 5) = 0;
            AcquireSRWLockShared((PSRWLOCK)(plVar10 + 0xe));
            puVar6[6] = plVar10;
            *(undefined4 *)(puVar6 + 7) = 0;
            puVar6[8] = 0;
            if (0 < (int)plVar10[1]) {
              plVar10 = *(longlong **)(*plVar10 + (longlong)*(int *)(puVar6 + 7) * 8);
              uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,local_208);
              TRefCountPtr<FRHIIndexBuffer>::operator=(puVar6 + 8,uVar7);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_208);
              TRefCountPtr<FRHIIndexBuffer>::operator=
                        (puVar6 + 3,
                         *(undefined8 *)
                          (*(longlong *)puVar6[6] + (longlong)*(int *)(puVar6 + 7) * 8));
            }
          }
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            UNLOCK();
          }
          local_2c8 = puVar6;
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_358,&local_2c8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c8);
        }
        uVar7 = local_358;
        lVar13 = DAT_1469f59d8;
        iVar9 = *(int *)(DAT_1469f59d8 + 0xb78);
        *(int *)(DAT_1469f59d8 + 0xb78) = iVar9 + 1;
        if (*(int *)(lVar13 + 0xb7c) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar13 + 0xb70,iVar9);
        }
        local_358 = 0;
        *(undefined8 *)(*(longlong *)(lVar13 + 0xb70) + (longlong)iVar9 * 8) = uVar7;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_358);
        plVar10 = DAT_1469f5a08;
        local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
        if ((DAT_1469f5a08 != (longlong *)0x0) &&
           (local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8),
           (char)DAT_1469f5a08[0xf] != '\0')) {
          AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
          ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 0xe));
          plVar15 = plVar10 + 2;
          if (plVar15 != (longlong *)0x0) {
            local_140 = 0;
            local_b8 = 0;
            local_158 = 0;
            puVar1 = (uint *)(plVar10 + 4);
            lStack_150 = 0;
            local_148 = 0;
            local_13c = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_128 = 0;
            local_11c = '\0';
            local_118 = 0;
            lStack_110 = 0;
            local_108 = 0;
            local_fc = '\0';
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            local_dc = '\0';
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_bc = '\0';
            local_124 = 3;
            local_104 = 4;
            local_e4 = 1;
            local_c4 = 2;
            uVar16 = *(uint *)(plVar10 + 7);
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_308 = 0;
            uStack_304 = 1;
            uStack_2f4 = 0;
            iStack_2f0 = 0;
            if (uVar16 != 0) {
              puVar17 = (uint *)plVar10[6];
              if ((uint *)plVar10[6] == (uint *)0x0) {
                puVar17 = puVar1;
              }
              uVar12 = *puVar17;
              iStack_2f0 = 0;
              local_308 = 0;
              while (uVar12 == 0) {
                lVar13 = (longlong)local_308;
                iStack_2f0 = iStack_2f0 + 0x20;
                iVar9 = local_308 + 1;
                bVar18 = (int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_308
                ;
                local_308 = iVar9;
                if (bVar18) goto LAB_1419ff5a0;
                uVar12 = puVar17[lVar13 + 1];
              }
              uStack_304 = -uVar12 & uVar12;
              local_268 = 0x1f;
              if (uStack_304 != 0) {
                for (; uStack_304 >> local_268 == 0; local_268 = local_268 + -1) {
                }
              }
              if (uStack_304 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - local_268;
              }
              uStack_2f4 = (iStack_2f0 - iVar9) + 0x1f;
              if ((int)uVar16 < (int)uStack_2f4) {
LAB_1419ff5a0:
                uStack_2f4 = uVar16;
              }
            }
            local_2f8 = 0xffffffff;
            uStack_2a4 = *(uint *)(plVar10 + 7);
            uStack_190 = CONCAT44(uStack_304,local_308);
            uStack_1d0 = CONCAT44(uStack_2f4,0xffffffff);
            local_1c8 = CONCAT44(uStack_2ec,iStack_2f0);
            local_2b8 = (int)uStack_2a4 >> 5;
            local_2a8 = -1 << ((byte)uStack_2a4 & 0x1f);
            local_2a0 = uStack_2a4 & 0xffffffe0;
            iStack_1e0 = local_308;
            uStack_1dc = uStack_304;
            puStack_300 = puVar1;
            local_1d8 = puVar1;
            local_198 = plVar15;
            puStack_188 = puVar1;
            uStack_180 = uStack_1d0;
            uStack_178 = local_1c8;
            local_1e8 = plVar15;
            uVar12 = uStack_2a4;
            if (uStack_2a4 != uVar16) {
              puVar17 = (uint *)plVar10[6];
              if ((uint *)plVar10[6] == (uint *)0x0) {
                puVar17 = puVar1;
              }
              uVar12 = puVar17[local_2b8] & local_2a8;
              while (uVar12 == 0) {
                lVar13 = (longlong)local_2b8;
                local_2a0 = local_2a0 + 0x20;
                iVar9 = local_2b8 + 1;
                bVar18 = (int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_2b8
                ;
                local_2b8 = iVar9;
                if (bVar18) goto LAB_1419ff69e;
                uVar12 = puVar17[lVar13 + 1];
                local_2a8 = 0xffffffff;
              }
              uVar12 = -uVar12 & uVar12;
              local_264 = 0x1f;
              if (uVar12 != 0) {
                for (; uVar12 >> local_264 == 0; local_264 = local_264 + -1) {
                }
              }
              if (uVar12 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - local_264;
              }
              uStack_2a4 = (local_2a0 - iVar9) + 0x1f;
              uVar12 = uStack_2a4;
              if ((int)uVar16 < (int)uStack_2a4) {
LAB_1419ff69e:
                uStack_2a4 = uVar16;
                uVar12 = uVar16;
              }
            }
            while( true ) {
              lVar13 = DAT_1469f59d8;
              if (((uStack_1d0._4_4_ == uVar12) && (local_1d8 == puVar1)) && (local_1e8 == plVar15))
              break;
              plVar10 = (longlong *)((longlong)(int)uStack_1d0._4_4_ * 0x70 + *local_1e8);
              local_b8 = 0;
              local_158 = *plVar10;
              lStack_150 = plVar10[1];
              local_148 = CONCAT44(local_148._4_4_,(int)plVar10[2]);
              local_140 = 0;
              lVar11 = -*plVar10;
              if ((lVar11 == 0) && (lVar11 = -plVar10[1], lVar11 == 0)) {
                lVar11 = -(ulonglong)*(uint *)(plVar10 + 2);
              }
              local_13c = lVar11 != 0;
              local_118 = plVar10[5];
              lStack_110 = plVar10[6];
              local_108 = (undefined4)plVar10[7];
              local_104 = local_104 & 0xffffffff;
              lVar11 = -plVar10[5];
              if ((lVar11 == 0) && (lVar11 = -plVar10[6], lVar11 == 0)) {
                lVar11 = -(ulonglong)*(uint *)(plVar10 + 7);
              }
              local_fc = lVar11 != 0;
              local_f8 = *(undefined8 *)((longlong)plVar10 + 0x3c);
              uStack_f0 = *(undefined8 *)((longlong)plVar10 + 0x44);
              local_e8 = *(undefined4 *)((longlong)plVar10 + 0x4c);
              local_e4 = local_e4 & 0xffffffff;
              lVar11 = -*(longlong *)((longlong)plVar10 + 0x3c);
              if ((lVar11 == 0) && (lVar11 = -*(longlong *)((longlong)plVar10 + 0x44), lVar11 == 0))
              {
                lVar11 = -(ulonglong)*(uint *)((longlong)plVar10 + 0x4c);
              }
              local_dc = lVar11 != 0;
              local_d8 = plVar10[10];
              lStack_d0 = plVar10[0xb];
              local_c8 = (undefined4)plVar10[0xc];
              local_c4 = local_c4 & 0xffffffff;
              lVar11 = -plVar10[10];
              if ((lVar11 == 0) && (lVar11 = -plVar10[0xb], lVar11 == 0)) {
                lVar11 = -(ulonglong)*(uint *)(plVar10 + 0xc);
              }
              local_bc = lVar11 != 0;
              local_138 = *(undefined8 *)((longlong)plVar10 + 0x14);
              uStack_130 = *(undefined8 *)((longlong)plVar10 + 0x1c);
              local_128 = *(undefined4 *)((longlong)plVar10 + 0x24);
              local_124 = local_124 & 0xffffffff;
              lVar11 = -*(longlong *)((longlong)plVar10 + 0x14);
              if ((lVar11 == 0) && (lVar11 = -*(longlong *)((longlong)plVar10 + 0x1c), lVar11 == 0))
              {
                lVar11 = -(ulonglong)*(uint *)((longlong)plVar10 + 0x24);
              }
              local_11c = lVar11 != 0;
              if ((bool)local_13c) {
                TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(DAT_1469f59d8 + 0x668,&local_340,&local_158);
                if ((local_340 == -1) ||
                   (lVar11 = (longlong)local_340 * 0x78 + *(longlong *)(lVar13 + 0x668), lVar11 == 0
                   )) {
                  local_1f0 = &local_158;
                  FUN_1419cd720(lVar13 + 0x668,&local_33c,&local_1f0,0);
                  lVar11 = (longlong)local_33c * 0x78 + *(longlong *)(lVar13 + 0x668);
                }
                FUN_1419cc1a0(lVar11 + 0x20,local_260,&local_158,0);
              }
              lVar13 = DAT_1469f59d8;
              if (local_fc != '\0') {
                TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(DAT_1469f59d8 + 0x668,&local_338,&local_118);
                if ((local_338 == -1) ||
                   (lVar11 = (longlong)local_338 * 0x78 + *(longlong *)(lVar13 + 0x668), lVar11 == 0
                   )) {
                  local_250 = &local_118;
                  FUN_1419cd720(lVar13 + 0x668,&local_334,&local_250,0);
                  lVar11 = (longlong)local_334 * 0x78 + *(longlong *)(lVar13 + 0x668);
                }
                FUN_1419cc1a0(lVar11 + 0x20,local_25c,&local_158,0);
              }
              lVar13 = DAT_1469f59d8;
              if (local_dc != '\0') {
                TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(DAT_1469f59d8 + 0x668,&local_330,&local_f8);
                if ((local_330 == -1) ||
                   (lVar11 = (longlong)local_330 * 0x78 + *(longlong *)(lVar13 + 0x668), lVar11 == 0
                   )) {
                  local_248 = &local_f8;
                  FUN_1419cd720(lVar13 + 0x668,&local_32c,&local_248,0);
                  lVar11 = (longlong)local_32c * 0x78 + *(longlong *)(lVar13 + 0x668);
                }
                FUN_1419cc1a0(lVar11 + 0x20,local_258,&local_158,0);
              }
              lVar13 = DAT_1469f59d8;
              if (local_bc != '\0') {
                TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(DAT_1469f59d8 + 0x668,&local_328,&local_d8);
                if ((local_328 == -1) ||
                   (lVar11 = (longlong)local_328 * 0x78 + *(longlong *)(lVar13 + 0x668), lVar11 == 0
                   )) {
                  local_240 = &local_d8;
                  FUN_1419cd720(lVar13 + 0x668,&local_324,&local_240,0);
                  lVar11 = (longlong)local_324 * 0x78 + *(longlong *)(lVar13 + 0x668);
                }
                FUN_1419cc1a0(lVar11 + 0x20,local_254,&local_158,0);
              }
              lVar13 = DAT_1469f59d8;
              if (local_11c != '\0') {
                TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(DAT_1469f59d8 + 0x668,&local_320,&local_138);
                if ((local_320 == -1) ||
                   (lVar11 = (longlong)local_320 * 0x78 + *(longlong *)(lVar13 + 0x668), lVar11 == 0
                   )) {
                  local_238 = &local_138;
                  FUN_1419cd720(lVar13 + 0x668,&local_31c,&local_238,0);
                  lVar11 = (longlong)local_31c * 0x78 + *(longlong *)(lVar13 + 0x668);
                }
                FUN_1419cc1a0(lVar11 + 0x20,local_1fc,&local_158,0);
              }
              uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1dc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1e0);
            }
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)operator_new(0xe8);
      puVar3 = PTR_u_ByteCodeCache_ushadercode_1464c0cb0;
      puVar14 = puVar6;
      if (puVar8 != (undefined8 *)0x0) {
        local_350 = 0;
        local_348 = 0;
        if ((PTR_u_ByteCodeCache_ushadercode_1464c0cb0 != (undefined *)0x0) &&
           (*(short *)PTR_u_ByteCodeCache_ushadercode_1464c0cb0 != 0)) {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (*(short *)(PTR_u_ByteCodeCache_ushadercode_1464c0cb0 + lVar13 * 2) != 0);
          uVar16 = (int)lVar13 + 1;
          local_348 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
          }
          FGenericPlatformString::Memcpy(local_350,puVar3,(longlong)(int)uVar16 * 2);
        }
        FShaderFactoryInterface::FShaderFactoryInterface
                  (puVar8,*(undefined4 *)(DAT_1469f59d8 + 0x2b0),&local_350);
        *puVar8 = &PTR__scalar_deleting_destructor__144d8e280;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        *(undefined4 *)(puVar8 + 0xd) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x6c) = 0;
        puVar8[0xf] = 0;
        *(undefined4 *)(puVar8 + 0x10) = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0;
        *(undefined4 *)(puVar8 + 0x17) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0xbc) = 0;
        puVar8[0x19] = 0;
        *(undefined4 *)(puVar8 + 0x1a) = 0;
        FString::FString(puVar8 + 0x1b,&local_350);
        puVar14 = puVar8;
        if (local_350 != 0) {
          FMemory::Free();
        }
      }
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
      uVar7 = FUN_14167d0d0(local_170);
      cVar4 = FUN_1419fee00(puVar14,uVar7);
      *(undefined8 **)(DAT_1469f59d8 + 0x660) = puVar14;
      if (cVar4 != '\0') {
        plVar10 = puVar14 + 0x11;
        uStack_2e4 = 1;
        uVar16 = *(uint *)(puVar14 + 0x16);
        puVar1 = (uint *)(puVar14 + 0x13);
        local_2e8 = 0;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        if (uVar16 != 0) {
          puVar17 = (uint *)puVar14[0x15];
          if ((uint *)puVar14[0x15] == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar12 = *puVar17;
          puVar8 = puVar6;
          while (uVar12 == 0) {
            iVar9 = (int)puVar6;
            uStack_2d0 = (int)puVar8 + 0x20;
            puVar8 = (undefined8 *)(ulonglong)uStack_2d0;
            local_2e8 = iVar9 + 1;
            puVar6 = (undefined8 *)(ulonglong)local_2e8;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_1419ffd33;
            uVar12 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_2e4 = -uVar12 & uVar12;
          local_200 = 0x1f;
          if (uStack_2e4 != 0) {
            for (; uStack_2e4 >> local_200 == 0; local_200 = local_200 + -1) {
            }
          }
          if (uStack_2e4 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_200;
          }
          uStack_2d4 = (uStack_2d0 - iVar9) + 0x1f;
          if ((int)uVar16 < (int)uStack_2d4) {
LAB_1419ffd33:
            uStack_2d4 = uVar16;
          }
        }
        local_2d8 = 0xffffffff;
        uStack_274 = *(uint *)(puVar14 + 0x16);
        uStack_190 = CONCAT44(uStack_2e4,local_2e8);
        uStack_1a8 = CONCAT44(uStack_2d4,0xffffffff);
        local_1a0 = CONCAT44(uStack_2cc,uStack_2d0);
        local_288 = (int)uStack_274 >> 5;
        local_278 = -1 << ((byte)uStack_274 & 0x1f);
        local_270 = uStack_274 & 0xffffffe0;
        uStack_1b8 = local_2e8;
        uStack_1b4 = uStack_2e4;
        puStack_2e0 = puVar1;
        local_1b0 = puVar1;
        local_198 = plVar10;
        puStack_188 = puVar1;
        uStack_180 = uStack_1a8;
        uStack_178 = local_1a0;
        local_1c0 = plVar10;
        uVar12 = uStack_274;
        if (uStack_274 != uVar16) {
          puVar17 = (uint *)puVar14[0x15];
          if ((uint *)puVar14[0x15] == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar12 = puVar17[local_288] & local_278;
          while (uVar12 == 0) {
            lVar13 = (longlong)local_288;
            local_270 = local_270 + 0x20;
            iVar9 = local_288 + 1;
            bVar18 = (int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_288;
            local_288 = iVar9;
            if (bVar18) goto LAB_1419ffe2e;
            uVar12 = puVar17[lVar13 + 1];
            local_278 = 0xffffffff;
          }
          uVar12 = -uVar12 & uVar12;
          local_210 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> local_210 == 0; local_210 = local_210 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_210;
          }
          uStack_274 = (local_270 - iVar9) + 0x1f;
          uVar12 = uStack_274;
          if ((int)uVar16 < (int)uStack_274) {
LAB_1419ffe2e:
            uStack_274 = uVar16;
            uVar12 = uVar16;
          }
        }
        while( true ) {
          if (((uStack_1a8._4_4_ == uVar12) && (local_1b0 == puVar1)) && (local_1c0 == plVar10))
          break;
          plVar15 = (longlong *)(DAT_1469f59d8 + 0x668);
          lVar13 = (longlong)(int)uStack_1a8._4_4_ * 0x78 + *local_1c0;
          TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindId(plVar15,&local_318,lVar13);
          if ((local_318 == -1) || (lVar11 = (longlong)local_318 * 0x78 + *plVar15, lVar11 == 0)) {
            local_230 = lVar13;
            FUN_1419cd720(plVar15,&local_314,&local_230,0);
            lVar11 = (longlong)local_314 * 0x78 + *plVar15;
          }
          FUN_1419cbaa0(lVar11 + 0x20);
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8 & ~uStack_1b4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b8);
        }
        iVar9 = *(int *)(puVar14 + 8) - *(int *)((longlong)puVar14 + 0x6c);
        uVar5 = local_310;
        if (iVar9 != 0) {
          *(int *)(DAT_1469f59d8 + 0xb6c) = *(int *)(DAT_1469f59d8 + 0xb6c) + iVar9;
          puVar6 = (undefined8 *)FUN_1419e99a0(puVar14,local_228);
          lVar13 = DAT_1469f59d8;
          iVar9 = *(int *)(DAT_1469f59d8 + 0xb78);
          *(int *)(DAT_1469f59d8 + 0xb78) = iVar9 + 1;
          if (*(int *)(lVar13 + 0xb7c) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar13 + 0xb70,iVar9);
          }
          *(undefined8 *)(*(longlong *)(lVar13 + 0xb70) + (longlong)iVar9 * 8) = *puVar6;
          *puVar6 = 0;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_228);
          uVar5 = local_310;
        }
      }
      bVar18 = DAT_1469f59f4 != 0;
      QueryPerformanceCounter(&local_220);
      DAT_1469f59f4 = 0;
      local_298 = 0;
      local_290 = 0;
      dVar2 = (double)local_220.QuadPart * DAT_1468b02f8;
      do {
        if (*(int *)(DAT_1469f59d8 + 0xb78) < 1) break;
        plVar10 = (longlong *)**(longlong **)(DAT_1469f59d8 + 0xb70);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_2c0 = plVar10;
        cVar4 = (**(code **)(*plVar10 + 8))(plVar10);
        while ((cVar4 != '\0' && (DAT_1469f59f4 == 0))) {
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_88);
          if ((local_74 < 6) && (local_70 < 0x20)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          if (bVar19) {
            local_94 = local_74;
            local_a8 = local_88;
            uStack_a4 = uStack_84;
            uStack_a0 = uStack_80;
            uStack_9c = uStack_7c;
            local_90 = 0;
            local_98 = local_78;
            local_8c = 1;
            local_368 = uVar5;
            FUN_1419fdb30(DAT_1469f59d8,&local_a8,&local_298,plVar10[3]);
          }
          QueryPerformanceCounter(&local_218);
          if (((bVar18) && (0.0 <= DAT_1464c0ad8)) &&
             ((double)DAT_1464c0ad8 <= (double)local_218.QuadPart * DAT_1468b02f8 - dVar2)) {
            DAT_1469f59f4 = 1;
          }
          *(int *)(DAT_1469f59d8 + 0xb6c) = *(int *)(DAT_1469f59d8 + 0xb6c) + -1;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          cVar4 = (**(code **)(*plVar10 + 8))(plVar10);
        }
        cVar4 = (**(code **)(*plVar10 + 8))(plVar10);
        if (cVar4 != '\0') {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c0);
          break;
        }
        TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                  (DAT_1469f59d8 + 0xb70,0,1,1);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar10 + 1;
          lVar13 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            if ((char)plVar10[2] == '\0') {
              if (DAT_146ab62f5 == '\0') {
                cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
                if (cVar4 != '\0') goto LAB_141a0018e;
              }
              LOCK();
              bVar19 = *(int *)((longlong)plVar10 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)plVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar16 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar13 = 0;
                if (uVar16 != 0) {
                  lVar13 = (&DAT_1468a81f8)[uVar16 >> 0xe] + (ulonglong)(uVar16 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar13 + 8) = plVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
LAB_141a0018e:
              (**(code **)*plVar10)(plVar10);
            }
          }
        }
      } while (DAT_1469f59f4 == 0);
      if (local_298 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141a00220 FUN_141a00220 body=298 status=ok
// SIG undefined FUN_141a00220(void)

undefined1 FUN_141a00220(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  
  uVar8 = 0;
  plVar4 = (longlong *)FUN_1415c3d50();
  puVar9 = &DAT_143f3eda8;
  if ((int)param_1[1] == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_1;
  }
  lVar5 = (**(code **)(*plVar4 + 0xe8))(plVar4,puVar7);
  if (0 < lVar5) {
    plVar4 = (longlong *)FUN_1415c3d50();
    if ((int)param_1[1] == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,puVar7,0);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1419dcd40(puVar6,param_2);
      cVar1 = *(char *)(puVar6 + 5);
      iVar2 = FArchive::CustomVer(puVar6,&DAT_1464c0c90);
      iVar3 = FArchive::CustomVer(puVar6,&DAT_1464c0ca0);
      if (((cVar1 < '\0') || (iVar2 != 0x10)) || (iVar3 != DAT_1469f59d4)) {
        uVar8 = 0;
        plVar4 = (longlong *)FUN_1415c3d50();
        if ((int)param_1[1] != 0) {
          puVar9 = (undefined2 *)*param_1;
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,puVar9,0,0,0);
      }
      else {
        uVar8 = 1;
      }
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 141a00350 FUN_141a00350 body=481 status=ok
// SIG undefined FUN_141a00350(void)

void FUN_141a00350(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  local_40 = FUN_1415a30d0();
  uVar2 = *(uint *)(local_40 + 0x28);
  uStack_84 = 1;
  local_88 = 0;
  puVar1 = (uint *)(local_40 + 0x10);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(local_40 + 0x20);
    if (*(uint **)(local_40 + 0x20) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar5 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar5;
      if (bVar4) goto LAB_141a0041d;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_74 = (iStack_70 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141a0041d:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(local_40 + 0x28);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = *(uint **)(local_40 + 0x20);
    if (*(uint **)(local_40 + 0x20) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141a004e3;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_74 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141a004e3:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141a00540 FUN_141a00540 body=197 status=ok
// SIG undefined FUN_141a00540(void)

ulonglong FUN_141a00540(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar5 = uVar10;
  if (DAT_1469f59c8 != 0) {
    LOCK();
    uVar5 = *(ulonglong *)(DAT_1469f59c8 + 200);
    if (uVar5 == 0) {
      *(ulonglong *)(DAT_1469f59c8 + 200) = 0;
      uVar5 = 0;
    }
    UNLOCK();
    LOCK();
    lVar6 = *(longlong *)(DAT_1469f59c8 + 0xd0);
    if (lVar6 == 0) {
      *(longlong *)(DAT_1469f59c8 + 0xd0) = 0;
      lVar6 = 0;
    }
    lVar1 = DAT_1469f5d30;
    UNLOCK();
    iVar8 = (int)lVar6;
    if (lVar6 < 1) {
      iVar8 = 0;
    }
    uVar7 = uVar5 & 0xffffffff;
    if ((longlong)uVar5 < 1) {
      uVar7 = uVar10;
    }
    uVar9 = iVar8 + (int)uVar7;
    uVar5 = (ulonglong)uVar9;
    if (DAT_1469f59c8 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        uVar10 = 4;
      }
      if (*(int *)(uVar10 + lVar1) == 1) {
        uVar4 = FUN_141ec7ea0();
        if (uVar4 <= uVar9) {
          uVar4 = uVar9;
        }
        return (ulonglong)uVar4;
      }
    }
  }
  return uVar5;
}



// FUNCTION 141a00610 FUN_141a00610 body=68 status=ok
// SIG undefined FUN_141a00610(void)

int FUN_141a00610(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (DAT_1469f59c8 == 0) {
    return 0;
  }
  LOCK();
  lVar2 = *(longlong *)(DAT_1469f59c8 + 200);
  if (lVar2 == 0) {
    *(longlong *)(DAT_1469f59c8 + 200) = 0;
    lVar2 = 0;
  }
  UNLOCK();
  LOCK();
  lVar3 = *(longlong *)(DAT_1469f59c8 + 0xd0);
  if (lVar3 == 0) {
    *(longlong *)(DAT_1469f59c8 + 0xd0) = 0;
    lVar3 = 0;
  }
  UNLOCK();
  iVar1 = (int)lVar3;
  if (lVar3 < 1) {
    iVar1 = 0;
  }
  iVar4 = (int)lVar2;
  if (lVar2 < 1) {
    iVar4 = 0;
  }
  return iVar1 + iVar4;
}



// FUNCTION 141a00660 FUN_141a00660 body=187 status=ok
// SIG undefined FUN_141a00660(void)

int FUN_141a00660(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (DAT_1469f59c8 != 0) {
    lVar7 = 0;
    LOCK();
    lVar4 = *(longlong *)(DAT_1469f59c8 + 200);
    if (lVar4 == 0) {
      *(longlong *)(DAT_1469f59c8 + 200) = 0;
      lVar4 = 0;
    }
    UNLOCK();
    LOCK();
    lVar5 = *(longlong *)(DAT_1469f59c8 + 0xd8);
    if (lVar5 == 0) {
      *(longlong *)(DAT_1469f59c8 + 0xd8) = 0;
      lVar5 = 0;
    }
    UNLOCK();
    LOCK();
    lVar6 = *(longlong *)(DAT_1469f59c8 + 0xe0);
    if (lVar6 == 0) {
      *(longlong *)(DAT_1469f59c8 + 0xe0) = 0;
      lVar6 = 0;
    }
    lVar1 = DAT_1469f5d30;
    UNLOCK();
    iVar8 = (int)lVar4 + (int)lVar6 + (int)lVar5;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    if (*(int *)(lVar7 + lVar1) == 1) {
      iVar8 = FUN_141ec7e90();
    }
    return iVar8;
  }
  return 0;
}



// FUNCTION 141a00720 FUN_141a00720 body=240 status=ok
// SIG undefined FUN_141a00720(void)

void FUN_141a00720(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x330)) {
    piVar6 = (int *)(param_1 + 0x38);
    do {
      if ((*(byte *)(piVar6 + 2) & 1) != 0) {
        iVar1 = *piVar6;
        uVar3 = *(undefined8 *)(*(longlong *)(piVar6 + -2) + 0x30);
        iVar2 = piVar6[1];
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar4 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar4 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar4;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &PTR_LAB_143f489e0;
        *(int *)(puVar4 + 2) = iVar7;
        puVar4[3] = uVar3;
        *(int *)(puVar4 + 4) = iVar1 * param_3 + iVar2;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar7 < *(int *)(param_1 + 0x330));
  }
  return;
}



// FUNCTION 141a00810 FUN_141a00810 body=240 status=ok
// SIG undefined FUN_141a00810(void)

void FUN_141a00810(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x640)) {
    piVar6 = (int *)(param_1 + 0x348);
    do {
      if ((*(byte *)(piVar6 + 2) & 1) != 0) {
        iVar1 = *piVar6;
        uVar3 = *(undefined8 *)(*(longlong *)(piVar6 + -2) + 0x30);
        iVar2 = piVar6[1];
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar4 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar4 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar4;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &PTR_LAB_143f489e0;
        *(int *)(puVar4 + 2) = iVar7;
        puVar4[3] = uVar3;
        *(int *)(puVar4 + 4) = param_3 * iVar1 + iVar2;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar7 < *(int *)(param_1 + 0x640));
  }
  return;
}



// FUNCTION 141a00910 FUN_141a00910 body=1230 status=ok
// SIG undefined FUN_141a00910(void)

void FUN_141a00910(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint *puVar11;
  wint_t *pwVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  short *psVar16;
  longlong *plVar17;
  bool bVar18;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int iStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf0);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 == 0) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_4;
    }
    pwVar12 = (wint_t *)&DAT_146299580;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar9 + -0xa314cac0) + (longlong)pwVar12);
      if ((wVar3 == 0) && (*pwVar12 == 0)) goto LAB_141a009d1;
      if (wVar3 != *pwVar12) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar12);
        if (wVar3 != wVar4) goto LAB_141a009c2;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_141a00bf3;
LAB_141a009c2:
  if (wVar3 != wVar4) goto LAB_141a00bf3;
LAB_141a009d1:
  if ((param_3 != *(int *)(param_1 + 0xb0)) || (*(char *)(param_1 + 0xc1) != '\0'))
  goto LAB_141a00bf3;
  FUN_1419e5120(param_1);
  local_d8 = (undefined2 *)0x0;
  psVar16 = &DAT_143f3eda8;
  if (DAT_1468e2428 != 0) {
    psVar16 = DAT_1468e2420;
  }
  local_d0 = 0;
  lVar13 = -1;
  local_b8 = 0;
  local_b0 = 0;
  if ((psVar16 != (short *)0x0) && (lVar10 = lVar13, *psVar16 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (psVar16[lVar10] != 0);
    uVar8 = (int)lVar10 + 1;
    local_b0 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    }
    FGenericPlatformString::Memcpy(local_b8,psVar16,(longlong)(int)uVar8 * 2);
  }
  bVar1 = false;
  cVar2 = FConfigCacheIni::GetString
                    (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
                     PTR_u_LastOpened_1464c0de0,&local_d8,&local_b8);
  if (cVar2 == '\0') {
    psVar16 = &DAT_143f3eda8;
    if (DAT_1468e2418 != 0) {
      psVar16 = DAT_1468e2410;
    }
    local_c8 = 0;
    local_c0 = 0;
    if ((psVar16 != (short *)0x0) && (lVar10 = lVar13, *psVar16 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (psVar16[lVar10] != 0);
      uVar8 = (int)lVar10 + 1;
      local_c0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      }
      FGenericPlatformString::Memcpy(local_c8,psVar16,(longlong)(int)uVar8 * 2);
    }
    bVar1 = true;
    cVar2 = FConfigCacheIni::GetString
                      (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
                       PTR_u_LastOpened_1464c0de0,&local_d8,&local_c8);
    if (cVar2 != '\0') goto LAB_141a00b36;
    if ((int)local_d0 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)local_d0 + -1;
    }
    if (iVar6 != 0) goto LAB_141a00b36;
    bVar18 = true;
  }
  else {
LAB_141a00b36:
    bVar18 = false;
  }
  if ((bVar1) && (local_c8 != 0)) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if ((bVar18) && (local_d8 != &DAT_146299580)) {
    if (DAT_146299580 == 0) {
      uVar8 = 0;
    }
    else {
      do {
        lVar13 = lVar13 + 1;
      } while ((&DAT_146299580)[lVar13] != 0);
      uVar8 = (int)lVar13 + 1;
    }
    uVar7 = local_d0._4_4_;
    iVar6 = 0;
    local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
    if (uVar7 != uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,uVar8);
      iVar6 = (int)local_d0;
      uVar7 = local_d0._4_4_;
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar6 + uVar8);
    if ((int)uVar7 < (int)(iVar6 + uVar8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8);
    }
    if (uVar8 != 0) {
      _guard_xfg_dispatch_icall_nop(local_d8,&DAT_146299580,(longlong)(int)uVar8 * 2);
    }
  }
  FUN_141a00de0(param_1,&local_d8);
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_141a00bf3:
  if (*(int *)(param_1 + 0x120) != 0) {
    TArray<FPipelineCachePSOHeader,FDefaultAllocator>::operator=(param_1 + 0x30,param_1 + 0x118);
    TArray<FPipelineCachePSOHeader,FDefaultAllocator>::Empty(param_1 + 0x118,0);
  }
  lVar13 = 0;
  plVar17 = *(longlong **)(param_1 + 0x30);
  plVar14 = plVar17 + (longlong)*(int *)(param_1 + 0x38) * 0xb;
  if (plVar17 != plVar14) {
    puVar11 = (uint *)(plVar17 + 2);
    lVar10 = lVar13;
    do {
      uVar8 = puVar11[6];
      local_a8 = 0;
      uStack_a4 = 1;
      bVar1 = true;
      uStack_94 = 0;
      iStack_90 = 0;
      if (uVar8 != 0) {
        puVar15 = *(uint **)(puVar11 + 4);
        if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
          puVar15 = puVar11;
        }
        uVar7 = *puVar15;
        local_a8 = 0;
        iStack_90 = 0;
        while (uVar7 == 0) {
          lVar13 = (longlong)local_a8;
          iStack_90 = iStack_90 + 0x20;
          iVar6 = local_a8 + 1;
          bVar18 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
          local_a8 = iVar6;
          if (bVar18) goto LAB_141a00cf2;
          uVar7 = puVar15[lVar13 + 1];
        }
        uStack_a4 = -uVar7 & uVar7;
        iVar6 = 0x1f;
        if (uStack_a4 != 0) {
          for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_a4 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_94 = (iStack_90 - iVar6) + 0x1f;
        if ((int)uVar8 < (int)uStack_94) {
LAB_141a00cf2:
          uStack_94 = uVar8;
        }
      }
      local_98 = 0xffffffff;
      uStack_58 = CONCAT44(uStack_a4,local_a8);
      uStack_70 = CONCAT44(uStack_94,0xffffffff);
      local_68 = CONCAT44(uStack_8c,iStack_90);
      local_60._0_4_ = SUB84(plVar17,0);
      local_60._4_4_ = (undefined4)((ulonglong)plVar17 >> 0x20);
      _iStack_50 = CONCAT44(uVar8,-1 << ((byte)uVar8 & 0x1f));
      local_88 = (undefined4)local_60;
      uStack_84 = local_60._4_4_;
      iStack_80 = local_a8;
      uStack_7c = uStack_a4;
      puStack_a0 = puVar11;
      local_78 = puVar11;
      local_60 = plVar17;
      uStack_48 = uStack_70;
      uStack_40 = local_68;
      while( true ) {
        if (((uStack_70._4_4_ == uVar8) && (local_78 == puVar11)) &&
           ((longlong *)CONCAT44(uStack_84,local_88) == plVar17)) break;
        if (DAT_1469f5a08 == 0) {
          bVar18 = false;
        }
        else {
          lVar13 = FShaderCodeLibraryImpl::FindShaderLibrary
                             (DAT_1469f5a08,
                              (longlong)(int)uStack_70._4_4_ * 0x1c +
                              *(longlong *)CONCAT44(uStack_84,local_88));
          bVar18 = lVar13 != 0;
        }
        bVar1 = (bool)(bVar1 & bVar18);
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      }
      lVar13 = lVar10 + 1;
      if (!bVar1) {
        lVar13 = lVar10;
      }
      plVar17 = plVar17 + 0xb;
      puVar11 = puVar11 + 0x16;
      lVar10 = lVar13;
    } while (plVar17 != plVar14);
  }
  LOCK();
  *(longlong *)(param_1 + 0xd0) = lVar13;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000141a00dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a00de0 FUN_141a00de0 body=1499 status=ok
// SIG undefined FUN_141a00de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a00de0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  short *psVar16;
  bool bVar17;
  uint local_f8 [2];
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  uint uStack_bc;
  uint *puStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int iStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FString::operator=(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  cVar4 = FPipelineFileCache::OpenPipelineFileCache(param_2,param_3);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xc1) = 0;
    return;
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  FUN_1419ee620(param_1);
  local_f8[0] = 0;
  psVar16 = &DAT_143f3eda8;
  if (DAT_1468e2428 != 0) {
    psVar16 = DAT_1468e2420;
  }
  local_f0 = 0;
  lVar12 = -1;
  local_e8 = 0;
  if ((psVar16 != (short *)0x0) && (lVar9 = lVar12, *psVar16 != 0)) {
    do {
      lVar9 = lVar9 + 1;
    } while (psVar16[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_e8 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
    }
    FGenericPlatformString::Memcpy(local_f0,psVar16,(longlong)(int)uVar8 * 2);
  }
  cVar5 = FConfigCacheIni::GetInt
                    (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
                     PTR_u_SortOrder_1464c0de8,local_f8,&local_f0);
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    psVar16 = &DAT_143f3eda8;
    if (DAT_1468e2418 != 0) {
      psVar16 = DAT_1468e2410;
    }
    local_d8 = 0;
    local_e0 = 0;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (psVar16[lVar12] != 0);
      uVar8 = (int)lVar12 + 1;
      local_d8 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      }
      FGenericPlatformString::Memcpy(local_e0,psVar16,(longlong)(int)uVar8 * 2);
    }
    FConfigCacheIni::GetInt
              (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,PTR_u_SortOrder_1464c0de8
               ,local_f8,&local_e0);
    if (local_e0 != 0) {
      FMemory::Free();
    }
  }
  lVar12 = 0;
  local_d0 = 0;
  local_c8 = 0;
  FPipelineFileCache::GetOrderedPSOHashes(&local_d0,local_f8[0]);
  TArray<FPipelineCachePSOHeader,FDefaultAllocator>::operator=
            ((longlong *)(param_1 + 0x118),&local_d0);
  plVar13 = *(longlong **)(param_1 + 0x118);
  plVar15 = plVar13 + (longlong)*(int *)(param_1 + 0x120) * 0xb;
  if (plVar13 != plVar15) {
    puVar10 = (uint *)(plVar13 + 2);
    lVar9 = lVar12;
    do {
      uVar8 = puVar10[6];
      local_c0 = 0;
      bVar3 = true;
      uStack_bc = 1;
      uStack_ac = 0;
      iStack_a8 = 0;
      if (uVar8 != 0) {
        puVar14 = *(uint **)(puVar10 + 4);
        if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
          puVar14 = puVar10;
        }
        uVar1 = *puVar14;
        while (uVar1 == 0) {
          lVar12 = (longlong)local_c0;
          iStack_a8 = iStack_a8 + 0x20;
          iVar7 = local_c0 + 1;
          bVar17 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c0;
          local_c0 = iVar7;
          if (bVar17) goto LAB_141a010d6;
          uVar1 = puVar14[lVar12 + 1];
        }
        uStack_bc = -uVar1 & uVar1;
        local_a0 = 0x1f;
        if (uStack_bc != 0) {
          for (; uStack_bc >> local_a0 == 0; local_a0 = local_a0 + -1) {
          }
        }
        if (uStack_bc == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - local_a0;
        }
        uStack_ac = (iStack_a8 - iVar7) + 0x1f;
        if ((int)uVar8 < (int)uStack_ac) {
LAB_141a010d6:
          uStack_ac = uVar8;
        }
      }
      local_b0 = 0xffffffff;
      uStack_68 = CONCAT44(uStack_bc,local_c0);
      uStack_80 = CONCAT44(uStack_ac,0xffffffff);
      local_78 = CONCAT44(uStack_a4,iStack_a8);
      local_70._0_4_ = SUB84(plVar13,0);
      local_70._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      _iStack_60 = CONCAT44(uVar8,-1 << ((byte)uVar8 & 0x1f));
      local_98 = (undefined4)local_70;
      uStack_94 = local_70._4_4_;
      iStack_90 = local_c0;
      uStack_8c = uStack_bc;
      puStack_b8 = puVar10;
      local_88 = puVar10;
      local_70 = plVar13;
      uStack_58 = uStack_80;
      uStack_50 = local_78;
      while( true ) {
        if (((uStack_80._4_4_ == uVar8) && (local_88 == puVar10)) &&
           ((longlong *)CONCAT44(uStack_94,local_98) == plVar13)) break;
        if (DAT_1469f5a08 == 0) {
          bVar17 = false;
        }
        else {
          lVar12 = FShaderCodeLibraryImpl::FindShaderLibrary
                             (DAT_1469f5a08,
                              (longlong)(int)uStack_80._4_4_ * 0x1c +
                              *(longlong *)CONCAT44(uStack_94,local_98));
          bVar17 = lVar12 != 0;
        }
        bVar3 = (bool)(bVar3 & bVar17);
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      }
      lVar12 = lVar9 + 1;
      if (!bVar3) {
        lVar12 = lVar9;
      }
      plVar13 = plVar13 + 0xb;
      puVar10 = puVar10 + 0x16;
      lVar9 = lVar12;
    } while (plVar13 != plVar15);
  }
  LOCK();
  *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + lVar12;
  UNLOCK();
  plVar13 = DAT_1464c0cb8;
  while( true ) {
    if (plVar13 == DAT_1464c0cb8 + (longlong)DAT_1464c0cc0 * 2) goto LAB_141a01319;
    if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
    plVar13 = plVar13 + 2;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x120);
  DAT_1464c0ccc = DAT_1464c0ccc + 1;
  bVar3 = false;
  lVar12 = (longlong)(DAT_1464c0cc0 + -1);
  if (-1 < DAT_1464c0cc0 + -1) {
    lVar9 = lVar12 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar9 + 8 + (longlong)DAT_1464c0cb8) == 0) ||
          (plVar13 = *(longlong **)(lVar9 + (longlong)DAT_1464c0cb8), plVar13 == (longlong *)0x0))
         || (cVar5 = (**(code **)(*plVar13 + 0x40))(plVar13,param_2,param_3,uVar2), cVar5 == '\0'))
      {
        bVar3 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  iVar7 = DAT_1464c0cc0;
  DAT_1464c0ccc = DAT_1464c0ccc + -1;
  if ((bVar3) && (DAT_1464c0ccc < 1)) {
    iVar11 = 0;
    if (0 < DAT_1464c0cc0) {
      lVar12 = 0;
      do {
        if (((*(int *)(lVar12 + 8 + (longlong)DAT_1464c0cb8) == 0) ||
            (*(longlong **)(lVar12 + (longlong)DAT_1464c0cb8) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(lVar12 + (longlong)DAT_1464c0cb8) + 0x10))(),
           cVar5 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0cb8,iVar11,1,1);
        }
        else {
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 0x10;
        }
      } while (iVar11 < DAT_1464c0cc0);
    }
    _DAT_1464c0cc8 = DAT_1464c0cc0 * 2;
    if (_DAT_1464c0cc8 < 3) {
      _DAT_1464c0cc8 = 2;
    }
    if ((_DAT_1464c0cc8 < iVar7) && (DAT_1464c0cc4 != DAT_1464c0cc0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0cb8);
    }
  }
LAB_141a01319:
  if ((int)local_c8 != 0) {
    plVar13 = (longlong *)(local_d0 + 0x40);
    iVar7 = (int)local_c8;
    do {
      *(undefined4 *)(plVar13 + 1) = 0;
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar13 + -8);
      plVar13 = plVar13 + 0xb;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  *(char *)(param_1 + 0xc1) = cVar4;
  return;
}



// FUNCTION 141a013c0 OpenLibrary body=362 status=ok
// SIG undefined OpenLibrary(void)

void FShaderCodeLibrary::OpenLibrary(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  void *_Src;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined1 local_res18 [8];
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  int local_20;
  
  lVar2 = DAT_1469f5a08;
  if ((DAT_1469f5a08 != 0) && (*(int *)(DAT_1469f5a08 + 0x60) < 0x20)) {
    cVar5 = FUN_141a01550(DAT_1469f5a08,param_2,*(int *)(DAT_1469f5a08 + 0x60),param_1);
    if (cVar5 == '\0') {
      FUN_141eca160(local_res18,*(undefined4 *)(lVar2 + 0x60));
    }
    else {
      _Src = (void *)*param_1;
      local_30 = *(int *)(param_1 + 1);
      lVar6 = (longlong)local_30;
      local_38 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_38,(4 - (uint)(local_30 != 0)) + local_30,0);
      pvVar3 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,lVar6 * 2);
      iVar4 = local_30;
      lVar6 = (longlong)local_30;
      local_30 = (4 - (uint)(local_30 != 0)) + local_30;
      local_28 = pvVar3;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar4);
        local_28 = local_38;
      }
      puVar1 = (undefined4 *)((longlong)local_28 + (lVar6 - (ulonglong)(iVar4 != 0)) * 2);
      *puVar1 = 0x53005f;
      *(undefined2 *)(puVar1 + 1) = 0x43;
      *(undefined2 *)((longlong)puVar1 + 6) = 0;
      local_20 = local_30;
      FUN_141a01550(lVar2,param_2,*(undefined4 *)(lVar2 + 0x60),&local_28);
      if (local_28 != (void *)0x0) {
        FMemory::Free();
      }
      if (DAT_1469f59c8 != 0) {
        FUN_141a00910(DAT_1469f59c8,0,*(undefined4 *)(lVar2 + 0x60),param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141a01530 OpenPipelineFileCache body=29 status=ok
// SIG undefined OpenPipelineFileCache(void)

ulonglong FShaderPipelineCache::OpenPipelineFileCache(ulonglong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  if (DAT_1469f59c8 != 0) {
    uVar1 = FUN_141a00de0(DAT_1469f59c8,param_1,param_2);
    return uVar1;
  }
  return param_1 & 0xffffffffffffff00;
}



// FUNCTION 141a01550 FUN_141a01550 body=831 status=ok
// SIG undefined FUN_141a01550(void)

bool FUN_141a01550(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  bool bVar10;
  int local_res18 [4];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  lVar6 = operator_new(0x120);
  if (lVar6 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FUN_1419d7600(lVar6,(int)param_1[0xc],param_2,param_4);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_58 = plVar7;
  iVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (iVar4 == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
    if ((uVar5 < 0x1c) && ((0x8c51800U >> (uVar5 & 0x1f) & 1) != 0)) {
      (**(code **)(*DAT_146ab6358 + 200))(DAT_146ab6358,&local_50,uVar5,param_2,param_4);
      local_58 = local_50;
      local_50 = (longlong *)0x0;
      LOCK();
      plVar1 = plVar7 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (((char)plVar7[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          LOCK();
          bVar10 = *(int *)((longlong)plVar7 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)plVar7 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar6 + 8) = plVar7;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
      bVar10 = true;
      plVar7 = local_58;
      if (local_58 == (longlong *)0x0) goto LAB_141a016ae;
      *(undefined1 *)((longlong)param_1 + 0x79) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  bVar10 = plVar7 == (longlong *)0x0;
LAB_141a016ae:
  if (plVar7 != (longlong *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe));
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe));
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    plVar1 = local_58;
    *(longlong **)(*param_1 + (longlong)iVar4 * 8) = plVar7;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    uVar5 = (**(code **)(*local_58 + 0x28))(local_58);
    param_1[0xd] = param_1[0xd] + (ulonglong)uVar5;
    if (((char)param_1[0xf] != '\0') && (*(char *)((longlong)param_1 + 0x79) == '\0')) {
      plVar7 = plVar1 + 0x1a;
      if ((int)plVar1[0x1b] == *(int *)((longlong)plVar1 + 0x104)) {
        FUN_141eca160(&local_48,(int)param_1[0xc]);
        FUN_1419efad0(&local_40,plVar1 + 7,plVar1 + 4,local_48);
        plVar8 = (longlong *)FUN_1415c3d50();
        puVar9 = &DAT_143f3eda8;
        if (local_38 != 0) {
          puVar9 = local_40;
        }
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,puVar9,0);
        if (plVar8 != (longlong *)0x0) {
          plVar2 = (longlong *)plVar8[1];
          local_res18[0] = 0;
          if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
            (**(code **)(*plVar8 + 0x50))(plVar8,local_res18,4);
            if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar8,local_res18,4);
            }
          }
          else {
            local_res18[0] = *(int *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if ((local_res18[0] == DAT_1464c0d04) &&
             (FUN_1419dfeb0(plVar8,plVar7), (*(byte *)(plVar8 + 5) & 1) != 0)) {
            if (plVar1[0x22] != 0) {
              lVar6 = FMemory::Realloc(plVar1[0x22],0,0);
              plVar1[0x22] = lVar6;
            }
            *(undefined4 *)(plVar1 + 0x23) = 0;
            TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
            ::ConditionalRehash(plVar7,(int)plVar1[0x1b] - *(int *)((longlong)plVar1 + 0x104),0);
          }
          (**(code **)(*plVar8 + 0xe8))(plVar8);
          (**(code **)*plVar8)(plVar8,1);
        }
        if (local_40 != (undefined2 *)0x0) {
          FMemory::Free(local_40);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
        ::Append<FDefaultSetAllocator>(param_1 + 2,plVar7);
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  return !bVar10;
}



// FUNCTION 141a01890 PipelineStateCacheOnAppDeactivate body=72 status=ok
// SIG undefined PipelineStateCacheOnAppDeactivate(void)

void PipelineStateCacheOnAppDeactivate(void)

{
  char cVar1;
  
  cVar1 = FUN_1419f08d0();
  if ((cVar1 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,1);
  }
  cVar1 = FUN_1419efa30();
  if ((cVar1 != '\0') && (DAT_1469f59c8 != 0)) {
    FUN_141a0a7d0(DAT_1469f59c8,0);
    return;
  }
  return;
}



// FUNCTION 141a018e0 FUN_141a018e0 body=1697 status=ok
// SIG undefined FUN_141a018e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a018e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_598 [32];
  longlong local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560 [74];
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298 [73];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_598;
  lVar21 = 0;
  local_578 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    uVar20 = 0;
    if (*(int *)(param_1 + 0x130) != 0) {
      do {
        uVar19 = 0;
        lVar21 = (longlong)(int)uVar20 * 0x250;
        lVar18 = *(longlong *)(lVar21 + 0x248 + *(longlong *)(param_1 + 0x128));
        if (*(int *)(lVar18 + 0x140) == 0) {
LAB_141a01a12:
          lVar18 = *(longlong *)(param_1 + 0x128);
          if (*(int *)(lVar21 + lVar18) == 0) {
            plVar12 = (longlong *)(lVar18 + 4 + lVar21);
LAB_141a01b48:
            FUN_141a08660(plVar12);
          }
          else if (*(int *)(lVar21 + lVar18) == 1) {
            plVar12 = (longlong *)(lVar18 + 0x18 + lVar21);
            local_310 = 0;
            local_308 = 0;
            local_300 = 0;
            if (((*plVar12 != 0) || (plVar12[1] != 0)) || ((int)plVar12[2] != 0)) {
              FUN_141a08660();
              lVar18 = *(longlong *)(param_1 + 0x128);
            }
            plVar12 = (longlong *)(lVar18 + 0x40 + lVar21);
            local_2f8 = 0;
            local_2f0 = 0;
            local_2e8 = 0;
            if (((*plVar12 != 0) || (plVar12[1] != 0)) || ((int)plVar12[2] != 0)) {
              FUN_141a08660();
              lVar18 = *(longlong *)(param_1 + 0x128);
            }
            plVar12 = (longlong *)(lVar18 + 0x54 + lVar21);
            local_2e0 = 0;
            local_2d8 = 0;
            local_2d0 = 0;
            if (((*plVar12 != 0) || (plVar12[1] != 0)) || ((int)plVar12[2] != 0)) {
              FUN_141a08660();
              lVar18 = *(longlong *)(param_1 + 0x128);
            }
            plVar12 = (longlong *)(lVar18 + 0x68 + lVar21);
            local_2c8 = 0;
            local_2c0 = 0;
            local_2b8 = 0;
            if (((*plVar12 != 0) || (plVar12[1] != 0)) || ((int)plVar12[2] != 0)) {
              FUN_141a08660();
              lVar18 = *(longlong *)(param_1 + 0x128);
            }
            plVar12 = (longlong *)(lVar18 + 0x2c + lVar21);
            local_2b0 = 0;
            local_2a8 = 0;
            local_2a0 = 0;
            if (((*plVar12 != 0) || (plVar12[1] != 0)) || ((int)plVar12[2] != 0))
            goto LAB_141a01b48;
          }
          puVar17 = *(undefined8 **)(lVar21 + 0x248 + *(longlong *)(param_1 + 0x128));
          if (puVar17 != (undefined8 *)0x0) {
            *puVar17 = &PTR_FUN_144d8e3d0;
            FUN_1419d8b10(puVar17 + 0x12);
            FArchive::~FArchive(puVar17);
            FMemory::operator_delete(puVar17,0x150);
          }
          lVar21 = lVar21 + *(longlong *)(param_1 + 0x128);
          lVar18 = (longlong)*(int *)(param_1 + 0x130) * 0x250 + *(longlong *)(param_1 + 0x128);
          FUN_141eba570(lVar21,lVar18 + -0x250);
          *(undefined8 *)(lVar21 + 0x248) = *(undefined8 *)(lVar18 + -8);
          lVar21 = (longlong)*(int *)(param_1 + 0x130) * 0x250 + *(longlong *)(param_1 + 0x128);
          FUN_141eb9840(local_298,lVar21 + -0x250);
          local_50 = *(undefined8 *)(lVar21 + -8);
          iVar3 = *(int *)(param_1 + 0x130);
          iVar15 = iVar3 + -1;
          lVar21 = (longlong)iVar15 * 0x250;
          AK::MemoryMgr::StartProfileThreadUsage
                    ((int)*(undefined8 *)(param_1 + 0x128) + (int)lVar21);
          iVar9 = *(int *)(param_1 + 0x130);
          iVar15 = (iVar9 - iVar15) + -1;
          if (iVar15 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x128) + lVar21),
                       (void *)((longlong)iVar3 * 0x250 + *(longlong *)(param_1 + 0x128)),
                       (longlong)iVar15 * 0x250);
            iVar9 = *(int *)(param_1 + 0x130);
          }
          *(int *)(param_1 + 0x130) = iVar9 + -1;
          lVar21 = 4;
          puVar17 = local_560;
          puVar7 = local_298;
          do {
            puVar13 = puVar7;
            puVar11 = puVar17;
            uVar10 = puVar13[1];
            uVar4 = puVar13[2];
            uVar5 = puVar13[3];
            *puVar11 = *puVar13;
            puVar11[1] = uVar10;
            uVar10 = puVar13[4];
            uVar6 = puVar13[5];
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            uVar4 = puVar13[6];
            uVar5 = puVar13[7];
            puVar11[4] = uVar10;
            puVar11[5] = uVar6;
            uVar10 = puVar13[8];
            uVar6 = puVar13[9];
            puVar11[6] = uVar4;
            puVar11[7] = uVar5;
            uVar4 = puVar13[10];
            uVar5 = puVar13[0xb];
            puVar11[8] = uVar10;
            puVar11[9] = uVar6;
            uVar10 = puVar13[0xc];
            uVar6 = puVar13[0xd];
            puVar11[10] = uVar4;
            puVar11[0xb] = uVar5;
            uVar4 = puVar13[0xe];
            uVar5 = puVar13[0xf];
            puVar11[0xc] = uVar10;
            puVar11[0xd] = uVar6;
            puVar11[0xe] = uVar4;
            puVar11[0xf] = uVar5;
            lVar21 = lVar21 + -1;
            puVar17 = puVar11 + 0x10;
            puVar7 = puVar13 + 0x10;
          } while (lVar21 != 0);
          uVar10 = puVar13[0x11];
          uVar4 = puVar13[0x12];
          uVar5 = puVar13[0x13];
          puVar11[0x10] = puVar13[0x10];
          puVar11[0x11] = uVar10;
          uVar10 = puVar13[0x14];
          uVar6 = puVar13[0x15];
          puVar11[0x12] = uVar4;
          puVar11[0x13] = uVar5;
          uVar4 = puVar13[0x16];
          uVar5 = puVar13[0x17];
          puVar11[0x14] = uVar10;
          puVar11[0x15] = uVar6;
          uVar10 = puVar13[0x18];
          uVar6 = puVar13[0x19];
          puVar11[0x16] = uVar4;
          puVar11[0x17] = uVar5;
          puVar11[0x18] = uVar10;
          puVar11[0x19] = uVar6;
          AK::MemoryMgr::StartProfileThreadUsage((long)local_298);
          local_578 = local_578 + 1;
        }
        else {
          do {
            local_570 = 0xbff0000000000000;
            lVar16 = *(longlong *)(lVar18 + 0x130);
            if (*(longlong *)(lVar18 + 0x130) == 0) {
              lVar16 = lVar18 + 0x90;
            }
            puVar17 = (undefined8 *)(lVar16 + (longlong)(int)uVar19 * 0x50);
            if (*(int *)(puVar17 + 8) == 0) {
LAB_141a019cc:
              uVar10 = 0;
            }
            else {
              plVar12 = (longlong *)puVar17[6];
              if ((longlong *)puVar17[6] == (longlong *)0x0) {
                plVar12 = puVar17 + 2;
              }
              if (plVar12 == (longlong *)0x0) goto LAB_141a019cc;
              uVar10 = (**(code **)(*plVar12 + 8))();
            }
            cVar8 = (*(code *)*puVar17)(uVar10,&local_570);
            if (cVar8 == '\0') {
              uVar19 = uVar19 + 1;
            }
            else {
              FUN_141a08e30(lVar18 + 0x90,uVar19,1,1);
            }
          } while (uVar19 < *(uint *)(lVar18 + 0x140));
          if (*(uint *)(lVar18 + 0x140) == 0) goto LAB_141a01a12;
          uVar20 = uVar20 + 1;
        }
      } while (uVar20 < *(uint *)(param_1 + 0x130));
    }
    lVar21 = local_578;
    if ((*(int *)(param_1 + 0x140) == 0) && (*(int *)(param_1 + 0x144) != *(int *)(param_1 + 0x140))
       ) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    uVar20 = 0;
    if (*(int *)(param_1 + 0x140) != 0) {
      do {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x138) + (longlong)(int)uVar20 * 8);
        lVar21 = plVar12[2];
        if (lVar21 == 0) {
LAB_141a01e07:
          if (*(char *)((longlong)plVar12 + 0x1c) != '\0') goto LAB_141a01e12;
LAB_141a01ef7:
          uVar20 = uVar20 + 1;
        }
        else {
          uVar19 = 0;
          if (*(int *)(lVar21 + 0x140) != 0) {
            do {
              local_568 = 0xbff0000000000000;
              lVar18 = *(longlong *)(lVar21 + 0x130);
              if (*(longlong *)(lVar21 + 0x130) == 0) {
                lVar18 = lVar21 + 0x90;
              }
              puVar17 = (undefined8 *)(lVar18 + (longlong)(int)uVar19 * 0x50);
              if (*(int *)(puVar17 + 8) == 0) {
LAB_141a01dce:
                uVar10 = 0;
              }
              else {
                plVar14 = (longlong *)puVar17[6];
                if ((longlong *)puVar17[6] == (longlong *)0x0) {
                  plVar14 = puVar17 + 2;
                }
                if (plVar14 == (longlong *)0x0) goto LAB_141a01dce;
                uVar10 = (**(code **)(*plVar14 + 8))();
              }
              cVar8 = (*(code *)*puVar17)(uVar10,&local_568);
              if (cVar8 == '\0') {
                uVar19 = uVar19 + 1;
              }
              else {
                FUN_141a08e30(lVar21 + 0x90,uVar19,1,1);
              }
            } while (uVar19 < *(uint *)(lVar21 + 0x140));
            if (*(uint *)(lVar21 + 0x140) != 0) goto LAB_141a01e07;
          }
LAB_141a01e12:
          cVar8 = (**(code **)(*(longlong *)plVar12[6] + 0x18))();
          if (cVar8 != '\0') goto LAB_141a01ef7;
          puVar17 = (undefined8 *)plVar12[2];
          if (puVar17 != (undefined8 *)0x0) {
            (**(code **)*puVar17)(puVar17,1);
          }
          plVar14 = (longlong *)plVar12[7];
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar14 = (longlong *)plVar12[5];
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(plVar12,0x40);
          *(undefined8 *)(*(longlong *)(param_1 + 0x138) + (longlong)(int)uVar20 * 8) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x138) + -8 + (longlong)*(int *)(param_1 + 0x140) * 8);
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
          local_578 = local_578 + 1;
        }
      } while (uVar20 < *(uint *)(param_1 + 0x140));
      lVar21 = local_578;
      if (*(uint *)(param_1 + 0x140) != 0) goto LAB_141a01f26;
    }
    if (*(int *)(param_1 + 0x144) != *(int *)(param_1 + 0x140)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
  }
LAB_141a01f26:
  if (0 < lVar21) {
    LOCK();
    *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) - lVar21;
    UNLOCK();
  }
  return;
}



// FUNCTION 141a01f90 FUN_141a01f90 body=2553 status=ok
// SIG undefined FUN_141a01f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a01f90(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330 [12];
  undefined1 local_2d0;
  undefined1 local_2cf;
  int local_2cc;
  int local_2c8;
  undefined1 local_2c4;
  undefined1 local_2c3;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  int local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  int local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  longlong local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined8 local_144;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  QueryPerformanceCounter(&local_278);
  iVar2 = *param_4;
  local_330[0] = 0;
  local_330[1] = 0;
  if (iVar2 == 1) {
    local_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_14c = 0x26;
    local_144 = 0;
    local_13c = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_2a8,param_2,param_4 + 0x1f);
    local_198 = local_2a8;
    local_330[0xb] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    if (((*(longlong *)(param_4 + 6) != 0) || (*(longlong *)(param_4 + 8) != 0)) ||
       (param_4[10] != 0)) {
      iVar2 = param_4[10];
      local_358 = 0;
      uVar3 = *(undefined8 *)(param_4 + 6);
      uVar5 = *(undefined8 *)(param_4 + 8);
      if (DAT_1469f5a08 == 0) {
LAB_141a02134:
        (**(code **)(*DAT_146ab6358 + 0x518))(DAT_146ab6358,local_330 + 2,&DAT_146ab6e78,local_330);
        lVar6 = local_330[2];
        local_358 = local_330[2];
        local_330[2] = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 2);
        if (lVar6 != 0) goto LAB_141a02177;
      }
      else {
        local_258 = uVar3;
        uStack_250 = uVar5;
        local_248 = iVar2;
        uVar4 = FUN_1419ea7a0(DAT_1469f5a08,local_270,param_3,&local_258);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_358,uVar4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_270);
        lVar6 = local_358;
        if (local_358 == 0) goto LAB_141a02134;
LAB_141a02177:
        *(undefined8 *)(lVar6 + 0x18) = uVar3;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        *(int *)(lVar6 + 0x28) = iVar2;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_330 + 0xb,&local_358);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_358);
      local_190 = local_330[0xb];
      FUN_141a08660(param_4 + 6);
    }
    local_330[10] = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    if (((*(longlong *)(param_4 + 0x15) != 0) || (*(longlong *)(param_4 + 0x17) != 0)) ||
       (param_4[0x19] != 0)) {
      iVar2 = param_4[0x19];
      local_350 = 0;
      uVar3 = *(undefined8 *)(param_4 + 0x15);
      uVar5 = *(undefined8 *)(param_4 + 0x17);
      if (DAT_1469f5a08 == 0) {
LAB_141a0222d:
        (**(code **)(*DAT_146ab6358 + 0x568))(DAT_146ab6358,local_330 + 3,&DAT_146ab6e78,local_330);
        lVar6 = local_330[3];
        local_350 = local_330[3];
        local_330[3] = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 3);
        if (lVar6 != 0) goto LAB_141a02270;
      }
      else {
        local_238 = uVar3;
        uStack_230 = uVar5;
        local_228 = iVar2;
        uVar4 = FUN_1419e97d0(DAT_1469f5a08,local_268,param_3,&local_238);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_350,uVar4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_268);
        lVar6 = local_350;
        if (local_350 == 0) goto LAB_141a0222d;
LAB_141a02270:
        *(undefined8 *)(lVar6 + 0x18) = uVar3;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        *(int *)(lVar6 + 0x28) = iVar2;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_330 + 10,&local_350);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_350);
      local_188 = local_330[10];
      FUN_141a08660(param_4 + 0x15);
    }
    local_330[9] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    if (((*(longlong *)(param_4 + 0x1a) != 0) || (*(longlong *)(param_4 + 0x1c) != 0)) ||
       (param_4[0x1e] != 0)) {
      iVar2 = param_4[0x1e];
      local_348 = 0;
      uVar3 = *(undefined8 *)(param_4 + 0x1a);
      uVar5 = *(undefined8 *)(param_4 + 0x1c);
      if (DAT_1469f5a08 == 0) {
LAB_141a02326:
        (**(code **)(*DAT_146ab6358 + 0x578))(DAT_146ab6358,local_330 + 4,&DAT_146ab6e78,local_330);
        lVar6 = local_330[4];
        local_348 = local_330[4];
        local_330[4] = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 4);
        if (lVar6 != 0) goto LAB_141a02369;
      }
      else {
        local_218 = uVar3;
        uStack_210 = uVar5;
        local_208 = iVar2;
        uVar4 = FUN_1419e7530(DAT_1469f5a08,local_298,param_3,&local_218);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_348,uVar4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_298);
        lVar6 = local_348;
        if (local_348 == 0) goto LAB_141a02326;
LAB_141a02369:
        *(undefined8 *)(lVar6 + 0x18) = uVar3;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        *(int *)(lVar6 + 0x28) = iVar2;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_330 + 9,&local_348);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_348);
      uStack_180 = local_330[9];
      FUN_141a08660(param_4 + 0x1a);
    }
    local_330[8] = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    if (((*(longlong *)(param_4 + 0xb) != 0) || (*(longlong *)(param_4 + 0xd) != 0)) ||
       (param_4[0xf] != 0)) {
      iVar2 = param_4[0xf];
      local_340 = 0;
      uVar3 = *(undefined8 *)(param_4 + 0xb);
      uVar5 = *(undefined8 *)(param_4 + 0xd);
      if (DAT_1469f5a08 == 0) {
LAB_141a02428:
        (**(code **)(*DAT_146ab6358 + 0x528))(DAT_146ab6358,local_330 + 5,&DAT_146ab6e78,local_330);
        lVar6 = local_330[5];
        local_340 = local_330[5];
        local_330[5] = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 5);
        if (lVar6 != 0) goto LAB_141a0246b;
      }
      else {
        local_1f8 = uVar3;
        uStack_1f0 = uVar5;
        local_1e8 = iVar2;
        uVar4 = FUN_1419ea120(DAT_1469f5a08,local_290,param_3,&local_1f8);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_340,uVar4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_290);
        lVar6 = local_340;
        if (local_340 == 0) goto LAB_141a02428;
LAB_141a0246b:
        *(undefined8 *)(lVar6 + 0x18) = uVar3;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        *(int *)(lVar6 + 0x28) = iVar2;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_330 + 8,&local_340);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_340);
      local_178 = local_330[8];
      FUN_141a08660(param_4 + 0xb);
    }
    local_330[7] = 0;
    plVar1 = (longlong *)(param_4 + 0x10);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (((*plVar1 != 0) || (*(longlong *)(param_4 + 0x12) != 0)) || (param_4[0x14] != 0)) {
      iVar2 = param_4[0x14];
      local_338 = 0;
      lVar6 = *plVar1;
      uVar3 = *(undefined8 *)(param_4 + 0x12);
      if (DAT_1469f5a08 == 0) {
LAB_141a0252c:
        (**(code **)(*DAT_146ab6358 + 0x538))(DAT_146ab6358,local_330 + 6,&DAT_146ab6e78,local_330);
        lVar7 = local_330[6];
        local_338 = local_330[6];
        local_330[6] = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 6);
        if (lVar7 != 0) goto LAB_141a0256f;
      }
      else {
        local_1d8 = lVar6;
        uStack_1d0 = uVar3;
        local_1c8 = iVar2;
        uVar5 = FUN_1419e7a60(DAT_1469f5a08,local_288,param_3,&local_1d8);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_338,uVar5);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_288);
        lVar7 = local_338;
        if (local_338 == 0) goto LAB_141a0252c;
LAB_141a0256f:
        *(longlong *)(lVar7 + 0x18) = lVar6;
        *(undefined8 *)(lVar7 + 0x20) = uVar3;
        *(int *)(lVar7 + 0x28) = iVar2;
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_330 + 7,&local_338);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_338);
      uStack_170 = local_330[7];
      FUN_141a08660(plVar1);
    }
    (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,&local_2b0,param_4 + 0x61);
    local_2cc = param_4[0x70];
    local_2c8 = param_4[0x71];
    local_168 = local_2b0;
    local_2d0 = (undefined1)param_4[0x72];
    local_2cf = *(undefined1 *)((longlong)param_4 + 0x1c9);
    local_2c4 = *(undefined1 *)((longlong)param_4 + 0x1ca);
    local_2c3 = *(undefined1 *)((longlong)param_4 + 0x1cb);
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_2b8,&local_2d0);
    uStack_160 = local_2b8;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_2c0,param_4 + 0x73);
    uVar3 = local_ec;
    local_158 = local_2c0;
    local_144 = *(undefined8 *)(param_4 + 0x77);
    local_13c = param_4[0x79];
    local_120 = *(undefined8 *)(param_4 + 0x80);
    local_138 = *(undefined8 *)(param_4 + 0x7a);
    local_118 = *(undefined8 *)(param_4 + 0x82);
    uStack_130 = *(undefined8 *)(param_4 + 0x7c);
    local_110 = *(undefined8 *)(param_4 + 0x84);
    local_128 = *(undefined8 *)(param_4 + 0x7e);
    local_108 = *(undefined8 *)(param_4 + 0x86);
    local_100 = *(undefined8 *)(param_4 + 0x88);
    local_f8 = param_4[0x8a];
    local_e4 = CONCAT22(local_e4._2_2_,(short)param_4[0x8c]);
    local_f4 = *(undefined8 *)(param_4 + 0x8d);
    local_ec._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_4 + 0x23e),(char)param_4[0x8f]);
    local_ec._4_4_ = SUB84(uVar3,4);
    local_ec._0_4_ =
         CONCAT13(*(undefined1 *)((longlong)param_4 + 0x23f),
                  CONCAT12(*(undefined1 *)((longlong)param_4 + 0x23d),(undefined2)local_ec));
    local_14c = CONCAT44(param_4[0x8b],param_4[0x90]);
    FUN_141ed6ac0(param_2,&local_198,0,0);
    bVar8 = true;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2b8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2b0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 7);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 9);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_330 + 0xb);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a8);
  }
  else {
    if (iVar2 != 0) {
      return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
    }
    local_1b8 = param_4[1];
    iStack_1b4 = param_4[2];
    iStack_1b0 = param_4[3];
    iStack_1ac = param_4[4];
    local_1a8 = param_4[5];
    FUN_1419e6e40(&local_2a0,DAT_146ab62cc,&local_1b8,local_330);
    lVar6 = FUN_141ec6a20(param_2,local_2a0,0);
    bVar8 = lVar6 != 0;
    FUN_141a08660(param_4 + 1);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_2a0);
    if (lVar6 == 0) goto LAB_141a02951;
  }
  QueryPerformanceCounter(&local_280);
  LOCK();
  *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 1;
  UNLOCK();
  LOCK();
  *(longlong *)(param_1 + 0xe8) =
       *(longlong *)(param_1 + 0xe8) + (local_280.QuadPart - (longlong)local_278);
  UNLOCK();
LAB_141a02951:
  if (local_330[0] != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar8;
}



// FUNCTION 141a02990 FUN_141a02990 body=3601 status=ok
// SIG undefined FUN_141a02990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a02990(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_6c8 [32];
  int local_6a8;
  longlong local_6a0;
  longlong local_698;
  longlong *local_690;
  undefined1 local_688 [4];
  undefined1 local_684 [4];
  undefined1 local_680 [4];
  undefined1 local_67c [4];
  undefined1 local_678 [4];
  undefined1 local_674 [4];
  longlong local_670;
  undefined **local_668 [18];
  undefined8 local_5d8;
  longlong local_5d0;
  undefined8 local_5c8;
  undefined1 local_5b8 [584];
  longlong *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  int local_334;
  longlong local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  int local_298;
  longlong local_294;
  longlong local_28c;
  int local_284;
  longlong local_280;
  longlong local_278;
  int local_270;
  longlong local_26c;
  longlong local_264;
  int local_25c;
  longlong local_258;
  longlong local_250;
  int local_248;
  longlong local_244;
  longlong local_23c;
  int local_234;
  longlong local_230;
  longlong local_228;
  int local_220;
  ulonglong local_48;
  longlong *plVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  local_6a8 = 0;
  local_698 = param_1;
  local_690 = param_2;
  do {
    while( true ) {
      iVar8 = local_6a8;
      uVar13 = 0;
      if ((local_6a8 < 0) || ((int)param_2[1] <= local_6a8)) {
        return;
      }
      local_6a0 = *(longlong *)(*param_2 + (longlong)local_6a8 * 8);
      lVar17 = *(longlong *)(local_6a0 + 0x10);
      if (*(char *)(local_6a0 + 0x1d) != '\0') break;
LAB_141a036ca:
      LOCK();
      *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -1;
      UNLOCK();
      FPipelineCacheFileFormatPSORead::_scalar_deleting_destructor_(local_6a0,1);
      iVar9 = (int)param_2[1];
      iVar3 = (iVar9 - iVar8) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + (longlong)iVar8 * 8),
                   (void *)(*param_2 + (longlong)(iVar8 + 1) * 8),(longlong)iVar3 << 3);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar9 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
      iVar8 = iVar8 + -1;
LAB_141a0371f:
      local_6a8 = iVar8 + 1;
    }
    if (lVar17 == 0) {
LAB_141a02ad2:
      if (*(char *)(local_6a0 + 0x1c) == '\0') {
        if (*(char *)(local_6a0 + 0x1d) == '\0') goto LAB_141a036ca;
        goto LAB_141a0371f;
      }
    }
    else if (*(int *)(lVar17 + 0x140) != 0) {
      uVar16 = uVar13;
      do {
        local_670 = -0x4010000000000000;
        lVar10 = *(longlong *)(lVar17 + 0x130);
        if (*(longlong *)(lVar17 + 0x130) == 0) {
          lVar10 = lVar17 + 0x90;
        }
        puVar11 = (undefined8 *)(lVar10 + (longlong)(int)uVar16 * 0x50);
        uVar4 = uVar13;
        if (*(int *)(puVar11 + 8) != 0) {
          plVar6 = (longlong *)puVar11[6];
          if ((longlong *)puVar11[6] == (longlong *)0x0) {
            plVar6 = puVar11 + 2;
          }
          if (plVar6 != (longlong *)0x0) {
            uVar4 = (**(code **)(*plVar6 + 8))();
          }
        }
        cVar1 = (*(code *)*puVar11)(uVar4,&local_670);
        if (cVar1 == '\0') {
          uVar16 = (ulonglong)((int)uVar16 + 1);
        }
        else {
          FUN_141a08e30(lVar17 + 0x90,uVar16,1,1);
        }
      } while ((uint)uVar16 < *(uint *)(lVar17 + 0x140));
      param_2 = local_690;
      if (*(uint *)(lVar17 + 0x140) != 0) goto LAB_141a02ad2;
    }
    lVar17 = local_6a0;
    FUN_141eb9950(&local_298);
    FArchive::FArchive(local_668);
    local_668[0] = &PTR_FUN_143f4a3a0;
    plVar14 = (longlong *)0x0;
    local_5c8 = 0x7fffffffffffffff;
    local_5d8 = 0;
    local_5d0 = lVar17;
    FArchive::SetIsLoading(local_668,1);
    FArchive::SetIsPersistent(local_668,0);
    FArchiveState::SetGameNetVer(local_668,0xb);
    FUN_141eba810(local_668,&local_298);
    plVar5 = (longlong *)operator_new(0x150);
    plVar6 = plVar14;
    if (plVar5 != (longlong *)0x0) {
      FArchive::FArchive(plVar5);
      *plVar5 = (longlong)&PTR_FUN_144d8e3d0;
      plVar5[0x26] = 0;
      plVar5[0x28] = 0;
      plVar6 = plVar5;
    }
    local_368 = 0;
    local_360 = 0;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0xffffffff;
    local_334 = 0;
    local_328 = 0;
    local_320 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469f6094) &&
       (_Init_thread_header(&DAT_1469f6094), DAT_1469f6094 == -1)) {
      DAT_1469f6080 = 0;
      DAT_1469f6088 = 0;
      DAT_1469f6090 = 0;
      _Init_thread_footer(&DAT_1469f6094);
    }
    if (local_298 == 1) {
      if (((local_280 == DAT_1469f6080) && (local_278 == DAT_1469f6088)) &&
         (local_270 == DAT_1469f6090)) {
LAB_141a03465:
        bVar19 = false;
      }
      else {
        FUN_1419ccaa0(&local_368,local_688,&local_280,0);
        plVar5 = DAT_1469f5a08;
        if (DAT_1469f5a08 == (longlong *)0x0) {
          bVar19 = false;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
          ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
          plVar12 = plVar14;
          plVar15 = plVar14;
          plVar18 = plVar14;
          if (0 < (int)plVar5[1]) {
            do {
              plVar18 = *(longlong **)((longlong)plVar15 + *plVar5);
              cVar1 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_280);
              if (cVar1 != '\0') break;
              uVar7 = (int)plVar12 + 1;
              plVar12 = (longlong *)(ulonglong)uVar7;
              plVar15 = plVar15 + 1;
              plVar18 = plVar14;
            } while ((int)uVar7 < (int)plVar5[1]);
          }
          bVar19 = plVar18 != (longlong *)0x0;
        }
        plVar5 = (longlong *)0x0;
        if (((local_244 != DAT_1469f6080) || (local_23c != DAT_1469f6088)) ||
           (local_234 != DAT_1469f6090)) {
          FUN_1419ccaa0(&local_368,local_684,&local_244,0);
          plVar14 = DAT_1469f5a08;
          if (DAT_1469f5a08 == (longlong *)0x0) {
            bVar20 = false;
          }
          else {
            AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
            ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 0xe));
            iVar8 = 0;
            plVar18 = plVar5;
            if ((int)plVar14[1] < 1) {
LAB_141a02d6c:
              bVar20 = plVar18 != (longlong *)0x0;
            }
            else {
              do {
                plVar18 = *(longlong **)((longlong)plVar5 + *plVar14);
                cVar1 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_244);
                if (cVar1 != '\0') goto LAB_141a02d6c;
                iVar8 = iVar8 + 1;
                plVar5 = plVar5 + 1;
              } while (iVar8 < (int)plVar14[1]);
              bVar20 = false;
            }
          }
          bVar19 = (bool)(bVar19 & bVar20);
        }
        plVar5 = (longlong *)0x0;
        if (((local_230 != DAT_1469f6080) || (local_228 != DAT_1469f6088)) ||
           (local_220 != DAT_1469f6090)) {
          FUN_1419ccaa0(&local_368,local_680,&local_230,0);
          plVar14 = DAT_1469f5a08;
          if (DAT_1469f5a08 == (longlong *)0x0) {
            bVar20 = false;
          }
          else {
            AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
            ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 0xe));
            plVar12 = plVar5;
            plVar18 = plVar5;
            if ((int)plVar14[1] < 1) {
LAB_141a02e3c:
              bVar20 = plVar18 != (longlong *)0x0;
            }
            else {
              do {
                plVar18 = *(longlong **)((longlong)plVar12 + *plVar14);
                cVar1 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_230);
                if (cVar1 != '\0') goto LAB_141a02e3c;
                uVar7 = (int)plVar5 + 1;
                plVar5 = (longlong *)(ulonglong)uVar7;
                plVar12 = plVar12 + 1;
              } while ((int)uVar7 < (int)plVar14[1]);
              bVar20 = false;
            }
          }
          bVar19 = (bool)(bVar19 & bVar20);
        }
        plVar5 = (longlong *)0x0;
        if (((local_26c != DAT_1469f6080) || (local_264 != DAT_1469f6088)) ||
           (local_25c != DAT_1469f6090)) {
          FUN_1419ccaa0(&local_368,local_67c,&local_26c,0);
          plVar14 = DAT_1469f5a08;
          if (DAT_1469f5a08 == (longlong *)0x0) {
            bVar20 = false;
          }
          else {
            AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
            ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 0xe));
            plVar12 = plVar5;
            plVar18 = plVar5;
            if ((int)plVar14[1] < 1) {
LAB_141a02f0c:
              bVar20 = plVar18 != (longlong *)0x0;
            }
            else {
              do {
                plVar18 = *(longlong **)((longlong)plVar12 + *plVar14);
                cVar1 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_26c);
                if (cVar1 != '\0') goto LAB_141a02f0c;
                uVar7 = (int)plVar5 + 1;
                plVar5 = (longlong *)(ulonglong)uVar7;
                plVar12 = plVar12 + 1;
              } while ((int)uVar7 < (int)plVar14[1]);
              bVar20 = false;
            }
          }
          bVar19 = (bool)(bVar19 & bVar20);
        }
        plVar5 = (longlong *)0x0;
        if (((local_258 != DAT_1469f6080) || (local_250 != DAT_1469f6088)) ||
           (local_248 != DAT_1469f6090)) {
          FUN_1419ccaa0(&local_368,local_678,&local_258,0);
          plVar14 = DAT_1469f5a08;
          if (DAT_1469f5a08 == (longlong *)0x0) {
            bVar20 = false;
          }
          else {
            AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
            ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 0xe));
            plVar12 = plVar5;
            plVar18 = plVar5;
            if ((int)plVar14[1] < 1) {
LAB_141a02fdc:
              bVar20 = plVar18 != (longlong *)0x0;
            }
            else {
              do {
                plVar18 = *(longlong **)((longlong)plVar12 + *plVar14);
                cVar1 = (**(code **)(*plVar18 + 0x20))(plVar18,&local_258);
                if (cVar1 != '\0') goto LAB_141a02fdc;
                uVar7 = (int)plVar5 + 1;
                plVar5 = (longlong *)(ulonglong)uVar7;
                plVar12 = plVar12 + 1;
              } while ((int)uVar7 < (int)plVar14[1]);
              bVar20 = false;
            }
          }
          bVar19 = (bool)(bVar19 & bVar20);
        }
        plVar5 = DAT_1469f5a08;
        uVar13 = 0;
        iVar8 = local_6a8;
        if (bVar19 != false) {
          bVar2 = 0;
          local_2b8 = 0;
          local_2b0 = 0;
          local_2a8 = 0;
          if (((local_280 != 0) || (local_278 != 0)) || (local_270 != 0)) {
            if (DAT_1469f5a08 != (longlong *)0x0) {
              AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
              ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
              uVar16 = uVar13;
              if (0 < (int)plVar5[1]) {
                do {
                  plVar14 = *(longlong **)(uVar16 + *plVar5);
                  cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_280);
                  if (cVar1 != '\0') {
                    if (plVar14 != (longlong *)0x0) {
                      bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_280,plVar6);
                      goto LAB_141a03083;
                    }
                    break;
                  }
                  uVar7 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar7;
                  uVar16 = uVar16 + 8;
                } while ((int)uVar7 < (int)plVar5[1]);
              }
              bVar2 = 0;
            }
LAB_141a03083:
            bVar19 = (bool)(bVar19 & bVar2);
          }
          plVar5 = DAT_1469f5a08;
          iVar8 = local_6a8;
          if (bVar19 != false) {
            if (((local_244 != DAT_1469f6080) || (local_23c != DAT_1469f6088)) ||
               (local_234 != DAT_1469f6090)) {
              if (DAT_1469f5a08 == (longlong *)0x0) {
                bVar2 = 0;
              }
              else {
                AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
                ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
                iVar8 = 0;
                if (0 < (int)plVar5[1]) {
                  lVar17 = 0;
                  do {
                    plVar14 = *(longlong **)(lVar17 + *plVar5);
                    cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_244);
                    if (cVar1 != '\0') {
                      if (plVar14 != (longlong *)0x0) {
                        bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_244,plVar6);
                        goto LAB_141a03165;
                      }
                      break;
                    }
                    iVar8 = iVar8 + 1;
                    lVar17 = lVar17 + 8;
                  } while (iVar8 < (int)plVar5[1]);
                }
                bVar2 = 0;
              }
LAB_141a03165:
              bVar19 = (bool)(bVar19 & bVar2);
            }
            plVar5 = DAT_1469f5a08;
            iVar8 = local_6a8;
            if (bVar19 != false) {
              if (((local_230 != DAT_1469f6080) || (local_228 != DAT_1469f6088)) ||
                 (local_220 != DAT_1469f6090)) {
                if (DAT_1469f5a08 == (longlong *)0x0) {
                  bVar2 = 0;
                }
                else {
                  AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
                  ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
                  iVar8 = 0;
                  if (0 < (int)plVar5[1]) {
                    lVar17 = 0;
                    do {
                      plVar14 = *(longlong **)(lVar17 + *plVar5);
                      cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_230);
                      if (cVar1 != '\0') {
                        if (plVar14 != (longlong *)0x0) {
                          bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_230,plVar6);
                          goto LAB_141a03224;
                        }
                        break;
                      }
                      iVar8 = iVar8 + 1;
                      lVar17 = lVar17 + 8;
                    } while (iVar8 < (int)plVar5[1]);
                  }
                  bVar2 = 0;
                }
LAB_141a03224:
                bVar19 = (bool)(bVar19 & bVar2);
              }
              plVar5 = DAT_1469f5a08;
              iVar8 = local_6a8;
              if (bVar19 != false) {
                if (((local_26c != DAT_1469f6080) || (local_264 != DAT_1469f6088)) ||
                   (local_25c != DAT_1469f6090)) {
                  if (DAT_1469f5a08 == (longlong *)0x0) {
                    bVar2 = 0;
                  }
                  else {
                    AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
                    ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
                    iVar8 = 0;
                    if (0 < (int)plVar5[1]) {
                      lVar17 = 0;
                      do {
                        plVar14 = *(longlong **)(lVar17 + *plVar5);
                        cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_26c);
                        if (cVar1 != '\0') {
                          if (plVar14 != (longlong *)0x0) {
                            bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_26c,plVar6);
                            goto LAB_141a032d4;
                          }
                          break;
                        }
                        iVar8 = iVar8 + 1;
                        lVar17 = lVar17 + 8;
                      } while (iVar8 < (int)plVar5[1]);
                    }
                    bVar2 = 0;
                  }
LAB_141a032d4:
                  bVar19 = (bool)(bVar19 & bVar2);
                }
                plVar5 = DAT_1469f5a08;
                iVar8 = local_6a8;
                if ((bVar19 != false) &&
                   (((local_258 != DAT_1469f6080 || (local_250 != DAT_1469f6088)) ||
                    (local_248 != DAT_1469f6090)))) {
                  if (DAT_1469f5a08 != (longlong *)0x0) {
                    AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
                    ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
                    iVar8 = 0;
                    if (0 < (int)plVar5[1]) {
                      lVar17 = 0;
                      do {
                        plVar14 = *(longlong **)(lVar17 + *plVar5);
                        cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_258);
                        if (cVar1 != '\0') {
                          if (plVar14 != (longlong *)0x0) {
                            bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_258,plVar6);
                            bVar19 = (bool)(bVar19 & bVar2);
                            iVar8 = local_6a8;
                            goto LAB_141a03468;
                          }
                          break;
                        }
                        iVar8 = iVar8 + 1;
                        lVar17 = lVar17 + 8;
                      } while (iVar8 < (int)plVar5[1]);
                    }
                  }
                  bVar19 = false;
                  iVar8 = local_6a8;
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((local_298 != 0) ||
         (((local_294 == DAT_1469f6080 && (local_28c == DAT_1469f6088)) &&
          (local_284 == DAT_1469f6090)))) goto LAB_141a03465;
      FUN_1419ccaa0(&local_368,local_674,&local_294,0);
      plVar5 = DAT_1469f5a08;
      if (DAT_1469f5a08 != (longlong *)0x0) {
        AcquireSRWLockShared((PSRWLOCK)(DAT_1469f5a08 + 0xe));
        ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 0xe));
        iVar9 = 0;
        if (0 < (int)plVar5[1]) {
          lVar17 = 0;
          do {
            plVar14 = *(longlong **)(lVar17 + *plVar5);
            cVar1 = (**(code **)(*plVar14 + 0x20))(plVar14,&local_294);
            if (cVar1 != '\0') {
              if (plVar14 != (longlong *)0x0) {
                bVar2 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_294,plVar6);
                bVar19 = (bool)(bVar2 & 1);
                goto LAB_141a03468;
              }
              break;
            }
            iVar9 = iVar9 + 1;
            lVar17 = lVar17 + 8;
          } while (iVar9 < (int)plVar5[1]);
        }
      }
      bVar19 = false;
    }
LAB_141a03468:
    param_1 = local_698;
    lVar17 = local_6a0;
    if (bVar19 == false) {
      if ((int)local_360 == local_334) {
        LOCK();
        *(longlong *)(local_698 + 200) = *(longlong *)(local_698 + 200) + -1;
        UNLOCK();
        FPipelineCacheFileFormatPSORead::_scalar_deleting_destructor_(local_6a0,1);
      }
      else {
        local_318 = 0;
        local_2f8 = 0;
        local_2e4 = 0;
        local_2d8 = 0;
        local_2d0 = 0;
        local_310 = 0;
        local_2f0 = 0;
        local_2e8 = 0xffffffff;
        local_2c8 = *(undefined4 *)(local_6a0 + 0x18);
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
                  (&local_318,&local_368);
        param_1 = local_698;
        iVar9 = *(int *)(local_698 + 0x38);
        *(int *)(local_698 + 0x38) = iVar9 + 1;
        if (*(int *)(local_698 + 0x3c) < iVar9 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(local_698 + 0x30,iVar9);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*(void **)(param_1 + 0x30) + 0x58),*(void **)(param_1 + 0x30),
                   (longlong)iVar9 * 0x58);
        puVar11 = *(undefined8 **)(param_1 + 0x30);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        *(undefined4 *)(puVar11 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)puVar11 + 0x34) = 0;
        puVar11[8] = 0;
        *(undefined4 *)(puVar11 + 9) = 0;
        TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
                  (puVar11,&local_318);
        *(undefined4 *)(puVar11 + 10) = local_2c8;
        LOCK();
        *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -1;
        UNLOCK();
        FPipelineCacheFileFormatPSORead::_scalar_deleting_destructor_(lVar17,1);
        local_2d0 = 0;
        if (local_2d8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_318);
      }
    }
    else {
      FUN_141eb9950(local_5b8);
      FUN_141eba570(local_5b8,&local_298);
      param_1 = local_698;
      iVar9 = *(int *)(local_698 + 0x18);
      *(int *)(local_698 + 0x18) = iVar9 + 1;
      local_370 = plVar6;
      if (*(int *)(local_698 + 0x1c) < iVar9 + 1) {
        TArray<Audio::FGrain,TSizedDefaultAllocator<32>_>::ResizeGrow(local_698 + 0x10,iVar9);
      }
      lVar17 = (longlong)iVar9 * 0x250 + *(longlong *)(param_1 + 0x10);
      FUN_141eb9840(lVar17,local_5b8);
      *(longlong **)(lVar17 + 0x248) = local_370;
      FPipelineCacheFileFormatPSORead::_scalar_deleting_destructor_(local_6a0,1);
      AK::MemoryMgr::StartProfileThreadUsage((long)local_5b8);
    }
    param_2 = local_690;
    iVar9 = (int)local_690[1];
    iVar3 = (iVar9 - iVar8) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*local_690 + (longlong)iVar8 * 8),
                 (void *)(*local_690 + (longlong)(iVar8 + 1) * 8),(longlong)iVar3 << 3);
      iVar9 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar9 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
    local_320 = 0;
    if (local_328 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_368);
    FArchive::~FArchive(local_668);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_298);
    local_6a8 = iVar8;
  } while( true );
}



// FUNCTION 141a037b0 FUN_141a037b0 body=58 status=ok
// SIG undefined FUN_141a037b0(void)

undefined8 FUN_141a037b0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2efcaU >> (param_1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  if (((param_1 < 0x1c) && ((0x8051000U >> (param_1 & 0x1f) & 1) != 0)) &&
     (uVar1 = RHIGetShaderLanguageVersion(), uVar1 < 2)) {
    return 0;
  }
  return 1;
}



// FUNCTION 141a037f0 FUN_141a037f0 body=259 status=ok
// SIG undefined FUN_141a037f0(void)

undefined8 FUN_141a037f0(longlong param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  
  lVar3 = DAT_1469f5d48;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar9 = 4;
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_141a03847;
    lVar7 = 4;
  }
  else {
LAB_141a03847:
    lVar7 = 0;
  }
  uVar2 = *(uint *)(lVar7 + lVar3);
  uVar6 = FUN_141ecacf0(0);
  QueryPerformanceCounter(&local_res8);
  lVar3 = DAT_1469f5d60;
  dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
  dVar1 = *(double *)(param_1 + 0x148);
  if (uVar2 == 0) {
LAB_141a038d7:
    uVar8 = 0;
  }
  else {
    if (uVar6 < uVar2) {
      if (uVar6 == 0) goto LAB_141a038d7;
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        if (DVar5 == DAT_1468c21c0) goto LAB_141a038c4;
      }
      else {
LAB_141a038c4:
        lVar9 = 0;
      }
      if ((float)((dVar10 + 16777216.0) - dVar1) < (float)*(int *)(lVar9 + lVar3))
      goto LAB_141a038d7;
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 141a03900 FUN_141a03900 body=497 status=ok
// SIG undefined FUN_141a03900(void)

bool FUN_141a03900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 local_res8;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      uVar8 = 0;
      lVar10 = (longlong)(int)uVar11 * 0x250;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x248 + lVar10);
      if (*(int *)(lVar2 + 0x140) == 0) {
LAB_141a03a06:
        plVar5 = (longlong *)(param_1 + 0x10);
        iVar1 = *(int *)(param_1 + 0x28);
        lVar2 = *plVar5;
        *(int *)(param_1 + 0x28) = iVar1 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
          TArray<Audio::FGrain,TSizedDefaultAllocator<32>_>::ResizeGrow(param_1 + 0x20,iVar1);
        }
        lVar7 = (longlong)iVar1 * 0x250 + *(longlong *)(param_1 + 0x20);
        FUN_141eb9840(lVar7,lVar2 + lVar10);
        *(undefined8 *)(lVar7 + 0x248) = *(undefined8 *)(lVar2 + lVar10 + 0x248);
        AK::MemoryMgr::StartProfileThreadUsage((int)*plVar5 + (int)lVar10);
        iVar1 = *(int *)(param_1 + 0x18);
        iVar9 = (iVar1 - uVar11) + -1;
        if (0 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar5 + lVar10),
                     (void *)((longlong)(iVar1 - iVar9) * 0x250 + *plVar5),(longlong)iVar9 * 0x250);
          iVar1 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar1 + -1;
        FUN_141a0a030(plVar5);
      }
      else {
        do {
          local_res8 = 0xbff0000000000000;
          lVar7 = *(longlong *)(lVar2 + 0x130);
          if (*(longlong *)(lVar2 + 0x130) == 0) {
            lVar7 = lVar2 + 0x90;
          }
          puVar6 = (undefined8 *)(lVar7 + (longlong)(int)uVar8 * 0x50);
          if (*(int *)(puVar6 + 8) == 0) {
LAB_141a039cb:
            uVar4 = 0;
          }
          else {
            plVar5 = (longlong *)puVar6[6];
            if ((longlong *)puVar6[6] == (longlong *)0x0) {
              plVar5 = puVar6 + 2;
            }
            if (plVar5 == (longlong *)0x0) goto LAB_141a039cb;
            uVar4 = (**(code **)(*plVar5 + 8))();
          }
          cVar3 = (*(code *)*puVar6)(uVar4,&local_res8);
          if (cVar3 == '\0') {
            uVar8 = uVar8 + 1;
          }
          else {
            FUN_141a08e30(lVar2 + 0x90,uVar8,1,1);
          }
        } while (uVar8 < *(uint *)(lVar2 + 0x140));
        if (*(uint *)(lVar2 + 0x140) == 0) goto LAB_141a03a06;
        uVar11 = uVar11 + 1;
      }
    } while (uVar11 < *(uint *)(param_1 + 0x18));
  }
  return *(int *)(param_1 + 0x28) != 0;
}



// FUNCTION 141a03b00 Register body=197 status=ok
// SIG undefined Register(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShader::Register(longlong param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  longlong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_1419ef3f0(param_1,&local_98);
  local_128 = &local_118;
  local_118 = local_98;
  uStack_110 = uStack_90;
  local_108 = local_88;
  uStack_100 = uStack_80;
  local_f8 = local_78;
  uStack_f0 = uStack_70;
  local_e8 = local_68;
  uStack_e0 = uStack_60;
  local_d8 = local_58;
  uStack_d0 = uStack_50;
  local_c8 = local_48;
  uStack_c0 = uStack_40;
  local_120 = &local_130;
  local_b8 = local_38;
  uStack_b4 = uStack_34;
  uStack_b0 = uStack_30;
  uStack_ac = uStack_2c;
  local_a8 = local_28;
  local_130 = param_1;
  FUN_1419d1cc0(*(longlong *)(param_1 + 0x90) + 0x48,local_138,&local_128,0);
  return;
}



// FUNCTION 141a03bd0 RegisterSerializedResource body=821 status=ok
// SIG undefined RegisterSerializedResource(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShader::RegisterSerializedResource(longlong param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  short *psVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  uint *local_98;
  undefined8 **ppuStack_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  undefined8 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x98) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x10);
    }
    local_68 = *(uint *)(lVar7 + 0x68);
    local_38 = *(int *)(lVar7 + 0xa0);
    local_64 = *(undefined4 *)(lVar7 + 0x84);
    uStack_60 = *(undefined4 *)(lVar7 + 0x88);
    uStack_5c = *(undefined4 *)(lVar7 + 0x8c);
    uStack_58 = *(undefined4 *)(lVar7 + 0x90);
    local_54 = *(int *)(lVar7 + 0x94);
    local_48 = 0;
    local_40 = 0;
    if (DAT_1464c0af8 != DAT_1464c0b24) {
      iVar5 = FCrc::MemCrc_DEPRECATED(&local_64,0x14);
      puVar6 = DAT_1464c0b30;
      if (DAT_1464c0b30 == (undefined *)0x0) {
        puVar6 = &DAT_1464c0b28;
      }
      iVar5 = *(int *)(puVar6 + ((longlong)DAT_1464c0b38 - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = DAT_1464c0af0 + (longlong)iVar5 * 0x48;
          uVar3 = *(uint *)(DAT_1464c0af0 + (longlong)iVar5 * 0x48);
          if ((((((uVar3 & 7) == (local_68 & 7)) && (((uVar3 ^ local_68) & 0xf8) == 0)) &&
               (*(longlong *)(lVar7 + 4) == CONCAT44(uStack_60,local_64))) &&
              ((*(longlong *)(lVar7 + 0xc) == CONCAT44(uStack_58,uStack_5c) &&
               (*(int *)(lVar7 + 0x14) == local_54)))) && (*(int *)(lVar7 + 0x30) == local_38)) {
            psVar8 = *(short **)(lVar7 + 0x18);
            if ((psVar8 != (short *)0x0) || (local_50 != 0)) {
              lVar9 = local_50 - (longlong)psVar8;
              do {
                sVar1 = *psVar8;
                sVar2 = *(short *)((longlong)psVar8 + lVar9);
                if (sVar1 != sVar2) break;
                psVar8 = psVar8 + 1;
              } while (sVar2 != 0);
              if (sVar1 != sVar2) goto LAB_141a03d5c;
            }
            if ((iVar5 != -1) && (lVar7 != 0)) {
              lVar7 = *(longlong *)(lVar7 + 0x38);
              goto LAB_141a03d6f;
            }
            break;
          }
LAB_141a03d5c:
          iVar5 = *(int *)(lVar7 + 0x40);
        } while (iVar5 != -1);
      }
    }
    lVar7 = 0;
LAB_141a03d6f:
    if (local_48 != 0) {
      FMemory::Free();
    }
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (lVar7 == 0) {
      if (puVar4[0x13] == 0) {
        local_50 = 0;
      }
      else {
        local_50 = *(longlong *)(puVar4[0x13] + 0x10);
      }
      local_68 = *(uint *)(puVar4 + 0xd);
      local_64 = *(undefined4 *)((longlong)puVar4 + 0x84);
      uStack_60 = *(undefined4 *)(puVar4 + 0x11);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x8c);
      uStack_58 = *(undefined4 *)(puVar4 + 0x12);
      local_54 = *(int *)((longlong)puVar4 + 0x94);
      local_38 = *(int *)(puVar4 + 0x14);
      local_98 = &local_68;
      ppuStack_90 = &local_70;
      local_48 = 0;
      local_40 = 0;
      local_70 = puVar4;
      FUN_1419ce280(&DAT_1464c0af0,local_78,&local_98,0);
      if (local_48 != 0) {
        FMemory::Free();
      }
      lVar7 = 0;
      if (DAT_1469f59e0 != 0) {
        lVar7 = DAT_1469f59d8;
      }
      if ((lVar7 != 0) && (DAT_1469f59d8 != 0)) {
        local_88 = *(undefined4 *)((longlong)puVar4 + 0x94);
        local_98 = *(uint **)((longlong)puVar4 + 0x84);
        ppuStack_90 = *(undefined8 ***)((longlong)puVar4 + 0x8c);
        local_b0 = puVar4 + 0xe;
        local_a8 = 0;
        local_b8 = *(undefined4 *)(puVar4 + 0x10);
        FUN_1419f4fe0(DAT_1469f59d8,*(uint *)(puVar4 + 0xd) >> 3 & 0x1f,*(uint *)(puVar4 + 0xd) & 7,
                      &local_98);
      }
    }
    else {
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(longlong *)(param_1 + 0x40) = lVar7;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    lVar9 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0xac) = *(int *)(lVar7 + 0xac) + 1;
    }
    if (lVar9 != 0) {
      FShaderResource::Release();
    }
  }
  return;
}



// FUNCTION 141a03f10 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
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
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
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
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141a0404f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_141a0404f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x50 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x4c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 9) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04190 FUN_141a04190 body=640 status=ok
// SIG undefined FUN_141a04190(void)

void FUN_141a04190(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
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
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
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
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141a042cf;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_141a042cf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x1c0 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x1bc) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x37) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04410 Rehash body=640 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<UObject_*,FHierarchyNode>,TDefaultMapHashableKeyFuncs<UObject_*,FHierarchyNode,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
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
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
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
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141a0454f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_141a0454f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0xd8 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0xd4) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x1a) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04690 FUN_141a04690 body=640 status=ok
// SIG undefined FUN_141a04690(void)

void FUN_141a04690(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
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
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
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
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141a047cf;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_141a047cf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x118 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x114) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x22) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04910 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar6;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar6 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_141a04a4f;
        uVar6 = puVar13[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a04a4f:
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
        lVar7 = *param_1 + (longlong)iStack_1c * 0x18;
        lVar4 = *(longlong *)(*param_1 + (longlong)iStack_1c * 0x18);
        if (lVar4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar4 + 0x68);
        }
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)(lVar7 + 0x14) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04b30 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar5 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a04c5f;
        uVar5 = puVar13[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a04c5f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar10 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        uVar5 = FUN_140438070(*puVar10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar10 + 3) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a04d40 Rehash body=668 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar5 = (longlong)(int)*plVar2 - 1U & uVar11;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar12 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar12 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_28;
      }
      uVar10 = *puVar16;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar10 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141a04e7f;
        uVar10 = puVar16[lVar4 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar12 < iStack_44) {
LAB_141a04e7f:
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
        plVar6 = (longlong *)((longlong)iStack_1c * 0x20 + *param_1);
        if (*plVar6 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*plVar6 + 0xc);
        }
        uVar10 = *(uint *)(plVar6 + 1);
        uVar13 = iVar12 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar13) - uVar10 ^ uVar13 << 8;
        uVar15 = (uVar10 - uVar9) - uVar13 ^ uVar9 >> 0xd;
        uVar13 = (uVar13 - uVar9) - uVar15 ^ uVar15 >> 0xc;
        uVar10 = (uVar9 - uVar13) - uVar15 ^ uVar13 << 0x10;
        uVar15 = (uVar15 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar9 = (uVar13 - uVar10) - uVar15 ^ uVar15 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar15 ^ uVar9 << 10;
        uVar10 = ((uVar15 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)plVar6 + 0x1c) = uVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(plVar6 + 3) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a04fe0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPrimaryAssetId,UGCosmeticIconButton_*>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UGCosmeticIconButton_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_141a0511f;
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
LAB_141a0511f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = FSamplerStateInitializerRHIKeyFuncs::GetKeyHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a051f0 FUN_141a051f0 body=537 status=ok
// SIG undefined FUN_141a051f0(void)

void FUN_141a051f0(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0531f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0531f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1b8 + *param_1;
        uVar5 = FUN_1419f0cb0(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x1b4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x1b0) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05410 Rehash body=537 status=ok
// SIG undefined Rehash(void)

void TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0553f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0553f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1c0 + *param_1;
        uVar5 = FUN_1419f0cb0(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x1bc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x1b8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05630 FUN_141a05630 body=537 status=ok
// SIG undefined FUN_141a05630(void)

void FUN_141a05630(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0575f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0575f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xd4 + *param_1;
        uVar5 = FUN_1419f0ed0(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xd0) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xcc) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05850 FUN_141a05850 body=537 status=ok
// SIG undefined FUN_141a05850(void)

void FUN_141a05850(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0597f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0597f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xd8 + *param_1;
        uVar5 = FUN_1419f0ed0(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xd4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd0) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05a70 FUN_141a05a70 body=569 status=ok
// SIG undefined FUN_141a05a70(void)

void FUN_141a05a70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar6;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar6 = *puVar13;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar5) goto LAB_141a05b9f;
        uVar6 = puVar13[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_141a05b9f:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar4 = iStack_2c;
        lVar7 = (longlong)iStack_2c * 0x2c + *param_1;
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 == 0) {
          iVar9 = *(int *)(lVar7 + 0x14);
          bVar3 = *(byte *)(lVar7 + 0x1c);
          uVar6 = FCrc::MemCrc_DEPRECATED(lVar7,0x14,0);
          uVar6 = uVar6 ^ iVar9 << 0x10 ^ (uint)bVar3;
          *(uint *)(lVar7 + 0x18) = uVar6;
        }
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)(lVar7 + 0x28) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x24) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05cb0 FUN_141a05cb0 body=569 status=ok
// SIG undefined FUN_141a05cb0(void)

void FUN_141a05cb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar6;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar6 = *puVar13;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar5) goto LAB_141a05ddf;
        uVar6 = puVar13[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_141a05ddf:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar4 = iStack_2c;
        lVar7 = (longlong)iStack_2c * 0x40 + *param_1;
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 == 0) {
          iVar9 = *(int *)(lVar7 + 0x14);
          bVar3 = *(byte *)(lVar7 + 0x1c);
          uVar6 = FCrc::MemCrc_DEPRECATED(lVar7,0x14,0);
          uVar6 = uVar6 ^ iVar9 << 0x10 ^ (uint)bVar3;
          *(uint *)(lVar7 + 0x18) = uVar6;
        }
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)(lVar7 + 0x3c) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a05ef0 FUN_141a05ef0 body=573 status=ok
// SIG undefined FUN_141a05ef0(void)

void FUN_141a05ef0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar6;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar6 = *puVar13;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar5) goto LAB_141a0601f;
        uVar6 = puVar13[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_141a0601f:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar4 = iStack_2c;
        lVar7 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 == 0) {
          iVar9 = *(int *)(lVar7 + 0x14);
          bVar3 = *(byte *)(lVar7 + 0x1c);
          uVar6 = FCrc::MemCrc_DEPRECATED(lVar7,0x14,0);
          uVar6 = uVar6 ^ iVar9 << 0x10 ^ (uint)bVar3;
          *(uint *)(lVar7 + 0x18) = uVar6;
        }
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)(lVar7 + 0x2c) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x28) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a06130 FUN_141a06130 body=569 status=ok
// SIG undefined FUN_141a06130(void)

void FUN_141a06130(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar6;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar6 = *puVar13;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar5) goto LAB_141a0625f;
        uVar6 = puVar13[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_141a0625f:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        iVar4 = iStack_2c;
        lVar7 = (longlong)iStack_2c * 0x78 + *param_1;
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 == 0) {
          iVar9 = *(int *)(lVar7 + 0x14);
          bVar3 = *(byte *)(lVar7 + 0x1c);
          uVar6 = FCrc::MemCrc_DEPRECATED(lVar7,0x14,0);
          uVar6 = uVar6 ^ iVar9 << 0x10 ^ (uint)bVar3;
          *(uint *)(lVar7 + 0x18) = uVar6;
        }
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)(lVar7 + 0x74) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x70) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a06370 FUN_141a06370 body=537 status=ok
// SIG undefined FUN_141a06370(void)

void FUN_141a06370(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0649f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0649f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xdf8 + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xdf4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xdf0) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a06590 FUN_141a06590 body=522 status=ok
// SIG undefined FUN_141a06590(void)

void FUN_141a06590(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141a066cf;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a066cf:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[5] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a067a0 FUN_141a067a0 body=610 status=ok
// SIG undefined FUN_141a067a0(void)

void FUN_141a067a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar11 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar11 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar11) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar11;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        uVar6 = (longlong)(int)*plVar2 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar9 + uVar6 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puStack_28;
      }
      uVar11 = *puVar7;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar11 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141a068df;
        uVar11 = puVar7[lVar5 + 1];
      }
      uStack_54 = -uVar11 & uVar11;
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
LAB_141a068df:
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
        puVar7 = (uint *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar11 = puVar7[8];
        if (uVar11 == 0) {
          uVar11 = *puVar7;
          if (uVar11 == 0) {
            uVar11 = (puVar7[5] << 8 ^ puVar7[6]) << 8 ^ (uint)(byte)puVar7[7] << 0x18 ^
                     (uint)*(byte *)((longlong)puVar7 + 0x1d) ^ puVar7[2] * 2 ^ puVar7[1] * 3 ^
                     puVar7[4] ^ puVar7[3];
            *puVar7 = uVar11;
          }
          uVar11 = puVar7[9] << 8 ^ puVar7[10] ^ uVar11;
          puVar7[8] = uVar11;
        }
        uVar11 = (int)*plVar2 - 1U & uVar11;
        puVar7[0xd] = uVar11;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        puVar7[0xc] = *(uint *)((longlong)plVar9 +
                               ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a06a10 FUN_141a06a10 body=610 status=ok
// SIG undefined FUN_141a06a10(void)

void FUN_141a06a10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar11 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar11 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar11) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar11;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        uVar6 = (longlong)(int)*plVar2 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar9 + uVar6 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puStack_28;
      }
      uVar11 = *puVar7;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar11 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141a06b4f;
        uVar11 = puVar7[lVar5 + 1];
      }
      uStack_54 = -uVar11 & uVar11;
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
LAB_141a06b4f:
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
        puVar7 = (uint *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar11 = puVar7[8];
        if (uVar11 == 0) {
          uVar11 = *puVar7;
          if (uVar11 == 0) {
            uVar11 = (puVar7[5] << 8 ^ puVar7[6]) << 8 ^ (uint)(byte)puVar7[7] << 0x18 ^
                     (uint)*(byte *)((longlong)puVar7 + 0x1d) ^ puVar7[2] * 2 ^ puVar7[1] * 3 ^
                     puVar7[4] ^ puVar7[3];
            *puVar7 = uVar11;
          }
          uVar11 = puVar7[9] << 8 ^ puVar7[10] ^ uVar11;
          puVar7[8] = uVar11;
        }
        uVar11 = (int)*plVar2 - 1U & uVar11;
        puVar7[0xf] = uVar11;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        puVar7[0xe] = *(uint *)((longlong)plVar9 +
                               ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a06c80 FUN_141a06c80 body=525 status=ok
// SIG undefined FUN_141a06c80(void)

void FUN_141a06c80(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a06daf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a06daf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x3c + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x38) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x34) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a06e90 FUN_141a06e90 body=532 status=ok
// SIG undefined FUN_141a06e90(void)

void FUN_141a06e90(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a06fbf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a06fbf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x50 + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x4c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x48) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a070b0 FUN_141a070b0 body=589 status=ok
// SIG undefined FUN_141a070b0(void)

void FUN_141a070b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
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
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        uVar7 = (longlong)(int)*plVar2 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar9 + uVar7 * 4) = 0xffffffff;
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
        if (bVar4) goto LAB_141a071ef;
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
LAB_141a071ef:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x30 + *param_1);
        uVar5 = *puVar12;
        if (uVar5 == 0) {
          uVar5 = (puVar12[5] << 8 ^ puVar12[6]) << 8 ^ (uint)(byte)puVar12[7] << 0x18 ^
                  (uint)*(byte *)((longlong)puVar12 + 0x1d) ^ puVar12[2] * 2 ^ puVar12[1] * 3 ^
                  puVar12[4] ^ puVar12[3];
          *puVar12 = uVar5;
        }
        uVar5 = (int)*plVar2 - 1U & uVar5;
        puVar12[0xb] = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        puVar12[10] = *(uint *)((longlong)plVar9 +
                               ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a07300 Rehash body=532 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0742f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0742f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x60 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x5c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x58) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a07520 FUN_141a07520 body=544 status=ok
// SIG undefined FUN_141a07520(void)

void FUN_141a07520(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a0764f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a0764f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x88 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x14);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x84) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x80) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a07740 FUN_141a07740 body=536 status=ok
// SIG undefined FUN_141a07740(void)

void FUN_141a07740(longlong *param_1)

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
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141a0787f;
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
LAB_141a0787f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x48;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6 + 4,0x14);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x44) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x40) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a07960 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a07a8f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a07a8f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x70 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x6c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x68) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a07b70 FUN_141a07b70 body=537 status=ok
// SIG undefined FUN_141a07b70(void)

void FUN_141a07b70(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a07c9f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a07c9f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xac + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xa8) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xa4) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a07d90 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>_>,TDefaultMapHashableKeyFuncs<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a07ebf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a07ebf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x20 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a07fa0 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a080cf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a080cf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1c + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x14) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a081b0 FUN_141a081b0 body=536 status=ok
// SIG undefined FUN_141a081b0(void)

void FUN_141a081b0(longlong *param_1)

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
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a082df;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a082df:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x40 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6 + 4,0x14);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x3c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a083d0 Release body=199 status=ok
// SIG undefined Release(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShader::Release(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  piVar1 = (int *)(param_1 + 0xb4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar2 = (undefined8 *)FUN_1419ef3f0(param_1,local_98);
    local_118 = *puVar2;
    uStack_110 = puVar2[1];
    local_108 = puVar2[2];
    uStack_100 = puVar2[3];
    local_f8 = puVar2[4];
    uStack_f0 = puVar2[5];
    local_e8 = puVar2[6];
    uStack_e0 = puVar2[7];
    local_d8 = puVar2[8];
    uStack_d0 = puVar2[9];
    local_c8 = puVar2[10];
    uStack_c0 = puVar2[0xb];
    local_b8 = *(undefined4 *)(puVar2 + 0xc);
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 100);
    uStack_b0 = *(undefined4 *)(puVar2 + 0xd);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0x6c);
    local_a8 = puVar2[0xe];
    TSet<TTuple<FShaderId,FShader_*>,TDefaultMapHashableKeyFuncs<FShaderId,FShader_*,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1 + 0x90) + 0x48,&local_118);
    *(undefined4 *)(param_1 + 0xbc) = 0xdc67f93b;
    BeginCleanup(param_1);
  }
  return;
}



// FUNCTION 141a084a0 Release body=246 status=ok
// SIG undefined Release(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShaderResource::Release(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0xac);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    local_30 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      local_30 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10);
    }
    local_48 = *(undefined4 *)(param_1 + 0x68);
    local_44 = *(undefined4 *)(param_1 + 0x84);
    uStack_40 = *(undefined4 *)(param_1 + 0x88);
    uStack_3c = *(undefined4 *)(param_1 + 0x8c);
    uStack_38 = *(undefined4 *)(param_1 + 0x90);
    local_34 = *(undefined4 *)(param_1 + 0x94);
    local_18 = *(undefined4 *)(param_1 + 0xa0);
    local_28 = 0;
    local_20 = 0;
    FUN_141a08cd0(&DAT_1464c0af0,&local_48);
    if (local_28 != 0) {
      FMemory::Free();
    }
    FUN_141edf360(param_1);
    *(undefined4 *)(param_1 + 0xb0) = 0xdc67f93b;
    lVar2 = param_1 + 0x30;
    if (param_1 == 0) {
      lVar2 = 0;
    }
    BeginCleanup(lVar2);
    if (*(char *)(param_1 + 0xb4) != '\0') {
      FUN_141a08660(param_1 + 0x84);
    }
  }
  return;
}



// FUNCTION 141a085a0 ReleaseRHI body=80 status=ok
// SIG undefined ReleaseRHI(void)

void FShaderResource::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x50,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,0);
  return;
}



// FUNCTION 141a085f0 FUN_141a085f0 body=111 status=ok
// SIG undefined FUN_141a085f0(void)

void FUN_141a085f0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x650,0);
  *(undefined4 *)(param_1 + 0x330) = 0;
  if (*(int *)(param_1 + 0x334) != 0) {
    FUN_141a0a680(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x640) = 0;
  if (*(int *)(param_1 + 0x644) != 0) {
    FUN_141a0a680(param_1 + 0x340,0);
    return;
  }
  return;
}



// FUNCTION 141a08660 FUN_141a08660 body=219 status=ok
// SIG undefined FUN_141a08660(void)

void FUN_141a08660(undefined8 param_1)

{
  int *piVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  int local_res10 [2];
  
  if (((DAT_1469f5a08 != 0) && (*(char *)(DAT_1469f5a08 + 0x79) == '\0')) &&
     (lVar3 = FShaderCodeLibraryImpl::FindShaderLibrary(DAT_1469f5a08,param_1), lVar3 != 0)) {
    TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x80,local_res10,param_1);
    lVar4 = 0;
    if (local_res10[0] != -1) {
      lVar4 = (longlong)local_res10[0] * 0x60 + *(longlong *)(lVar3 + 0x80);
    }
    lVar5 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x58);
      BVar2 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar2 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      piVar1 = (int *)(lVar5 + 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(lVar5 + 0x20) = 0;
        if (*(int *)(lVar5 + 0x24) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar5 + 0x18,0);
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}



// FUNCTION 141a08740 Remove body=198 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0x60;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x5c + lVar5));
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar2 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar2 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0x58 + lVar5);
        break;
      }
      piVar4 = (int *)(lVar5 + 0x58 + (longlong)iVar1 * 0x60);
      iVar1 = *piVar4;
    }
  }
  lVar5 = (longlong)param_2 * 0x60 + *param_1;
  *(undefined4 *)(lVar5 + 0x50) = 0;
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (lVar5 + 8);
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141a08810 Remove body=339 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FShaderResourceKey,FShaderResourceViewBinding>,TDefaultMapHashableKeyFuncs<FShaderResourceKey,FShaderResourceViewBinding,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = ::GetTypeHash(param_2);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    uVar7 = (longlong)(int)param_1[9] - 1;
    iVar3 = *(int *)((longlong)plVar6 + ((longlong)iVar3 & uVar7) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x50 + lVar2;
        if (((((*(int *)(lVar4 + 0x24) == *(int *)(param_2 + 0x24)) &&
              (*(int *)(lVar4 + 0x28) == *(int *)(param_2 + 0x28))) &&
             (*(char *)(lVar4 + 0x2c) == *(char *)(param_2 + 0x2c))) &&
            ((((*(char *)(lVar4 + 0x2d) == *(char *)(param_2 + 0x2d) &&
               (*(int *)(lVar4 + 4) == *(int *)(param_2 + 4))) &&
              ((*(int *)(lVar4 + 8) == *(int *)(param_2 + 8) &&
               ((*(int *)(lVar4 + 0xc) == *(int *)(param_2 + 0xc) &&
                (*(int *)(lVar4 + 0x10) == *(int *)(param_2 + 0x10))))))) &&
             (*(int *)(lVar4 + 0x14) == *(int *)(param_2 + 0x14))))) &&
           (((*(int *)(lVar4 + 0x18) == *(int *)(param_2 + 0x18) &&
             (*(char *)(lVar4 + 0x1c) == *(char *)(param_2 + 0x1c))) &&
            (*(char *)(lVar4 + 0x1d) == *(char *)(param_2 + 0x1d))))) {
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_141a08945;
          uVar7 = (longlong)*(int *)(lVar2 + 0x4c + (longlong)iVar3 * 0x50) & uVar7;
          piVar5 = (int *)((longlong)plVar6 + uVar7 * 4);
          iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
          goto joined_r0x000141a0891b;
        }
        iVar3 = *(int *)(lVar4 + 0x48);
      } while (iVar3 != -1);
    }
  }
  return 0;
joined_r0x000141a0891b:
  if (iVar1 == -1) {
LAB_141a08945:
    TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar1 == iVar3) {
    *piVar5 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
    goto LAB_141a08945;
  }
  piVar5 = (int *)((longlong)iVar1 * 0x50 + 0x48 + lVar2);
  iVar1 = *piVar5;
  goto joined_r0x000141a0891b;
}



// FUNCTION 141a08970 Remove body=401 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FShaderTextureKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderTextureKey,FRHITexture_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = *param_2;
  if (uVar6 == 0) {
    uVar6 = (param_2[5] << 8 ^ param_2[6]) << 8 ^ (uint)(byte)param_2[7] << 0x18 ^
            (uint)*(byte *)((longlong)param_2 + 0x1d) ^ param_2[2] * 2 ^ param_2[1] * 3 ^ param_2[4]
            ^ param_2[3];
    *param_2 = uVar6;
  }
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar8 + ((longlong)(int)uVar6 & uVar7) * 4);
  if (iVar3 == -1) {
    return 0;
  }
  lVar2 = *param_1;
  while (((((lVar4 = (longlong)iVar3 * 0x30 + lVar2, *(uint *)(lVar4 + 4) != param_2[1] ||
            (*(uint *)(lVar4 + 8) != param_2[2])) || (*(uint *)(lVar4 + 0xc) != param_2[3])) ||
          ((*(uint *)(lVar4 + 0x10) != param_2[4] || (*(uint *)(lVar4 + 0x14) != param_2[5])))) ||
         ((*(uint *)(lVar4 + 0x18) != param_2[6] ||
          ((*(char *)(lVar4 + 0x1c) != (char)param_2[7] ||
           (*(char *)(lVar4 + 0x1d) != *(char *)((longlong)param_2 + 0x1d)))))))) {
    iVar3 = *(int *)(lVar4 + 0x28);
    if (iVar3 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (longlong)*(int *)(lVar2 + 0x2c + (longlong)iVar3 * 0x30) & uVar7;
    piVar5 = (int *)((longlong)plVar8 + uVar7 * 4);
    iVar1 = *(int *)((longlong)plVar8 + uVar7 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar5 = *(int *)(lVar2 + 0x28 + (longlong)iVar3 * 0x30);
        break;
      }
      piVar5 = (int *)((longlong)iVar1 * 0x30 + 0x28 + lVar2);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 141a08b10 Remove body=433 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FShaderId,FShader_*>,TDefaultMapHashableKeyFuncs<FShaderId,FShader_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2,0x14,0);
  uVar11 = (longlong)(int)param_1[9] - 1;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar12 + ((longlong)iVar6 & uVar11) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar13 = (longlong)iVar6;
    lVar10 = lVar13 * 0x88 + lVar3;
    cVar5 = ::operator==(lVar10,param_2);
    if (cVar5 != '\0') break;
    iVar6 = *(int *)(lVar10 + 0x80);
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    piVar9 = (int *)(((longlong)*(int *)(lVar13 * 0x88 + 0x84 + lVar3) & uVar11) * 4 +
                    (longlong)plVar12);
    iVar2 = *piVar9;
    while (iVar2 != -1) {
      if (iVar2 == iVar6) {
        *piVar9 = *(int *)(lVar13 * 0x88 + 0x80 + lVar3);
        break;
      }
      piVar9 = (int *)((longlong)iVar2 * 0x88 + 0x80 + lVar3);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)iVar6 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x88 + *param_1) = iVar6;
  }
  uVar8 = 0xffffffff;
  puVar7 = (undefined4 *)(lVar13 * 0x88 + *param_1);
  *puVar7 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (undefined4)param_1[6];
  }
  puVar7[1] = uVar8;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar6;
  plVar12 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return 1;
}



// FUNCTION 141a08cd0 FUN_141a08cd0 body=341 status=ok
// SIG undefined FUN_141a08cd0(void)

undefined8 FUN_141a08cd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2 + 4,0x14);
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar8 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 != -1) {
    lVar4 = *param_1;
    do {
      lVar7 = (longlong)iVar6;
      lVar1 = lVar4 + lVar7 * 0x48;
      cVar5 = operator==(lVar1,param_2);
      if (cVar5 != '\0') {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_141a08de4;
        uVar9 = (longlong)*(int *)(lVar4 + 0x44 + lVar7 * 0x48) & uVar9;
        puVar2 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
        iVar3 = *(int *)((longlong)plVar8 + uVar9 * 4);
        goto joined_r0x000141a08dbf;
      }
      iVar6 = *(int *)(lVar1 + 0x40);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141a08dbf:
  if (iVar3 == -1) {
LAB_141a08de4:
    if (*(longlong *)(*param_1 + 0x20 + lVar7 * 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar3 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar4 + lVar7 * 0x48 + 0x40);
    goto LAB_141a08de4;
  }
  lVar1 = (longlong)iVar3 * 9 + 8;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000141a08dbf;
}



// FUNCTION 141a08e30 FUN_141a08e30 body=282 status=ok
// SIG undefined FUN_141a08e30(void)

void FUN_141a08e30(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar3 = param_1;
    }
    plVar4 = (longlong *)(lVar3 + 0x30 + (longlong)param_2 * 0x50);
    iVar5 = param_3;
    do {
      if ((int)plVar4[2] != 0) {
        plVar2 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar2 = plVar4 + -4;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0xb0);
    iVar1 = (iVar5 - param_2) - param_3;
    if (iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar3 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar3 + (longlong)param_2 * 0x50),
                 (void *)((longlong)(param_2 + param_3) * 0x50 + lVar3),(longlong)iVar1 * 0x50);
      iVar5 = *(int *)(param_1 + 0xb0);
    }
    *(int *)(param_1 + 0xb0) = iVar5 - param_3;
    if (param_4 != '\0') {
      FUN_141a0a0e0(param_1);
    }
  }
  return;
}



// FUNCTION 141a08f50 RemoveAtImpl body=351 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

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
  
  if (param_3 != 0) {
    plVar8 = (longlong *)(*param_1 + (longlong)param_2 * 8);
    iVar7 = param_3;
    do {
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
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      plVar8 = plVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = (int)param_1[1];
    iVar6 = (iVar7 - param_2) - param_3;
    if (iVar6 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 8),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 8),(longlong)iVar6 << 3);
      iVar7 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar7 - param_3;
    if (param_4 != '\0') {
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141a090b0 FUN_141a090b0 body=222 status=ok
// SIG undefined FUN_141a090b0(void)

void FUN_141a090b0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar1 = *param_1 + (longlong)param_2 * 0x58;
    iVar2 = param_3;
    do {
      *(undefined4 *)(lVar1 + 0x48) = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar1);
      lVar1 = lVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar3 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(iVar2 - iVar3) * 0x58 + *param_1),(longlong)iVar3 * 0x58);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141a09190 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0xd8;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xd8 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0xd8;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141a09250 FUN_141a09250 body=181 status=ok
// SIG undefined FUN_141a09250(void)

void FUN_141a09250(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x118;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x118 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x118;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141a09310 FUN_141a09310 body=1003 status=ok
// SIG undefined FUN_141a09310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a09310(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *local_d0;
  int local_c8 [4];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = param_3;
  TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_c8,param_2);
  piVar6 = (int *)0x0;
  if (local_c8[0] != -1) {
    piVar6 = (int *)((longlong)local_c8[0] * 0x60 + *(longlong *)(param_1 + 0x80));
  }
  piVar12 = piVar6 + 6;
  if (piVar6 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  iVar1 = piVar12[10];
  local_d8 = 0;
  piVar12[10] = iVar1 + 1;
  local_d0 = *(longlong **)(piVar12 + 0xe);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)local_d0[1];
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(local_d0 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      LOCK();
      bVar13 = iVar5 == (int)local_d0[1];
      if (bVar13) {
        *(int *)(local_d0 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        if (local_d0 != (longlong *)0x0) {
          local_d8 = *(longlong *)(piVar12 + 0xc);
        }
        goto LAB_141a093fd;
      }
      LOCK();
      iVar5 = (int)local_d0[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(local_d0 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
    local_d0 = (longlong *)0x0;
  }
LAB_141a093fd:
  if (iVar1 == 0) {
    if (local_d8 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x48);
      lVar2 = *(longlong *)(piVar12 + 2);
      iVar1 = *piVar12;
      iVar5 = piVar12[8];
      if (iVar5 < iVar1) {
        piVar12[8] = iVar1;
        if (piVar12[9] < iVar1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(piVar12 + 6,iVar5);
        }
      }
      else if ((iVar1 < iVar5) && (iVar1 != iVar5)) {
        piVar12[8] = iVar1;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(piVar12 + 6);
      }
      local_e0 = *(undefined8 *)(piVar12 + 6);
      local_e8 = 0;
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                        (*(longlong **)(param_1 + 0x50),lVar7 + lVar2,iVar1,3);
      plVar8 = (longlong *)operator_new(0x18);
      local_a8 = (longlong *)0x0;
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        plVar8[2] = lVar7;
        local_a8 = plVar8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_b0,lVar7,lVar7);
      local_b0 = 0;
      local_d8 = lVar7;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_a8);
      plVar8 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      *(longlong *)(piVar12 + 0xc) = local_d8;
      plVar8 = *(longlong **)(piVar12 + 0xe);
      param_3 = local_b8;
      if (local_d0 != plVar8) {
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(piVar12 + 0xe);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        *(longlong **)(piVar12 + 0xe) = local_d0;
        param_3 = local_b8;
      }
    }
  }
  else {
    plVar8 = local_d0;
    if (local_d8 == 0) goto LAB_141a09687;
  }
  plVar8 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x28,local_88);
  plVar11 = plVar8;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144d8e5e8;
    puVar9[2] = piVar12;
    puVar9[1] = param_1;
    puVar9[3] = local_d8;
    puVar9[4] = plVar8;
    plVar11 = (longlong *)0x0;
  }
  uVar10 = 0;
  local_98[0] = FUN_1419e50b0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_d0;
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar6 = (int *)((longlong)plVar11 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      plVar8 = local_d0;
      if (iVar1 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
        plVar8 = local_d0;
      }
    }
  }
  if ((param_3 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*param_3 + 0x160))(param_3,local_98), cVar3 == '\0')) {
    local_a0 = 0;
    if (local_58 != 0) {
      plVar11 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar11 = local_68;
      }
      if (plVar11 != (longlong *)0x0) {
        uVar10 = (**(code **)(*plVar11 + 8))();
      }
    }
    (*local_98[0])(uVar10,&local_a0);
  }
  if (local_58 != 0) {
    plVar11 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_141a09687:
  plVar11 = local_d0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar6 = (int *)((longlong)plVar11 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return 1;
}



// FUNCTION 141a09700 FUN_141a09700 body=361 status=ok
// SIG undefined FUN_141a09700(void)

void FUN_141a09700(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar11 = (longlong)iVar8;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar10 = lVar11 * 0x70;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar8;
        }
        *(undefined4 *)(lVar10 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar10 + 4 + *param_1) = uVar5;
        lVar10 = lVar10 + -0x70;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 141a09870 FUN_141a09870 body=376 status=ok
// SIG undefined FUN_141a09870(void)

void FUN_141a09870(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar11 = (longlong)iVar8;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar10 = lVar11 * 0xac;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0xac + *param_1) = iVar8;
        }
        *(undefined4 *)(lVar10 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar10 + 4 + *param_1) = uVar5;
        lVar10 = lVar10 + -0xac;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 141a099f0 FUN_141a099f0 body=163 status=ok
// SIG undefined FUN_141a099f0(void)

void FUN_141a099f0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa0);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x50);
    pvVar1 = *(void **)((longlong)param_1 + 0xa0);
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
        *(void **)((longlong)param_1 + 0xa0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x50);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar2;
  return;
}



// FUNCTION 141a09aa0 FUN_141a09aa0 body=17 status=ok
// SIG undefined FUN_141a09aa0(void)

void FUN_141a09aa0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x20;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  return;
}



// FUNCTION 141a09ac0 FUN_141a09ac0 body=151 status=ok
// SIG undefined FUN_141a09ac0(void)

void FUN_141a09ac0(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1c0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1c0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141a09b60 FUN_141a09b60 body=132 status=ok
// SIG undefined FUN_141a09b60(void)

void FUN_141a09b60(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x3c,0);
  iVar4 = (int)(uVar3 / 0x3c);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x3c,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141a09bf0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xac,0);
  iVar4 = (int)(uVar3 / 0xac);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xac,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141a09c80 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<212,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xd4,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x3521cfb2b78c1353) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xd4,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141a09d20 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<3576,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xdf8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2539d7e9177b21cb) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 0xb);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xdf8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141a09dc0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<Audio::FGrain,TSizedDefaultAllocator<32>_>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x250,0);
  iVar4 = (int)(uVar3 / 0x250);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x250,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141a09e50 FUN_141a09e50 body=151 status=ok
// SIG undefined FUN_141a09e50(void)

void FUN_141a09e50(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1ac,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x323e34a2b10bf66f) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1ac,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141a09ef0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FShaderDrawKey,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xde8,0);
  iVar4 = (int)(uVar3 / 0xde8);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xde8,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141a09f80 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x304) = 0x20;
  return;
}



// FUNCTION 141a09f90 FUN_141a09f90 body=157 status=ok
// SIG undefined FUN_141a09f90(void)

void FUN_141a09f90(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xb4) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x50,0);
    iVar4 = (int)(uVar3 / 0x50);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xb4) = iVar4;
  FUN_141a099f0(param_1,param_2,iVar4,0x50);
  return;
}



// FUNCTION 141a0a030 FUN_141a0a030 body=165 status=ok
// SIG undefined FUN_141a0a030(void)

ulonglong FUN_141a0a030(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x250) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x250,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xdd67c8a60dd67c8b) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x250);
      }
      goto LAB_141a0a0a4;
    }
    if (iVar4 == 0) goto LAB_141a0a0a4;
  }
  iVar4 = iVar5;
LAB_141a0a0a4:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x250,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 141a0a0e0 FUN_141a0a0e0 body=178 status=ok
// SIG undefined FUN_141a0a0e0(void)

void FUN_141a0a0e0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xb0);
  uVar3 = *(uint *)(param_1 + 0xb4);
  if (uVar2 < 3) {
    uVar2 = 2;
    goto LAB_141a0a165;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x50)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x50,0);
        uVar3 = *(uint *)(param_1 + 0xb4);
        uVar2 = (uint)(uVar1 / 0x50);
      }
      goto LAB_141a0a165;
    }
    if (uVar2 == 0) goto LAB_141a0a165;
  }
  uVar2 = uVar3;
LAB_141a0a165:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xb4) = uVar2;
    FUN_141a099f0(param_1,*(undefined4 *)(param_1 + 0xb0),uVar2,0x50);
    return;
  }
  return;
}



// FUNCTION 141a0a1a0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<440,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1b8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x29e4129e4129e413) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1b8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a0a230 FUN_141a0a230 body=130 status=ok
// SIG undefined FUN_141a0a230(void)

void FUN_141a0a230(longlong *param_1,int param_2)

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
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a0a2c0 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<60,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x3c,0);
    iVar3 = (int)(uVar1 / 0x3c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x3c,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141a0a330 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xac,0);
    iVar3 = (int)(uVar1 / 0xac);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xac,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141a0a3b0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<212,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xd4,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x3521cfb2b78c1353) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xd4,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a0a440 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<3576,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xdf8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2539d7e9177b21cb) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 0xb);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xdf8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a0a4d0 FUN_141a0a4d0 body=118 status=ok
// SIG undefined FUN_141a0a4d0(void)

void FUN_141a0a4d0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x250,0);
    iVar3 = (int)(uVar1 / 0x250);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x250,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141a0a550 FUN_141a0a550 body=130 status=ok
// SIG undefined FUN_141a0a550(void)

void FUN_141a0a550(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1ac,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x323e34a2b10bf66f) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1ac,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a0a5e0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FShaderDrawKey,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xde8,0);
    iVar3 = (int)(uVar1 / 0xde8);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xde8,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141a0a660 ResizeTo body=25 status=ok
// SIG undefined ResizeTo(void)

void TArray<FVertexElement,TFixedAllocator<32>_>::ResizeTo(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x104)) {
    *(int *)(param_1 + 0x104) = iVar1;
  }
  return;
}



// FUNCTION 141a0a680 FUN_141a0a680 body=25 status=ok
// SIG undefined FUN_141a0a680(void)

void FUN_141a0a680(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x304)) {
    *(int *)(param_1 + 0x304) = iVar1;
  }
  return;
}



// FUNCTION 141a0a6a0 FUN_141a0a6a0 body=263 status=ok
// SIG undefined FUN_141a0a6a0(void)

void FUN_141a0a6a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  piVar3 = &DAT_1464c9c48;
  lVar4 = 4;
  do {
    lVar2 = *param_1;
    if (((lVar2 != 0) && (iVar1 = *piVar3, iVar1 < 0x20)) &&
       (*(longlong *)(&DAT_1469f5a10 + (longlong)iVar1 * 8) != 0)) {
      FArchive::FArchive(local_d8);
      local_48 = 0;
      local_38 = 0x7fffffffffffffff;
      local_d8[0] = &PTR_FUN_143f4a3a0;
      local_40 = lVar2;
      FArchive::SetIsLoading(local_d8,1);
      FArchive::SetIsPersistent(local_d8,0);
      FUN_141a0baa0(*(undefined8 *)(&DAT_1469f5a10 + (longlong)iVar1 * 8),local_d8,1);
      (**(code **)(**(longlong **)(&DAT_1469f5a10 + (longlong)iVar1 * 8) + 8))();
      FArchive::~FArchive(local_d8);
    }
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 141a0a7b0 FUN_141a0a7b0 body=20 status=ok
// SIG undefined FUN_141a0a7b0(void)

void FUN_141a0a7b0(void)

{
  if (DAT_1469f59c8 != 0) {
    *(undefined1 *)(DAT_1469f59c8 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 141a0a7d0 FUN_141a0a7d0 body=267 status=ok
// SIG undefined FUN_141a0a7d0(void)

char FUN_141a0a7d0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  BOOL BVar2;
  LARGE_INTEGER local_res8;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  QueryPerformanceCounter(&local_res8);
  if ((*(double *)(param_1 + 0x160) <= 0.0) ||
     (10.0 <= ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
              *(double *)(param_1 + 0x160))) {
    cVar1 = FPipelineFileCache::SavePipelineFileCache(param_1 + 0xa0,param_2);
    if (cVar1 == '\0') {
      QueryPerformanceCounter(&local_res8);
      *(double *)(param_1 + 0x160) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x148) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  else {
    cVar1 = '\0';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return cVar1;
}



// FUNCTION 141a0a8e0 SaveAll body=309 status=ok
// SIG undefined SaveAll(void)

void FShaderCache::SaveAll(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res8 [8];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  ulonglong local_20;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
  uVar1 = FUN_14167d0d0(&local_38);
  FUN_1419f00b0(&local_28,uVar1,*(undefined4 *)(param_1 + 0x2b0));
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  local_38 = (void *)0x0;
  iVar3 = (int)local_20;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,local_28,(longlong)iVar3 * 2);
  }
  FUN_141a0ab40(&local_38,param_1 + 0x2b8);
  puVar2 = (undefined8 *)FName::FName(local_res8,"WindowsNoEditor",1);
  uVar1 = FUN_14167d0d0(&local_38);
  SaveBinaryCache(uVar1,*puVar2);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xcb0));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca8));
                    /* WARNING: Could not recover jumptable at 0x000141a0aa0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca0));
  return;
}



// FUNCTION 141a0aa20 SaveBinaryCache body=280 status=ok
// SIG undefined SaveBinaryCache(void)

void FShaderCache::SaveBinaryCache(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 local_18 [16];
  
  if ((DAT_1469f59f0 != 0) && (DAT_1469f59d8 != 0)) {
    uVar6 = FString::FString(local_18,param_1);
    FUN_1419ec7d0(*(undefined8 *)(DAT_1469f59d8 + 0x660),uVar6,0);
    puVar3 = *(undefined8 **)(DAT_1469f59d8 + 0x660);
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
        bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar8) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar8) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar5 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar7 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *(undefined8 *)(DAT_1469f59d8 + 0x660) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141a0ab40 FUN_141a0ab40 body=163 status=ok
// SIG undefined FUN_141a0ab40(void)

undefined8 FUN_141a0ab40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[1] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,puVar2,0);
  if (plVar1 != (longlong *)0x0) {
    FUN_1419dcd40(plVar1,param_2);
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    (**(code **)*plVar1)(plVar1,1);
    if (*param_1 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 141a0abf0 FUN_141a0abf0 body=790 status=ok
// SIG undefined FUN_141a0abf0(void)

void FUN_141a0abf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x90))();
  lVar4 = param_2 - lVar4;
  if (lVar4 < 1) {
    if (lVar4 < 0) {
      iVar3 = (int)param_1[0x14];
      do {
        plVar1 = (longlong *)param_1[0x13];
        iVar2 = iVar3 + -1;
        *(int *)(param_1 + 0x14) = iVar2;
        bVar5 = (byte)iVar2 & 7;
        if (iVar2 < 0) {
          iVar2 = iVar3 + 6;
          bVar5 = bVar5 - 8;
        }
        lVar7 = *plVar1;
        if ((*(uint *)(lVar7 + (longlong)(iVar2 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) == 0) {
          *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + -1;
          lVar7 = *plVar1;
        }
        iVar2 = (int)param_1[0x14];
        bVar5 = (byte)iVar2 & 7;
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 7;
          bVar5 = bVar5 - 8;
        }
        uVar8 = *(uint *)(lVar7 + (longlong)(iVar3 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f);
        if ((uVar8 & 0xf) == 0) {
          uVar8 = *(uint *)(plVar1[3] + (longlong)*(int *)((longlong)param_1 + 0xa4) * 4);
        }
        else {
          uVar8 = uVar8 & 0xf;
        }
        lVar7 = 1;
        do {
          iVar3 = iVar2;
          bVar5 = (byte)iVar3 & 7;
          iVar2 = iVar3;
          if (iVar3 < 0) {
            iVar2 = iVar3 + 7;
            bVar5 = bVar5 - 8;
          }
          if ((*(uint *)(*plVar1 + (longlong)(iVar2 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) ==
              0) {
            *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + 1;
          }
          *(int *)(param_1 + 0x14) = iVar3 + 1;
          lVar7 = lVar7 + -1;
          iVar2 = iVar3 + 1;
        } while (lVar7 != 0);
        lVar4 = lVar4 + (ulonglong)uVar8;
        *(int *)(param_1 + 0x14) = iVar3;
        bVar5 = (byte)iVar3 & 7;
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = iVar3 + 7;
          bVar5 = bVar5 - 8;
        }
        if ((*(uint *)(*plVar1 + (longlong)(iVar2 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) == 0)
        {
          *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + -1;
        }
      } while (lVar4 < 0);
    }
  }
  else {
    do {
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
      iVar3 = (int)param_1[0x14];
      plVar1 = (longlong *)param_1[0x13];
      bVar5 = (byte)iVar3 & 7;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
        bVar5 = bVar5 - 8;
      }
      lVar7 = *plVar1;
      if ((*(uint *)(lVar7 + (longlong)(iVar3 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) == 0) {
        *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + -1;
        lVar7 = *plVar1;
      }
      iVar2 = (int)param_1[0x14];
      bVar5 = (byte)iVar2 & 7;
      iVar3 = iVar2;
      if (iVar2 < 0) {
        iVar3 = iVar2 + 7;
        bVar5 = bVar5 - 8;
      }
      uVar8 = *(uint *)(lVar7 + (longlong)(iVar3 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f);
      if ((uVar8 & 0xf) == 0) {
        uVar8 = *(uint *)(plVar1[3] + (longlong)*(int *)((longlong)param_1 + 0xa4) * 4);
      }
      else {
        uVar8 = uVar8 & 0xf;
      }
      lVar7 = 1;
      do {
        iVar6 = iVar2;
        bVar5 = (byte)iVar6 & 7;
        iVar3 = iVar6;
        if (iVar6 < 0) {
          iVar3 = iVar6 + 7;
          bVar5 = bVar5 - 8;
        }
        if ((*(uint *)(*plVar1 + (longlong)(iVar3 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) == 0)
        {
          *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + 1;
        }
        iVar2 = iVar6 + 1;
        *(int *)(param_1 + 0x14) = iVar2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar4 = lVar4 - (ulonglong)uVar8;
      bVar5 = (byte)iVar2 & 7;
      if (iVar2 < 0) {
        iVar2 = iVar6 + 8;
        bVar5 = bVar5 - 8;
      }
      if ((*(uint *)(*plVar1 + (longlong)(iVar2 >> 3) * 4) >> (bVar5 * '\x04' & 0x1f) & 0xf) == 0) {
        *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + 1;
      }
      iVar3 = iVar6 + 2;
      *(int *)(param_1 + 0x14) = iVar3;
    } while (0 < lVar4);
    uVar8 = iVar3 >> 0x1f & 7;
    iVar3 = iVar3 + uVar8;
    if ((*(uint *)(*plVar1 + (longlong)(iVar3 >> 3) * 4) >>
         ((((byte)iVar3 & 7) - (char)uVar8) * '\x04' & 0x1f) & 0xf) == 0) {
      *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) + 1;
    }
    *(int *)(param_1 + 0x14) = iVar6 + 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a0af04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x12] + 0xa8))((longlong *)param_1[0x12],param_2);
  return;
}



// FUNCTION 141a0af10 FUN_141a0af10 body=653 status=ok
// SIG undefined FUN_141a0af10(void)

void FUN_141a0af10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  char local_res8 [8];
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FUN_1419db7f0(param_2,param_1 + 0x98);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (0x18 < iVar2) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa0,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0xa0,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa0) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  FUN_1419dd610(param_2,param_1 + 0x68);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar2 < 0xf) {
    FUN_140d25120(param_2,param_1 + 0x70);
  }
  FUN_141661e90(param_2,param_1 + 0x84);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xa4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xa8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (0x1f9 < (int)param_2[8]) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x80,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x80,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar2 < 0xf) goto LAB_141a0b178;
  local_res8[0] = *(char *)(param_1 + 0xb4);
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
LAB_141a0b168:
    if (local_res8[0] != '\0') goto LAB_141a0b178;
  }
  else {
    *(char *)(param_1 + 0xb4) = local_res8[0];
    if (local_res8[0] != '\0') {
      if ((DAT_1469f5a08 != 0) &&
         (plVar3 = (longlong *)
                   FShaderCodeLibraryImpl::FindShaderLibrary(DAT_1469f5a08,param_1 + 0x84),
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x84,param_2);
      }
      goto LAB_141a0b168;
    }
  }
  FUN_140d25120(param_2,param_1 + 0x70);
LAB_141a0b178:
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0x335b43ab;
  }
  return;
}



// FUNCTION 141a0b1a0 FUN_141a0b1a0 body=347 status=ok
// SIG undefined FUN_141a0b1a0(void)

void FUN_141a0b1a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x10) <= *(int *)(param_1 + 0xa0)) {
    plVar3 = *(longlong **)(param_1 + 0xa8);
    iVar2 = (int)plVar3[1];
    iVar4 = (int)((int)plVar3[2] + ((int)plVar3[2] >> 0x1f & 7U)) >> 3;
    if (iVar2 <= iVar4) {
      *(int *)(plVar3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3);
      }
      *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = 0;
    }
    bVar6 = (byte)param_3;
    if (6 < (int)param_3 - 1U) {
      bVar6 = 0;
      iVar2 = (int)plVar3[4];
      *(int *)(plVar3 + 4) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0x24) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3 + 3,iVar2);
      }
      *(int *)(plVar3[3] + (longlong)iVar2 * 4) = (int)param_3;
    }
    puVar1 = (uint *)(*plVar3 + (longlong)iVar4 * 4);
    *puVar1 = *puVar1 | (uint)bVar6 << (sbyte)((*(uint *)(plVar3 + 2) & 0x80000007) << 2);
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  uVar5 = iVar2 >> 0x1f & 7;
  iVar4 = iVar2 + uVar5;
  if ((*(uint *)(**(longlong **)(param_1 + 0x98) + (longlong)(iVar4 >> 3) * 4) >>
       ((((byte)iVar4 & 7) - (char)uVar5) * '\x04' & 0x1f) & 0xf) == 0) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  }
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (param_2 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x50))
              (*(longlong **)(param_1 + 0x90),param_2,param_3);
  }
  return;
}



// FUNCTION 141a0b300 FUN_141a0b300 body=1940 status=ok
// SIG undefined FUN_141a0b300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a0b300(longlong *param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined *puVar13;
  short *psVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 auStack_d8 [32];
  int local_b8;
  char local_b4;
  undefined2 *local_b0;
  ulonglong local_a8;
  int local_a0;
  longlong *local_98;
  undefined2 *local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b4 = param_3;
  local_98 = param_1;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  plVar19 = param_1 + 5;
  FUN_141661e90(param_2,plVar19);
  FUN_141661e90(param_2,param_1 + 10);
  FUN_1419db9e0(param_2,param_1 + 0xd);
  FUN_1419db920(param_2,param_1 + 0xe);
  plVar12 = param_1 + 0xf;
  if (param_2[0xe] != 0) {
    plVar12 = (longlong *)&DAT_1469f5b28;
  }
  FUN_141661e90(param_2,plVar12);
  FUN_1419db7f0(param_2,param_1 + 0x12);
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (0x18 < iVar5) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x13,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x13,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x13) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  puVar13 = (undefined *)((longlong)param_1 + 0x9c);
  if (param_2[0xe] != 0) {
    puVar13 = &DAT_1469f5b28;
  }
  FUN_141661e90(param_2,puVar13);
  puVar15 = (uint *)(param_1 + 0x16);
  FUN_1419dd610(param_2,puVar15);
  plVar12 = (longlong *)param_2[1];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_b8 = (int)param_1[4];
    if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_b8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_b8,4);
      }
    }
    else {
      local_b8 = *(int *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    uVar16 = 0;
    uVar10 = uVar16;
    if ((int)param_1[4] < 1) goto LAB_141a0b7e3;
    do {
      psVar14 = *(short **)(*(longlong *)(param_1[1] + uVar10) + 8);
      local_b0 = (undefined2 *)0x0;
      local_a8 = 0;
      if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
        lVar6 = -1;
        do {
          lVar7 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (psVar14[lVar7] != 0);
        uVar18 = (int)lVar6 + 1;
        local_a8 = (ulonglong)uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
        }
        FGenericPlatformString::Memcpy(local_b0,psVar14,(longlong)(int)uVar18 * 2);
      }
      iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0148);
      if (iVar5 < 2) {
        FUN_14158ce90(param_2,&local_b0);
      }
      else {
        puVar11 = &DAT_143f3eda8;
        if ((int)local_a8 != 0) {
          puVar11 = local_b0;
        }
        FName::FName(&local_98,puVar11,1);
        (**(code **)(*param_2 + 0x40))(param_2,&local_98);
      }
      puVar11 = *(undefined2 **)param_2[1];
      lVar6 = *(longlong *)(uVar10 + param_1[3]);
      if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar11 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,lVar6 + 4,2);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,lVar6 + 4,2);
        }
      }
      else {
        *(undefined2 *)(lVar6 + 4) = *puVar11;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
      }
      (**(code **)(*param_2 + 8))(param_2);
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar18 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar18;
      uVar10 = uVar10 + 8;
    } while ((int)uVar18 < (int)param_1[4]);
  }
  else {
    if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_b8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_b8,4);
      }
    }
    else {
      local_b8 = *(int *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    plVar12 = param_1 + 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) != local_b8) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar12,local_b8);
    }
    plVar19 = param_1 + 3;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) != local_b8) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar19,local_b8);
    }
    local_a0 = 0;
    plVar17 = param_1;
    if (0 < local_b8) {
      do {
        iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0148);
        if (iVar5 < 2) {
          local_90 = (undefined2 *)0x0;
          local_88 = 0;
          FUN_14158ce90(param_2,&local_90);
          puVar11 = &DAT_143f3eda8;
          if ((int)local_88 != 0) {
            puVar11 = local_90;
          }
          lVar6 = FindUniformBufferStructByName(puVar11);
          if (local_90 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          local_b0 = (undefined2 *)0x0;
          (**(code **)(*param_2 + 0x40))(param_2,&local_b0);
          lVar6 = FindUniformBufferStructByFName(local_b0);
        }
        lVar7 = (**(code **)(lVar6 + 0x18))();
        puVar11 = *(undefined2 **)param_2[1];
        if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar11 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,lVar7 + 4,2);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,lVar7 + 4,2);
          }
        }
        else {
          *(undefined2 *)(lVar7 + 4) = *puVar11;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
        }
        (**(code **)(*param_2 + 8))(param_2,lVar7 + 6);
        iVar5 = (int)param_1[2];
        *(int *)(param_1 + 2) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0x14) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar5);
        }
        *(longlong *)(*plVar12 + (longlong)iVar5 * 8) = lVar6;
        iVar5 = (int)param_1[4];
        *(int *)(param_1 + 4) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19,iVar5);
        }
        *(longlong *)(*plVar19 + (longlong)iVar5 * 8) = lVar7;
        local_a0 = local_a0 + 1;
        plVar17 = local_98;
      } while (local_a0 < local_b8);
    }
    *(undefined4 *)((longlong)plVar17 + 0xbc) = 0x335b43ab;
    param_1 = plVar17;
  }
  plVar19 = param_1 + 5;
  puVar15 = (uint *)(param_1 + 0x16);
LAB_141a0b7e3:
  puVar9 = (undefined8 *)0x0;
  bVar1 = *(byte *)(param_2 + 5);
  uVar10 = (ulonglong)bVar1;
  if (local_b4 == '\0') {
    if ((bVar1 & 1) != 0) {
      if (*(code **)(param_1[0x12] + 0x40) == AK::MemoryMgr::StartProfileThreadUsage) {
        local_68 = 0;
        puVar8 = puVar9;
      }
      else {
        local_68 = *(longlong *)(param_1[0x12] + 0x10);
        puVar8 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x13);
      }
      local_80 = *puVar15;
      local_7c = (undefined4)*plVar19;
      uStack_78 = *(undefined4 *)((longlong)plVar19 + 4);
      uStack_74 = (undefined4)plVar19[1];
      uStack_70 = *(undefined4 *)((longlong)plVar19 + 0xc);
      local_6c = (int)plVar19[2];
      uVar10 = (ulonglong)(uint)(DAT_1464c0af8 - DAT_1464c0b24);
      local_60 = 0;
      local_58 = 0;
      local_50 = (int)puVar8;
      if (DAT_1464c0af8 - DAT_1464c0b24 != 0) {
        iVar5 = FCrc::MemCrc_DEPRECATED(&local_7c,0x14);
        puVar13 = DAT_1464c0b30;
        if (DAT_1464c0b30 == (undefined *)0x0) {
          puVar13 = &DAT_1464c0b28;
        }
        uVar10 = (ulonglong)
                 *(uint *)(puVar13 + ((longlong)DAT_1464c0b38 - 1U & (longlong)iVar5) * 4);
        if (*(uint *)(puVar13 + ((longlong)DAT_1464c0b38 - 1U & (longlong)iVar5) * 4) != 0xffffffff)
        {
          do {
            iVar5 = (int)uVar10;
            lVar6 = DAT_1464c0af0 + (longlong)iVar5 * 0x48;
            uVar18 = *(uint *)(DAT_1464c0af0 + (longlong)iVar5 * 0x48);
            if ((((((uVar18 & 7) == (local_80 & 7)) && (((local_80 ^ uVar18) & 0xf8) == 0)) &&
                 (*(longlong *)(lVar6 + 4) == CONCAT44(uStack_78,local_7c))) &&
                ((*(longlong *)(lVar6 + 0xc) == CONCAT44(uStack_70,uStack_74) &&
                 (*(int *)(lVar6 + 0x14) == local_6c)))) && (*(int *)(lVar6 + 0x30) == local_50)) {
              psVar14 = *(short **)(lVar6 + 0x18);
              if ((psVar14 != (short *)0x0) || (local_68 != 0)) {
                lVar7 = local_68 - (longlong)psVar14;
                do {
                  sVar2 = *psVar14;
                  sVar3 = *(short *)((longlong)psVar14 + lVar7);
                  if (sVar2 != sVar3) break;
                  psVar14 = psVar14 + 1;
                } while (sVar3 != 0);
                if (sVar2 != sVar3) goto LAB_141a0ba1c;
              }
              if ((iVar5 != -1) && (lVar6 != 0)) {
                puVar9 = *(undefined8 **)(lVar6 + 0x38);
              }
              break;
            }
LAB_141a0ba1c:
            uVar10 = (ulonglong)*(uint *)(lVar6 + 0x40);
          } while (*(uint *)(lVar6 + 0x40) != 0xffffffff);
        }
      }
      lVar6 = param_1[9];
      param_1[9] = (longlong)puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        *(int *)((longlong)puVar9 + 0xac) = *(int *)((longlong)puVar9 + 0xac) + 1;
      }
      if (lVar6 != 0) {
        uVar10 = FShaderResource::Release();
      }
      if (local_60 != 0) {
        uVar10 = FMemory::Free();
      }
    }
  }
  else {
    if ((bVar1 & 2) != 0) {
      FUN_141a0af10(param_1[9],param_2);
      uVar10 = (ulonglong)*(byte *)(param_2 + 5);
    }
    if ((uVar10 & 1) != 0) {
      puVar8 = (undefined8 *)operator_new(0xb8);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = 4;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = &PTR__scalar_deleting_destructor__144d8df80;
        puVar8[6] = &PTR_LAB_144d8dfc0;
        *(undefined1 *)(puVar8 + 5) = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        *(undefined4 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x84) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x8c) = 0;
        *(undefined4 *)((longlong)puVar8 + 0x94) = 0;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        *(undefined4 *)(puVar8 + 0x16) = 0xbd9922df;
        *(undefined1 *)((longlong)puVar8 + 0xb4) = 0;
        puVar9 = puVar8;
      }
      param_1[8] = (longlong)puVar9;
      uVar10 = FUN_141a0af10(puVar9,param_2);
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 141a0baa0 FUN_141a0baa0 body=3676 status=ok
// SIG undefined FUN_141a0baa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a0baa0(longlong param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  char local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6 [2];
  int local_2a4;
  int local_2a0;
  int local_29c;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  ulonglong local_280;
  longlong *local_278;
  longlong local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint uStack_240;
  int iStack_23c;
  uint local_238;
  int iStack_234;
  longlong local_230;
  longlong *local_228;
  undefined8 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 uStack_208;
  uint *puStack_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  int iStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_128;
  uint local_120;
  undefined1 local_118 [24];
  longlong local_100;
  longlong local_f0;
  longlong local_c8;
  longlong local_b0;
  longlong local_a0;
  longlong local_78;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  uVar14 = 0;
  local_2a8 = param_4;
  local_2a7 = param_3;
  local_230 = param_1;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_29c = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c);
    plVar24 = (longlong *)param_2[1];
    if ((int *)plVar24[1] < (int *)*plVar24 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_29c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_29c,4);
      }
    }
    else {
      local_29c = *(int *)*plVar24;
      *plVar24 = *plVar24 + 4;
    }
    plVar24 = (longlong *)(param_1 + 0x38);
    local_290 = (longlong *)0x0;
    local_288 = 0;
    uVar18 = uVar14;
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_290);
      uVar18 = local_288 & 0xffffffff;
    }
    uVar17 = (uint)uVar18;
    iVar22 = *(int *)(param_1 + 0x60);
    puStack_200 = (uint *)(param_1 + 0x48);
    local_258 = (longlong *)0x100000000;
    local_248._4_4_ = 0;
    uStack_240 = 0;
    if (iVar22 != 0) {
      puVar21 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar21 = puStack_200;
      }
      uVar10 = *puVar21;
      uVar20 = uVar14;
      while (uVar10 == 0) {
        iVar11 = (int)uVar14;
        uStack_240 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_240;
        uVar14 = (ulonglong)(iVar11 + 1U);
        uVar7 = (ulonglong)local_258 >> 0x20;
        local_258 = (longlong *)CONCAT44((int)uVar7,iVar11 + 1U);
        if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_141a0bc1f;
        uVar10 = puVar21[(longlong)iVar11 + 1];
      }
      uVar10 = -uVar10 & uVar10;
      iVar11 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      local_258 = (longlong *)CONCAT44(uVar10,SUB84(local_258,0));
      if (uVar10 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_248._4_4_ = (uStack_240 - iVar11) + 0x1f;
      if (iVar22 < local_248._4_4_) {
LAB_141a0bc1f:
        local_248._4_4_ = iVar22;
      }
    }
    uStack_1f8 = 0xffffffff;
    iStack_1f4 = local_248._4_4_;
    uStack_1f0 = uStack_240;
    iStack_1ec = iStack_23c;
    uStack_208 = local_258;
    uStack_250 = (longlong)local_258;
    local_238 = uStack_240;
    iStack_234 = iStack_23c;
    uStack_240 = 0xffffffff;
    iStack_23c = local_248._4_4_;
    bVar3 = local_248._4_4_ < iVar22;
    plVar16 = local_290;
    local_258 = plVar24;
    local_210 = plVar24;
    local_248 = puStack_200;
    if (bVar3) {
      do {
        iVar22 = iStack_23c;
        iVar11 = (int)uVar18;
        uVar17 = iVar11 + 1;
        local_288 = CONCAT44(local_288._4_4_,uVar17);
        if (local_288._4_4_ < (int)uVar17) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_290,uVar18);
          plVar16 = local_290;
          uVar17 = (uint)local_288;
        }
        uVar18 = (ulonglong)uVar17;
        plVar23 = plVar16 + (longlong)iVar11 * 2;
        if (plVar23 != (longlong *)0x0) {
          puVar1 = (undefined4 *)((longlong)iVar22 * 0x20 + *local_258);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *(undefined4 *)plVar23 = *puVar1;
          *(undefined4 *)((longlong)plVar23 + 4) = uVar4;
          *(undefined4 *)(plVar23 + 1) = uVar5;
          *(undefined4 *)((longlong)plVar23 + 0xc) = uVar6;
        }
        uStack_240 = uStack_240 & ~uStack_250._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_250);
        param_3 = local_2a7;
      } while (iStack_23c < (int)local_248[6]);
    }
    AlgoImpl::
    IntroSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>
              (plVar16,(longlong)(int)uVar17,local_2a6[0],local_2a6);
    lVar19 = local_230;
    plVar25 = plVar16 + (longlong)(int)uVar17 * 2;
    plVar23 = plVar16;
    for (; plVar16 != plVar25; plVar16 = plVar16 + 2) {
      local_260 = (longlong *)*plVar16;
      local_258 = (longlong *)*plVar16;
      uStack_250 = plVar16[1];
      FUN_1419db7f0(param_2,&local_260);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar24,&local_280,&local_258);
      if ((int)local_280 == -1) {
        lVar15 = 0;
      }
      else {
        lVar15 = (longlong)(int)local_280 * 0x20 + *plVar24;
      }
      local_2b8 = param_3;
      FUN_141a0c900(lVar19,*(undefined8 *)(lVar15 + 0x10),param_2,param_4);
      plVar23 = local_290;
    }
    local_258 = (longlong *)0x0;
    uStack_250 = 0;
    FUN_1419f0970(local_230,&local_258,0);
    plVar24 = (longlong *)param_2[1];
    lVar19 = (longlong)(int)uStack_250;
    local_2a0 = (int)uStack_250;
    if ((int *)plVar24[1] < (int *)*plVar24 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_2a0,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_2a0,4);
      }
    }
    else {
      local_2a0 = *(int *)*plVar24;
      *plVar24 = *plVar24 + 4;
    }
    plVar24 = local_258;
    AlgoImpl::
    IntroSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>
              (local_258,lVar19,local_2a6[0],local_2a6);
    local_278 = plVar24;
    local_228 = plVar24 + lVar19;
    plVar16 = plVar24;
    if (plVar24 != plVar24 + lVar19) {
      do {
        plVar16 = (longlong *)*plVar24;
        puVar26 = (undefined8 *)*plVar16;
        local_278 = plVar24;
        if ((*(byte *)(param_2 + 5) & 2) == 0) {
          if ((*(byte *)(param_2 + 5) & 1) != 0) {
            local_270 = 0;
            (**(code **)(*param_2 + 0x40))(param_2,&local_270);
            for (puVar13 = DAT_1469f5de0; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)*puVar13) {
              puVar26 = (undefined8 *)puVar13[2];
              if (puVar26[1] == local_270) goto LAB_141a0beb5;
            }
            puVar26 = (undefined8 *)0x0;
          }
        }
        else {
          if (puVar26 == (undefined8 *)0x0) {
            local_268 = (longlong *)0x0;
            pplVar12 = &local_268;
          }
          else {
            pplVar12 = (longlong **)FName::FName(local_218,*puVar26,1);
          }
          local_260 = *pplVar12;
          (**(code **)(*param_2 + 0x40))(param_2,&local_260);
        }
LAB_141a0beb5:
        plVar23 = (longlong *)param_2[1];
        local_2a4 = *(int *)(puVar26 + 3);
        if ((int *)plVar23[1] < (int *)*plVar23 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_2a4,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_2a4,4);
          }
        }
        else {
          local_2a4 = *(int *)*plVar23;
          *plVar23 = *plVar23 + 4;
        }
        cVar9 = local_2a8;
        iVar22 = 0;
        if (0 < local_2a4) {
          lVar19 = 0;
          do {
            iVar11 = *(int *)(*(longlong *)(puVar26[2] + lVar19) + 0x30);
            if (iVar11 == 0) {
              lVar15 = plVar16[1];
            }
            else if (iVar11 == 1) {
              lVar15 = plVar16[2];
            }
            else if (iVar11 == 2) {
              lVar15 = plVar16[3];
            }
            else if (iVar11 == 3) {
              lVar15 = plVar16[5];
            }
            else if (iVar11 == 4) {
              lVar15 = plVar16[4];
            }
            else {
              lVar15 = 0;
            }
            local_220 = *(undefined8 *)(lVar15 + 0x90);
            FUN_1419db7f0(param_2,&local_220);
            local_280 = (**(code **)(*param_2 + 0x90))(param_2);
            plVar24 = (longlong *)param_2[1];
            if ((ulonglong *)plVar24[1] < (ulonglong *)*plVar24 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_280,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_280,8);
              }
            }
            else {
              local_280 = *(ulonglong *)*plVar24;
              *plVar24 = *plVar24 + 8;
            }
            if (cVar9 != '\0') {
              local_1e8 = *(undefined8 *)(lVar15 + 0x50);
              uStack_1e0 = *(undefined8 *)(lVar15 + 0x58);
              local_1c8 = *(longlong *)(lVar15 + 0x70);
              lVar2 = *(longlong *)(lVar15 + 0x90);
              local_180 = lVar2 + 0xb0;
              local_1d8 = *(undefined4 *)(lVar15 + 0x60);
              local_1d0 = *(longlong *)(lVar15 + 0x68);
              uStack_1b0 = *(undefined4 *)(lVar15 + 0x88);
              local_1c0 = *(longlong *)(lVar15 + 0x78);
              uStack_1b8 = (undefined4)*(undefined8 *)(lVar15 + 0x80);
              uStack_1b4 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x80) >> 0x20);
              if (local_1c8 == 0) {
                local_1a8 = 0;
              }
              else {
                local_1a8 = local_1c8 + (ulonglong)(*(uint *)(lVar15 + 0xb0) & 7) * 0x28 + 0xc0;
              }
              local_198 = *(undefined4 *)(lVar15 + 0x98);
              uStack_194 = *(undefined4 *)(lVar15 + 0x9c);
              uStack_190 = *(undefined4 *)(lVar15 + 0xa0);
              uStack_18c = *(undefined4 *)(lVar15 + 0xa4);
              uStack_188 = *(undefined4 *)(lVar15 + 0xa8);
              local_184 = *(undefined4 *)(lVar15 + 0xac);
              local_178 = CONCAT44(local_178._4_4_,*(uint *)(lVar15 + 0xb0));
              local_1a0 = (undefined4)lVar2;
              uStack_19c = (undefined4)((ulonglong)lVar2 >> 0x20);
              FUN_1419d5e80(local_118,&local_1e8);
              FUN_1419e0690(param_2,local_118);
              if (local_60 != 0) {
                FMemory::Free();
              }
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_a0 != 0) {
                FMemory::Free();
              }
              if (local_b0 != 0) {
                FMemory::Free();
              }
              if (local_c8 != 0) {
                FMemory::Free();
              }
              if (local_f0 != 0) {
                FMemory::Free();
              }
              if (local_100 != 0) {
                FMemory::Free();
              }
            }
            FUN_141a0b300(lVar15,param_2,local_2a7);
            local_298 = (**(code **)(*param_2 + 0x90))(param_2);
            (**(code **)(*param_2 + 0xa8))(param_2,local_280);
            plVar24 = (longlong *)param_2[1];
            if ((undefined8 *)plVar24[1] < (undefined8 *)*plVar24 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_298,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_298,8);
              }
            }
            else {
              local_298 = *(undefined8 *)*plVar24;
              *plVar24 = *plVar24 + 8;
            }
            (**(code **)(*param_2 + 0xa8))(param_2,local_298);
            iVar22 = iVar22 + 1;
            lVar19 = lVar19 + 8;
            plVar24 = local_278;
          } while (iVar22 < local_2a4);
        }
        plVar24 = plVar24 + 1;
        plVar16 = local_258;
        plVar23 = local_290;
        local_278 = plVar24;
      } while (plVar24 != local_228);
    }
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
    if (plVar23 != (longlong *)0x0) {
      FMemory::Free(plVar23);
    }
  }
  lVar19 = local_230;
  cVar9 = local_2a8;
  iVar22 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined1 *)(local_230 + 9) = 0;
    plVar24 = (longlong *)param_2[1];
    local_2a4 = 0;
    if ((int *)plVar24[1] < (int *)*plVar24 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_2a4,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_2a4,4);
      }
    }
    else {
      local_2a4 = *(int *)*plVar24;
      *plVar24 = *plVar24 + 4;
    }
    plVar24 = (longlong *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x1c) < local_2a4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar24,local_2a4);
    }
    if (0 < local_2a4) {
      do {
        lVar15 = 0;
        local_278 = (longlong *)0x0;
        FUN_1419db7f0(param_2,&local_278);
        plVar16 = (longlong *)param_2[1];
        local_298 = 0;
        if ((undefined8 *)plVar16[1] < (undefined8 *)*plVar16 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_298,8);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_298,8);
          }
        }
        else {
          local_298 = *(undefined8 *)*plVar16;
          *plVar16 = *plVar16 + 8;
        }
        local_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        local_1c8 = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        local_1a8._0_4_ = 0;
        local_1a8._4_4_ = 0;
        local_1a0 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        local_178 = 0;
        local_168 = 0;
        local_15c = 0;
        local_154 = 0;
        local_14c = 0;
        local_140 = 0;
        local_128 = 0;
        local_1c0 = 0;
        local_120 = local_120 & 0xffffff06 | 6;
        uStack_1b8 = 0;
        local_198 = 0;
        uStack_194 = 0;
        uStack_188 = 0;
        local_180 = 0;
        local_170 = 0;
        local_148 = 0;
        local_138 = 0;
        local_130 = 0;
        if (cVar9 != '\0') {
          FUN_1419e0690(param_2,&local_1e8);
        }
        plVar16 = local_278;
        if (local_278 == (longlong *)0x0) {
LAB_141a0c3b4:
          (**(code **)(*param_2 + 0xa8))(param_2,local_298);
        }
        else {
          if (cVar9 != '\0') {
            cVar8 = FUN_1419fead0(&local_1e8);
            if (cVar8 == '\0') goto LAB_141a0c3b4;
          }
          lVar15 = (*(code *)plVar16[7])();
          FUN_141a0b300(lVar15,param_2,local_2a7);
        }
        if (local_130 != 0) {
          FMemory::Free();
        }
        if (local_148 != 0) {
          FMemory::Free();
        }
        if (local_170 != 0) {
          FMemory::Free();
        }
        if (local_180 != 0) {
          FMemory::Free();
        }
        if (CONCAT44(uStack_194,local_198) != 0) {
          FMemory::Free();
        }
        if (local_1c0 != 0) {
          FMemory::Free();
        }
        if (local_1d0 != 0) {
          FMemory::Free();
        }
        if (lVar15 != 0) {
          iVar11 = *(int *)(lVar19 + 0x18);
          *(int *)(lVar19 + 0x18) = iVar11 + 1;
          if (*(int *)(lVar19 + 0x1c) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar24,iVar11);
          }
          *(longlong *)(*plVar24 + (longlong)iVar11 * 8) = lVar15;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < local_2a4);
    }
    plVar24 = (longlong *)param_2[1];
    local_29c = 0;
    if ((int *)plVar24[1] < (int *)*plVar24 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_29c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_29c,4);
      }
    }
    else {
      local_29c = *(int *)*plVar24;
      *plVar24 = *plVar24 + 4;
    }
    local_280 = local_280 & 0xffffffff00000000;
    if (0 < local_29c) {
      do {
        plVar16 = (longlong *)0x0;
        local_268 = (longlong *)0x0;
        plVar24 = plVar16;
        if ((*(byte *)(param_2 + 5) & 2) == 0) {
          if ((*(byte *)(param_2 + 5) & 1) != 0) {
            local_270 = 0;
            (**(code **)(*param_2 + 0x40))(param_2,&local_270);
            for (puVar26 = DAT_1469f5de0; puVar26 != (undefined8 *)0x0;
                puVar26 = (undefined8 *)*puVar26) {
              plVar24 = (longlong *)puVar26[2];
              local_268 = plVar24;
              if (plVar24[1] == local_270) goto LAB_141a0c550;
            }
            plVar24 = (longlong *)0x0;
            local_268 = (longlong *)0x0;
          }
        }
        else {
          local_278 = (longlong *)0x0;
          local_228 = (longlong *)0x0;
          (**(code **)(*param_2 + 0x40))(param_2,&local_228);
        }
LAB_141a0c550:
        plVar23 = (longlong *)param_2[1];
        local_2a0 = 0;
        if ((int *)plVar23[1] < (int *)*plVar23 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_2a0,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_2a0,4);
          }
        }
        else {
          local_2a0 = *(int *)*plVar23;
          *plVar23 = *plVar23 + 4;
        }
        local_290 = (longlong *)0x0;
        local_288 = local_288 & 0xffffffff;
        plVar25 = plVar16;
        plVar23 = plVar16;
        plVar27 = plVar16;
        if (0 < local_2a0) {
          do {
            lVar19 = 0;
            local_260 = (longlong *)0x0;
            FUN_1419db7f0(param_2,&local_260);
            plVar24 = (longlong *)param_2[1];
            local_298 = 0;
            if ((undefined8 *)plVar24[1] < (undefined8 *)*plVar24 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_298,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_298,8);
              }
            }
            else {
              local_298 = *(undefined8 *)*plVar24;
              *plVar24 = *plVar24 + 8;
            }
            local_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1d8 = 0;
            local_1c8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            local_1a8._0_4_ = 0;
            local_1a8._4_4_ = 0;
            local_1a0 = 0;
            uStack_190 = 0;
            uStack_18c = 0;
            local_178 = 0;
            local_168 = 0;
            local_15c = 0;
            local_154 = 0;
            local_14c = 0;
            local_140 = 0;
            local_128 = 0;
            local_1c0 = 0;
            local_120 = local_120 & 0xffffff06 | 6;
            uStack_1b8 = 0;
            local_198 = 0;
            uStack_194 = 0;
            uStack_188 = 0;
            local_180 = 0;
            local_170 = 0;
            local_148 = 0;
            local_138 = 0;
            local_130 = 0;
            if (local_2a8 != '\0') {
              FUN_1419e0690(param_2,&local_1e8);
            }
            plVar24 = local_260;
            if (local_260 == (longlong *)0x0) {
LAB_141a0c6fe:
              (**(code **)(*param_2 + 0xa8))(param_2,local_298);
            }
            else {
              if (local_2a8 != '\0') {
                cVar9 = FUN_1419fead0(&local_1e8);
                if (cVar9 == '\0') goto LAB_141a0c6fe;
              }
              lVar19 = (*(code *)plVar24[7])();
              FUN_141a0b300(lVar19,param_2,local_2a7);
            }
            if (local_130 != 0) {
              FMemory::Free();
            }
            if (local_148 != 0) {
              FMemory::Free();
            }
            if (local_170 != 0) {
              FMemory::Free();
            }
            if (local_180 != 0) {
              FMemory::Free();
            }
            if (CONCAT44(uStack_194,local_198) != 0) {
              FMemory::Free();
            }
            if (local_1c0 != 0) {
              FMemory::Free();
            }
            if (local_1d0 != 0) {
              FMemory::Free();
            }
            if (lVar19 != 0) {
              *(int *)(lVar19 + 0xb4) = *(int *)(lVar19 + 0xb4) + 1;
              iVar22 = (int)plVar23;
              uVar17 = iVar22 + 1;
              local_288 = CONCAT44(local_288._4_4_,uVar17);
              if ((int)plVar16 < (int)uVar17) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_290,plVar23);
                plVar16 = (longlong *)(local_288 >> 0x20);
                plVar25 = local_290;
                uVar17 = (uint)local_288;
              }
              plVar23 = (longlong *)(ulonglong)uVar17;
              plVar25[iVar22] = lVar19;
            }
            uVar17 = (int)plVar27 + 1;
            plVar24 = local_268;
            plVar27 = (longlong *)(ulonglong)uVar17;
          } while ((int)uVar17 < local_2a0);
        }
        puVar26 = (undefined8 *)0x0;
        if ((plVar24 != (longlong *)0x0) && ((int)plVar23 == (int)plVar24[3])) {
          puVar13 = (undefined8 *)operator_new(0x18);
          if (puVar13 != (undefined8 *)0x0) {
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar26 = puVar13;
          }
          *puVar26 = plVar24;
          pplVar12 = (longlong **)(puVar26 + 1);
          if (pplVar12 != &local_290) {
            iVar22 = *(int *)(puVar26 + 2);
            plVar24 = *pplVar12;
            if (iVar22 != 0) {
              do {
                if (*plVar24 != 0) {
                  FShader::Release();
                }
                plVar24 = plVar24 + 1;
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              plVar24 = *pplVar12;
            }
            if (plVar24 != (longlong *)0x0) {
              FMemory::Free(plVar24);
            }
            uVar4 = local_288._4_4_;
            *pplVar12 = plVar25;
            plVar25 = (longlong *)0x0;
            *(int *)(puVar26 + 2) = (int)plVar23;
            plVar23 = (longlong *)0x0;
            local_288 = local_288 & 0xffffffff;
            *(undefined4 *)((longlong)puVar26 + 0x14) = uVar4;
          }
          lVar19 = local_230;
          iVar22 = *(int *)(local_230 + 0x28);
          *(int *)(local_230 + 0x28) = iVar22 + 1;
          if (*(int *)(local_230 + 0x2c) < iVar22 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (local_230 + 0x20,iVar22);
          }
          *(undefined8 **)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar22 * 8) = puVar26;
        }
        uVar17 = (uint)plVar23;
        plVar24 = plVar25;
        while (uVar17 != 0) {
          if (*plVar24 != 0) {
            FShader::Release();
          }
          plVar24 = plVar24 + 1;
          uVar17 = (int)plVar23 - 1;
          plVar23 = (longlong *)(ulonglong)uVar17;
        }
        if (plVar25 != (longlong *)0x0) {
          FMemory::Free(plVar25);
        }
        iVar22 = (int)local_280 + 1;
        local_280 = CONCAT44(local_280._4_4_,iVar22);
      } while (iVar22 < local_29c);
    }
  }
  return;
}



// FUNCTION 141a0c900 FUN_141a0c900 body=494 status=ok
// SIG undefined FUN_141a0c900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a0c900(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [24];
  longlong local_150;
  longlong local_140;
  longlong local_118;
  longlong local_100;
  longlong local_f0;
  longlong local_c8;
  longlong local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = (**(code **)(*param_3 + 0x90))(param_3);
  plVar1 = (longlong *)param_3[1];
  if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,&local_178,8);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_178,8);
    }
  }
  else {
    local_178 = *(undefined8 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  if (param_4 != '\0') {
    uVar2 = FUN_1419ef3f0(param_2,local_98);
    FUN_1419d5e80(local_168,uVar2);
    FUN_1419e0690(param_3,local_168);
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_150 != 0) {
      FMemory::Free();
    }
  }
  FUN_141a0b300(param_2,param_3,param_5);
  local_170 = (**(code **)(*param_3 + 0x90))(param_3);
  (**(code **)(*param_3 + 0xa8))(param_3,local_178);
  plVar1 = (longlong *)param_3[1];
  if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,&local_170,8);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_170,8);
    }
  }
  else {
    local_170 = *(undefined8 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  (**(code **)(*param_3 + 0xa8))(param_3,local_170);
  return;
}



// FUNCTION 141a0caf0 FUN_141a0caf0 body=494 status=ok
// SIG undefined FUN_141a0caf0(void)

void FUN_141a0caf0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar9 = (int)param_2[5];
  puStack_30 = (uint *)(param_2 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar9 != 0) {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = puStack_30;
    }
    uVar1 = *puVar7;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar1 == 0) {
      lVar6 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar5 = local_68 + 1;
      bVar3 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar5;
      if (bVar3) goto LAB_141a0cbaf;
      uVar1 = puVar7[lVar6 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_58._4_4_ = (uStack_50 - iVar5) + 0x1f;
    if (iVar9 < local_58._4_4_) {
LAB_141a0cbaf:
      local_58._4_4_ = iVar9;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar9;
  local_40 = param_2;
  local_58 = puStack_30;
  if (bVar3) {
    do {
      iVar9 = iStack_4c;
      plVar4 = (longlong *)FUniformBufferStruct::GetStructList();
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != (longlong *)0x0) {
        do {
          lVar6 = plVar4[2];
          if (*(longlong *)((longlong)iVar9 * 0x20 + *param_2) == *(longlong *)(lVar6 + 0x10)) {
            (**(code **)(*param_1 + 0x50))(param_1,0,(longlong)*(int *)(lVar6 + 0x68));
            iVar9 = 0;
            if (0 < *(int *)(lVar6 + 0x68)) {
              lVar8 = 0;
              do {
                lVar2 = *(longlong *)(lVar6 + 0x60);
                (**(code **)(*param_1 + 0x50))
                          (param_1,0,
                           (longlong)
                           (*(int *)(lVar2 + 0x20 + lVar8) * *(int *)(lVar2 + 0x1c + lVar8)));
                (**(code **)(*param_1 + 0x50))(param_1,0,(longlong)*(int *)(lVar2 + 0x14 + lVar8));
                iVar9 = iVar9 + 1;
                lVar8 = lVar8 + 0x30;
              } while (iVar9 < *(int *)(lVar6 + 0x68));
            }
            break;
          }
          plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)0x0);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 141a0cce0 FUN_141a0cce0 body=560 status=ok
// SIG undefined FUN_141a0cce0(void)

void FUN_141a0cce0(int param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (DAT_1469f59c8 != 0) {
    *(int *)(DAT_1469f59c8 + 0xbc) = param_1;
    lVar9 = DAT_1469f5c88;
    lVar8 = DAT_1469f5ca0;
    if ((param_1 != 1) && (lVar8 = DAT_1469f5c88, param_1 == 2)) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      lVar8 = 4;
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      *(undefined4 *)(DAT_1469f59c8 + 0xb4) = *(undefined4 *)(lVar7 + lVar9);
      uVar4 = FUN_141a00610();
      plVar6 = (longlong *)FTaskGraphInterface::Get();
      uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar9 = DAT_1469f5cb8;
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      lVar1 = DAT_1469f5d30;
      fVar11 = *(float *)(lVar7 + lVar9);
      fVar12 = (float)uVar5 * fVar11;
      uVar10 = -((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
      if ((int)uVar10 < 5) {
        uVar10 = 4;
      }
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
        lVar8 = 0;
      }
      if (*(int *)(lVar8 + lVar1) == 1) {
        fVar11 = (float)((ulonglong)uVar4 / (ulonglong)uVar5) * fVar11;
        uVar10 = -((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
        if (uVar10 <= *(uint *)(DAT_1469f59c8 + 0xb4)) {
          uVar10 = *(uint *)(DAT_1469f59c8 + 0xb4);
        }
        if (0xfff < uVar10) {
          uVar10 = 0x1000;
        }
      }
      *(uint *)(DAT_1469f59c8 + 0xb4) = uVar10;
      *(uint *)(DAT_1469f59c8 + 0xb8) = uVar10;
      return;
    }
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar9 = 4;
    }
    else {
      lVar9 = 0;
    }
    *(undefined4 *)(DAT_1469f59c8 + 0xb4) = *(undefined4 *)(lVar9 + lVar8);
  }
  return;
}



// FUNCTION 141a0cf10 FUN_141a0cf10 body=219 status=ok
// SIG undefined FUN_141a0cf10(void)

void FUN_141a0cf10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x640)) {
    plVar6 = (longlong *)(param_1 + 0x340);
    do {
      uVar1 = *(undefined4 *)((longlong)plVar6 + 0xc);
      uVar2 = *(undefined8 *)(*plVar6 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar3 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar3 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      plVar6 = plVar6 + 3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar3;
      *(undefined8 **)(param_2 + 8) = puVar3 + 1;
      puVar3[1] = 0;
      *(int *)(puVar3 + 2) = iVar5;
      iVar5 = iVar5 + 1;
      *puVar3 = &PTR_LAB_143f489e0;
      puVar3[3] = uVar2;
      *(undefined4 *)(puVar3 + 4) = uVar1;
    } while (iVar5 < *(int *)(param_1 + 0x640));
  }
  return;
}



// FUNCTION 141a0cff0 FUN_141a0cff0 body=516 status=ok
// SIG undefined FUN_141a0cff0(void)

void FUN_141a0cff0(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if ((((*(char *)(param_1 + 0x339) == '\0') || (param_2 < 2)) ||
      ((DAT_146ab62cc < 0x1e && ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) != 0)))) ||
     (((DAT_146ab62cc < 0x1c && ((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) &&
      (uVar5 = RHIGetShaderLanguageVersion(), uVar5 < 2)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x330)) {
    puVar9 = (undefined4 *)(param_1 + 0x3c);
    do {
      if (((*(byte *)(puVar9 + 1) & 4) == 0) || (!bVar4)) {
        lVar2 = *(longlong *)(puVar9 + -3);
        if (lVar2 == 0) {
          puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
          if (*(undefined8 **)(param_3 + 0x38) < puVar6) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar6 = puVar7 + 5;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar6;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar7;
          *(undefined8 **)(param_3 + 8) = puVar7 + 1;
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_143f489e0;
          puVar7[3] = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
        }
        else {
          if (((*(byte *)(puVar9 + 1) & 2) != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
            puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar6 = puVar7 + 5;
            if (*(undefined8 **)(param_3 + 0x38) < puVar6) {
              FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
              puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar6 = puVar7 + 5;
            }
            *(undefined8 **)(param_3 + 0x30) = puVar6;
            *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
            **(undefined8 **)(param_3 + 8) = puVar7;
            *(undefined8 **)(param_3 + 8) = puVar7 + 1;
            puVar7[1] = 0;
            *puVar7 = &PTR_LAB_143f489e0;
            *(int *)(puVar7 + 2) = iVar8;
            puVar7[3] = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
            goto LAB_141a0d1c6;
          }
          uVar3 = *(undefined8 *)(lVar2 + 0x30);
          uVar1 = *puVar9;
          puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
          if (*(undefined8 **)(param_3 + 0x38) < puVar6) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar6 = puVar7 + 5;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar6;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar7;
          *(undefined8 **)(param_3 + 8) = puVar7 + 1;
          puVar7[1] = 0;
          puVar7[3] = uVar3;
          *(undefined4 *)(puVar7 + 4) = uVar1;
          *puVar7 = &PTR_LAB_143f489e0;
        }
        *(int *)(puVar7 + 2) = iVar8;
      }
LAB_141a0d1c6:
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 6;
    } while (iVar8 < *(int *)(param_1 + 0x330));
  }
  return;
}



// FUNCTION 141a0d200 FUN_141a0d200 body=611 status=ok
// SIG undefined FUN_141a0d200(void)

void FUN_141a0d200(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x50) = 1;
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
          goto LAB_141a0d3b7;
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
LAB_141a0d3b7:
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



// FUNCTION 141a0d470 FUN_141a0d470 body=11267 status=ok
// SIG undefined FUN_141a0d470(void)

void FUN_141a0d470(uint param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *_Dst;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  longlong *plVar21;
  void **ppvVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  undefined2 *puVar27;
  int *piVar28;
  bool bVar29;
  uint local_res8 [2];
  int *local_res10;
  char local_res18 [8];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  void *local_48 [2];
  
  lVar23 = 0;
  local_res10 = (int *)((ulonglong)local_res10 & 0xffffffff00000000);
  iVar14 = (int)param_2[1];
  iVar10 = (6 - (uint)(iVar14 != 0)) + iVar14;
  *(int *)(param_2 + 1) = iVar10;
  local_res8[0] = param_1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
  }
  puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
  *puVar1 = 0x66006f0054005f;
  *(undefined2 *)(puVar1 + 1) = 0x44;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined2 *)((longlong)puVar1 + 10) = 0;
  piVar28 = (int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x38);
  local_res10 = piVar28;
  if ((*piVar28 < DAT_1469f5e20) && (_Init_thread_header(&DAT_1469f5e20), DAT_1469f5e20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FullQualitySphericalHarmonics")
    ;
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e18 = lVar25;
    _Init_thread_footer(&DAT_1469f5e20);
  }
  lVar25 = DAT_1469f5e18;
  if (DAT_1469f5e18 != 0) {
    cVar9 = FUN_1415ad720();
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0d55d;
    }
    else {
LAB_141a0d55d:
      lVar17 = lVar23;
    }
    if (*(int *)(lVar17 + lVar25) == 0) {
      iVar14 = (int)param_2[1];
      iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar1 = 0x77006f004c005f;
      *(undefined4 *)(puVar1 + 1) = 0x480053;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    }
  }
  if ((*piVar28 < DAT_1469f5e30) && (_Init_thread_header(&DAT_1469f5e30), DAT_1469f5e30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"Compat.UseDXT5NormalMaps");
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e28 = lVar25;
    _Init_thread_footer(&DAT_1469f5e30);
  }
  lVar25 = DAT_1469f5e28;
  if (DAT_1469f5e28 == 0) {
LAB_141a0d610:
    pwVar26 = L"_BC5N";
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0d600;
    }
    else {
LAB_141a0d600:
      lVar17 = lVar23;
    }
    pwVar26 = L"_DXTN";
    if (*(int *)(lVar25 + lVar17) == 0) goto LAB_141a0d610;
  }
  lVar25 = -1;
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
  }
  if ((*piVar28 < DAT_1469f5e40) && (_Init_thread_header(&DAT_1469f5e40), DAT_1469f5e40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ClearCoatNormal");
    lVar23 = 0;
    if (plVar21 != (longlong *)0x0) {
      lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e38 = lVar23;
    _Init_thread_footer(&DAT_1469f5e40);
  }
  lVar23 = DAT_1469f5e38;
  if (DAT_1469f5e38 == 0) {
LAB_141a0d6e4:
    pwVar26 = L"_NoCCBN";
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar9 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar11 = GetCurrentThreadId(), lVar17 = 4, DVar11 == DAT_1468c21c0)) {
      lVar17 = 0;
    }
    pwVar26 = L"_CCBN";
    if (*(int *)(lVar23 + lVar17) == 0) goto LAB_141a0d6e4;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
  }
  if ((*piVar28 < DAT_1469f5e50) && (_Init_thread_header(&DAT_1469f5e50), DAT_1469f5e50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.IrisNormal");
    lVar23 = 0;
    if (plVar21 != (longlong *)0x0) {
      lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e48 = lVar23;
    _Init_thread_footer(&DAT_1469f5e50);
  }
  lVar23 = DAT_1469f5e48;
  if (DAT_1469f5e48 == 0) {
LAB_141a0d7b3:
    pwVar26 = L"_NoIris";
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0d7a3;
    }
    else {
LAB_141a0d7a3:
      lVar17 = 0;
    }
    pwVar26 = L"_Iris";
    if (*(int *)(lVar23 + lVar17) == 0) goto LAB_141a0d7b3;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
  }
  if ((*piVar28 < DAT_1469f5e60) && (_Init_thread_header(&DAT_1469f5e60), DAT_1469f5e60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.CompileShadersForDevelopment");
    lVar23 = 0;
    if (plVar21 != (longlong *)0x0) {
      lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e58 = lVar23;
    _Init_thread_footer(&DAT_1469f5e60);
  }
  lVar23 = DAT_1469f5e58;
  if (DAT_1469f5e58 == 0) {
LAB_141a0d883:
    pwVar26 = L"_NoDEV";
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0d873;
    }
    else {
LAB_141a0d873:
      lVar17 = 0;
    }
    pwVar26 = L"_DEV";
    if (*(int *)(lVar23 + lVar17) == 0) goto LAB_141a0d883;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
  }
  lVar23 = 0;
  if ((*piVar28 < DAT_1469f5e70) && (_Init_thread_header(&DAT_1469f5e70), DAT_1469f5e70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ForceDebugViewModes");
    lVar17 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e68 = lVar17;
    _Init_thread_footer(&DAT_1469f5e70);
  }
  lVar17 = DAT_1469f5e68;
  if (DAT_1469f5e68 != 0) {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar16 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0d947;
    }
    else {
LAB_141a0d947:
      lVar16 = lVar23;
    }
    if (*(int *)(lVar17 + lVar16) == 1) {
      iVar14 = (int)param_2[1];
      iVar10 = (5 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      lVar17 = *param_2;
      lVar16 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
      *(undefined8 *)(lVar17 + lVar16 * 2) = 0x4700420044005f;
      *(undefined2 *)(lVar17 + 8 + lVar16 * 2) = 0;
    }
    else if (*(int *)(lVar17 + lVar16) == 2) {
      iVar14 = (int)param_2[1];
      iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar1 = 0x44006f004e005f;
      *(undefined4 *)(puVar1 + 1) = 0x470042;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    }
  }
  if ((*piVar28 < DAT_1469f5e80) && (_Init_thread_header(&DAT_1469f5e80), DAT_1469f5e80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar17 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e78 = lVar17;
    _Init_thread_footer(&DAT_1469f5e80);
  }
  lVar17 = DAT_1469f5e78;
  if (DAT_1469f5e78 == 0) {
    bVar29 = true;
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar16 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0da3d;
    }
    else {
LAB_141a0da3d:
      lVar16 = lVar23;
    }
    bVar29 = *(int *)(lVar17 + lVar16) != 0;
  }
  pwVar26 = L"_NoSL";
  lVar23 = -1;
  if (bVar29) {
    pwVar26 = L"_SL";
  }
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar14 + iVar10;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
  }
  piVar19 = (int *)0x0;
  if ((*piVar28 < DAT_1469f5e90) && (_Init_thread_header(), DAT_1469f5e90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BasePassOutputsVelocity");
    piVar20 = piVar19;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e88 = piVar20;
    _Init_thread_footer();
  }
  if ((DAT_1469f5e88 != (int *)0x0) && (*DAT_1469f5e88 != 0)) {
    iVar14 = (int)param_2[1];
    iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar3 = 0x47005f;
    *(undefined2 *)(puVar3 + 1) = 0x56;
    *(undefined2 *)((longlong)puVar3 + 6) = 0;
  }
  if ((*piVar28 < DAT_1469f5ea0) && (_Init_thread_header(), DAT_1469f5ea0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.InstancedStereo");
    piVar20 = piVar19;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5e98 = piVar20;
    _Init_thread_footer();
  }
  if ((*piVar28 < DAT_1469f5eb0) && (_Init_thread_header(), DAT_1469f5eb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MultiView");
    piVar20 = piVar19;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5ea8 = piVar20;
    _Init_thread_footer();
  }
  if ((*piVar28 < DAT_1469f5ec0) && (_Init_thread_header(), DAT_1469f5ec0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MobileMultiView");
    piVar20 = piVar19;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5eb8 = piVar20;
    _Init_thread_footer();
  }
  if ((*piVar28 < DAT_1469f5ed0) && (_Init_thread_header(), DAT_1469f5ed0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MonoscopicFarField");
    piVar20 = piVar19;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5ec8 = piVar20;
    _Init_thread_footer();
  }
  if ((*piVar28 < DAT_1469f5ee0) && (_Init_thread_header(), DAT_1469f5ee0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.ODSCapture");
    if (plVar21 != (longlong *)0x0) {
      piVar19 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5ed8 = piVar19;
    _Init_thread_footer();
  }
  if ((((param_1 < 0x1f) && ((0x40050005U >> (param_1 & 0x1f) & 1) != 0)) &&
      (DAT_1469f5e98 != (int *)0x0)) && (*DAT_1469f5e98 != 0)) {
    bVar29 = true;
  }
  else {
    bVar29 = false;
  }
  if ((((param_1 == 2) || (param_1 == 0x1e)) ||
      (((param_1 - 0x10 & 0xfffffffd) == 0 && (uVar13 = RHIGetShaderLanguageVersion(), 2 < uVar13)))
      ) && ((DAT_1469f5ea8 != (int *)0x0 && (*DAT_1469f5ea8 != 0)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((local_res8[0] - 8 & 0xffffffef) == 0) && (DAT_1469f5eb8 != (int *)0x0)) &&
     (*DAT_1469f5eb8 != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((DAT_1469f5ec8 == (int *)0x0) || (*DAT_1469f5ec8 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((DAT_1469f5ed8 == (int *)0x0) || (*DAT_1469f5ed8 == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar29) {
    iVar14 = (int)param_2[1];
    iVar10 = (6 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    lVar23 = *param_2;
    lVar17 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
    *(undefined8 *)(lVar23 + lVar17 * 2) = 0x4900520056005f;
    lVar23 = lVar23 + lVar17 * 2;
    *(undefined2 *)(lVar23 + 8) = 0x53;
    *(undefined2 *)(lVar23 + 10) = 0;
    if (bVar5) {
      iVar14 = (int)param_2[1];
      iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar1 = 0x490056004d005f;
      *(undefined4 *)(puVar1 + 1) = 0x570045;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    }
  }
  piVar28 = (int *)0x0;
  if (bVar6) {
    iVar14 = (int)param_2[1];
    iVar10 = (8 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar1 = 0x56004d004d005f;
    *(undefined4 *)(puVar1 + 1) = 0x450049;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 0x57;
    *(undefined2 *)((longlong)puVar1 + 0xe) = 0;
  }
  if (bVar7) {
    iVar14 = (int)param_2[1];
    iVar10 = (6 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar1 = 0x4e004f004d005f;
    *(undefined2 *)(puVar1 + 1) = 0x4f;
    *(undefined2 *)((longlong)puVar1 + 10) = 0;
  }
  if (bVar8) {
    iVar14 = (int)param_2[1];
    iVar10 = (6 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar1 = 0x530044004f005f;
    *(undefined2 *)(puVar1 + 1) = 0x43;
    *(undefined2 *)((longlong)puVar1 + 10) = 0;
  }
  piVar19 = local_res10;
  if ((*local_res10 < DAT_1469f5ef0) && (_Init_thread_header(), DAT_1469f5ef0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SelectiveBasePassOutputs");
    piVar20 = piVar28;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5ee8 = piVar20;
    _Init_thread_footer();
  }
  if ((DAT_1469f5ee8 != (int *)0x0) && (*DAT_1469f5ee8 != 0)) {
    iVar14 = (int)param_2[1];
    iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar3 = 0x53005f;
    *(undefined2 *)(puVar3 + 1) = 0x4f;
    *(undefined2 *)((longlong)puVar3 + 6) = 0;
  }
  if ((*piVar19 < DAT_1469f5df8) && (_Init_thread_header(&DAT_1469f5df8), DAT_1469f5df8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.UsePreExposure");
    piVar20 = piVar28;
    if (plVar21 != (longlong *)0x0) {
      piVar20 = (int *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5df0 = piVar20;
    _Init_thread_footer(&DAT_1469f5df8);
  }
  piVar20 = DAT_1469f5df0;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar11 = GetCurrentThreadId();
    piVar18 = (int *)&DAT_00000004;
    if (DVar11 == DAT_1468c21c0) goto LAB_141a0dec2;
  }
  else {
LAB_141a0dec2:
    piVar18 = piVar28;
  }
  uVar13 = local_res8[0];
  if ((*(int *)((longlong)piVar18 + (longlong)piVar20) == 0) ||
     (((local_res8[0] < 0x1e && ((0x25e2cf88U >> (local_res8[0] & 0x1f) & 1) != 0)) ||
      (iVar14 = FUN_1419ef5f0(local_res8[0]), iVar14 < 3)))) {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  pwVar26 = L"";
  lVar23 = -1;
  if (bVar29) {
    pwVar26 = L"_PreExp";
  }
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f00) && (_Init_thread_header(&DAT_1469f5f00), DAT_1469f5f00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5ef8 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DBuffer");
    _Init_thread_footer(&DAT_1469f5f00);
  }
  if (DAT_1469f5ef8 == (longlong *)0x0) {
LAB_141a0df9d:
    pwVar26 = L"_NoDBuf";
  }
  else {
    iVar14 = (**(code **)(*DAT_1469f5ef8 + 0x68))();
    pwVar26 = L"_DBuf";
    if (iVar14 == 0) goto LAB_141a0df9d;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f10) && (_Init_thread_header(&DAT_1469f5f10), DAT_1469f5f10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5f08 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowGlobalClipPlane");
    _Init_thread_footer(&DAT_1469f5f10);
  }
  if (DAT_1469f5f08 == (longlong *)0x0) {
LAB_141a0e03d:
    pwVar26 = L"";
  }
  else {
    iVar14 = (**(code **)(*DAT_1469f5f08 + 0x68))();
    pwVar26 = L"_ClipP";
    if (iVar14 == 0) goto LAB_141a0e03d;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f20) && (_Init_thread_header(&DAT_1469f5f20), DAT_1469f5f20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5f18 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.KeepDebugInfo");
    _Init_thread_footer(&DAT_1469f5f20);
  }
  if (DAT_1469f5f18 == (longlong *)0x0) {
LAB_141a0e0de:
    pwVar26 = L"";
  }
  else {
    iVar14 = (**(code **)(*DAT_1469f5f18 + 0x68))();
    pwVar26 = L"_NoStrip";
    if (iVar14 != 1) goto LAB_141a0e0de;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f30) && (_Init_thread_header(&DAT_1469f5f30), DAT_1469f5f30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5f28 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.Optimize");
    _Init_thread_footer(&DAT_1469f5f30);
  }
  if (DAT_1469f5f28 == (longlong *)0x0) {
LAB_141a0e17d:
    puVar27 = &DAT_144d89520;
  }
  else {
    iVar14 = (**(code **)(*DAT_1469f5f28 + 0x68))();
    puVar27 = &DAT_144d87374;
    if (iVar14 == 0) goto LAB_141a0e17d;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (puVar27[lVar23] != 0);
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,puVar27,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f40) && (_Init_thread_header(&DAT_1469f5f40), DAT_1469f5f40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5f38 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.FastMath");
    _Init_thread_footer(&DAT_1469f5f40);
  }
  if (DAT_1469f5f38 == (longlong *)0x0) {
LAB_141a0e21d:
    pwVar26 = L"";
  }
  else {
    iVar14 = (**(code **)(*DAT_1469f5f38 + 0x68))();
    pwVar26 = L"_NoFastMath";
    if (iVar14 != 0) goto LAB_141a0e21d;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pwVar26[lVar23] != L'\0');
  iVar14 = (int)lVar23;
  if (iVar14 != 0) {
    iVar10 = (int)param_2[1];
    iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  if ((*piVar19 < DAT_1469f5f50) && (_Init_thread_header(&DAT_1469f5f50), DAT_1469f5f50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5f48 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.FlowControlMode");
    _Init_thread_footer(&DAT_1469f5f50);
  }
  if (DAT_1469f5f48 != (longlong *)0x0) {
    iVar14 = (**(code **)(*DAT_1469f5f48 + 0x68))();
    if (iVar14 == 1) {
      iVar14 = (int)param_2[1];
      iVar10 = (0xc - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      builtin_wcsncpy((wchar_t *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2),
                      L"_PreferFlow",0xc);
    }
    else if (iVar14 == 2) {
      iVar14 = (int)param_2[1];
      iVar10 = (0xb - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      builtin_wcsncpy((wchar_t *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2),
                      L"_AvoidFlow",0xb);
    }
  }
  switch(uVar13) {
  case 0:
  case 5:
  case 7:
  case 0xe:
  case 0x1f:
    if ((*piVar19 < DAT_1469f5f60) && (_Init_thread_header(&DAT_1469f5f60), DAT_1469f5f60 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f5f58 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.D3D.RemoveUnusedInterpolators");
      _Init_thread_footer(&DAT_1469f5f60);
    }
    if ((DAT_1469f5f58 != (longlong *)0x0) &&
       (iVar14 = (**(code **)(*DAT_1469f5f58 + 0x68))(), iVar14 != 0)) {
      iVar14 = (int)param_2[1];
      iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar1 = 0x49006e0055005f;
      *(undefined4 *)(puVar1 + 1) = 0x74006e;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    }
    break;
  case 4:
    goto switchD_141a0e39a_caseD_4;
  }
  if ((uVar13 < 0x18) && ((0x800788U >> (uVar13 & 0x1f) & 1) != 0)) {
LAB_141a0e43b:
    if ((*piVar19 < DAT_1469f5f70) && (_Init_thread_header(&DAT_1469f5f70), DAT_1469f5f70 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f5f68 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.DisableVertexFog");
      _Init_thread_footer(&DAT_1469f5f70);
    }
    if (DAT_1469f5f68 == (longlong *)0x0) {
LAB_141a0e467:
      pwVar26 = L"";
    }
    else {
      iVar14 = (**(code **)(*DAT_1469f5f68 + 0x68))();
      pwVar26 = L"_NoVFog";
      if (iVar14 == 0) goto LAB_141a0e467;
    }
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (pwVar26[lVar23] != L'\0');
    iVar14 = (int)lVar23;
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
    }
    if ((*piVar19 < DAT_1469f5f80) && (_Init_thread_header(&DAT_1469f5f80), DAT_1469f5f80 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))
                          (DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
      lVar23 = 0;
      if (plVar21 != (longlong *)0x0) {
        lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      DAT_1469f5f78 = lVar23;
      _Init_thread_footer(&DAT_1469f5f80);
    }
    lVar23 = DAT_1469f5f78;
    if (DAT_1469f5f78 == 0) {
      local_68 = (void *)0x0;
      local_60 = 0;
      ppvVar22 = &local_68;
      bVar5 = false;
      bVar29 = true;
    }
    else {
      cVar9 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        lVar17 = 4;
        if (DVar11 == DAT_1468c21c0) goto LAB_141a0e51f;
      }
      else {
LAB_141a0e51f:
        lVar17 = 0;
      }
      FString::PrintfImpl(local_48,L"MMC%d",*(undefined4 *)(lVar17 + lVar23));
      ppvVar22 = local_48;
      bVar5 = true;
      bVar29 = false;
    }
    pvVar2 = local_68;
    iVar14 = *(int *)(ppvVar22 + 1) + -1;
    if (*(int *)(ppvVar22 + 1) == 0) {
      iVar14 = 0;
    }
    pvVar4 = *ppvVar22;
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar4,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar14 * 2) = 0;
    }
    if ((bVar29) && (pvVar2 != (void *)0x0)) {
      FMemory::Free(pvVar2);
    }
    if ((bVar5) && (local_48[0] != (void *)0x0)) {
      FMemory::Free();
    }
    piVar19 = local_res10;
    if ((*local_res10 < DAT_1469f5f90) && (_Init_thread_header(&DAT_1469f5f90), DAT_1469f5f90 == -1)
       ) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f5f88 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.UseLegacyShadingModel");
      _Init_thread_footer(&DAT_1469f5f90);
    }
    if (DAT_1469f5f88 == (longlong *)0x0) {
LAB_141a0e626:
      pwVar26 = L"";
    }
    else {
      iVar14 = (**(code **)(*DAT_1469f5f88 + 0x68))();
      pwVar26 = L"_legshad";
      if (iVar14 == 0) goto LAB_141a0e626;
    }
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (pwVar26[lVar23] != L'\0');
    iVar14 = (int)lVar23;
    uVar13 = local_res8[0];
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
      uVar13 = local_res8[0];
    }
  }
  else {
switchD_141a0e39a_caseD_4:
    if ((uVar13 < 0x1e) && ((0x2562c800U >> (uVar13 & 0x1f) & 1) != 0)) goto LAB_141a0e43b;
  }
  lVar23 = 0;
  if (uVar13 == 2) {
    if ((*piVar19 < DAT_1469f5fa0) && (_Init_thread_header(&DAT_1469f5fa0), DAT_1469f5fa0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PS4MixedModeShaderDebugInfo")
      ;
      lVar25 = lVar23;
      if (plVar21 != (longlong *)0x0) {
        lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      DAT_1469f5f98 = lVar25;
      _Init_thread_footer(&DAT_1469f5fa0);
    }
    lVar25 = DAT_1469f5f98;
    if (DAT_1469f5f98 != 0) {
      cVar9 = FUN_1415ad720();
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        lVar17 = 4;
        if (DVar11 == DAT_1468c21c0) goto LAB_141a0e6f9;
      }
      else {
LAB_141a0e6f9:
        lVar17 = lVar23;
      }
      if (*(int *)(lVar25 + lVar17) != 0) {
        iVar14 = (int)param_2[1];
        iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        *puVar1 = 0x44004d004d005f;
        *(undefined4 *)(puVar1 + 1) = 0x470042;
        *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
      }
    }
    if ((*piVar19 < DAT_1469f5fb0) && (_Init_thread_header(&DAT_1469f5fb0), DAT_1469f5fb0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PS4DumpShaderSDB");
      lVar25 = lVar23;
      if (plVar21 != (longlong *)0x0) {
        lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      DAT_1469f5fa8 = lVar25;
      _Init_thread_footer(&DAT_1469f5fb0);
    }
    lVar25 = DAT_1469f5fa8;
    if (DAT_1469f5fa8 != 0) {
      cVar9 = FUN_1415ad720();
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        lVar17 = 4;
        if (DVar11 == DAT_1468c21c0) goto LAB_141a0e7a1;
      }
      else {
LAB_141a0e7a1:
        lVar17 = lVar23;
      }
      if (*(int *)(lVar25 + lVar17) != 0) {
        iVar14 = (int)param_2[1];
        iVar10 = (5 - (uint)(iVar14 != 0)) + iVar14;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        lVar25 = *param_2;
        lVar17 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
        *(undefined8 *)(lVar25 + lVar17 * 2) = 0x4200440053005f;
        *(undefined2 *)(lVar25 + 8 + lVar17 * 2) = 0;
      }
    }
    if ((*piVar19 < DAT_1469f5fc0) && (_Init_thread_header(&DAT_1469f5fc0), DAT_1469f5fc0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PS4UseTTrace");
      lVar25 = lVar23;
      if (plVar21 != (longlong *)0x0) {
        lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      DAT_1469f5fb8 = lVar25;
      _Init_thread_footer(&DAT_1469f5fc0);
    }
    lVar25 = DAT_1469f5fb8;
    if (DAT_1469f5fb8 != 0) {
      cVar9 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        lVar17 = 4;
        if (DVar11 == DAT_1468c21c0) goto LAB_141a0e83e;
      }
      else {
LAB_141a0e83e:
        lVar17 = lVar23;
      }
      if (0 < *(int *)(lVar25 + lVar17)) {
        uVar15 = FUN_1419f1b20(DAT_1469f5fb8,0);
        FString::PrintfImpl(&local_68,L"TT%d",uVar15);
        pvVar2 = local_68;
        if ((int)local_60 == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (int)local_60 + -1;
        }
        if (iVar14 != 0) {
          iVar10 = (int)param_2[1];
          iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
          *(int *)(param_2 + 1) = iVar12;
          if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
          }
          pvVar4 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar4,pvVar2,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)pvVar4 + (longlong)iVar14 * 2) = 0;
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
  }
  else if ((uVar13 < 0x1c) && ((0x8c51800U >> (uVar13 & 0x1f) & 1) != 0)) {
    if ((*piVar19 < DAT_1469f5fd0) && (_Init_thread_header(&DAT_1469f5fd0), DAT_1469f5fd0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f5fc8 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.ZeroInitialise");
      _Init_thread_footer(&DAT_1469f5fd0);
    }
    if (DAT_1469f5fc8 == (longlong *)0x0) {
LAB_141a0e935:
      pwVar26 = L"";
    }
    else {
      iVar14 = (**(code **)(*DAT_1469f5fc8 + 0x68))();
      pwVar26 = L"_ZeroInit";
      if (iVar14 == 0) goto LAB_141a0e935;
    }
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (pwVar26[lVar23] != L'\0');
    iVar14 = (int)lVar23;
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
    }
    if ((*piVar19 < DAT_1469f5fe0) && (_Init_thread_header(&DAT_1469f5fe0), DAT_1469f5fe0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469f5fd8 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.BoundsChecking");
      _Init_thread_footer(&DAT_1469f5fe0);
    }
    if (DAT_1469f5fd8 == (longlong *)0x0) {
LAB_141a0e9cd:
      pwVar26 = L"";
    }
    else {
      iVar14 = (**(code **)(*DAT_1469f5fd8 + 0x68))();
      pwVar26 = L"_BoundsChecking";
      if (iVar14 == 0) goto LAB_141a0e9cd;
    }
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (pwVar26[lVar23] != L'\0');
    iVar14 = (int)lVar23;
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pwVar26,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
    }
    cVar9 = FUN_141a037b0(uVar13);
    puVar27 = &DAT_144d879f4;
    if (cVar9 != '\0') {
      puVar27 = &DAT_144d899a0;
    }
    do {
      lVar25 = lVar25 + 1;
    } while (puVar27[lVar25] != 0);
    iVar14 = (int)lVar25;
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar10 + iVar14;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar27,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
    }
    uVar15 = RHIGetShaderLanguageVersion(uVar13);
    FString::PrintfImpl(&local_58,L"_MTLSTD%u_",uVar15);
    pvVar2 = local_58;
    iVar14 = 0;
    if (local_50 != 0) {
      iVar14 = local_50 + -1;
    }
    if (iVar14 != 0) {
      iVar10 = (int)param_2[1];
      iVar12 = (uint)(iVar10 == 0) + iVar14 + iVar10;
      *(int *)(param_2 + 1) = iVar12;
      if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar4 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar4,pvVar2,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar4 + (longlong)iVar14 * 2) = 0;
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    local_res8[0] = local_res8[0] & 0xffffff00;
    local_res10 = (int *)CONCAT71(local_res10._1_7_,1);
    if ((uVar13 < 0x1c) && ((0x8dfc0ebU >> (uVar13 & 0x1f) & 1) != 0)) {
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"/Script/MacTargetPlatform.MacTargetSettings",L"UseFastIntrinsics",
                 local_res8,&DAT_1468e2360);
      pwVar24 = L"EnableMathOptimisations";
      pwVar26 = L"/Script/MacTargetPlatform.MacTargetSettings";
    }
    else {
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",L"UseFastIntrinsics"
                 ,local_res8,&DAT_1468e2360);
      pwVar24 = L"EnableMathOptimisations";
      pwVar26 = L"/Script/IOSRuntimeSettings.IOSRuntimeSettings";
    }
    FConfigCacheIni::GetBool(DAT_1468b6148,pwVar26,pwVar24,&local_res10,&DAT_1468e2360);
    if ((char)local_res8[0] != '\0') {
      iVar14 = (int)param_2[1];
      iVar10 = (0x12 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      builtin_wcsncpy((wchar_t *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2),
                      L"_MTLSL_FastIntrin",0x12);
    }
    if ((char)local_res10 == '\0') {
      iVar14 = (int)param_2[1];
      iVar10 = (0xc - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      builtin_wcsncpy((wchar_t *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2),
                      L"_NoFastMath",0xc);
    }
    local_res18[0] = '\0';
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/UnrealEd.ProjectPackagingSettings",
               L"bSharedMaterialNativeLibraries",local_res18,&DAT_1468e2410);
    if (local_res18[0] != '\0') {
      iVar14 = (int)param_2[1];
      iVar10 = (9 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      lVar23 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar23 * 2),L"_ARCHIVE",8);
      *(undefined2 *)(*param_2 + 0x10 + lVar23 * 2) = 0;
    }
  }
  if ((*piVar19 < DAT_1469f5ff0) && (_Init_thread_header(&DAT_1469f5ff0), DAT_1469f5ff0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StencilForLODDither");
    lVar23 = 0;
    if (plVar21 != (longlong *)0x0) {
      lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f5fe8 = lVar23;
    _Init_thread_footer(&DAT_1469f5ff0);
  }
  lVar23 = DAT_1469f5fe8;
  if (DAT_1469f5fe8 != 0) {
    cVar9 = FUN_1415ad720();
    if (((cVar9 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar11 = GetCurrentThreadId(), DVar11 != DAT_1468c21c0)) {
      lVar25 = 4;
    }
    else {
      lVar25 = 0;
    }
    if (0 < *(int *)(lVar23 + lVar25)) {
      iVar14 = (int)param_2[1];
      iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar3 = 0x53005f;
      *(undefined2 *)(puVar3 + 1) = 0x44;
      *(undefined2 *)((longlong)puVar3 + 6) = 0;
    }
  }
  if ((*piVar19 < DAT_1469f6000) && (_Init_thread_header(&DAT_1469f6000), DAT_1469f6000 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469f5ff8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ForwardShading");
    _Init_thread_footer(&DAT_1469f6000);
  }
  if ((DAT_1469f5ff8 != (longlong *)0x0) &&
     (iVar14 = (**(code **)(*DAT_1469f5ff8 + 0x68))(), 0 < iVar14)) {
    iVar14 = (int)param_2[1];
    iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar3 = 0x46005f;
    *(undefined2 *)(puVar3 + 1) = 0x53;
    *(undefined2 *)((longlong)puVar3 + 6) = 0;
  }
  lVar23 = 0;
  if ((*piVar19 < DAT_1469f6010) && (_Init_thread_header(&DAT_1469f6010), DAT_1469f6010 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessing.PropagateAlpha")
    ;
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f6008 = lVar25;
    _Init_thread_footer(&DAT_1469f6010);
  }
  lVar25 = DAT_1469f6008;
  if (DAT_1469f6008 != 0) {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0eea5;
    }
    else {
LAB_141a0eea5:
      lVar17 = lVar23;
    }
    if (0 < *(int *)(lVar17 + lVar25)) {
      iVar10 = FUN_1419f1b20(DAT_1469f6008,0);
      iVar14 = (int)param_2[1];
      if (iVar10 == 2) {
        iVar10 = (5 - (uint)(iVar14 != 0)) + iVar14;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        lVar25 = *param_2;
        lVar17 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
        *(undefined8 *)(lVar25 + lVar17 * 2) = 0x3200410053005f;
        *(undefined2 *)(lVar25 + 8 + lVar17 * 2) = 0;
      }
      else {
        iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
        }
        puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        *puVar3 = 0x53005f;
        *(undefined2 *)(puVar3 + 1) = 0x41;
        *(undefined2 *)((longlong)puVar3 + 6) = 0;
      }
    }
  }
  if ((*piVar19 < DAT_1469f6020) && (_Init_thread_header(&DAT_1469f6020), DAT_1469f6020 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VertexFoggingForOpaque");
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f6018 = lVar25;
    _Init_thread_footer(&DAT_1469f6020);
  }
  lVar25 = DAT_1469f6018;
  if (DAT_1469f6018 != 0) {
    cVar9 = FUN_1415ad720();
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0ef9d;
    }
    else {
LAB_141a0ef9d:
      lVar17 = lVar23;
    }
    if (0 < *(int *)(lVar17 + lVar25)) {
      iVar14 = (int)param_2[1];
      iVar10 = (5 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      lVar25 = *param_2;
      lVar17 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
      *(undefined8 *)(lVar25 + lVar17 * 2) = 0x4f00460056005f;
      *(undefined2 *)(lVar25 + 8 + lVar17 * 2) = 0;
    }
  }
  if ((*piVar19 < DAT_1469f6030) && (_Init_thread_header(&DAT_1469f6030), DAT_1469f6030 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPassOnlyMaterialMasking")
    ;
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f6028 = lVar25;
    _Init_thread_footer(&DAT_1469f6030);
  }
  lVar25 = DAT_1469f6028;
  if (DAT_1469f6028 != 0) {
    cVar9 = FUN_1415ad720();
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar17 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_141a0f039;
    }
    else {
LAB_141a0f039:
      lVar17 = lVar23;
    }
    if (0 < *(int *)(lVar25 + lVar17)) {
      iVar14 = (int)param_2[1];
      iVar10 = (7 - (uint)(iVar14 != 0)) + iVar14;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      puVar1 = (undefined8 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      *puVar1 = 0x50005a0045005f;
      *(undefined4 *)(puVar1 + 1) = 0x4d004d;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
    }
  }
  if ((*piVar19 < DAT_1469f6040) && (_Init_thread_header(&DAT_1469f6040), DAT_1469f6040 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFieldBuild.EightBit");
    lVar25 = lVar23;
    if (plVar21 != (longlong *)0x0) {
      lVar25 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f6038 = lVar25;
    _Init_thread_footer(&DAT_1469f6040);
  }
  lVar25 = DAT_1469f6038;
  if (DAT_1469f6038 == 0) goto LAB_141a0f136;
  cVar9 = FUN_1415ad720();
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar11 = GetCurrentThreadId();
    lVar17 = 4;
    if (DVar11 == DAT_1468c21c0) goto LAB_141a0f0e0;
  }
  else {
LAB_141a0f0e0:
    lVar17 = lVar23;
  }
  if (0 < *(int *)(lVar17 + lVar25)) {
    iVar14 = (int)param_2[1];
    iVar10 = (4 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    puVar3 = (undefined4 *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar3 = 0x38005f;
    *(undefined2 *)(puVar3 + 1) = 0x75;
    *(undefined2 *)((longlong)puVar3 + 6) = 0;
  }
LAB_141a0f136:
  if ((*piVar19 < DAT_1469f6050) && (_Init_thread_header(&DAT_1469f6050), DAT_1469f6050 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GPUSkin.Limit2BoneInfluences");
    if (plVar21 != (longlong *)0x0) {
      lVar23 = (**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1469f6048 = lVar23;
    _Init_thread_footer(&DAT_1469f6050);
  }
  if ((DAT_1469f6048 != 0) && (iVar14 = FUN_1419f1b20(DAT_1469f6048,0), iVar14 != 0)) {
    iVar14 = (int)param_2[1];
    iVar10 = (5 - (uint)(iVar14 != 0)) + iVar14;
    *(int *)(param_2 + 1) = iVar10;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
    }
    lVar25 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
    lVar23 = *param_2;
    *(undefined8 *)(lVar23 + lVar25 * 2) = 0x6900620032005f;
    *(undefined2 *)(lVar23 + 8 + lVar25 * 2) = 0;
  }
  return;
}



// FUNCTION 141a100a0 ShouldPreDrawShaders body=498 status=ok
// SIG undefined ShouldPreDrawShaders(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FShaderCache::ShouldPreDrawShaders(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  bVar6 = false;
  local_88 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
  if (DAT_1469f59e8 != 0) {
    iVar3 = *(int *)(param_1 + 0xc94);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      iVar1 = DAT_1464c0ad0;
    }
    if (iVar1 != -1) {
      if (iVar3 == 0) {
        iVar3 = DAT_1464c0ad0;
      }
      if (iVar3 <= param_2) goto LAB_141a10220;
    }
    if (*(int *)(param_1 + 0xb88) != *(int *)(param_1 + 0xbb4)) {
      lVar2 = *(longlong *)(param_1 + 0xbc0);
      if (*(longlong *)(param_1 + 0xbc0) == 0) {
        lVar2 = param_1 + 3000;
      }
      iVar3 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xbc8) - 1U &
                               (longlong)*(int *)(param_1 + 0xb68)) * 4);
      if (iVar3 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0xb80));
          if (*piVar4 == *(int *)(param_1 + 0xb68)) {
            if ((iVar3 != -1) && (piVar4 != (int *)0x0)) {
              local_78 = 0;
              local_70 = 0;
              local_58 = 0;
              local_50 = 0;
              local_48 = 0xffffffff;
              local_44 = 0;
              local_38 = 0;
              local_30 = local_30 & 0xffffffff00000000;
              FUN_1419db0c0(&local_78,piVar4 + 2);
              goto LAB_141a101c5;
            }
            break;
          }
          iVar3 = piVar4[0x16];
        } while (iVar3 != -1);
      }
    }
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_70._0_4_ = 0;
LAB_141a101c5:
    bVar6 = true;
    if (0 < (int)local_70 - local_44) {
      uVar5 = 1;
      goto LAB_141a10222;
    }
  }
LAB_141a10220:
  uVar5 = 0;
LAB_141a10222:
  if (bVar6) {
    local_30 = local_30 & 0xffffffff00000000;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_78,0);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xcb0));
  return uVar5;
}



// FUNCTION 141a102a0 Shutdown body=96 status=ok
// SIG undefined Shutdown(void)

void FShaderCodeLibrary::Shutdown(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469f5a08;
  if (DAT_1469f5a08 != 0) {
    *(undefined4 *)(DAT_1469f5a08 + 0x58) = 0;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 0x10);
    TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
    ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(lVar1);
    FMemory::operator_delete(lVar1,0x80);
    DAT_1469f5a08 = 0;
  }
  return;
}



// FUNCTION 141a10300 FUN_141a10300 body=71 status=ok
// SIG undefined FUN_141a10300(void)

void FUN_141a10300(void)

{
  if (DAT_1469f59c8 != (undefined8 *)0x0) {
    (**(code **)*DAT_1469f59c8)(DAT_1469f59c8,1);
    DAT_1469f59c8 = (undefined8 *)0x0;
  }
  if (DAT_146ab63a8 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab63a8 + 8))();
    DAT_146ab63a8 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 141a10350 FUN_141a10350 body=42 status=ok
// SIG undefined FUN_141a10350(void)

void FUN_141a10350(void)

{
  if (DAT_1469f59d8 != (undefined8 *)0x0) {
    (**(code **)*DAT_1469f59d8)(DAT_1469f59d8,1);
    DAT_1469f59d8 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 141a103b0 FUN_141a103b0 body=213 status=ok
// SIG undefined FUN_141a103b0(void)

longlong FUN_141a103b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = (longlong *)0x0;
  LOCK();
  lVar2 = *(longlong *)(param_1 + 0xd0);
  bVar4 = lVar2 == 0;
  if (bVar4) {
    *(longlong *)(param_1 + 0xd0) = 0;
    lVar2 = 0;
  }
  UNLOCK();
  if (bVar4) {
    LOCK();
    lVar2 = *(longlong *)(param_1 + 200);
    bVar4 = lVar2 == 0;
    if (bVar4) {
      *(longlong *)(param_1 + 200) = 0;
      lVar2 = 0;
    }
    UNLOCK();
    if (bVar4) {
      LOCK();
      lVar2 = *(longlong *)(param_1 + 0xd8);
      bVar4 = lVar2 == 0;
      if (bVar4) {
        *(longlong *)(param_1 + 0xd8) = 0;
        lVar2 = 0;
      }
      UNLOCK();
      if (!bVar4) {
        return lVar2;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    plVar1 = (longlong *)operator_new(0x18);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_144d8e5c0;
      plVar1[1] = (longlong)&PTR_FUN_144d8e2e8;
      plVar1[2] = param_1;
      plVar3 = plVar1;
    }
    LOCK();
    *(longlong **)(param_1 + 0x168) = plVar3;
    UNLOCK();
    if (DAT_1468b5010 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a1045a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,plVar3);
      return lVar2;
    }
    FUN_141a10490(plVar3[2]);
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
  }
  return lVar2;
}



// FUNCTION 141a10490 FUN_141a10490 body=2196 status=ok
// SIG undefined FUN_141a10490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a10490(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  int local_res8;
  int local_res10;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  void *local_108;
  undefined8 local_100;
  longlong local_f8;
  uint local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int local_a8;
  int local_a4;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  uVar20 = 0;
  LOCK();
  bVar24 = *(longlong *)(param_1 + 0xd0) == 0;
  if (bVar24) {
    *(longlong *)(param_1 + 0xd0) = 0;
  }
  UNLOCK();
  if (bVar24) {
    LOCK();
    bVar24 = *(longlong *)(param_1 + 200) == 0;
    if (bVar24) {
      *(longlong *)(param_1 + 200) = 0;
    }
    UNLOCK();
    if (bVar24) {
      LOCK();
      bVar24 = *(longlong *)(param_1 + 0xd8) == 0;
      if (bVar24) {
        *(longlong *)(param_1 + 0xd8) = 0;
      }
      UNLOCK();
      if (!bVar24) {
        plVar19 = DAT_1464c0ce8;
        if (DAT_1464c0ce8 != DAT_1464c0ce8 + (longlong)DAT_1464c0cf0 * 2) {
LAB_141a10538:
          if (((int)plVar19[1] == 0) || (*plVar19 == 0)) goto LAB_141a10543;
          lVar16 = *(longlong *)(param_1 + 0xe8);
          dVar26 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
          dVar27 = (double)lVar16;
          if (lVar16 < 0) {
            dVar27 = dVar27 + 1.8446744073709552e+19;
          }
          uVar15 = *(ulonglong *)(param_1 + 0xd8);
          bVar24 = false;
          DAT_1464c0cfc = DAT_1464c0cfc + 1;
          lVar16 = (longlong)(DAT_1464c0cf0 + -1);
          if (-1 < DAT_1464c0cf0 + -1) {
            lVar14 = lVar16 << 4;
            bVar24 = false;
            do {
              if (((*(int *)(lVar14 + 8 + (longlong)DAT_1464c0ce8) == 0) ||
                  (plVar19 = *(longlong **)(lVar14 + (longlong)DAT_1464c0ce8),
                  plVar19 == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*plVar19 + 0x40))
                                    (plVar19,uVar15 & 0xffffffff,SUB84(dVar26 * dVar27,0)),
                 cVar3 == '\0')) {
                bVar24 = true;
              }
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + -1;
            } while (-1 < lVar16);
          }
          iVar5 = DAT_1464c0cf0;
          DAT_1464c0cfc = DAT_1464c0cfc + -1;
          if ((bVar24) && (DAT_1464c0cfc < 1)) {
            uVar15 = uVar20;
            uVar22 = uVar20;
            if (0 < DAT_1464c0cf0) {
              do {
                if (((*(int *)(uVar15 + 8 + (longlong)DAT_1464c0ce8) == 0) ||
                    (*(longlong **)(uVar15 + (longlong)DAT_1464c0ce8) == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(**(longlong **)(uVar15 + (longlong)DAT_1464c0ce8) + 0x10))
                                      (), cVar3 != '\0')) {
                  TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464c0ce8,uVar22,1,1);
                }
                else {
                  uVar22 = (ulonglong)((int)uVar22 + 1);
                  uVar15 = uVar15 + 0x10;
                }
              } while ((int)uVar22 < DAT_1464c0cf0);
            }
            _DAT_1464c0cf8 = DAT_1464c0cf0 * 2;
            if (_DAT_1464c0cf8 < 3) {
              _DAT_1464c0cf8 = 2;
            }
            if ((_DAT_1464c0cf8 < iVar5) && (DAT_1464c0cf4 != DAT_1464c0cf0)) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464c0ce8);
            }
          }
        }
LAB_141a1069c:
        LOCK();
        uVar2 = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(param_1 + 0xd8) = 0;
        UNLOCK();
        LOCK();
        *(undefined8 *)(param_1 + 0xe0) = uVar2;
        UNLOCK();
        LOCK();
        *(undefined8 *)(param_1 + 0xe8) = 0;
        UNLOCK();
      }
    }
  }
  cVar3 = FUN_141a037f0(param_1);
  if ((cVar3 != '\0') && (cVar3 = FUN_1419efa30(), cVar3 != '\0')) {
    FUN_141a0a7d0(param_1,0);
  }
  cVar3 = FUN_1419f08d0();
  if ((cVar3 == '\0') || (iVar5 = FUN_141ecacf0(0), iVar5 <= *(int *)(param_1 + 0x158)))
  goto LAB_141a107c2;
  QueryPerformanceCounter(&local_a0);
  lVar16 = DAT_1469f5d78;
  dVar27 = (double)local_a0.QuadPart * DAT_1468b02f8;
  dVar26 = *(double *)(param_1 + 0x150);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar15 = 4;
    if (DVar6 == DAT_1468c21c0) goto LAB_141a10769;
  }
  else {
LAB_141a10769:
    uVar15 = uVar20;
  }
  if ((float)*(int *)(uVar15 + lVar16) <= (float)((dVar27 + 16777216.0) - dVar26)) {
    FUN_141a0a7d0(param_1,1);
    QueryPerformanceCounter(&local_98);
    *(double *)(param_1 + 0x150) = (double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0;
    uVar7 = FUN_141ecacf0(0);
    *(undefined4 *)(param_1 + 0x158) = uVar7;
  }
LAB_141a107c2:
  FUN_141a018e0(param_1);
  if (*(int *)(param_1 + 0x120) != 0) {
    TArray<FPipelineCachePSOHeader,FDefaultAllocator>::operator=(param_1 + 0x30,param_1 + 0x118);
    TArray<FPipelineCachePSOHeader,FDefaultAllocator>::Empty(param_1 + 0x118,0);
  }
  cVar3 = FUN_141a03900(param_1);
  if (cVar3 != '\0') {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      do {
        lVar16 = (longlong)(int)uVar20 * 0x250;
        FUN_141a01f90(param_1,&DAT_146ab6e78,DAT_146ab62cc,*(longlong *)(param_1 + 0x20) + lVar16);
        local_res18[0] = FUN_141ec8950(*(longlong *)(param_1 + 0x20) + lVar16);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_1 + 0x50,local_res20,local_res18,0);
        puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x248 + lVar16);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &PTR_FUN_144d8e3d0;
          FUN_1419d8b10(puVar13 + 0x12);
          FArchive::~FArchive(puVar13);
          FMemory::operator_delete(puVar13,0x150);
        }
        uVar8 = *(uint *)(param_1 + 0x28);
        uVar21 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar21;
      } while (uVar21 < uVar8);
    }
    LOCK();
    *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) - (longlong)(int)uVar8;
    UNLOCK();
    lVar16 = *(longlong *)(param_1 + 0x20);
    for (iVar5 = *(int *)(param_1 + 0x28); iVar5 != 0; iVar5 = iVar5 + -1) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar16);
      lVar16 = lVar16 + 0x250;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_141a0a4d0(param_1 + 0x20,0);
    }
  }
  if ((*(int *)(param_1 + 0x18) == 0) &&
     ((uVar8 = *(uint *)(param_1 + 0x38), uVar8 != 0 || (*(int *)(param_1 + 0x48) != 0)))) {
    uVar21 = *(uint *)(param_1 + 0x48);
    uVar23 = *(uint *)(param_1 + 0xb4) - uVar21;
    if (*(uint *)(param_1 + 0xb4) <= uVar21) {
      uVar23 = 0;
    }
    uVar17 = uVar8;
    if (uVar23 <= uVar8) {
      uVar17 = uVar23;
    }
    if ((int)uVar21 < (int)uVar17) {
      local_res8 = uVar17 - uVar21;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_res10 = 0;
      if (0 < (int)uVar8) {
        puVar13 = (undefined8 *)0x0;
        local_f8 = 0;
        do {
          if (local_res8 == 0) break;
          bVar24 = true;
          plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + local_f8);
          local_f0 = 0;
          uVar8 = *(uint *)(plVar19 + 5);
          puVar1 = (uint *)(plVar19 + 2);
          uStack_ec = 1;
          uStack_dc = 0;
          uStack_d8 = 0;
          if (uVar8 != 0) {
            puVar18 = (uint *)plVar19[4];
            if ((uint *)plVar19[4] == (uint *)0x0) {
              puVar18 = puVar1;
            }
            uVar21 = *puVar18;
            puVar12 = puVar13;
            puVar10 = puVar13;
            while (uVar21 == 0) {
              iVar5 = (int)puVar12;
              uStack_d8 = (int)puVar10 + 0x20;
              puVar10 = (undefined8 *)(ulonglong)uStack_d8;
              local_f0 = iVar5 + 1;
              puVar12 = (undefined8 *)(ulonglong)local_f0;
              if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_141a10a24;
              uVar21 = puVar18[(longlong)iVar5 + 1];
            }
            uStack_ec = -uVar21 & uVar21;
            local_a8 = 0x1f;
            if (uStack_ec != 0) {
              for (; uStack_ec >> local_a8 == 0; local_a8 = local_a8 + -1) {
              }
            }
            if (uStack_ec == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - local_a8;
            }
            uStack_dc = (uStack_d8 - iVar5) + 0x1f;
            if ((int)uVar8 < (int)uStack_dc) {
LAB_141a10a24:
              uStack_dc = uVar8;
            }
          }
          local_e0 = 0xffffffff;
          uVar21 = *(uint *)(plVar19 + 5);
          uStack_c8 = CONCAT44(uStack_ec,local_f0);
          uStack_78 = CONCAT44(uStack_dc,0xffffffff);
          uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
          iVar5 = (int)uVar21 >> 5;
          uVar23 = -1 << ((byte)uVar21 & 0x1f);
          uVar17 = uVar21 & 0xffffffe0;
          local_d0._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
          local_d0 = CONCAT44(local_d0._4_4_,iVar5);
          uStack_c0 = CONCAT44(uVar21,uVar23);
          uStack_b8 = CONCAT44(uStack_dc,uVar21) & 0xffffffffffffffe0;
          puStack_e8 = puVar1;
          local_90 = plVar19;
          uStack_88 = uStack_c8;
          local_80 = puVar1;
          local_70 = uStack_b0;
          uVar2 = uStack_c0;
          if (uVar21 != uVar8) {
            puVar18 = (uint *)plVar19[4];
            if ((uint *)plVar19[4] == (uint *)0x0) {
              puVar18 = puVar1;
            }
            uVar23 = puVar18[iVar5] & uVar23;
            while (uVar23 == 0) {
              uVar17 = uVar17 + 0x20;
              uVar20 = uStack_b8 >> 0x20;
              uStack_b8 = CONCAT44((int)uVar20,uVar17);
              local_d0._4_4_ = (undefined4)((ulonglong)local_d0 >> 0x20);
              local_d0 = CONCAT44(local_d0._4_4_,iVar5 + 1);
              if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_141a10b10;
              uVar23 = puVar18[(longlong)iVar5 + 1];
              uStack_c0 = 0xffffffff;
              iVar5 = iVar5 + 1;
            }
            uVar23 = -uVar23 & uVar23;
            local_a4 = 0x1f;
            if (uVar23 != 0) {
              for (; uVar23 >> local_a4 == 0; local_a4 = local_a4 + -1) {
              }
            }
            if (uVar23 == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - local_a4;
            }
            iVar5 = (uVar17 - iVar5) + 0x1f;
            uStack_c0 = CONCAT44(iVar5,(undefined4)uStack_c0);
            uVar2 = uStack_c0;
            if ((int)uVar8 < iVar5) {
LAB_141a10b10:
              uStack_c0 = CONCAT44(uVar8,(undefined4)uStack_c0);
              uVar2 = uStack_c0;
            }
          }
          while( true ) {
            if (((uStack_78._4_4_ == (int)((ulonglong)uVar2 >> 0x20)) && (local_80 == puVar1)) &&
               (local_90 == plVar19)) break;
            if (DAT_1469f5a08 == 0) {
              bVar25 = false;
            }
            else {
              lVar16 = FShaderCodeLibraryImpl::FindShaderLibrary
                                 (DAT_1469f5a08,(longlong)uStack_78._4_4_ * 0x1c + *local_90);
              bVar25 = lVar16 != 0;
            }
            bVar24 = (bool)(bVar24 & bVar25);
            uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_88._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
          }
          if (bVar24) {
            puVar10 = (undefined8 *)operator_new(0x40);
            puVar12 = puVar13;
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              *(undefined4 *)(puVar10 + 3) = 0;
              *(undefined2 *)((longlong)puVar10 + 0x1c) = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              puVar10[7] = 0;
              puVar12 = puVar10;
            }
            *(undefined4 *)(puVar12 + 3) =
                 *(undefined4 *)(local_f8 + 0x50 + *(longlong *)(param_1 + 0x30));
            puVar11 = (undefined8 *)operator_new(0x150);
            puVar10 = puVar13;
            if (puVar11 != (undefined8 *)0x0) {
              FArchive::FArchive(puVar11);
              *puVar11 = &PTR_FUN_144d8e3d0;
              puVar11[0x26] = 0;
              puVar11[0x28] = 0;
              puVar10 = puVar11;
            }
            uVar20 = local_100;
            puVar12[2] = puVar10;
            lVar16 = (longlong)(int)local_100;
            iVar5 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar5);
            if (local_100._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_108,uVar20 & 0xffffffff);
            }
            *(undefined8 **)((longlong)local_108 + lVar16 * 8) = puVar12;
            FUN_141a090b0(param_1 + 0x30,local_res10,1,1);
            local_res10 = local_res10 + -1;
            local_f8 = local_f8 + -0x58;
            LOCK();
            *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 1;
            UNLOCK();
            LOCK();
            *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + -1;
            UNLOCK();
            local_res8 = local_res8 + -1;
          }
          local_res10 = local_res10 + 1;
          local_f8 = local_f8 + 0x58;
        } while (local_res10 < *(int *)(param_1 + 0x38));
      }
      FPipelineFileCache::FetchPSODescriptors(&local_108);
      iVar5 = (int)local_100;
      lVar16 = (longlong)(int)local_100;
      if ((int)local_100 != 0) {
        iVar9 = *(int *)(param_1 + 0x48);
        if (*(int *)(param_1 + 0x4c) < iVar9 + (int)local_100) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40);
          iVar9 = *(int *)(param_1 + 0x48);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 8),local_108,
                   lVar16 << 3);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar5;
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
    }
    FUN_141a02990(param_1,param_1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a10d1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return;
LAB_141a10543:
  plVar19 = plVar19 + 2;
  if (plVar19 == DAT_1464c0ce8 + (longlong)DAT_1464c0cf0 * 2) goto LAB_141a1069c;
  goto LAB_141a10538;
}



// FUNCTION 141a10d30 UninitializeShaderTypes body=316 status=ok
// SIG undefined UninitializeShaderTypes(void)

void UninitializeShaderTypes(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_38 [3];
  longlong local_20 [3];
  
  DAT_1469f59c0 = 0;
  for (puVar1 = DAT_1469f5dd8; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    plVar3 = (longlong *)(lVar2 + 0xb0);
    if (plVar3 != local_38) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
    }
    *(undefined4 *)(lVar2 + 0xc0) = 0;
    plVar3 = (longlong *)(lVar2 + 200);
    if (plVar3 != local_20) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = 0;
      *(undefined8 *)(lVar2 + 0xd0) = 0;
    }
  }
  DAT_1469f59c2 = 0;
  for (puVar1 = DAT_1469f60a0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    lVar2 = 6;
    lVar4 = puVar1[2] + 0xe4;
    do {
      plVar3 = (longlong *)(lVar4 + -0x24);
      if (plVar3 != local_38) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = 0;
        *(undefined8 *)(lVar4 + -0x1c) = 0;
      }
      plVar3 = (longlong *)(lVar4 + -0xc);
      *(undefined4 *)(lVar4 + -0x14) = 0;
      if (plVar3 != local_20) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = 0;
        *(undefined8 *)(lVar4 + -4) = 0;
      }
      lVar4 = lVar4 + 0x28;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  DAT_1469f59c1 = 0;
  return;
}



// FUNCTION 141a10e70 FUN_141a10e70 body=232 status=ok
// SIG undefined FUN_141a10e70(void)

/* WARNING: Removing unreachable block (ram,0x000141a10f1b) */
/* WARNING: Removing unreachable block (ram,0x000141a10f20) */
/* WARNING: Removing unreachable block (ram,0x000141a10f28) */
/* WARNING: Removing unreachable block (ram,0x000141a10f2d) */
/* WARNING: Removing unreachable block (ram,0x000141a10f36) */
/* WARNING: Removing unreachable block (ram,0x000141a10ee3) */
/* WARNING: Removing unreachable block (ram,0x000141a10f09) */
/* WARNING: Removing unreachable block (ram,0x000141a10f40) */

void FUN_141a10e70(undefined8 param_1,undefined8 param_2)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x20e,L"Couldn\'t find source file of virtual shader path \'%s\'",param_2);
  FDebug::AssertFailed
            (&DAT_144d8553f,"Unknown",0x20e,
             L"Couldn\'t find source file of virtual shader path \'%s\'",param_2);
  FSHA1::UpdateWithString(param_1,&DAT_143f3eda8,0);
  return;
}



// FUNCTION 141a10f60 FUN_141a10f60 body=288 status=ok
// SIG undefined FUN_141a10f60(void)

undefined8 FUN_141a10f60(uint param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f5df8) && (_Init_thread_header(&DAT_1469f5df8), DAT_1469f5df8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.UsePreExposure");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469f5df0 = lVar5;
    _Init_thread_footer(&DAT_1469f5df8);
  }
  lVar5 = DAT_1469f5df0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if ((*(int *)(lVar6 + lVar5) != 0) &&
     (((0x1d < param_1 || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) &&
      (iVar3 = FUN_1419ef5f0(param_1), 2 < iVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141a11080 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141a110c0 FUN_141a110c0 body=59 status=ok
// SIG undefined FUN_141a110c0(void)

undefined1 FUN_141a110c0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  return 0;
}



// FUNCTION 141a11100 FUN_141a11100 body=29 status=ok
// SIG undefined FUN_141a11100(void)

ulonglong FUN_141a11100(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a11130 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FClearReplacementPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a11180 Serialize body=77 status=ok
// SIG undefined Serialize(void)

ulonglong FClearTexture2DReplacementScissorCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a111d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FClearTexture2DArrayReplacementCS<unsigned_int>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141a11210 FUN_141a11210 body=50 status=ok
// SIG undefined FUN_141a11210(void)

ulonglong FUN_141a11210(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xc6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a11250 FUN_141a11250 body=168 status=ok
// SIG undefined FUN_141a11250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a11250(longlong param_1)

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
  local_126 = 0x100004;
  local_122 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141a11300 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d91250;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a11350 FUN_141a11350 body=59 status=ok
// SIG undefined FUN_141a11350(void)

undefined1 FUN_141a11350(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  return 0;
}



// FUNCTION 141a11390 FUN_141a11390 body=74 status=ok
// SIG undefined FUN_141a11390(void)

undefined1 FUN_141a11390(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  return 0;
}



// FUNCTION 141a113e0 FUN_141a113e0 body=29 status=ok
// SIG undefined FUN_141a113e0(void)

ulonglong FUN_141a113e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a11400 FUN_141a11400 body=59 status=ok
// SIG undefined FUN_141a11400(void)

undefined1 FUN_141a11400(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc4);
  return 0;
}



// FUNCTION 141a11440 Serialize body=59 status=ok
// SIG undefined Serialize(void)

undefined1 FBlurLightShaftsPixelShader::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  return 0;
}



// FUNCTION 141a11480 FUN_141a11480 body=241 status=ok
// SIG undefined FUN_141a11480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141a11480(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122 [125];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  uVar1 = local_28;
  lVar3 = (longlong)(int)local_28;
  local_128 = 0;
  local_126 = 0x200004;
  local_122[0] = 0;
  iVar2 = (int)local_28 + 1;
  local_28 = CONCAT44(local_28._4_4_,iVar2);
  if (local_28._4_4_ < iVar2) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,uVar1 & 0xffffffff);
  }
  (&local_128)[lVar3 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_122 + (lVar3 * 2 + -1) * 4) = 0x200102;
  *(undefined2 *)((longlong)local_122 + lVar3 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141a11580 FUN_141a11580 body=74 status=ok
// SIG undefined FUN_141a11580(void)

undefined8 * FUN_141a11580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d91558;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a115d0 Serialize body=163 status=ok
// SIG undefined Serialize(void)

ulonglong FRGBAToYUV420CS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd2);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd8);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xdc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a11680 FUN_141a11680 body=89 status=ok
// SIG undefined FUN_141a11680(void)

undefined8 * FUN_141a11680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d91750;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144d91558;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a116e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FUniformBufferStruct::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FUniformBufferStruct();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141a11720 FUN_141a11720 body=59 status=ok
// SIG undefined FUN_141a11720(void)

undefined1 FUN_141a11720(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  return 0;
}



// FUNCTION 141a11760 FUN_141a11760 body=29 status=ok
// SIG undefined FUN_141a11760(void)

ulonglong FUN_141a11760(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xd8);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a11780 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FSimpleLightTranslucentLightingInjectPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  return 0;
}



// FUNCTION 141a117d0 FUN_141a117d0 body=89 status=ok
// SIG undefined FUN_141a117d0(void)

undefined1 FUN_141a117d0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  return 0;
}



// FUNCTION 141a11830 FUN_141a11830 body=29 status=ok
// SIG undefined FUN_141a11830(void)

ulonglong FUN_141a11830(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd8);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a11850 FUN_141a11850 body=1224 status=ok
// SIG undefined FUN_141a11850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a11c7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a11850(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined1 auStack_178 [32];
  undefined *local_158;
  longlong local_148;
  undefined4 *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 auStack_d0 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94 [19];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar19 = 0;
  lVar17 = (longlong)param_4;
  local_e8 = param_2;
  local_e0 = param_1;
  local_d8 = param_3;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar19;
    uVar15 = uVar19;
    do {
      iVar14 = (int)uVar15;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar9 * 8) == &DAT_1469f84a0) {
        if (iVar14 != -1) {
          puVar20 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar14 * 8);
          *puVar20 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a118f7;
        }
        break;
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fc4f0) && (_Init_thread_header(&DAT_1469fc4f0), DAT_1469fc4f0 == -1))
  {
    _DAT_1469fc4e8 = 0;
    DAT_1469fc4ec = 0;
    DAT_1469fc4ee = 0;
    _Init_thread_footer(&DAT_1469fc4f0);
  }
  puVar20 = (undefined4 *)&DAT_1469fc4e8;
LAB_141a118f7:
  if (*(char *)((longlong)puVar20 + 6) != '\0') {
    local_140 = puVar20;
    _guard_xfg_dispatch_icall_nop(auStack_d0 + 2,0,0x80);
    if (3 < lVar17) {
      local_148 = (longlong)&local_b0 - param_3;
      local_128 = (longlong)&local_ac - param_3;
      local_120 = (longlong)&local_a8 - param_3;
      lVar16 = -param_3;
      local_118 = (longlong)&local_a4 - param_3;
      local_110 = (longlong)&local_a0 - param_3;
      local_108 = (longlong)&local_9c - param_3;
      lVar4 = -param_3;
      lVar5 = 0x10 - param_3;
      lVar6 = 0x14 - param_3;
      local_100 = (longlong)&local_98 - param_3;
      lVar7 = 0x18 - param_3;
      lVar8 = 0x1c - param_3;
      local_f8 = (longlong)local_94 - param_3;
      lVar18 = (lVar17 - 4U >> 2) + 1;
      uVar19 = lVar18 * 4;
      puVar11 = (undefined4 *)(param_3 + 8);
      do {
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar16) = puVar11[-2];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar4 + 4) = puVar11[-1];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar16 + 8) = *puVar11;
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar4 + 0xc) = puVar11[1];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar5) = puVar11[2];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar6) = puVar11[3];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar7) = puVar11[4];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + lVar8) = puVar11[5];
        *(undefined4 *)((longlong)puVar11 + local_148) = puVar11[6];
        *(undefined4 *)((longlong)puVar11 + local_128) = puVar11[7];
        *(undefined4 *)((longlong)puVar11 + local_120) = puVar11[8];
        *(undefined4 *)((longlong)puVar11 + local_118) = puVar11[9];
        *(undefined4 *)((longlong)puVar11 + local_110) = puVar11[10];
        *(undefined4 *)((longlong)puVar11 + local_108) = puVar11[0xb];
        *(undefined4 *)((longlong)puVar11 + local_100) = puVar11[0xc];
        *(undefined4 *)((longlong)puVar11 + local_f8) = puVar11[0xd];
        lVar18 = lVar18 + -1;
        puVar11 = puVar11 + 0x10;
        param_3 = local_d8;
        param_1 = local_e0;
        param_2 = local_e8;
        puVar20 = local_140;
        local_138 = (undefined8 *)uVar19;
      } while (lVar18 != 0);
    }
    if ((longlong)uVar19 < lVar17) {
      puVar11 = (undefined4 *)(param_3 + 8 + uVar19 * 0x10);
      lVar16 = lVar17 - uVar19;
      do {
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + -param_3) = puVar11[-2];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + -param_3 + 4) = puVar11[-1];
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + -param_3 + 8) = *puVar11;
        *(undefined4 *)((longlong)puVar11 + (longlong)auStack_d0 + -param_3 + 0xc) = puVar11[1];
        puVar11 = puVar11 + 4;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    local_130 = 0;
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
    local_f0 = lVar17;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    puVar10 = puVar12 + 2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144d91e30;
    local_158 = &DAT_1469f84c8;
    FLocalUniformBufferWorkArea::FLocalUniformBufferWorkArea(puVar10,param_2,auStack_d0 + 2,0x80);
    lVar17 = *(longlong *)(param_1 + 0x48);
    uVar2 = *(ushort *)(puVar20 + 1);
    local_138 = puVar10;
    if (*(char *)(lVar17 + 0x28) == '\0') {
      FUN_1419f3850(lVar17);
    }
    uVar3 = *(undefined8 *)(lVar17 + 0x40);
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
    *puVar13 = &PTR_FUN_144d92070;
    puVar13[2] = uVar3;
    *(uint *)(puVar13 + 3) = (uint)uVar2;
    puVar13[4] = puVar10;
    puVar13[5] = 0;
    piVar1 = (int *)(*(longlong *)(puVar13[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_130);
  }
  return;
}



// FUNCTION 141a11d20 Serialize body=133 status=ok
// SIG undefined Serialize(void)

ulonglong FFillTextureCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd2);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xd8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a11db0 Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_> body=491 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>(void)

int * TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar10 = 0xffffffff;
  puVar2 = (undefined1 *)param_3[1];
  bVar13 = false;
  uVar11 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar11;
  *(undefined1 *)(local_30 + 1) = *puVar2;
  local_30[2] = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar9 = -1;
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x10) == *local_30) break;
          iVar7 = *(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x10 + *param_1),local_30,8);
      bVar3 = (byte)local_38[0] & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = local_38[0];
      }
      puVar6 = (undefined4 *)((longlong)local_38[0] * 0x10 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = local_38[0];
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141a11f6e;
    }
  }
  cVar4 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar5 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141a11f6e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141a11fa0 SetShaderValue<FRHIComputeShader_*,int,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (3 < (int)uVar6) {
    uVar6 = 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141a120e0 FUN_141a120e0 body=308 status=ok
// SIG undefined FUN_141a120e0(void)

void FUN_141a120e0(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xf < (int)uVar6) {
    uVar6 = 0x10;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141a12220 FLocalUniformBufferWorkArea body=209 status=ok
// SIG undefined FLocalUniformBufferWorkArea(void)

undefined8 *
FLocalUniformBufferWorkArea::FLocalUniformBufferWorkArea
          (undefined8 *param_1,longlong param_2,void *param_3,uint param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined8 *puVar4;
  
  puVar1 = (ulonglong *)(param_2 + 0x30);
  param_1[1] = param_5;
  _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
  uVar2 = (longlong)(int)param_4 + (longlong)_Dst;
  if (*(ulonglong *)(param_2 + 0x38) < uVar2) {
    FMemStackBase::AllocateNewChunk(puVar1,param_4 + 0x10);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar2 = (longlong)(int)param_4 + (longlong)_Dst;
  }
  *puVar1 = uVar2;
  *param_1 = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)param_4);
  puVar3 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(puVar1,0x18);
    puVar3 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 2;
  }
  *puVar1 = (ulonglong)puVar4;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  param_1[2] = puVar3;
  return param_1;
}



// FUNCTION 141a12300 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d92030;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a12390 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d91ff0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010701;
    local_14 = 0x20202;
    local_10 = 0x2020207;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a12450 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d91fb0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000701;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a12500 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d91f70;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x20202;
    local_10 = 0x2020207;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a125c0 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d91ed8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010101;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a12680 ~FUniformBufferStruct body=155 status=ok
// SIG undefined ~FUniformBufferStruct(void)

void FUniformBufferStruct::~FUniformBufferStruct(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR__scalar_deleting_destructor__144d91980;
  if (param_1[0xe] != 0) {
    *(undefined8 *)(param_1[0xe] + 8) = param_1[0xf];
  }
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = param_1[0xe];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,param_1[1],0);
  uVar1 = *puVar2;
  uVar3 = FUN_141ee3080();
  TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
  ::Remove(uVar3,uVar1);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a12720 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d92030;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a12770 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d91ff0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a127c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d91fb0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a12810 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d91f70;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a12860 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d91ed8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a128b0 FUN_141a128b0 body=1040 status=ok
// SIG undefined FUN_141a128b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a128b0(longlong param_1,char param_2,int param_3,undefined8 param_4,char param_5,
                  undefined8 param_6,char param_7,undefined4 param_8)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar11 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar3 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar3,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((DAT_1468b616c != '\0') && (DAT_1468b616d == '\0')) {
    return;
  }
  if (DAT_1468509e0 != '\0') {
    return;
  }
  if (param_2 == '\0') {
    uVar3 = FUN_141a151e0();
  }
  else {
    uVar3 = FUN_1404a0ce0();
  }
  if (param_5 == '\0') {
    if (param_7 == '\0') {
      uVar4 = FUN_1409853f0();
    }
    else {
      uVar4 = FUN_141a155a0();
    }
  }
  else if (param_7 == '\0') {
    uVar4 = FUN_141a15460();
  }
  else {
    uVar4 = FUN_141a15320();
  }
  local_c8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1,&local_108);
  uStack_d0 = FUN_140985530();
  local_d8 = uVar3;
  local_c8 = uVar4;
  lVar5 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_118 = 0;
  local_120 = &DAT_1469f93a0;
  plVar1 = (longlong *)(lVar5 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,&local_128,&local_120);
  plVar7 = plVar11;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *plVar1);
  }
  plVar10 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  lVar5 = *plVar10;
  if (param_3 < 2) {
    local_120 = &DAT_1469f94f0;
  }
  else if (param_3 == 2) {
    local_120 = &DAT_1469f9640;
  }
  else if (param_3 == 3) {
    local_120 = &DAT_1469f9790;
  }
  else if (param_3 == 4) {
    local_120 = &DAT_1469f98e0;
  }
  else if (param_3 == 5) {
    local_120 = &DAT_1469f9a30;
  }
  else if (param_3 == 6) {
    local_120 = &DAT_1469f9b80;
  }
  else if (param_3 == 7) {
    local_120 = &DAT_1469f9cd0;
  }
  else {
    plVar7 = plVar11;
    if (param_3 != 8) goto LAB_141a12b36;
    local_120 = &DAT_1469f9e20;
  }
  local_118 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,&local_128,&local_120);
  plVar7 = _DAT_00000000;
  if ((int)local_128 != -1) {
    lVar8 = (longlong)(int)local_128 * 0x20 + *plVar1;
    puVar6 = (undefined8 *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    plVar7 = (longlong *)*puVar6;
  }
LAB_141a12b36:
  uVar3 = 0;
  puVar6 = (undefined8 *)FUN_141ee3620();
  local_108 = *puVar6;
  if (lVar5 == 0) {
    local_128 = 0;
    plVar11 = (longlong *)0x1;
    uStack_100 = uVar3;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uStack_100 = *(undefined8 *)(lVar5 + 0x38);
  }
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar2 = false;
  if (plVar7 == (longlong *)0x0) {
    bVar2 = true;
    local_128 = 0;
  }
  else {
    lVar5 = plVar7[9];
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_e8 = uVar3;
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = CONCAT44(local_bc._4_4_,1);
  FUN_141ed6ac0(param_1,&local_108,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar9 + 2) = param_8;
  (**(code **)(*plVar7 + 0x30))(plVar7,param_1,param_4,param_3);
  return;
}



// FUNCTION 141a12cc0 ClearUAV body=229 status=ok
// SIG undefined ClearUAV(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ClearUAV(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_2 + 8);
  if (*(int *)(param_2 + 0x18) == 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    local_38 = param_3;
    local_34 = param_3;
    local_30 = param_3;
    local_2c = param_3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144d91e20;
    puVar3[2] = uVar1;
    *(undefined4 *)(puVar3 + 3) = local_38;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_34;
    *(undefined4 *)(puVar3 + 4) = local_30;
    *(undefined4 *)((longlong)puVar3 + 0x24) = local_2c;
  }
  else {
    FUN_141a12e90(param_1,uVar1,*(int *)(param_2 + 0x18),param_3);
  }
  return;
}



// FUNCTION 141a12db0 ClearUAV body=216 status=ok
// SIG undefined ClearUAV(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ClearUAV(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 5;
    local_38 = param_4;
    local_34 = param_4;
    local_30 = param_4;
    local_2c = param_4;
    if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar2;
    *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_LAB_144d91e20;
    puVar2[2] = param_2;
    *(undefined4 *)(puVar2 + 3) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = local_34;
    *(undefined4 *)(puVar2 + 4) = local_30;
    *(undefined4 *)((longlong)puVar2 + 0x24) = local_2c;
  }
  else {
    FUN_141a12e90();
  }
  return;
}



// FUNCTION 141a12e90 FUN_141a12e90 body=463 status=ok
// SIG undefined FUN_141a12e90(void)

void FUN_141a12e90(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int local_res18 [2];
  undefined *local_38;
  undefined4 local_30;
  
  local_38 = &DAT_1469f64b0;
  local_30 = 0;
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,local_res18,&local_38);
  plVar6 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar7 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar3 = *plVar7;
  lVar1 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  uVar8 = param_3 + 3U >> 2;
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e50;
  puVar5[2] = uVar2;
  FUN_141a17900(lVar3,param_1,param_2,uVar8,param_4);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d8df50;
  *(uint *)(puVar5 + 2) = uVar8 + 0x3f >> 6;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 1;
  *(undefined4 *)(puVar5 + 3) = 1;
  FUN_141a15060(lVar3,param_1,param_2);
  return;
}



// FUNCTION 141a13060 ConstructCompiledInstance body=157 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 *
FClearTexture2DArrayReplacementCS<unsigned_int>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d911d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearColor",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ClearTextureArrayRW",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13100 ConstructCompiledInstance body=157 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FClearTexture2DReplacementCS<unsigned_int>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d911d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearColor",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ClearTextureRW",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a131a0 ConstructCompiledInstance body=157 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FClearVolumeReplacementCS<unsigned_int>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d911d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearColor",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ClearVolumeRW",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13240 FUN_141a13240 body=183 status=ok
// SIG undefined FUN_141a13240(void)

undefined8 * FUN_141a13240(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d910f0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearValue",1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d8e6a0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"ClearResource",1)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}


