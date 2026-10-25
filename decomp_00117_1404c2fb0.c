// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404c2fb0 FUN_1404c2fb0 body=135 status=ok
// SIG undefined FUN_1404c2fb0(void)

longlong FUN_1404c2fb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1980);
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
  FUN_1404bfa80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x19a0);
  }
  return param_1;
}



// FUNCTION 1404c3040 FUN_1404c3040 body=106 status=ok
// SIG undefined FUN_1404c3040(void)

longlong FUN_1404c3040(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  FUN_1404bec90(param_1 + 0x60);
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1404c30b0 FUN_1404c30b0 body=238 status=ok
// SIG undefined FUN_1404c30b0(void)

longlong FUN_1404c30b0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x118);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x108);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  FUN_1404bec90(param_1 + 0x60);
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 1404c31a0 FUN_1404c31a0 body=226 status=ok
// SIG undefined FUN_1404c31a0(void)

longlong FUN_1404c31a0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x150);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x100);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe0);
  FUN_1404bed10(param_1 + 0xd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  FUN_1404bec90(param_1 + 0x60);
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1404c3290 FUN_1404c3290 body=141 status=ok
// SIG undefined FUN_1404c3290(void)

longlong FUN_1404c3290(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1404c3320 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOnlinePIESettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
  ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404c3360 FUN_1404c3360 body=121 status=ok
// SIG undefined FUN_1404c3360(void)

longlong FUN_1404c3360(longlong param_1,ulonglong param_2)

{
  FUN_1404bf650(param_1 + 0xd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 1404c33e0 FUN_1404c33e0 body=136 status=ok
// SIG undefined FUN_1404c33e0(void)

undefined8 * FUN_1404c33e0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_143f773e8;
  param_1[5] = &PTR_LAB_143f77960;
  uVar1 = param_1[0xca];
  param_1[0xca] = 0;
  TDefaultDelete<FVoicePacketBuffer>::operator()(param_1 + 0xca,uVar1);
  TDefaultDelete<FVoicePacketBuffer>::operator()(param_1 + 0xca,param_1[0xca]);
  FUN_1404c01f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x660);
  }
  return param_1;
}



// FUNCTION 1404c3470 Add body=230 status=ok
// SIG undefined Add(void)

/* WARNING: Removing unreachable block (ram,0x0001404c3545) */

undefined8 *
TBaseMulticastDelegate<void>::Add(longlong *param_1,undefined8 *param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  uVar4 = 0;
  *param_2 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res10);
      uVar4 = *puVar3;
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar4;
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(int *)(puVar3 + 1) = local_20;
  }
  return param_2;
}



// FUNCTION 1404c3560 FUN_1404c3560 body=1388 status=ok
// SIG undefined FUN_1404c3560(void)

void FUN_1404c3560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    FUN_1404b8b20(param_2 + 0x78,param_1,&LAB_1404c215c);
    FUN_1404b8b20(param_2 + 0x88,param_1,&LAB_1404c2120);
    FUN_1404b8b20(param_2 + 0xe8,param_1,&LAB_1404c2130);
    FUN_1404b8b20(param_2 + 0xf8,param_1,FUN_1404c2138);
    FUN_1404b8b20(param_2 + 0x108,param_1,&LAB_1404c2144);
    FUN_1404b8b20(param_2 + 0x118,param_1,&LAB_1404c2150);
    FUN_1404b8b20(param_2 + 0x128,param_1,&LAB_1404c206c);
    plVar1 = (longlong *)(param_2 + 0x138);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&PTR_GetPoolName_143f78048;
      plVar3[2] = (longlong)&LAB_1404c2078;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f78090;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x140) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x140) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x148);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&PTR_GetPoolName_143f780d8;
      plVar3[2] = (longlong)&LAB_1404c2084;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f78120;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x150) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x150) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x158);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c2090;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x160) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x160) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x168);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c20e4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x170) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x170) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    FUN_1404b8b20(param_2 + 0x178,param_1,&LAB_1404c2108);
    plVar1 = (longlong *)(param_2 + 0x188);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c20b4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 400) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 400) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x98);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c2114;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0xa0) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0xa0) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1404c3ad0 FUN_1404c3ad0 body=147 status=ok
// SIG undefined FUN_1404c3ad0(void)

void FUN_1404c3ad0(longlong param_1,longlong *param_2)

{
  longlong local_28 [4];
  
  local_28[1] = 0xc;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"beacon_guid",0x18);
  FUN_141682af0(param_1 + 0xac,local_28 + 2,0);
  (**(code **)(*param_2 + 8))(param_2,local_28,local_28 + 2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c3b70 FUN_1404c3b70 body=1153 status=ok
// SIG undefined FUN_1404c3b70(void)

void FUN_1404c3b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    FUN_1404b8b20(param_2 + 0x78,param_1,&LAB_1404c215c);
    FUN_1404b8b20(param_2 + 0x88,param_1,&LAB_1404c2120);
    plVar1 = (longlong *)(param_2 + 0xe0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)FUN_1404c2128;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0xe8) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0xe8) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0xf0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404acf9c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0xf8) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0xf8) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x100);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c209c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x108) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x108) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x110);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_1404c20a8;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x118) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x118) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar1 = (longlong *)(param_2 + 0x120);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&PTR_GetPoolName_143f77fb8;
      plVar3[2] = (longlong)&LAB_1404c20c0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f78000;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x128) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x128) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    FUN_1404b8b20(param_2 + 0x130,param_1,&LAB_1404c20cc);
    FUN_1404b8b20(param_2 + 0x140,param_1,&LAB_1404c20d8);
    FUN_1404b8b20(param_2 + 0x150,param_1,&LAB_1404c20f0);
    FUN_1404b8b20(param_2 + 0x160,param_1,&LAB_1404c20fc);
  }
  return;
}



// FUNCTION 1404c4000 FUN_1404c4000 body=489 status=ok
// SIG undefined FUN_1404c4000(void)

void FUN_1404c4000(longlong param_1,void **param_2,undefined1 param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_res10 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  void *local_50;
  ulonglong local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  
  if (1 < *(int *)(param_2 + 1)) {
    FString::FString(local_78);
    FString::FString(local_88,local_78);
    FString::FString(local_68,local_88);
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar5 = FUN_1404ba650(plVar1,local_68);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (lVar5 == 0) {
      iVar3 = (**(code **)(*param_4 + 0x2d0))(param_4,0);
      iVar4 = FUN_1404cf990(param_1);
      if (iVar4 + iVar3 < *(int *)(param_1 + 0x38)) {
        local_58[0] = 0xffffffff;
        local_50 = (void *)0x0;
        local_48 = 0;
        local_3c = 0;
        local_34 = 0;
        local_30 = 0;
        local_40 = 2;
        if (&local_50 != param_2) {
          uVar2 = *(uint *)(param_2 + 1);
          _Src = *param_2;
          local_48 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,uVar2,0);
            _guard_xfg_dispatch_icall_nop(local_50,_Src,(longlong)(int)uVar2 * 2);
          }
        }
        local_res10[0] = 0xffffffff;
        local_40 = param_3;
        FUN_14170c210(local_res10,param_4);
        FUN_1416ff870(local_58,local_res10);
        FUN_1416f8340(local_res10[0]);
        iVar4 = *(int *)(param_1 + 0x30);
        local_34 = 2;
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        local_3c._0_4_ = iVar3;
        if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
        }
        puVar7 = (undefined4 *)((longlong)iVar4 * 0x30 + *plVar1);
        *puVar7 = 0xffffffff;
        uVar6 = FUN_1416f8720(local_58[0]);
        FUN_14170c210(puVar7,uVar6);
        FString::FString(puVar7 + 2,&local_50);
        *(undefined1 *)(puVar7 + 6) = local_40;
        puVar7[7] = (int)local_3c;
        puVar7[8] = local_3c._4_4_;
        puVar7[9] = local_34;
        *(undefined8 *)(puVar7 + 10) = local_30;
        if (local_50 != (void *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(local_58[0]);
      }
    }
  }
  return;
}



// FUNCTION 1404c41f0 FUN_1404c41f0 body=628 status=ok
// SIG undefined FUN_1404c41f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404c41f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  void **ppvVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)(param_1 + 0x40);
  local_a8 = param_1;
  lVar3 = FUN_1404ccd90(plVar6,*param_2 + 0x10);
  if ((lVar3 == 0) && (lVar3 = FUN_1404cf3e0(), lVar3 != 0)) {
    lVar10 = *param_2;
    ppvVar9 = (void **)(lVar10 + 0x10);
    lVar4 = FUN_1404ccd90(plVar6,ppvVar9);
    uVar8 = 0;
    lVar7 = param_1;
    if (lVar4 == 0) {
      local_54 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_50 = 0;
      local_64 = lVar4;
      uStack_5c = lVar4;
      if (&local_88 != ppvVar9) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        _Src = *ppvVar9;
        local_80 = (ulonglong)uVar1;
        if (uVar1 == 0) {
          local_80 = 0;
          lVar7 = local_a8;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,uVar1,0);
          _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)(int)uVar1 * 2);
          lVar7 = local_a8;
        }
      }
      puVar5 = (undefined8 *)FGuid::NewGuid(local_a0);
      iVar2 = *(int *)(param_1 + 0x48);
      local_78 = *puVar5;
      uStack_70 = puVar5[1];
      *(int *)(param_1 + 0x48) = iVar2 + 1;
      if (*(int *)(param_1 + 0x4c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar6,iVar2);
      }
      lVar10 = (longlong)iVar2 * 0x40 + *plVar6;
      FString::FString(lVar10,&local_88);
      *(undefined8 *)(lVar10 + 0x10) = local_78;
      *(undefined8 *)(lVar10 + 0x18) = uStack_70;
      *(undefined4 *)(lVar10 + 0x20) = local_68;
      *(undefined4 *)(lVar10 + 0x24) = (undefined4)local_64;
      *(undefined4 *)(lVar10 + 0x28) = local_64._4_4_;
      *(undefined4 *)(lVar10 + 0x2c) = (undefined4)uStack_5c;
      *(undefined4 *)(lVar10 + 0x30) = uStack_5c._4_4_;
      *(undefined4 *)(lVar10 + 0x34) = local_54;
      *(undefined8 *)(lVar10 + 0x38) = local_50;
      FUN_1404cc5b0(plVar6);
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
    }
    lVar10 = FUN_1404ccd90(plVar6,ppvVar9);
    if (lVar10 != 0) {
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        plVar6[1] = lVar7;
        *plVar6 = (longlong)&DAT_143f3ed00;
        plVar6[2] = (longlong)FUN_1404db820;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x20,1);
        puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_a8);
        iVar2 = *(int *)(lVar3 + 0x28);
        uVar8 = *puVar5;
        *(int *)(lVar3 + 0x28) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x2c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x20,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x20));
        *puVar5 = plVar6;
        *(undefined4 *)(puVar5 + 1) = 3;
      }
      *(undefined8 *)(lVar10 + 0x38) = uVar8;
      FUN_1404e6a20(lVar3,lVar10 + 0x10,*(undefined4 *)(lVar10 + 0x20),*param_2 + 0x98);
    }
  }
  return;
}



// FUNCTION 1404c4470 FUN_1404c4470 body=33 status=ok
// SIG undefined FUN_1404c4470(void)

void FUN_1404c4470(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x58,local_res10);
  }
  return;
}



// FUNCTION 1404c44a0 FUN_1404c44a0 body=967 status=ok
// SIG undefined FUN_1404c44a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404c44a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x30);
  local_88 = param_3;
  for (puVar9 = puVar6; puVar9 != puVar6 + (longlong)iVar8 * 4; puVar9 = puVar9 + 4) {
    cVar5 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar9);
    if (cVar5 != '\0') {
      iVar8 = (int)((longlong)puVar9 - (longlong)puVar6 >> 5);
      goto LAB_1404c4510;
    }
  }
  iVar8 = -1;
LAB_1404c4510:
  if (iVar8 == -1) {
    iVar8 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x28,iVar8);
    }
    lVar10 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar8 * 0x20;
    *(undefined8 *)(lVar11 + lVar10) = 0;
    *(undefined8 *)(lVar11 + 8 + lVar10) = 0;
    *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0;
    *(undefined8 *)(lVar11 + 0x18 + lVar10) = 0;
    plVar3 = (longlong *)param_2[1];
    puVar6 = (undefined8 *)*param_2;
    ppuVar7 = (undefined8 **)(*(longlong *)(param_1 + 0x28) + lVar11);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_88 = puVar6;
    plStack_80 = plVar3;
    if (&local_88 != ppuVar7) {
      local_88 = *ppuVar7;
      plStack_80 = ppuVar7[1];
      *ppuVar7 = puVar6;
      ppuVar7[1] = plVar3;
      local_68 = puVar6;
      plStack_60 = plVar3;
    }
    plVar3 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x28) + lVar11;
    iVar8 = *(int *)(lVar11 + 0x18);
    lVar12 = (longlong)iVar8;
    *(int *)(lVar11 + 0x18) = iVar8 + 1;
    if (*(int *)(lVar11 + 0x1c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x10,iVar8);
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar8 * 0x20;
    uVar4 = *local_88;
    puVar6 = *(undefined8 **)(lVar10 + 0x10 + lVar11);
    puVar9 = puVar6 + (longlong)*(int *)(lVar10 + 0x18 + lVar11) * 2;
    if (puVar6 != puVar9) {
      do {
        cVar5 = (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar4);
        param_3 = local_88;
        if (cVar5 != '\0') goto LAB_1404c46aa;
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar9);
      lVar10 = *(longlong *)(param_1 + 0x28);
    }
    iVar8 = *(int *)(lVar11 + 0x18 + lVar10);
    lVar12 = (longlong)iVar8;
    lVar11 = lVar11 + lVar10;
    *(int *)(lVar11 + 0x18) = iVar8 + 1;
    param_3 = local_88;
    if (*(int *)(lVar11 + 0x1c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x10,iVar8);
      param_3 = local_88;
    }
  }
  puVar6 = (undefined8 *)(lVar12 * 0x10 + *(longlong *)(lVar11 + 0x10));
  *puVar6 = *param_3;
  lVar11 = param_3[1];
  puVar6[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
LAB_1404c46aa:
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x30);
  puVar9 = puVar6;
  do {
    if (puVar9 == puVar6 + (longlong)iVar8 * 4) {
      iVar8 = -1;
LAB_1404c46e1:
      if (iVar8 == -1) {
        iVar8 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar8 + 1;
        if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1 + 0x28,iVar8);
        }
        lVar10 = *(longlong *)(param_1 + 0x28);
        lVar11 = (longlong)iVar8 * 0x20;
        *(undefined8 *)(lVar11 + lVar10) = 0;
        *(undefined8 *)(lVar11 + 8 + lVar10) = 0;
        *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0;
        *(undefined8 *)(lVar11 + 0x18 + lVar10) = 0;
        plVar3 = (longlong *)param_3[1];
        uVar4 = *param_3;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar11);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_78 = uVar4;
        plStack_70 = plVar3;
        if (&local_78 != puVar6) {
          local_78 = *puVar6;
          plStack_70 = (longlong *)puVar6[1];
          *puVar6 = uVar4;
          puVar6[1] = plVar3;
          local_58 = uVar4;
          plStack_50 = plVar3;
        }
        plVar3 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_70 + 8))(plStack_70,1);
            }
          }
        }
        lVar11 = *(longlong *)(param_1 + 0x28) + lVar11;
      }
      else {
        lVar11 = *(longlong *)(param_1 + 0x28);
        uVar4 = *param_2;
        lVar10 = (longlong)iVar8 * 0x20;
        puVar6 = *(undefined8 **)(lVar11 + 0x10 + lVar10);
        puVar9 = puVar6 + (longlong)*(int *)(lVar11 + 0x18 + lVar10) * 2;
        if (puVar6 != puVar9) {
          do {
            cVar5 = (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar4);
            if (cVar5 != '\0') {
              return;
            }
            puVar6 = puVar6 + 2;
          } while (puVar6 != puVar9);
          lVar11 = *(longlong *)(param_1 + 0x28);
        }
        lVar11 = lVar11 + lVar10;
      }
      iVar8 = *(int *)(lVar11 + 0x18);
      *(int *)(lVar11 + 0x18) = iVar8 + 1;
      if (*(int *)(lVar11 + 0x1c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x10,iVar8);
      }
      puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar11 + 0x10));
      *puVar6 = *param_2;
      lVar11 = param_2[1];
      puVar6[1] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      return;
    }
    cVar5 = (*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,*puVar9);
    if (cVar5 != '\0') {
      iVar8 = (int)((longlong)puVar9 - (longlong)puVar6 >> 5);
      goto LAB_1404c46e1;
    }
    puVar9 = puVar9 + 4;
  } while( true );
}



// FUNCTION 1404c4870 FUN_1404c4870 body=85 status=ok
// SIG undefined FUN_1404c4870(void)

