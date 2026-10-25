// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e8e590 FUN_140e8e590 body=153 status=ok
// SIG undefined FUN_140e8e590(void)

void FUN_140e8e590(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_140e8e603;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_140e8e603:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1406a5aa0(*puVar3,param_3);
  }
  return;
}



// FUNCTION 140e8e630 FUN_140e8e630 body=8 status=ok
// SIG undefined FUN_140e8e630(void)

void FUN_140e8e630(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 140e8e640 FUN_140e8e640 body=97 status=ok
// SIG undefined FUN_140e8e640(void)

void FUN_140e8e640(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140b80130(uVar1);
  if (lVar2 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_140b8ae50(lVar2,&local_18);
  }
  return;
}



// FUNCTION 140e8e6b0 FUN_140e8e6b0 body=88 status=ok
// SIG undefined FUN_140e8e6b0(void)

void FUN_140e8e6b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    cVar1 = FUN_142cf39b0(*(undefined8 *)(param_1 + 0x4d8),0);
    if (cVar1 != '\0') {
      uVar2 = FUN_141270f70(*(undefined8 *)(param_1 + 0x4e8),param_2);
      FUN_14127c500(*(undefined8 *)(param_1 + 0x4e8),uVar2,0);
    }
  }
  return;
}



// FUNCTION 140e8e710 FUN_140e8e710 body=247 status=ok
// SIG undefined FUN_140e8e710(void)

void FUN_140e8e710(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar2 = param_1;
    }
    plVar3 = (longlong *)(lVar2 + 0x88 + (longlong)param_2 * 0x98);
    iVar4 = param_3;
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x13;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(param_1 + 0x268);
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar2 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)param_2 * 0x98),
                 (void *)((longlong)(param_2 + param_3) * 0x98 + lVar2),(longlong)iVar1 * 0x98);
      iVar4 = *(int *)(param_1 + 0x268);
    }
    *(int *)(param_1 + 0x268) = iVar4 - param_3;
    if (param_4 != '\0') {
      FUN_140e8f6d0(param_1);
    }
  }
  return;
}



// FUNCTION 140e8e810 FUN_140e8e810 body=333 status=ok
// SIG undefined FUN_140e8e810(void)

void FUN_140e8e810(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x228);
    lVar6 = (longlong)*(int *)(param_1 + 0x230);
    plVar1 = plVar2;
    if (plVar2 != plVar2 + lVar6) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 1;
        if (plVar1 == plVar2 + lVar6) {
          return;
        }
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        iVar7 = 0;
        bVar8 = *plVar2 != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar6) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x228) + lVar3 * 8);
            do {
              if (bVar8 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 1;
            } while (lVar3 < lVar6);
          }
          if (bVar8 != false) {
            if (iVar7 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar7 * 8),
                         (void *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar4 * 8),
                         (longlong)(iVar5 - iVar4) << 3);
            }
            iVar7 = iVar7 + (iVar5 - iVar4);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar6);
        *(int *)(param_1 + 0x230) = iVar7;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 400,param_2);
      FUN_142227350(param_2,0,1);
    }
  }
  return;
}



// FUNCTION 140e8e960 FUN_140e8e960 body=441 status=ok
// SIG undefined FUN_140e8e960(void)

void FUN_140e8e960(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FWeakObjectPtr::operator=(local_50);
    iVar1 = *(int *)(param_1 + 0x2b8);
    lVar12 = (longlong)iVar1;
    if (iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x2b0);
      uVar5 = 0;
      local_58 = 0;
      local_48 = param_3;
      lVar3 = FWeakObjectPtr::Get(lVar8);
      lVar4 = FWeakObjectPtr::Get(local_50);
      uVar11 = uVar5;
      if ((lVar3 == lVar4) && (*(longlong *)(lVar8 + 8) == local_48)) {
        bVar14 = 0;
        uVar7 = uVar5;
      }
      else {
        bVar14 = 1;
        uVar7 = uVar5;
      }
      do {
        iVar6 = (int)uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)(iVar6 + 1);
        if ((longlong)uVar5 < lVar12) {
          lVar8 = uVar5 * 0x10;
          do {
            lVar13 = *(longlong *)(param_1 + 0x2b0) + lVar8;
            lVar3 = FWeakObjectPtr::Get(lVar13);
            lVar4 = FWeakObjectPtr::Get(local_50);
            if ((lVar3 == lVar4) && (*(longlong *)(lVar13 + 8) == local_48)) {
              bVar2 = 0;
            }
            else {
              bVar2 = 1;
            }
            uVar11 = local_58;
            if (bVar14 != bVar2) break;
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar5 = uVar5 + 1;
            lVar8 = lVar8 + 0x10;
          } while ((longlong)uVar5 < lVar12);
        }
        iVar9 = (int)uVar7 - iVar6;
        if (bVar14 != 0) {
          iVar10 = (int)uVar11;
          if (iVar10 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x2b0)),
                       (void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x2b0)),
                       (longlong)iVar9 << 4);
          }
          uVar11 = (ulonglong)(uint)(iVar10 + iVar9);
          local_58 = uVar11;
        }
        bVar14 = bVar14 ^ 1;
      } while ((longlong)uVar5 < lVar12);
      *(int *)(param_1 + 0x2b8) = (int)uVar11;
      if (0 < iVar1 - (int)uVar11) {
        FUN_140e8c970(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e8eb20 FUN_140e8eb20 body=46 status=ok
// SIG undefined FUN_140e8eb20(void)

void FUN_140e8eb20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0xf8 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xf8) {
    if (*(longlong *)(lVar1 + 0x20) == param_2) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 140e8eb50 FUN_140e8eb50 body=942 status=ok
// SIG undefined FUN_140e8eb50(void)

void FUN_140e8eb50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68 [3];
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x290) == '\0') || (*(char *)(param_1 + 0x2b0) != '\0')) {
    FUN_140e86fd0(param_1,0,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    local_70 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_78,0);
    *local_78 = *(undefined8 *)(param_1 + 0x220);
    FString::FString(local_78 + 1,param_1 + 0x228);
  }
  uVar4 = local_70;
  lVar9 = *(longlong *)(param_1 + 0x248);
  local_res8 = 0;
  if (lVar9 != 0) {
    lVar10 = (longlong)(int)local_70;
    iVar5 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar5);
    if (local_70._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_78,uVar4 & 0xffffffff);
      lVar9 = *(longlong *)(param_1 + 0x248);
    }
    local_78[lVar10 * 3] = lVar9;
    FString::FString(local_78 + lVar10 * 3 + 1,param_1 + 0x250);
  }
  lVar10 = *(longlong *)(param_1 + 0x260);
  lVar9 = lVar10 + (longlong)*(int *)(param_1 + 0x268) * 0x28;
  if (lVar10 != lVar9) {
    local_res8 = 0;
    do {
      uVar4 = local_70;
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        lVar11 = (longlong)(int)local_70;
        iVar5 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar5);
        if (local_70._4_4_ < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_78,uVar4 & 0xffffffff);
        }
        local_78[lVar11 * 3] = *(undefined8 *)(lVar10 + 0x10);
        FString::FString(local_78 + lVar11 * 3 + 1,lVar10 + 0x18);
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar10 != lVar9);
  }
  plVar6 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  lVar9 = plVar6[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar9 = plVar6[0x1f];
    if (lVar9 == 0) goto LAB_140e8ed31;
  }
  lVar10 = FUN_141796df0((undefined8 *)(lVar9 + 0x40));
  uVar4 = local_70;
  if (lVar10 == 0) {
    lVar10 = (longlong)(int)local_70;
    iVar5 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar5);
    if (local_70._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_78,uVar4 & 0xffffffff);
    }
    local_78[lVar10 * 3] = *(undefined8 *)(lVar9 + 0x40);
    FString::FString(local_78 + lVar10 * 3 + 1,lVar9 + 0x48);
  }
LAB_140e8ed31:
  if ((int)local_70 == 0) {
    FUN_140e7ced0(param_1);
  }
  else {
    FWeakObjectPtr::operator=(&local_res18,param_2);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    uVar2 = (undefined4)local_res8;
    uVar3 = local_res8._4_4_;
    local_68[0] = 0;
    local_68[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    local_68[2] = 0;
    local_50 = 0;
    puVar7 = (undefined8 *)operator_new(0x28,local_68 + 2);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_GetPoolName_1445cb6a0;
      *(undefined4 *)(puVar7 + 1) = uVar2;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
      *(undefined4 *)(puVar7 + 2) = local_res18;
      *(undefined4 *)((longlong)puVar7 + 0x14) = local_res1c;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[4] = uVar8;
      *puVar7 = &PTR_GetPoolName_1445cb6e8;
    }
    lVar9 = FUN_1422ca050();
    puVar7 = (undefined8 *)
             FUN_142840b00(lVar9 + 0x178,local_48,&local_78,local_68 + 2,0,1,0,local_68);
    if ((undefined8 *)(param_1 + 0x2b8) != puVar7) {
      *(undefined8 *)(param_1 + 0x2b8) = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2c0,puVar7 + 1);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if ((int)local_70 != 0) {
    plVar6 = local_78 + 1;
    iVar5 = (int)local_70;
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_78 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140e8ef10 FUN_140e8ef10 body=335 status=ok
// SIG undefined FUN_140e8ef10(void)

void FUN_140e8ef10(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0xb0);
  piVar6 = piVar7 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
  for (; piVar7 != piVar6; piVar7 = piVar7 + 0x10) {
    lVar1 = *(longlong *)(piVar7 + 4);
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        uVar2 = *(uint *)(lVar1 + 0xc);
        lVar4 = 0;
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar5 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar5 = uVar5 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar5 * 0x18;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
          FUN_142227350(lVar1,0,1);
        }
      }
      piVar7[4] = 0;
      piVar7[5] = 0;
    }
    if (*piVar7 == -1) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *piVar7 = *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x50);
      if (*(int *)(param_1 + 0x50) == -1) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x50) = iVar3;
    }
    piVar7[1] = piVar7[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (*(int *)(param_1 + 0x54) == -1) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xbc)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 140e8f060 FUN_140e8f060 body=482 status=ok
// SIG undefined FUN_140e8f060(void)

void FUN_140e8f060(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_140e75d40();
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 200);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x1f;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != 0) {
      TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(param_1,0);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 200);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x1f;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 3,0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 5,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 7,0);
  }
  plVar3 = param_1 + 9;
  iVar1 = *(int *)((longlong)param_1 + 0x2b4);
  plVar4 = (longlong *)param_1[0x55];
  iVar2 = (int)param_1[0x56];
  if (iVar1 < 0) {
    if (plVar4 == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    if (iVar2 != 0) {
      plVar4 = plVar4 + 0x11;
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0x13;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0x2b4);
    }
    *(undefined4 *)(param_1 + 0x56) = 0;
    if (iVar1 != 0) {
      FUN_140e8f780(plVar3,0);
    }
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    if (iVar2 != 0) {
      plVar4 = plVar4 + 0x11;
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0x13;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  FUN_142dbb6a0(param_1 + 0x57);
  FUN_142dbb6a0(param_1 + 0x6a);
  FUN_142dbb6a0(param_1 + 0x7d);
  FUN_142dbb6a0(param_1 + 0x90);
  FUN_142dbb6a0(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0xb6) = 0;
  return;
}



// FUNCTION 140e8f250 FUN_140e8f250 body=540 status=ok
// SIG undefined FUN_140e8f250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e8f250(longlong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1512];
  longlong local_a0;
  longlong local_90;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  uVar1 = *(undefined1 *)(param_1 + 0x175c);
  puVar2 = (undefined1 *)FUN_140e6a670(local_688);
  *(undefined1 *)(param_1 + 0x10f0) = *puVar2;
  *(undefined1 *)(param_1 + 0x10f1) = puVar2[1];
  *(undefined1 *)(param_1 + 0x10f2) = puVar2[2];
  *(undefined1 *)(param_1 + 0x10f3) = puVar2[3];
  FUN_140e6c260(param_1 + 0x1100,puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1700) = *(undefined4 *)(puVar2 + 0x610);
  *(undefined4 *)(param_1 + 0x1704) = *(undefined4 *)(puVar2 + 0x614);
  *(undefined4 *)(param_1 + 0x1708) = *(undefined4 *)(puVar2 + 0x618);
  *(undefined1 *)(param_1 + 0x170c) = puVar2[0x61c];
  *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(puVar2 + 0x620);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(puVar2 + 0x624);
  *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(puVar2 + 0x628);
  *(undefined4 *)(param_1 + 0x171c) = *(undefined4 *)(puVar2 + 0x62c);
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(puVar2 + 0x630);
  *(undefined4 *)(param_1 + 0x1724) = *(undefined4 *)(puVar2 + 0x634);
  *(undefined4 *)(param_1 + 0x1728) = *(undefined4 *)(puVar2 + 0x638);
  *(undefined4 *)(param_1 + 0x172c) = *(undefined4 *)(puVar2 + 0x63c);
  *(undefined1 *)(param_1 + 0x1730) = puVar2[0x640];
  *(undefined4 *)(param_1 + 0x1734) = *(undefined4 *)(puVar2 + 0x644);
  *(undefined4 *)(param_1 + 0x1738) = *(undefined4 *)(puVar2 + 0x648);
  *(undefined4 *)(param_1 + 0x173c) = *(undefined4 *)(puVar2 + 0x64c);
  *(undefined4 *)(param_1 + 0x1740) = *(undefined4 *)(puVar2 + 0x650);
  *(undefined1 *)(param_1 + 0x1744) = puVar2[0x654];
  *(undefined4 *)(param_1 + 0x1748) = *(undefined4 *)(puVar2 + 0x658);
  *(undefined4 *)(param_1 + 0x174c) = *(undefined4 *)(puVar2 + 0x65c);
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(puVar2 + 0x660);
  *(undefined4 *)(param_1 + 0x1754) = *(undefined4 *)(puVar2 + 0x664);
  *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(puVar2 + 0x668);
  *(undefined1 *)(param_1 + 0x175c) = puVar2[0x66c];
  *(undefined1 *)(param_1 + 0x175d) = puVar2[0x66d];
  *(undefined1 *)(param_1 + 0x175e) = puVar2[0x66e];
  *(undefined1 *)(param_1 + 0x175f) = puVar2[0x66f];
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x175c) = uVar1;
  *(undefined1 *)(param_1 + 0x175f) = 1;
  FUN_140e84fd0(param_1);
  return;
}



// FUNCTION 140e8f470 FUN_140e8f470 body=122 status=ok
// SIG undefined FUN_140e8f470(void)

void FUN_140e8f470(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x528), lVar3 != 0)) {
    lVar2 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = *(longlong *)(lVar3 + 0x2ca0);
      goto LAB_140e8f4cf;
    }
  }
  lVar3 = 0;
LAB_140e8f4cf:
  if (lVar3 != 0) {
    FUN_142fcf660(lVar3,0,1);
    return;
  }
  return;
}



// FUNCTION 140e8f4f0 RegisterActor body=31 status=ok
// SIG undefined RegisterActor(void)

void ULandscapeSubsystem::RegisterActor(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x88,local_res10);
  return;
}



// FUNCTION 140e8f510 FUN_140e8f510 body=102 status=ok
// SIG undefined FUN_140e8f510(void)

void FUN_140e8f510(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  iVar1 = FUN_142235230();
  if ((iVar1 != 3) && ((char)param_1[0x217] != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar3 = (longlong *)FUN_142d5ecc0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b8))(plVar3);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e8f56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)((longlong)param_1 + 0x494),1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e8f580 FUN_140e8f580 body=161 status=ok
// SIG undefined FUN_140e8f580(void)

void FUN_140e8f580(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x260);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x98);
    pvVar1 = *(void **)((longlong)param_1 + 0x260);
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
        *(void **)((longlong)param_1 + 0x260) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x98);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x260) = uVar2;
  return;
}



// FUNCTION 140e8f630 FUN_140e8f630 body=148 status=ok
// SIG undefined FUN_140e8f630(void)

void FUN_140e8f630(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x268);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x26c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x98,0);
    uVar3 = uVar2 / 0x98 & 0xffffffff;
    if ((int)(uVar2 / 0x98) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x26c) = (int)uVar3;
  FUN_140e8f580(param_1,param_2,uVar3,0x98);
  return;
}



// FUNCTION 140e8f6d0 FUN_140e8f6d0 body=176 status=ok
// SIG undefined FUN_140e8f6d0(void)

void FUN_140e8f6d0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x268);
  uVar3 = *(uint *)(param_1 + 0x26c);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_140e8f753;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x98)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x98,0);
        uVar3 = *(uint *)(param_1 + 0x26c);
        uVar2 = (uint)(uVar1 / 0x98);
      }
      goto LAB_140e8f753;
    }
    if (uVar2 == 0) goto LAB_140e8f753;
  }
  uVar2 = uVar3;
LAB_140e8f753:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x26c) = uVar2;
    FUN_140e8f580(param_1,*(undefined4 *)(param_1 + 0x268),uVar2,0x98);
    return;
  }
  return;
}



// FUNCTION 140e8f780 FUN_140e8f780 body=126 status=ok
// SIG undefined FUN_140e8f780(void)

void FUN_140e8f780(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x98,0);
      iVar2 = (int)(uVar1 / 0x98);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x26c)) {
    *(int *)(param_1 + 0x26c) = iVar2;
    FUN_140e8f580(param_1,*(undefined4 *)(param_1 + 0x268),iVar2,0x98);
  }
  return;
}



// FUNCTION 140e8f800 FUN_140e8f800 body=442 status=ok
// SIG undefined FUN_140e8f800(void)

undefined8 FUN_140e8f800(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_4;
    if (bVar1) {
LAB_140e8f922:
      lVar3 = *(longlong *)(param_1 + 0x50);
      lVar4 = FUN_140c428d0(lVar2);
      lVar2 = *(longlong *)(lVar4 + 0xb0);
      lVar4 = (longlong)*(int *)(lVar4 + 0xb8) * 0x40 + lVar2;
      for (; lVar2 != lVar4; lVar2 = lVar2 + 0x40) {
        if (*(longlong *)(lVar2 + 0x20) == lVar3) {
          param_4 = *(longlong *)(lVar2 + 0x10);
          goto LAB_140e8f997;
        }
      }
    }
    else {
      lVar2 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FUN_14222e250(param_4);
        if (lVar2 != 0) {
          lVar3 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140e8f922;
        }
        lVar2 = FUN_140a63ba0(param_4);
        if (lVar2 != 0) {
          lVar3 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140e8f922;
        }
      }
      lVar2 = FUN_14142fee0();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140e8f997;
    }
  }
  param_4 = 0;
LAB_140e8f997:
  FUN_142cb2580(param_2,param_4);
  return param_2;
}



// FUNCTION 140e8f9c0 FUN_140e8f9c0 body=393 status=ok
// SIG undefined FUN_140e8f9c0(void)

undefined8 FUN_140e8f9c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_4 == 0) goto LAB_140e8fb21;
  lVar2 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar2 = param_4;
  if (!bVar1) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e8fb21;
    lVar2 = FUN_14222e250(param_4);
    if (lVar2 != 0) {
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140e8fae8;
    }
    lVar2 = FUN_140a63ba0(param_4);
    if (lVar2 == 0) goto LAB_140e8fb21;
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e8fb21;
  }
LAB_140e8fae8:
  plVar4 = *(longlong **)(lVar2 + 0x1518);
  plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x1520) * 0x1f;
  if (plVar4 != plVar5) {
    do {
      if (*plVar4 == *(longlong *)(param_1 + 0x50)) {
        lVar2 = plVar4[1];
        goto LAB_140e8fb23;
      }
      plVar4 = plVar4 + 0x1f;
    } while (plVar4 != plVar5);
  }
LAB_140e8fb21:
  lVar2 = 0;
LAB_140e8fb23:
  FUN_142cb2580(param_2,lVar2);
  return param_2;
}



// FUNCTION 140e8fb50 FUN_140e8fb50 body=479 status=ok
// SIG undefined FUN_140e8fb50(void)

void FUN_140e8fb50(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_res8;
  longlong *local_18;
  int local_10;
  
  if (*(int *)((longlong)param_1 + 0x4ec) != -1) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_140aab5e0(uVar2);
    if (((lVar3 != 0) &&
        (lVar3 = FUN_140aab9d0(lVar3,*(undefined4 *)((longlong)param_1 + 0x4ec)), lVar3 != 0)) &&
       (param_1[0x8c] != 0)) {
      local_res8 = param_1;
      FUN_140aaea70(lVar3,&local_18);
      lVar3 = FUN_140c45020(param_1);
      plVar1 = local_18 + local_10;
      for (plVar4 = local_18; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          FUN_140e943f0(param_1[0x8c],1);
          FUN_140e6de50(&local_res8);
          goto LAB_140e8fc6f;
        }
      }
      if (local_18 != plVar1) {
        plVar4 = local_18;
        do {
          if (*plVar4 == param_1[0x8e]) {
            FUN_140e943f0(param_1,1);
            lVar3 = FUN_140e7fe60(param_1,param_1[0x8d]);
            if (lVar3 != 0) {
              if (DAT_146b33f38 == 0) {
                FUN_142d7ebe0();
              }
              if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
                FUN_142fe44f0(lVar3,0,*(undefined4 *)((longlong)param_1 + 0x47c));
              }
              else {
                FUN_142fe44f0(lVar3,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0),
                              *(undefined4 *)((longlong)param_1 + 0x47c));
              }
            }
            goto LAB_140e8fc6f;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
      }
      lVar3 = FUN_140e7fe60(param_1,param_1[0x8d]);
      if (lVar3 != 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        uVar2 = 0;
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
        }
        FUN_142fe44f0(lVar3,uVar2,*(undefined4 *)((longlong)param_1 + 0x47c));
      }
      FUN_140e6de50(&local_res8);
LAB_140e8fc6f:
      if (local_18 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  FUN_140e83b10(param_1);
  if (param_1[0x8c] != 0) {
    FUN_140e93cd0();
  }
  FUN_140e93cd0(param_1);
  return;
}



// FUNCTION 140e8fd30 FUN_140e8fd30 body=399 status=ok
// SIG undefined FUN_140e8fd30(void)

void FUN_140e8fd30(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_res8 [2];
  longlong local_18;
  int local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((*(uint *)(lVar4 + 0x830) & 0x400) == 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar5,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get();
      if (lVar4 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((*(byte *)(lVar4 + 0x94) & 2) == 0) {
            uVar3 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar3 < (int)DAT_1469e91c4) {
              uVar7 = uVar3 & 0xffff;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)uVar7 * 0x18;
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) goto LAB_140e8fe34;
            bVar1 = false;
          }
          else {
LAB_140e8fe34:
            bVar1 = true;
          }
          if (!bVar1) {
            cVar2 = FUN_140cfdb70();
            if (cVar2 != '\0') {
              FUN_140cf9a30(lVar4);
              cVar2 = FUN_140c251c0(param_1,lVar4);
              if (cVar2 != '\0') {
                FUN_1414bbd30(param_1,lVar4);
              }
            }
          }
        }
      }
      local_10 = local_10 + 1;
    }
    if (((char)param_1[0x25] == '\x03') && (param_1[0xbf] != 0)) {
      local_res8[0] = FUN_140e80cd0(param_1);
      lVar4 = param_1[0xbf];
      *(undefined4 *)(lVar4 + 0xba4) = local_res8[0];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar4 + 0xb90,local_res8);
    }
  }
  return;
}



// FUNCTION 140e8fec0 FUN_140e8fec0 body=72 status=ok
// SIG undefined FUN_140e8fec0(void)

char FUN_140e8fec0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140c251c0();
  if (cVar1 != '\0') {
    FUN_1414bbd30(param_1,param_2);
  }
  FUN_140e8fd30(param_1);
  return cVar1;
}



// FUNCTION 140e8ff10 FUN_140e8ff10 body=95 status=ok
// SIG undefined FUN_140e8ff10(void)

bool FUN_140e8ff10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0x128) == '\x03')) {
    local_res10[0] = param_2;
    cVar1 = FUN_1407c3030(param_1 + 0x480);
    FUN_142dafbc0(param_1 + 0x480,local_res10);
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 140e8ff70 FUN_140e8ff70 body=257 status=ok
// SIG undefined FUN_140e8ff70(void)

void FUN_140e8ff70(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((char)param_1[0x25] == '\x03') {
    if (*(char *)(param_1[0x9b] + 0x418) == '\x03') {
      (**(code **)(param_1[0x99] + 0xf8))(param_1 + 0x99,0xffffffff,1);
      if ((char)param_1[0x25] != '\x03') goto LAB_140e8fff1;
    }
    if (*(char *)(param_1[0x9b] + 0x418) == '\x01') {
      uVar1 = FUN_142e1a5a0();
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x260))(plVar2);
      }
    }
  }
LAB_140e8fff1:
  lVar3 = param_1[0x99];
  if ((*(byte *)(param_1[0x9b] + 0x418) & 0xfd) == 0) {
    (**(code **)(lVar3 + 0x108))(param_1 + 0x99,DAT_146871288,0xffffffff);
  }
  else {
    (**(code **)(lVar3 + 0x100))();
  }
  if ((char)param_1[0x9f] != '\0') {
    uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar3 != 0) {
      *(bool *)(lVar3 + 0x25d) = *(char *)(param_1[0x9b] + 0x418) != '\x02';
    }
  }
  return;
}



// FUNCTION 140e90080 FUN_140e90080 body=63 status=ok
// SIG undefined FUN_140e90080(void)

void FUN_140e90080(longlong param_1)

{
  if ((*(char *)(param_1 + 0x458) != '\x02') && (*(char *)(param_1 + 0x128) == '\x03')) {
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FUN_140e93cd0();
    }
    FUN_140e93cd0(param_1);
    return;
  }
  return;
}



// FUNCTION 140e900c0 FUN_140e900c0 body=850 status=ok
// SIG undefined FUN_140e900c0(void)

undefined8 FUN_140e900c0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  size_t _Size;
  longlong local_res8;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((((*(longlong **)(param_1 + 0x110) != (longlong *)0x0) &&
       (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))(), lVar7 != 0)) &&
      (lVar7 = FUN_140e822f0(param_1,param_2), lVar7 != 0)) &&
     ((plVar8 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar7),
      plVar8 != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*plVar8 + 0x280))(plVar8,*(undefined8 *)(param_1 + 0x110)),
      cVar4 != '\0')))) {
    if ((*(char *)(*(longlong *)(param_1 + 0x110) + 0x128) == '\x03') &&
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x848), lVar7 != 0)) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (lVar9 = (**(code **)(*(longlong *)(lVar7 + 0xd80) + 0x18))(), local_res8 = lVar9,
         lVar9 != 0)) {
        uVar10 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))();
        plVar8 = (longlong *)FUN_143018fc0(param_3,uVar10,0);
        if (plVar8 != (longlong *)0x0) {
          uVar10 = FUN_14301f8f0();
          plVar11 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar10);
          if ((plVar11 != (longlong *)0x0) && (lVar1 = plVar11[0x41], lVar1 != 0)) {
            lVar2 = *(longlong *)(lVar1 + 0x1d8);
            if ((lVar2 == 0) || (*(char *)(lVar2 + 0x38) != '\0')) {
              if (*(longlong *)(lVar7 + 0x1cd0) != 0) {
                lVar7 = *(longlong *)(lVar7 + 0x1cd0);
              }
              iVar5 = FUN_142ff7c90(lVar9);
              (**(code **)(*plVar11 + 0x4f0))(plVar11,lVar7);
              local_30 = 1;
              local_38 = plVar8;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (lVar7 + 0x1328,&local_38);
              FUN_142227350(plVar8,0,1);
              iVar6 = FUN_142ff7c90(local_res8,*(undefined8 *)(lVar1 + 0x1d8));
              FUN_14145e950(*(undefined8 *)(param_1 + 0x110),param_2,*(undefined8 *)(lVar1 + 0x1d8),
                            iVar6 - iVar5);
            }
            else {
              FUN_142fe3d60(lVar9,&local_res8,lVar2,plVar8,1,0,0,1,0,0);
              if (((*(uint *)((longlong)*(longlong **)(param_1 + 0x110) + 0x4cc) >> 1 & 1) == 0) ||
                 (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x768))(), cVar4 == '\0'))
              {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_140e96380(param_1,param_2,plVar8);
              }
              else {
                local_30 = (int)plVar11[0x3c];
                _Size = (size_t)local_30;
                _Src = (void *)plVar11[0x3b];
                local_38 = (longlong *)0x0;
                if (local_30 == 0) {
                  local_2c = 0;
                }
                else {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
                  _guard_xfg_dispatch_icall_nop(local_38,_Src,_Size);
                }
                FUN_14145e9a0(*(undefined8 *)(param_1 + 0x110),param_2,plVar8,&local_38);
              }
            }
            FUN_140e6bc40(param_3);
            return 1;
          }
        }
      }
    }
    FUN_140e6bc40(param_3);
    return 0;
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_3 + 0x20);
  return 0;
}



// FUNCTION 140e90420 FUN_140e90420 body=178 status=ok
// SIG undefined FUN_140e90420(void)

void FUN_140e90420(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar2 = FUN_140e822f0();
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar2);
      if (plVar3 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar3 + 0x280))(plVar3,*(undefined8 *)(param_1 + 0x110));
        if (cVar1 != '\0') {
          FUN_140e42f00(*(undefined8 *)(param_1 + 0x110),param_2,param_3,param_4);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x768))();
          if (cVar1 == '\0') {
            FUN_14145dee0(*(undefined8 *)(param_1 + 0x110),param_2,param_3);
          }
          else {
            FUN_140e76200(param_1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e904e0 FUN_140e904e0 body=55 status=ok
// SIG undefined FUN_140e904e0(void)

void FUN_140e904e0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 200)) {
    *(int *)(param_1 + 200) = param_2;
    FUN_140e8d230();
    FUN_140e7aca0(param_1,param_2);
  }
  return;
}



// FUNCTION 140e90580 FUN_140e90580 body=207 status=ok
// SIG undefined FUN_140e90580(void)

void FUN_140e90580(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1c0))) {
LAB_140e90628:
    FUN_140e6bf90((longlong)(int)param_2 * 0x188 + *(longlong *)(param_1 + 0x1b8),param_3);
    return;
  }
  if (param_2 < 10) {
    iVar1 = *(int *)(param_1 + 0x1c0);
    iVar3 = (param_2 - iVar1) + 1;
    if (0 < iVar3) {
      *(int *)(param_1 + 0x1c0) = iVar1 + iVar3;
      if (*(int *)(param_1 + 0x1c4) < iVar1 + iVar3) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(param_1 + 0x1b8,iVar1);
      }
      lVar2 = (longlong)iVar1 * 0x188 + *(longlong *)(param_1 + 0x1b8);
      do {
        FUN_140ac6910(lVar2);
        lVar2 = lVar2 + 0x188;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x1c0);
    }
    if ((int)param_2 < iVar1) goto LAB_140e90628;
  }
  return;
}



// FUNCTION 140e90650 FUN_140e90650 body=650 status=ok
// SIG undefined FUN_140e90650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e90650(longlong *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (((char)param_1[0x8b] == '\x01') && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    if (param_2 != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x45c) = param_3;
    }
    plVar4 = (longlong *)param_1[0x8c];
    *(char *)((longlong)param_1 + 0x459) = param_2;
    if ((plVar4 != (longlong *)0x0) && ((char)plVar4[0x8f] != param_2)) {
      (**(code **)(*plVar4 + 0x600))(plVar4);
      *(char *)(plVar4 + 0x8f) = param_2;
      param_2 = *(char *)((longlong)param_1 + 0x459);
    }
    if ((param_2 != '\0') &&
       (iVar1 = FUN_140e73e10(param_1), *(int *)((longlong)param_1 + 0x45c) != iVar1)) {
      FUN_140e85550(param_1);
      return;
    }
    if ((*(char *)((longlong)param_1 + 0x459) == (char)param_1[0x8f]) &&
       (*(char *)((longlong)param_1 + 0x459) != '\0')) {
      uVar3 = AActor::GetWorldTimerManager(param_1);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_140e74c80;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar2;
        *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_90 = 0xbf800000;
      local_98 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x9c,&local_88,0x40800000);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar2 = FMemory::Realloc(plVar4,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
    else {
      uVar3 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar3,param_1 + 0x9c);
      param_1[0x9c] = 0;
      lVar2 = param_1[0x8c];
      if (lVar2 != 0) {
        uVar3 = AActor::GetWorldTimerManager(param_1);
        FUN_142880530(uVar3,lVar2 + 0x4e0);
        *(undefined8 *)(lVar2 + 0x4e0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140e908e0 FUN_140e908e0 body=122 status=ok
// SIG undefined FUN_140e908e0(void)

void FUN_140e908e0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 200)) {
    FUN_140e78fc0();
    *(int *)(param_1 + 200) = param_2;
    if (param_3 == '\0') {
      FUN_140e8d230(param_1);
      FUN_140e7aca0(param_1,param_2);
    }
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    iVar1 = FUN_142235230();
    if (iVar1 == 3) {
      FUN_141460a70(*(undefined8 *)(param_1 + 0x110),param_2);
    }
  }
  return;
}



// FUNCTION 140e90960 FUN_140e90960 body=70 status=ok
// SIG undefined FUN_140e90960(void)

void FUN_140e90960(longlong *param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x10) & 1)) {
    if ((char)param_1[0x25] == '\x03') {
      (**(code **)(*param_1 + 0x600))();
    }
    FUN_14223c560(param_1,param_2);
  }
  return;
}



// FUNCTION 140e909b0 FUN_140e909b0 body=57 status=ok
// SIG undefined FUN_140e909b0(void)

void FUN_140e909b0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  FUN_14223c560();
  plVar1 = *(longlong **)(param_1 + 0x570);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x310))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140e909f0 FUN_140e909f0 body=15 status=ok
// SIG undefined FUN_140e909f0(void)

void FUN_140e909f0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x10f3) != param_2) {
    *(char *)(param_1 + 0x10f3) = param_2;
  }
  return;
}



// FUNCTION 140e90a00 FUN_140e90a00 body=27 status=ok
// SIG undefined FUN_140e90a00(void)

void FUN_140e90a00(longlong *param_1,byte param_2,undefined8 param_3)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x18 + *param_1) = param_3;
  }
  return;
}



// FUNCTION 140e90a20 FUN_140e90a20 body=148 status=ok
// SIG undefined FUN_140e90a20(void)

void FUN_140e90a20(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1700)) {
    *(float *)(param_1 + 0x1700) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(float *)(param_1 + 0xaf0) = param_2;
    *(float *)(param_1 + 0xaf4) = param_2;
    *(float *)(param_1 + 0xaf8) = param_2;
    *(undefined4 *)(param_1 + 0xafc) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e90ac0 FUN_140e90ac0 body=107 status=ok
// SIG undefined FUN_140e90ac0(void)

void FUN_140e90ac0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1704)) {
    *(float *)(param_1 + 0x1704) = param_2;
    *(float *)(param_1 + 0xfa8) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e90b30 FUN_140e90b30 body=315 status=ok
// SIG undefined FUN_140e90b30(void)

void FUN_140e90b30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03')) {
    piVar4 = *(int **)(param_1 + 0xb0);
    piVar3 = piVar4 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
    if (piVar4 != piVar3) {
      while (*(longlong *)(piVar4 + 8) != param_2) {
        piVar4 = piVar4 + 0x10;
        if (piVar4 == piVar3) {
          return;
        }
      }
      lVar1 = *(longlong *)(piVar4 + 10);
      if (lVar1 != param_3) {
        *(longlong *)(piVar4 + 10) = param_3;
        if (*piVar4 == -1) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          *piVar4 = *(int *)(param_1 + 0x50);
          iVar2 = *(int *)(param_1 + 0x50);
          if (iVar2 == -1) {
            iVar2 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar2;
        }
        piVar4[1] = piVar4[1] + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
        if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03') {
          if ((*(longlong *)(param_1 + 0xe0) != 0) && (lVar1 != 0)) {
            local_18 = lVar1;
            local_10 = param_2;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (*(longlong *)(param_1 + 0xe0),&local_18);
          }
          if ((*(longlong *)(param_1 + 0xd8) != 0) && (param_3 != 0)) {
            local_18 = param_3;
            local_10 = param_2;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (*(longlong *)(param_1 + 0xd8),&local_18);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e90c70 FUN_140e90c70 body=68 status=ok
// SIG undefined FUN_140e90c70(void)

void FUN_140e90c70(longlong param_1,float param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x10b9) == '\0') && (param_2 != *(float *)(param_1 + 0x1708))) {
    *(float *)(param_1 + 0x1708) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if ((*(longlong *)(param_1 + 0x468) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x528), plVar1 != (longlong *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x000140e90cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x780))();
      return;
    }
  }
  return;
}



// FUNCTION 140e90cc0 FUN_140e90cc0 body=268 status=ok
// SIG undefined FUN_140e90cc0(void)

void FUN_140e90cc0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x170c) != param_2) {
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(char *)(param_1 + 0x170c) = param_2;
    if (*(longlong *)(param_1 + 0x468) != 0) {
      FString::PrintfImpl(&local_28,L"r.Tonemapper.Film %d",param_2);
      psVar3 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar3 = local_28;
      }
      local_38 = 0;
      local_30 = 0;
      if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
        lVar2 = -1;
        do {
          lVar2 = lVar2 + 1;
        } while (psVar3[lVar2] != 0);
        uVar1 = (int)lVar2 + 1;
        local_30 = (ulonglong)uVar1;
        if (0 < (int)uVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar3,(longlong)(int)uVar1 * 2);
      }
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0xd28))
                (*(longlong **)(param_1 + 0x468),local_18,&local_38,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_28 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e90dd0 FUN_140e90dd0 body=210 status=ok
// SIG undefined FUN_140e90dd0(void)

void FUN_140e90dd0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1710) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x478);
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(int *)(param_1 + 0x1710) = param_2;
    if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0xe0))) {
      *(undefined8 *)(param_1 + 0xf70) =
           *(undefined8 *)(*(longlong *)(lVar1 + 0xd8) + (longlong)param_2 * 8);
    }
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
    }
    if (((*(longlong *)(param_1 + 0x1760) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x468) + 0xc58) != 0)) {
      iVar2 = FUN_142dcff80();
      if (iVar2 < 1) {
        FUN_141460200(*(undefined8 *)(param_1 + 0x468),*(undefined8 *)(param_1 + 0x1760));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e90eb0 FUN_140e90eb0 body=107 status=ok
// SIG undefined FUN_140e90eb0(void)

void FUN_140e90eb0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1714)) {
    *(float *)(param_1 + 0x1714) = param_2;
    *(float *)(param_1 + 0xf6c) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e90f20 FUN_140e90f20 body=107 status=ok
// SIG undefined FUN_140e90f20(void)

void FUN_140e90f20(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1718)) {
    *(float *)(param_1 + 0x1718) = param_2;
    *(float *)(param_1 + 0xf90) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e90f90 FUN_140e90f90 body=107 status=ok
// SIG undefined FUN_140e90f90(void)

void FUN_140e90f90(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x171c)) {
    *(float *)(param_1 + 0x171c) = param_2;
    *(float *)(param_1 + 0xf9c) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91000 FUN_140e91000 body=46 status=ok
// SIG undefined FUN_140e91000(void)

void FUN_140e91000(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5f1) != param_2) {
    *(char *)(param_1 + 0x5f1) = param_2;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      if (param_2 != '\0') {
        FUN_140ccf520(*(longlong *)(param_1 + 0x4b8),4);
        return;
      }
      FUN_140ccaee0();
      return;
    }
  }
  return;
}



// FUNCTION 140e91030 FUN_140e91030 body=36 status=ok
// SIG undefined FUN_140e91030(void)

void FUN_140e91030(longlong *param_1,byte param_2,char param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  if ((int)(uint)param_2 < (int)param_1[1]) {
    lVar2 = *param_1;
    pbVar1 = (byte *)((ulonglong)param_2 * 0xf8 + 0x38 + lVar2);
    *pbVar1 = *pbVar1 & 0xf7;
    pbVar1 = (byte *)((ulonglong)param_2 * 0xf8 + 0x38 + lVar2);
    *pbVar1 = *pbVar1 | param_3 << 3;
  }
  return;
}



// FUNCTION 140e91060 FUN_140e91060 body=107 status=ok
// SIG undefined FUN_140e91060(void)

void FUN_140e91060(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1720)) {
    *(float *)(param_1 + 0x1720) = param_2;
    *(float *)(param_1 + 0xccc) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e910d0 FUN_140e910d0 body=148 status=ok
// SIG undefined FUN_140e910d0(void)

void FUN_140e910d0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1724)) {
    *(float *)(param_1 + 0x1724) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(float *)(param_1 + 0xb10) = param_2;
    *(float *)(param_1 + 0xb14) = param_2;
    *(float *)(param_1 + 0xb18) = param_2;
    *(undefined4 *)(param_1 + 0xb1c) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91170 FUN_140e91170 body=20 status=ok
// SIG undefined FUN_140e91170(void)

void FUN_140e91170(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x10f2) != param_2) {
    *(char *)(param_1 + 0x10f2) = param_2;
    FUN_140e6ff10();
    return;
  }
  return;
}



// FUNCTION 140e91190 FUN_140e91190 body=148 status=ok
// SIG undefined FUN_140e91190(void)

void FUN_140e91190(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1728)) {
    *(float *)(param_1 + 0x1728) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(float *)(param_1 + 0xb00) = param_2;
    *(float *)(param_1 + 0xb04) = param_2;
    *(float *)(param_1 + 0xb08) = param_2;
    *(undefined4 *)(param_1 + 0xb0c) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91230 FUN_140e91230 body=24 status=ok
// SIG undefined FUN_140e91230(void)

void FUN_140e91230(longlong param_1,byte param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_142397540(*(longlong *)(param_1 + 0x270),param_2 ^ 1,1);
    return;
  }
  return;
}



// FUNCTION 140e91250 FUN_140e91250 body=107 status=ok
// SIG undefined FUN_140e91250(void)

void FUN_140e91250(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x172c)) {
    *(float *)(param_1 + 0x172c) = param_2;
    *(float *)(param_1 + 0xecc) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e912c0 FUN_140e912c0 body=52 status=ok
// SIG undefined FUN_140e912c0(void)

void FUN_140e912c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x10f1) != param_2) {
    *(char *)(param_1 + 0x10f1) = param_2;
    if ((*(longlong *)(param_1 + 0x468) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x520), plVar1 != (longlong *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x000140e912ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6e8))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140e91300 FUN_140e91300 body=94 status=ok
// SIG undefined FUN_140e91300(void)

void FUN_140e91300(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x8e,local_res18);
  }
  else {
    FUN_142dafbc0();
  }
  lVar1 = *param_1;
  uVar2 = FUN_1407c3030(param_1 + 0x8e);
  (**(code **)(lVar1 + 0x310))(param_1,uVar2);
  return;
}



// FUNCTION 140e91360 FUN_140e91360 body=15 status=ok
// SIG undefined FUN_140e91360(void)

void FUN_140e91360(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x175d) != param_2) {
    *(char *)(param_1 + 0x175d) = param_2;
  }
  return;
}



// FUNCTION 140e91370 FUN_140e91370 body=20 status=ok
// SIG undefined FUN_140e91370(void)

void FUN_140e91370(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1730) != param_2) {
    *(char *)(param_1 + 0x1730) = param_2;
    FUN_140e701a0();
    return;
  }
  return;
}



// FUNCTION 140e913c0 FUN_140e913c0 body=213 status=ok
// SIG undefined FUN_140e913c0(void)

void FUN_140e913c0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if ((param_1 != 0) && (iVar2 = FUN_1428cf800(), iVar2 != 3)) {
    UWorld::GetPlayerControllerIterator(param_1,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar3 + 0xc70) != 0)) {
          FWeakObjectPtr::operator=(*(longlong *)(lVar3 + 0xc70) + 0x2d8,param_2);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140e914a0 FUN_140e914a0 body=36 status=ok
// SIG undefined FUN_140e914a0(void)

void FUN_140e914a0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  *(undefined4 *)(param_1 + 0xba4) = param_2;
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb90,local_res10);
  return;
}



// FUNCTION 140e914d0 FUN_140e914d0 body=150 status=ok
// SIG undefined FUN_140e914d0(void)

void FUN_140e914d0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x175e) != param_2) {
    *(uint *)(param_1 + 0xac0) = *(uint *)(param_1 + 0xac0) & 0xff7fffff;
    *(uint *)(param_1 + 0xac4) = *(uint *)(param_1 + 0xac4) & 0xfffffffd;
    *(byte *)(param_1 + 0x175e) = param_2;
    *(uint *)(param_1 + 0xac4) = *(uint *)(param_1 + 0xac4) | (uint)param_2 + (uint)param_2;
    *(uint *)(param_1 + 0xac0) =
         ((uint)param_2 << 0x17 | *(uint *)(param_1 + 0xac0)) & 0xbfffffff | (uint)param_2 << 0x1e;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91570 FUN_140e91570 body=82 status=ok
// SIG undefined FUN_140e91570(void)

void FUN_140e91570(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(longlong *)(param_1 + 0x110) = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_142235230(param_2);
    if (iVar1 != 3) {
      FUN_140e79f90(param_1);
    }
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_140e78fc0(param_1,*(int *)(param_1 + 200),0);
    uVar2 = *(undefined4 *)(param_1 + 200);
  }
  FUN_140e7aca0(param_1,uVar2);
  return;
}



// FUNCTION 140e915d0 FUN_140e915d0 body=15 status=ok
// SIG undefined FUN_140e915d0(void)

void FUN_140e915d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x10f0) != param_2) {
    *(char *)(param_1 + 0x10f0) = param_2;
  }
  return;
}



// FUNCTION 140e915e0 FUN_140e915e0 body=22 status=ok
// SIG undefined FUN_140e915e0(void)

void FUN_140e915e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x480) = *param_2;
  *(undefined8 *)(param_1 + 0x488) = param_2[1];
  return;
}



// FUNCTION 140e91600 FUN_140e91600 body=107 status=ok
// SIG undefined FUN_140e91600(void)

void FUN_140e91600(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1734)) {
    *(float *)(param_1 + 0x1734) = param_2;
    *(float *)(param_1 + 0x1078) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91670 FUN_140e91670 body=148 status=ok
// SIG undefined FUN_140e91670(void)

void FUN_140e91670(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1738)) {
    *(float *)(param_1 + 0x1738) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(float *)(param_1 + 0xae0) = param_2;
    *(float *)(param_1 + 0xae4) = param_2;
    *(float *)(param_1 + 0xae8) = param_2;
    *(undefined4 *)(param_1 + 0xaec) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91710 FUN_140e91710 body=107 status=ok
// SIG undefined FUN_140e91710(void)

void FUN_140e91710(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x173c)) {
    *(float *)(param_1 + 0x173c) = param_2;
    *(float *)(param_1 + 0xc44) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91780 FUN_140e91780 body=107 status=ok
// SIG undefined FUN_140e91780(void)

void FUN_140e91780(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1740)) {
    *(float *)(param_1 + 0x1740) = param_2;
    *(float *)(param_1 + 0xc3c) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e917f0 FUN_140e917f0 body=268 status=ok
// SIG undefined FUN_140e917f0(void)

void FUN_140e917f0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x1744) != param_2) {
    *(undefined1 *)(param_1 + 0x175f) = 0;
    *(char *)(param_1 + 0x1744) = param_2;
    if (*(longlong *)(param_1 + 0x468) != 0) {
      FString::PrintfImpl(&local_28,L"r.Tonemapper.Sharpen %d",param_2);
      psVar3 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar3 = local_28;
      }
      local_38 = 0;
      local_30 = 0;
      if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
        lVar2 = -1;
        do {
          lVar2 = lVar2 + 1;
        } while (psVar3[lVar2] != 0);
        uVar1 = (int)lVar2 + 1;
        local_30 = (ulonglong)uVar1;
        if (0 < (int)uVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar3,(longlong)(int)uVar1 * 2);
      }
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0xd28))
                (*(longlong **)(param_1 + 0x468),local_18,&local_38,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_28 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e91900 FUN_140e91900 body=268 status=ok
// SIG undefined FUN_140e91900(void)

void FUN_140e91900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x650) = param_2;
    lVar3 = FUN_1407cb700();
    if (lVar3 != 0) {
      FUN_1407ce270(lVar3,param_2);
    }
    local_18 = (longlong *)0x0;
    local_10 = 0;
    lVar3 = UCableComponent::GetAttachedActor(param_1);
    if (lVar3 != 0) {
      uVar4 = UCableComponent::GetAttachedActor(param_1);
      FUN_1407c7b00(uVar4,&local_18,0,1);
    }
    plVar1 = local_18 + (int)local_10;
    for (plVar6 = local_18; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (((longlong *)*plVar6 != (longlong *)0x0) &&
         (lVar3 = (**(code **)(*(longlong *)*plVar6 + 0x668))(), lVar3 != 0)) {
        lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_14076c7a0(lVar3,param_2);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140e91a10 FUN_140e91a10 body=69 status=ok
// SIG undefined FUN_140e91a10(void)

void FUN_140e91a10(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e7dfd0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_140e91900(param_1,lVar2);
    }
  }
  return;
}