undefined8 * FUN_1404c4870(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x1a8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c48d0 FUN_1404c48d0 body=85 status=ok
// SIG undefined FUN_1404c48d0(void)

undefined8 * FUN_1404c48d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 400,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4930 FUN_1404c4930 body=261 status=ok
// SIG undefined FUN_1404c4930(void)

/* WARNING: Removing unreachable block (ram,0x0001404c49fa) */

undefined8 * FUN_1404c4930(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x130);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar2 + 1;
    if (*(int *)(param_1 + 0x13c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c4a40 FUN_1404c4a40 body=261 status=ok
// SIG undefined FUN_1404c4a40(void)

/* WARNING: Removing unreachable block (ram,0x0001404c4b0a) */

undefined8 * FUN_1404c4a40(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x148);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x150) = iVar2 + 1;
    if (*(int *)(param_1 + 0x154) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c4b50 FUN_1404c4b50 body=85 status=ok
// SIG undefined FUN_1404c4b50(void)

undefined8 * FUN_1404c4b50(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x1d8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4bb0 FUN_1404c4bb0 body=85 status=ok
// SIG undefined FUN_1404c4bb0(void)

undefined8 * FUN_1404c4bb0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x1f0,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4c10 FUN_1404c4c10 body=82 status=ok
// SIG undefined FUN_1404c4c10(void)

undefined8 * FUN_1404c4c10(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x58,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4c70 FUN_1404c4c70 body=82 status=ok
// SIG undefined FUN_1404c4c70(void)

undefined8 * FUN_1404c4c70(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x40,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4cd0 FUN_1404c4cd0 body=85 status=ok
// SIG undefined FUN_1404c4cd0(void)

undefined8 * FUN_1404c4cd0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x208,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4d30 FUN_1404c4d30 body=261 status=ok
// SIG undefined FUN_1404c4d30(void)

/* WARNING: Removing unreachable block (ram,0x0001404c4dfa) */

undefined8 * FUN_1404c4d30(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c4e40 FUN_1404c4e40 body=85 status=ok
// SIG undefined FUN_1404c4e40(void)

undefined8 * FUN_1404c4e40(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x88,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4ea0 AddTTLOnDisconectFromOnlineSystemDelegate_Handle body=82 status=ok
// SIG undefined AddTTLOnDisconectFromOnlineSystemDelegate_Handle(void)

undefined8 *
IOnlineSubsystem::AddTTLOnDisconectFromOnlineSystemDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x70,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c4f00 FUN_1404c4f00 body=261 status=ok
// SIG undefined FUN_1404c4f00(void)

/* WARNING: Removing unreachable block (ram,0x0001404c4fca) */

undefined8 * FUN_1404c4f00(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x100);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar2 + 1;
    if (*(int *)(param_1 + 0x10c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5010 FUN_1404c5010 body=261 status=ok
// SIG undefined FUN_1404c5010(void)

/* WARNING: Removing unreachable block (ram,0x0001404c50da) */

undefined8 * FUN_1404c5010(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xdc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5120 FUN_1404c5120 body=261 status=ok
// SIG undefined FUN_1404c5120(void)

/* WARNING: Removing unreachable block (ram,0x0001404c51ea) */

undefined8 * FUN_1404c5120(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xac) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5230 AddOnConnectionStatusChangedDelegate_Handle body=258 status=ok
// SIG undefined AddOnConnectionStatusChangedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404c52f7) */

undefined8 *
IOnlineSubsystem::AddOnConnectionStatusChangedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5340 FUN_1404c5340 body=261 status=ok
// SIG undefined FUN_1404c5340(void)

/* WARNING: Removing unreachable block (ram,0x0001404c540a) */

undefined8 * FUN_1404c5340(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x180);
    *(int *)(param_1 + 0x180) = iVar2 + 1;
    if (*(int *)(param_1 + 0x184) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5450 FUN_1404c5450 body=261 status=ok
// SIG undefined FUN_1404c5450(void)

/* WARNING: Removing unreachable block (ram,0x0001404c551a) */

undefined8 * FUN_1404c5450(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x160);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x168);
    *(int *)(param_1 + 0x168) = iVar2 + 1;
    if (*(int *)(param_1 + 0x16c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5560 FUN_1404c5560 body=258 status=ok
// SIG undefined FUN_1404c5560(void)

/* WARNING: Removing unreachable block (ram,0x0001404c5627) */

undefined8 * FUN_1404c5560(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5670 FUN_1404c5670 body=261 status=ok
// SIG undefined FUN_1404c5670(void)

/* WARNING: Removing unreachable block (ram,0x0001404c573a) */

undefined8 * FUN_1404c5670(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x118);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar2 + 1;
    if (*(int *)(param_1 + 0x124) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5780 FUN_1404c5780 body=261 status=ok
// SIG undefined FUN_1404c5780(void)

/* WARNING: Removing unreachable block (ram,0x0001404c584a) */

undefined8 * FUN_1404c5780(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x220);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x228);
    *(int *)(param_1 + 0x228) = iVar2 + 1;
    if (*(int *)(param_1 + 0x22c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5890 FUN_1404c5890 body=261 status=ok
// SIG undefined FUN_1404c5890(void)

/* WARNING: Removing unreachable block (ram,0x0001404c595a) */

undefined8 * FUN_1404c5890(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x1c0);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x1c8);
    *(int *)(param_1 + 0x1c8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1cc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c59a0 FUN_1404c59a0 body=85 status=ok
// SIG undefined FUN_1404c59a0(void)

undefined8 * FUN_1404c59a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0xb8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c5a00 FUN_1404c5a00 body=82 status=ok
// SIG undefined FUN_1404c5a00(void)

undefined8 * FUN_1404c5a00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x18,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c5a60 AddOnCreateSessionCompleteDelegate_Handle body=82 status=ok
// SIG undefined AddOnCreateSessionCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnCreateSessionCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 8,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c5ac0 FUN_1404c5ac0 body=82 status=ok
// SIG undefined FUN_1404c5ac0(void)

undefined8 * FUN_1404c5ac0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x20,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404c5b20 AddOnLeaderboardFlushCompleteDelegate_Handle body=258 status=ok
// SIG undefined AddOnLeaderboardFlushCompleteDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404c5be7) */

undefined8 *
IOnlineLeaderboards::AddOnLeaderboardFlushCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404c5c30 FUN_1404c5c30 body=637 status=ok
// SIG undefined FUN_1404c5c30(void)

undefined8 FUN_1404c5c30(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  cVar4 = FUN_1404d5db0(param_2);
  iVar6 = 0;
  if (cVar4 != '\0') {
    iVar6 = *(int *)(param_2 + 0x38) + 1;
  }
  cVar4 = (**(code **)(*param_1 + 0x2f0))(param_1,iVar6);
  if (cVar4 == '\0') {
LAB_1404c5e81:
    uVar5 = 0;
  }
  else {
    lVar7 = param_1[0xc];
    lVar8 = (longlong)(int)param_1[0xd] * 0x40 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
      if ((((*(longlong **)(lVar7 + 0x10) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x20))(), cVar4 == '\0')) ||
          (*(longlong **)(param_2 + 0x10) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((*(longlong **)(lVar7 + 0x10) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x20))(), cVar4 == '\0')) &&
          ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0 ||
           (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 == '\0')))) ||
         ((bVar3 && (cVar4 = (**(code **)**(undefined8 **)(param_2 + 0x10))
                                       (*(undefined8 **)(param_2 + 0x10),
                                        *(undefined8 *)(lVar7 + 0x10)), cVar4 != '\0'))))
      goto LAB_1404c5e81;
    }
    plVar1 = param_1 + 0x1a;
    lVar8 = *plVar1;
    lVar7 = lVar8 + (longlong)(int)param_1[0x1b] * 0x48;
    for (; lVar8 != lVar7; lVar8 = lVar8 + 0x48) {
      if ((((*(longlong **)(lVar8 + 0x10) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x20))(), cVar4 == '\0')) ||
          (*(longlong **)(param_2 + 0x10) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((*(longlong **)(lVar8 + 0x10) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x20))(), cVar4 == '\0')) &&
          ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0 ||
           (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 == '\0')))) ||
         ((bVar3 && (cVar4 = (**(code **)**(undefined8 **)(param_2 + 0x10))
                                       (*(undefined8 **)(param_2 + 0x10),
                                        *(undefined8 *)(lVar8 + 0x10)), cVar4 != '\0'))))
      goto LAB_1404c5e81;
    }
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = &PTR_FUN_143f740c8;
    local_68 = &PTR_FUN_143f74340;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_1404c0940(&local_60,param_2 + 8);
    FUN_1404c0480(&local_38,param_2 + 0x30);
    iVar6 = (int)param_1[0x1b];
    local_28 = (undefined4)param_1[7];
    *(int *)(param_1 + 0x1b) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xdc) < iVar6 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x48);
    FUN_1404bdf40(puVar2,&local_68);
    *(undefined4 *)(puVar2 + 8) = local_28;
    local_68 = &PTR_FUN_143f74338;
    *puVar2 = &PTR_FUN_143f74340;
    FUN_1404bebc0(&local_38);
    FUN_1404bf980(&local_60);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1404c5eb0 FUN_1404c5eb0 body=131 status=ok
// SIG undefined FUN_1404c5eb0(void)

void FUN_1404c5eb0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0,0);
  FUN_1404b87f0(param_2,param_1 + 0x68,0,0);
  return;
}



// FUNCTION 1404c5f40 FUN_1404c5f40 body=97 status=ok
// SIG undefined FUN_1404c5f40(void)

void FUN_1404c5f40(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250),0,0);
  return;
}



// FUNCTION 1404c5fb0 AddUninitialized body=214 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

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
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + (longlong)iVar4 * 0x28;
  return param_2;
}



// FUNCTION 1404c6090 FUN_1404c6090 body=100 status=ok
// SIG undefined FUN_1404c6090(void)

void FUN_1404c6090(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x298))(param_1,&local_18);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1404c6100 FUN_1404c6100 body=723 status=ok
// SIG undefined FUN_1404c6100(void)

void FUN_1404c6100(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  local_res18 = 0;
  puVar5 = (undefined8 *)FName::FName(local_res20,"OnlineSubsystem",1);
  uVar6 = FUN_14168dc80();
  cVar4 = FModuleManager::IsModuleLoaded(uVar6,*puVar5);
  if (cVar4 == '\0') {
LAB_1404c62ac:
    plVar8 = (longlong *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FName::FName(local_48,"OnlineSubsystem",1);
    uVar6 = *puVar5;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FModuleManager::GetModule(uVar7,uVar6);
    cVar4 = (**(code **)(*plVar8 + 0x70))(plVar8,0);
    if (cVar4 == '\0') goto LAB_1404c62ac;
    local_res18 = 0;
    plVar8 = (longlong *)FUN_1404b0000(&local_res18);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x48))(plVar8,&local_68);
      if (local_68 != (longlong *)0x0) {
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        local_88 = 0;
        local_80 = 0;
        if (((param_2 != &local_88) && ((int)param_2[1] != 0)) &&
           (plVar9 = (longlong *)*param_2, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_88);
        }
        FUN_1404b8c10(&local_a8,param_1,FUN_1404d9410,&local_88);
        (**(code **)(*local_68 + 0xd8))(local_68,local_40,&local_a8);
        if (local_a0 != 0) {
          if (local_a8 == (longlong *)0x0) goto LAB_1404c6273;
          (**(code **)(*local_a8 + 0x28))(local_a8,0);
          if (local_a8 != (longlong *)0x0) {
            local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
          }
          local_a0 = 0;
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
        }
      }
LAB_1404c6273:
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)FUN_1404b02e0(1);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  if (plVar8 == plVar9) {
    return;
  }
  (**(code **)(*plVar9 + 0x48))(plVar9,&local_58);
  if (local_58 != (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    if (((param_2 != &local_78) && ((int)param_2[1] != 0)) &&
       (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x30))(param_2,&local_78);
    }
    FUN_1404b8c10(&local_98,param_1,FUN_1404d9410,&local_78);
    (**(code **)(*local_58 + 0xd8))(local_58,local_38,&local_98);
    if (local_90 != 0) {
      if (local_98 == (longlong *)0x0) goto LAB_1404c6385;
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
LAB_1404c6385:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 1404c63e0 Broadcast body=177 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404c6448:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1404c6448;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404c64a0 Broadcast body=175 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404c6506:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1404c6506;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404c6550 Broadcast body=175 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404c65b6:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1404c65b6;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404c6600 FUN_1404c6600 body=509 status=ok
// SIG undefined FUN_1404c6600(void)

void FUN_1404c6600(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_78 = &PTR_FUN_143f74338;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = &PTR_FUN_143f740c8;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1404dbbd0(0,&local_78);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar1);
  }
  FUN_1404bdf40((longlong)iVar1 * 0x40 + *param_2,&local_78);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    iVar9 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2);
      iVar9 = (int)param_2[1];
    }
    puVar10 = (undefined8 *)((longlong)iVar9 * 0x40 + *param_2);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x60) + 0x38);
    puVar5 = puVar10 + 5;
    iVar9 = iVar1;
    do {
      *puVar10 = &PTR_FUN_143f74338;
      puVar5[-4] = &PTR_FUN_143f73d18;
      puVar5[-3] = *(undefined8 *)(piVar6 + -10);
      lVar2 = *(longlong *)(piVar6 + -8);
      puVar5[-2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar5[-4] = &PTR_FUN_143f740c8;
      puVar5[-1] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      iVar7 = *piVar6;
      lVar2 = *(longlong *)(piVar6 + -2);
      *(int *)(puVar5 + 2) = iVar7;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar5 + 1,iVar7,0);
        puVar4 = (undefined8 *)puVar5[1];
        puVar8 = (undefined8 *)(lVar2 + 8);
        puVar3 = puVar4 + 4;
        do {
          *puVar4 = &PTR_FUN_143f73d18;
          puVar3[-3] = *puVar8;
          lVar2 = puVar8[1];
          puVar3[-2] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          *puVar4 = &PTR_FUN_143f740c8;
          puVar8 = puVar8 + 5;
          puVar3[-1] = 0;
          puVar4 = puVar4 + 5;
          *puVar3 = 0;
          puVar3 = puVar3 + 5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      puVar10 = puVar10 + 8;
      puVar5 = puVar5 + 8;
      piVar6 = piVar6 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  local_78 = &PTR_FUN_143f74338;
  FUN_1404bebc0(&local_48);
  FUN_1404bf980(&local_70);
  return;
}



// FUNCTION 1404c68e0 FUN_1404c68e0 body=557 status=ok
// SIG undefined FUN_1404c68e0(void)

bool FUN_1404c68e0(uint param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 local_res10;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (param_1 == 0) {
    return true;
  }
  if (DAT_146852f80 == 0) {
    DAT_146852f80 = 1;
    puVar2 = (undefined8 *)FName::FName(&local_res10,L"AssetRegistry",1);
    uVar6 = *puVar2;
    uVar3 = FUN_14168dc80();
    plVar4 = (longlong *)FUN_141690010(uVar3,uVar6);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    lVar5 = FUN_1404e7350();
    (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined8 *)(lVar5 + 0x18),&local_48,1);
    plVar4 = local_48 + (longlong)(int)local_40 * 0xb;
    if (local_48 != plVar4) {
      local_res10 = 0;
      plVar9 = local_48;
      do {
        if (*plVar9 != 0) {
          puVar2 = (undefined8 *)FName::ToString(plVar9,local_38);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar2;
          }
          uVar6 = UObject::GetPrivateStaticClass();
          lVar5 = FUN_141799410(uVar6,0,puVar8,0);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          if (lVar5 == 0) {
            puVar2 = (undefined8 *)FName::ToString(plVar9,local_28);
            if (*(int *)(puVar2 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar2;
            }
            uVar6 = UObject::GetPrivateStaticClass();
            lVar5 = FUN_141799c90(uVar6,0,puVar8,0,0,0,1);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            if (lVar5 == 0) goto LAB_1404c6ab9;
          }
          lVar7 = FUN_1404e7350();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            DAT_146852f80 = DAT_146852f80 | 1L << ((ulonglong)*(uint *)(lVar5 + 0x30) & 0x3f);
          }
        }
LAB_1404c6ab9:
        plVar9 = plVar9 + 0xb;
      } while (plVar9 != plVar4);
    }
    FUN_1404be960(&local_48);
  }
  return (DAT_146852f80 >> ((ulonglong)param_1 & 0x3f) & 1) != 0;
}



// FUNCTION 1404c6b10 FUN_1404c6b10 body=714 status=ok
// SIG undefined FUN_1404c6b10(void)

undefined1 * FUN_1404c6b10(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  if (param_1[4] == 0) {
    return &stack0x00000000;
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  cVar6 = (**(code **)(*param_1 + 0x10))();
  if (cVar6 == '\0') {
    lVar3 = param_1[-0xa8];
    uVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    (**(code **)(lVar3 + 0x420))(param_1 + -0xa8,uVar7,&local_68);
  }
  else {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    (**(code **)(*param_1 + 0x18))(param_1,&local_48);
    plVar9 = local_48 + (int)local_40;
    for (plVar16 = local_48; plVar16 != plVar9; plVar16 = plVar16 + 1) {
      plVar17 = (longlong *)*plVar16;
      if (plVar17 != (longlong *)0x0) {
        lVar3 = *plVar17;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        uVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
        (**(code **)(lVar3 + 0x10))(plVar17,uVar7,&local_58);
        uVar12 = (ulonglong)(int)local_50;
        puVar15 = local_58 + uVar12 * 2;
        puVar18 = local_58;
        if (local_58 != puVar15) {
          do {
            uVar12 = (ulonglong)(int)local_60;
            uVar4 = *puVar18;
            puVar10 = local_68 + uVar12 * 2;
            puVar13 = local_68;
            if (local_68 != puVar10) {
              do {
                cVar6 = (*(code *)**(undefined8 **)*puVar13)((undefined8 *)*puVar13,uVar4);
                if (cVar6 != '\0') goto LAB_1404c6c66;
                puVar13 = puVar13 + 2;
              } while (puVar13 != puVar10);
              uVar12 = local_60 & 0xffffffff;
            }
            iVar8 = (int)uVar12 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar8);
            if (local_60._4_4_ < iVar8) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,uVar12 & 0xffffffff);
            }
            local_68[(longlong)(int)uVar12 * 2] = *puVar18;
            lVar3 = puVar18[1];
            (local_68 + (longlong)(int)uVar12 * 2)[1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
LAB_1404c6c66:
            puVar18 = puVar18 + 2;
          } while (puVar18 != puVar15);
          uVar12 = local_50 & 0xffffffff;
        }
        if ((int)uVar12 != 0) {
          plVar17 = local_58 + 1;
          do {
            plVar5 = (longlong *)*plVar17;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar17 = plVar17 + 2;
            uVar11 = (int)uVar12 - 1;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 != 0);
        }
        if (local_58 != (undefined8 *)0x0) {
          FMemory::Free(local_58);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  bVar14 = 0 < (int)local_60;
  if (0 < (int)local_60) {
    puVar18 = (undefined8 *)*param_3;
    puVar15 = puVar18 + (longlong)(int)param_3[1] * 2;
    if (puVar18 != puVar15) {
      while( true ) {
        uVar4 = *puVar18;
        puVar10 = local_68 + (longlong)(int)local_60 * 2;
        puVar13 = local_68;
        while( true ) {
          if (puVar13 == puVar10) {
            bVar14 = false;
            goto LAB_1404c6d6b;
          }
          cVar6 = (*(code *)**(undefined8 **)*puVar13)((undefined8 *)*puVar13,uVar4);
          if (cVar6 != '\0') break;
          puVar13 = puVar13 + 2;
        }
        puVar18 = puVar18 + 2;
        if (puVar18 == puVar15) break;
      }
    }
  }
LAB_1404c6d6b:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  return (undefined1 *)(ulonglong)bVar14;
}



// FUNCTION 1404c6de0 FUN_1404c6de0 body=595 status=ok
// SIG undefined FUN_1404c6de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c6de0(longlong param_1,undefined1 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 *_Src;
  longlong lVar14;
  undefined1 local_res20 [8];
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar5 = FUN_1404cf3e0();
  if (lVar5 != 0) {
    local_48 = _DAT_146852ec0;
    uStack_44 = _DAT_146852ec4;
    uStack_40 = _DAT_146852ec8;
    uStack_3c = _DAT_146852ecc;
    local_58 = (undefined4 *)0x0;
    local_50 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,0);
    *local_58 = local_48;
    local_58[1] = uStack_44;
    local_58[2] = uStack_40;
    local_58[3] = uStack_3c;
    lVar9 = *param_3;
    lVar14 = (longlong)(int)param_3[1] * 0x10 + lVar9;
    iVar13 = (int)local_50;
    _Src = local_58;
    for (; lVar9 != lVar14; lVar9 = lVar9 + 0x10) {
      lVar6 = FUN_1404ccd90(param_1 + 0x40,lVar9);
      if (lVar6 != 0) {
        lVar11 = (longlong)iVar13;
        iVar12 = iVar13 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar12);
        if (local_50._4_4_ < iVar12) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,iVar13);
          _Src = local_58;
          iVar12 = (int)local_50;
        }
        iVar13 = iVar12;
        uVar2 = *(undefined4 *)(lVar6 + 0x14);
        uVar3 = *(undefined4 *)(lVar6 + 0x18);
        uVar4 = *(undefined4 *)(lVar6 + 0x1c);
        puVar1 = _Src + lVar11 * 4;
        *puVar1 = *(undefined4 *)(lVar6 + 0x10);
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
      }
    }
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1404d8ee0;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar9;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    uVar10 = 0;
    if (plVar7 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x38,1);
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
      iVar12 = *(int *)(lVar5 + 0x40);
      uVar10 = *puVar8;
      *(int *)(lVar5 + 0x40) = iVar12 + 1;
      if (*(int *)(lVar5 + 0x44) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x38,iVar12);
      }
      puVar8 = (undefined8 *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar5 + 0x38));
      *puVar8 = plVar7;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    puVar8 = (undefined8 *)operator_new(0x48);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      FUN_1404bdac0(puVar8,lVar5);
      *puVar8 = &PTR__scalar_deleting_destructor__143f76d50;
      *(undefined1 *)(puVar8 + 4) = param_2;
      puVar8[5] = 0;
      *(int *)(puVar8 + 6) = iVar13;
      if (iVar13 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar8 + 5,iVar13,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar8[5],_Src,(longlong)iVar13 << 4);
        puVar8[7] = 0;
        puVar8[8] = 0;
      }
    }
    FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(lVar5 + 0x50),puVar8);
    if (_Src != (undefined4 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 1404c7040 FUN_1404c7040 body=68 status=ok
// SIG undefined FUN_1404c7040(void)

void FUN_1404c7040(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,*(undefined8 *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1423e85e0(param_1,param_2);
  return;
}



// FUNCTION 1404c7090 FUN_1404c7090 body=59 status=ok
// SIG undefined FUN_1404c7090(void)

void FUN_1404c7090(longlong param_1)

{
  longlong local_18 [2];
  
  FString::FString(local_18);
  FUN_1404bb210(param_1 + 0x28,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404c70d0 FUN_1404c70d0 body=37 status=ok
// SIG undefined FUN_1404c70d0(void)

void FUN_1404c70d0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x1a8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7110 FUN_1404c7110 body=37 status=ok
// SIG undefined FUN_1404c7110(void)

void FUN_1404c7110(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 400,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7150 FUN_1404c7150 body=190 status=ok
// SIG undefined FUN_1404c7150(void)

void FUN_1404c7150(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x130) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x138));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x130),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7220 FUN_1404c7220 body=190 status=ok
// SIG undefined FUN_1404c7220(void)

void FUN_1404c7220(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x148) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x148),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c72f0 FUN_1404c72f0 body=37 status=ok
// SIG undefined FUN_1404c72f0(void)

void FUN_1404c72f0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x1d8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7330 FUN_1404c7330 body=37 status=ok
// SIG undefined FUN_1404c7330(void)

void FUN_1404c7330(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x1f0,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7370 FUN_1404c7370 body=34 status=ok
// SIG undefined FUN_1404c7370(void)

void FUN_1404c7370(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x58,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c73b0 ClearOnValidQueryPacketDelegate_Handle body=34 status=ok
// SIG undefined ClearOnValidQueryPacketDelegate_Handle(void)

void FLANSession::ClearOnValidQueryPacketDelegate_Handle(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x40,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c73f0 FUN_1404c73f0 body=37 status=ok
// SIG undefined FUN_1404c73f0(void)

void FUN_1404c73f0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x208,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7430 FUN_1404c7430 body=190 status=ok
// SIG undefined FUN_1404c7430(void)

void FUN_1404c7430(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xf0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7500 FUN_1404c7500 body=37 status=ok
// SIG undefined FUN_1404c7500(void)

void FUN_1404c7500(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x88,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7540 ClearTTLOnDisconectFromOnlineSystemDelegate_Handle body=34 status=ok
// SIG undefined ClearTTLOnDisconectFromOnlineSystemDelegate_Handle(void)

void IOnlineSubsystem::ClearTTLOnDisconectFromOnlineSystemDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x70,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7580 FUN_1404c7580 body=190 status=ok
// SIG undefined FUN_1404c7580(void)

void FUN_1404c7580(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x100) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x108));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x100),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7650 FUN_1404c7650 body=190 status=ok
// SIG undefined FUN_1404c7650(void)

void FUN_1404c7650(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xd0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xd8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xd0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7720 FUN_1404c7720 body=190 status=ok
// SIG undefined FUN_1404c7720(void)

void FUN_1404c7720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xa8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xa0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c77f0 ClearOnConnectionStatusChangedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnConnectionStatusChangedDelegate_Handle(void)

void IOnlineSubsystem::ClearOnConnectionStatusChangedDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x28),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c78c0 FUN_1404c78c0 body=190 status=ok
// SIG undefined FUN_1404c78c0(void)

void FUN_1404c78c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x178) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x180));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x178),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7990 FUN_1404c7990 body=190 status=ok
// SIG undefined FUN_1404c7990(void)