// FUNCTION 140e91a60 FUN_140e91a60 body=155 status=ok
// SIG undefined FUN_140e91a60(void)

void FUN_140e91a60(longlong *param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  iVar1 = FUN_142235230();
  if (((iVar1 != 3) && ((char)param_1[0x217] != '\0')) && (param_2 != *(float *)(param_1 + 0x2eb)))
  {
    *(float *)(param_1 + 0x2eb) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x175f) = 0;
    iVar1 = FUN_142235230(param_1);
    if ((iVar1 != 3) && ((char)param_1[0x217] != '\0')) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar3 = (longlong *)FUN_142d5ecc0(uVar2);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b8))(plVar3);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,(int)param_1[0x2eb],1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e91b00 FUN_140e91b00 body=107 status=ok
// SIG undefined FUN_140e91b00(void)

void FUN_140e91b00(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1748)) {
    *(float *)(param_1 + 0x1748) = param_2;
    *(float *)(param_1 + 0xc40) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91b70 FUN_140e91b70 body=22 status=ok
// SIG undefined FUN_140e91b70(void)

void FUN_140e91b70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x250) = param_2;
  FWeakObjectPtr::operator=(param_1 + 0x248,param_3);
  return;
}



// FUNCTION 140e91b90 FUN_140e91b90 body=45 status=ok
// SIG undefined FUN_140e91b90(void)

void FUN_140e91b90(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x174c)) {
    *(float *)(param_1 + 0x174c) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x460) != 0) {
      *(float *)(*(longlong *)(param_1 + 0x460) + 0x24cc) = param_2;
    }
  }
  return;
}



// FUNCTION 140e91bc0 FUN_140e91bc0 body=100 status=ok
// SIG undefined FUN_140e91bc0(void)

void FUN_140e91bc0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1754)) {
    *(float *)(param_1 + 0x1754) = param_2;
    *(float *)(param_1 + 0xec4) = param_2;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91c30 FUN_140e91c30 body=107 status=ok
// SIG undefined FUN_140e91c30(void)

void FUN_140e91c30(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x1750)) {
    *(float *)(param_1 + 0x1750) = param_2;
    *(float *)(param_1 + 0xec0) = param_2;
    *(undefined1 *)(param_1 + 0x175f) = 0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(param_1 + 0x458) + 0x2e0,param_1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(param_1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e91ca0 FUN_140e91ca0 body=137 status=ok
// SIG undefined FUN_140e91ca0(void)

void FUN_140e91ca0(longlong *param_1,byte param_2,char param_3,byte param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((int)(uint)param_2 < (int)param_1[1]) {
    lVar3 = (ulonglong)param_2 * 0xf8 + *param_1;
    pbVar1 = (byte *)(lVar3 + 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
    pbVar1 = (byte *)(lVar3 + 0x38);
    *pbVar1 = *pbVar1 | param_3 * '\x02';
    lVar3 = *param_1 + ((ulonglong)(param_4 >> 6) + (ulonglong)param_2 * 0x1f) * 8;
    uVar2 = 1L << (param_4 & 0x3f);
    if (param_3 != '\0') {
      *(ulonglong *)(lVar3 + 0x30) = uVar2 | *(ulonglong *)(lVar3 + 0x30);
      return;
    }
    *(ulonglong *)(lVar3 + 0x30) = ~uVar2 & *(ulonglong *)(lVar3 + 0x30);
  }
  return;
}



// FUNCTION 140e91d30 FUN_140e91d30 body=108 status=ok
// SIG undefined FUN_140e91d30(void)

void FUN_140e91d30(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1f8) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
    FUN_140a88730(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x4c0),param_1 + 0x1b8,
                  &DAT_146870fa8,0,0);
  }
  if ((*(char *)(param_1 + 0x278) != '\0') && (*(longlong *)(param_1 + 0x270) != 0)) {
    FUN_142397540(*(longlong *)(param_1 + 0x270),0,1);
  }
  FUN_140e8d170(param_1);
  return;
}



// FUNCTION 140e91da0 FUN_140e91da0 body=64 status=ok
// SIG undefined FUN_140e91da0(void)

void FUN_140e91da0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1f8) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
    FUN_140a88730(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x4c0),param_1 + 0x1b8,
                  &DAT_146870fa8,0,0);
  }
  return;
}



// FUNCTION 140e91de0 FUN_140e91de0 body=251 status=ok
// SIG undefined FUN_140e91de0(void)

void FUN_140e91de0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar2 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),param_3);
    *(undefined4 *)(param_1 + 0x244) = uVar2;
  }
  if ((*(char *)(param_1 + 0x1f9) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
    FUN_140a88730(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x4c0),param_1 + 0x1b8,
                  &DAT_146870fa8,0,0);
  }
  if (*(char *)(param_1 + 0x279) != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 200) != 0) && (*(longlong *)(DAT_146b33f38 + 0xd0) != 0)) {
      iVar1 = *(int *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x430);
      iVar3 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),param_3);
      if ((iVar1 <= iVar3) && (*(longlong *)(param_1 + 0x270) != 0)) {
        FUN_142397540(*(longlong *)(param_1 + 0x270),0,1);
      }
    }
  }
  FUN_140e8d170(param_1);
  return;
}



// FUNCTION 140e91ee0 FUN_140e91ee0 body=131 status=ok
// SIG undefined FUN_140e91ee0(void)

void FUN_140e91ee0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar1 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),param_3);
    *(undefined4 *)(param_1 + 0x244) = uVar1;
  }
  if ((*(char *)(param_1 + 0x1f9) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) {
    FUN_140a88730(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x4c0),param_1 + 0x1b8,
                  &DAT_146870fa8,0,0);
  }
  return;
}



// FUNCTION 140e91f70 FUN_140e91f70 body=77 status=ok
// SIG undefined FUN_140e91f70(void)

void FUN_140e91f70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar1 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_1 + 0x244) = uVar1;
  }
  return;
}



// FUNCTION 140e91fc0 FUN_140e91fc0 body=148 status=ok
// SIG undefined FUN_140e91fc0(void)

void FUN_140e91fc0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_141404840();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      FUN_140e5e5b0(param_2);
    }
    uVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x458))(plVar4);
    }
  }
  return;
}



// FUNCTION 140e92060 FUN_140e92060 body=182 status=ok
// SIG undefined FUN_140e92060(void)

void FUN_140e92060(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_141404840();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        FUN_140e5e5b0(param_2);
      }
      uVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x450))(plVar4,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 140e92120 FUN_140e92120 body=8 status=ok
// SIG undefined FUN_140e92120(void)

undefined1 FUN_140e92120(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1e8);
}



// FUNCTION 140e92130 FUN_140e92130 body=497 status=ok
// SIG undefined FUN_140e92130(void)

void FUN_140e92130(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_140e810c0(param_1,local_48,&local_res20,&local_res18);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar7 = FUN_1414ca2f0();
    lVar9 = *(longlong *)(param_2 + 0x18);
    for (lVar3 = lVar9; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar7) goto LAB_140e92180;
    }
  }
  lVar9 = 0;
LAB_140e92180:
  plVar8 = (longlong *)FUN_140e6f140(param_1,lVar9);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = FUN_1414ca2f0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e921c9;
  }
  plVar8 = (longlong *)0x0;
LAB_140e921c9:
  *(longlong **)(param_1 + 0x280) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    if (*(char *)(param_2 + 0x11) != '\0') {
      local_res10 = DAT_146870fa0;
      FUN_142dafbc0(plVar8 + 0x8e,&local_res10);
      lVar9 = *plVar8;
      uVar5 = FUN_1407c3030(plVar8 + 0x8e);
      (**(code **)(lVar9 + 0x310))(plVar8,uVar5);
      plVar8 = *(longlong **)(param_1 + 0x280);
    }
    FUN_1414cd980(plVar8,local_res20,local_res18);
    if ((((*(char *)(param_2 + 0x10) != '\0') &&
         (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x248), cVar6 != '\0')) &&
        (lVar9 = *(longlong *)(param_1 + 0x250), *(char *)(lVar9 + 0xf8) != '\0')) && (lVar9 != 0))
    {
      FUN_1411fa890(lVar9,1,DAT_146870fa0);
    }
    cVar6 = FWeakObjectPtr::IsValid();
    if ((cVar6 == '\0') || (lVar9 = *(longlong *)(param_1 + 0x250), *(char *)(lVar9 + 0xf8) == '\0')
       ) {
      lVar9 = 0;
    }
    local_res8[0] = FUN_142dcfc60(*(undefined8 *)(lVar9 + 0x40));
    FUN_1411f1980(local_40,*(undefined8 *)(param_1 + 0x280),1,local_res8,0);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e92330 FUN_140e92330 body=1068 status=ok
// SIG undefined FUN_140e92330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e92330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (lVar9 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      iVar4 = FUN_1428cf800(lVar5);
      if (iVar4 == 3) {
        FUN_141461110(lVar9,param_2);
      }
      else {
        local_c8 = (longlong *)(param_1 + 0x1d0);
        if (*local_c8 == 0) {
          lVar5 = *(longlong *)(param_1 + 0x120);
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(param_1);
          }
          lVar5 = FUN_14126dac0(lVar5);
          lVar9 = *(longlong *)(lVar9 + 0x990);
          cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x2d8);
          if (cVar3 != '\0') {
            uVar6 = FWeakObjectPtr::Get(param_1 + 0x2d8);
            lVar7 = UCableComponent::GetAttachedActor(uVar6);
            if ((((lVar7 != 0) && (param_2 != 0)) && (lVar5 != 0)) && (lVar9 != 0)) {
              uVar6 = FWeakObjectPtr::Get(param_1 + 0x2d8);
              uVar6 = UCableComponent::GetAttachedActor(uVar6);
              uVar6 = FUN_1407c7930(uVar6,&local_e8);
              lVar7 = FUN_140e67de0(uVar6,0);
              if (local_e8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (lVar7 != 0) {
                uVar6 = FWeakObjectPtr::Get(param_1 + 0x2d8);
                uVar6 = UCableComponent::GetAttachedActor(uVar6);
                FUN_1407c7930(uVar6,&local_e8);
                plVar8 = local_e8 + local_e0;
                for (plVar10 = local_e8; plVar10 != plVar8; plVar10 = plVar10 + 1) {
                  plVar1 = (longlong *)*plVar10;
                  if (plVar1 != (longlong *)0x0) {
                    lVar7 = FUN_14148cad0();
                    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                        lVar7 + 0x88)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      cVar3 = (**(code **)(*plVar1 + 0x780))(plVar1);
                      if (cVar3 != '\0') goto joined_r0x000140e92631;
                      FUN_141269380(lVar5,lVar9);
                      FUN_14123ece0(plVar1,3);
                    }
                  }
                }
                if (local_e8 != (longlong *)0x0) {
                  FMemory::Free(local_e8);
                }
              }
              lVar7 = FUN_140c41db0(lVar9);
              if (lVar7 != 0) {
                FUN_141269380(lVar5,lVar9);
                FUN_14123ece0(lVar7,3);
              }
              FWeakObjectPtr::operator=(&local_d0,param_2);
              FWeakObjectPtr::operator=(&local_d8,param_1);
              plVar8 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar8 != (longlong *)0x0) {
                *plVar8 = (longlong)&PTR_GetPoolName_1445cb610;
                *(undefined4 *)(plVar8 + 1) = local_d8;
                *(undefined4 *)((longlong)plVar8 + 0xc) = local_d4;
                *(undefined4 *)(plVar8 + 2) = local_d0;
                *(undefined4 *)((longlong)plVar8 + 0x14) = local_cc;
                lVar9 = FDelegateHandle::GenerateNewID();
                plVar8[4] = lVar9;
                *plVar8 = (longlong)&PTR_GetPoolName_1445cb658;
              }
              lVar9 = *(longlong *)(param_1 + 0x120);
              if (lVar9 == 0) {
                lVar9 = FUN_1423407b0(param_1);
              }
              if (*(longlong *)(lVar9 + 400) == 0) {
                uVar6 = *(undefined8 *)(lVar9 + 0x3f8);
              }
              else {
                uVar6 = *(undefined8 *)(*(longlong *)(lVar9 + 400) + 0x90);
              }
              local_b8 = 0;
              local_b0 = 0;
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
              }
              FWeakObjectPtr::operator=(local_a8,0);
              local_f0 = 0xbf800000;
              local_f8 = 0;
              local_a0 = 0;
              local_68 = (longlong *)0x0;
              local_58 = 0;
              local_98 = AK::MemoryMgr::StartProfileThreadUsage;
              FUN_142880850(uVar6,local_c8,&local_b8,0x40200000);
              if (local_58 != 0) {
                plVar10 = local_88;
                if (local_68 != (longlong *)0x0) {
                  plVar10 = local_68;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_68 != (longlong *)0x0) {
                FMemory::Free();
              }
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x28))(plVar8,0);
                local_e8 = (longlong *)FMemory::Realloc(plVar8,0,0);
joined_r0x000140e92631:
                if (local_e8 != (longlong *)0x0) {
                  FMemory::Free(local_e8);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e92760 FUN_140e92760 body=123 status=ok
// SIG undefined FUN_140e92760(void)

void FUN_140e92760(longlong param_1)

{
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_140e8e020();
    FUN_140b7c040(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1c8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x40));
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_1405a3150(*(longlong *)(param_1 + 400),local_28,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x98),0);
      FUN_140591060(local_28);
    }
    FUN_1414b70c0(param_1);
    *(undefined1 *)(param_1 + 0x1d0) = 1;
  }
  return;
}



// FUNCTION 140e927e0 FUN_140e927e0 body=2927 status=ok
// SIG undefined FUN_140e927e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e927e0(longlong param_1,undefined4 param_2,longlong param_3,ulonglong *param_4,
                  undefined1 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_328 [32];
  longlong *local_308;
  undefined4 local_300;
  char local_2f8;
  char local_2f7;
  char local_2f6;
  ulonglong local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  ulonglong local_298;
  uint uStack_290;
  uint uStack_28c;
  undefined8 local_278;
  int local_270;
  undefined4 local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  undefined1 local_248 [32];
  undefined4 local_228;
  undefined8 local_224;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_180 [24];
  longlong local_168;
  undefined1 local_158;
  longlong *local_148;
  int local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [2];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined1 local_a8;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  plVar13 = (longlong *)*param_4;
  plVar9 = plVar13 + (int)param_4[1];
  local_1a0 = param_1;
  local_260 = param_3;
  local_268 = param_2;
  local_1b0 = param_5;
  for (; plVar13 != plVar9; plVar13 = plVar13 + 1) {
    lVar5 = *plVar13;
    if (lVar5 != 0) {
      local_2c0 = 0;
      local_2b8 = 0;
      if (*(char *)(lVar5 + 0x38) == '\x01') {
        local_2f0 = 0;
        local_2c8 = 0;
        local_2d8 = *(undefined4 *)(lVar5 + 0x40);
        local_2d4 = *(undefined4 *)(lVar5 + 0x44);
        local_2d0 = *(undefined4 *)(lVar5 + 0x48);
        local_298 = *(ulonglong *)(lVar5 + 0x50);
        FString::FString(&uStack_290,lVar5 + 0x58);
        FSoftObjectPath::operator=(&local_2c8,&local_298);
        lVar5 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_250,&local_2d8);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_180,lVar5);
        local_158 = 0;
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          FMemory::Free();
        }
        iVar4 = FUN_140e682d0(param_1 + 0x188,local_180);
      }
      else {
        local_2e0 = 0;
        local_2c8 = 0;
        local_2d8 = *(undefined4 *)(lVar5 + 0x90);
        local_2d4 = *(undefined4 *)(lVar5 + 0x94);
        local_2d0 = *(undefined4 *)(lVar5 + 0x98);
        local_298 = *(ulonglong *)(lVar5 + 0xa0);
        FString::FString(&uStack_290,lVar5 + 0xa8);
        FSoftObjectPath::operator=(&local_2c8,&local_298);
        lVar5 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_250,&local_2d8);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_180,lVar5);
        local_158 = 0;
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          FMemory::Free();
        }
        iVar4 = FUN_140e68240(param_1 + 0x1a8,local_180);
      }
      if (local_168 != 0) {
        FMemory::Free();
      }
      if (local_2c0 != 0) {
        FMemory::Free();
      }
      if (iVar4 == -1) goto LAB_140e92b83;
    }
  }
  if (*(char *)(param_1 + 0x2b0) != '\0') goto LAB_140e92b83;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  lVar5 = FUN_14126dac0(lVar5);
  plVar9 = *(longlong **)(param_1 + 0x118);
  local_258 = lVar5;
  if (plVar9 == (longlong *)0x0) {
LAB_140e92a5c:
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar13 = plVar9;
    if (!bVar2) goto LAB_140e92a5c;
  }
  if ((plVar9 == (longlong *)0x0) || (lVar6 = (**(code **)(*plVar9 + 0x678))(plVar9), lVar6 == 0)) {
LAB_140e92ab1:
    lVar6 = 0;
    local_1c0 = 0;
  }
  else {
    local_1c0 = lVar6;
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e92ab1;
  }
  if (((((local_260 == 0) || (param_5 == (undefined1 *)0x0)) || (lVar5 == 0)) ||
      ((plVar9 == (longlong *)0x0 || (plVar13 == (longlong *)0x0)))) || (lVar6 == 0)) {
LAB_140e92b83:
    FUN_140e86fd0(param_1,param_5,0,0);
    return;
  }
  uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_5,uVar8);
  local_198 = plVar9;
  cVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
  lVar5 = local_260;
  if (cVar3 != *(char *)(local_260 + 0x30)) goto LAB_140e92b83;
  cVar3 = '\0';
  local_2f6 = '\0';
  lVar6 = FUN_140e7e6b0();
  if (lVar6 != 0) {
    cVar3 = *(char *)(lVar6 + 0x138);
    local_2f6 = cVar3;
  }
  local_308 = &local_2b0;
  local_2b0 = 0;
  local_300 = CONCAT31(local_300._1_3_,cVar3);
  (**(code **)(*plVar9 + 0x20))(plVar9,local_98,plVar13,*(undefined1 *)(lVar5 + 0x720));
  if (local_2b0 == 0) {
    (**(code **)(*plVar9 + 0x50))(plVar9,plVar13);
    goto LAB_140e92b83;
  }
  FQuat::Rotator(&local_298);
  uVar12 = 0;
  plVar9 = (longlong *)*param_4;
  local_2f7 = '\0';
  local_2f8 = '\0';
  local_278 = (longlong *)CONCAT44(uStack_84,local_88);
  local_270 = iStack_80;
  uVar14 = (longlong)(int)param_4[1] & 0x1fffffffffffffff;
  if (plVar9 + (int)param_4[1] < plVar9) {
    uVar14 = uVar12;
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_200 = 0xffffffff;
  local_1fc = 0;
  local_1f0 = 0;
  local_210 = 0;
  local_208 = 0;
  local_228 = 0xffffffff;
  local_224 = 0;
  local_218 = 0;
  local_298 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  local_2e0 = local_2e0 & 0xffffffff00000000;
  local_2e8 = 0;
  local_2f0 = uVar14;
  local_1c8 = plVar9;
  if (uVar14 != 0) {
    local_2a8 = 0;
    uVar15 = uVar12;
    uVar16 = uVar12;
    do {
      lVar5 = *plVar9;
      local_1c8 = plVar9;
      if (*(longlong *)(lVar5 + 0x50) == 0) {
        local_2e0 = 0;
        cVar3 = local_2f8;
        if (*(longlong *)(lVar5 + 0xa0) != 0) {
          local_2c0 = 0;
          local_1d8 = 0;
          local_2c8 = 0;
          local_2d8 = *(undefined4 *)(lVar5 + 0x90);
          local_2d4 = *(undefined4 *)(lVar5 + 0x94);
          local_2d0 = *(undefined4 *)(lVar5 + 0x98);
          local_250 = *(undefined8 *)(lVar5 + 0xa0);
          local_2b8 = 0;
          FString::FString(local_248,lVar5 + 0xa8);
          FSoftObjectPath::operator=(&local_2c8,&local_250);
          iVar4 = (int)uVar15;
          for (uVar14 = uVar12; uVar14 != uVar12 + (longlong)iVar4 * 0x28; uVar14 = uVar14 + 0x28) {
            cVar3 = FSoftObjectPath::operator==(uVar14 + 0x10,&local_2c8);
            if (cVar3 != '\0') {
              if ((int)((longlong)(uVar14 - uVar12) / 0x28) != -1) goto LAB_140e92ecc;
              break;
            }
          }
          lVar5 = (longlong)iVar4;
          uStack_290 = iVar4 + 1;
          if ((int)uVar16 < (int)uStack_290) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_298,uVar15);
            uVar16 = (ulonglong)uStack_28c;
            uVar12 = local_298;
          }
          uVar15 = (ulonglong)uStack_290;
          lVar6 = lVar5 * 5 + 2;
          local_1d0 = 0;
          *(undefined8 *)(uVar12 + 8 + lVar6 * 8) = 0;
          puVar11 = (undefined8 *)(uVar12 + lVar6 * 8);
          *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
          *(undefined4 *)(uVar12 + lVar5 * 0x28) = 0xffffffff;
          *(undefined4 *)(uVar12 + 4 + lVar5 * 0x28) = 0;
          *puVar11 = 0;
          *(undefined4 *)(puVar11 + 2) = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar11 + 0x14)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar11 + 1,0);
          }
          if ((undefined2 *)puVar11[1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar11[1] = 0;
          }
          *(undefined4 *)(uVar12 + 8 + lVar5 * 0x28) = 0;
          *(undefined4 *)(uVar12 + lVar5 * 0x28) = local_2d8;
          *(undefined4 *)(uVar12 + 4 + lVar5 * 0x28) = local_2d4;
          *(undefined4 *)(uVar12 + 8 + lVar5 * 0x28) = local_2d0;
          local_250 = local_2c8;
          FString::FString(local_248,&local_2c0);
          FSoftObjectPath::operator=(puVar11);
          plVar9 = local_1c8;
LAB_140e92ecc:
          uVar14 = local_2f0;
          cVar3 = local_2f8;
          if (local_2c0 != 0) {
            FMemory::Free();
            uVar14 = local_2f0;
            cVar3 = local_2f8;
          }
        }
      }
      else {
        local_200 = *(undefined4 *)(lVar5 + 0x40);
        local_1fc = *(undefined8 *)(lVar5 + 0x44);
        local_250 = *(undefined8 *)(lVar5 + 0x50);
        local_2f7 = '\x01';
        FString::FString(local_248,lVar5 + 0x58);
        FSoftObjectPath::operator=(&local_1f0);
        local_2a8 = 0;
        uVar14 = local_2f0;
        cVar3 = local_2f8;
        if (*(longlong *)(lVar5 + 0x78) != 0) {
          local_228 = *(undefined4 *)(lVar5 + 0x68);
          local_224 = *(undefined8 *)(lVar5 + 0x6c);
          local_250 = *(undefined8 *)(lVar5 + 0x78);
          local_2f8 = '\x01';
          FString::FString(local_248,lVar5 + 0x80);
          FSoftObjectPath::operator=(&local_218);
          uVar14 = local_2f0;
          cVar3 = '\x01';
        }
      }
      lVar5 = local_1a0;
      plVar9 = plVar9 + 1;
      local_2e8 = local_2e8 + 1;
    } while (local_2e8 != uVar14);
    param_1 = local_1a0;
    local_1c8 = plVar9;
    if ((local_2f7 != '\0') && (cVar3 != '\0')) {
      local_140 = local_270;
      local_134 = local_188;
      local_130 = CONCAT44(param_6,local_268);
      local_128 = (code *)CONCAT44(param_8,param_7);
      local_148 = local_278;
      local_108 = 0;
      local_2e8 = 0;
      local_110 = 0;
      local_120 = local_200;
      local_11c = (undefined4)local_1fc;
      local_118 = local_1fc._4_4_;
      local_250 = local_1f0;
      local_13c = local_190;
      local_100 = 0;
      FString::FString(local_248,&local_1e8);
      FSoftObjectPath::operator=(&local_110,&local_250);
      local_e0 = 0;
      local_e8 = 0;
      local_f8 = CONCAT44((undefined4)local_224,local_228);
      local_f0 = local_224._4_4_;
      local_250 = local_218;
      local_d8 = 0;
      local_2e8 = 0;
      FString::FString(local_248,&local_210);
      FSoftObjectPath::operator=(&local_e8,&local_250);
      local_d0[0] = 0;
      local_308 = (longlong *)((ulonglong)local_308 & 0xffffffff00000000);
      TArray<TSoftClassPtr<AItem>,FDefaultAllocator>::CopyToEmpty<TSoftClassPtr<AItem>_>
                (local_d0,uVar12,uVar15,0);
      FWeakObjectPtr::operator=(local_c0,local_2b0);
      plVar9 = local_198;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_b0 = local_198;
      uVar10 = (**(code **)(*local_198 + 8))(local_198);
      cVar3 = UObjectBaseUtility::IsA<UObject>(uVar10);
      uVar8 = 0;
      if (cVar3 != '\0') {
        uVar8 = uVar10;
      }
      FWeakObjectPtr::operator=(&local_b8,uVar8);
      local_a8 = *(undefined1 *)(local_260 + 0x720);
      FUN_140e6bde0(lVar5 + 0x1e8,&local_148);
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(local_d0);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      lVar6 = local_1c0;
      local_1b8 = 0;
      (**(code **)(*plVar9 + 0x30))(plVar9,local_1c0,local_2b0,&local_1b8);
      FUN_141269380(local_258,lVar6);
      lVar6 = FUN_140c41db0(lVar6);
      if (lVar6 != 0) {
        if ((local_2f6 == '\0') && (0 < *(int *)(lVar6 + 0xec8))) {
          FUN_1412403c0(lVar6,0);
        }
        else {
          FUN_14123ece0(lVar6,3);
          if (local_1b8 != 0) {
            local_258 = 0;
            fVar1 = *(float *)(local_1b8 + 0x988);
            lVar6 = *(longlong *)(lVar5 + 0x120);
            local_1b0 = &LAB_140e8ef00;
            uStack_1a8 = 0;
            if (lVar6 == 0) {
              lVar6 = FUN_1423407b0(lVar5);
            }
            if (*(longlong *)(lVar6 + 400) == 0) {
              uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
            }
            else {
              uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
            }
            local_278 = (longlong *)0x0;
            local_270 = 0;
            puVar11 = (undefined8 *)operator_new(0x30,&local_278);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(puVar11 + 1,lVar5);
              *(undefined4 *)(puVar11 + 2) = (undefined4)local_1b0;
              *(undefined4 *)((longlong)puVar11 + 0x14) = local_1b0._4_4_;
              *(undefined4 *)(puVar11 + 3) = uStack_1a8;
              *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_1a4;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar11[5] = uVar10;
              *puVar11 = &PTR_FUN_143f77bd0;
            }
            iVar4 = local_270;
            plVar9 = local_278;
            local_148 = (longlong *)0x0;
            local_140 = 0;
            if ((local_270 != 0) && (local_278 != (longlong *)0x0)) {
              (**(code **)(*local_278 + 0x30))(local_278,&local_148);
            }
            FWeakObjectPtr::operator=((longlong)&local_13c + 4,0);
            local_300 = 0xbf800000;
            local_130 = 0;
            local_f8 = 0;
            local_e8 = local_e8 & 0xffffffff00000000;
            local_128 = AK::MemoryMgr::StartProfileThreadUsage;
            local_308 = (longlong *)((ulonglong)local_308 & 0xffffffffffffff00);
            FUN_142880850(uVar8,&local_258,&local_148,fVar1 + 0.3);
            TFunction<void___cdecl(void)>::~TFunction<void___cdecl(void)>(&local_128);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_148);
            if (iVar4 != 0) {
              if (plVar9 == (longlong *)0x0) goto LAB_140e93321;
              (**(code **)(*plVar9 + 0x28))(plVar9,0);
              plVar9 = (longlong *)FMemory::Realloc(plVar9,0,0);
            }
            if (plVar9 != (longlong *)0x0) {
              FMemory::Free(plVar9);
            }
            goto LAB_140e93321;
          }
        }
      }
      FUN_140e8eb50(lVar5,0);
      goto LAB_140e93321;
    }
  }
  FUN_140e86fd0(param_1,local_1b0,local_2b0,0);
LAB_140e93321:
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(&local_298);
  if (local_210 != 0) {
    FMemory::Free();
  }
  if (local_1e8 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140e93350 FUN_140e93350 body=335 status=ok
// SIG undefined FUN_140e93350(void)

void FUN_140e93350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140e81ce0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140e9344f;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140e87aa0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x68))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x40) = *puVar6;
  if (local_30 == 0) {
LAB_140e93431:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140e93431;
  }
  (**(code **)(*local_28 + 0x60))(local_28,param_1 + 0x18,param_1 + 0x30);
LAB_140e9344f:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140e934a0 FUN_140e934a0 body=337 status=ok
// SIG undefined FUN_140e934a0(void)

void FUN_140e934a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140e81ce0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140e935a1;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140e88a10;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x90))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x40) = *puVar6;
  if (local_30 == 0) {
LAB_140e93584:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140e93584;
  }
  (**(code **)(*local_28 + 0x88))(local_28,param_1 + 0x18);
LAB_140e935a1:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140e93600 FUN_140e93600 body=278 status=ok
// SIG undefined FUN_140e93600(void)

void FUN_140e93600(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_78 [32];
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_28 = (longlong *)0x0;
  local_18 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_1444f8620;
  }
  local_58[0] = &LAB_140e740d0;
  plVar8 = (longlong *)FUN_140596960(local_78,0,0xff);
  lVar3 = *plVar8;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_58);
  *(undefined4 *)(lVar3 + 0x60) = 0x10ff;
  lVar3 = *plVar8;
  lVar6 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
  if (local_18 != 0) {
    plVar8 = local_48;
    if (local_28 != (longlong *)0x0) {
      plVar8 = local_28;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 140e93720 FUN_140e93720 body=341 status=ok
// SIG undefined FUN_140e93720(void)

void FUN_140e93720(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140e81ce0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140e93825;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140e87d40;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0xb8))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x50) = *puVar6;
  if (local_30 == 0) {
LAB_140e93804:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140e93804;
  }
  (**(code **)(*local_28 + 0xb0))(local_28,param_1 + 0x18,param_1 + 0x30);
LAB_140e93825:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140e93880 FUN_140e93880 body=339 status=ok
// SIG undefined FUN_140e93880(void)

void FUN_140e93880(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140e81ce0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140e93983;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140e8a460;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x40))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x50) = *puVar6;
  if (local_30 == 0) {
LAB_140e93961:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140e93961;
  }
  (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x18,param_1 + 0x30,param_1 + 0x40);
LAB_140e93983:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140e939e0 FUN_140e939e0 body=61 status=ok
// SIG undefined FUN_140e939e0(void)

undefined8 FUN_140e939e0(longlong *param_1,byte param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1[2] != 0) && ((int)(uint)param_2 < (int)param_1[1])) {
    lVar1 = *param_1;
    lVar3 = (ulonglong)param_2 * 0xf8;
    if ((*(byte *)(lVar1 + 0x38 + lVar3) & 1) != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10 + lVar3);
      *(undefined8 *)(lVar1 + 0x10 + lVar3) = param_3;
      *(undefined4 *)(lVar3 + 0xd8 + *param_1) = param_4;
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140e93a20 FUN_140e93a20 body=79 status=ok
// SIG undefined FUN_140e93a20(void)

void FUN_140e93a20(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x4c8);
    uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x4e8));
    (**(code **)(lVar1 + 0x20))((longlong *)(param_1 + 0x4c8),uVar2,param_3);
  }
  return;
}



// FUNCTION 140e93a70 FUN_140e93a70 body=85 status=ok
// SIG undefined FUN_140e93a70(void)

void FUN_140e93a70(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + -0x4c8) + 0x848))();
    if (cVar1 != '\0') {
      FUN_1412805c0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140e93ad0 FUN_140e93ad0 body=60 status=ok
// SIG undefined FUN_140e93ad0(void)

void FUN_140e93ad0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    cVar1 = FUN_142cf39b0(*(undefined8 *)(param_1 + 0x4d8),0);
    if (cVar1 != '\0') {
      FUN_141280660(*(undefined8 *)(param_1 + 0x4e8));
      return;
    }
  }
  return;
}



// FUNCTION 140e93b10 FUN_140e93b10 body=112 status=ok
// SIG undefined FUN_140e93b10(void)

void FUN_140e93b10(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1414c1900();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      local_18 = *param_2;
      local_10 = 0;
      if (local_18 != 0) {
        local_10 = param_2[1];
      }
      FUN_1409c82d0(lVar2 + 0x2c0,&local_18);
    }
  }
  return;
}



// FUNCTION 140e93b80 FUN_140e93b80 body=112 status=ok
// SIG undefined FUN_140e93b80(void)

void FUN_140e93b80(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1414c1900();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      local_18 = *param_2;
      local_10 = 0;
      if (local_18 != 0) {
        local_10 = param_2[1];
      }
      FUN_1409e3610(lVar2 + 0x2c0,&local_18);
    }
  }
  return;
}



// FUNCTION 140e93c00 FUN_140e93c00 body=52 status=ok
// SIG undefined FUN_140e93c00(void)

void FUN_140e93c00(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    uVar1 = FUN_141270f70();
    FUN_141280ef0(*(undefined8 *)(param_1 + 0x4e8),uVar1);
    return;
  }
  return;
}



// FUNCTION 140e93c40 FUN_140e93c40 body=79 status=ok
// SIG undefined FUN_140e93c40(void)

void FUN_140e93c40(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x4c8);
    uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x4e8));
    (**(code **)(lVar1 + 0x28))((longlong *)(param_1 + 0x4c8),uVar2,param_3);
  }
  return;
}



// FUNCTION 140e93ca0 FUN_140e93ca0 body=17 status=ok
// SIG undefined FUN_140e93ca0(void)

void FUN_140e93ca0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStackX_8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x7f0) = 0;
  plVar3 = (longlong *)FUN_140e83500(lVar1 + 0x228,0);
  if (plVar3 != (longlong *)0x0) {
    if ((param_2 == '\0') && (cVar2 = FUN_141271060(lVar1), cVar2 != '\0')) {
      return;
    }
    (**(code **)(*plVar3 + 0x8c0))(plVar3,0,1);
    auStackX_8[0] = 2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x1b8,auStackX_8);
  }
  return;
}



// FUNCTION 140e93cc0 FUN_140e93cc0 body=14 status=ok
// SIG undefined FUN_140e93cc0(void)

void FUN_140e93cc0(longlong param_1)

{
  FUN_140c29280(*(undefined8 *)(param_1 + 0x468),1);
  return;
}



// FUNCTION 140e93cd0 FUN_140e93cd0 body=252 status=ok
// SIG undefined FUN_140e93cd0(void)

void FUN_140e93cd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  if (param_1[0x8c] != 0) {
    *(undefined8 *)(param_1[0x8c] + 0x460) = 0;
    *(undefined8 *)(param_1[0x8c] + 0x468) = 0;
    *(undefined8 *)(param_1[0x8c] + 0x470) = 0;
    plVar1 = (longlong *)param_1[0x8c];
    if ((char)plVar1[0x8f] != '\x03') {
      (**(code **)(*plVar1 + 0x600))(plVar1);
      *(undefined1 *)(plVar1 + 0x8f) = 3;
    }
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  if ((char)param_1[0x8f] != '\x03') {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)(param_1 + 0x8f) = 3;
  }
  lVar2 = param_1[0x23];
  if (lVar2 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined8 *)(lVar2 + 0x1470) = 0;
    }
  }
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 140e93dd0 FUN_140e93dd0 body=278 status=ok
// SIG undefined FUN_140e93dd0(void)

void FUN_140e93dd0(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(char *)(param_1 + 0x490) != '\0') && (*(longlong *)(param_1 + 0x468) != 0)) {
    lVar4 = FUN_1422312c0();
    cVar3 = '\0';
    if (lVar4 != 0) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar6 = *(undefined4 **)(lVar4 + 0xd60);
        puVar1 = puVar6 + (longlong)*(int *)(lVar4 + 0xd68) * 2;
        for (; cVar3 = '\0', puVar6 != puVar1; puVar6 = puVar6 + 2) {
          local_res8 = *puVar6;
          local_resc = puVar6[1];
          cVar3 = FWeakObjectPtr::IsValid(&local_res8);
          if ((cVar3 != '\0') &&
             (lVar4 = FWeakObjectPtr::Get(&local_res8), *(char *)(lVar4 + 0x4a4) != '\0')) {
            cVar3 = '\x01';
            break;
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x10b9) != cVar3) {
      thunk_FUN_141400bb0(*(undefined8 *)(param_1 + 0x460));
    }
    FUN_1422406d0(param_1,param_2);
  }
  return;
}



// FUNCTION 140e93ef0 FUN_140e93ef0 body=157 status=ok
// SIG undefined FUN_140e93ef0(void)

void FUN_140e93ef0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_142357eb0();
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x78);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x78);
    cVar1 = FOpenXRHMD::IsStereoEnabled(uVar2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_140e93f38;
    }
  }
  uVar2 = 0;
LAB_140e93f38:
  FUN_1409e53d0(param_1 + 0x58,uVar2);
  thunk_FUN_1409eeeb0(param_1 + 0x58,param_2);
  cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x428))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  return;
}



// FUNCTION 140e93f90 FUN_140e93f90 body=798 status=ok
// SIG undefined FUN_140e93f90(void)

void FUN_140e93f90(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined **local_1a8;
  longlong *local_1a0;
  byte local_17f;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  undefined **local_c8 [19];
  undefined1 local_30;
  
  local_1c0 = 0;
  FArchive::FArchive(&local_1a8);
  local_118 = 0;
  local_1a8 = &PTR_FUN_143f4a100;
  local_108 = 0;
  local_110 = param_2;
  FArchive::SetIsSaving(&local_1a8,1);
  FArchive::SetIsPersistent(&local_1a8,1);
  local_res8[0] = 0x53415647;
  if ((undefined4 *)local_1a0[1] < (undefined4 *)*local_1a0 + 1) {
    (*(code *)local_1a8[10])(&local_1a8,local_res8,4);
    if ((local_17f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1a8,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*local_1a0;
    *local_1a0 = *local_1a0 + 4;
  }
  local_res10[0] = 2;
  if ((undefined4 *)local_1a0[1] < (undefined4 *)*local_1a0 + 1) {
    (*(code *)local_1a8[10])(&local_1a8,local_res10,4);
    if ((local_17f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1a8,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(undefined4 *)*local_1a0;
    *local_1a0 = *local_1a0 + 4;
  }
  local_res20[0] = 0x204;
  if ((undefined4 *)local_1a0[1] < (undefined4 *)*local_1a0 + 1) {
    (*(code *)local_1a8[10])(&local_1a8,local_res20,4);
    if ((local_17f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1a8,local_res20,4);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)*local_1a0;
    *local_1a0 = *local_1a0 + 4;
  }
  puVar1 = (undefined8 *)FEngineVersion::Current();
  local_e8 = *puVar1;
  local_e0 = *(undefined4 *)(puVar1 + 1);
  FString::FString(local_d8,puVar1 + 2);
  operator<<(&local_1a8,&local_e8);
  local_1c8[0] = 3;
  if ((undefined4 *)local_1a0[1] < (undefined4 *)*local_1a0 + 1) {
    (*(code *)local_1a8[10])(&local_1a8,local_1c8,4);
    if ((local_17f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1a8,local_1c8,4);
    }
  }
  else {
    local_1c8[0] = *(undefined4 *)*local_1a0;
    *local_1a0 = *local_1a0 + 4;
  }
  puVar1 = (undefined8 *)FCustomVersionContainer::GetRegistered();
  local_1b8 = (void *)0x0;
  local_1b0 = *(int *)(puVar1 + 1);
  lVar2 = (longlong)local_1b0;
  _Src = (void *)*puVar1;
  if (local_1b0 == 0) {
    local_1ac = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1b0,0);
    _guard_xfg_dispatch_icall_nop(local_1b8,_Src,lVar2 << 5);
  }
  FUN_141695050(&local_1a8,&local_1b8);
  FCustomVersionContainer::Serialize(&local_1b8,&local_1a8,3);
  local_1c0 = *(undefined8 *)(param_1[2] + 0x18);
  FName::ToString(&local_1c0,local_f8);
  FUN_14158ce90(&local_1a8,local_f8);
  FArchiveProxy::FArchiveProxy(local_c8,&local_1a8);
  local_30 = 0;
  local_c8[0] = &PTR_FUN_143f4a5b0;
  (**(code **)(*param_1 + 0xa8))(param_1,local_c8);
  FArchive::~FArchive(local_c8);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_1a8);
  return;
}



// FUNCTION 140e942b0 FUN_140e942b0 body=66 status=ok
// SIG undefined FUN_140e942b0(void)

undefined8 FUN_140e942b0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  }
}



// FUNCTION 140e94310 FUN_140e94310 body=136 status=ok
// SIG undefined FUN_140e94310(void)

void FUN_140e94310(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x638))(plVar1,param_2);
    FUN_142397540(*(undefined8 *)(param_1 + 0x188),param_2 ^ 1,1);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xa0);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x98);
    }
    FUN_1405a3150(*(longlong *)(param_1 + 400),local_28,uVar2,0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140e943a0 FUN_140e943a0 body=69 status=ok
// SIG undefined FUN_140e943a0(void)

void FUN_140e943a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_142235230();
  if (((iVar2 != 3) && (*(char *)(param_1 + 0x10b8) != '\0')) &&
     (cVar1 = *(char *)(param_1 + 0x10f2), (bool)cVar1 != (cVar1 == '\0'))) {
    *(bool *)(param_1 + 0x10f2) = cVar1 == '\0';
    FUN_140e6ff10(param_1);
    return;
  }
  return;
}



// FUNCTION 140e943f0 FUN_140e943f0 body=515 status=ok
// SIG undefined FUN_140e943f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e943f0(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98 [2];
  undefined1 local_90 [64];
  longlong local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x118);
  lVar6 = 0;
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e94465;
  }
  lVar3 = lVar6;
LAB_140e94465:
  lVar3 = FUN_140e7fe60(param_1,lVar3);
  lVar2 = FUN_140e7fe60(param_1,*(undefined8 *)(param_1 + 0x468));
  if ((lVar3 != 0) && (lVar2 != 0)) {
    local_50[0] = *(longlong *)(param_1 + 0x4a8);
    plVar5 = local_50;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    local_50[1] = *(undefined8 *)(param_1 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    local_50[2] = *(undefined8 *)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    lVar7 = 4;
    local_50[3] = *(undefined8 *)(param_1 + 0x4c0);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    do {
      if (*plVar5 != 0) {
        lVar4 = FUN_142ffbee0(lVar3,local_90);
        local_a8 = 1;
        local_98[0] = *(undefined4 *)(lVar4 + 0xc);
        FUN_14301bc70(lVar3,local_98,*(undefined8 *)(lVar2 + 0x118),1);
      }
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (param_2 == '\0') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar7 = lVar6;
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
      }
      FUN_142fe44f0(lVar3,lVar7,-*(int *)(param_1 + 0x4a0));
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    FUN_142fe44f0(lVar2,lVar6,*(undefined4 *)(param_1 + 0x4a0));
  }
  return;
}



// FUNCTION 140e94600 FUN_140e94600 body=733 status=ok
// SIG undefined FUN_140e94600(void)

void FUN_140e94600(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_140e810c0(param_1,&local_58,local_48,local_50);
  if (local_58 == 0) {
    return;
  }
  plVar9 = *(longlong **)(param_1 + 600);
  plVar3 = plVar9 + (longlong)*(int *)(param_1 + 0x260) * 5;
  do {
    if (plVar9 == plVar3) {
      return;
    }
    lVar8 = *plVar9;
    lVar4 = lVar8 + (longlong)(int)plVar9[1] * 0x28;
    for (; lVar8 != lVar4; lVar8 = lVar8 + 0x28) {
      lVar6 = FWeakObjectPtr::Get();
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar8 + 8)) && (*(longlong *)(lVar8 + 0x10) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar8,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar8 + 8) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar8);
          if (lVar6 != 0) goto LAB_140e94714;
        }
LAB_140e9474a:
        lVar6 = 0;
      }
      else {
LAB_140e94714:
        lVar7 = UUGJournalKey::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_140e9474a;
      }
      if (lVar6 == local_58) {
        if (plVar9[3] == 0) goto LAB_140e9479e;
        lVar8 = FUN_1414ca2f0();
        lVar4 = plVar9[3];
        goto joined_r0x000140e9478a;
      }
    }
    plVar9 = plVar9 + 5;
  } while( true );
joined_r0x000140e9478a:
  if (lVar4 == 0) goto LAB_140e9479e;
  if (lVar4 == lVar8) {
    if (plVar9[3] != 0) {
      if (plVar9[4] == 0) goto LAB_140e94812;
      lVar6 = FUN_142e20fc0();
      lVar4 = plVar9[4];
      lVar8 = lVar4;
      if (lVar4 != 0) goto LAB_140e947f7;
      goto LAB_140e94812;
    }
    goto LAB_140e9479e;
  }
  lVar4 = *(longlong *)(lVar4 + 0x30);
  goto joined_r0x000140e9478a;
code_r0x000140e94805:
  bVar10 = param_2 == '\0';
  goto LAB_140e948a3;
LAB_140e94812:
  bVar10 = param_2 == '\0';
  goto LAB_140e948a3;
LAB_140e947f7:
  if (lVar8 != lVar6) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) goto code_r0x000140e94805;
    goto LAB_140e947f7;
  }
  if (lVar4 == 0) goto LAB_140e94812;
LAB_140e9479e:
  if (param_3 == '\0') {
    return;
  }
  if (plVar9[4] != 0) {
    lVar6 = FUN_142e20fc0();
    lVar4 = plVar9[4];
    for (lVar8 = lVar4; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) {
        if ((lVar4 != 0) &&
           (FUN_140e8b4b0(param_1,local_40,lVar4,0), plVar3 = local_38, local_38 != (longlong *)0x0)
           ) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        break;
      }
    }
  }
  if (plVar9[3] == 0) {
    return;
  }
  lVar8 = FUN_1414ca2f0();
  lVar4 = plVar9[3];
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (lVar4 == lVar8) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  bVar10 = plVar9[3] == 0;
LAB_140e948a3:
  if (!bVar10) {
    FUN_140e92130(param_1,plVar9);
  }
  return;
}



// FUNCTION 140e948e0 FUN_140e948e0 body=217 status=ok
// SIG undefined FUN_140e948e0(void)