void FUN_1404c7990(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x168)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x160) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x168));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x160),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7a60 FUN_1404c7a60 body=190 status=ok
// SIG undefined FUN_1404c7a60(void)

void FUN_1404c7a60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x10),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7b30 FUN_1404c7b30 body=190 status=ok
// SIG undefined FUN_1404c7b30(void)

void FUN_1404c7b30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x118) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x120));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x118),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7c00 FUN_1404c7c00 body=190 status=ok
// SIG undefined FUN_1404c7c00(void)

void FUN_1404c7c00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x220) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x228));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x220),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7cd0 FUN_1404c7cd0 body=190 status=ok
// SIG undefined FUN_1404c7cd0(void)

void FUN_1404c7cd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x1c8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1c0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7da0 FUN_1404c7da0 body=37 status=ok
// SIG undefined FUN_1404c7da0(void)

void FUN_1404c7da0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xb8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7de0 FUN_1404c7de0 body=34 status=ok
// SIG undefined FUN_1404c7de0(void)

void FUN_1404c7de0(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x18,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7e20 ClearOnCreateSessionCompleteDelegate_Handle body=34 status=ok
// SIG undefined ClearOnCreateSessionCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnCreateSessionCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 8,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7e50 ClearOnInviteReceivedDelegate_Handle body=34 status=ok
// SIG undefined ClearOnInviteReceivedDelegate_Handle(void)

void IOnlineFriends::ClearOnInviteReceivedDelegate_Handle(longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x20,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7e90 ClearOnLeaderboardFlushCompleteDelegate_Handle body=190 status=ok
// SIG undefined ClearOnLeaderboardFlushCompleteDelegate_Handle(void)

void IOnlineLeaderboards::ClearOnLeaderboardFlushCompleteDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x20),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404c7f50 FUN_1404c7f50 body=142 status=ok
// SIG undefined FUN_1404c7f50(void)

void FUN_1404c7f50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x210))(local_18,param_1 + 0x19);
    (**(code **)(*local_18 + 0x250))(local_18,param_1 + 0x12);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 1404c7fe0 FUN_1404c7fe0 body=146 status=ok
// SIG undefined FUN_1404c7fe0(void)

ulonglong FUN_1404c7fe0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *_Buf2;
  void *_Buf1;
  undefined4 extraout_var;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((int)uVar2 == iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    _Buf2 = (void *)(**(code **)(*param_2 + 0x10))(param_2);
    _Buf1 = (void *)(**(code **)(*param_1 + 0x10))(param_1);
    iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,(longlong)iVar1);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1404c8080 FUN_1404c8080 body=161 status=ok
// SIG undefined FUN_1404c8080(void)

undefined8 FUN_1404c8080(longlong param_1,uint param_2,char param_3)

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
      FUN_1404de290(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404c8130 FUN_1404c8130 body=410 status=ok
// SIG undefined FUN_1404c8130(void)

undefined8 FUN_1404c8130(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_2;
  lVar7 = (longlong)(int)param_2[1] * 0x40 + lVar6;
  do {
    if (lVar6 == lVar7) {
      return 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    bVar2 = false;
    lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar3 == '\0')) ||
          (*(longlong **)(lVar6 + 0x10) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar3 == '\0')) &&
          ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0 ||
           (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')))) ||
         ((bVar1 && (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))
                                       (*(undefined8 **)(lVar6 + 0x10),*(undefined8 *)(lVar4 + 0x10)
                                       ), cVar3 != '\0')))) {
        bVar2 = true;
        break;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xd0);
    lVar4 = lVar5 + (longlong)*(int *)(param_1 + 0xd8) * 0x48;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x48) {
      if ((((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar3 == '\0')) ||
          (*(longlong **)(lVar6 + 0x10) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar3 == '\0')) &&
          ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0 ||
           (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')))) ||
         ((bVar1 && (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))
                                       (*(undefined8 **)(lVar6 + 0x10),*(undefined8 *)(lVar5 + 0x10)
                                       ), cVar3 != '\0')))) goto LAB_1404c8298;
    }
    if (!bVar2) {
      return 1;
    }
LAB_1404c8298:
    lVar6 = lVar6 + 0x40;
  } while( true );
}



// FUNCTION 1404c82d0 FUN_1404c82d0 body=54 status=ok
// SIG undefined FUN_1404c82d0(void)

void FUN_1404c82d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1404c8310 FUN_1404c8310 body=93 status=ok
// SIG undefined FUN_1404c8310(void)

undefined8 * FUN_1404c8310(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b58;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    FString::FString(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404c8370 FUN_1404c8370 body=54 status=ok
// SIG undefined FUN_1404c8370(void)

void FUN_1404c8370(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c18;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    return;
  }
  return;
}



// FUNCTION 1404c83b0 FUN_1404c83b0 body=100 status=ok
// SIG undefined FUN_1404c83b0(void)

undefined8 * FUN_1404c83b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c30;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404c8420 FUN_1404c8420 body=8 status=ok
// SIG undefined FUN_1404c8420(void)

undefined1 FUN_1404c8420(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x141);
}



// FUNCTION 1404c8430 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f780d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143f78120;
  }
  return;
}



// FUNCTION 1404c8480 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f78048;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143f78090;
  }
  return;
}



// FUNCTION 1404c84d0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f77fb8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143f78000;
  }
  return;
}



// FUNCTION 1404c8520 FUN_1404c8520 body=74 status=ok
// SIG undefined FUN_1404c8520(void)

void FUN_1404c8520(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143f77ac8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143f77b10;
  }
  return;
}



// FUNCTION 1404c8570 FUN_1404c8570 body=74 status=ok
// SIG undefined FUN_1404c8570(void)

void FUN_1404c8570(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143f77a38;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143f77a80;
  }
  return;
}



// FUNCTION 1404c85c0 FUN_1404c85c0 body=95 status=ok
// SIG undefined FUN_1404c85c0(void)

void FUN_1404c85c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143f77e98;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_GetPoolName_143f77ee0;
  }
  return;
}



// FUNCTION 1404c8620 FUN_1404c8620 body=84 status=ok
// SIG undefined FUN_1404c8620(void)

void FUN_1404c8620(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77f28;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_143f77f70;
  }
  return;
}



// FUNCTION 1404c8680 FUN_1404c8680 body=84 status=ok
// SIG undefined FUN_1404c8680(void)

void FUN_1404c8680(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b88;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_143f77bd0;
  }
  return;
}



// FUNCTION 1404c86e0 FUN_1404c86e0 body=138 status=ok
// SIG undefined FUN_1404c86e0(void)

void FUN_1404c86e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c48;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    if ((((longlong *)(param_1 + 0x20) != puVar2 + 4) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_143f77c90;
  }
  return;
}



// FUNCTION 1404c8770 CreateCopy body=130 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,TTypeWrapper<void>___cdecl(bool),TBaseDelegate<void,bool>_>
     ::CreateCopy(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f78168;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != puVar2 + 3) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_143f781b0;
  }
  return;
}



// FUNCTION 1404c8800 FUN_1404c8800 body=78 status=ok
// SIG undefined FUN_1404c8800(void)

void FUN_1404c8800(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77df8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_143f77e40;
  }
  return;
}



// FUNCTION 1404c8850 FUN_1404c8850 body=78 status=ok
// SIG undefined FUN_1404c8850(void)

void FUN_1404c8850(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77cd8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_143f77d20;
  }
  return;
}



// FUNCTION 1404c88a0 FUN_1404c88a0 body=78 status=ok
// SIG undefined FUN_1404c88a0(void)

void FUN_1404c88a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77d68;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_143f77db0;
  }
  return;
}



// FUNCTION 1404c88f0 FUN_1404c88f0 body=231 status=ok
// SIG undefined FUN_1404c88f0(void)

longlong * FUN_1404c88f0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new(0x40);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f77e88;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[2] = (longlong)&PTR_FUN_143f74160;
    FString::FString(plVar5 + 5,param_3);
    plVar5[7] = param_4;
  }
  plVar1 = plVar5 + 2;
  local_18 = plVar1;
  local_10 = plVar5;
  FUN_14044f790(&local_18,plVar1);
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1404c89e0 FUN_1404c89e0 body=561 status=ok
// SIG undefined FUN_1404c89e0(void)

longlong * FUN_1404c89e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  void *_Dst;
  longlong *plVar11;
  undefined8 *local_res18;
  longlong *local_18;
  longlong *local_10;
  longlong *plVar12;
  
  iVar2 = *(int *)(param_3 + 1);
  plVar12 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  if (0 < iVar2) {
    iVar6 = FUN_1404cf990();
    if (iVar6 + iVar2 < *(int *)(param_1 + 0x38)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146852fb0) {
        _Init_thread_header(&DAT_146852fb0);
        if (DAT_146852fb0 == -1) {
          FName::FName(&DAT_146852fa8,"ImageWrapper",1);
          _Init_thread_footer(&DAT_146852fb0);
        }
      }
      uVar4 = DAT_146852fa8;
      uVar9 = FUN_14168dc80();
      plVar10 = (longlong *)FUN_141690010(uVar9,uVar4);
      cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10,*param_3,*(undefined4 *)(param_3 + 1));
      if (cVar5 != -1) {
        (**(code **)(*plVar10 + 0x40))(plVar10,&local_18,cVar5,2,0);
        if (local_18 != (longlong *)0x0) {
          cVar5 = (**(code **)*local_18)(local_18,*param_3,*(undefined4 *)(param_3 + 1));
          if (cVar5 != '\0') {
            local_res18 = (undefined8 *)0x0;
            cVar5 = (**(code **)(*local_18 + 0x18))(local_18,2,8,&local_res18);
            if (cVar5 != '\0') {
              uVar7 = (**(code **)(*local_18 + 0x28))(local_18);
              uVar8 = (**(code **)(*local_18 + 0x20))(local_18);
              plVar10 = (longlong *)FUN_142851030(uVar8,uVar7,2);
              plVar12 = plVar11;
              if (((plVar10 != (longlong *)0x0) && (lVar3 = plVar10[0x1b], lVar3 != 0)) &&
                 (0 < *(int *)(lVar3 + 0x18))) {
                *(byte *)((longlong)plVar10 + 0x4b) = *(byte *)((longlong)plVar10 + 0x4b) & 0xfe | 4
                ;
                _Dst = (void *)FUN_14171efb0(**(longlong **)(lVar3 + 0x10) + 8,2);
                if (_Dst != (void *)0x0) {
                  _guard_xfg_dispatch_icall_nop
                            (_Dst,(void *)*local_res18,(longlong)*(int *)(local_res18 + 1));
                  FUntypedBulkData::Unlock(**(longlong **)(plVar10[0x1b] + 0x10) + 8);
                  (**(code **)(*plVar10 + 0x278))(plVar10);
                  plVar12 = plVar10;
                }
              }
            }
          }
        }
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_10 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
      }
    }
  }
  return plVar12;
}



// FUNCTION 1404c8c20 FUN_1404c8c20 body=1130 status=ok
// SIG undefined FUN_1404c8c20(void)

void FUN_1404c8c20(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_res8[0] = 1;
  local_28 = (undefined1 *)FName::FName(local_res18,L"NULL",1);
  lVar1 = param_1 + 8;
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"NULL",1);
  param_1 = param_1 + 0x58;
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 2;
  local_28 = (undefined1 *)FName::FName(local_res18,L"STEAM",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"STEAM",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 3;
  local_28 = (undefined1 *)FName::FName(local_res18,&DAT_143f779d0,1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,&DAT_143f779d0,1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 4;
  local_28 = (undefined1 *)FName::FName(local_res18,L"LIVE",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"LIVE",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 5;
  local_28 = (undefined1 *)FName::FName(local_res18,L"QUAIL",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"QUAIL",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 6;
  local_28 = (undefined1 *)FName::FName(local_res18,&DAT_143f779f8,1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,&DAT_143f779f8,1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 7;
  local_28 = (undefined1 *)FName::FName(local_res18,L"EPIC",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28,0);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"EPIC",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 8;
  local_28 = (undefined1 *)FName::FName(local_res18,&DAT_143f77a10,1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,&DAT_143f77a10,1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 9;
  local_28 = (undefined1 *)FName::FName(local_res18,L"ANVIL",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"ANVIL",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  local_res8[0] = 10;
  local_28 = (undefined1 *)FName::FName(local_res18,L"SPARK",1);
  local_20 = local_res8;
  FUN_1404b9c40(lVar1,local_res10,&local_28);
  local_28 = local_res8;
  local_20 = (undefined1 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404b9f20(param_1,local_res10,&local_28,0);
  return;
}



// FUNCTION 1404c9090 FUN_1404c9090 body=140 status=ok
// SIG undefined FUN_1404c9090(void)

undefined8 FUN_1404c9090(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x378))();
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Unreal",0xe);
  local_res8[0] = 0x118;
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_res8,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1404c9120 FUN_1404c9120 body=406 status=ok
// SIG undefined FUN_1404c9120(void)

longlong * FUN_1404c9120(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar5 = (**(code **)(*param_1 + 0x278))(param_1,param_4);
  if (cVar5 != '\0') {
    FUN_1404cf890(&local_48,param_4);
    if (local_48 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*local_48 + 0x60))(local_48,local_38,param_3);
      if (param_2 != plVar6) {
        *param_2 = *plVar6;
        *plVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar6 + 1);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if ((*param_2 == 0) && (plVar6 = (longlong *)FUN_1404d1210(), plVar6 != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,local_28,param_3,param_4);
    if (param_2 != plVar6) {
      *param_2 = *plVar6;
      *plVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar6 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1404c92c0 FUN_1404c92c0 body=475 status=ok
// SIG undefined FUN_1404c92c0(void)

longlong FUN_1404c92c0(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar8;
  longlong local_78 [2];
  longlong local_68;
  longlong local_60 [2];
  undefined1 local_50 [72];
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if ((DAT_146b17150 != 0) && (lVar1 = FUN_142875430(), lVar1 != 0)) {
    uVar2 = GetTransientPackage();
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar3 = UCurveLinearColor::GetPrivateStaticClass();
    lVar1 = FUN_1417985e0(uVar3,uVar2,0,0,(ulonglong)uVar8 << 0x20,0,0,0,0);
    *(byte *)(lVar1 + 0xb4) = *(byte *)(lVar1 + 0xb4) & 0xdf;
    *(byte *)(lVar1 + 0xb4) = *(byte *)(lVar1 + 0xb4) | 0x40;
    *(undefined4 *)(lVar1 + 0xec) = param_1;
    *(undefined4 *)(lVar1 + 0xe4) = 1;
    *(undefined4 *)(lVar1 + 0x50) = 0x461c4000;
    *(undefined1 *)(lVar1 + 0xb2) = 4;
    *(byte *)(lVar1 + 0xb3) = *(byte *)(lVar1 + 0xb3) & 0xfe;
    uVar2 = FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_50);
    lVar1 = FUN_1422c5640(lVar1,uVar2);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x2f0) = *(byte *)(lVar1 + 0x2f0) & 0xf7 | 0x40;
      FUN_142351eb0(lVar1,0x3fc00000);
      plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
      lVar6 = plVar4[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar6 = plVar4[0x1f];
      }
      local_68 = *(longlong *)(lVar6 + 0x98);
      FString::FString(local_60,lVar6 + 0xa0);
      if (local_68 != 0) {
        puVar5 = (undefined8 *)FSoftObjectPath::ToString(&local_68,local_78);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        uVar2 = LoadObject<USoundClass>(0,puVar7,0,0,0);
        *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 1404c94a0 FUN_1404c94a0 body=381 status=ok
// SIG undefined FUN_1404c94a0(void)

void FUN_1404c94a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x238);
  uVar4 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0x240) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x240) < plVar5) {
    uVar6 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        FUN_1404d5f40(plVar1,0);
        (**(code **)(*plVar1 + 0x288))(plVar1);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  plVar5 = *(longlong **)(param_1 + 0x248);
  uVar6 = (longlong)*(int *)(param_1 + 0x250) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x250) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        if ((((plVar1[9] != 0) && (lVar2 = *(longlong *)(plVar1[9] + 0x90), lVar2 != 0)) &&
            (lVar2 = *(longlong *)(lVar2 + 0x138), lVar2 != 0)) && (*(int *)(lVar2 + 0x1cc) == 2)) {
          FUN_1404dffc0();
          (**(code **)(**(longlong **)(plVar1[9] + 0x90) + 0x2c8))
                    (*(longlong **)(plVar1[9] + 0x90),0);
        }
        (**(code **)(*plVar1 + 0x288))(plVar1);
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x238,0);
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(int *)(param_1 + 0x254) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x248,0);
    return;
  }
  return;
}



// FUNCTION 1404c9620 FUN_1404c9620 body=593 status=ok
// SIG undefined FUN_1404c9620(void)

void FUN_1404c9620(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = UXSparseGridManager::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8) !=
        lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FUN_1404d5f40(param_2,0);
      (**(code **)(*param_2 + 0x288))(param_2);
      lVar1 = (longlong)*(int *)(param_1 + 0x240);
      if (*(int *)(param_1 + 0x240) != 0) {
        iVar6 = 0;
        bVar7 = (longlong *)**(undefined8 **)(param_1 + 0x238) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x238) + lVar3 * 8);
            do {
              if (bVar7 != ((longlong *)*puVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              puVar2 = puVar2 + 1;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar4 * 8),
                         (longlong)(iVar5 - iVar4) << 3);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 0x240) = iVar6;
      }
    }
    else {
      lVar1 = FUN_1404e6f10();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar1 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8) !=
          lVar1 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        FUN_1404c9e90(param_2);
        (**(code **)(*param_2 + 0x288))(param_2);
        lVar1 = (longlong)*(int *)(param_1 + 0x250);
        if (*(int *)(param_1 + 0x250) != 0) {
          iVar6 = 0;
          bVar7 = (longlong *)**(undefined8 **)(param_1 + 0x248) != param_2;
          lVar3 = 0;
          iVar4 = 0;
          do {
            lVar3 = lVar3 + 1;
            iVar5 = iVar4 + 1;
            if (lVar3 < lVar1) {
              puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x248) + lVar3 * 8);
              do {
                if (bVar7 != ((longlong *)*puVar2 != param_2)) break;
                iVar5 = iVar5 + 1;
                lVar3 = lVar3 + 1;
                puVar2 = puVar2 + 1;
              } while (lVar3 < lVar1);
            }
            if (bVar7 != false) {
              if (iVar6 != iVar4) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar6 * 8),
                           (void *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar4 * 8),
                           (longlong)(iVar5 - iVar4) << 3);
              }
              iVar6 = iVar6 + (iVar5 - iVar4);
            }
            bVar7 = (bool)(bVar7 ^ 1);
            iVar4 = iVar5;
          } while (lVar3 < lVar1);
          *(int *)(param_1 + 0x250) = iVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 1404c9880 FUN_1404c9880 body=120 status=ok