undefined8 FUN_140e948e0(longlong param_1,longlong param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0xb0);
  piVar3 = piVar4 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
  while( true ) {
    if (piVar4 == piVar3) {
      return 0;
    }
    if (*(longlong *)(piVar4 + 8) == param_2) break;
    piVar4 = piVar4 + 0x10;
  }
  uVar1 = *(undefined8 *)(piVar4 + 4);
  *(undefined8 *)(piVar4 + 4) = param_4;
  if (*piVar4 == -1) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *piVar4 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x50) = iVar2;
  }
  piVar4[1] = piVar4[1] + 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  if (*(int *)(param_1 + 0x54) == -1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  if (param_3 == '\0') {
    return uVar1;
  }
  FUN_140e96080(param_1,uVar1,param_4,*(undefined8 *)(piVar4 + 8));
  return uVar1;
}



// FUNCTION 140e949c0 FUN_140e949c0 body=212 status=ok
// SIG undefined FUN_140e949c0(void)

undefined8 FUN_140e949c0(longlong param_1,longlong param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    piVar3 = *(int **)(param_1 + 0xb0);
    piVar2 = piVar3 + (longlong)*(int *)(param_1 + 0xb8) * 0x10;
    for (; piVar3 != piVar2; piVar3 = piVar3 + 0x10) {
      if (*(longlong *)(piVar3 + 4) == param_2) {
        *(undefined8 *)(piVar3 + 4) = param_4;
        if (*piVar3 == -1) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          *piVar3 = *(int *)(param_1 + 0x50);
          iVar1 = *(int *)(param_1 + 0x50);
          if (iVar1 == -1) {
            iVar1 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar1;
        }
        piVar3[1] = piVar3[1] + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        if (*(int *)(param_1 + 0x54) == -1) {
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
        if (param_3 != '\0') {
          FUN_140e96080(param_1,param_2,param_4,*(undefined8 *)(piVar3 + 8));
        }
        return *(undefined8 *)(piVar3 + 8);
      }
    }
  }
  return 0;
}



// FUNCTION 140e94aa0 FUN_140e94aa0 body=145 status=ok
// SIG undefined FUN_140e94aa0(void)

void FUN_140e94aa0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar2 = FUN_1407c3030(param_1 + 0xa3);
  FUN_142dbb5d0(param_1 + 0xa3,&local_res10);
  if ((cVar2 != '\0') && (cVar2 = FUN_1407c3030(param_1 + 0xa3), cVar2 == '\0')) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0xf8 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0xf8) {
      plVar1 = *(longlong **)(lVar3 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x9a8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 140e94b50 FUN_140e94b50 body=147 status=ok
// SIG undefined FUN_140e94b50(void)

void FUN_140e94b50(longlong *param_1,byte param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  if (((param_1[2] != 0) && (*(char *)(param_1[2] + 0x128) == '\x03')) &&
     ((int)(uint)param_2 < (int)param_1[1])) {
    lVar3 = (ulonglong)param_2 * 0xf8;
    local_res18[0] = param_3;
    FUN_142dbb5d0(*param_1 + 0x40 + lVar3,local_res18);
    if (((*(longlong *)(lVar3 + 8 + *param_1) != 0) &&
        (cVar2 = FUN_1407c3030(*param_1 + 0x40 + lVar3), cVar2 == '\0')) &&
       (cVar2 = FUN_1407c3030(param_1 + 0x57), cVar2 == '\0')) {
      plVar1 = *(longlong **)(lVar3 + 8 + *param_1);
      (**(code **)(*plVar1 + 0x310))(plVar1,0);
    }
  }
  return;
}



// FUNCTION 140e94c00 FUN_140e94c00 body=141 status=ok
// SIG undefined FUN_140e94c00(void)

void FUN_140e94c00(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x7d);
  FUN_142dbb5d0(param_1 + 0x7d,&local_res10);
  if ((cVar1 != '\0') && (cVar1 = FUN_1407c3030(param_1 + 0x7d), cVar1 == '\0')) {
    lVar2 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0xf8 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xf8) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_14308b750(*(longlong *)(lVar2 + 8),1);
      }
    }
  }
  return;
}



// FUNCTION 140e94ca0 FUN_140e94ca0 body=332 status=ok
// SIG undefined FUN_140e94ca0(void)

void FUN_140e94ca0(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  if (param_3 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x6a);
    FUN_142dbb5d0(param_1 + 0x6a,&local_res10);
    if ((cVar1 != '\0') && (cVar1 = FUN_1407c3030(param_1 + 0x6a), cVar1 == '\0')) {
      lVar2 = *param_1;
      lVar3 = (longlong)(int)param_1[1] * 0xf8 + lVar2;
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0xf8) {
        if (*(longlong *)(lVar2 + 8) != 0) {
          FUN_14308b9e0(*(longlong *)(lVar2 + 8),0);
        }
      }
    }
  }
  else if ((param_1[2] != 0) && (*(char *)(param_1[2] + 0x128) == '\x03')) {
    cVar1 = FUN_1407c3030(param_1 + 0x57);
    FUN_142dbb5d0(param_1 + 0x57,&local_res10);
    if ((cVar1 != '\0') && (cVar1 = FUN_1407c3030(param_1 + 0x57), cVar1 == '\0')) {
      lVar2 = *param_1;
      lVar3 = (longlong)(int)param_1[1] * 0xf8 + lVar2;
      if (lVar2 != lVar3) {
        do {
          if ((*(longlong *)(lVar2 + 8) != 0) &&
             (cVar1 = FUN_1407c3030(lVar2 + 0x40), cVar1 == '\0')) {
            (**(code **)(**(longlong **)(lVar2 + 8) + 0x310))(*(longlong **)(lVar2 + 8),0);
          }
          lVar2 = lVar2 + 0xf8;
        } while (lVar2 != lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e94e00 FUN_140e94e00 body=65 status=ok
// SIG undefined FUN_140e94e00(void)

void FUN_140e94e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_38);
  FUN_140e94e50(param_1,uVar1,0);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e94e50 FUN_140e94e50 body=473 status=ok
// SIG undefined FUN_140e94e50(void)

void FUN_140e94e50(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 local_res20;
  undefined4 local_68;
  undefined1 local_64 [4];
  longlong local_60;
  longlong local_58;
  int local_50;
  longlong *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar4 != 0) && (local_res20 = 0, *(longlong *)(param_2 + 0x10) != 0)) {
    iVar3 = FUN_1428cf800(lVar4);
    if (iVar3 != 3) {
      UWorld::GetPlayerControllerIterator(lVar4,&local_58);
LAB_140e94ec0:
      do {
        if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar4 = FWeakObjectPtr::Get();
        if (lVar4 != 0) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar5 = *(longlong *)(lVar4 + 0xc70);
            local_60 = lVar4;
            if (lVar5 != 0) {
              local_38 = *(undefined8 *)(param_2 + 0x10);
              FString::FString(local_30,param_2 + 0x18);
              cVar2 = FUN_140e75ed0(lVar5,&local_38);
              if ((cVar2 != '\0') && (param_3 != (longlong *)0x0)) {
                TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                ::FindId(param_3,&local_res20,local_60);
                if (((int)local_res20 == -1) ||
                   ((lVar4 = *param_3 + (longlong)(int)local_res20 * 0x18, lVar4 == 0 ||
                    (piVar6 = (int *)(lVar4 + 8), piVar6 == (int *)0x0)))) {
                  local_48 = &local_60;
                  local_68 = 1;
                  local_40 = &local_68;
                  TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
                            (param_3,local_64,&local_48,0);
                }
                else {
                  *piVar6 = *piVar6 + 1;
                }
              }
            }
            local_38 = *(undefined8 *)(param_2 + 0x10);
            FString::FString(local_30,param_2 + 0x18);
            FUN_14145ea80(local_60,&local_38);
            local_50 = local_50 + 1;
            goto LAB_140e94ec0;
          }
        }
        local_50 = local_50 + 1;
        local_60 = 0;
      } while( true );
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e95030 FUN_140e95030 body=101 status=ok
// SIG undefined FUN_140e95030(void)

void FUN_140e95030(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x328);
  FUN_142dbb5d0(param_1 + 0x328,&local_res10);
  if (cVar1 != '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x328);
    if (cVar1 == '\0') {
      FUN_1414c4020(param_1,0);
    }
  }
  return;
}



// FUNCTION 140e950a0 FUN_140e950a0 body=717 status=ok
// SIG undefined FUN_140e950a0(void)

void FUN_140e950a0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  ulonglong *puVar10;
  bool bVar11;
  ulonglong local_50 [3];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30 [3];
  
  local_50[0] = local_50[0] & 0xffffffff00000000;
  cVar2 = FUN_140e74aa0(param_1,param_3,param_4,param_5,0);
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x110) != 0)) &&
     (puVar4 = (undefined4 *)FUN_140e82830(param_1,param_2), puVar4 != (undefined4 *)0x0)) {
    local_50[0] = CONCAT44(local_50[0]._4_4_,param_3);
    lVar5 = FUN_140e51670(*puVar4,param_3,param_4);
    if (lVar5 != 0) {
      piVar9 = *(int **)(puVar4 + 10);
      iVar8 = puVar4[0xc];
      lVar5 = (longlong)iVar8 * 8;
      piVar1 = piVar9 + (longlong)iVar8 * 2;
      for (; piVar9 != piVar1; piVar9 = piVar9 + 2) {
        if ((*piVar9 == (int)local_50[0]) && (piVar9[1] == param_4)) {
          return;
        }
      }
      piVar9 = *(int **)(puVar4 + 0xe);
      piVar1 = piVar9 + (longlong)(int)puVar4[0x10] * 2;
      for (; piVar9 != piVar1; piVar9 = piVar9 + 2) {
        if ((*piVar9 == (int)local_50[0]) && (piVar9[1] == param_4)) {
          return;
        }
      }
      puVar4[0xc] = iVar8 + 1;
      if ((int)puVar4[0xd] < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar4 + 10);
      }
      lVar6 = *(longlong *)(puVar4 + 10);
      *(int *)(lVar5 + lVar6) = (int)local_50[0];
      *(int *)(lVar5 + 4 + lVar6) = param_4;
      if ((param_5 != '\0') && (lVar5 = FUN_140e822f0(param_1,param_2), lVar5 != 0)) {
        iVar3 = FUN_140e51730(lVar5,param_3,param_4);
        FUN_140aa27c0(*(longlong *)(param_1 + 0x110) + 0x1a68,*(undefined8 *)(lVar5 + 0x68),-iVar3);
        iVar8 = -1;
        if (puVar4[7] + iVar3 != -1) {
          iVar8 = puVar4[7] + iVar3;
        }
        puVar4[7] = iVar8;
        lVar5 = FUN_140e51670(param_2,param_3,param_4);
        if (lVar5 != 0) {
          lVar6 = FUN_140e50a20(lVar5);
          bVar11 = lVar6 == 0;
          if (bVar11) {
            local_50[2] = 0;
            puVar10 = local_50;
            local_50[1] = 0;
          }
          else {
            local_50[0] = *(ulonglong *)(lVar6 + 0x18);
            FName::ToString(local_50);
            puVar10 = local_30;
            local_50[2] = local_30[0];
          }
          *puVar10 = 0;
          local_38 = (int)puVar10[1];
          local_34 = *(undefined4 *)((longlong)puVar10 + 0xc);
          puVar10[1] = 0;
          if ((bVar11) && (local_50[0] != 0)) {
            FMemory::Free();
          }
          if ((!bVar11) && (local_30[0] != 0)) {
            FMemory::Free();
          }
          uVar7 = FTextInspector::GetSourceString(lVar5);
          FUN_140e797e0(param_1,param_2,uVar7,local_50 + 2,iVar3,param_3,param_4,0);
          if (local_50[2] != 0) {
            FMemory::Free();
          }
        }
      }
      FUN_140e724b0(param_1 + 0x48,param_2,param_3,param_4);
      Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
                (*(undefined8 *)(param_1 + 0x110));
    }
  }
  return;
}



// FUNCTION 140e95370 FUN_140e95370 body=1247 status=ok
// SIG undefined FUN_140e95370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e95370(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  int local_140;
  longlong *local_138;
  int local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined1 local_b8 [48];
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (param_1[0x19c] == 0) {
    return;
  }
  lVar3 = FUN_141225e40(param_1,local_b8);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar4,1);
  uVar10 = 0;
  if (((lVar5 != 0) && (local_158 = 0, *(longlong *)(lVar3 + 0x10) != 0)) &&
     (iVar2 = FUN_1428cf800(lVar5), iVar2 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar5,&local_148);
    while( true ) {
      if ((local_140 < 0) || (*(int *)(local_148 + 8) <= local_140)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar5 = FWeakObjectPtr::Get();
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar6 = *(longlong *)(lVar5 + 0xc70);
          if (lVar6 != 0) {
            local_100 = *(undefined8 *)(lVar3 + 0x10);
            FString::FString(local_f8,lVar3 + 0x18);
            FUN_140e76e50(lVar6,&local_100);
          }
          local_e8 = *(undefined8 *)(lVar3 + 0x10);
          FString::FString(local_e0,lVar3 + 0x18);
          FUN_14145eb70(lVar5,&local_e8);
        }
      }
      local_140 = local_140 + 1;
    }
  }
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar9 = (longlong *)param_1[0xa8];
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  uVar7 = (longlong)(int)param_1[0xa9] & 0x1fffffffffffffff;
  if (plVar9 + (int)param_1[0xa9] < plVar9) {
    uVar7 = uVar10;
  }
  local_48 = 0;
  local_40 = 0;
  if (uVar7 != 0) {
    local_158 = 0;
    uVar11 = uVar10;
    do {
      lVar3 = *plVar9;
      local_110 = 0;
      local_108 = 0;
      local_128 = 0xffffffff;
      local_124 = 0;
      local_118 = 0;
      if (lVar3 == 0) {
        local_150 = 0;
        local_118 = 0;
      }
      else {
        uVar4 = FSoftObjectPath::FSoftObjectPath(local_d0,lVar3);
        FSoftObjectPath::operator=(&local_118,uVar4);
        FWeakObjectPtr::operator=(&local_128,lVar3);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_124 = CONCAT44(DAT_1464b56f4,(undefined4)local_124);
      }
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_140e94e50(uVar4,&local_128,local_88);
      plVar9 = plVar9 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  FUN_140a2d520(param_1,local_88);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 != 0) {
    lVar5 = lVar3 + 0xd60;
    uVar7 = FWeakObjectPtr::Get(lVar5);
    if (uVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar3 + 0xd68)) &&
         (local_150 = 0, *(longlong *)(lVar3 + 0xd70) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar3 + 0xd68) = DAT_1464b56f4;
        }
        uVar7 = FWeakObjectPtr::Get(lVar5);
        if (uVar7 != 0) goto LAB_140e956b1;
      }
    }
    else {
LAB_140e956b1:
      lVar3 = FUN_142e1f230();
      if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140e956ea;
    }
  }
  uVar7 = uVar10;
LAB_140e956ea:
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((uVar7 != 0) && (lVar3 != 0)) &&
      (lVar5 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar3), lVar5 != 0)) &&
     (lVar5 = FUN_142d84360(lVar5), lVar5 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_138);
    while( true ) {
      if ((local_130 < 0) || ((int)local_138[1] <= local_130)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar3 = FWeakObjectPtr::Get(*local_138 + (longlong)local_130 * 8);
      if (lVar3 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(local_88,&local_158,lVar3);
          uVar11 = uVar10;
          if ((((int)local_158 != -1) &&
              (lVar6 = local_88[0] + (longlong)(int)local_158 * 0x18, lVar6 != 0)) &&
             (puVar8 = (uint *)(lVar6 + 8), puVar8 != (uint *)0x0)) {
            uVar11 = (ulonglong)*puVar8;
          }
          FUN_142dd18b0(lVar5,lVar3,uVar7,uVar11);
        }
      }
      local_130 = local_130 + 1;
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  return;
}



// FUNCTION 140e95850 FUN_140e95850 body=345 status=ok
// SIG undefined FUN_140e95850(void)

void FUN_140e95850(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (((lVar3 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_38);
    while( true ) {
      if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar4 = *(longlong *)(lVar3 + 0xc70);
          if (lVar4 != 0) {
            local_28 = *(undefined8 *)(param_2 + 0x10);
            FString::FString(local_20,param_2 + 0x18);
            FUN_140e76e50(lVar4,&local_28);
          }
          local_28 = *(undefined8 *)(param_2 + 0x10);
          FString::FString(local_20,param_2 + 0x18);
          FUN_14145eb70(lVar3,&local_28);
        }
      }
      local_30 = local_30 + 1;
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e959b0 FUN_140e959b0 body=258 status=ok
// SIG undefined FUN_140e959b0(void)

ulonglong FUN_140e959b0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 local_res18;
  
  uVar3 = (uint)param_2 & 0xff;
  local_res18 = param_3;
  if ((int)uVar3 < *(int *)(param_1 + 0x2b0)) {
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar1 = param_1 + 0x48;
    }
    in_RAX = FUN_1407c3030(lVar1 + (param_2 & 0xff) * 0x98);
    if ((char)in_RAX == '\0') goto LAB_140e95a14;
    cVar2 = '\x01';
  }
  else {
LAB_140e95a14:
    cVar2 = '\0';
  }
  if ((0 < *(int *)(param_1 + 8)) && ((int)uVar3 < *(int *)(param_1 + 0x2b0))) {
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar1 = param_1 + 0x48;
    }
    in_RAX = FUN_142dbb5d0(lVar1 + (param_2 & 0xff) * 0x98,&local_res18);
  }
  if (cVar2 == '\0') goto LAB_140e95a9d;
  if ((int)uVar3 < *(int *)(param_1 + 0x2b0)) {
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar1 = param_1 + 0x48;
    }
    in_RAX = FUN_1407c3030((param_2 & 0xff) * 0x98 + lVar1);
    if ((char)in_RAX == '\0') goto LAB_140e95a92;
    in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
  }
  else {
LAB_140e95a92:
    in_RAX = in_RAX & 0xffffffffffffff00;
  }
  if ((char)in_RAX != cVar2) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_140e95a9d:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e95ac0 FUN_140e95ac0 body=185 status=ok
// SIG undefined FUN_140e95ac0(void)

void FUN_140e95ac0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_140e95b43;
          break;
        }
        iVar2 = *(int *)(puVar4 + 2);
      } while (iVar2 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_140e95b43:
  puVar5 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *puVar5;
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(uVar1,param_3);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(uVar1);
  }
  return;
}



// FUNCTION 140e95b80 FUN_140e95b80 body=87 status=ok
// SIG undefined FUN_140e95b80(void)

bool FUN_140e95b80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0x128) == '\x03')) {
    param_1 = param_1 + 0x480;
    local_res10[0] = param_2;
    cVar1 = FUN_1407c3030(param_1);
    if (cVar1 != '\0') {
      FUN_142dbb5d0(param_1,local_res10);
      cVar1 = FUN_1407c3030(param_1);
      return cVar1 == '\0';
    }
  }
  return false;
}



// FUNCTION 140e95be0 FUN_140e95be0 body=910 status=ok
// SIG undefined FUN_140e95be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e95be0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_1 + -0x358);
  if (lVar7 == 0) {
    local_78 = _DAT_1468b5d90;
    local_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar7 + 0x220);
    local_70 = *(float *)(lVar7 + 0x228);
  }
  local_70 = local_70 + *(float *)(param_1 + -0x5c);
  *(undefined8 *)(param_2 + 0x50) = local_78;
  *(float *)(param_2 + 0x58) = local_70;
  lVar7 = *(longlong *)(param_1 + -0x358);
  if (lVar7 == 0) {
    uVar10 = (undefined4)DAT_1468b5da0;
    uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_70 = (float)DAT_1468b5da8;
  }
  else {
    local_68 = *(float *)(lVar7 + 0x210);
    fStack_64 = *(float *)(lVar7 + 0x214);
    fStack_60 = *(float *)(lVar7 + 0x218);
    fStack_5c = *(float *)(lVar7 + 0x21c);
    auVar2._4_4_ = -(uint)(fStack_64 != *(float *)(lVar7 + 0x254));
    auVar2._0_4_ = -(uint)(local_68 != *(float *)(lVar7 + 0x250));
    auVar2._8_4_ = -(uint)(fStack_60 != *(float *)(lVar7 + 600));
    auVar2._12_4_ = -(uint)(fStack_5c != *(float *)(lVar7 + 0x25c));
    iVar5 = movmskps(local_70,auVar2);
    if (iVar5 != 0) {
      *(float *)(lVar7 + 0x250) = local_68;
      *(float *)(lVar7 + 0x254) = fStack_64;
      *(float *)(lVar7 + 600) = fStack_60;
      *(float *)(lVar7 + 0x25c) = fStack_5c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_68,&local_78);
      *(undefined8 *)(lVar7 + 0x260) = *puVar6;
      *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    uVar10 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
    local_70 = (float)*(undefined4 *)(lVar7 + 0x268);
  }
  local_78 = CONCAT44(uVar11,uVar10);
  *(undefined8 *)(param_2 + 0x80) = local_78;
  *(undefined8 *)(param_2 + 0x68) = local_78;
  *(float *)(param_2 + 0x88) = local_70;
  *(float *)(param_2 + 0x70) = local_70;
  lVar7 = FUN_142ceeb40(*(undefined8 *)(param_1 + 0x18),1);
  if (lVar7 != 0) {
    lVar8 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146871670) {
        _Init_thread_header(&DAT_146871670);
        if (DAT_146871670 == -1) {
          FName::FName(&DAT_146871668,L"Camera_3rd",1);
          _Init_thread_footer(&DAT_146871670);
        }
      }
      plVar1 = *(longlong **)(lVar7 + 0x4c0);
      if (plVar1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar1 + 0x440))(plVar1,DAT_146871668);
        if (cVar4 != '\0') {
          (**(code **)(*plVar1 + 0x420))(plVar1,&local_58,DAT_146871668,0);
          local_70 = local_48._8_4_;
          *(longlong *)(param_2 + 0x50) = local_48._0_8_;
          local_68 = local_58;
          fStack_64 = fStack_54;
          fStack_60 = fStack_50;
          fStack_5c = fStack_4c;
          *(float *)(param_2 + 0x58) = local_70;
          FQuat::Rotator(&local_68,&local_78);
          *(undefined8 *)(param_2 + 0x68) = local_78;
          *(float *)(param_2 + 0x70) = local_70;
        }
      }
      goto LAB_140e95e2c;
    }
  }
  lVar7 = 0;
LAB_140e95e2c:
  *(undefined8 *)(param_2 + 0x8c) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x58);
  lVar8 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar9 = FUN_141270d10(*(longlong *)(param_1 + 0x28),0);
      *(undefined8 *)(param_2 + 0xb8) = uVar9;
    }
    uVar9 = (**(code **)(*(longlong *)(param_1 + 8) + 0xb8))(param_1 + 8,0);
    *(undefined8 *)(param_2 + 0xa8) = uVar9;
    if (lVar7 != 0) {
      lVar8 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar7 + 0x24c0);
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar7 + 0x24c8);
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(lVar7 + 0x24cc);
      }
    }
  }
  return;
}



// FUNCTION 140e95f70 FUN_140e95f70 body=185 status=ok
// SIG undefined FUN_140e95f70(void)

void FUN_140e95f70(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_140c45020();
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0xd80);
    lVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (lVar3 != 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      uVar5 = 0;
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        uVar5 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
      }
      uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      iVar2 = FUN_142ff7c90(uVar4,uVar5);
      goto LAB_140e95fea;
    }
  }
  iVar2 = 0;
LAB_140e95fea:
  if ((param_2 <= iVar2) && (*(char *)(param_1 + 0x458) == '\x01')) {
    if (*(char *)(param_1 + 0x128) != '\x03') {
      FUN_140e78f10(param_1,param_2);
    }
    FUN_1414b72b0(param_1,param_2);
  }
  return;
}



// FUNCTION 140e96030 FUN_140e96030 body=33 status=ok
// SIG undefined FUN_140e96030(void)

void FUN_140e96030(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x400))();
  FUN_142ccf590(param_1,uVar1);
  return;
}



// FUNCTION 140e96060 FUN_140e96060 body=23 status=ok
// SIG undefined FUN_140e96060(void)

void FUN_140e96060(longlong param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + 0x4a8 + (longlong)(int)param_3 * 8) = param_2;
    FUN_1414b72f0();
    return;
  }
  return;
}