// SIG undefined FUN_1404c9880(void)

void FUN_1404c9880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x238);
  plVar1 = plVar3 + *(int *)(param_1 + 0x240);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == param_2)) goto LAB_1404c98ed;
  }
  plVar3 = *(longlong **)(param_1 + 0x248);
  plVar1 = plVar3 + *(int *)(param_1 + 0x250);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == param_2)) goto LAB_1404c98ed;
  }
  lVar2 = 0;
LAB_1404c98ed:
  FUN_1404c9620(param_1,lVar2);
  return;
}



// FUNCTION 1404c9900 FUN_1404c9900 body=287 status=ok
// SIG undefined FUN_1404c9900(void)

void FUN_1404c9900(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar1 = DAT_146b17150;
  lVar3 = param_1[0xb];
  iVar5 = 0;
  if (0 < *(int *)(DAT_146b17150 + 0x9f0)) {
    lVar7 = 0;
    do {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x9e8) + lVar7);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3))
      {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar3 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar3;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar5 < *(int *)(lVar1 + 0x9f0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x9e8,0);
  FUN_1404ca6b0(param_1 + 0xc,0);
  (**(code **)(*param_1 + 0x2c8))(param_1);
  if (param_1[9] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14286cbe0(DAT_146b17150,uVar4,param_1[8]);
    param_1[9] = 0;
  }
  return;
}



// FUNCTION 1404c9a20 FUN_1404c9a20 body=319 status=ok
// SIG undefined FUN_1404c9a20(void)

void FUN_1404c9a20(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[0xb];
  iVar5 = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x19] = 0;
  lVar1 = DAT_146b17150;
  if (0 < *(int *)(DAT_146b17150 + 0x9f0)) {
    lVar7 = 0;
    do {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x9e8) + lVar7);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3))
      {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar3 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar3;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar5 < *(int *)(lVar1 + 0x9f0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x9e8,0);
  FUN_1404ca6b0(param_1 + 0xc,0);
  (**(code **)(*param_1 + 0x2c8))(param_1);
  if (param_1[9] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14286cbe0(DAT_146b17150,uVar4,param_1[8]);
    param_1[9] = 0;
  }
  return;
}



// FUNCTION 1404c9b60 FUN_1404c9b60 body=186 status=ok
// SIG undefined FUN_1404c9b60(void)

void FUN_1404c9b60(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 == (longlong *)0x0) {
    *param_2 = 0;
    FUN_1404cb870(param_4,param_3,1);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*local_18 + 0xd8))(local_18,local_res8,param_4);
    *param_2 = *puVar5;
    (**(code **)(*local_18 + 0xd0))(local_18,param_3);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 1404c9c20 FUN_1404c9c20 body=86 status=ok
// SIG undefined FUN_1404c9c20(void)

void FUN_1404c9c20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f73cd8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001404c9c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1404c9c80 FUN_1404c9c80 body=154 status=ok
// SIG undefined FUN_1404c9c80(void)

void FUN_1404c9c80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f38) {
    _Init_thread_header(&DAT_146852f38);
    if (DAT_146852f38 == -1) {
      FName::FName(&DAT_146852f30,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852f38);
    }
  }
  uVar1 = DAT_146852f30;
  uVar2 = FUN_14168dc80();
  plVar3 = (longlong *)FModuleManager::GetModule(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001404c9cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
  return;
}



// FUNCTION 1404c9d20 FUN_1404c9d20 body=267 status=ok
// SIG undefined FUN_1404c9d20(void)

void FUN_1404c9d20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = FUN_1404cd630();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      param_1 = param_1 + 0x540;
    }
    lVar2 = (longlong)*(int *)(lVar1 + 0x20);
    if (*(int *)(lVar1 + 0x20) != 0) {
      iVar7 = 0;
      bVar8 = **(longlong **)(lVar1 + 0x18) != param_1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x18) + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != param_1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar7 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar5 * 8),
                       (longlong)(iVar6 - iVar5) << 3);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(lVar1 + 0x20) = iVar7;
    }
  }
  return;
}



// FUNCTION 1404c9e30 FUN_1404c9e30 body=88 status=ok
// SIG undefined FUN_1404c9e30(void)

void FUN_1404c9e30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar3 = FUN_1404e74f0();
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
      FUN_1404c9d20(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1404c9e90 FUN_1404c9e90 body=90 status=ok
// SIG undefined FUN_1404c9e90(void)

void FUN_1404c9e90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((*(longlong *)(param_1 + 0x48) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 0x138), lVar1 != 0)) && (*(int *)(lVar1 + 0x1cc) == 2)) {
    FUN_1404dffc0();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0001404c9edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2c8))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 1404c9ef0 IsLoaded body=24 status=ok
// SIG undefined IsLoaded(void)

void UOnlineEngineInterfaceImpl::IsLoaded(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1404aefa0(local_res10);
  return;
}



// FUNCTION 1404c9f10 FUN_1404c9f10 body=165 status=ok
// SIG undefined FUN_1404c9f10(void)

bool FUN_1404c9f10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  lVar6 = 0;
  FUN_1404d0b50(&local_18,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_18 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_18 + 0x2c8))(local_18,param_3);
  }
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
    return lVar6 != 0;
  }
  return lVar6 != 0;
}



// FUNCTION 1404c9fc0 FUN_1404c9fc0 body=618 status=ok
// SIG undefined FUN_1404c9fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404c9fc0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [5];
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar7 = FUN_142b45e90();
  local_110 = (longlong *)0x0;
  local_118 = 0;
  uVar4 = *(undefined8 *)(lVar7 + 0x18);
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 1;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_d8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_110);
  plVar5 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_a0 = 1;
  local_108[2] = 0;
  uVar10 = 3;
  local_c8 = CONCAT44(3,(undefined4)local_c8);
  local_108[3] = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[4] = 0;
  local_e0 = 0;
  puVar8 = (undefined8 *)operator_new(0x28,local_108 + 4);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &DAT_143f3ed00;
    puVar8[2] = FUN_1404d97c0;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f3ed48;
  }
  local_120 = local_108 + 4;
  local_128 = local_108 + 2;
  uVar6 = FUN_142b558f0(uVar4,&local_d8,param_2 + 8,local_108);
  *(undefined4 *)(param_2 + 0x20) = uVar6;
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_108[2] != 0) {
    FMemory::Free();
  }
  bVar11 = *(int *)(param_2 + 0x20) != 0;
  if (bVar11) {
    uVar10 = 1;
  }
  *(undefined4 *)(param_2 + 0x24) = uVar10;
  if (!bVar11) {
    (**(code **)(*param_1 + 0x60))(param_1,0,param_2 + 8,0);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  plVar5 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
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



// FUNCTION 1404ca230 FUN_1404ca230 body=711 status=ok
// SIG undefined FUN_1404ca230(void)

void FUN_1404ca230(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int local_78 [2];
  undefined8 local_70;
  uint local_68;
  uint local_64;
  int local_60 [2];
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [3];
  undefined4 *puVar9;
  
  puVar7 = (undefined4 *)0x0;
  local_78[0] = 0;
  plVar12 = *(longlong **)(param_1 + 0x38);
  local_58 = plVar12 + *(int *)(param_1 + 0x40);
  if (plVar12 != local_58) {
    puVar9 = puVar7;
    do {
      lVar2 = *plVar12;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x68),local_60,lVar2);
      puVar6 = puVar7;
      if (local_60[0] != -1) {
        puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)local_60[0] * 0x18);
      }
      if (lVar2 != 0) {
        puVar4 = puVar6 + 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar4 = puVar7;
        }
        if (puVar4 != (undefined4 *)0x0) {
          plVar11 = *(longlong **)(lVar2 + 0x58);
          plVar10 = plVar11 + *(int *)(lVar2 + 0x60);
          for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
            lVar2 = *plVar11;
            if (((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x30), lVar3 != 0)) &&
               (0 < *(int *)(lVar3 + 0x60))) {
              local_70 = (undefined4 *)
                         CONCAT44(*(undefined4 *)(lVar2 + 0x58),*(undefined4 *)(lVar3 + 0x30));
              FUN_1404cc340(&DAT_1461fb880,local_78,&local_70);
              puVar6 = puVar7;
              if (local_78[0] != -1) {
                puVar6 = (undefined4 *)(DAT_1461fb880 + (longlong)local_78[0] * 0x14);
              }
              puVar4 = puVar6 + 2;
              if (puVar6 == (undefined4 *)0x0) {
                puVar4 = puVar7;
              }
              if (puVar4 == (undefined4 *)0x0) {
                local_50 = 0;
                local_48 = 7;
                uVar8 = (uint)puVar9 | 2;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
                FGenericPlatformString::Memcpy(local_50,L"BAD EB",0xe);
                plVar5 = &local_50;
              }
              else {
                uVar8 = (uint)puVar9 | 1;
                FString::PrintfImpl(local_40,L"EB[%i]",*puVar4);
                plVar5 = local_40;
              }
              puVar9 = (undefined4 *)(ulonglong)uVar8;
              lVar2 = *plVar5;
              *plVar5 = 0;
              plVar5[1] = 0;
              if (((uVar8 & 2) != 0) &&
                 (puVar9 = (undefined4 *)(ulonglong)(uVar8 & 0xfffffffd), local_50 != 0)) {
                FMemory::Free();
              }
              if ((((ulonglong)puVar9 & 1) != 0) &&
                 (puVar9 = (undefined4 *)(ulonglong)((uint)puVar9 & 0xfffffffe), local_40[0] != 0))
              {
                FMemory::Free();
              }
              if (lVar2 != 0) {
                FMemory::Free(lVar2);
              }
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_58);
  }
  if (DAT_146b17150 != 0) {
    plVar10 = *(longlong **)(DAT_146b17150 + 0xc18);
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
    local_64 = 0;
    plVar12 = plVar10 + *(int *)(DAT_146b17150 + 0xc20);
    puVar9 = puVar7;
    puVar6 = puVar7;
    if (plVar10 != plVar12) {
      do {
        plVar11 = *(longlong **)(*plVar10 + 0x290);
        plVar5 = plVar11 + (longlong)*(int *)(*plVar10 + 0x298) * 2;
        local_58 = plVar5;
        if (plVar11 != plVar5) {
          do {
            lVar2 = *plVar11;
            if (lVar2 != 0) {
              iVar1 = *(int *)(lVar2 + 0xa0);
              if (iVar1 != 0) {
                uVar8 = (uint)puVar6;
                if ((int)puVar7 < (int)((uint)puVar6 + iVar1)) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(&local_70);
                  puVar9 = local_70;
                  uVar8 = local_68;
                }
                _guard_xfg_dispatch_icall_nop
                          (puVar9 + (longlong)(int)uVar8 * 2,*(void **)(lVar2 + 0x98),
                           (longlong)iVar1 << 3);
                local_68 = uVar8 + iVar1;
                puVar6 = (undefined4 *)(ulonglong)local_68;
                puVar7 = (undefined4 *)(ulonglong)local_64;
                plVar5 = local_58;
              }
            }
            plVar11 = plVar11 + 2;
          } while (plVar11 != plVar5);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar12);
      if (puVar9 != (undefined4 *)0x0) {
        FMemory::Free(puVar9);
      }
    }
  }
  return;
}



// FUNCTION 1404ca500 FUN_1404ca500 body=133 status=ok
// SIG undefined FUN_1404ca500(void)

void FUN_1404ca500(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  uVar6 = (**(code **)(*param_1 + 0x148))();
  FUN_1404d0b50(&local_18,uVar6,param_1[6]);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x348))();
  }
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
  return;
}



// FUNCTION 1404ca590 FUN_1404ca590 body=102 status=ok
// SIG undefined FUN_1404ca590(void)

void FUN_1404ca590(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1404d13e0(local_18);
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
  return;
}



// FUNCTION 1404ca600 FUN_1404ca600 body=168 status=ok
// SIG undefined FUN_1404ca600(void)

void FUN_1404ca600(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1404ca6b0 FUN_1404ca6b0 body=126 status=ok
// SIG undefined FUN_1404ca6b0(void)

void FUN_1404ca6b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR_FUN_143f74338;
    FUN_1404bebc0(puVar1 + 6);
    FUN_1404bf980(puVar1 + 1);
    puVar1 = puVar1 + 8;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1404ca730 FUN_1404ca730 body=181 status=ok
// SIG undefined FUN_1404ca730(void)

void FUN_1404ca730(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1404c8080(param_1,param_2,1);
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



// FUNCTION 1404ca7f0 Empty body=404 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1404ca8c1;
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
LAB_1404ca8c1:
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
      FVariantData::Empty((longlong)iStack_1c * 0x30 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 1404ca990 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1404caa61;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1404caa61:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1404cab60 Empty body=457 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1404cac31;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1404cac31:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = *(longlong *)(*param_1 + 8 + (longlong)iStack_2c * 0x18);
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x20) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar5,0x38);
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1404cad30 FUN_1404cad30 body=189 status=ok
// SIG undefined FUN_1404cad30(void)

undefined8 *
FUN_1404cad30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  lVar4 = *param_1;
  *param_2 = 0;
  (**(code **)(lVar4 + 0x2b8))(param_1,&local_18);
  if (local_18 == (longlong *)0x0) {
    FUN_1404cb870(param_4,param_3,1);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*local_18 + 0xb0))(local_18,local_res8,param_4);
    *param_2 = *puVar5;
    (**(code **)(*local_18 + 0xa8))(local_18,param_3);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1404cadf0 FUN_1404cadf0 body=393 status=ok
// SIG undefined FUN_1404cadf0(void)

void FUN_1404cadf0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (((local_18 == (longlong *)0x0) ||
      (lVar3 = (**(code **)(*local_18 + 0x10))(local_18,param_2), plVar5 = local_18, lVar3 == 0)) ||
     (*(int *)(lVar3 + 0x110) != 4)) goto LAB_1404caf31;
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_1404c2108;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar3;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0xb0))(plVar5,local_res8,&local_28);
  param_1[0x18] = *plVar5;
  if (local_20 == 0) {
LAB_1404caf13:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_1404caf13;
  }
  (**(code **)(*local_18 + 0xa8))(local_18,param_2);
LAB_1404caf31:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 1404caf80 FUN_1404caf80 body=395 status=ok
// SIG undefined FUN_1404caf80(void)

void FUN_1404caf80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  int local_50;
  longlong local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  
  FUN_1404d0b50(&local_38,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_38 == (longlong *)0x0) {
    TBaseDelegate<void,FName,bool>::ExecuteIfBound(param_4,param_3,0);
    goto LAB_1404cb0b7;
  }
  local_68 = *(undefined8 *)(param_1 + 0x30);
  local_48 = 0;
  local_40 = 0;
  if (((param_4 != &local_48) && ((int)param_4[1] != 0)) &&
     (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
    (**(code **)(*param_4 + 0x30))(param_4,&local_48);
  }
  lVar4 = *local_38;
  uVar6 = FUN_1404b9000(&local_58,param_1,FUN_1404d9240,local_68,&local_48);
  (**(code **)(lVar4 + 0xb0))(local_38,local_60,uVar6);
  if (local_50 == 0) {
LAB_1404cb064:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_1404cb064;
  }
  local_28 = &local_68;
  local_20 = local_60;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (param_1 + 0x90,local_res8,&local_28,0);
  (**(code **)(*local_38 + 0xa8))(local_38,param_3);
LAB_1404cb0b7:
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
  return;
}



// FUNCTION 1404cb110 Exec body=124 status=ok
// SIG undefined Exec(void)

void UIpNetDriver::Exec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar1 = FParse::Command(local_res18,L"SOCKETS",1);
  if (cVar1 != '\0') {
    FUN_1404d2c30(param_1 + -0x28,local_res18[0],param_4,param_2);
    return;
  }
  FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2,local_res18[0],param_4);
  return;
}



// FUNCTION 1404cb1d0 FUN_1404cb1d0 body=178 status=ok
// SIG undefined FUN_1404cb1d0(void)

void FUN_1404cb1d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar5 = (int)param_3[1];
  uVar2 = *(undefined8 *)(param_1 + 8);
  pcVar3 = *(code **)(param_1 + 0x10);
  lVar6 = *param_3;
  local_38 = (undefined8 *)0x0;
  local_30 = iVar5;
  if (iVar5 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
    puVar4 = local_38;
    do {
      FUN_1404bdf40(puVar4,lVar6);
      *puVar4 = &PTR_FUN_143f74340;
      puVar1 = (undefined4 *)(lVar6 + 0x40);
      lVar6 = lVar6 + 0x48;
      *(undefined4 *)(puVar4 + 8) = *puVar1;
      puVar4 = puVar4 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (*pcVar3)(uVar2,param_2,&local_38);
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 1404cb2f0 FUN_1404cb2f0 body=169 status=ok
// SIG undefined FUN_1404cb2f0(void)

void FUN_1404cb2f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1404cb3a0 Execute body=101 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,TTypeWrapper<void>___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001404cb402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404cb410 FUN_1404cb410 body=54 status=ok
// SIG undefined FUN_1404cb410(void)

void FUN_1404cb410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001404cb443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1);
  return;
}



// FUNCTION 1404cb450 FUN_1404cb450 body=154 status=ok
// SIG undefined FUN_1404cb450(void)

void FUN_1404cb450(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x20) != &local_18) && (*(int *)(param_1 + 0x28) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
  }
  (*pcVar1)(uVar3,param_2,param_3,*(undefined8 *)(param_1 + 0x18),&local_18);
  return;
}



// FUNCTION 1404cb4f0 Execute body=127 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,TTypeWrapper<void>___cdecl(bool),TBaseDelegate<void,bool>_>
     ::Execute(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
  }
  (*pcVar1)(uVar3,param_2,&local_18);
  return;
}



// FUNCTION 1404cb570 Execute body=80 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UAsyncActionHandleSaveGame,TTypeWrapper<void>___cdecl(FString_const_&,int,USaveGame_*)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001404cb5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404cb5c0 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,TTypeWrapper<void>___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001404cb5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1404cb600 FUN_1404cb600 body=78 status=ok
// SIG undefined FUN_1404cb600(void)

void FUN_1404cb600(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001404cb64b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404cb650 ExecuteIfBound body=104 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
                    (longlong *param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb6c0 ExecuteIfBound body=133 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
                    (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb750 ExecuteIfBound body=136 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
                    (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb7e0 FUN_1404cb7e0 body=133 status=ok
// SIG undefined FUN_1404cb7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404cb7e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb870 FUN_1404cb870 body=133 status=ok
// SIG undefined FUN_1404cb870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404cb870(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb8c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb900 ExecuteIfBound body=136 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,FName,bool>::ExecuteIfBound
                    (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cb953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cb972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404cb990 FUN_1404cb990 body=41 status=ok
// SIG undefined FUN_1404cb990(void)

undefined8 FUN_1404cb990(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1404cb9c0 ExecuteIfSafe body=31 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool)>
::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1404cb9e0 FUN_1404cb9e0 body=321 status=ok
// SIG undefined FUN_1404cb9e0(void)

undefined8 FUN_1404cb9e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar7 = (int)param_3[1];
  lVar5 = *param_3;
  lVar6 = 0;
  local_48 = 0;
  local_40 = iVar7;
  if (iVar7 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_48,iVar7,0);
    lVar6 = local_48;
    lVar8 = local_48 - lVar5;
    do {
      puVar4 = (undefined8 *)(lVar8 + lVar5);
      FUN_1404bdf40(puVar4,lVar5);
      *puVar4 = &PTR_FUN_143f74340;
      *(undefined4 *)(lVar8 + 0x40 + lVar5) = *(undefined4 *)(lVar5 + 0x40);
      lVar5 = lVar5 + 0x48;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = local_40;
  uVar2 = *(undefined8 *)(param_1 + 8);
  pcVar3 = *(code **)(param_1 + 0x10);
  local_38 = (undefined8 *)0x0;
  local_30 = local_40;
  if (local_40 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0)
    ;
    puVar4 = local_38;
    do {
      FUN_1404bdf40(puVar4,lVar6);
      *puVar4 = &PTR_FUN_143f74340;
      puVar1 = (undefined4 *)(lVar6 + 0x40);
      lVar6 = lVar6 + 0x48;
      *(undefined4 *)(puVar4 + 8) = *puVar1;
      puVar4 = puVar4 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  (*pcVar3)(uVar2,param_2,&local_38);
  FUN_1404bed10(&local_48);
  FUN_1404bed10(param_3);
  return 1;
}



// FUNCTION 1404cbb30 FUN_1404cbb30 body=45 status=ok
// SIG undefined FUN_1404cbb30(void)

undefined8 FUN_1404cbb30(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 1404cbb60 FUN_1404cbb60 body=45 status=ok
// SIG undefined FUN_1404cbb60(void)

undefined8 FUN_1404cbb60(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 1404cbb90 FUN_1404cbb90 body=305 status=ok
// SIG undefined FUN_1404cbb90(void)

undefined8 FUN_1404cbb90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_1404cbc62;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x0001404cbc3a;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_1404cbbda:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x0001404cbc3a:
  plVar7 = plVar8;
  if (bVar9) goto LAB_1404cbc62;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_1404cbc62;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x0001404cbc3a;
LAB_1404cbc62:
  (**(code **)(param_1 + 0x18))((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  uVar6 = 1;
  goto LAB_1404cbbda;
}



// FUNCTION 1404cbcd0 ExecuteIfSafe body=139 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 1404cbd60 FUN_1404cbd60 body=90 status=ok
// SIG undefined FUN_1404cbd60(void)

undefined8 FUN_1404cbd60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 1404cbdc0 FUN_1404cbdc0 body=168 status=ok
// SIG undefined FUN_1404cbdc0(void)

undefined8 FUN_1404cbdc0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined4 local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    local_18 = 0;
    local_10 = 0;
    if ((((longlong *)(param_1 + 0x20) != &local_18) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    (*pcVar1)(uVar4,param_2,param_3,*(undefined8 *)(param_1 + 0x18),&local_18);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1404cbe70 ExecuteIfSafe body=159 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),TBaseDelegate<void,bool>_>
::ExecuteIfSafe(longlong param_1,undefined1 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined4 local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    local_18 = 0;
    local_10 = 0;
    if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    (*pcVar1)(uVar4,param_2,&local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 1404cbf10 ExecuteIfSafe body=109 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UAsyncActionHandleSaveGame,void___cdecl(FString_const_&,int,USaveGame_*)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1404cbf80 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1404cbfe0 FUN_1404cbfe0 body=119 status=ok
// SIG undefined FUN_1404cbfe0(void)

undefined1
FUN_1404cbfe0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1404cc060 FUN_1404cc060 body=231 status=ok
// SIG undefined FUN_1404cc060(void)

longlong FUN_1404cc060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar5 = lVar1;
  while( true ) {
    if (lVar5 == lVar1 + (longlong)(int)lVar3 * 0x28) {
      return 0xffffffff;
    }
    if ((((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))(), cVar4 == '\0')) ||
        (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))(), cVar4 == '\0')) &&
        ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')))) ||
       ((bVar2 && (cVar4 = (**(code **)**(undefined8 **)(param_2 + 8))
                                     (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar5 + 8)),
                  cVar4 != '\0')))) break;
    lVar5 = lVar5 + 0x28;
  }
  return (lVar5 - lVar1) / 0x28;
}



// FUNCTION 1404cc150 FUN_1404cc150 body=495 status=ok
// SIG undefined FUN_1404cc150(void)

void FUN_1404cc150(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  code *local_38;
  undefined4 uStack_30;
  
  cVar6 = (**(code **)(*param_1 + 0x30))();
  if (cVar6 != '\0') {
    return;
  }
  iVar8 = (int)param_1[7];
  if (iVar8 != 0) {
    plVar9 = (longlong *)(param_1[6] + 8);
    do {
      plVar4 = (longlong *)*plVar9;
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
      plVar9 = plVar9 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 9) = 1;
  FUN_1404cdd50(&local_48,0);
  if (local_48 == (longlong *)0x0) {
    FUN_1404d9b50(param_1,2);
    goto LAB_1404cc2d4;
  }
  lVar5 = *local_48;
  local_38 = FUN_1404d9b50;
  uStack_30 = 0;
  uVar7 = FUN_1404b8e50(&local_58,param_1,&local_38);
  plVar9 = (longlong *)(**(code **)(lVar5 + 0x10))(local_48,local_res10,uVar7);
  param_1[8] = *plVar9;
  if (local_50 == 0) {
LAB_1404cc2af:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_1404cc2af;
  }
  (**(code **)(*local_48 + 0x30))(local_48);
LAB_1404cc2d4:
  plVar9 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 1404cc340 FUN_1404cc340 body=180 status=ok
// SIG undefined FUN_1404cc340(void)

int * FUN_1404cc340(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc32(param_3,8);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if (*(int *)(lVar1 + 4 + lVar4 * 0x14) == param_3[1] &&
            *param_3 == *(int *)(lVar1 + lVar4 * 0x14)) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0xc + lVar4 * 0x14);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1404cc400 FUN_1404cc400 body=381 status=ok
// SIG undefined FUN_1404cc400(void)

int FUN_1404cc400(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x60) + lVar6;
      if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 == '\0')) ||
          (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar2 == '\0')) {
        if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
          return iVar5;
        }
        cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
        if (cVar2 == '\0') {
          return iVar5;
        }
      }
      if ((bVar1) &&
         (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                            (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar4 + 0x10)),
         cVar2 != '\0')) {
        return iVar5;
      }
      lVar3 = *(longlong *)(lVar4 + 0x30);
      lVar4 = lVar3 + (longlong)*(int *)(lVar4 + 0x38) * 0x28;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x28) {
        if ((((*(longlong **)(lVar3 + 8) == (longlong *)0x0) ||
             (cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar2 == '\0')) ||
            (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((*(longlong **)(lVar3 + 8) == (longlong *)0x0) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar2 == '\0')) {
          if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
            return iVar5;
          }
          cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
          if (cVar2 == '\0') {
            return iVar5;
          }
        }
        if ((bVar1) &&
           (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                              (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar3 + 8)),
           cVar2 != '\0')) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x40;
    } while (iVar5 < *(int *)(param_1 + 0x68));
  }
  return -1;
}



// FUNCTION 1404cc580 PostInitProperties body=37 status=ok
// SIG undefined PostInitProperties(void)

void UMovieSceneCapture::PostInitProperties(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_1404c9d20();
  }
  FUN_1425bdc30(param_1);
  return;
}



// FUNCTION 1404cc5b0 FUN_1404cc5b0 body=743 status=ok
// SIG undefined FUN_1404cc5b0(void)

void FUN_1404cc5b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_108 [2];
  undefined1 local_f8 [16];
  undefined1 *local_e8;
  undefined1 **local_e0;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  if (param_1[4] == 0) {
    lVar2 = FUN_1404cf3e0();
    if (lVar2 != 0) {
      lVar4 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_res10 = 0;
      FArchive::FArchive(&local_d8);
      local_48 = 0;
      local_d8 = &PTR_FUN_143f4a100;
      local_40 = local_108;
      local_38 = 0;
      FArchive::SetIsSaving(&local_d8,1);
      FArchive::SetIsPersistent(&local_d8,1);
      local_res8[0] = (undefined4)param_1[1];
      if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
        (*(code *)local_d8[10])(&local_d8,local_res8,4);
        if ((local_af & 0x10) != 0) {
          FArchive::ByteSwap(&local_d8,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*local_d0;
        *local_d0 = *local_d0 + 4;
      }
      lVar7 = *param_1;
      lVar9 = (longlong)(int)param_1[1] * 0x40 + lVar7;
      if (lVar7 != lVar9) {
        puVar8 = (undefined4 *)(lVar7 + 0x20);
        do {
          FUN_14158ce90(&local_d8,lVar7);
          FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_f8,&local_d8);
          local_e8 = local_f8;
          local_e0 = &local_e8;
          FUN_141661f40(&local_e8,puVar8 + -4);
          FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_f8);
          if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
            (*(code *)local_d8[10])(&local_d8,puVar8,4);
            if ((local_af & 0x10) != 0) {
              FArchive::ByteSwap(&local_d8,puVar8,4);
            }
          }
          else {
            *puVar8 = *(undefined4 *)*local_d0;
            *local_d0 = *local_d0 + 4;
          }
          FUN_141661e90(&local_d8,puVar8 + 1);
          lVar7 = lVar7 + 0x40;
          puVar8 = puVar8 + 0x10;
        } while (lVar7 != lVar9);
      }
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = (longlong)param_1;
        *plVar3 = (longlong)&DAT_143f3ed00;
        plVar3[2] = (longlong)FUN_1404db7a0;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar4;
        *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x20,1);
        plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_res10);
        iVar1 = *(int *)(lVar2 + 0x28);
        lVar4 = *plVar5;
        *(int *)(lVar2 + 0x28) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x2c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x20,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x20));
        *puVar6 = plVar3;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      param_1[4] = lVar4;
      FUN_1404e6a20(lVar2,&DAT_146852ec0,1,local_108);
      FArchive::~FArchive(&local_d8);
      if (local_108[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 1404cc8a0 FUN_1404cc8a0 body=116 status=ok
// SIG undefined FUN_1404cc8a0(void)

void FUN_1404cc8a0(void *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Dst;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FBase64::Decode(param_2,&local_18);
  iVar1 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  _Dst = *(void **)((longlong)param_1 + 0x10);
  if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
    _Dst = param_1;
  }
  _guard_xfg_dispatch_icall_nop
            (_Dst,local_18,(ulonglong)(uint)(((int)((iVar1 >> 0x1f & 0x1fU) + iVar1) >> 5) << 2));
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404cc920 FromSeconds body=159 status=ok
// SIG undefined FromSeconds(void)

longlong * FTimespan::FromSeconds(longlong *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  dVar3 = param_2 * 10000000.0 + 0.5;
  uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar2);
      dVar3 = (double)(longlong)(lVar5 - (ulonglong)(uVar4 & 1));
    }
  }
  else {
    lVar5 = (longlong)dVar3;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar6;
      uVar4 = movmskpd(0,auVar1);
      *param_1 = (longlong)(double)(longlong)(lVar5 + (ulonglong)(uVar4 & 1 ^ 1));
      return param_1;
    }
  }
  *param_1 = (longlong)dVar3;
  return param_1;
}



// FUNCTION 1404cc9c0 FUN_1404cc9c0 body=756 status=ok
// SIG undefined FUN_1404cc9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404cc9c0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  uint local_64;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong **local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar12 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  iVar10 = 0;
  local_48 = (uint *)0x0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar7 = (longlong *)((longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff);
  if (plVar3 + *(int *)(param_1 + 0x40) < plVar3) {
    plVar7 = plVar12;
  }
  plVar2 = plVar12;
  plVar6 = plVar12;
  plVar8 = plVar12;
  plVar11 = plVar12;
  local_60 = plVar7;
  local_58 = param_1;
  if (plVar7 != (longlong *)0x0) {
    do {
      lVar13 = *plVar3;
      if (0 < *(int *)(lVar13 + 0x60)) {
        iVar10 = *(int *)(lVar13 + 0x60);
        if (iVar10 != 0) {
          iVar5 = (int)plVar6;
          if ((int)plVar2 < (int)plVar6 + iVar10) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_50);
            plVar8 = local_50;
            iVar5 = (int)local_48;
          }
          _guard_xfg_dispatch_icall_nop
                    (plVar8 + iVar5,*(void **)(lVar13 + 0x58),(longlong)iVar10 << 3);
          plVar2 = (longlong *)(ulonglong)local_48._4_4_;
          plVar6 = (longlong *)(ulonglong)(uint)(iVar5 + iVar10);
          local_48 = (uint *)CONCAT44(local_48._4_4_,iVar5 + iVar10);
          plVar7 = local_60;
        }
      }
      plVar3 = plVar3 + 1;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while (plVar11 != plVar7);
    iVar10 = 0;
    if ((int)plVar6 != 0) {
      lVar13 = (longlong)(int)plVar6;
      bVar14 = *plVar8 != 0;
      local_64 = 0;
      plVar3 = plVar12;
      plVar7 = plVar12;
      plVar2 = plVar12;
      do {
        uVar9 = (uint)plVar2;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        plVar2 = (longlong *)(ulonglong)(uVar9 + 1);
        if ((longlong)plVar7 < lVar13) {
          do {
            if (bVar14 != (plVar8[(longlong)plVar7] != 0)) break;
            plVar2 = (longlong *)(ulonglong)((int)plVar2 + 1);
            plVar7 = (longlong *)((longlong)plVar7 + 1);
          } while ((longlong)plVar7 < lVar13);
          plVar3 = (longlong *)(ulonglong)local_64;
        }
        uVar1 = (uint)plVar3;
        iVar10 = (int)plVar2 - uVar9;
        if (bVar14 != false) {
          if (uVar1 != uVar9) {
            _guard_xfg_dispatch_icall_nop
                      (plVar8 + (int)uVar1,plVar8 + (int)uVar9,(longlong)iVar10 << 3);
            uVar1 = local_64;
          }
          local_64 = uVar1 + iVar10;
          plVar3 = (longlong *)(ulonglong)local_64;
        }
        bVar14 = (bool)(bVar14 ^ 1);
      } while ((longlong)plVar7 < lVar13);
      iVar10 = (int)plVar3;
    }
  }
  local_68[0] = 0;
  FUN_1404badd0(plVar8,(longlong)iVar10,0,local_68);
  FUN_1404ca730(&DAT_1461fb880,DAT_1461fb888 - _DAT_1461fb8b4);
  local_40 = (longlong **)0x0;
  local_38 = 0;
  local_34 = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
  lVar13 = local_58;
  local_38 = 0x80;
  pplVar4 = &local_50;
  if (local_40 != (longlong **)0x0) {
    pplVar4 = local_40;
  }
  *pplVar4 = (longlong *)0x0;
  pplVar4[1] = (longlong *)0x0;
  pplVar4 = local_40;
  if ((longlong **)(local_58 + 0x120) == &local_50) {
    if (local_40 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (local_40 == (longlong **)0x0) {
      _guard_xfg_dispatch_icall_nop((longlong **)(local_58 + 0x120),&local_50,0x10);
    }
    if (*(longlong *)(lVar13 + 0x130) != 0) {
      FMemory::Free();
    }
    *(longlong ***)(lVar13 + 0x130) = pplVar4;
    *(undefined4 *)(lVar13 + 0x138) = local_38;
    *(undefined4 *)(lVar13 + 0x13c) = local_34;
  }
  plVar3 = (longlong *)((ulonglong)((longlong)(plVar8 + iVar10) + (7 - (longlong)plVar8)) >> 3);
  if (plVar8 + iVar10 < plVar8) {
    plVar3 = plVar12;
  }
  if (plVar3 != (longlong *)0x0) {
    local_50 = &local_60;
    local_48 = &local_64;
    plVar7 = plVar8;
    uVar9 = 1;
    do {
      lVar13 = *(longlong *)(*plVar7 + 0x30);
      if (lVar13 == 0) {
        local_60 = DAT_146852e50;
      }
      else {
        local_60 = (longlong *)
                   CONCAT44(*(undefined4 *)(*plVar7 + 0x58),*(undefined4 *)(lVar13 + 0x30));
      }
      local_64 = uVar9;
      FUN_1404b99a0(&DAT_1461fb880,&local_58,&local_50,0);
      plVar7 = plVar7 + 1;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      uVar9 = uVar9 + 1;
    } while (plVar12 != plVar3);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  return;
}



// FUNCTION 1404cccc0 FUN_1404cccc0 body=45 status=ok
// SIG undefined FUN_1404cccc0(void)

void FUN_1404cccc0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,param_2,*(undefined4 *)(param_1 + 0xa8),1);
  *(undefined8 *)(param_1 + 0x40) = *puVar1;
  return;
}



// FUNCTION 1404cccf0 FUN_1404cccf0 body=158 status=ok
// SIG undefined FUN_1404cccf0(void)