// FUNCTION 140e96080 FUN_140e96080 body=130 status=ok
// SIG undefined FUN_140e96080(void)

void FUN_140e96080(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) == '\x03') {
    if ((*(longlong *)(param_1 + 0xd0) != 0) && (param_2 != 0)) {
      local_18 = param_2;
      local_10 = param_4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 0xd0),&local_18);
    }
    if ((*(longlong *)(param_1 + 200) != 0) && (param_3 != 0)) {
      local_18 = param_3;
      local_10 = param_4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 200),&local_18);
    }
  }
  return;
}



// FUNCTION 140e96110 FUN_140e96110 body=122 status=ok
// SIG undefined FUN_140e96110(void)

void FUN_140e96110(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_140e73e10();
  *(undefined4 *)(param_1 + 0x45c) = uVar2;
  if (*(char *)(param_1 + 0x128) != '\x03') {
    plVar1 = *(longlong **)(param_1 + 0x460);
    *(char *)(param_1 + 0x459) = param_2;
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x8f] != param_2)) {
      (**(code **)(*plVar1 + 0x600))(plVar1);
      *(char *)(plVar1 + 0x8f) = param_2;
    }
  }
  FUN_1414b7340(param_1,param_2,*(undefined4 *)(param_1 + 0x45c));
  return;
}



// FUNCTION 140e96190 FUN_140e96190 body=422 status=ok
// SIG undefined FUN_140e96190(void)

void FUN_140e96190(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar10 = *(longlong **)(lVar2 + 0x1118);
    plVar1 = plVar10 + *(int *)(lVar2 + 0x1120);
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      if ((*plVar10 != 0) && (lVar3 = *(longlong *)(*plVar10 + 0x60), lVar3 != 0)) {
        puVar8 = *(undefined8 **)(lVar3 + 0x48);
        puVar7 = puVar8 + (longlong)*(int *)(lVar3 + 0x50) * 0xe;
        for (; puVar8 != puVar7; puVar8 = puVar8 + 0xe) {
          uVar5 = FHardwareCursor::GetHandle(puVar8);
          cVar4 = FUN_140b8d3b0(lVar2,uVar5);
          if (cVar4 != '\0') {
            FUN_140b82990(lVar2,local_48);
            local_58 = 0;
            local_50 = 0;
            FUN_142ffa740(local_48,&local_58);
            if (0 < (int)local_50) {
              uVar5 = FHardwareCursor::GetHandle(local_58);
              *puVar8 = uVar5;
            }
            if ((int)local_50 != 0) {
              plVar6 = (longlong *)(local_58 + 0x78);
              iVar9 = (int)local_50;
              do {
                if (*plVar6 != 0) {
                  FMemory::Free();
                }
                plVar6 = plVar6 + 0x11;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            if (local_58 != 0) {
              FMemory::Free();
            }
            if (local_38 != 0) {
              FMemory::Free();
            }
            TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
            ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_48);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e96340 FUN_140e96340 body=8 status=ok
// SIG undefined FUN_140e96340(void)

bool FUN_140e96340(longlong param_1)

{
  return 0 < *(int *)(param_1 + 8);
}



// FUNCTION 140e96350 FUN_140e96350 body=37 status=ok
// SIG undefined FUN_140e96350(void)

ulonglong FUN_140e96350(ulonglong *param_1,byte param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((int)(uint)param_2 < (int)param_1[1]) &&
     (uVar1 = *param_1, *(uint *)((ulonglong)param_2 * 0xf8 + 0xd8 + uVar1) <= param_3)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140e96380 FUN_140e96380 body=1582 status=ok
// SIG undefined FUN_140e96380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e96380(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  uint local_res8 [2];
  undefined4 local_res20 [2];
  undefined4 local_168 [2];
  undefined4 local_160 [2];
  undefined4 local_158 [2];
  undefined4 local_150 [2];
  longlong local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  longlong local_100 [4];
  longlong *local_e0;
  undefined8 local_d8 [4];
  undefined8 local_b8 [4];
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [32];
  
  puVar10 = local_98;
  local_res8[0] = 0;
  if (((*(longlong *)(param_1 + 0x110) != 0) && (param_3 != (longlong *)0x0)) &&
     (lVar5 = FUN_140e82830(), lVar5 != 0)) {
    iVar4 = *(int *)(lVar5 + 0x14);
    if (iVar4 + -1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    *(int *)(lVar5 + 0x14) = iVar4;
    iVar9 = *(int *)(lVar5 + 0x18) + 1;
    iVar4 = -1;
    if (iVar9 != -1) {
      iVar4 = iVar9;
    }
    *(int *)(lVar5 + 0x18) = iVar4;
    Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
              (*(undefined8 *)(param_1 + 0x110));
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    bVar13 = false;
    iVar4 = *(int *)(param_1 + 0x8c);
    iVar9 = *(int *)(param_1 + 0x80) + -1;
    lVar5 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar11 = lVar5 << 4;
      bVar13 = false;
      do {
        if (((*(int *)(lVar11 + 8 + *(longlong *)(param_1 + 0x78)) == 0) ||
            (plVar8 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x78)),
            plVar8 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2,param_3), cVar3 == '\0')) {
          bVar13 = true;
        }
        lVar11 = lVar11 + -0x10;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      iVar4 = *(int *)(param_1 + 0x8c);
    }
    *(int *)(param_1 + 0x8c) = iVar4 + -1;
    if (bVar13) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x78,0);
    }
    local_78 = FUN_14301f8f0();
    lVar5 = (**(code **)(*param_3 + 0x628))(param_3,local_78);
    if (lVar5 != 0) {
      bVar13 = *(longlong *)(lVar5 + 0x208) == 0;
      if (bVar13) {
        local_118 = 0;
        plVar8 = local_100;
        local_100[1] = 0;
      }
      else {
        local_108 = *(undefined8 *)(*(longlong *)(lVar5 + 0x208) + 0x18);
        FName::ToString(&local_108,local_100 + 2);
        plVar8 = local_100 + 2;
        local_118 = local_100[2];
      }
      *plVar8 = 0;
      local_110 = (undefined4)plVar8[1];
      local_10c = *(undefined4 *)((longlong)plVar8 + 0xc);
      plVar8[1] = 0;
      if ((bVar13) && (local_100[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar13) && (local_100[2] != 0)) {
        FMemory::Free();
      }
      FText::FText(local_70,lVar5 + 0x268);
      local_150[0] = 1;
      local_158[0] = 0xffffffff;
      local_160[0] = 0xffffffff;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_168[0] = 1;
      uVar6 = FTextInspector::GetSourceString(local_70);
      local_138 = DAT_146871008;
      local_res20[0] = param_2;
      if ((DAT_146871118 == '\0') &&
         (puVar7 = (undefined8 *)FUN_140e7e2d0(), puVar7 != &DAT_1468710c0)) {
        DAT_1468710c0 = *puVar7;
        _DAT_1468710c8 = puVar7[1];
        _DAT_1468710d0 = puVar7[2];
        DAT_1468710d8 = (longlong *)puVar7[3];
        _DAT_1468710e0 = puVar7[4];
        _DAT_1468710e8 = puVar7[5];
        _DAT_1468710f0 = puVar7[6];
        _DAT_1468710f8 = puVar7[7];
        _DAT_146871100 = puVar7[8];
        _DAT_146871108 = puVar7[9];
        _DAT_146871110 = puVar7[10];
        DAT_146871118 = '\x01';
      }
      cVar3 = FUN_142190080(DAT_1468710c0);
      if ((cVar3 != '\0') && (cVar3 = FUN_142194620(DAT_1468710c0), cVar3 != '\0')) {
        FUN_142190c10(&local_128,DAT_1468710c0);
        lVar5 = *(longlong *)(local_128 + 0xc0);
        if (*(longlong *)(local_128 + 0xc0) == 0) {
          lVar5 = local_128 + 0x20;
        }
        plVar8 = (longlong *)FUN_140aa2bd0(lVar5);
        FUN_14217e740(local_b8);
        FUN_142194380(local_b8,0x28,0,0,0);
        local_b8[0] = *(undefined8 *)(param_1 + 0x110);
        FUN_1421923f0(local_58,DAT_146870fd0,local_b8);
        FUN_140bfb300(plVar8,&DAT_1468710c8,local_58);
        FUN_14217f430(local_58);
        FUN_14217f430(local_b8);
        FUN_140bfadf0(plVar8,&DAT_1468710d0,local_res20);
        local_148 = 0;
        if ((*DAT_1468710d8 != 0) && (cVar3 = FUN_1407ce010(DAT_1468710d8 + 1), cVar3 != '\0')) {
          plVar12 = (longlong *)*plVar8;
          plVar2 = plVar12 + (longlong)(int)plVar8[1] * 5;
          if (plVar12 != plVar2) {
            do {
              if ((*(longlong *)*plVar12 == *DAT_1468710d8) &&
                 (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                  *(longlong *)(DAT_1468710d8[1] + 0x28))) {
                FUN_14217e740(puVar10);
                FUN_142194380(puVar10,0x13,0,0,0);
                local_98[0] = local_138;
                FUN_14217f450(plVar12 + 1,puVar10);
                goto LAB_140e967c4;
              }
              plVar12 = plVar12 + 5;
            } while (plVar12 != plVar2);
          }
          local_e0 = DAT_1468710d8;
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x13,0,0,0);
          iVar4 = (int)plVar8[1];
          local_d8[0] = local_138;
          *(int *)(plVar8 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar4);
          }
          puVar10 = (undefined8 *)(*plVar8 + (longlong)iVar4 * 0x28);
          *puVar10 = local_e0;
          FUN_14217e5b0(puVar10 + 1,local_d8);
          puVar10 = local_d8;
LAB_140e967c4:
          FUN_14217f430(puVar10);
        }
        FUN_140bfb1d0(plVar8,&DAT_1468710e0,uVar6);
        FUN_140bfb1d0(plVar8,&DAT_1468710e8,&local_118);
        FUN_140bfa9d0(plVar8,&DAT_1468710f0,local_168);
        FUN_140bfa9d0(plVar8,&DAT_1468710f8,local_160);
        FUN_140bfa9d0(plVar8,&DAT_146871100,local_158);
        FUN_140bfac90(plVar8,&DAT_146871108,local_res8);
        FUN_140bfa9d0(plVar8,&DAT_146871110,local_150);
        cVar3 = FUN_14218a740(&local_128,1);
        if (cVar3 != '\0') {
          local_148 = local_128;
          plStack_140 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
            UNLOCK();
          }
          FUN_142194040(&local_148);
          plVar8 = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_140 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_140)(plStack_140);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
        }
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_120 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_120)(plStack_120);
            LOCK();
            piVar1 = (int *)((longlong)plStack_120 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_120 + 8))(plStack_120,1);
            }
          }
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_68 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_118 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e969b0 FUN_140e969b0 body=34 status=ok
// SIG undefined FUN_140e969b0(void)

undefined8 FUN_140e969b0(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                    *(longlong *)((ulonglong)param_2 * 0xf8 + 0x28 + *param_1) != 0);
  }
  return 0;
}



// FUNCTION 140e969e0 FUN_140e969e0 body=353 status=ok
// SIG undefined FUN_140e969e0(void)

void FUN_140e969e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_140e93f90(param_4,local_18,0);
  local_20 = (longlong *)FUN_140e68aa0(param_2,param_3,local_18);
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  FUN_1404b8b20(local_28 + 1,param_1,FUN_140e8a540);
  plVar3 = local_20;
  plVar1 = local_28;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar4);
  }
  puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x70));
  *puVar6 = plVar1;
  puVar6[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140e8c5f0(param_1);
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
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e96b50 TScriptInterface<IBlendableInterface><UMaterialInterface> body=82 status=ok
// SIG undefined TScriptInterface<IBlendableInterface><UMaterialInterface>(void)

longlong *
TScriptInterface<IBlendableInterface>::TScriptInterface<IBlendableInterface><UMaterialInterface>
          (longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    param_1[1] = lVar2;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140e96bb0 FUN_140e96bb0 body=127 status=ok
// SIG undefined FUN_140e96bb0(void)

int FUN_140e96bb0(longlong *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = (char *)*param_1;
  iVar1 = (int)param_1[1];
  if (pcVar2 != pcVar2 + iVar1) {
    pcVar4 = pcVar2;
    do {
      if (*pcVar4 == *param_2) {
        iVar3 = (int)pcVar4 - (int)pcVar2;
        if (iVar3 != -1) {
          return iVar3;
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != pcVar2 + iVar1);
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(char *)((longlong)iVar1 + *param_1) = *param_2;
  return iVar1;
}



// FUNCTION 140e96c30 FUN_140e96c30 body=94 status=ok
// SIG undefined FUN_140e96c30(void)

undefined8 FUN_140e96c30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + (longlong)(int)param_1[1] * 8;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3,param_2);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 8;
  }
  return 1;
}



// FUNCTION 140e96c90 FUN_140e96c90 body=666 status=ok
// SIG undefined FUN_140e96c90(void)

longlong FUN_140e96c90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140e96df6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141334660();
LAB_140e96df6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141334660();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140e96e69;
  }
  lVar7 = 0;
LAB_140e96e69:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140e96f30 FUN_140e96f30 body=666 status=ok
// SIG undefined FUN_140e96f30(void)

longlong FUN_140e96f30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140e97096;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UPlatformGameInstance::StaticClass();
LAB_140e97096:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140e97109;
  }
  lVar7 = 0;
LAB_140e97109:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140e971d0 FUN_140e971d0 body=93 status=ok
// SIG undefined FUN_140e971d0(void)

longlong FUN_140e971d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e97230 FUN_140e97230 body=93 status=ok
// SIG undefined FUN_140e97230(void)

longlong FUN_140e97230(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e97290 FUN_140e97290 body=93 status=ok
// SIG undefined FUN_140e97290(void)

longlong FUN_140e97290(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar2 != 0) {
    lVar3 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e972f0 HeapSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_> body=441 status=ok
// SIG undefined HeapSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar12 = iVar6 * 2 + 1;
    iVar10 = iVar12;
    iVar13 = iVar6;
joined_r0x000140e9731a:
    do {
      if (iVar12 < param_2) {
        iVar8 = iVar6 * 2 + 1;
        iVar12 = iVar6 * 2 + 2;
        iVar9 = iVar8;
        if ((iVar12 < param_2) &&
           (iVar9 = iVar12,
           *(float *)(param_1 + (longlong)iVar12 * 4) <= *(float *)(param_1 + (longlong)iVar8 * 4)
           && *(float *)(param_1 + (longlong)iVar8 * 4) !=
              *(float *)(param_1 + (longlong)iVar12 * 4))) {
          iVar9 = iVar8;
        }
        pfVar7 = (float *)(param_1 + (longlong)iVar9 * 4);
        pfVar14 = (float *)(param_1 + (longlong)iVar6 * 4);
        if (*pfVar14 <= *pfVar7 && *pfVar7 != *pfVar14) {
          if (pfVar14 != pfVar7) {
            uVar1 = *(undefined8 *)(pfVar7 + 2);
            uVar2 = *(undefined8 *)pfVar14;
            uVar3 = *(undefined8 *)(pfVar14 + 2);
            uVar4 = *(undefined8 *)(pfVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar14 + 6);
            *(undefined8 *)pfVar14 = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar14 + 2) = uVar1;
            uVar1 = *(undefined8 *)(pfVar7 + 6);
            *(undefined8 *)(pfVar14 + 4) = *(undefined8 *)(pfVar7 + 4);
            *(undefined8 *)(pfVar14 + 6) = uVar1;
            *(undefined8 *)pfVar7 = uVar2;
            *(undefined8 *)(pfVar7 + 2) = uVar3;
            *(undefined8 *)(pfVar7 + 4) = uVar4;
            *(undefined8 *)(pfVar7 + 6) = uVar5;
          }
          iVar12 = iVar9 * 2 + 1;
          iVar6 = iVar9;
          goto joined_r0x000140e9731a;
        }
      }
      iVar12 = iVar10 + -2;
      iVar6 = iVar13 + -1;
      iVar10 = iVar12;
      iVar13 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar1 = puVar11[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar1;
        uVar1 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar1;
        *puVar11 = uVar2;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar12 = iVar6 * 2 + 1;
          iVar13 = iVar6 * 2 + 2;
          iVar10 = iVar12;
          if ((iVar13 < param_2) &&
             (iVar10 = iVar13,
             *(float *)(param_1 + (longlong)iVar13 * 4) <=
             *(float *)(param_1 + (longlong)iVar12 * 4) &&
             *(float *)(param_1 + (longlong)iVar12 * 4) !=
             *(float *)(param_1 + (longlong)iVar13 * 4))) {
            iVar10 = iVar12;
          }
          pfVar7 = (float *)(param_1 + (longlong)iVar10 * 4);
          pfVar14 = (float *)(param_1 + (longlong)iVar6 * 4);
          if (*pfVar7 < *pfVar14 || *pfVar7 == *pfVar14) break;
          if (pfVar14 != pfVar7) {
            uVar1 = *(undefined8 *)(pfVar7 + 2);
            uVar2 = *(undefined8 *)pfVar14;
            uVar3 = *(undefined8 *)(pfVar14 + 2);
            uVar4 = *(undefined8 *)(pfVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar14 + 6);
            *(undefined8 *)pfVar14 = *(undefined8 *)pfVar7;
            *(undefined8 *)(pfVar14 + 2) = uVar1;
            uVar1 = *(undefined8 *)(pfVar7 + 6);
            *(undefined8 *)(pfVar14 + 4) = *(undefined8 *)(pfVar7 + 4);
            *(undefined8 *)(pfVar14 + 6) = uVar1;
            *(undefined8 *)pfVar7 = uVar2;
            *(undefined8 *)(pfVar7 + 2) = uVar3;
            *(undefined8 *)(pfVar7 + 4) = uVar4;
            *(undefined8 *)(pfVar7 + 6) = uVar5;
          }
          iVar6 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140e974b0 IntroSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_> body=695 status=ok
// SIG undefined IntroSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
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
  undefined8 uVar12;
  longlong lVar13;
  float *pfVar14;
  longlong *plVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar21 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar21 = ::_guard_xfg_dispatch_icall_nop(fVar21);
    local_318 = (undefined4)(longlong)(fVar21 + fVar21);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar15 = &local_328;
    do {
      pfVar20 = (float *)*plVar15;
      pfVar18 = (float *)plVar15[1];
      lVar1 = plVar15[2];
      local_338._0_4_ = (int)lVar1;
      lVar13 = ((longlong)pfVar18 - (longlong)pfVar20 >> 5) + 1;
      pfVar19 = pfVar20;
      if ((int)local_338 != 0) {
LAB_140e97580:
        if (8 < lVar13) {
          pfVar20 = pfVar19 + (lVar13 / 2) * 8;
          if (pfVar20 != pfVar19) {
            fVar21 = pfVar19[1];
            fVar2 = pfVar19[2];
            fVar3 = pfVar19[3];
            fVar4 = *pfVar20;
            fVar5 = pfVar20[1];
            fVar6 = pfVar20[2];
            fVar7 = pfVar20[3];
            uVar9 = *(undefined8 *)(pfVar20 + 4);
            uVar10 = *(undefined8 *)(pfVar20 + 6);
            *pfVar20 = *pfVar19;
            pfVar20[1] = fVar21;
            pfVar20[2] = fVar2;
            pfVar20[3] = fVar3;
            uVar8 = *(undefined8 *)(pfVar19 + 6);
            *(undefined8 *)(pfVar20 + 4) = *(undefined8 *)(pfVar19 + 4);
            *(undefined8 *)(pfVar20 + 6) = uVar8;
            *pfVar19 = fVar4;
            pfVar19[1] = fVar5;
            pfVar19[2] = fVar6;
            pfVar19[3] = fVar7;
            *(undefined8 *)(pfVar19 + 4) = uVar9;
            *(undefined8 *)(pfVar19 + 6) = uVar10;
          }
          pfVar16 = pfVar18 + 8;
          pfVar20 = pfVar19;
LAB_140e975d0:
          pfVar14 = pfVar20;
          pfVar20 = pfVar14 + 8;
          if (pfVar20 <= pfVar18) goto code_r0x000140e975d9;
          goto LAB_140e975e3;
        }
        for (; pfVar16 = pfVar19, pfVar20 = pfVar19, pfVar19 < pfVar18; pfVar18 = pfVar18 + -8) {
          while (pfVar20 = pfVar20 + 8, pfVar20 <= pfVar18) {
            if (*pfVar16 < *pfVar20) {
              pfVar16 = pfVar20;
            }
          }
          if (pfVar16 != pfVar18) {
            uVar8 = *(undefined8 *)(pfVar18 + 2);
            uVar9 = *(undefined8 *)pfVar16;
            uVar10 = *(undefined8 *)(pfVar16 + 2);
            uVar11 = *(undefined8 *)(pfVar16 + 4);
            uVar12 = *(undefined8 *)(pfVar16 + 6);
            *(undefined8 *)pfVar16 = *(undefined8 *)pfVar18;
            *(undefined8 *)(pfVar16 + 2) = uVar8;
            uVar8 = *(undefined8 *)(pfVar18 + 6);
            *(undefined8 *)(pfVar16 + 4) = *(undefined8 *)(pfVar18 + 4);
            *(undefined8 *)(pfVar16 + 6) = uVar8;
            *(undefined8 *)pfVar18 = uVar9;
            *(undefined8 *)(pfVar18 + 2) = uVar10;
            *(undefined8 *)(pfVar18 + 4) = uVar11;
            *(undefined8 *)(pfVar18 + 6) = uVar12;
          }
        }
        goto LAB_140e976d5;
      }
LAB_140e976c6:
      local_338 = lVar1;
      HeapSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>
                (pfVar20,lVar13,param_3,param_4);
LAB_140e976d5:
      plVar15 = plVar15 + -3;
    } while (&local_328 <= plVar15);
  }
  return;
code_r0x000140e975d9:
  if (*pfVar20 < *pfVar19 || *pfVar20 == *pfVar19) goto LAB_140e975d0;
LAB_140e975e3:
  do {
    pfVar17 = pfVar16;
    pfVar16 = pfVar17 + -8;
    if (pfVar16 <= pfVar19) break;
  } while (*pfVar19 < *pfVar16 || *pfVar19 == *pfVar16);
  if (pfVar20 <= pfVar16) {
    if (pfVar20 != pfVar16) {
      fVar21 = pfVar17[-7];
      fVar2 = pfVar17[-6];
      fVar3 = pfVar17[-5];
      fVar4 = *pfVar20;
      fVar5 = pfVar14[9];
      fVar6 = pfVar14[10];
      fVar7 = pfVar14[0xb];
      uVar9 = *(undefined8 *)(pfVar14 + 0xc);
      uVar10 = *(undefined8 *)(pfVar14 + 0xe);
      *pfVar20 = *pfVar16;
      pfVar14[9] = fVar21;
      pfVar14[10] = fVar2;
      pfVar14[0xb] = fVar3;
      uVar8 = *(undefined8 *)(pfVar17 + -2);
      *(undefined8 *)(pfVar14 + 0xc) = *(undefined8 *)(pfVar17 + -4);
      *(undefined8 *)(pfVar14 + 0xe) = uVar8;
      *pfVar16 = fVar4;
      pfVar17[-7] = fVar5;
      pfVar17[-6] = fVar6;
      pfVar17[-5] = fVar7;
      *(undefined8 *)(pfVar17 + -4) = uVar9;
      *(undefined8 *)(pfVar17 + -2) = uVar10;
    }
    goto LAB_140e975d0;
  }
  if (pfVar19 != pfVar16) {
    fVar21 = pfVar17[-7];
    fVar2 = pfVar17[-6];
    fVar3 = pfVar17[-5];
    fVar4 = *pfVar19;
    fVar5 = pfVar19[1];
    fVar6 = pfVar19[2];
    fVar7 = pfVar19[3];
    uVar9 = *(undefined8 *)(pfVar19 + 4);
    uVar10 = *(undefined8 *)(pfVar19 + 6);
    *pfVar19 = *pfVar16;
    pfVar19[1] = fVar21;
    pfVar19[2] = fVar2;
    pfVar19[3] = fVar3;
    uVar8 = *(undefined8 *)(pfVar17 + -2);
    *(undefined8 *)(pfVar19 + 4) = *(undefined8 *)(pfVar17 + -4);
    *(undefined8 *)(pfVar19 + 6) = uVar8;
    *pfVar16 = fVar4;
    pfVar17[-7] = fVar5;
    pfVar17[-6] = fVar6;
    pfVar17[-5] = fVar7;
    *(undefined8 *)(pfVar17 + -4) = uVar9;
    *(undefined8 *)(pfVar17 + -2) = uVar10;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pfVar16 + (-0x20 - (longlong)pfVar19) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pfVar18 - (longlong)pfVar20 & 0xffffffffffffffe0U)) {
    if (pfVar20 < pfVar18) {
      *plVar15 = (longlong)pfVar20;
      plVar15[1] = (longlong)pfVar18;
      *(int *)(plVar15 + 2) = (int)local_338;
      plVar15 = plVar15 + 3;
    }
    if (pfVar16 <= pfVar19 + 8) goto LAB_140e976d5;
    pfVar18 = pfVar17 + -0x10;
    pfVar20 = pfVar19;
  }
  else {
    if (pfVar19 + 8 < pfVar16) {
      *plVar15 = (longlong)pfVar19;
      plVar15[1] = (longlong)(pfVar17 + -0x10);
      *(int *)(plVar15 + 2) = (int)local_338;
      plVar15 = plVar15 + 3;
    }
    if (pfVar18 <= pfVar20) goto LAB_140e976d5;
  }
  lVar13 = ((longlong)pfVar18 - (longlong)pfVar20 >> 5) + 1;
  pfVar19 = pfVar20;
  if ((int)local_338 == 0) goto LAB_140e976c6;
  goto LAB_140e97580;
}