longlong FUN_1404cccf0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x40 + lVar1;
  if (lVar1 != lVar5) {
    piVar4 = (int *)(lVar1 + 0x18);
    lVar3 = lVar1;
    do {
      if (((piVar4[-2] == *param_2 && piVar4[-1] == param_2[1]) && piVar4[1] == param_2[3]) &&
          param_2[2] == *piVar4) {
        iVar2 = (int)(lVar3 - lVar1 >> 6);
        if (iVar2 < 0) {
          return 0;
        }
        if ((int)param_1[1] <= iVar2) {
          return 0;
        }
        return (longlong)iVar2 * 0x40 + lVar1;
      }
      lVar3 = lVar3 + 0x40;
      piVar4 = piVar4 + 0x10;
    } while (lVar3 != lVar5);
  }
  return 0;
}



// FUNCTION 1404ccd90 FUN_1404ccd90 body=166 status=ok
// SIG undefined FUN_1404ccd90(void)

longlong FUN_1404ccd90(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  puVar6 = puVar1;
  while( true ) {
    if (puVar6 == puVar1 + (longlong)(int)lVar2 * 8) {
      return 0;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) break;
    puVar6 = puVar6 + 8;
  }
  iVar3 = (int)((longlong)puVar6 - (longlong)puVar1 >> 6);
  if (iVar3 < 0) {
    return 0;
  }
  if ((int)param_1[1] <= iVar3) {
    return 0;
  }
  return (longlong)iVar3 * 0x40 + *param_1;
}



// FUNCTION 1404cce40 FUN_1404cce40 body=39 status=ok
// SIG undefined FUN_1404cce40(void)

undefined4 FUN_1404cce40(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1978) + 0x28))
            (*(longlong **)(param_1 + 0x1978),local_res8);
  return local_res8[0];
}



// FUNCTION 1404cce70 FUN_1404cce70 body=39 status=ok
// SIG undefined FUN_1404cce70(void)

undefined4 FUN_1404cce70(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1978) + 0x40))
            (*(longlong **)(param_1 + 0x1978),local_res8);
  return local_res8[0];
}



// FUNCTION 1404ccea0 FUN_1404ccea0 body=460 status=ok
// SIG undefined FUN_1404ccea0(void)

void FUN_1404ccea0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = -1;
    uVar4 = FUN_1404e7160();
    FUN_1417a5560(uVar4,&local_38,1,0x10,0);
    uVar6 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      lVar7 = local_38;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
    do {
      if ((local_28 < 0) || ((int)uVar6 <= local_28)) goto LAB_1404ccff0;
      lVar2 = *(longlong *)(lVar7 + (longlong)local_28 * 8);
      if (lVar2 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x48);
        iVar1 = *(int *)(param_1 + 0x50);
        for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == lVar2) {
            if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_1404ccfba;
            break;
          }
        }
        *(int *)(param_1 + 0x50) = iVar1 + 1;
        if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x48)) = lVar2;
        uVar6 = local_30 & 0xffffffff;
        lVar7 = local_38;
      }
LAB_1404ccfba:
      do {
        local_28 = local_28 + 1;
        if ((int)uVar6 <= local_28) break;
      } while (*(longlong *)(lVar7 + (longlong)local_28 * 8) == 0);
    } while( true );
  }
LAB_1404cd002:
  if (param_2 != (undefined8 *)(param_1 + 0x48)) {
    iVar1 = *(int *)(param_1 + 0x50);
    _Src = *(void **)(param_1 + 0x48);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return;
LAB_1404ccff0:
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  goto LAB_1404cd002;
}



// FUNCTION 1404cd070 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArrayReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FArrayReader",0x1a);
  return param_2;
}



// FUNCTION 1404cd0b0 FUN_1404cd0b0 body=406 status=ok
// SIG undefined FUN_1404cd0b0(void)

undefined8 FUN_1404cd0b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar4 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (DAT_1461fb830 != 0) {
    puVar3 = DAT_1461fb828;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"You already have a connection to this Host.",L"OnlineBeacon",
               L"ErrorKeyDuplicateReservationFound");
    return param_1;
  }
  puVar3 = &DAT_143f3eda8;
  if (DAT_1461fb840 != 0) {
    puVar3 = DAT_1461fb838;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,
               L"Unable to connect to Host because they are running a different version of the game. Please ensure you are fully updated."
               ,L"OnlineBeacon",L"ErrorKeyMismatchedBeaconNetVersions");
    return param_1;
  }
  puVar3 = &DAT_143f3eda8;
  if (DAT_1461fb860 != 0) {
    puVar3 = DAT_1461fb858;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,
               L"Unable to connect to Host because they have downloadable content that you do not have."
               ,L"OnlineBeacon",L"ErrorKeyMissingDLC");
    return param_1;
  }
  puVar3 = &DAT_143f3eda8;
  if (DAT_1461fb810 != 0) {
    puVar3 = DAT_1461fb808;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
  if (iVar1 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,
               L"Unable to connect to Host because their game is full, or they are in an activity where they cannot accept new players."
               ,L"OnlineBeacon",L"ErrorKeyNotAcceptingReservations");
    return param_1;
  }
  FText::FText(param_1);
  return param_1;
}



// FUNCTION 1404cd250 GetDisplayName body=41 status=ok
// SIG undefined GetDisplayName(void)

undefined8 UPawnAction::GetDisplayName(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 1404cd280 GetBytes body=5 status=ok
// SIG undefined GetBytes(void)

undefined8 FUniqueNetIdString::GetBytes(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1404cd290 FUN_1404cd290 body=162 status=ok
// SIG undefined FUN_1404cd290(void)

undefined8 FUN_1404cd290(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_2 + 1) < 2) {
    return 0;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x30) * 0xc;
  while( true ) {
    if (puVar5 == puVar6) {
      return 0;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    if (puVar5[4] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(puVar5 + 2);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if ((iVar1 == 0) && (puVar5[9] == 2)) break;
    puVar5 = puVar5 + 0xc;
  }
  uVar2 = FUN_1416f8720(*puVar5);
  return uVar2;
}



// FUNCTION 1404cd340 FUN_1404cd340 body=748 status=ok
// SIG undefined FUN_1404cd340(void)

void FUN_1404cd340(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar7 = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x148);
    }
    if (lVar7 == 0) {
      FUN_1404b8aa0(param_3,param_1 + 0x568);
    }
    else {
      FUN_1404d0830(lVar7,param_3);
    }
    lVar7 = FUN_1425bd330(*(undefined8 *)(param_1 + 0x90),6);
    if (lVar7 != 0) {
      lVar8 = FUN_1404e6fc0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
        lVar8 = *(longlong *)(lVar7 + 0x60);
        lVar7 = (longlong)*(int *)(lVar7 + 0x68) * 0x40 + lVar8;
        if (lVar8 != lVar7) {
          plVar15 = (longlong *)(lVar8 + 0x10);
          do {
            if (((longlong *)*plVar15 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*(longlong *)*plVar15 + 0x20))(), cVar6 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              puVar10 = (undefined8 *)*param_3;
              lVar12 = *plVar15;
              puVar14 = puVar10 + (longlong)(int)param_3[1] * 2;
              if (puVar10 != puVar14) {
                do {
                  cVar6 = (*(code *)**(undefined8 **)*puVar10)((undefined8 *)*puVar10,lVar12);
                  if (cVar6 != '\0') goto LAB_1404cd507;
                  puVar10 = puVar10 + 2;
                } while (puVar10 != puVar14);
                lVar12 = *plVar15;
              }
              plVar3 = (longlong *)plVar15[1];
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
              }
              plVar9 = (longlong *)((longlong)iVar2 * 0x10 + *param_3);
              *plVar9 = lVar12;
              plVar9[1] = (longlong)plVar3;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
                LOCK();
                plVar9 = plVar3 + 1;
                lVar12 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
            }
LAB_1404cd507:
            lVar13 = plVar15[4];
            lVar12 = lVar13 + (longlong)(int)plVar15[5] * 0x28;
            for (; lVar13 != lVar12; lVar13 = lVar13 + 0x28) {
              puVar10 = (undefined8 *)*param_3;
              uVar11 = *(undefined8 *)(lVar13 + 8);
              puVar14 = puVar10 + (longlong)(int)param_3[1] * 2;
              if (puVar10 != puVar14) {
                do {
                  cVar6 = (*(code *)**(undefined8 **)*puVar10)((undefined8 *)*puVar10,uVar11);
                  if (cVar6 != '\0') goto LAB_1404cd5e6;
                  puVar10 = puVar10 + 2;
                } while (puVar10 != puVar14);
                uVar11 = *(undefined8 *)(lVar13 + 8);
              }
              plVar3 = *(longlong **)(lVar13 + 0x10);
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
              }
              puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_3);
              *puVar10 = uVar11;
              puVar10[1] = plVar3;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
                LOCK();
                plVar9 = plVar3 + 1;
                lVar5 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
LAB_1404cd5e6:
            }
            lVar8 = lVar8 + 0x40;
            plVar15 = plVar15 + 8;
          } while (lVar8 != lVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404cd630 FUN_1404cd630 body=130 status=ok
// SIG undefined FUN_1404cd630(void)

undefined8 FUN_1404cd630(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f58) {
    _Init_thread_header(&DAT_146852f58);
    if (DAT_146852f58 == -1) {
      FName::FName(&DAT_146852f50,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146852f58);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146852f50);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}



// FUNCTION 1404cd6c0 IsAlphaInTonemapperRequiredImpl body=8 status=ok
// SIG undefined IsAlphaInTonemapperRequiredImpl(void)

undefined1 UMoviePipelineDeferredPassBase::IsAlphaInTonemapperRequiredImpl(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd0);
}



// FUNCTION 1404cd6d0 FUN_1404cd6d0 body=1521 status=ok
// SIG undefined FUN_1404cd6d0(void)

undefined8 * FUN_1404cd6d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong local_res8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  if (*(longlong *)(param_1 + -0x4b0) == 0) {
    lVar12 = 0;
    iVar9 = 0;
    if (0 < *(int *)(param_1 + -0x4a0)) {
      do {
        lVar7 = *(longlong *)(lVar12 + *(longlong *)(param_1 + -0x4a8));
        if ((*(longlong **)(lVar7 + 0x160) == (longlong *)0x0) ||
           (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x160) + 0x20))(), cVar6 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (cVar6 = (**(code **)(*(longlong *)*param_3 + 0x20))(), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((*(longlong **)(lVar7 + 0x160) == (longlong *)0x0) ||
           (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x160) + 0x20))(), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((!bVar5) && (cVar6 = (**(code **)(*(longlong *)*param_3 + 0x20))(), cVar6 == '\0')) ||
           ((bVar4 && (cVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x160))
                                         (*(undefined8 **)(lVar7 + 0x160),*param_3), cVar6 != '\0'))
           )) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) goto LAB_1404cdc94;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x4a8) + lVar12);
        plVar10 = *(longlong **)(lVar7 + 0x48);
        plVar8 = plVar10 + *(int *)(lVar7 + 0x50);
        for (; plVar10 != plVar8; plVar10 = plVar10 + 1) {
          lVar7 = *plVar10;
          if ((*(longlong **)(lVar7 + 0x160) == (longlong *)0x0) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x160) + 0x20))(), cVar6 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (cVar6 = (**(code **)(*(longlong *)*param_3 + 0x20))(), cVar6 != '\0')) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((*(longlong **)(lVar7 + 0x160) == (longlong *)0x0) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0x160) + 0x20))(), cVar6 == '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((!bVar5) && (cVar6 = (**(code **)(*(longlong *)*param_3 + 0x20))(), cVar6 == '\0'))
             || ((bVar4 && (cVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x160))
                                              (*(undefined8 **)(lVar7 + 0x160),*param_3),
                           cVar6 != '\0')))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) {
            plVar8 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + -0x4a8) + (longlong)iVar9 * 8) + 0x160)
            ;
            goto LAB_1404cdc98;
          }
        }
        lVar12 = lVar12 + 8;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + -0x4a0));
      if ((0 < *(int *)(param_1 + -0x4a0)) &&
         (lVar12 = FUN_1425bd330(**(undefined8 **)(param_1 + -0x4a8),6), lVar12 != 0)) {
        lVar7 = FUN_1404e6fc0();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar12 = *(longlong *)(lVar12 + 0x68), lVar12 != 0)) {
          plVar8 = (longlong *)param_3[1];
          local_b0 = *param_3;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          local_a0 = 0;
          local_b8 = &PTR_FUN_143f740c8;
          local_98 = 0;
          local_a8 = plVar8;
          iVar9 = FUN_1404cc400(lVar12,&local_b8);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar8 + 1;
            lVar7 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_a8)();
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_a8 + 8))(local_a8,1);
              }
            }
          }
          if ((iVar9 < 0) || (*(int *)(lVar12 + 0x68) <= iVar9)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_1404cd9a4;
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar12 = FUN_1425bd330(*(longlong *)(param_1 + -0x4b0),6);
    local_res8 = 0;
    iVar11 = -1;
    if (lVar12 != 0) {
      lVar7 = FUN_1404e6fc0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar12 = *(longlong *)(lVar12 + 0x68), lVar12 != 0)) {
        plVar8 = (longlong *)param_3[1];
        local_88 = *param_3;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_90 = &PTR_FUN_143f740c8;
        local_78 = 0;
        local_70 = 0;
        local_80 = plVar8;
        iVar9 = FUN_1404cc400(lVar12,&local_90);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_80)();
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if ((iVar9 < 0) || (*(int *)(lVar12 + 0x68) <= iVar9)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
LAB_1404cd9a4:
          FUniqueNetIdWrapper::ToString
                    ((longlong)iVar9 * 0x40 + *(longlong *)(lVar12 + 0x60) + 8,param_2);
          return param_2;
        }
      }
    }
    if (*(longlong *)(param_1 + -0x470) != 0) {
      local_res8 = *(longlong *)(*(longlong *)(param_1 + -0x470) + 0x148);
    }
    if (local_res8 != 0) {
      plVar8 = *(longlong **)(local_res8 + 0x470);
      iVar9 = *(int *)(local_res8 + 0x478);
      for (plVar10 = plVar8; plVar10 != plVar8 + iVar9; plVar10 = plVar10 + 1) {
        if (((*plVar10 == 0) || (*(longlong *)(*plVar10 + 0x4b8) == 0)) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar11 = (int)((longlong)plVar10 - (longlong)plVar8 >> 3);
          if ((-1 < iVar11) && (iVar11 < *(int *)(local_res8 + 0x478))) {
            bVar4 = true;
            goto LAB_1404cdb4c;
          }
          break;
        }
      }
      bVar4 = false;
LAB_1404cdb4c:
      if ((bVar4) &&
         (lVar12 = *(longlong *)(*(longlong *)(local_res8 + 0x470) + (longlong)iVar11 * 8),
         lVar12 != 0)) {
        lVar12 = FUN_14270d050(lVar12,local_68);
        plVar8 = *(longlong **)(lVar12 + 0x10);
        plVar10 = *(longlong **)(lVar12 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_58 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
          if (plVar8 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          plVar10 = plVar8 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 != 1) {
            return param_2;
          }
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 != 1) {
            return param_2;
          }
          (**(code **)(*plVar8 + 8))(plVar8,1);
          return param_2;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
    }
LAB_1404cdc94:
    plVar8 = (longlong *)*param_3;
LAB_1404cdc98:
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  return param_2;
}



// FUNCTION 1404cdcd0 FUN_1404cdcd0 body=114 status=ok
// SIG undefined FUN_1404cdcd0(void)

longlong FUN_1404cdcd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1404ce1d0();
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(lVar2 + 0x48);
  plVar1 = plVar3 + *(int *)(lVar2 + 0x50);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x40) == param_2)) && (*(longlong *)(lVar2 + 0x30) != 0)
        ) && (*(int *)(*(longlong *)(lVar2 + 0x30) + 0x30) == *(int *)(param_1 + 0x30))) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 1404cdd50 FUN_1404cdd50 body=253 status=ok
// SIG undefined FUN_1404cdd50(void)

undefined8 * FUN_1404cdd50(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404cde50 FUN_1404cde50 body=426 status=ok
// SIG undefined FUN_1404cde50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404cde50(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 *local_38;
  int local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar7 = (undefined1 *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_1404ce1d0();
  if (lVar3 != 0) {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    uStack_2c = 0;
    puVar5 = puVar7;
    if (local_48 != (undefined1 *)(lVar3 + 0xe0)) {
      local_30 = *(int *)(lVar3 + 0xf8);
      uVar1 = local_30 + 0x1f + (local_30 + 0x1f >> 0x1f & 0x1fU);
      if ((uVar1 & 0xffffffe0) != 0) {
        local_30 = 0;
        uStack_2c = uVar1 & 0xffffffe0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(local_48,0);
        local_30 = *(int *)(lVar3 + 0xf8);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
      if (local_30 != 0) {
        iVar2 = (int)puVar5 + 0x1f;
        puVar5 = *(undefined1 **)(lVar3 + 0xf0);
        if (*(undefined1 **)(lVar3 + 0xf0) == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)(lVar3 + 0xe0);
        }
        puVar4 = local_48;
        if (local_38 != (undefined1 *)0x0) {
          puVar4 = puVar7;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)puVar4 | (ulonglong)local_38),puVar5,
                   (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
    }
    puVar7 = local_38;
    iVar2 = (int)puVar5 + 0x1f;
    local_5c = 0;
    local_68 = (void *)0x0;
    iVar2 = (int)((iVar2 >> 0x1f & 0x1fU) + iVar2) >> 5;
    iVar6 = iVar2 << 2;
    local_60 = iVar6;
    if (0 < iVar2 << 2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    puVar5 = local_48;
    if (puVar7 != (undefined1 *)0x0) {
      puVar5 = puVar7;
    }
    _guard_xfg_dispatch_icall_nop(local_68,puVar5,(longlong)iVar6);
    FBase64::Encode(&local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (param_2 == &local_58) {
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_58;
      *(undefined4 *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    if (puVar7 != (undefined1 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return param_2;
}



// FUNCTION 1404ce000 FUN_1404ce000 body=32 status=ok
// SIG undefined FUN_1404ce000(void)

undefined8 * FUN_1404ce000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1404ce1d0();
  return param_2;
}



// FUNCTION 1404ce020 FUN_1404ce020 body=426 status=ok
// SIG undefined FUN_1404ce020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404ce020(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 *local_38;
  int local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar7 = (undefined1 *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_1404ce1d0();
  if (lVar3 != 0) {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    uStack_2c = 0;
    puVar5 = puVar7;
    if (local_48 != (undefined1 *)(lVar3 + 0x120)) {
      local_30 = *(int *)(lVar3 + 0x138);
      uVar1 = local_30 + 0x1f + (local_30 + 0x1f >> 0x1f & 0x1fU);
      if ((uVar1 & 0xffffffe0) != 0) {
        local_30 = 0;
        uStack_2c = uVar1 & 0xffffffe0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(local_48,0);
        local_30 = *(int *)(lVar3 + 0x138);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
      if (local_30 != 0) {
        iVar2 = (int)puVar5 + 0x1f;
        puVar5 = *(undefined1 **)(lVar3 + 0x130);
        if (*(undefined1 **)(lVar3 + 0x130) == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)(lVar3 + 0x120);
        }
        puVar4 = local_48;
        if (local_38 != (undefined1 *)0x0) {
          puVar4 = puVar7;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)puVar4 | (ulonglong)local_38),puVar5,
                   (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
    }
    puVar7 = local_38;
    iVar2 = (int)puVar5 + 0x1f;
    local_5c = 0;
    local_68 = (void *)0x0;
    iVar2 = (int)((iVar2 >> 0x1f & 0x1fU) + iVar2) >> 5;
    iVar6 = iVar2 << 2;
    local_60 = iVar6;
    if (0 < iVar2 << 2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    puVar5 = local_48;
    if (puVar7 != (undefined1 *)0x0) {
      puVar5 = puVar7;
    }
    _guard_xfg_dispatch_icall_nop(local_68,puVar5,(longlong)iVar6);
    FBase64::Encode(&local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (param_2 == &local_58) {
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_58;
      *(undefined4 *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    if (puVar7 != (undefined1 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return param_2;
}



// FUNCTION 1404ce1d0 FUN_1404ce1d0 body=130 status=ok
// SIG undefined FUN_1404ce1d0(void)

undefined8 FUN_1404ce1d0(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f68) {
    _Init_thread_header(&DAT_146852f68);
    if (DAT_146852f68 == -1) {
      FName::FName(&DAT_146852f60,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146852f68);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146852f60);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}



// FUNCTION 1404ce260 FUN_1404ce260 body=278 status=ok
// SIG undefined FUN_1404ce260(void)

undefined8 * FUN_1404ce260(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  void **ppvVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 uStack_c;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    local_28 = (void *)0x0;
    local_20 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"Unknown",0x10);
    ppvVar5 = &local_28;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x50);
    _Src = *(void **)(lVar2 + 0x48);
    local_18 = (void *)0x0;
    local_10 = iVar1;
    if (iVar1 == 0) {
      ppvVar5 = &local_18;
      uStack_c = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar1 * 2);
      ppvVar5 = &local_18;
      bVar4 = true;
      bVar3 = false;
    }
  }
  *param_2 = *ppvVar5;
  *ppvVar5 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar5 + 1);
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404ce380 FUN_1404ce380 body=426 status=ok
// SIG undefined FUN_1404ce380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404ce380(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 *local_38;
  int local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar7 = (undefined1 *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_1404ce1d0();
  if (lVar3 != 0) {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    uStack_2c = 0;
    puVar5 = puVar7;
    if (local_48 != (undefined1 *)(lVar3 + 0x100)) {
      local_30 = *(int *)(lVar3 + 0x118);
      uVar1 = local_30 + 0x1f + (local_30 + 0x1f >> 0x1f & 0x1fU);
      if ((uVar1 & 0xffffffe0) != 0) {
        local_30 = 0;
        uStack_2c = uVar1 & 0xffffffe0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(local_48,0);
        local_30 = *(int *)(lVar3 + 0x118);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
      if (local_30 != 0) {
        iVar2 = (int)puVar5 + 0x1f;
        puVar5 = *(undefined1 **)(lVar3 + 0x110);
        if (*(undefined1 **)(lVar3 + 0x110) == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)(lVar3 + 0x100);
        }
        puVar4 = local_48;
        if (local_38 != (undefined1 *)0x0) {
          puVar4 = puVar7;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)puVar4 | (ulonglong)local_38),puVar5,
                   (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
        puVar5 = (undefined1 *)(ulonglong)uStack_2c;
      }
    }
    puVar7 = local_38;
    iVar2 = (int)puVar5 + 0x1f;
    local_5c = 0;
    local_68 = (void *)0x0;
    iVar2 = (int)((iVar2 >> 0x1f & 0x1fU) + iVar2) >> 5;
    iVar6 = iVar2 << 2;
    local_60 = iVar6;
    if (0 < iVar2 << 2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    puVar5 = local_48;
    if (puVar7 != (undefined1 *)0x0) {
      puVar5 = puVar7;
    }
    _guard_xfg_dispatch_icall_nop(local_68,puVar5,(longlong)iVar6);
    FBase64::Encode(&local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (param_2 == &local_58) {
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_58;
      *(undefined4 *)(param_2 + 1) = local_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
    }
    if (puVar7 != (undefined1 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return param_2;
}



// FUNCTION 1404ce530 FUN_1404ce530 body=1715 status=ok
// SIG undefined FUN_1404ce530(void)

/* WARNING: Removing unreachable block (ram,0x0001404cea79) */
/* WARNING: Removing unreachable block (ram,0x0001404ce96f) */
/* WARNING: Removing unreachable block (ram,0x0001404ce897) */
/* WARNING: Removing unreachable block (ram,0x0001404ce759) */
/* WARNING: Removing unreachable block (ram,0x0001404ce659) */
/* WARNING: Removing unreachable block (ram,0x0001404ce5a8) */
/* WARNING: Removing unreachable block (ram,0x0001404ce6db) */
/* WARNING: Removing unreachable block (ram,0x0001404ce813) */
/* WARNING: Removing unreachable block (ram,0x0001404ce903) */
/* WARNING: Removing unreachable block (ram,0x0001404ce9fa) */
/* WARNING: Removing unreachable block (ram,0x0001404ceb45) */

void FUN_1404ce530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  FString::PrintfImpl(&local_98,L"DumpBeaconDebugInfo");
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,&local_68);
  local_res10 = *(undefined8 *)(param_1 + 0xc0);
  puVar11 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar11 = local_68;
  }
  puVar4 = (undefined8 *)FName::ToString(&local_res10,&local_78);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_98,L"   Name: %s (%s)",puVar9,puVar11);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_98,L"   Id: %d",*(undefined4 *)(param_1 + 0xa8));
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  puVar4 = (undefined8 *)FName::ToString(param_1 + 0x40,&local_68);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_98,L"   NetDriverName: %s",puVar11);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    FString::PrintfImpl(&local_98,L"   NetDriver is nullptr");
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))();
    puVar5 = &DAT_1468e2308;
    if (cVar3 == '\0') {
      puVar5 = &DAT_1468e2320;
    }
    puVar4 = (undefined8 *)FText::ToString(puVar5);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_98,L"   NetDriver IsValid [%s]",puVar11);
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    pwVar10 = L"AllowRequests";
  }
  else if (*(int *)(param_1 + 0x50) == 1) {
    pwVar10 = L"DenyRequests";
  }
  else {
    pwVar10 = L"";
  }
  FString::PrintfImpl(&local_98,L"   BeaconState: %s",pwVar10);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  FString::PrintfImpl(&local_98,L"   BeaconConnectionInitialTimeout: %f",
                      (double)*(float *)(param_1 + 0x38));
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  FString::PrintfImpl(&local_98,L"   BeaconConnectionTimeout: %f",(double)*(float *)(param_1 + 0x3c)
                     );
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_98;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_98 = 0;
  lVar13 = *(longlong *)(param_1 + 0x60);
  lVar12 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar13;
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x40) {
    FString::PrintfImpl(&local_98,L"   Remote Party:");
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    *puVar4 = 0;
    *puVar4 = local_98;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_90._4_4_;
    local_90 = 0;
    local_98 = 0;
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)(lVar13 + 0x10) + 0x28))
                       (*(longlong **)(lVar13 + 0x10),local_58);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_88,L"      Host: %s",puVar11);
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    *puVar4 = 0;
    *puVar4 = local_88;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_80._4_4_;
    local_80 = 0;
    local_88 = 0;
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    lVar8 = *(longlong *)(lVar13 + 0x30);
    lVar1 = lVar8 + (longlong)*(int *)(lVar13 + 0x38) * 0x28;
    for (; lVar8 != lVar1; lVar8 = lVar8 + 0x28) {
      if ((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar3 == '\0')) {
        FString::PrintfImpl(&local_68,L"      Additional Player: NULL (or Debug) Player");
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        *puVar4 = 0;
        *puVar4 = local_68;
        local_68 = (undefined2 *)0x0;
        *(int *)(puVar4 + 1) = (int)local_60;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
        lVar7 = 0;
        local_60 = 0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(**(longlong **)(lVar8 + 8) + 0x28))
                           (*(longlong **)(lVar8 + 8),local_48);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar4;
        }
        FString::PrintfImpl(&local_78,L"      Additional Player: %s",puVar11);
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *param_2);
        *plVar6 = 0;
        *plVar6 = local_78;
        *(undefined4 *)(plVar6 + 1) = (undefined4)local_70;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_70._4_4_;
        local_70 = 0;
        local_78 = 0;
        lVar7 = local_48[0];
      }
      if (lVar7 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1404cebf0 FUN_1404cebf0 body=1101 status=ok
// SIG undefined FUN_1404cebf0(void)

/* WARNING: Removing unreachable block (ram,0x0001404ceec9) */
/* WARNING: Removing unreachable block (ram,0x0001404cedb5) */
/* WARNING: Removing unreachable block (ram,0x0001404cece1) */
/* WARNING: Removing unreachable block (ram,0x0001404cec7b) */
/* WARNING: Removing unreachable block (ram,0x0001404ced4b) */
/* WARNING: Removing unreachable block (ram,0x0001404cee4a) */
/* WARNING: Removing unreachable block (ram,0x0001404cef95) */

void FUN_1404cebf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  FUN_1404ce530();
  FString::PrintfImpl(&local_88,L"   ListenPort: %d",*(undefined4 *)(param_1 + 200));
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_88;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_88 = 0;
  FString::PrintfImpl(&local_88,L"   MaxAllowedRemotePlayers: %d",*(undefined4 *)(param_1 + 0xcc));
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_88;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_88 = 0;
  uVar5 = FUN_1404cfb00(param_1);
  FString::PrintfImpl(&local_88,L"   GetNumRemotePlayers: %d",uVar5);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_88;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_88 = 0;
  uVar5 = FUN_1404cfa50(param_1);
  FString::PrintfImpl(&local_88,L"   GetNumPendingRemotePlayers: %d",uVar5);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_88;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_80._4_4_;
  local_80 = 0;
  local_88 = 0;
  lVar10 = *(longlong *)(param_1 + 0xd0);
  lVar1 = lVar10 + (longlong)*(int *)(param_1 + 0xd8) * 0x48;
  for (; lVar10 != lVar1; lVar10 = lVar10 + 0x48) {
    FString::PrintfImpl(&local_88,L"   Pending Remote Party:");
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
    *puVar6 = 0;
    *puVar6 = local_88;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_80._4_4_;
    local_80 = 0;
    local_88 = 0;
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x28))
                       (*(longlong **)(lVar10 + 0x10),local_48);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar6;
    }
    FString::PrintfImpl(&local_78,L"      Host: %s",puVar9);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
    *puVar6 = 0;
    *puVar6 = local_78;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_70._4_4_;
    local_70 = 0;
    local_78 = 0;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    lVar8 = *(longlong *)(lVar10 + 0x30);
    lVar2 = lVar8 + (longlong)*(int *)(lVar10 + 0x38) * 0x28;
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0x28) {
      if ((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar4 == '\0')) {
        FString::PrintfImpl(&local_58,L"      Additional Player: NULL (or Debug) Player");
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
        *puVar6 = 0;
        *puVar6 = local_58;
        local_58 = 0;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_50;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_50._4_4_;
        lVar7 = 0;
        local_50 = 0;
      }
      else {
        puVar6 = (undefined8 *)
                 (**(code **)(**(longlong **)(lVar8 + 8) + 0x28))
                           (*(longlong **)(lVar8 + 8),local_38);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(&local_68,L"      Additional Player: %s",puVar9);
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
        *puVar6 = 0;
        *puVar6 = local_68;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
        lVar7 = local_38[0];
      }
      if (lVar7 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1404cf040 FUN_1404cf040 body=197 status=ok
// SIG undefined FUN_1404cf040(void)

undefined8 FUN_1404cf040(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,&local_28);
  pwVar3 = L"";
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x120,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  if (*(char *)(param_1 + 0x180) != '\0') {
    pwVar3 = L"(PEER)";
  }
  FString::PrintfImpl(param_2,L"%s %s%s",puVar4,puVar2,pwVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404cf110 FUN_1404cf110 body=62 status=ok
// SIG undefined FUN_1404cf110(void)

longlong FUN_1404cf110(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar3 + *(int *)(param_1 + 0x50);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x40) == param_3)) && (*(longlong *)(lVar2 + 0x30) != 0)
        ) && (*(int *)(*(longlong *)(lVar2 + 0x30) + 0x30) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 1404cf150 FUN_1404cf150 body=43 status=ok
// SIG undefined FUN_1404cf150(void)

longlong FUN_1404cf150(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + *(int *)(param_1 + 0x40);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 1404cf180 FUN_1404cf180 body=350 status=ok
// SIG undefined FUN_1404cf180(void)

longlong * FUN_1404cf180(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar3 = (**(code **)(*param_1 + 0x288))();
  lVar8 = -1;
  pwVar7 = L" (Uninstalled)";
  lVar6 = -1;
  if (cVar3 != '\0') {
    pwVar7 = L" (Installed)";
  }
  do {
    lVar6 = lVar6 + 1;
  } while (pwVar7[lVar6] != L'\0');
  iVar5 = (int)lVar6;
  if (iVar5 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar5;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pwVar7,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x280))(param_1,0);
  pwVar7 = L" (Unlicensed)";
  if (cVar3 != '\0') {
    pwVar7 = L" (Licensed)";
  }
  do {
    lVar8 = lVar8 + 1;
  } while (pwVar7[lVar8] != L'\0');
  iVar5 = (int)lVar8;
  if (iVar5 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar5;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pwVar7,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  return param_2;
}



// FUNCTION 1404cf2e0 FUN_1404cf2e0 body=250 status=ok
// SIG undefined FUN_1404cf2e0(void)

undefined8 * FUN_1404cf2e0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x48))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404cf3e0 FUN_1404cf3e0 body=130 status=ok
// SIG undefined FUN_1404cf3e0(void)

undefined8 FUN_1404cf3e0(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f78) {
    _Init_thread_header(&DAT_146852f78);
    if (DAT_146852f78 == -1) {
      FName::FName(&DAT_146852f70,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146852f78);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146852f70);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x20);
  }
  return 0;
}



// FUNCTION 1404cf470 FUN_1404cf470 body=384 status=ok
// SIG undefined FUN_1404cf470(void)

longlong * FUN_1404cf470(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_141682af0(param_1 + 0x20,local_18,0);
  plVar2 = (longlong *)FUN_14167cf00(local_28);
  iVar5 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar5 = 0;
  }
  if (((int)plVar2[1] != 0) || (iVar4 = 2, iVar5 == -1)) {
    iVar4 = 1;
  }
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40._0_4_ = (int)plVar2[1];
  local_40._4_4_ = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (local_40._4_4_ < iVar5 + iVar4 + (int)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,*puVar1,iVar5);
  iVar4 = local_40._4_4_;
  iVar5 = (int)local_40;
  bVar6 = (int)local_40 != 0;
  local_38 = local_48;
  local_48 = 0;
  local_30 = (int)local_40;
  local_2c = local_40._4_4_;
  local_40 = 0;
  if (iVar4 < (int)((5 - (uint)bVar6) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    iVar5 = local_30;
  }
  local_30 = (5 - (uint)(iVar5 != 0)) + iVar5;
  if (local_2c < local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar5);
  }
  lVar3 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_38 + lVar3 * 2),L".ofc",4);
  *(undefined2 *)(local_38 + 8 + lVar3 * 2) = 0;
  *param_2 = local_38;
  *(int *)(param_2 + 1) = local_30;
  *(int *)((longlong)param_2 + 0xc) = local_2c;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404cf5f0 FUN_1404cf5f0 body=384 status=ok
// SIG undefined FUN_1404cf5f0(void)

longlong * FUN_1404cf5f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_141682af0(param_1 + 0x20,local_18,0);
  plVar2 = (longlong *)FUN_14167cf00(local_28);
  iVar5 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar5 = 0;
  }
  if (((int)plVar2[1] != 0) || (iVar4 = 2, iVar5 == -1)) {
    iVar4 = 1;
  }
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40._0_4_ = (int)plVar2[1];
  local_40._4_4_ = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (local_40._4_4_ < iVar5 + iVar4 + (int)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,*puVar1,iVar5);
  iVar4 = local_40._4_4_;
  iVar5 = (int)local_40;
  bVar6 = (int)local_40 != 0;
  local_38 = local_48;
  local_48 = 0;
  local_30 = (int)local_40;
  local_2c = local_40._4_4_;
  local_40 = 0;
  if (iVar4 < (int)((5 - (uint)bVar6) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    iVar5 = local_30;
  }
  local_30 = (5 - (uint)(iVar5 != 0)) + iVar5;
  if (local_2c < local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar5);
  }
  lVar3 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_38 + lVar3 * 2),L".ofc",4);
  *(undefined2 *)(local_38 + 8 + lVar3 * 2) = 0;
  *param_2 = local_38;
  *(int *)(param_2 + 1) = local_30;
  *(int *)((longlong)param_2 + 0xc) = local_2c;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404cf770 FUN_1404cf770 body=10 status=ok
// SIG undefined FUN_1404cf770(void)

undefined4 * FUN_1404cf770(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1404cf780 GetWorld body=5 status=ok
// SIG undefined GetWorld(void)

undefined8 USignificanceManager::GetWorld(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1404cf790 FUN_1404cf790 body=250 status=ok
// SIG undefined FUN_1404cf790(void)

undefined8 * FUN_1404cf790(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res18 [2];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res18[0] = param_3;
  plVar5 = (longlong *)FUN_1404b0000(local_res18);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404cf890 FUN_1404cf890 body=250 status=ok
// SIG undefined FUN_1404cf890(void)

undefined8 * FUN_1404cf890(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x50))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404cf990 FUN_1404cf990 body=96 status=ok
// SIG undefined FUN_1404cf990(void)

int FUN_1404cf990(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  iVar4 = 0;
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x30) * 0xc;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 0xc) {
    if ((puVar2[9] == 2) && (lVar1 = FUN_1416f8720(*puVar2), lVar1 != 0)) {
      iVar4 = iVar4 + puVar2[7];
    }
  }
  return iVar4;
}



// FUNCTION 1404cf9f0 FUN_1404cf9f0 body=7 status=ok
// SIG undefined FUN_1404cf9f0(void)

undefined4 FUN_1404cf9f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// FUNCTION 1404cfa00 GetSerializeContext body=8 status=ok
// SIG undefined GetSerializeContext(void)

undefined8 FDuplicateDataWriter::GetSerializeContext(longlong param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// FUNCTION 1404cfa10 FUN_1404cfa10 body=49 status=ok
// SIG undefined FUN_1404cfa10(void)

int FUN_1404cfa10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1404cfb00();
  iVar1 = *(int *)(param_1 + 0xcc);
  iVar3 = FUN_1404cfa50(param_1);
  return (iVar1 - iVar2) - iVar3;
}



// FUNCTION 1404cfa50 FUN_1404cfa50 body=174 status=ok
// SIG undefined FUN_1404cfa50(void)

int FUN_1404cfa50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0xd0);
  iVar6 = 0;
  lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0xd8) * 0x48;
  do {
    if (lVar7 == lVar1) {
      return iVar6;
    }
    if ((*(longlong **)(lVar7 + 0x10) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x20))(), cVar3 == '\0')) {
LAB_1404cfad4:
      iVar4 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar7 + 0x30);
      iVar4 = *(int *)(lVar7 + 0x38);
      lVar2 = lVar5 + (longlong)iVar4 * 0x28;
      if (lVar5 != lVar2) {
        do {
          if ((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))(), cVar3 == '\0'))
          goto LAB_1404cfad4;
          lVar5 = lVar5 + 0x28;
        } while (lVar5 != lVar2);
        iVar4 = *(int *)(lVar7 + 0x38);
      }
      iVar4 = iVar4 + 1;
    }
    iVar6 = iVar6 + iVar4;
    lVar7 = lVar7 + 0x48;
  } while( true );
}