// FUNCTION 140e97770 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140e97810 FUN_140e97810 body=491 status=ok
// SIG undefined FUN_140e97810(void)

bool FUN_140e97810(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140e979e3;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140e979e3;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140e97876;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_141334660();
LAB_140e97876:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140e97932:
    lVar10 = 0;
  }
  else {
    lVar8 = FUN_141334660();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e97932;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140e979e3:
  return *param_2 != 0;
}



// FUNCTION 140e97a00 FUN_140e97a00 body=617 status=ok
// SIG undefined FUN_140e97a00(void)

bool FUN_140e97a00(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140e97c14;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140e97b57;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413458f0();
LAB_140e97b57:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140e97bcb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413458f0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e97bcb;
  }
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
  *param_2 = lVar9;
LAB_140e97c14:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 140e97c70 FUN_140e97c70 body=617 status=ok
// SIG undefined FUN_140e97c70(void)

bool FUN_140e97c70(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140e97e84;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140e97dc7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413592a0();
LAB_140e97dc7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140e97e3b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413592a0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e97e3b;
  }
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
  *param_2 = lVar9;
LAB_140e97e84:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 140e97ee0 FUN_140e97ee0 body=879 status=ok
// SIG undefined FUN_140e97ee0(void)

bool FUN_140e97ee0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_140e97f9f:
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
      if (iVar8 < 1) goto LAB_140e97f9f;
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
            goto LAB_140e97fb4;
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
LAB_140e97fb4:
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
  if (local_68 == 0) goto LAB_140e981ef;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140e9813d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413592a0();
LAB_140e9813d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140e981b6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413592a0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140e981b6;
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
LAB_140e981ef:
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



// FUNCTION 140e98250 FUN_140e98250 body=491 status=ok
// SIG undefined FUN_140e98250(void)

bool FUN_140e98250(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140e98423;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140e98423;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140e982b6;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = FUN_142f18d50();
LAB_140e982b6:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140e98372:
    lVar10 = 0;
  }
  else {
    lVar8 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e98372;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140e98423:
  return *param_2 != 0;
}



// FUNCTION 140e98440 FUN_140e98440 body=491 status=ok
// SIG undefined FUN_140e98440(void)

bool FUN_140e98440(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140e98613;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140e98613;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140e984a6;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_140e984a6:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140e98562:
    lVar10 = 0;
  }
  else {
    lVar8 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e98562;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140e98613:
  return *param_2 != 0;
}



// FUNCTION 140e98630 FUN_140e98630 body=879 status=ok
// SIG undefined FUN_140e98630(void)

bool FUN_140e98630(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_140e986ef:
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
      if (iVar8 < 1) goto LAB_140e986ef;
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
            goto LAB_140e98704;
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
LAB_140e98704:
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
  if (local_68 == 0) goto LAB_140e9893f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140e9888d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_140e9888d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140e98906:
    lVar11 = 0;
  }
  else {
    lVar10 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140e98906;
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
LAB_140e9893f:
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



// FUNCTION 140e989a0 FUN_140e989a0 body=491 status=ok
// SIG undefined FUN_140e989a0(void)

bool FUN_140e989a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*param_2 != 0) goto LAB_140e98b73;
  cVar7 = FUN_142056870(param_1,param_3);
  if (cVar7 != '\0') goto LAB_140e98b73;
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar8) goto LAB_140e98a06;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = UPlatformGameInstance::StaticClass();
LAB_140e98a06:
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar4 = (longlong *)puVar9[1];
  local_58 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x78);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  local_48 = local_58;
  lVar10 = FUN_14203b750(local_38,param_4,param_3,&local_58,param_5,param_6);
  if (lVar10 == 0) {
LAB_140e98ac2:
    lVar10 = 0;
  }
  else {
    lVar8 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e98ac2;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  *param_2 = lVar10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
LAB_140e98b73:
  return *param_2 != 0;
}



// FUNCTION 140e98b90 FUN_140e98b90 body=879 status=ok
// SIG undefined FUN_140e98b90(void)

bool FUN_140e98b90(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_140e98c4f:
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
      if (iVar8 < 1) goto LAB_140e98c4f;
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
            goto LAB_140e98c64;
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
LAB_140e98c64:
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
  if (local_68 == 0) goto LAB_140e98e9f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140e98ded;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UPlatformGameInstance::StaticClass();
LAB_140e98ded:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140e98e66:
    lVar11 = 0;
  }
  else {
    lVar10 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140e98e66;
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
LAB_140e98e9f:
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



// FUNCTION 140e98f00 FUN_140e98f00 body=879 status=ok
// SIG undefined FUN_140e98f00(void)

bool FUN_140e98f00(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_140e98fbf:
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
      if (iVar8 < 1) goto LAB_140e98fbf;
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
            goto LAB_140e98fd4;
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
LAB_140e98fd4:
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
  if (local_68 == 0) goto LAB_140e9920f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140e9915d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f25280();
LAB_140e9915d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140e991d6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_142f25280();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140e991d6;
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
LAB_140e9920f:
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



// FUNCTION 140e99270 FUN_140e99270 body=879 status=ok
// SIG undefined FUN_140e99270(void)

bool FUN_140e99270(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_140e9932f:
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
      if (iVar8 < 1) goto LAB_140e9932f;
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
            goto LAB_140e99344;
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
LAB_140e99344:
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
  if (local_68 == 0) goto LAB_140e9957f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140e994cd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UAnimSharingStateInstance::GetPrivateStaticClass();
LAB_140e994cd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140e99546:
    lVar11 = 0;
  }
  else {
    lVar10 = UAnimSharingStateInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140e99546;
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
LAB_140e9957f:
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



// FUNCTION 140e995e0 FUN_140e995e0 body=188 status=ok
// SIG undefined FUN_140e995e0(void)

undefined8 * FUN_140e995e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f8f0();
  *param_1 = &PTR_FUN_1445ea028;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141484690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x92] = uVar3;
  *param_1 = &PTR_FUN_1445ea758;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  return param_1;
}



// FUNCTION 140e996a0 FUN_140e996a0 body=98 status=ok
// SIG undefined FUN_140e996a0(void)

undefined8 * FUN_140e996a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_1428c1a80(param_1,uVar1);
  *param_1 = &PTR_FUN_1445eae88;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a9) = 1;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  FUN_14223c460(param_1,0);
  return param_1;
}



// FUNCTION 140e99710 FUN_140e99710 body=33 status=ok
// SIG undefined FUN_140e99710(void)

undefined8 * FUN_140e99710(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445e7a88;
  return param_1;
}



// FUNCTION 140e99740 FUN_140e99740 body=139 status=ok
// SIG undefined FUN_140e99740(void)

undefined8 * FUN_140e99740(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"SpawnPointComponent");
  uVar1 = FUN_141477600();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpawnPointComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_140771ed0(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1445e1f70;
  param_1[0x8b] = &PTR_LAB_14408c4e8;
  return param_1;
}



// FUNCTION 140e997d0 FUN_140e997d0 body=140 status=ok
// SIG undefined FUN_140e997d0(void)

undefined8 * FUN_140e997d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f6a0();
  *param_1 = &PTR_FUN_1445eb5b0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141484690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 140e99860 FUN_140e99860 body=140 status=ok
// SIG undefined FUN_140e99860(void)

undefined8 * FUN_140e99860(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f770();
  *param_1 = &PTR_FUN_1445ec380;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141484690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 140e998f0 FUN_140e998f0 body=140 status=ok
// SIG undefined FUN_140e998f0(void)

undefined8 * FUN_140e998f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f840();
  *param_1 = &PTR_FUN_1445ebc98;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141484690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 140e99980 FUN_140e99980 body=154 status=ok
// SIG undefined FUN_140e99980(void)

undefined8 * FUN_140e99980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f8f0();
  *param_1 = &PTR_FUN_1445ea028;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141484690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x92] = uVar3;
  return param_1;
}



// FUNCTION 140e99a20 FUN_140e99a20 body=126 status=ok
// SIG undefined FUN_140e99a20(void)

undefined8 * FUN_140e99a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14285f840();
  *param_1 = &PTR__scalar_deleting_destructor__1445eca68;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DefaultUsableComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e80f20();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  return param_1;
}



// FUNCTION 140e99aa0 FUN_140e99aa0 body=400 status=ok
// SIG undefined FUN_140e99aa0(void)

undefined8 * FUN_140e99aa0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  lVar1 = FUN_14178c940();
  FUN_141784790(lVar1,L"SpawnPointComponent");
  uVar2 = FUN_141477600();
  puVar3 = (undefined8 *)FName::FName(local_res8,L"SpawnPointComponent",1);
  FObjectInitializer::FOverrides::Add(lVar1 + 0x20,*puVar3,uVar2,lVar1);
  FUN_140771ed0(param_1,lVar1);
  *param_1 = &PTR_FUN_1445e2e98;
  param_1[0x8b] = &PTR_LAB_1445e3588;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4da) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xa6) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  *(undefined4 *)(param_1 + 0xab) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xc5bb8000;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x45bb8000;
  *(undefined4 *)(param_1 + 0xa6) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x44610000;
  return param_1;
}



// FUNCTION 140e99c30 FUN_140e99c30 body=129 status=ok
// SIG undefined FUN_140e99c30(void)

undefined8 * FUN_140e99c30(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14178c940();
  FUN_140e68da0(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1445e2660;
  param_1[0x8b] = &PTR_LAB_1445e2d78;
  param_1[0xbd] = &PTR_LAB_1445e2d98;
  param_1[0xbe] = &PTR_LAB_1445e2dc0;
  param_1[0xbf] = &PTR_LAB_1445e2e08;
  param_1[0xc6] = &PTR_LAB_1445e2e78;
  lVar2 = UCableComponent::GetAttachedActor(param_1);
  *(undefined1 *)(lVar2 + 0x868) = 0;
  return param_1;
}



// FUNCTION 140e99cc0 FUN_140e99cc0 body=203 status=ok
// SIG undefined FUN_140e99cc0(void)

undefined8 * FUN_140e99cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14285f6a0();
  *param_1 = &PTR_FUN_1445eb5b0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TriggerComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_141484690();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = lVar4;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  *param_1 = &PTR_FUN_1445ed150;
  *(undefined4 *)(param_1 + 0x91) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x92) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x40400000;
  *(undefined1 *)(lVar4 + 0x1c8) = 0;
  return param_1;
}



// FUNCTION 140e99d90 FUN_140e99d90 body=306 status=ok
// SIG undefined FUN_140e99d90(void)

undefined8 * FUN_140e99d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *param_1 = &PTR_FUN_1445e9060;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0xbf800000;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"SplineFollower",1);
  uVar3 = *puVar1;
  uVar2 = UTextBlock::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,"CraneMesh",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = lVar4;
  if (lVar4 != 0) {
    local_res8 = 0;
    FUN_142382f60(lVar4,param_1[0x2d],&DAT_146af29ec,0);
  }
  return param_1;
}



// FUNCTION 140e99ed0 FUN_140e99ed0 body=318 status=ok
// SIG undefined FUN_140e99ed0(void)

undefined8 * FUN_140e99ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_140e69380();
  *param_1 = &PTR_FUN_1445e5350;
  param_1[0x8b] = &PTR_LAB_1445e5bb0;
  param_1[0x98] = &PTR_LAB_1445e5c08;
  param_1[0x99] = &PTR_LAB_1445e5c28;
  param_1[0xa0] = &PTR_LAB_1445e5df8;
  param_1[0xa1] = &PTR_LAB_1445e5e20;
  param_1[0xa2] = &PTR_LAB_1445e5e48;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  FUN_142c62aa0(param_1 + 0xaa);
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)((longlong)param_1 + 0x591) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TeamComponent",1);
  uVar3 = *puVar1;
  uVar2 = UCircularThrobber::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xfe;
  param_1[0xa4] = uVar3;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  return param_1;
}



// FUNCTION 140e9a010 FUN_140e9a010 body=148 status=ok
// SIG undefined FUN_140e9a010(void)

undefined8 * FUN_140e9a010(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[3],_Src,(longlong)iVar1 << 6);
  }
  return param_1;
}



// FUNCTION 140e9a0b0 FCanvasTextItemBase body=247 status=ok
// SIG undefined FCanvasTextItemBase(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTextItemBase::FCanvasTextItemBase
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  param_1[1] = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1444d54b8;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffe;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  param_1[0xd] = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  param_1[0xe] = uVar1;
  uVar1 = DAT_1468b5d88;
  param_1[0xf] = DAT_1468b5d88;
  uVar2 = DAT_1468b5d88;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  param_1[0x10] = uVar2;
  uVar6 = DAT_1464aa6ec;
  uVar5 = DAT_1464aa6e8;
  uVar4 = DAT_1464aa6e4;
  uVar3 = DAT_1464aa6e0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  FCanvasTileItem::FCanvasTileItem(param_1 + 0x15,uVar1,&DAT_1468b5d88,param_3);
  uVar1 = param_3[1];
  param_1[5] = *param_3;
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return param_1;
}



// FUNCTION 140e9a1b0 FUN_140e9a1b0 body=247 status=ok
// SIG undefined FUN_140e9a1b0(void)

undefined8 * FUN_140e9a1b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140e9a2b0(param_1 + 2);
  *(undefined4 *)(param_1 + 0x14) = 0x14;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x12;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar1 = FUN_141324a80();
  param_1[0x1b] = uVar1;
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Equip",0xc);
  FText::FromString(param_1 + 0x1c,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 140e9a2b0 FUN_140e9a2b0 body=337 status=ok
// SIG undefined FUN_140e9a2b0(void)

undefined2 * FUN_140e9a2b0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 4) = 0x40a00000;
  *(undefined4 *)(param_1 + 6) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xc,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0xc),L"scrollBar",0x14);
  *(undefined4 *)(param_1 + 0x14) = 0x100;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0x18),L"entry",0xc);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0x20),L"gridArea",0x12);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0x28),L"gridMask",0x12);
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x43960000;
  *(undefined4 *)(param_1 + 0x34) = 0x43960000;
  *(undefined4 *)(param_1 + 0x36) = 0x101;
  param_1[0x38] = 1;
  FName::FName(param_1 + 0x3c,"Navigate",1);
  FName::FName(param_1 + 0x40,"Select",1);
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 140e9a410 FUN_140e9a410 body=29 status=ok
// SIG undefined FUN_140e9a410(void)

longlong FUN_140e9a410(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  return param_1;
}



// FUNCTION 140e9a430 FUN_140e9a430 body=191 status=ok
// SIG undefined FUN_140e9a430(void)

longlong * FUN_140e9a430(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    FUN_14260b180();
  }
  *param_1 = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    plVar3 = *(longlong **)(param_2 + 0x920);
    uVar4 = (longlong)*(int *)(param_2 + 0x928) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_2 + 0x928) < plVar3) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*plVar3;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x100))(plVar1,1);
        }
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar4);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140e9a4f0 FUN_140e9a4f0 body=711 status=ok
// SIG undefined FUN_140e9a4f0(void)

longlong FUN_140e9a4f0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  FText::FText();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FText::FText(param_1 + 0x20,param_2 + 0x20);
  FText::FText(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x8c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  if (*(undefined2 **)(param_1 + 0x80) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  local_38 = *(undefined8 *)(param_2 + 0x78);
  FString::FString(local_30,param_2 + 0x80);
  FSoftObjectPath::operator=(param_1 + 0x78,&local_38);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(byte *)(param_1 + 0xc1) =
       *(byte *)(param_1 + 0xc1) ^ (*(byte *)(param_1 + 0xc1) ^ *(byte *)(param_2 + 0xc1)) & 1;
  bVar1 = (*(byte *)(param_1 + 0xc1) ^ *(byte *)(param_2 + 0xc1)) & 2 ^ *(byte *)(param_1 + 0xc1);
  *(byte *)(param_1 + 0xc1) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0xc1)) & 4 ^ bVar1;
  *(byte *)(param_1 + 0xc1) = bVar1;
  *(byte *)(param_1 + 0xc1) = (*(byte *)(param_2 + 0xc1) ^ bVar1) & 8 ^ bVar1;
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) ^ (*(byte *)(param_1 + 0xd4) ^ *(byte *)(param_2 + 0xd4)) & 1;
  *(byte *)(param_1 + 0xd4) =
       (*(byte *)(param_1 + 0xd4) ^ *(byte *)(param_2 + 0xd4)) & 2 ^ *(byte *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  return param_1;
}



// FUNCTION 140e9a7c0 FUN_140e9a7c0 body=76 status=ok
// SIG undefined FUN_140e9a7c0(void)

undefined8 *
FUN_140e9a7c0(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_1445e9040;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *(undefined1 *)((longlong)param_1 + 9) = param_3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 2) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  param_1[4] = *(undefined8 *)(param_5 + 4);
  FWeakObjectPtr::operator=(param_1 + 5,param_6);
  return param_1;
}



// FUNCTION 140e9a810 FUN_140e9a810 body=47 status=ok
// SIG undefined FUN_140e9a810(void)

undefined8 * FUN_140e9a810(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR__scalar_deleting_destructor__1445ed838;
  param_1[0x9b] = &PTR_LAB_1445edda0;
  return param_1;
}



// FUNCTION 140e9a840 FUN_140e9a840 body=483 status=ok
// SIG undefined FUN_140e9a840(void)

undefined8 * FUN_140e9a840(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_1445edf90;
  param_1[0xd3] = 0;
  param_1[0x9b] = &PTR_LAB_1445ee4f8;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe6] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  FUN_140e9a1b0(param_1 + 0xf4);
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined1 *)(param_1 + 0x11b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined2 *)(param_1 + 0x11d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8ea) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0x434c0000;
  *(undefined4 *)(param_1 + 0x123) = 0x43090000;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 8;
  *(undefined4 *)(param_1 + 0x124) = 4;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  return param_1;
}



// FUNCTION 140e9aa30 FUN_140e9aa30 body=543 status=ok
// SIG undefined FUN_140e9aa30(void)

undefined8 * FUN_140e9aa30(undefined8 *param_1)

{
  FUN_140e9ac50();
  *(undefined1 *)(param_1 + 0x9c) = 1;
  param_1[0x9d] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1445e3ec8;
  param_1[0x9b] = &PTR_LAB_1445e4430;
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
  FName::FName(param_1 + 0xa8,&DAT_143f3f584,1);
  FName::FName(param_1 + 0xa9,&DAT_143f3f584,1);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0x43870000;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5dd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5e1) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x614) = 0;
  param_1[0xc3] = 0;
  *(undefined2 *)((longlong)param_1 + 0x621) = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined1 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 2;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  return param_1;
}



// FUNCTION 140e9ac50 FUN_140e9ac50 body=502 status=ok
// SIG undefined FUN_140e9ac50(void)

undefined8 * FUN_140e9ac50(undefined8 *param_1)

{
  FUN_14207f5b0();
  *param_1 = &PTR__scalar_deleting_destructor__1445e3840;
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x43) = 3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x44) = DAT_1468b5d88._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x224) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x45) = DAT_1468b5d88._4_4_;
  param_1[0x49] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = DAT_1468b5d88._4_4_;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x5e] = AK::MemoryMgr::StartProfileThreadUsage;
  FTimerManager::FTimerManager(param_1 + 0x68);
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x91));
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x96));
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  return param_1;
}



// FUNCTION 140e9ae50 FUN_140e9ae50 body=84 status=ok
// SIG undefined FUN_140e9ae50(void)

undefined8 * FUN_140e9ae50(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_1445e8408;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f000000;
  return param_1;
}



// FUNCTION 140e9aeb0 FUN_140e9aeb0 body=49 status=ok
// SIG undefined FUN_140e9aeb0(void)

undefined8 * FUN_140e9aeb0(undefined8 *param_1)

{
  ULevelStreaming::ULevelStreaming();
  *param_1 = &PTR__scalar_deleting_destructor__1445e8da8;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 140e9aef0 FUN_140e9aef0 body=152 status=ok
// SIG undefined FUN_140e9aef0(void)

undefined8 * FUN_140e9aef0(undefined8 *param_1)

{
  FUN_1407bd0d0();
  *param_1 = &PTR_FUN_1445e12b0;
  param_1[5] = &PTR_LAB_1445e1ba8;
  param_1[0x5a] = &PTR_LAB_1445e1bd8;
  param_1[0xde] = &PTR_LAB_1445e1c30;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined4 *)(param_1 + 0x137) = 0xffffffff;
  param_1[0x139] = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  return param_1;
}



// FUNCTION 140e9af90 FUN_140e9af90 body=88 status=ok
// SIG undefined FUN_140e9af90(void)

undefined8 * FUN_140e9af90(undefined8 *param_1)

{
  FUN_140772ee0();
  *(undefined2 *)(param_1 + 0x138) = 0;
  *param_1 = &PTR_FUN_1445dfd28;
  param_1[5] = &PTR_LAB_1445e0638;
  param_1[0x5a] = &PTR_LAB_1445e0668;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0xbf800000;
  param_1[0x139] = 0;
  return param_1;
}



// FUNCTION 140e9aff0 UAtomProfileData body=44 status=ok
// SIG undefined UAtomProfileData(void)

undefined8 * UAtomProfileData::UAtomProfileData(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_1445e1c48;
  return param_1;
}



// FUNCTION 140e9b020 FUN_140e9b020 body=316 status=ok
// SIG undefined FUN_140e9b020(void)

undefined8 * FUN_140e9b020(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  uVar4 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar4);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1445e7800;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0xff00;
  FUN_142de2eb0(param_1 + 0xd);
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xff00;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0xff00;
  puVar5 = (undefined1 *)FUN_142de2f30(local_88,0,1);
  *(undefined1 *)(param_1 + 0xd) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x69) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x6a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x6b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)(puVar5 + 4);
  param_1[0xf] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x10] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x11] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x12] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x13] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x14] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x15] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x16] = uVar4;
  param_1[0x17] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  param_1[0x1a] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x69) = *(byte *)((longlong)param_1 + 0x69) | 2;
  FUN_142df3150(param_1 + 0xd,5);
  return param_1;
}



// FUNCTION 140e9b160 FUN_140e9b160 body=830 status=ok
// SIG undefined FUN_140e9b160(void)

undefined8 * FUN_140e9b160(undefined8 *param_1)