// FUNCTION 1404cfb00 FUN_1404cfb00 body=174 status=ok
// SIG undefined FUN_1404cfb00(void)

int FUN_1404cfb00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  iVar5 = 0;
  lVar7 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar6;
  do {
    if (lVar6 == lVar7) {
      return iVar5;
    }
    if ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar2 == '\0')) {
LAB_1404cfb84:
      iVar3 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar6 + 0x30);
      iVar3 = *(int *)(lVar6 + 0x38);
      lVar1 = lVar4 + (longlong)iVar3 * 0x28;
      if (lVar4 != lVar1) {
        do {
          if ((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
             (cVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar2 == '\0'))
          goto LAB_1404cfb84;
          lVar4 = lVar4 + 0x28;
        } while (lVar4 != lVar1);
        iVar3 = *(int *)(lVar6 + 0x38);
      }
      iVar3 = iVar3 + 1;
    }
    iVar5 = iVar5 + iVar3;
    lVar6 = lVar6 + 0x40;
  } while( true );
}



// FUNCTION 1404cfbc0 FUN_1404cfbc0 body=83 status=ok
// SIG undefined FUN_1404cfbc0(void)

undefined8 * FUN_1404cfbc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1404d1210();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,0);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1404cfc20 FUN_1404cfc20 body=14 status=ok
// SIG undefined FUN_1404cfc20(void)

undefined4 FUN_1404cfc20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x30);
  }
  return 0;
}



// FUNCTION 1404cfc30 FUN_1404cfc30 body=107 status=ok
// SIG undefined FUN_1404cfc30(void)

undefined4 FUN_1404cfc30(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [8];
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar2 = 0;
    plVar3 = *(longlong **)(param_1 + 0x58);
    uVar1 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x60) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x60) < plVar3) {
      uVar5 = uVar2;
    }
    uVar4 = uVar2;
    if (uVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          uVar2 = (ulonglong)((uint)uVar2 | 1 << (*(int *)(*plVar3 + 0x58) - 1U & 0x1f));
        }
        uVar1 = (undefined4)uVar2;
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
    if (local_res8 != (undefined4 *)(param_1 + 0x68)) {
      *(undefined4 *)(param_1 + 0x68) = uVar1;
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    return *(undefined4 *)(param_1 + 0x68);
  }
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 1404cfca0 FUN_1404cfca0 body=124 status=ok
// SIG undefined FUN_1404cfca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1404cfca0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f28) {
    _Init_thread_header(&DAT_146852f28);
    if (DAT_146852f28 == -1) {
      DAT_146852f18 = 0;
      _DAT_146852f20 = 0;
      atexit((_func_5014 *)&LAB_143e3ec20);
      _Init_thread_footer(&DAT_146852f28);
      return &DAT_146852f18;
    }
  }
  return &DAT_146852f18;
}



// FUNCTION 1404cfd20 FUN_1404cfd20 body=144 status=ok
// SIG undefined FUN_1404cfd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404cfd20(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404cfd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                          (*(longlong **)(param_1 + 8),param_2,param_3);
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404cfd91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3);
      return uVar2;
    }
  }
  *param_3 = DAT_1461fb7e0;
  return 1;
}



// FUNCTION 1404cfdb0 FUN_1404cfdb0 body=458 status=ok
// SIG undefined FUN_1404cfdb0(void)

undefined8 *
FUN_1404cfdb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_res20 [8];
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4,local_res20);
  FUN_1404cf790(&local_28,param_3,*puVar6);
  if (local_28 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146852fa4) &&
       (_Init_thread_header(&DAT_146852fa4), DAT_146852fa4 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1461fb950,0);
      FGenericPlatformString::Memcpy(DAT_1461fb950,L"InvalidOSSUser",0x1e);
      atexit((_func_5014 *)&LAB_143e3eb70);
      _Init_thread_footer(&DAT_146852fa4);
    }
    *param_2 = 0;
    uVar5 = DAT_1461fb958;
    _Src = DAT_1461fb950;
    iVar8 = (int)DAT_1461fb958;
    *(int *)(param_2 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      plVar4 = local_20;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar5 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar8 * 2);
      plVar4 = local_20;
    }
  }
  else {
    lVar3 = *local_28;
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_4 + 1,local_18);
    (**(code **)(lVar3 + 0xa0))(local_28,param_2,uVar7);
    plVar4 = local_20;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_20;
        if (iVar8 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
          plVar4 = local_20;
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      local_20 = plVar4;
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1404cff80 FUN_1404cff80 body=438 status=ok
// SIG undefined FUN_1404cff80(void)

undefined8 FUN_1404cff80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  FUN_1404d0fe0(param_1,&local_48,param_2,param_3);
  plVar5 = (longlong *)FUN_1404b02e0(0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_38);
    if ((local_38 != (longlong *)0x0) && (local_48 != 0)) {
      local_28 = local_48;
      plStack_20 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*local_38 + 0xa0))(local_38,local_18,&local_28);
      FString::operator=(param_4,uVar6);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      plVar5 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      if (1 < *(int *)(param_4 + 8)) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_30 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        uVar6 = 1;
        goto LAB_1404d00e6;
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  uVar6 = 0;
LAB_1404d00e6:
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar6;
}



// FUNCTION 1404d0140 FUN_1404d0140 body=673 status=ok
// SIG undefined FUN_1404d0140(void)

int FUN_1404d0140(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  wchar_t *pwVar15;
  undefined4 in_stack_ffffffffffffffa8;
  undefined2 uVar16;
  wchar_t *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  iVar4 = DAT_146b18930;
  lVar5 = DAT_146b17150;
  uVar16 = (undefined2)((uint)in_stack_ffffffffffffffa8 >> 0x10);
  if (DAT_146b17150 == 0) {
    return DAT_146b18930;
  }
  pwVar11 = (wchar_t *)0x0;
  if ((param_1 == DAT_146852c30) || (param_1 == 0)) {
    if (DAT_146b17150 == 0) {
      return DAT_146b18930;
    }
    lVar6 = FUN_142937670();
    lVar1 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return iVar4;
    }
    lVar5 = FUN_14244f660(lVar5);
  }
  else {
    lVar5 = FUN_142876100(DAT_146b17150,param_1);
    lVar5 = *(longlong *)(lVar5 + 0x288);
  }
  if (((lVar5 != 0) &&
      (plVar7 = (longlong *)FUN_142873bb0(DAT_146b17150,lVar5,0x11a), plVar7 != (longlong *)0x0)) &&
     (iVar3 = UNetDriver::GetNetMode(plVar7), iVar3 < 3)) {
    (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_38);
    local_48 = (wchar_t *)0x0;
    local_40 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar15 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,2,&DAT_143f62f5c,2,CONCAT22(uVar16,0x3f))
    ;
    pwVar8 = L"";
    if ((uint)local_40 != 0) {
      pwVar8 = pwVar15;
    }
    iVar3 = FUN_141592950(&local_38,pwVar8,1,1,0xffffffff);
    if (pwVar15 != (wchar_t *)0x0) {
      FMemory::Free(pwVar15);
    }
    if (iVar3 != -1) {
      uVar14 = iVar3 + 0x80000000;
      uVar12 = local_30 - 1;
      if (local_30 == 0) {
        uVar12 = 0;
      }
      if (iVar3 + 1U < uVar12) {
        uVar12 = iVar3 + 1U;
      }
      uVar9 = local_30 - 1;
      if (local_30 == 0) {
        uVar9 = 0;
      }
      uVar10 = uVar12;
      if ((uVar12 <= uVar14) && (uVar10 = uVar9, uVar14 < uVar9)) {
        uVar10 = uVar14;
      }
      local_48 = (wchar_t *)0x0;
      puVar13 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar13 = local_38;
      }
      iVar3 = uVar10 - uVar12;
      uVar14 = iVar3 + 1;
      if (iVar3 == 0) {
        uVar14 = 0;
      }
      local_40 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pwVar11 = local_48;
        uVar14 = (uint)local_40;
        if (0 < (int)(uint)local_40) {
          wcsncpy(local_48,puVar13 + (int)uVar12,(longlong)iVar3);
          pwVar11[iVar3] = L'\0';
        }
      }
      if (1 < (int)uVar14) {
        pwVar15 = L"";
        if (uVar14 != 0) {
          pwVar15 = pwVar11;
        }
        iVar4 = _wtoi(pwVar15);
      }
      if (pwVar11 != (wchar_t *)0x0) {
        FMemory::Free(pwVar11);
      }
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return iVar4;
}



// FUNCTION 1404d03f0 GetReferencerName body=75 status=ok
// SIG undefined GetReferencerName(void)

undefined8 * FGCObject::GetReferencerName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,0x12,"Unknown FGCObject",0x12,0x3f);
  return param_2;
}



// FUNCTION 1404d0440 FUN_1404d0440 body=216 status=ok
// SIG undefined FUN_1404d0440(void)

undefined8 * FUN_1404d0440(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146852f7c) &&
       (_Init_thread_header(&DAT_146852f7c), DAT_146852f7c == -1)) {
      atexit(FUN_143e3ea10);
      _Init_thread_footer(&DAT_146852f7c);
    }
    *param_2 = &PTR_FUN_143f73d18;
    param_2[1] = DAT_1461fb930;
    lVar2 = DAT_1461fb938;
    param_2[2] = DAT_1461fb938;
    lVar1 = DAT_1461fb938;
  }
  else {
    *param_2 = &PTR_FUN_143f73d18;
    param_2[1] = *(undefined8 *)(lVar1 + 0x160);
    lVar1 = *(longlong *)(lVar1 + 0x168);
    param_2[2] = lVar1;
    lVar2 = lVar1;
  }
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1404d0520 FUN_1404d0520 body=771 status=ok
// SIG undefined FUN_1404d0520(void)

void FUN_1404d0520(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_res8;
  longlong local_res20;
  
  plVar10 = *(longlong **)(param_1 + -0x1918);
  if ((plVar10 == (longlong *)0x0) || (plVar10[0x12] != param_1 + -0x1970)) {
    if ((*(longlong **)(param_1 + -0x1810) == (longlong *)0x0) ||
       (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x1810) + 0x20))(), cVar7 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar10 = *(longlong **)(param_1 + -0x1808);
      uVar4 = *(undefined8 *)(param_1 + -0x1810);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      iVar11 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar11);
      }
      lVar8 = *param_3;
      *(undefined8 *)(lVar8 + (longlong)iVar11 * 0x10) = uVar4;
      *(longlong **)(lVar8 + 8 + (longlong)iVar11 * 0x10) = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    iVar11 = 0;
    if (0 < *(int *)(param_1 + -0x1920)) {
      lVar8 = 0;
      do {
        plVar10 = *(longlong **)(*(longlong *)(lVar8 + *(longlong *)(param_1 + -0x1928)) + 0x160);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar10 + 0x20))(), cVar7 == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar5 = *(longlong *)(lVar8 + *(longlong *)(param_1 + -0x1928));
          plVar10 = *(longlong **)(lVar5 + 0x168);
          uVar4 = *(undefined8 *)(lVar5 + 0x160);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
          }
          lVar5 = *param_3;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = uVar4;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar10 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 8;
      } while (iVar11 < *(int *)(param_1 + -0x1920));
    }
  }
  else {
    lVar8 = FUN_1404e74f0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      (**(code **)(*plVar10 + 0x420))(plVar10,param_2,param_3);
    }
  }
  local_res8 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar4 = DAT_146852c58;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FModuleManager::GetModule(uVar9,uVar4);
  local_res20 = (**(code **)(*plVar10 + 0x50))(plVar10,local_res8);
  if (local_res20 != 0) {
    local_res8 = &local_res20;
    FUN_1404bb8b0(param_3,&local_res8);
  }
  return;
}



// FUNCTION 1404d0830 FUN_1404d0830 body=366 status=ok
// SIG undefined FUN_1404d0830(void)

void FUN_1404d0830(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  if (param_1 != 0) {
    uVar7 = 0;
    plVar9 = *(longlong **)(param_1 + 0x470);
    uVar8 = (longlong)*(int *)(param_1 + 0x478) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0x478) < plVar9) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x4b8);
          plVar5 = *(longlong **)(lVar3 + 0x4c0);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          if (lVar4 != 0) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            iVar2 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
            }
            plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *param_2);
            *plVar6 = lVar4;
            plVar6[1] = (longlong)plVar5;
            if (plVar5 == (longlong *)0x0) goto LAB_1404d0964;
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar5 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
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
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar5 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
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
        }
LAB_1404d0964:
        plVar9 = plVar9 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
  }
  return;
}



// FUNCTION 1404d0a30 FUN_1404d0a30 body=32 status=ok
// SIG undefined FUN_1404d0a30(void)

void FUN_1404d0a30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1404d1210();
                    /* WARNING: Could not recover jumptable at 0x0001404d0a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return;
}



// FUNCTION 1404d0a50 FUN_1404d0a50 body=171 status=ok
// SIG undefined FUN_1404d0a50(void)

undefined8 FUN_1404d0a50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0b50(&local_18,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x290))(local_18,param_3,param_4);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1404d0a93;
    }
  }
  uVar7 = 0;
LAB_1404d0a93:
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1404d0b00 GetSessionInt body=69 status=ok
// SIG undefined GetSessionInt(void)

undefined8 * UOnlineSessionClient::GetSessionInt(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_1404d0b50(param_2,lVar1,0);
  return param_2;
}



// FUNCTION 1404d0b50 FUN_1404d0b50 body=250 status=ok
// SIG undefined FUN_1404d0b50(void)

undefined8 * FUN_1404d0b50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res18 [2];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res18[0] = param_3;
  plVar5 = (longlong *)FUN_1404b0000(local_res18);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404d0c50 FUN_1404d0c50 body=250 status=ok
// SIG undefined FUN_1404d0c50(void)

undefined8 * FUN_1404d0c50(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404d0d50 FUN_1404d0d50 body=186 status=ok
// SIG undefined FUN_1404d0d50(void)

undefined8 FUN_1404d0d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  uVar6 = 0;
  FUN_1404d0b50(&local_18,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_18 != (longlong *)0x0) {
    lVar5 = (**(code **)(*local_18 + 0x2c8))(local_18,param_3);
    if (lVar5 != 0) {
      *param_4 = param_3;
      uVar6 = 1;
      *(undefined1 *)(param_4 + 1) = *(undefined1 *)(lVar5 + 0x10);
      *(undefined1 *)((longlong)param_4 + 9) = *(undefined1 *)(lVar5 + 0x15);
      *(undefined1 *)((longlong)param_4 + 10) = *(undefined1 *)(lVar5 + 0x17);
      *(undefined1 *)((longlong)param_4 + 0xb) = *(undefined1 *)(lVar5 + 0x18);
    }
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1404d0e20 FUN_1404d0e20 body=26 status=ok
// SIG undefined FUN_1404d0e20(void)

void FUN_1404d0e20(void)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FUN_1419c6b80(local_res10);
  return;
}



// FUNCTION 1404d0e40 FUN_1404d0e40 body=4 status=ok
// SIG undefined FUN_1404d0e40(void)

undefined8 FUN_1404d0e40(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 1404d0e50 FUN_1404d0e50 body=176 status=ok
// SIG undefined FUN_1404d0e50(void)

undefined8 * FUN_1404d0e50(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar2 = param_1 + 0x90;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (ulonglong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 0x18);
        if (*(byte *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 0x18) == param_3) {
          if (iVar1 != -1) goto LAB_1404d0ec3;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_1404d0ec3:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 1404d0f00 FUN_1404d0f00 body=53 status=ok
// SIG undefined FUN_1404d0f00(void)

undefined8 FUN_1404d0f00(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1404d1210();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 1404d0f40 GetMouseCursor body=6 status=ok
// SIG undefined GetMouseCursor(void)

undefined8 HInterpTrackKeypointProxy::GetMouseCursor(void)

{
  return 8;
}



// FUNCTION 1404d0f60 GetTypeHash body=125 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(param_1 + 8);
      uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (uVar4 < 4) {
        pbVar5 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1);
        return (uint)*pbVar5;
      }
      pcVar2 = *(code **)(*plVar1 + 0x10);
      if (uVar4 < 8) {
        puVar6 = (uint *)(*pcVar2)();
        return *puVar6;
      }
      puVar7 = (undefined8 *)(*pcVar2)(plVar1);
      return (int)((ulonglong)*puVar7 >> 0x20) * 0x17 + (int)*puVar7;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1404d0fe0 FUN_1404d0fe0 body=362 status=ok
// SIG undefined FUN_1404d0fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1404d0fe0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (((param_3 != 0) && (*(longlong *)(param_3 + 400) != 0)) &&
     (lVar6 = UGameInstance::FindLocalPlayerFromControllerId(*(longlong *)(param_3 + 400),param_4),
     lVar6 != 0)) {
    lVar6 = FUN_142547b50(lVar6,local_58);
    plVar4 = *(longlong **)(lVar6 + 0x10);
    uVar5 = *(undefined8 *)(lVar6 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_68 = uVar5;
    plStack_60 = plVar4;
    if (&local_68 != param_2) {
      local_68 = *param_2;
      plStack_60 = (longlong *)param_2[1];
      *param_2 = uVar5;
      param_2[1] = plVar4;
      local_30 = uVar5;
      plStack_28 = plVar4;
    }
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    local_58[0] = &PTR_FUN_143f740c8;
    if (local_40 != 0) {
      FMemory::Free();
    }
    local_58[0] = &PTR_FUN_143f73d18;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1404d1150 FUN_1404d1150 body=188 status=ok
// SIG undefined FUN_1404d1150(void)

undefined8 *
FUN_1404d1150(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1404cf790(&local_28,param_3,param_5);
  if (local_28 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*local_28 + 0x58))(local_28,&local_18,param_4);
    *param_2 = local_18;
    param_2[1] = local_10;
    local_10 = 0;
    local_18 = 0;
  }
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
  return param_2;
}



// FUNCTION 1404d1210 FUN_1404d1210 body=130 status=ok
// SIG undefined FUN_1404d1210(void)

undefined8 FUN_1404d1210(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f48) {
    _Init_thread_header(&DAT_146852f48);
    if (DAT_146852f48 == -1) {
      FName::FName(&DAT_146852f40,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146852f48);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146852f40);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 1404d12a0 FUN_1404d12a0 body=93 status=ok
// SIG undefined FUN_1404d12a0(void)

undefined8 FUN_1404d12a0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  local_res8[0] = *(undefined8 *)(param_1 + -0x1958);
  FName::ToString(local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"NetConnection [%s]",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404d1300 FUN_1404d1300 body=214 status=ok
// SIG undefined FUN_1404d1300(void)

void FUN_1404d1300(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + -0x4b0) == 0) && (iVar5 = 0, 0 < *(int *)(param_1 + -0x4a0))) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(param_1 + -0x4a8));
      if (lVar2 != 0) {
        lVar4 = FUN_1404e7690();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2 + 0x1970;
        }
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + -0x4a0));
  }
  return;
}



// FUNCTION 1404d13e0 FUN_1404d13e0 body=274 status=ok
// SIG undefined FUN_1404d13e0(void)

undefined8 * FUN_1404d13e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  ulonglong local_res8;
  undefined1 local_res18 [16];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar8 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar5 = (ulonglong *)FName::FName(local_res18,L"SPARK",1);
  local_res8 = *puVar5;
  plVar6 = (longlong *)FUN_1404b0000(&local_res8);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,local_28);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar6 = plStack_30;
  if ((!bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}