{
  FUN_142dc25a0();
  *param_1 = &PTR_FUN_1445e86a0;
  param_1[5] = &PTR_LAB_1445e8ad8;
  param_1[0x2f] = &PTR_LAB_1445e8b08;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 2;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 2;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0xff;
  *(undefined2 *)(param_1 + 0x93) = 0xffff;
  *(undefined2 *)(param_1 + 0x95) = 0x101;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0xffffffffffffffff;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0xbf800000;
  *(undefined1 *)(param_1 + 199) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0xbf800000;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3ad) = *(byte *)((longlong)param_1 + 0x3ad) | 7;
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x72) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x71) = 0x42480000;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x41200000;
  return param_1;
}



// FUNCTION 140e9b4a0 FUN_140e9b4a0 body=165 status=ok
// SIG undefined FUN_140e9b4a0(void)

undefined8 * FUN_140e9b4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_1445e9ba0;
  param_1[5] = &PTR_LAB_1445e9f98;
  param_1[0x2f] = &PTR_LAB_1445e9fc8;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)(param_1 + 0x3e) = 0xbf800000;
  return param_1;
}



// FUNCTION 140e9b550 FUN_140e9b550 body=177 status=ok
// SIG undefined FUN_140e9b550(void)

undefined8 * FUN_140e9b550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e9b610(param_1,uVar1);
  *param_1 = &PTR_FUN_1445e45b0;
  param_1[0x13] = &PTR_LAB_1445e4900;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x204)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x3f,0);
  }
  if ((undefined2 *)param_1[0x3f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x3f] = 0;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 140e9b610 FUN_140e9b610 body=228 status=ok
// SIG undefined FUN_140e9b610(void)

undefined8 * FUN_140e9b610(undefined8 *param_1)

{
  FUN_1407bcd80();
  *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  *param_1 = &PTR_FUN_1440eb7c0;
  param_1[0x13] = &PTR_LAB_1440ebb10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *param_1 = &PTR_FUN_1445e0be0;
  param_1[0x13] = &PTR_LAB_1445e0f30;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return param_1;
}



// FUNCTION 140e9b700 FUN_140e9b700 body=274 status=ok
// SIG undefined FUN_140e9b700(void)

undefined8 * FUN_140e9b700(undefined8 *param_1)

{
  FUN_140e9b610();
  *param_1 = &PTR_FUN_1445e0f48;
  param_1[0x13] = &PTR_LAB_1445e1298;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x204)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x3f,0);
  }
  if ((undefined2 *)param_1[0x3f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x3f] = 0;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x212) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  return param_1;
}



// FUNCTION 140e9b820 FUN_140e9b820 body=162 status=ok
// SIG undefined FUN_140e9b820(void)

undefined8 * FUN_140e9b820(undefined8 *param_1)

{
  FUN_140e9b610();
  *param_1 = &PTR_FUN_1445e4918;
  param_1[0x13] = &PTR_LAB_1445e4c68;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x204)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x3f,0);
  }
  if ((undefined2 *)param_1[0x3f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x3f] = 0;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return param_1;
}



// FUNCTION 140e9b8d0 FUN_140e9b8d0 body=177 status=ok
// SIG undefined FUN_140e9b8d0(void)

undefined8 * FUN_140e9b8d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e9b610(param_1,uVar1);
  *param_1 = &PTR_FUN_1445e4c80;
  param_1[0x13] = &PTR_LAB_1445e4fd0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x204)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x3f,0);
  }
  if ((undefined2 *)param_1[0x3f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x3f] = 0;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 140e9b990 FUN_140e9b990 body=162 status=ok
// SIG undefined FUN_140e9b990(void)

undefined8 * FUN_140e9b990(undefined8 *param_1)

{
  FUN_140e9b610();
  *param_1 = &PTR_FUN_1445e4fe8;
  param_1[0x13] = &PTR_LAB_1445e5338;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x20c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  if ((undefined2 *)param_1[0x40] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x40] = 0;
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 140e9ba40 FUN_140e9ba40 body=100 status=ok
// SIG undefined FUN_140e9ba40(void)

undefined8 * FUN_140e9ba40(undefined8 *param_1)

{
  FUN_140e9b610();
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  *param_1 = &PTR_FUN_1445e5e70;
  param_1[0x13] = &PTR_LAB_1445e61f0;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  return param_1;
}



// FUNCTION 140e9bab0 FUN_140e9bab0 body=176 status=ok
// SIG undefined FUN_140e9bab0(void)

undefined8 * FUN_140e9bab0(undefined8 *param_1)

{
  FUN_140e9b610();
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = &PTR_FUN_1445e6208;
  param_1[0x13] = &PTR_LAB_1445e6588;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 4;
  *(undefined4 *)(param_1 + 0x4d) = 4;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return param_1;
}



// FUNCTION 140e9bb60 FUN_140e9bb60 body=114 status=ok
// SIG undefined FUN_140e9bb60(void)

undefined8 * FUN_140e9bb60(undefined8 *param_1)

{
  FUN_140e9b610();
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = &PTR_FUN_1445e65a0;
  param_1[0x13] = &PTR_LAB_1445e6920;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 140e9bbe0 FUN_140e9bbe0 body=279 status=ok
// SIG undefined FUN_140e9bbe0(void)

undefined8 * FUN_140e9bbe0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_142326e40(param_1,uVar2);
  *param_1 = &PTR_FUN_1445e6938;
  param_1[5] = &PTR_LAB_1445e6d30;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x451c4000;
  *(undefined4 *)(param_1 + 0x39) = 0x451c4000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x451c4000;
  *(undefined4 *)(param_1 + 0x3a) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0x42340000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((longlong)param_1 + 500) = 1;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x204) = 0;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  param_1[0x41] = DAT_1468b5da0;
  uVar1 = DAT_1468b5da8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  return param_1;
}



// FUNCTION 140e9bd00 FUN_140e9bd00 body=166 status=ok
// SIG undefined FUN_140e9bd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e9bd00(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14235ee30();
  *param_1 = &PTR__scalar_deleting_destructor__1445e6d60;
  param_1[5] = &PTR_LAB_1445e7280;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3a83126f;
  param_1[0x3c] = 0x411ccccd;
  *(undefined4 *)(param_1 + 0x3d) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  return param_1;
}



// FUNCTION 140e9bdb0 FUN_140e9bdb0 body=207 status=ok
// SIG undefined FUN_140e9bdb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e9bdb0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14235ee30();
  *param_1 = &PTR__scalar_deleting_destructor__1445e6d60;
  param_1[5] = &PTR_LAB_1445e7280;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3a83126f;
  param_1[0x3c] = 0x411ccccd;
  *(undefined4 *)(param_1 + 0x3d) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar1;
  *param_1 = &PTR__scalar_deleting_destructor__1445e72b0;
  param_1[5] = &PTR_LAB_1445e77d0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x42c80000;
  return param_1;
}



// FUNCTION 140e9be80 FUN_140e9be80 body=33 status=ok
// SIG undefined FUN_140e9be80(void)

undefined8 * FUN_140e9be80(undefined8 *param_1)

{
  UAssetImportData::UAssetImportData();
  *param_1 = &PTR_FUN_1445e8b20;
  return param_1;
}



// FUNCTION 140e9beb0 FUN_140e9beb0 body=166 status=ok
// SIG undefined FUN_140e9beb0(void)

undefined8 * FUN_140e9beb0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445e9760;
  param_1[5] = &PTR_LAB_1445e9b70;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x42200000;
  *(undefined4 *)(param_1 + 0x32) = 0x43fa0000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 140e9bf60 FUN_140e9bf60 body=101 status=ok
// SIG undefined FUN_140e9bf60(void)

void FUN_140e9bf60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xe0);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1e;
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



// FUNCTION 140e9bfd0 FUN_140e9bfd0 body=302 status=ok
// SIG undefined FUN_140e9bfd0(void)

void FUN_140e9bfd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x40);
    do {
      if (plVar7[8] != 0) {
        FMemory::Free();
      }
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar4 = (longlong *)plVar7[-7];
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
      plVar7 = plVar7 + 0x22;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140e9c100 FUN_140e9c100 body=207 status=ok
// SIG undefined FUN_140e9c100(void)

void FUN_140e9c100(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x1d];
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
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140e9c1d0 FUN_140e9c1d0 body=142 status=ok
// SIG undefined FUN_140e9c1d0(void)

void FUN_140e9c1d0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  FUN_140ea8370(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140e9c260 FUN_140e9c260 body=244 status=ok
// SIG undefined FUN_140e9c260(void)

void FUN_140e9c260(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x20;
    do {
      FUN_140591060(lVar2);
      lVar2 = lVar2 + 0x40;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0xb8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 140e9c360 FUN_140e9c360 body=214 status=ok
// SIG undefined FUN_140e9c360(void)

void FUN_140e9c360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140e9c440 FUN_140e9c440 body=419 status=ok
// SIG undefined FUN_140e9c440(void)

void FUN_140e9c440(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x198);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x178);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x168);
  plVar3 = *(longlong **)(param_1 + 0x160);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(uint *)(param_1 + 0x138) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))
              (*(longlong **)(param_1 + 0x130),param_1 + 0x120,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x80);
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x68);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140e9c5f0 FUN_140e9c5f0 body=183 status=ok
// SIG undefined FUN_140e9c5f0(void)

void FUN_140e9c5f0(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x648);
  if (*(char *)(param_1 + 0x5dd) != '\0') {
    *(undefined1 *)(param_1 + 0x5dd) = 0;
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x4d8) = &PTR_FUN_1445e3d48;
  FUN_140e9c6b0(param_1);
  return;
}



// FUNCTION 140e9c6b0 FUN_140e9c6b0 body=187 status=ok
// SIG undefined FUN_140e9c6b0(void)

void FUN_140e9c6b0(longlong param_1)

{
  longlong *plVar1;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c8);
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x438);
  FUN_1428627c0(param_1 + 0x340);
  if (*(int *)(param_1 + 0x330) != 0) {
    plVar1 = *(longlong **)(param_1 + 800);
    if (*(longlong **)(param_1 + 800) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x300);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  FUN_140e9c1d0(param_1 + 0x248);
  FUN_140e9c440(param_1);
  return;
}



// FUNCTION 140e9c770 ~ULevelStreaming body=149 status=ok
// SIG undefined ~ULevelStreaming(void)

void ULevelStreaming::~ULevelStreaming(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140e9c810 FUN_140e9c810 body=181 status=ok
// SIG undefined FUN_140e9c810(void)

void FUN_140e9c810(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  FUN_1407bdf80(param_1 + 0x728);
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440732c8;
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 140e9c8d0 FUN_140e9c8d0 body=344 status=ok
// SIG undefined FUN_140e9c8d0(void)

void FUN_140e9c8d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x188);
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (iVar6 != 0) {
    piVar9 = (int *)(lVar5 + 0x20);
    do {
      if (*(longlong *)(piVar9 + 10) != 0) {
        FMemory::Free();
      }
      iVar7 = piVar9[8];
      lVar5 = *(longlong *)(piVar9 + 6);
      if (iVar7 != 0) {
        do {
          FUN_140a7c7a0(lVar5);
          lVar5 = lVar5 + 0x1c0;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar5 = *(longlong *)(piVar9 + 6);
      }
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
      if (*(longlong *)(piVar9 + 2) != 0) {
        FMemory::Free();
      }
      iVar7 = *piVar9;
      lVar5 = *(longlong *)(piVar9 + -2);
      if (iVar7 != 0) {
        plVar8 = (longlong *)(lVar5 + 0x30);
        do {
          plVar4 = (longlong *)*plVar8;
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
          plVar8 = plVar8 + 7;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar5 = *(longlong *)(piVar9 + -2);
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      piVar9 = piVar9 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x180);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140e9ca30 FUN_140e9ca30 body=548 status=ok
// SIG undefined FUN_140e9ca30(void)

longlong FUN_140e9ca30(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FText::operator=();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FText::operator=(param_1 + 0x20,param_2 + 0x20);
  FText::operator=(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  local_28 = *(undefined8 *)(param_2 + 0x78);
  FString::FString(local_20,param_2 + 0x80);
  FSoftObjectPath::operator=(param_1 + 0x78,&local_28);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  if ((undefined8 *)(param_2 + 0x98) != (undefined8 *)(param_1 + 0x98)) {
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(byte *)(param_1 + 0xc1) =
       *(byte *)(param_1 + 0xc1) ^ (*(byte *)(param_1 + 0xc1) ^ *(byte *)(param_2 + 0xc1)) & 1;
  bVar1 = (*(byte *)(param_2 + 0xc1) ^ *(byte *)(param_1 + 0xc1)) & 2 ^ *(byte *)(param_1 + 0xc1);
  *(byte *)(param_1 + 0xc1) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0xc1)) & 4 ^ bVar1;
  *(byte *)(param_1 + 0xc1) = bVar1;
  *(byte *)(param_1 + 0xc1) = (bVar1 ^ *(byte *)(param_2 + 0xc1)) & 8 ^ bVar1;
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) ^ (*(byte *)(param_1 + 0xd4) ^ *(byte *)(param_2 + 0xd4)) & 1;
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) ^ (*(byte *)(param_2 + 0xd4) ^ *(byte *)(param_1 + 0xd4)) & 2;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  return param_1;
}



// FUNCTION 140e9cc60 FUN_140e9cc60 body=548 status=ok
// SIG undefined FUN_140e9cc60(void)

longlong FUN_140e9cc60(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FText::operator=();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FText::operator=(param_1 + 0x20,param_2 + 0x20);
  FText::operator=(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  local_28 = *(undefined8 *)(param_2 + 0x78);
  FString::FString(local_20,param_2 + 0x80);
  FSoftObjectPath::operator=(param_1 + 0x78,&local_28);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  if ((undefined8 *)(param_2 + 0x98) != (undefined8 *)(param_1 + 0x98)) {
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(byte *)(param_1 + 0xc1) =
       *(byte *)(param_1 + 0xc1) ^ (*(byte *)(param_1 + 0xc1) ^ *(byte *)(param_2 + 0xc1)) & 1;
  bVar1 = (*(byte *)(param_2 + 0xc1) ^ *(byte *)(param_1 + 0xc1)) & 2 ^ *(byte *)(param_1 + 0xc1);
  *(byte *)(param_1 + 0xc1) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0xc1)) & 4 ^ bVar1;
  *(byte *)(param_1 + 0xc1) = bVar1;
  *(byte *)(param_1 + 0xc1) = (bVar1 ^ *(byte *)(param_2 + 0xc1)) & 8 ^ bVar1;
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) ^ (*(byte *)(param_1 + 0xd4) ^ *(byte *)(param_2 + 0xd4)) & 1;
  *(byte *)(param_1 + 0xd4) =
       *(byte *)(param_1 + 0xd4) ^ (*(byte *)(param_2 + 0xd4) ^ *(byte *)(param_1 + 0xd4)) & 2;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  return param_1;
}



// FUNCTION 140e9ce90 FUN_140e9ce90 body=243 status=ok
// SIG undefined FUN_140e9ce90(void)

void FUN_140e9ce90(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar3 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = FUN_140e21bd0(lVar3);
      if (lVar4 != 0) {
        cVar1 = (char)param_1[1];
        if (cVar1 == '\0') {
          uVar5 = FUN_140e21bd0(lVar3);
          FUN_140e37140(uVar5,*(undefined1 *)((longlong)param_1 + 9));
        }
        else {
          if (cVar1 == '\x01') {
            uVar5 = FUN_140e21bd0(lVar3);
            FUN_140e37120(uVar5,*(undefined1 *)((longlong)param_1 + 9));
            return;
          }
          if (cVar1 == '\x02') {
            lVar4 = *param_1;
            uVar5 = FUN_140e21bd0(lVar3);
            FUN_140e36950(uVar5,*(undefined1 *)((longlong)param_1 + 9),
                          *(undefined8 *)(lVar4 + 0x688),*(undefined8 *)(lVar4 + 0x690));
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e9cf90 FUN_140e9cf90 body=467 status=ok
// SIG undefined FUN_140e9cf90(void)

void FUN_140e9cf90(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGbxGFXConnectionWidget::OnConnectionStatusChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar7 = *param_1;
      plVar11 = (longlong *)(lVar6 + 3000);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,lVar7);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar6 + 0xbc0);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_20)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140e9d14a;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0xbc0);
      *(int *)(lVar6 + 0xbc0) = iVar1 + 1;
      if (*(int *)(lVar6 + 0xbc4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_140e9d14a:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 140e9d170 FUN_140e9d170 body=271 status=ok
// SIG undefined FUN_140e9d170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e9d170(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ea5200;
  uVar3 = FUN_1420849a0(uVar1,local_68,local_b8);
  FUN_14208c260(uVar1,uVar3);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e9d280 FUN_140e9d280 body=112 status=ok
// SIG undefined FUN_140e9d280(void)

void FUN_140e9d280(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(lVar2 + 3000,*param_1);
    }
  }
  return;
}



// FUNCTION 140e9d2f0 FUN_140e9d2f0 body=194 status=ok
// SIG undefined FUN_140e9d2f0(void)

void FUN_140e9d2f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = param_2 + 0x13c;
    param_2[0x13b] = *(longlong *)(*param_1 + 0x58);
    plVar3 = (longlong *)(*param_1 + 0x60);
    if (plVar1 != plVar3) {
      iVar2 = *(int *)(*param_1 + 0x68);
      _Src = (void *)*plVar3;
      *(int *)(param_2 + 0x13d) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x9ec) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0x9ec) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 4);
      }
    }
    param_2[0x11c] = *(longlong *)(*param_1 + 0x50);
    if (param_1[1] != 0) {
      (**(code **)(*param_2 + 0x8f0))(param_2,param_1[2]);
    }
  }
  return;
}



// FUNCTION 140e9d3c0 FUN_140e9d3c0 body=269 status=ok
// SIG undefined FUN_140e9d3c0(void)

void FUN_140e9d3c0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_140e9d449;
    }
  }
  bVar2 = false;
LAB_140e9d449:
  if ((bVar2) && (lVar5 = *(longlong *)(*param_1 + 0x38), lVar5 != 0)) {
    lVar6 = AMobActorKuroko::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(int *)(lVar5 + 0x740) == 0) {
        lVar5 = *(longlong *)(lVar5 + 0x7c0);
      }
      else {
        if (*(int *)(lVar5 + 0x740) != 1) {
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x7e8);
      }
      if (lVar5 != 0) {
        FUN_1411f9bb0(lVar5,0xffffffff,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e9d4d0 FUN_140e9d4d0 body=471 status=ok
// SIG undefined FUN_140e9d4d0(void)

void FUN_140e9d4d0(longlong *param_1)

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
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (*(longlong *)(*param_1 + 0x600) != 0) {
    local_res8 = 0;
    local_28 = 0;
    local_20 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    uVar9 = 0;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x1e,"bottomItemCard.itemCardLoader",0x1e,0x3f);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    cVar4 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_28,0,
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
    if (local_28 != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(*param_1 + 0x740) = local_res8;
    if (cVar4 != '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar1 = *(longlong *)(*param_1 + 0x740);
      FWeakObjectPtr::operator=(lVar1 + 0x198);
      *(longlong *)(lVar1 + 0x1a0) = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x198), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1a0));
      }
      FUN_140f70290(*(undefined8 *)(*param_1 + 0x740),*(undefined8 *)(*param_1 + 0x928));
    }
  }
  return;
}



// FUNCTION 140e9d6b0 FUN_140e9d6b0 body=380 status=ok
// SIG undefined FUN_140e9d6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e9d6b0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_res10 = param_2;
  local_88 = FWeakObjectPtr::Get(*param_1 + 0x5d4);
  if (local_88 != 0) {
    lVar2 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(local_88 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_88 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e9d72e;
  }
  local_88 = 0;
LAB_140e9d72e:
  local_80 = *param_1;
  uStack_78 = &local_88;
  local_70 = &local_res10;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_80._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_78._4_4_;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = local_70;
  }
  local_68[0] = FUN_140ea5250;
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x7e8) != 0) {
    FUN_1411e02a0(*(longlong *)(lVar2 + 0x7e8),local_68);
    lVar2 = *param_1;
  }
  if (*(longlong *)(lVar2 + 0x7c0) != 0) {
    FUN_1411e02a0(*(longlong *)(lVar2 + 0x7c0),local_68);
  }
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e9d830 FUN_140e9d830 body=248 status=ok
// SIG undefined FUN_140e9d830(void)

ulonglong FUN_140e9d830(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  plVar4 = *(longlong **)(param_2 + 0x118);
  param_1 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    plVar1 = plVar7 + iVar3;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((longlong *)*plVar7 == plVar4) goto LAB_140e9d8e4;
    }
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
    }
    *(longlong **)((longlong)iVar3 * 8 + *param_1) = plVar4;
    uVar5 = FUN_141477fa0();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if ((lVar6 != 0) && (lVar6 != param_1[4])) {
      iVar3 = (int)param_1[3];
      *(int *)(param_1 + 3) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar3);
      }
      *(longlong **)(param_1[2] + (longlong)iVar3 * 8) = plVar4;
    }
LAB_140e9d8e4:
    puVar8 = (undefined8 *)param_1[2];
    in_RAX = (ulonglong)(int)param_1[3];
    puVar2 = puVar8 + in_RAX;
    while( true ) {
      if (puVar8 == puVar2) {
        return CONCAT71((int7)(int3)((uint)(int)param_1[3] >> 8),1);
      }
      if ((longlong *)*puVar8 == plVar4) break;
      puVar8 = puVar8 + 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e9d930 FUN_140e9d930 body=155 status=ok
// SIG undefined FUN_140e9d930(void)

longlong FUN_140e9d930(longlong param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_2 + 0x88);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x8c) < iVar3 + iVar1) {
      FUN_1407418a0();
      iVar3 = *(int *)(param_1 + 0x88);
    }
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar3 * 8),_Src,(longlong)iVar1 << 3);
    *(undefined4 *)((longlong)param_2 + 0x88) = 0;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + iVar1;
  }
  return param_1;
}



// FUNCTION 140e9db90 FUN_140e9db90 body=141 status=ok
// SIG undefined FUN_140e9db90(void)

longlong FUN_140e9db90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d8);
  }
  return param_1;
}



// FUNCTION 140e9dc20 FUN_140e9dc20 body=168 status=ok
// SIG undefined FUN_140e9dc20(void)

longlong FUN_140e9dc20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    if (*(longlong *)(param_1 + 0x490) == 0) {
      **(longlong **)(param_1 + 0x498) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x498) = *(longlong *)(param_1 + 0x490);
      *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 8) = *(undefined8 *)(param_1 + 0x498);
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 140e9dcd0 FUN_140e9dcd0 body=90 status=ok
// SIG undefined FUN_140e9dcd0(void)

longlong FUN_140e9dcd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 140e9dd30 FUN_140e9dd30 body=124 status=ok
// SIG undefined FUN_140e9dd30(void)

longlong FUN_140e9dd30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 140e9ddb0 FUN_140e9ddb0 body=73 status=ok
// SIG undefined FUN_140e9ddb0(void)

longlong FUN_140e9ddb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  FUN_1407731b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x570);
  }
  return param_1;
}



// FUNCTION 140e9de00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UControlRig::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e6b470();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x658);
  }
  return param_1;
}



// FUNCTION 140e9de40 FUN_140e9de40 body=90 status=ok
// SIG undefined FUN_140e9de40(void)

longlong FUN_140e9de40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 140e9dea0 FUN_140e9dea0 body=136 status=ok
// SIG undefined FUN_140e9dea0(void)

longlong FUN_140e9dea0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x500) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_144194f88;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 140e9df30 FUN_140e9df30 body=43 status=ok
// SIG undefined FUN_140e9df30(void)

undefined8 * FUN_140e9df30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1445e3d48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140e9df60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UBeamMode::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 140e9dfa0 FUN_140e9dfa0 body=249 status=ok
// SIG undefined FUN_140e9dfa0(void)

longlong FUN_140e9dfa0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FMemory::Free();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x930);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x900);
  FUN_140ed0430(param_1 + 0x758);
  FUN_140e9bfd0(param_1 + 0x728);
  plVar3 = *(longlong **)(param_1 + 0x720);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x708);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x6f0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 140e9e0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 140e9e0e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TRigidParticles<float,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c6b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 140e9e120 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ULevelStreaming::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~ULevelStreaming();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140e9e160 FUN_140e9e160 body=98 status=ok
// SIG undefined FUN_140e9e160(void)

longlong FUN_140e9e160(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}


