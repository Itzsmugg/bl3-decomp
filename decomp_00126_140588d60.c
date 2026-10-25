// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140588d60 FUN_140588d60 body=1092 status=ok
// SIG undefined FUN_140588d60(void)

undefined4 FUN_140588d60(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  
  local_res10[0] = 0;
  if ((((param_2 == '\x01') && ((int)param_3[3] < 2)) && ((int)param_3[1] < 2)) &&
     (((int)param_3[5] < 2 && ((char)param_3[6] == '\0')))) {
    if (param_3[4] != 0) {
      FMemory::Free();
    }
    if (param_3[2] != 0) {
      FMemory::Free();
    }
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return 0x3f0;
  }
  *(char *)(param_1 + 0x2c0) = param_2;
  bVar14 = param_2 != '\x01';
  if (bVar14) {
    plVar12 = &local_c8;
    local_88 = 0x3ff0000000000000;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0xa8c;
    local_8c = 0x5a;
    local_80 = 0;
    local_98[0] = 0;
  }
  else {
    FString::FString(local_78,param_3);
    FString::FString(local_68,param_3 + 2);
    FString::FString(local_58,param_3 + 4);
    local_40 = (undefined4)param_3[7];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0x3c);
    uStack_38 = (undefined4)param_3[8];
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x44);
    local_48 = (undefined1)param_3[6];
    plVar12 = local_78;
    local_30 = param_3[9];
  }
  FString::operator=(param_1 + 0x2c8,plVar12);
  FString::operator=(param_1 + 0x2d8,plVar12 + 2);
  FString::operator=(param_1 + 0x2e8,plVar12 + 4);
  lVar3 = plVar12[9];
  *(char *)(param_1 + 0x2f8) = (char)plVar12[6];
  uVar8 = *(undefined4 *)((longlong)plVar12 + 0x3c);
  lVar6 = plVar12[8];
  uVar5 = *(undefined4 *)((longlong)plVar12 + 0x44);
  *(int *)(param_1 + 0x300) = (int)plVar12[7];
  *(undefined4 *)(param_1 + 0x304) = uVar8;
  *(int *)(param_1 + 0x308) = (int)lVar6;
  *(undefined4 *)(param_1 + 0x30c) = uVar5;
  *(longlong *)(param_1 + 0x310) = lVar3;
  if (bVar14) {
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  if (!bVar14) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_14056bd00(param_1 + 0x100,&local_d8);
  puVar13 = local_d8 + (longlong)(int)local_d0 * 2;
  puVar11 = local_d8;
  do {
    if (puVar11 == puVar13) {
LAB_140588fe8:
      if ((int)local_d0 != 0) {
        plVar12 = local_d8 + 1;
        iVar10 = (int)local_d0;
        do {
          plVar4 = (longlong *)*plVar12;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar9 = (int *)((longlong)plVar4 + 0xc);
              iVar2 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (local_d8 != (undefined8 *)0x0) {
        FMemory::Free(local_d8);
      }
      if (param_3[4] != 0) {
        FMemory::Free();
      }
      if (param_3[2] != 0) {
        FMemory::Free();
      }
      if (*param_3 != 0) {
        FMemory::Free();
      }
      return 0;
    }
    plVar12 = (longlong *)puVar11[1];
    plVar4 = (longlong *)*puVar11;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    cVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((cVar7 != '\0') || (cVar7 = (**(code **)(*plVar4 + 0x18))(plVar4), cVar7 != '\0')) {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar10 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if ((*(char *)(param_1 + 0x2c0) != '\x01') ||
         (piVar9 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                          ::FindId(param_1 + 0x100,local_res10,param_1 + 0x2c8), *piVar9 != -1)) {
        uVar8 = FUN_140588ac0(param_1);
        if ((int)local_d0 != 0) {
          plVar12 = local_d8 + 1;
          iVar10 = (int)local_d0;
          do {
            plVar4 = (longlong *)*plVar12;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar9 = (int *)((longlong)plVar4 + 0xc);
                iVar2 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar12 = plVar12 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (local_d8 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        if (param_3[4] != 0) {
          FMemory::Free();
        }
        if (param_3[2] != 0) {
          FMemory::Free();
        }
        if (*param_3 == 0) {
          return uVar8;
        }
        FMemory::Free();
        return uVar8;
      }
      goto LAB_140588fe8;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar12 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar9 = (int *)((longlong)plVar12 + 0xc);
        iVar10 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    puVar11 = puVar11 + 2;
  } while( true );
}



// FUNCTION 1405891b0 FUN_1405891b0 body=254 status=ok
// SIG undefined FUN_1405891b0(void)

undefined8 FUN_1405891b0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0x16d) == '\0') {
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar1 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar1 != (undefined8 *)0x0)) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      DAT_1468535b8 = puVar1;
    }
    puVar1 = DAT_1468535b8;
    if (100 < param_2 + 0x32U) {
      return 0x3f0;
    }
    _guard_xfg_dispatch_icall_nop(&local_res8);
  }
  else {
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar1 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar1 != (undefined8 *)0x0)) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      DAT_1468535b8 = puVar1;
    }
    puVar1 = DAT_1468535b8;
    if (100 < param_2 + 0x32U) {
      return 0x3f0;
    }
    _guard_xfg_dispatch_icall_nop(&local_res8);
  }
  local_28 = 0;
  local_20 = 0;
  *(int *)(local_res8 + 0x30) = param_2 + 0x32;
  uVar2 = FUN_140584410(puVar1,local_res8,&local_28);
  if ((int)uVar2 == 0) {
    *(int *)(param_1 + 0x168) = param_2;
  }
  return uVar2;
}



// FUNCTION 1405892b0 FUN_1405892b0 body=441 status=ok
// SIG undefined FUN_1405892b0(void)

/* WARNING: Removing unreachable block (ram,0x0001405893ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405892b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  plVar2 = (longlong *)FUN_141593110();
  puVar3 = (undefined8 *)FName::FName(local_res8,L"VivoxVoice",1);
  lVar4 = param_1 + 8;
  if (param_1 + -0x10 == 0) {
    lVar4 = 0;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,*puVar3,lVar4);
  iStack_10 = 0;
  local_18 = AK::MemoryMgr::StartProfileThreadUsage;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1 + -0x10;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
    *(int *)(plVar2 + 3) = iStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar4;
    local_18 = (code *)0x0;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
    iStack_10 = 0;
    FUN_1405406c0(plVar2,&local_18);
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357d8,1);
    if ((iStack_10 != 0) && (local_18 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_18 + 0x20))(local_18,local_res8);
    }
    iVar1 = DAT_1465357e0;
    lVar4 = (longlong)DAT_1465357e0;
    DAT_1465357e0 = DAT_1465357e0 + 1;
    if (DAT_1465357e4 < DAT_1465357e0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357d8,iVar1);
    }
    puVar3 = (undefined8 *)(lVar4 * 0x10 + _DAT_1465357d8);
    *puVar3 = 0;
    *puVar3 = local_18;
    local_18 = (code *)0x0;
    *(int *)(puVar3 + 1) = iStack_10;
    iStack_10 = 0;
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar4 = FMemory::Realloc(plVar2,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 140589470 FUN_140589470 body=757 status=ok
// SIG undefined FUN_140589470(void)

int FUN_140589470(longlong *param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  local_res8[0] = 0;
  lVar2 = param_1[10];
  local_res10 = param_2;
  if ((*(char *)(lVar2 + 0x4a0) == '\0') &&
     (iVar4 = _guard_xfg_dispatch_icall_nop(0,lVar2 + 0x4a4), iVar4 == 0)) {
    *(undefined1 *)(lVar2 + 0x4a0) = 1;
  }
  lVar2 = param_1[10];
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
  bVar1 = *(byte *)param_3;
  puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6);
  uVar8 = vx_fstrdup(local_res10);
  iVar4 = _guard_xfg_dispatch_icall_nop
                    (*(undefined4 *)(lVar2 + 0x4a4),*puVar7,uVar8,bVar1,local_res8);
  if ((iVar4 == 0) || (iVar4 == -0x3ee)) {
    plVar9 = (longlong *)operator_new(0x48);
    bVar12 = plVar9 == (longlong *)0x0;
    if (bVar12) {
      plVar9 = (longlong *)0x0;
    }
    else {
      local_58 = &PTR__scalar_deleting_destructor__143fc44d0;
      local_50 = (undefined8 **)0x0;
      local_48 = 0;
      uVar8 = (**(code **)(*plVar6 + 8))(plVar6);
      FString::operator=(&local_50,uVar8);
      puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6);
      local_3c = 1 < (int)local_48;
      local_40 = *puVar7;
      *plVar9 = (longlong)&PTR__scalar_deleting_destructor__143fc44f0;
      plVar9[1] = (longlong)&PTR__scalar_deleting_destructor__143fc44d0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      *(undefined1 *)((longlong)plVar9 + 0x24) = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      FString::operator=(plVar9 + 2,&local_50);
      *(undefined4 *)(plVar9 + 4) = local_40;
      *(undefined1 *)((longlong)plVar9 + 0x24) = local_3c;
      FString::operator=(plVar9 + 5,local_res10);
      *(byte *)(plVar9 + 7) = *(byte *)param_3;
      *(undefined4 *)((longlong)plVar9 + 0x3c) = local_res8[0];
      *(bool *)(plVar9 + 8) = iVar4 == -0x3ee;
      *(undefined1 *)((longlong)plVar9 + 0x41) = 1;
    }
    if ((!bVar12) && (local_50 != (undefined8 **)0x0)) {
      FMemory::Free();
    }
    if ((plVar9 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar9 + 0x30))(plVar9), cVar3 != '\0')) {
      if ((int)param_1[0x1c] != *(int *)((longlong)param_1 + 0x10c)) {
        plVar6 = (longlong *)param_1[0x23];
        if ((longlong *)param_1[0x23] == (longlong *)0x0) {
          plVar6 = param_1 + 0x22;
        }
        iVar5 = *(int *)((longlong)plVar6 +
                        ((longlong)(int)param_1[0x24] - 1U & (ulonglong)*(byte *)param_3) * 4);
        if (iVar5 != -1) {
          do {
            pbVar10 = (byte *)((longlong)iVar5 * 0x20 + param_1[0x1b]);
            if (*pbVar10 == *(byte *)param_3) {
              if (iVar5 != -1) goto LAB_1405896c1;
              break;
            }
            iVar5 = *(int *)(pbVar10 + 0x18);
          } while (iVar5 != -1);
        }
      }
      pbVar10 = (byte *)0x0;
LAB_1405896c1:
      pbVar11 = pbVar10 + 8;
      if (pbVar10 == (byte *)0x0) {
        pbVar11 = (byte *)0x0;
      }
      if (pbVar11 == (byte *)0x0) {
        local_68 = (undefined8 *)0x0;
        local_60 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,0);
        *local_68 = plVar9;
        local_50 = &local_68;
        local_58 = param_3;
        FUN_14056ba80(param_1 + 0x1b,local_res8,&local_58,0);
        if (local_68 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        iVar5 = *(int *)(pbVar11 + 8);
        *(int *)(pbVar11 + 8) = iVar5 + 1;
        if (*(int *)(pbVar11 + 0xc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pbVar11,iVar5);
        }
        *(longlong **)(*(longlong *)pbVar11 + (longlong)iVar5 * 8) = plVar9;
      }
    }
  }
  else {
    plVar9 = (longlong *)0x0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = plVar9;
  }
  return iVar4;
}



// FUNCTION 140589770 FUN_140589770 body=274 status=ok
// SIG undefined FUN_140589770(void)

ulonglong FUN_140589770(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  lVar1 = param_1[10];
  if (*(char *)(lVar1 + 0x4a0) == '\0') {
    iVar2 = _guard_xfg_dispatch_icall_nop(0,lVar1 + 0x4a4);
    if (iVar2 == 0) {
      *(undefined1 *)(lVar1 + 0x4a0) = 1;
    }
  }
  lVar1 = param_1[10];
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
  puVar4 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3);
  uVar5 = vx_fstrdup(param_2);
  uVar6 = _guard_xfg_dispatch_icall_nop(*(undefined4 *)(lVar1 + 0x4a4),*puVar4,uVar5,&local_res8);
  if ((int)uVar6 == 0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    if (puVar7 == (undefined8 *)0x0) {
      *param_3 = 0;
      uVar6 = uVar6 & 0xffffffff;
    }
    else {
      *puVar7 = &PTR__scalar_deleting_destructor__143fc4900;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar1 + 0x4a4);
      puVar7[2] = local_res8;
      *param_3 = puVar7;
      uVar6 = uVar6 & 0xffffffff;
    }
  }
  else {
    *param_3 = 0;
  }
  return uVar6;
}



// FUNCTION 1405898b0 FUN_1405898b0 body=433 status=ok
// SIG undefined FUN_1405898b0(void)

/* WARNING: Removing unreachable block (ram,0x0001405899e0) */

void FUN_1405898b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  lVar5 = param_1 + -0x10;
  lVar2 = FUN_1405844b0(lVar5,L"vivoxsdk.dll");
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    local_28 = AK::MemoryMgr::StartProfileThreadUsage;
    iStack_20 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = lVar5;
      *plVar3 = (longlong)&PTR_GetPoolName_143fc1ab0;
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_28._4_4_;
      *(int *)(plVar3 + 3) = iStack_20;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      local_28 = (code *)0x0;
      *plVar3 = (longlong)&PTR_GetPoolName_143fc1af8;
      iStack_20 = 0;
      FUN_140540670(plVar3,&local_28);
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535760,1);
      if ((iStack_20 != 0) && (local_28 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_28 + 0x20))(local_28,local_res8);
      }
      iVar1 = DAT_146535768;
      lVar2 = (longlong)DAT_146535768;
      DAT_146535768 = DAT_146535768 + 1;
      if (DAT_14653576c < DAT_146535768) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535760,iVar1);
      }
      puVar6 = (undefined8 *)(lVar2 * 0x10 + DAT_146535760);
      *puVar6 = 0;
      *puVar6 = local_28;
      local_28 = (code *)0x0;
      *(int *)(puVar6 + 1) = iStack_20;
      iStack_20 = 0;
    }
    plVar4 = (longlong *)FUN_141593110();
    lVar2 = *plVar4;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"VivoxVoice",1);
    lVar7 = param_1 + 8;
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    (**(code **)(lVar2 + 0x18))(plVar4,*puVar6,lVar7);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 140589a80 FUN_140589a80 body=251 status=ok
// SIG undefined FUN_140589a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140589a80(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar3 = (undefined8 *)0x0;
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar3, puVar1 != (undefined8 *)0x0
     )) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 2;
    DAT_1468535b8 = puVar1;
  }
  puVar1 = DAT_1468535b8;
  _guard_xfg_dispatch_icall_nop(local_d8);
  *(undefined4 *)(local_d8[0] + 0x30) = 0;
  if (1 < *(int *)(param_1 + 0xf8)) {
    lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,*(undefined8 *)(param_1 + 0xf0));
    puVar3 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar2 + 0x88));
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  local_d8[1] = 0;
  local_c8 = 0;
  *(undefined8 **)(local_d8[0] + 0x38) = puVar3;
  FUN_140584410(puVar1,local_d8[0],local_d8 + 1);
  return;
}



// FUNCTION 140589b80 FUN_140589b80 body=5 status=ok
// SIG undefined FUN_140589b80(void)

longlong FUN_140589b80(longlong param_1)

{
  return param_1 + 0x50;
}



// FUNCTION 140589b90 GetSampleCounter body=5 status=ok
// SIG undefined GetSampleCounter(void)

undefined8 FVoicePacketImpl::GetSampleCounter(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 140589bc0 FUN_140589bc0 body=594 status=ok
// SIG undefined FUN_140589bc0(void)

void FUN_140589bc0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0x4a0) != '\0') {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x4a4);
    uStack_84 = 1;
    plVar1 = (longlong *)(param_1 + 0x10);
    local_88 = 0;
    uVar3 = *(uint *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x20);
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar4 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar9 = local_88 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar9;
        if (bVar5) goto LAB_140589cbb;
        uVar4 = puVar11[lVar8 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
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
      uStack_74 = (iStack_70 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140589cbb:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar4 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar2;
    local_40 = plVar1;
    puStack_30 = puVar2;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar4;
    if (uVar4 != uVar3) {
      puVar11 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_140589d83;
        uVar7 = puVar11[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar9 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_74 = (uVar10 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140589d83:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
      uVar6 = (**(code **)(**(longlong **)((longlong)(int)uStack_4c * 0x78 + 0x60 + *plVar1) + 0x110
                          ))();
      FUN_14057af50(uVar6);
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
    *(undefined1 *)(param_1 + 0x4a0) = 0;
  }
  return;
}



// FUNCTION 140589e30 FUN_140589e30 body=107 status=ok
// SIG undefined FUN_140589e30(void)

void FUN_140589e30(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(char *)(*(longlong *)(param_1 + 0x28) + 8) != '\0')
     ) {
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)operator_new();
      if (DAT_1468535b8 != (undefined8 *)0x0) {
        *DAT_1468535b8 = 0;
        DAT_1468535b8[1] = 0;
        DAT_1468535b8[2] = 2;
        FUN_140589ea0(DAT_1468535b8);
        return;
      }
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    FUN_140589ea0(DAT_1468535b8);
    return;
  }
  return;
}



// FUNCTION 140589ea0 FUN_140589ea0 body=352 status=ok
// SIG undefined FUN_140589ea0(void)

void FUN_140589ea0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res10;
  
  plVar11 = (longlong *)0x0;
  local_res10 = (longlong *)0x0;
  _guard_xfg_dispatch_icall_nop(&local_res10);
  plVar3 = local_res10;
  do {
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    plVar10 = plVar11;
    local_res10 = plVar3;
    if (plVar3 == (longlong *)0x0) {
LAB_140589f66:
      plVar1 = *(longlong **)(plVar10[6] + 0x28);
      if (plVar1 != (longlong *)0x0) {
        if ((((int)plVar1[1] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar4 != '\0')) {
          plVar7 = plVar11;
          if ((int)plVar1[1] != 0) {
            plVar7 = (longlong *)*plVar1;
          }
          (**(code **)(*plVar7 + 0x40))(plVar7,plVar10);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar1);
        FMemory::operator_delete(plVar1,0x10);
      }
    }
    else {
      if ((int)*plVar3 != 3) {
        if ((int)*plVar3 == 2) {
          plVar10 = plVar3;
        }
        goto LAB_140589f66;
      }
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
      bVar2 = false;
      iVar6 = *(int *)((longlong)param_1 + 0x14);
      iVar5 = (int)param_1[1] + -1;
      lVar9 = (longlong)iVar5;
      if (-1 < iVar5) {
        lVar8 = lVar9 << 4;
        do {
          if (((*(int *)(lVar8 + 8 + *param_1) == 0) ||
              (plVar10 = *(longlong **)(lVar8 + *param_1), plVar10 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar10 + 0x40))(plVar10,plVar3), cVar4 == '\0')) {
            bVar2 = true;
          }
          lVar8 = lVar8 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        iVar6 = *(int *)((longlong)param_1 + 0x14);
      }
      *(int *)((longlong)param_1 + 0x14) = iVar6 + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
      }
    }
    _guard_xfg_dispatch_icall_nop(plVar3);
    local_res10 = (longlong *)0x0;
    _guard_xfg_dispatch_icall_nop(&local_res10);
    plVar3 = local_res10;
  } while( true );
}



// FUNCTION 14058a000 ToString body=1699 status=ok
// SIG undefined ToString(void)

longlong * AccountId::ToString(undefined8 *param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  void *local_res8;
  void *local_res18;
  void *local_res20;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  uint local_88;
  int local_84;
  void *local_80;
  uint local_78;
  int iStack_74;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  uint local_58;
  int iStack_54;
  
  if (((*(int *)(param_1 + 5) < 2) && (*(int *)(param_1 + 3) < 2)) && (*(int *)(param_1 + 1) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  iVar4 = 0;
  local_70 = (void *)0x0;
  local_68 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
  local_98 = local_70;
  FGenericPlatformString::Convert<char,wchar_t>(local_70,3,&DAT_143fc342c,3,0x3f);
  local_80 = (void *)0x0;
  local_78 = 2;
  iStack_74 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
  local_res18 = local_80;
  local_a0 = local_80;
  FGenericPlatformString::Convert<char,wchar_t>(local_80,2,&DAT_143fc34dc,2,0x3f);
  local_60 = (void *)0x0;
  local_58 = 6;
  iStack_54 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  pvVar7 = local_60;
  local_a8 = local_60;
  FGenericPlatformString::Convert<char,wchar_t>(local_60,6,"sip:.",6,0x3f);
  uVar9 = *(uint *)(param_1 + 5);
  if ((int)local_58 < 2) {
    pvVar7 = (void *)param_1[4];
    local_res20 = (void *)0x0;
    local_60 = (void *)0x0;
    local_58 = uVar9;
    if (uVar9 == 0) {
      iVar1 = 0;
      uVar6 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,uVar9,0);
      local_res20 = local_60;
      ::_guard_xfg_dispatch_icall_nop(local_60,pvVar7,(longlong)(int)uVar9 * 2);
      iVar1 = iStack_54;
      uVar6 = local_58;
    }
  }
  else {
    iVar3 = uVar9 - 1;
    if (uVar9 == 0) {
      iVar3 = iVar4;
    }
    if ((local_58 != 0) || (iVar1 = 1, iVar3 == 0)) {
      iVar1 = iVar4;
    }
    local_90 = pvVar7;
    local_a8 = (void *)0x0;
    local_88 = local_58;
    local_84 = iStack_54;
    if (iStack_54 < (int)(iVar3 + local_58 + iVar1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90);
    }
    uVar9 = local_88;
    pvVar7 = (void *)param_1[4];
    iVar1 = local_84;
    local_res20 = local_90;
    uVar6 = local_88;
    if (iVar3 != 0) {
      lVar5 = (longlong)(int)local_88;
      local_88 = local_88 + (local_88 == 0) + iVar3;
      if (local_84 < (int)local_88) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar9);
      }
      iVar1 = local_84;
      uVar6 = local_88;
      local_res20 = local_90;
      pvVar8 = (void *)((longlong)local_90 + (lVar5 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar8,pvVar7,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar8) = 0;
      local_res18 = local_80;
    }
  }
  pvVar7 = local_res20;
  if ((int)uVar6 < 2) {
    local_a0 = (void *)0x0;
    uVar6 = local_78;
    iVar1 = iStack_74;
  }
  else {
    iVar3 = iVar4;
    if (local_78 != 0) {
      iVar3 = local_78 - 1;
    }
    if ((uVar6 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = 0;
    }
    local_res20 = (void *)0x0;
    iVar2 = iVar2 + uVar6 + iVar3;
    local_90 = pvVar7;
    local_88 = uVar6;
    local_84 = iVar1;
    if (iVar1 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,iVar2);
    }
    uVar9 = local_88;
    uVar6 = local_88;
    iVar1 = local_84;
    local_res18 = local_90;
    if (iVar3 != 0) {
      lVar5 = (longlong)(int)local_88;
      local_88 = local_88 + (local_88 == 0) + iVar3;
      if (local_84 < (int)local_88) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar9);
      }
      iVar1 = local_84;
      uVar6 = local_88;
      local_res18 = local_90;
      pvVar7 = (void *)((longlong)local_90 + (lVar5 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar7,local_80,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar7) = 0;
    }
  }
  pvVar7 = local_res18;
  uVar9 = *(uint *)(param_1 + 3);
  if ((int)uVar6 < 2) {
    pvVar7 = (void *)param_1[2];
    local_res8 = (void *)0x0;
    local_60 = (void *)0x0;
    local_58 = uVar9;
    if (uVar9 == 0) {
      uVar10 = 0;
      iVar1 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,uVar9,0);
      local_res8 = local_60;
      ::_guard_xfg_dispatch_icall_nop(local_60,pvVar7,(longlong)(int)uVar9 * 2);
      uVar10 = (ulonglong)local_58;
      iVar1 = iStack_54;
    }
  }
  else {
    iVar3 = uVar9 - 1;
    if (uVar9 == 0) {
      iVar3 = iVar4;
    }
    if ((uVar6 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = iVar4;
    }
    local_res18 = (void *)0x0;
    local_80 = pvVar7;
    local_78 = uVar6;
    iStack_74 = iVar1;
    if (iVar1 < (int)(iVar3 + iVar2 + uVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
    }
    uVar9 = local_78;
    uVar10 = (ulonglong)local_78;
    local_90 = (void *)param_1[2];
    iVar1 = iStack_74;
    local_res8 = local_80;
    if (iVar3 != 0) {
      lVar5 = (longlong)(int)local_78;
      local_78 = local_78 + (local_78 == 0) + iVar3;
      if (iStack_74 < (int)local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar10);
      }
      iVar1 = iStack_74;
      local_res8 = local_80;
      uVar10 = (ulonglong)local_78;
      pvVar7 = (void *)((longlong)local_80 + (lVar5 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar7,local_90,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)pvVar7 + (longlong)iVar3 * 2) = 0;
    }
  }
  pvVar7 = local_res8;
  uVar9 = (uint)uVar10;
  if ((int)uVar9 < 2) {
    uVar10 = local_68 & 0xffffffff;
    local_98 = (void *)0x0;
    pvVar7 = local_70;
    iVar1 = local_68._4_4_;
  }
  else {
    iVar3 = iVar4;
    if ((int)local_68 != 0) {
      iVar3 = (int)local_68 + -1;
    }
    if ((uVar9 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = iVar4;
    }
    local_res8 = (void *)0x0;
    local_80 = pvVar7;
    local_78 = uVar9;
    iStack_74 = iVar1;
    if (iVar1 < (int)(uVar9 + iVar3 + iVar2)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
      uVar10 = (ulonglong)local_78;
    }
    pvVar7 = local_80;
    iVar1 = iStack_74;
    if (iVar3 != 0) {
      iVar2 = (int)uVar10;
      local_78 = iVar2 + (uint)(iVar2 == 0) + iVar3;
      if (iStack_74 < (int)local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar10);
      }
      iVar1 = iStack_74;
      pvVar7 = local_80;
      uVar10 = (ulonglong)local_78;
      pvVar8 = (void *)((longlong)local_80 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar8,local_70,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)pvVar8 + (longlong)iVar3 * 2) = 0;
    }
  }
  uVar9 = (uint)uVar10;
  if ((int)uVar9 < 2) {
    FString::FString(param_2,param_1);
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar3 = 0;
    }
    if ((uVar9 != 0) || (iVar2 = 1, iVar3 == 0)) {
      iVar2 = iVar4;
    }
    local_80 = pvVar7;
    local_78 = uVar9;
    iStack_74 = iVar1;
    if (iVar1 < (int)(iVar3 + uVar9 + iVar2)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
      uVar10 = (ulonglong)local_78;
    }
    uVar6 = (uint)uVar10;
    pvVar7 = (void *)*param_1;
    pvVar8 = local_80;
    uVar9 = uVar6;
    iVar4 = iStack_74;
    if (iVar3 != 0) {
      local_78 = iVar3 + (uint)(uVar6 == 0) + uVar6;
      if (iStack_74 < (int)local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar10);
      }
      iVar4 = iStack_74;
      uVar9 = local_78;
      pvVar8 = local_80;
      _Dst = (void *)((longlong)local_80 + ((longlong)(int)uVar6 - (ulonglong)(uVar6 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar7,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar3 * 2) = 0;
    }
    *param_2 = (longlong)pvVar8;
    *(uint *)(param_2 + 1) = uVar9;
    *(int *)((longlong)param_2 + 0xc) = iVar4;
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_res18 != (void *)0x0) {
    FMemory::Free(local_res18);
  }
  if (local_res20 != (void *)0x0) {
    FMemory::Free(local_res20);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return param_2;
}



// FUNCTION 14058a6b0 FUN_14058a6b0 body=2807 status=ok
// SIG undefined FUN_14058a6b0(void)

ulonglong * FUN_14058a6b0(undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void **ppvVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  char *pcVar14;
  void *pvVar15;
  void *pvVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  void *local_res18;
  void *local_res20;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  uint local_c0;
  uint local_bc;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  uint local_a0;
  uint local_9c;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  void **local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  
  pvVar8 = (void *)0x0;
  if ((((*(int *)(param_1 + 3) < 2) && (*(int *)(param_1 + 1) < 2)) && (*(int *)(param_1 + 5) < 2))
     && (*(char *)(param_1 + 6) == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  cVar1 = *(char *)(param_1 + 6);
  local_88 = (void *)0x0;
  local_70 = (void *)0x0;
  if (cVar1 == '\0') {
    local_d8 = (void *)0x0;
    local_d0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    pcVar14 = "sip:confctl-g-";
LAB_14058a842:
    local_88 = local_d8;
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,0xf,pcVar14,0xf,0x3f);
    local_d8 = pvVar8;
    uVar10 = (uint)local_d0;
  }
  else {
    if (cVar1 != '\x01') {
      pvVar13 = pvVar8;
      pvVar16 = pvVar8;
      if (cVar1 != '\x02') goto LAB_14058a869;
      local_d8 = (void *)0x0;
      local_d0 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      pcVar14 = "sip:confctl-e-";
      goto LAB_14058a842;
    }
    local_d8 = (void *)0x0;
    local_d0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    local_88 = local_d8;
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,0xf,"sip:confctl-d-",0xf,0x3f);
    uVar10 = (uint)local_d0;
    FString::PrintfImpl(&local_68,L"p-%d-%d-%.3f-%d",*(undefined4 *)(param_1 + 7),
                        *(undefined4 *)((longlong)param_1 + 0x3c),param_1[8],
                        *(byte *)(param_1 + 9) + 1);
    FString::Replace(&local_68,&local_d8,&DAT_143fc362c,&DAT_143fc357c,1);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    pvVar8 = (void *)(local_d0 & 0xffffffff);
    local_70 = local_d8;
  }
  pvVar13 = (void *)(ulonglong)uVar10;
  pvVar16 = local_d8;
LAB_14058a869:
  local_d8 = (void *)0x0;
  local_d0 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  local_58 = local_d8;
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,2,&DAT_143fc2a3c,2,0x3f);
  iVar7 = (int)pvVar8;
  iVar18 = 1;
  if (iVar7 < 2) {
    local_80 = &local_68;
    local_78 = local_b8;
    local_res18 = local_b8;
    local_68 = (void *)0x0;
    local_60 = 0;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
  }
  else {
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    local_78 = local_b8;
    FGenericPlatformString::Convert<char,wchar_t>(local_b8,2,&DAT_143fc2afc,2,0x3f);
    if ((int)local_b0 < 2) {
      local_b0 = (void *)CONCAT44(local_b0._4_4_,iVar7);
      local_res18 = (void *)0x0;
      local_b8 = (void *)0x0;
      if (iVar7 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,pvVar8,0);
        local_res18 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar16,(longlong)iVar7 * 2);
        pvVar8 = local_b0;
      }
    }
    else {
      iVar2 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      if (((int)local_b0 != 0) || (iVar2 == 0)) {
        iVar18 = 0;
      }
      local_98 = local_b8;
      local_78 = (void *)0x0;
      local_90 = (int)local_b0;
      local_8c = local_b0._4_4_;
      if (local_b0._4_4_ < iVar18 + (int)local_b0 + iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      }
      iVar18 = local_90;
      iVar7 = local_90;
      iVar17 = local_8c;
      local_res18 = local_98;
      if (iVar2 != 0) {
        lVar19 = (longlong)local_90;
        local_90 = local_90 + (uint)(local_90 == 0) + iVar2;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar18,local_98,0);
        }
        iVar17 = local_8c;
        iVar7 = local_90;
        local_res18 = local_98;
        pvVar8 = (void *)((longlong)local_98 + (lVar19 - (ulonglong)(iVar18 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar8,local_70,(longlong)iVar2 * 2);
        *(undefined2 *)((longlong)pvVar8 + (longlong)iVar2 * 2) = 0;
      }
      local_b8 = local_res18;
      local_b0 = (void *)CONCAT44(iVar17,iVar7);
      pvVar8 = local_b0;
    }
    local_b0 = pvVar8;
    local_80 = &local_b8;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
  }
  iVar18 = 1;
  local_e8 = (void *)0x0;
  local_e0 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  pvVar8 = local_e8;
  local_98 = local_e8;
  FGenericPlatformString::Convert<char,wchar_t>(local_e8,2,&DAT_143fc2b6c,2,0x3f);
  local_c0 = *(uint *)(param_1 + 5);
  lVar19 = (longlong)(int)local_c0;
  uVar10 = (uint)pvVar13;
  if ((int)uVar10 < 2) {
    pvVar13 = (void *)param_1[4];
    pvVar16 = (void *)0x0;
    local_res20 = (void *)0x0;
    local_c8 = (void *)0x0;
    if (local_c0 == 0) {
      pvVar13 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0);
      local_res20 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar13,lVar19 * 2);
      pvVar16 = (void *)(ulonglong)local_bc;
      pvVar13 = (void *)(ulonglong)local_c0;
    }
  }
  else {
    iVar7 = local_c0 - 1;
    if (local_c0 == 0) {
      iVar7 = 0;
    }
    if ((uVar10 != 0) || (iVar7 == 0)) {
      iVar18 = 0;
    }
    local_res20 = (void *)0x0;
    local_c8 = (void *)0x0;
    local_c0 = uVar10;
    if ((uVar10 == 0) && (iVar7 + iVar18 == 0)) {
      pvVar16 = (void *)0x0;
      local_bc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,uVar10 + iVar7 + iVar18);
      local_res20 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,local_88,(longlong)(int)uVar10 * 2);
      pvVar16 = (void *)(ulonglong)local_bc;
      pvVar13 = (void *)(ulonglong)local_c0;
    }
    pvVar15 = (void *)param_1[4];
    pvVar8 = local_e8;
    if (iVar7 != 0) {
      iVar18 = (int)pvVar13;
      local_c0 = iVar18 + (uint)(iVar18 == 0) + iVar7;
      if ((int)pvVar16 < (int)local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,pvVar13);
        pvVar16 = (void *)(ulonglong)local_bc;
        local_res20 = local_c8;
      }
      pvVar13 = (void *)(ulonglong)local_c0;
      pvVar8 = (void *)((longlong)local_res20 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar8,pvVar15,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)pvVar8 + (longlong)iVar7 * 2) = 0;
      pvVar8 = local_e8;
    }
  }
  local_c8 = local_res20;
  uVar10 = (uint)pvVar13;
  if ((int)uVar10 < 2) {
    pvVar16 = (void *)(local_e0 >> 0x20);
    pvVar13 = (void *)(local_e0 & 0xffffffff);
    local_98 = (void *)0x0;
    pvVar15 = pvVar8;
    local_c8 = pvVar8;
  }
  else {
    iVar18 = 0;
    if ((uint)local_e0 != 0) {
      iVar18 = (uint)local_e0 + -1;
    }
    if ((uVar10 != 0) || (iVar7 = 1, iVar18 == 0)) {
      iVar7 = 0;
    }
    local_res20 = (void *)0x0;
    local_9c = (uint)pvVar16;
    local_a8 = local_c8;
    local_a0 = uVar10;
    if ((int)local_9c < (int)(iVar18 + iVar7 + uVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      pvVar16 = (void *)(ulonglong)local_9c;
      pvVar13 = (void *)(ulonglong)local_a0;
    }
    pvVar15 = local_a8;
    local_c8 = local_a8;
    if (iVar18 != 0) {
      iVar7 = (int)pvVar13;
      local_a0 = iVar7 + (uint)(iVar7 == 0) + iVar18;
      if ((int)pvVar16 < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,pvVar13);
        pvVar16 = (void *)(ulonglong)local_9c;
      }
      pvVar15 = local_a8;
      pvVar13 = (void *)(ulonglong)local_a0;
      pvVar9 = (void *)((longlong)local_a8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      local_c8 = local_a8;
      _guard_xfg_dispatch_icall_nop(pvVar9,pvVar8,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)pvVar9 + (longlong)iVar18 * 2) = 0;
    }
  }
  pvVar8 = (void *)0x0;
  uVar10 = *(uint *)(param_1 + 3);
  uVar11 = (uint)pvVar13;
  if ((int)uVar11 < 2) {
    pvVar13 = (void *)param_1[2];
    local_a8 = (void *)0x0;
    local_e8 = (void *)0x0;
    local_e0._0_4_ = uVar10;
    if (uVar10 == 0) {
      pvVar13 = (void *)0x0;
      pvVar15 = pvVar8;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,uVar10,0);
      pvVar15 = local_e8;
      local_a8 = local_e8;
      _guard_xfg_dispatch_icall_nop(local_e8,pvVar13,(longlong)(int)uVar10 * 2);
      pvVar8 = (void *)(ulonglong)local_e0._4_4_;
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
    }
  }
  else {
    pvVar9 = (void *)(ulonglong)(uVar10 - 1);
    if (uVar10 == 0) {
      pvVar9 = pvVar8;
    }
    iVar18 = (int)pvVar9;
    if ((uVar11 != 0) || (iVar7 = 1, iVar18 == 0)) {
      iVar7 = 0;
    }
    local_c8 = (void *)0x0;
    local_e0._4_4_ = (uint)pvVar16;
    pvVar8 = pvVar16;
    local_e8 = pvVar15;
    local_e0._0_4_ = uVar11;
    if ((int)local_e0._4_4_ < (int)(iVar18 + uVar11 + iVar7)) {
      local_a8 = pvVar15;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      pvVar8 = (void *)(ulonglong)local_e0._4_4_;
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
    }
    pvVar16 = (void *)param_1[2];
    pvVar15 = local_e8;
    local_a8 = local_e8;
    if (iVar18 != 0) {
      iVar7 = (int)pvVar13;
      local_e0._0_4_ = iVar18 + (uint)(iVar7 == 0) + iVar7;
      if ((int)pvVar8 < (int)(uint)local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,pvVar13);
        pvVar8 = (void *)(ulonglong)local_e0._4_4_;
        local_a8 = local_e8;
      }
      pvVar15 = local_a8;
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
      pvVar9 = (void *)((longlong)local_a8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      local_e8 = local_a8;
      _guard_xfg_dispatch_icall_nop(pvVar9,pvVar16,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)pvVar9 + (longlong)iVar18 * 2) = 0;
    }
  }
  ppvVar6 = local_80;
  uVar11 = (uint)pvVar8;
  uVar10 = (uint)pvVar13;
  if ((int)uVar10 < 2) {
    pvVar8 = *local_80;
    *local_80 = (void *)0x0;
    pvVar13 = (void *)(ulonglong)*(uint *)(local_80 + 1);
    local_80[1] = (void *)0x0;
    local_res18 = local_b8;
    uVar10 = *(uint *)((longlong)local_80 + 0xc);
  }
  else {
    iVar18 = *(int *)(local_80 + 1) + -1;
    if (*(int *)(local_80 + 1) == 0) {
      iVar18 = 0;
    }
    if ((uVar10 != 0) || (iVar7 = 1, iVar18 == 0)) {
      iVar7 = 0;
    }
    local_a8 = (void *)0x0;
    local_e8 = pvVar15;
    local_e0._0_4_ = uVar10;
    local_e0._4_4_ = uVar11;
    if ((int)uVar11 < (int)(iVar18 + iVar7 + uVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
    }
    pvVar8 = local_e8;
    uVar10 = local_e0._4_4_;
    if (iVar18 != 0) {
      iVar7 = (int)pvVar13;
      local_e0._0_4_ = iVar18 + (uint)(iVar7 == 0) + iVar7;
      if ((int)local_e0._4_4_ < (int)(uint)local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,pvVar13);
      }
      uVar10 = local_e0._4_4_;
      pvVar8 = local_e8;
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
      pvVar16 = (void *)((longlong)local_e8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar16,*ppvVar6,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)iVar18 * 2 + (longlong)pvVar16) = 0;
    }
  }
  pvVar16 = (void *)0x0;
  uVar11 = (uint)pvVar13;
  if ((int)uVar11 < 2) {
    pvVar13 = (void *)(local_d0 & 0xffffffff);
    local_58 = (void *)0x0;
    pvVar16 = pvVar8;
    pvVar8 = local_d8;
    uVar10 = local_d0._4_4_;
  }
  else {
    iVar18 = 0;
    if ((uint)local_d0 != 0) {
      iVar18 = (uint)local_d0 + -1;
    }
    if ((uVar11 != 0) || (iVar7 = 1, iVar18 == 0)) {
      iVar7 = 0;
    }
    local_e8 = pvVar8;
    local_e0._0_4_ = uVar11;
    local_e0._4_4_ = uVar10;
    if ((int)uVar10 < (int)(iVar7 + iVar18 + uVar11)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
    }
    pvVar8 = local_e8;
    uVar10 = local_e0._4_4_;
    if (iVar18 != 0) {
      iVar7 = (int)pvVar13;
      local_e0._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar18;
      if ((int)local_e0._4_4_ < (int)(uint)local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,pvVar13);
      }
      uVar10 = local_e0._4_4_;
      pvVar8 = local_e8;
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
      pvVar15 = (void *)((longlong)local_e8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar15,local_d8,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)pvVar15 + (longlong)iVar18 * 2) = 0;
    }
  }
  uVar11 = (uint)pvVar13;
  if ((int)uVar11 < 2) {
    FString::FString(param_2,param_1);
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  else {
    iVar18 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar18 = 0;
    }
    if ((uVar11 != 0) || (iVar7 = 1, iVar18 == 0)) {
      iVar7 = 0;
    }
    local_e8 = pvVar8;
    local_e0._0_4_ = uVar11;
    local_e0._4_4_ = uVar10;
    if ((int)uVar10 < (int)(uVar11 + iVar18 + iVar7)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      pvVar13 = (void *)(ulonglong)(uint)local_e0;
    }
    uVar12 = (uint)pvVar13;
    pvVar8 = (void *)*param_1;
    pvVar15 = local_e8;
    uVar10 = uVar12;
    uVar11 = local_e0._4_4_;
    if (iVar18 != 0) {
      local_e0._0_4_ = iVar18 + (uint)(uVar12 == 0) + uVar12;
      if ((int)local_e0._4_4_ < (int)(uint)local_e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,pvVar13,0);
      }
      uVar11 = local_e0._4_4_;
      uVar10 = (uint)local_e0;
      pvVar15 = local_e8;
      pvVar13 = (void *)((longlong)local_e8 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2
                        );
      _guard_xfg_dispatch_icall_nop(pvVar13,pvVar8,(longlong)iVar18 * 2);
      *(undefined2 *)((longlong)iVar18 * 2 + (longlong)pvVar13) = 0;
    }
    *param_2 = (ulonglong)pvVar15;
    *(uint *)(param_2 + 1) = uVar10;
    *(uint *)((longlong)param_2 + 0xc) = uVar11;
  }
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_res20 != (void *)0x0) {
    FMemory::Free(local_res20);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((bVar3) && (local_res18 != (void *)0x0)) {
    FMemory::Free(local_res18);
  }
  if ((bVar4) && (local_78 != (void *)0x0)) {
    FMemory::Free(local_78);
  }
  if ((bVar5) && (local_68 != (void *)0x0)) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return param_2;
}



// FUNCTION 14058b1c0 FUN_14058b1c0 body=5 status=ok
// SIG undefined FUN_14058b1c0(void)

undefined1 FUN_14058b1c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// FUNCTION 14058b1e0 FUN_14058b1e0 body=152 status=ok
// SIG undefined FUN_14058b1e0(void)

void FUN_14058b1e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  for (iVar2 = *(int *)(param_1 + 0x498); iVar2 != 0; iVar2 = iVar2 + -1) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
    lVar1 = lVar1 + 0x10;
  }
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(int *)(param_1 + 0x49c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x490,0);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x480,0);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    _guard_xfg_dispatch_icall_nop();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14058b280 FUN_14058b280 body=5 status=ok
// SIG undefined FUN_14058b280(void)

longlong FUN_14058b280(longlong param_1)

{
  return param_1 + 0x3c;
}



// FUNCTION 14058b290 VivoxCalloc body=62 status=ok
// SIG undefined VivoxCalloc(void)

void * VivoxConfig::VivoxCalloc(longlong param_1,longlong param_2)

{
  void *_Dst;
  
  _Dst = (void *)FMemory::Malloc(param_1 * param_2);
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,param_1 * param_2);
  }
  return _Dst;
}



// FUNCTION 14058b2d0 operator_delete body=5 status=ok
// SIG undefined operator_delete(void)

void FMemory::operator_delete(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,param_1);
  }
  return;
}



// FUNCTION 14058b2e0 operator_new body=7 status=ok
// SIG undefined operator_new(void)

void operator_new(undefined8 param_1)

{
  FMemory::Malloc(param_1,0);
  return;
}



// FUNCTION 14058b300 HarfBuzzRealloc body=8 status=ok
// SIG undefined HarfBuzzRealloc(void)

void HarfBuzzRealloc(undefined8 param_1,undefined8 param_2)

{
  FMemory::Realloc(param_1,param_2,0);
  return;
}



// FUNCTION 14058b310 FUN_14058b310 body=187 status=ok
// SIG undefined FUN_14058b310(void)

undefined8 * FUN_14058b310(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x4a8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143fc4880;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      FUN_14056c460(puVar1 + 0xc,0);
      FUN_14056c460(puVar1 + 0x4e,1);
      puVar1[0x90] = 0;
      puVar1[0x91] = 0;
      puVar1[0x92] = 0;
      puVar1[0x93] = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined1 *)(puVar1 + 0x94) = 0;
      puVar2 = puVar1;
    }
    *(undefined8 **)(param_1 + 0x28) = puVar2;
  }
  return puVar2;
}



// FUNCTION 14058b3d0 GetNumLevels body=7 status=ok
// SIG undefined GetNumLevels(void)

undefined4 UWorld::GetNumLevels(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x168);
}



// FUNCTION 14058b3e0 vx_fstrdup body=146 status=ok
// SIG undefined vx_fstrdup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 vx_fstrdup(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 1) < 2) {
    return 0;
  }
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_b8,*param_1);
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar1 + 0x88));
  if (local_38 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14058b480 ChannelType_StaticEnum body=85 status=ok
// SIG undefined ChannelType_StaticEnum(void)

void ChannelType_StaticEnum(void)

{
  if (DAT_1468535f8 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_1468535f8 = GetStaticEnum(FUN_14058b900,DAT_1468536b8,L"ChannelType");
  }
  return;
}



// FUNCTION 14058b4e0 ConnectionState_StaticEnum body=85 status=ok
// SIG undefined ConnectionState_StaticEnum(void)

void ConnectionState_StaticEnum(void)

{
  if (DAT_146853600 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853600 = GetStaticEnum(FUN_14058b930,DAT_1468536b8,L"ConnectionState");
  }
  return;
}



// FUNCTION 14058b540 DeviceType_StaticEnum body=85 status=ok
// SIG undefined DeviceType_StaticEnum(void)

void DeviceType_StaticEnum(void)

{
  if (DAT_1468535e8 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_1468535e8 = GetStaticEnum(FUN_14058b960,DAT_1468536b8,L"DeviceType");
  }
  return;
}



// FUNCTION 14058b5a0 EAudioFadeModel_StaticEnum body=85 status=ok
// SIG undefined EAudioFadeModel_StaticEnum(void)

void EAudioFadeModel_StaticEnum(void)

{
  if (DAT_1468535f0 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_1468535f0 = GetStaticEnum(FUN_14058b990,DAT_1468536b8,L"EAudioFadeModel");
  }
  return;
}



// FUNCTION 14058b600 LoginState_StaticEnum body=85 status=ok
// SIG undefined LoginState_StaticEnum(void)

void LoginState_StaticEnum(void)

{
  if (DAT_146853628 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853628 = GetStaticEnum(FUN_14058b9c0,DAT_1468536b8,L"LoginState");
  }
  return;
}



// FUNCTION 14058b660 ParticipantSpeakingUpdateRate_StaticEnum body=85 status=ok
// SIG undefined ParticipantSpeakingUpdateRate_StaticEnum(void)

void ParticipantSpeakingUpdateRate_StaticEnum(void)

{
  if (DAT_146853608 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853608 = GetStaticEnum(FUN_14058b9f0,DAT_1468536b8,L"ParticipantSpeakingUpdateRate");
  }
  return;
}



// FUNCTION 14058b6c0 PresenceStatus_StaticEnum body=85 status=ok
// SIG undefined PresenceStatus_StaticEnum(void)

void PresenceStatus_StaticEnum(void)

{
  if (DAT_146853640 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853640 = GetStaticEnum(FUN_14058ba20,DAT_1468536b8,L"PresenceStatus");
  }
  return;
}



// FUNCTION 14058b720 SubscriptionMode_StaticEnum body=85 status=ok
// SIG undefined SubscriptionMode_StaticEnum(void)

void SubscriptionMode_StaticEnum(void)

{
  if (DAT_146853620 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853620 = GetStaticEnum(FUN_14058ba50,DAT_1468536b8,L"SubscriptionMode");
  }
  return;
}



// FUNCTION 14058b780 SubscriptionReply_StaticEnum body=85 status=ok
// SIG undefined SubscriptionReply_StaticEnum(void)

void SubscriptionReply_StaticEnum(void)

{
  if (DAT_146853618 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853618 = GetStaticEnum(FUN_14058ba80,DAT_1468536b8,L"SubscriptionReply");
  }
  return;
}



// FUNCTION 14058b7e0 TTSDestination_StaticEnum body=85 status=ok
// SIG undefined TTSDestination_StaticEnum(void)

void TTSDestination_StaticEnum(void)

{
  if (DAT_146853638 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853638 = GetStaticEnum(FUN_14058bab0,DAT_1468536b8,L"TTSDestination");
  }
  return;
}



// FUNCTION 14058b840 TTSMessageState_StaticEnum body=85 status=ok
// SIG undefined TTSMessageState_StaticEnum(void)

void TTSMessageState_StaticEnum(void)

{
  if (DAT_146853630 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853630 = GetStaticEnum(FUN_14058bae0,DAT_1468536b8,L"TTSMessageState");
  }
  return;
}



// FUNCTION 14058b8a0 TransmissionMode_StaticEnum body=85 status=ok
// SIG undefined TransmissionMode_StaticEnum(void)

void TransmissionMode_StaticEnum(void)

{
  if (DAT_146853610 == 0) {
    if (DAT_1468536b8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
    }
    DAT_146853610 = GetStaticEnum(FUN_14058bb10,DAT_1468536b8,L"TransmissionMode");
  }
  return;
}



// FUNCTION 14058b900 FUN_14058b900 body=47 status=ok
// SIG undefined FUN_14058b900(void)

longlong FUN_14058b900(void)

{
  if (DAT_146853668 == 0) {
    FUN_1417866a0(&DAT_146853668,&PTR_FUN_1461fcbc0);
  }
  return DAT_146853668;
}



// FUNCTION 14058b930 FUN_14058b930 body=47 status=ok
// SIG undefined FUN_14058b930(void)

longlong FUN_14058b930(void)

{
  if (DAT_146853670 == 0) {
    FUN_1417866a0(&DAT_146853670,&PTR_FUN_1461fcc10);
  }
  return DAT_146853670;
}



// FUNCTION 14058b960 FUN_14058b960 body=47 status=ok
// SIG undefined FUN_14058b960(void)

longlong FUN_14058b960(void)

{
  if (DAT_146853658 == 0) {
    FUN_1417866a0(&DAT_146853658,&PTR_FUN_1461fcb20);
  }
  return DAT_146853658;
}



// FUNCTION 14058b990 FUN_14058b990 body=47 status=ok
// SIG undefined FUN_14058b990(void)

longlong FUN_14058b990(void)

{
  if (DAT_146853660 == 0) {
    FUN_1417866a0(&DAT_146853660,&PTR_FUN_1461fcb70);
  }
  return DAT_146853660;
}



// FUNCTION 14058b9c0 FUN_14058b9c0 body=47 status=ok
// SIG undefined FUN_14058b9c0(void)

longlong FUN_14058b9c0(void)

{
  if (DAT_146853698 == 0) {
    FUN_1417866a0(&DAT_146853698,&PTR_FUN_1461fcda0);
  }
  return DAT_146853698;
}



// FUNCTION 14058b9f0 FUN_14058b9f0 body=47 status=ok
// SIG undefined FUN_14058b9f0(void)

longlong FUN_14058b9f0(void)

{
  if (DAT_146853678 == 0) {
    FUN_1417866a0(&DAT_146853678,&PTR_FUN_1461fcc60);
  }
  return DAT_146853678;
}



// FUNCTION 14058ba20 FUN_14058ba20 body=47 status=ok
// SIG undefined FUN_14058ba20(void)

longlong FUN_14058ba20(void)

{
  if (DAT_1468536b0 == 0) {
    FUN_1417866a0(&DAT_1468536b0,&PTR_FUN_1461fce90);
  }
  return DAT_1468536b0;
}



// FUNCTION 14058ba50 FUN_14058ba50 body=47 status=ok
// SIG undefined FUN_14058ba50(void)

longlong FUN_14058ba50(void)

{
  if (DAT_146853690 == 0) {
    FUN_1417866a0(&DAT_146853690,&PTR_FUN_1461fcd50);
  }
  return DAT_146853690;
}



// FUNCTION 14058ba80 FUN_14058ba80 body=47 status=ok
// SIG undefined FUN_14058ba80(void)

longlong FUN_14058ba80(void)

{
  if (DAT_146853688 == 0) {
    FUN_1417866a0(&DAT_146853688,&PTR_FUN_1461fcd00);
  }
  return DAT_146853688;
}



// FUNCTION 14058bab0 FUN_14058bab0 body=47 status=ok
// SIG undefined FUN_14058bab0(void)

longlong FUN_14058bab0(void)

{
  if (DAT_1468536a8 == 0) {
    FUN_1417866a0(&DAT_1468536a8,&PTR_FUN_1461fce40);
  }
  return DAT_1468536a8;
}



// FUNCTION 14058bae0 FUN_14058bae0 body=47 status=ok
// SIG undefined FUN_14058bae0(void)

longlong FUN_14058bae0(void)

{
  if (DAT_1468536a0 == 0) {
    FUN_1417866a0(&DAT_1468536a0,&PTR_FUN_1461fcdf0);
  }
  return DAT_1468536a0;
}



// FUNCTION 14058bb10 FUN_14058bb10 body=47 status=ok
// SIG undefined FUN_14058bb10(void)

longlong FUN_14058bb10(void)

{
  if (DAT_146853680 == 0) {
    FUN_1417866a0(&DAT_146853680,&PTR_FUN_1461fccb0);
  }
  return DAT_146853680;
}



// FUNCTION 14058bb40 FUN_14058bb40 body=47 status=ok
// SIG undefined FUN_14058bb40(void)

longlong FUN_14058bb40(void)

{
  if (DAT_1468536b8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468536b8,&PTR_s__Script_VivoxCore_143fc65d0);
  }
  return DAT_1468536b8;
}



// FUNCTION 14058bb70 FUN_14058bb70 body=695 status=ok
// SIG undefined FUN_14058bb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14058bb70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  uVar4 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar4,L"nosound");
  if (cVar3 == '\0') {
    lVar5 = operator_new();
    if (lVar5 == 0) {
      DAT_1468536c8 = (longlong *)0x0;
    }
    else {
      DAT_1468536c8 = (longlong *)FUN_14058f950(lVar5);
    }
    cVar3 = (**(code **)(*DAT_1468536c8 + 8))();
    plVar8 = DAT_1468536c8;
    if (cVar3 == '\0') {
      if (DAT_1468536c8 != (longlong *)0x0) {
        (**(code **)*DAT_1468536c8)(DAT_1468536c8,1);
      }
      DAT_1468536c8 = (longlong *)0x0;
      return;
    }
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = (longlong)plVar8;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar6[2] = (longlong)&LAB_140591ba4;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
    }
    plVar8 = (longlong *)(param_1 + 8);
    if (local_18 != plVar8) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 0x10) != 0) &&
           (plVar1 = (longlong *)*plVar8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar8 != 0) {
            lVar5 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar5;
          }
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar8);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar5 = FMemory::Realloc(plVar6,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    uVar4 = FUN_14164bfd0();
    puVar7 = (undefined8 *)FUN_14158f860(uVar4,local_res10,plVar8,L"FWwiseAudioModule_Update",0);
    *(undefined8 *)(param_1 + 0x18) = *puVar7;
    DAT_1468536c6 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_143fd0070;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[2] = lVar5;
      *plVar8 = (longlong)&PTR_GetPoolName_143fd00b8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res10);
      iVar2 = DAT_1464af198;
      lVar5 = (longlong)DAT_1464af198;
      DAT_1464af198 = DAT_1464af198 + 1;
      if (DAT_1464af19c < DAT_1464af198) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar2);
      }
      puVar7 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af190);
      *puVar7 = plVar8;
      *(undefined4 *)(puVar7 + 1) = 2;
    }
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = param_1;
      *plVar8 = (longlong)&DAT_143f3ed00;
      plVar8[2] = (longlong)FUN_1405a1040;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar5;
      *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res10);
      iVar2 = DAT_1465357b0;
      lVar5 = (longlong)DAT_1465357b0;
      DAT_1465357b0 = DAT_1465357b0 + 1;
      if (DAT_1465357b4 < DAT_1465357b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar2);
      }
      puVar7 = (undefined8 *)(lVar5 * 0x10 + DAT_1465357a8);
      *puVar7 = plVar8;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14058be30 FUN_14058be30 body=98 status=ok
// SIG undefined FUN_14058be30(void)

void FUN_14058be30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14164bfd0();
  FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x18));
  FUN_140483870(&DAT_1465357a8,param_1);
  if (DAT_1468536c8 != (longlong *)0x0) {
    (**(code **)(*DAT_1468536c8 + 0x10))();
    if (DAT_1468536c8 != (longlong *)0x0) {
      (**(code **)*DAT_1468536c8)(DAT_1468536c8,1);
    }
    DAT_1468536c8 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 14058bea0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSslModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14058bef0 Open body=289 status=ok
// SIG undefined Open(void)

ulonglong CAkUnrealIOHookDeferred::Open
                    (undefined8 param_1,short *param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  _Src = (void *)0x0;
  local_28 = (void *)0x0;
  local_1c = 0;
  iVar4 = 0;
  if ((param_2 != (short *)0x0) && (iVar4 = 0, *param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)iVar2 * 2);
  }
  local_28 = (void *)0x0;
  local_20 = iVar4;
  if (iVar4 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar4,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar4 * 2);
  }
  uVar1 = FUN_14058e780(param_1,&local_28,param_3,param_4,param_5,param_6);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14058c080 Close body=61 status=ok
// SIG undefined Close(void)

undefined8 CAkUnrealIOHookDeferred::Close(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if ((*(int *)(param_2 + 0xc) == 0x10) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x10), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  return 1;
}



// FUNCTION 14058c0c0 FUN_14058c0c0 body=83 status=ok
// SIG undefined FUN_14058c0c0(void)

undefined8 * FUN_14058c0c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143fca6f8;
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14058c120 FUN_14058c120 body=43 status=ok
// SIG undefined FUN_14058c120(void)

undefined8 * FUN_14058c120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14058c150 FUN_14058c150 body=66 status=ok
// SIG undefined FUN_14058c150(void)

void FUN_14058c150(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fca720;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fca768;
  }
  return;
}



// FUNCTION 14058c1b0 FUN_14058c1b0 body=27 status=ok
// SIG undefined FUN_14058c1b0(void)

undefined8 FUN_14058c1b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 8))(param_2,param_3);
  return 1;
}



// FUNCTION 14058c1e0 FUN_14058c1e0 body=78 status=ok
// SIG undefined FUN_14058c1e0(void)

undefined8 FUN_14058c1e0(int *param_1)

{
  char cVar1;
  int local_res8;
  int local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  if ((*param_1 == local_res8) && (param_1[1] == local_resc)) {
    return 1;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if ((cVar1 == '\0') && (cVar1 = FWeakObjectPtr::IsValid(&local_res8), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14058c230 FUN_14058c230 body=278 status=ok
// SIG undefined FUN_14058c230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14058c230(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0xffffffffffffffff;
  local_80 = 0;
  local_78 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  param_2[4] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0xffffffff;
  param_2[0x13] = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_2[0x18] = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 6,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x14,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x16) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x16) = lVar1;
  param_2[0x18] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 14058c350 operator<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_> body=346 status=ok
// SIG undefined operator<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>(void)

undefined8 *
TPairInitializer<FObjectKey_const_&,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_&&>
::
operator<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  
  _Src = (void *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[0x19] = 0;
  if (*(longlong *)((longlong)_Src + 0xc0) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 1,_Src,0xc0);
  }
  if (param_2[0x19] != 0) {
    FMemory::Free();
  }
  param_2[0x19] = *(undefined8 *)((longlong)_Src + 0xc0);
  *(undefined8 *)((longlong)_Src + 0xc0) = 0;
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)((longlong)_Src + 200);
  *(undefined4 *)((longlong)param_2 + 0xd4) = *(undefined4 *)((longlong)_Src + 0xcc);
  *(undefined8 *)((longlong)_Src + 200) = 0;
  param_2[0x23] = 0;
  if (*(longlong *)((longlong)_Src + 0x110) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x1b,(void *)((longlong)_Src + 0xd0),0x40);
  }
  if (param_2[0x23] != 0) {
    FMemory::Free();
  }
  param_2[0x23] = *(undefined8 *)((longlong)_Src + 0x110);
  *(undefined8 *)((longlong)_Src + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((longlong)_Src + 0x118);
  *(undefined4 *)((longlong)param_2 + 0x124) = *(undefined4 *)((longlong)_Src + 0x11c);
  *(undefined8 *)((longlong)_Src + 0x118) = 0;
  param_2[0x25] = 0;
  param_2[0x25] = *(undefined8 *)((longlong)_Src + 0x120);
  *(undefined8 *)((longlong)_Src + 0x120) = 0;
  *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)((longlong)_Src + 0x128);
  *(undefined4 *)((longlong)param_2 + 0x134) = *(undefined4 *)((longlong)_Src + 300);
  *(undefined8 *)((longlong)_Src + 0x128) = 0;
  *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)((longlong)_Src + 0x130);
  *(undefined4 *)((longlong)param_2 + 0x13c) = *(undefined4 *)((longlong)_Src + 0x134);
  return param_2;
}



// FUNCTION 14058c4b0 FUN_14058c4b0 body=239 status=ok
// SIG undefined FUN_14058c4b0(void)

void FUN_14058c4b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff08;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 14058c5a0 FUN_14058c5a0 body=852 status=ok
// SIG undefined FUN_14058c5a0(void)

int * FUN_14058c5a0(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *_Src;
  bool bVar13;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x10);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar7 * 0x10 + *param_1);
  uVar3 = *param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      iVar6 = (int)(uVar3 >> 4);
      uVar10 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
      uVar5 = -(uVar10 + iVar6) ^ uVar10 >> 0xd;
      uVar11 = (iVar6 - uVar10) - uVar5 ^ uVar5 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar5 ^ uVar11 << 0x10;
      uVar5 = (uVar5 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar5 ^ uVar5 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar5 ^ uVar11 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      (((longlong)(int)((uVar5 - uVar10) - uVar11) ^ (ulonglong)(uVar10 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar6 * 0x10) == uVar3) goto LAB_14058c76a;
          iVar6 = *(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14058c76a:
    bVar13 = iVar6 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_14058c8cb;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar10 = -(uVar5 + iVar8) ^ uVar5 >> 0xd;
    uVar12 = (iVar8 - uVar5) - uVar10 ^ uVar10 >> 0xc;
    uVar5 = (uVar5 - uVar12) - uVar10 ^ uVar12 << 0x10;
    uVar10 = (uVar10 - uVar5) - uVar12 ^ uVar5 >> 5;
    uVar12 = (uVar12 - uVar5) - uVar10 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar12) - uVar10 ^ uVar12 << 10;
    uVar12 = ((uVar10 - uVar5) - uVar12 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar12;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14058c8cb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 14058c900 FUN_14058c900 body=747 status=ok
// SIG undefined FUN_14058c900(void)

uint * FUN_14058c900(longlong *param_1,uint *param_2,ulonglong *param_3,undefined1 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x10);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar5 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar6 + lVar5);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  uVar2 = *param_3;
  lVar8 = (longlong)(int)uVar10 * 0x10;
  local_res10 = (ulonglong *)(*param_1 + lVar8);
  *local_res10 = uVar2;
  *(undefined4 *)(local_res10 + 1) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 * 0x10 + *param_1),local_res10,8);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar8 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar8 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar6 + lVar5);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14058cbbc;
    }
  }
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar4 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar4) ^ uVar4 >> 0xd;
    uVar14 = (iVar11 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar14 ^ uVar4 >> 5;
    uVar14 = (uVar14 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar4) - uVar14 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0xc) = uVar14;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 1) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14058cbbc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14058cbf0 FUN_14058cbf0 body=931 status=ok
// SIG undefined FUN_14058cbf0(void)

int * FUN_14058cbf0(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong *_Src;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar7 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar18 = false;
  puVar16 = (uint *)((longlong)plVar5 + lVar4);
  *puVar16 = *puVar16 | 1 << ((byte)iVar10 & 0x1f);
  uVar1 = *param_3;
  lVar8 = (longlong)iVar10 * 0x10;
  _Src = (ulonglong *)(*param_1 + lVar8);
  *_Src = uVar1;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar9 = iVar17;
    if (uVar15 != 0) {
      iVar13 = (int)(uVar1 >> 4);
      uVar12 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
      uVar6 = -(uVar12 + iVar13) ^ uVar12 >> 0xd;
      uVar14 = (iVar13 - uVar12) - uVar6 ^ uVar6 >> 0xc;
      uVar12 = (uVar12 - uVar14) - uVar6 ^ uVar14 << 0x10;
      uVar6 = (uVar6 - uVar12) - uVar14 ^ uVar12 >> 5;
      uVar14 = (uVar14 - uVar12) - uVar6 ^ uVar6 >> 3;
      uVar12 = (uVar12 - uVar14) - uVar6 ^ uVar14 << 10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar5 +
                       (((longlong)(int)((uVar6 - uVar12) - uVar14) ^ (ulonglong)(uVar12 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar13 != -1) {
        do {
          iVar9 = iVar13;
          if (*(ulonglong *)(*param_1 + (longlong)iVar13 * 0x10) == uVar1) break;
          iVar13 = *(int *)(*param_1 + 8 + (longlong)iVar13 * 0x10);
          iVar9 = iVar17;
        } while (iVar13 != -1);
      }
    }
    bVar18 = iVar9 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),_Src,8);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar8 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar2) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar5 + lVar4);
      *puVar16 = *puVar16 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14058cf68;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar17;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar17;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar17 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar12 = -(uVar6 + iVar17) ^ uVar6 >> 0xd;
    uVar15 = (iVar17 - uVar6) - uVar12 ^ uVar12 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar12 ^ uVar15 << 0x10;
    uVar12 = (uVar12 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar6) - uVar12 ^ uVar12 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar12 ^ uVar15 << 10;
    uVar15 = ((uVar12 - uVar6) - uVar15 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar15;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14058cf68:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 14058cfa0 FUN_14058cfa0 body=174 status=ok
// SIG undefined FUN_14058cfa0(void)

longlong FUN_14058cfa0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar1 + 1) {
    FUN_1405a7db0(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar3 = param_1;
  }
  puVar4 = (undefined8 *)(lVar3 + (longlong)iVar1 * 0x28);
  *puVar4 = *param_2;
  uVar2 = param_3[1];
  puVar4[1] = *param_3;
  puVar4[2] = uVar2;
  puVar4[3] = param_3[2];
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_3 + 3);
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar3 = param_1;
  }
  return (longlong)iVar1 * 0x28 + 8 + lVar3;
}



// FUNCTION 14058d050 FUN_14058d050 body=586 status=ok
// SIG undefined FUN_14058d050(void)

int * FUN_14058d050(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint *_Src;
  bool bVar10;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  puVar2 = (uint *)*param_3;
  bVar10 = false;
  _Src = (uint *)((longlong)iVar6 * 0x20 + *param_1);
  *_Src = *puVar2;
  _Src[1] = puVar2[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14058d279;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar8 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14058d279:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 14058d2a0 FUN_14058d2a0 body=422 status=ok
// SIG undefined FUN_14058d2a0(void)

int * FUN_14058d2a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar3 = (longlong *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  lVar1 = *plVar3;
  *local_30 = lVar1;
  local_30[1] = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_14058d36b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14058d36b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_14058d41e;
    }
  }
  cVar2 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) * 0x17 + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14058d41e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14058d450 FUN_14058d450 body=676 status=ok
// SIG undefined FUN_14058d450(void)

int * FUN_14058d450(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar5 + lVar4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar7 = (longlong)iVar10 * 0x10;
  puVar13 = (uint *)(*param_1 + lVar7);
  *puVar13 = *(uint *)*param_3;
  puVar13[1] = 0;
  puVar13[2] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x10) == *puVar13) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),puVar13,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar5 + lVar4);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14058d6cf;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar13;
    puVar13[3] = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar13[2] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_14058d6cf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14058d700 FUN_14058d700 body=632 status=ok
// SIG undefined FUN_14058d700(void)

int * FUN_14058d700(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool local_res8;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x70 + *param_1);
  FUN_14058c230(param_3,puVar9);
  puVar9[0x1a] = 0xffffffff;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x70 + *param_1) == *puVar9) goto LAB_14058d83b;
          iVar5 = *(int *)((longlong)iVar5 * 0x70 + 0x68 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14058d83b:
    local_res8 = iVar5 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar5 * 0x70 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x60) = 0;
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x68);
      TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_14058d953;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0x1b] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[0x1a] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14058d953:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14058d980 FUN_14058d980 body=631 status=ok
// SIG undefined FUN_14058d980(void)

int * FUN_14058d980(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar3;
  puVar1[4] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x18) == *puVar1) goto LAB_14058dadb;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14058dadb:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),puVar1,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_14058dbce;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14058dbce:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14058dc00 FUN_14058dc00 body=719 status=ok
// SIG undefined FUN_14058dc00(void)

int * FUN_14058dc00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar1 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar14 = false;
  puVar13 = (uint *)((longlong)plVar6 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined8 *)*param_3;
  puVar13 = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *(undefined8 *)puVar13 = *puVar2;
  puVar13[2] = *(uint *)(puVar2 + 1);
  *(undefined8 *)(puVar13 + 4) = *puVar3;
  *puVar3 = 0;
  puVar13[6] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)(~puVar13[1] ^ *puVar13 ^ puVar13[2]) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        lVar4 = *param_1;
        do {
          lVar7 = (longlong)iVar8 * 0x20;
          if (((*(uint *)(lVar7 + 4 + lVar4) == puVar13[1]) &&
              (*(uint *)(lVar7 + lVar4) == *puVar13)) &&
             (*(uint *)(lVar7 + 8 + lVar4) == puVar13[2])) {
            bVar14 = true;
          }
          else {
            bVar14 = false;
          }
          if (bVar14) goto LAB_14058dd95;
          iVar8 = *(int *)(lVar7 + 0x18 + lVar4);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_14058dd95:
    bVar14 = iVar8 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      puVar2 = *(undefined8 **)((longlong)_Dst + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar13,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_14058dea2;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (~puVar13[1] ^ puVar13[2] ^ *puVar13) & (int)param_1[9] - 1U;
    puVar13[7] = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar13[6] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14058dea2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 14058ded0 FUN_14058ded0 body=821 status=ok
// SIG undefined FUN_14058ded0(void)

uint * FUN_14058ded0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  void *_Dst;
  int iVar11;
  char cVar12;
  uint uVar13;
  int *_Src;
  undefined4 uVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar11 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      FUN_1405a7bf0(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar10 * 0x148 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x148 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (int *)((longlong)(int)uVar10 * 0x148 + *param_1);
  TPairInitializer<FObjectKey_const_&,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_&&>
  ::
  operator<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>
            (param_3,_Src);
  _Src[0x50] = -1;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar10 != 1) {
    TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar9 * 0x148 + *param_1);
      TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
      ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
                ((longlong)_Dst + 0x128);
      if (*(longlong *)((longlong)_Dst + 0x118) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 200) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x140);
      uVar10 = *param_2;
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x148 + *param_1) = uVar10;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar10 * 0x148 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14058e1dc;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar10 = _Src[1];
    uVar8 = *_Src - uVar10 ^ uVar10 >> 0xd;
    uVar4 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
    uVar13 = (uVar10 - uVar4) - uVar8 ^ uVar4 >> 0xd;
    uVar8 = (uVar8 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar10 = (uVar4 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar8 ^ uVar10 >> 5;
    uVar4 = (uVar8 - uVar10) - uVar13 ^ uVar13 >> 3;
    uVar10 = (uVar10 - uVar4) - uVar13 ^ uVar4 << 10;
    uVar10 = ((uVar13 - uVar10) - uVar4 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    _Src[0x51] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[0x50] = *(int *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14058e1dc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14058e210 GenerateKeyArray<TSizedDefaultAllocator<32>_> body=395 status=ok
// SIG undefined GenerateKeyArray<TSizedDefaultAllocator<32>_>(void)

void TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
     GenerateKeyArray<TSizedDefaultAllocator<32>_>(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  lVar5 = param_1[1];
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != (int)lVar5 - iVar2) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar3 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_14058e2eb;
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
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_14058e2eb:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar6 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar6;
  if (bVar4) {
    do {
      iVar6 = iStack_3c;
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 14058e3a0 FUN_14058e3a0 body=51 status=ok
// SIG undefined FUN_14058e3a0(void)

longlong FUN_14058e3a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1405b9970();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 14058e3e0 FUN_14058e3e0 body=229 status=ok
// SIG undefined FUN_14058e3e0(void)

undefined8 * FUN_14058e3e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  undefined8 *local_res10;
  longlong local_28;
  undefined8 **local_20;
  
  plVar1 = *(longlong **)(param_1 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_1 + 0x24);
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *plVar1);
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x28);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR_FUN_143fce228;
      puVar3[2] = 0;
      puVar3[3] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 4) = 0;
      puVar4 = puVar3;
    }
    local_20 = &local_res10;
    local_res10 = puVar4;
    local_28 = param_1 + 0x24;
    FUN_14058dc00(*(undefined8 *)(param_1 + 8),local_res8,&local_28,0);
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
    return puVar4;
  }
  return (undefined8 *)*puVar2;
}



// FUNCTION 14058e4d0 FUN_14058e4d0 body=89 status=ok
// SIG undefined FUN_14058e4d0(void)

void FUN_14058e4d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = AUGDoor::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14058e530 FUN_14058e530 body=89 status=ok
// SIG undefined FUN_14058e530(void)

void FUN_14058e530(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_1405b5310();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14058e590 FUN_14058e590 body=484 status=ok
// SIG undefined FUN_14058e590(void)

undefined4
FUN_14058e590(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined1 *param_5
             ,longlong *param_6)

{
  undefined2 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined2 *local_28;
  undefined8 local_20;
  
  puVar7 = (undefined8 *)0x0;
  *(undefined4 *)(param_6 + 1) = 0;
  *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x24);
  param_6[2] = 0;
  uVar9 = 0xffffffff;
  *(undefined4 *)((longlong)param_6 + 0xc) = 0xffffffff;
  *param_6 = 0;
  if (param_3 == 3) {
    return 0;
  }
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  iVar2 = FUN_14059c330(param_1,param_2,param_4,param_3,&local_28);
  puVar1 = local_28;
  if ((iVar2 == 1) && (iVar2 = (int)local_20, 1 < (int)local_20)) {
    if (param_3 == 0) {
      plVar3 = (longlong *)FUN_1415c3d50();
      puVar8 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar8 = puVar1;
      }
      lVar4 = (**(code **)(*plVar3 + 0xe8))(plVar3,puVar8);
      *param_6 = lVar4;
      if (0 < lVar4) {
        uVar5 = FPlatformFileManager::Get();
        plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
        puVar8 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar8 = puVar1;
        }
        lVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,puVar8);
        if (lVar4 != 0) {
          *param_5 = 1;
          puVar6 = (undefined8 *)operator_new(0x28);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar6 = &PTR_FUN_143fcfdc8;
            puVar6[2] = lVar4;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar7 = puVar6;
          }
LAB_14058e6c2:
          param_6[2] = (longlong)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            uVar9 = 0x10;
          }
          *(undefined4 *)((longlong)param_6 + 0xc) = uVar9;
          uVar9 = 1;
          goto LAB_14058e74d;
        }
      }
    }
    else if (param_3 - 1U < 2) {
      uVar5 = FPlatformFileManager::Get();
      plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
      puVar8 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar8 = puVar1;
      }
      lVar4 = (**(code **)(*plVar3 + 200))(plVar3,puVar8,0,0);
      if (lVar4 != 0) {
        *param_5 = 1;
        puVar6 = (undefined8 *)operator_new(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar6 + 1) = 0;
          *puVar6 = &PTR__scalar_deleting_destructor__143fcfde0;
          puVar6[2] = lVar4;
          puVar7 = puVar6;
        }
        goto LAB_14058e6c2;
      }
    }
  }
  uVar9 = 2;
LAB_14058e74d:
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return uVar9;
}



// FUNCTION 14058e780 FUN_14058e780 body=561 status=ok
// SIG undefined FUN_14058e780(void)

undefined8
FUN_14058e780(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,undefined1 *param_5,
             longlong *param_6)

{
  undefined2 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined2 *local_28;
  undefined8 local_20;
  
  puVar7 = (undefined8 *)0x0;
  *(undefined4 *)(param_6 + 1) = 0;
  *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_1 + 0x24);
  param_6[2] = 0;
  uVar9 = 0xffffffff;
  *(undefined4 *)((longlong)param_6 + 0xc) = 0xffffffff;
  *param_6 = 0;
  if (param_3 == 3) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  iVar2 = FUN_14059bfe0(param_1,param_2,param_4,param_3,&local_28);
  puVar1 = local_28;
  if ((iVar2 == 1) && (iVar2 = (int)local_20, 1 < (int)local_20)) {
    if (param_3 == 0) {
      plVar3 = (longlong *)FUN_1415c3d50();
      puVar8 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar8 = puVar1;
      }
      lVar4 = (**(code **)(*plVar3 + 0xe8))(plVar3,puVar8);
      *param_6 = lVar4;
      if (0 < lVar4) {
        uVar5 = FPlatformFileManager::Get();
        plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
        puVar8 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar8 = puVar1;
        }
        lVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,puVar8);
        if (lVar4 != 0) {
          *param_5 = 1;
          puVar6 = (undefined8 *)operator_new(0x28);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar6 = &PTR_FUN_143fcfdc8;
            puVar6[2] = lVar4;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar7 = puVar6;
          }
LAB_14058e935:
          param_6[2] = (longlong)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            uVar9 = 0x10;
          }
          *(undefined4 *)((longlong)param_6 + 0xc) = uVar9;
          if (puVar1 != (undefined2 *)0x0) {
            FMemory::Free(puVar1);
          }
          if (*param_2 != 0) {
            FMemory::Free();
          }
          return 1;
        }
      }
    }
    else if (param_3 - 1U < 2) {
      uVar5 = FPlatformFileManager::Get();
      plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
      puVar8 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar8 = puVar1;
      }
      lVar4 = (**(code **)(*plVar3 + 200))(plVar3,puVar8,0,0);
      if (lVar4 != 0) {
        *param_5 = 1;
        puVar6 = (undefined8 *)operator_new(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar6 + 1) = 0;
          *puVar6 = &PTR__scalar_deleting_destructor__143fcfde0;
          puVar6[2] = lVar4;
          puVar7 = puVar6;
        }
        goto LAB_14058e935;
      }
    }
  }
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 2;
}



// FUNCTION 14058e9c0 FUN_14058e9c0 body=425 status=ok
// SIG undefined FUN_14058e9c0(void)

int FUN_14058e9c0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = 0;
  lVar2 = *(longlong *)*param_1;
  uVar8 = uVar7;
  uVar11 = uVar7;
  if (((lVar2 == 0) || (lVar3 = ((longlong *)*param_1)[1], lVar3 == -1)) ||
     (lVar2 = *(longlong *)(lVar2 + 0xd0), lVar3 != lVar2)) {
    bVar12 = false;
  }
  else {
    bVar12 = lVar2 != *(longlong *)(*(longlong *)*param_2 + 0xd0);
  }
  do {
    iVar6 = (int)uVar7;
    uVar8 = uVar8 + 1;
    uVar7 = (ulonglong)(iVar6 + 1);
    if ((longlong)uVar8 < lVar9) {
      plVar4 = (longlong *)(uVar8 * 0x80 + *param_1);
      do {
        if (((*plVar4 == 0) || (plVar4[1] == -1)) ||
           (lVar2 = *(longlong *)(*plVar4 + 0xd0), plVar4[1] != lVar2)) {
          bVar13 = false;
        }
        else {
          bVar13 = lVar2 != *(longlong *)(*(longlong *)*param_2 + 0xd0);
        }
        if (bVar12 != bVar13) break;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar8 = uVar8 + 1;
        plVar4 = plVar4 + 0x10;
      } while ((longlong)uVar8 < lVar9);
    }
    iVar5 = (int)uVar7 - iVar6;
    if (bVar12 == false) {
      plVar4 = (longlong *)((longlong)iVar6 * 0x80 + *param_1);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        lVar2 = *plVar4;
        if (((lVar2 != 0) && (plVar4[1] != -1)) && (plVar4[1] == *(longlong *)(lVar2 + 0xd0))) {
          *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
          *plVar4 = 0;
          plVar4[1] = -1;
        }
        plVar4 = plVar4 + 0x10;
      }
    }
    else {
      iVar10 = (int)uVar11;
      if (iVar10 != iVar6) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x80 + *param_1),
                   (void *)((longlong)iVar6 * 0x80 + *param_1),(longlong)iVar5 << 7);
      }
      uVar11 = (ulonglong)(uint)(iVar10 + iVar5);
    }
    bVar12 = (bool)(bVar12 ^ 1);
    if (lVar9 <= (longlong)uVar8) {
      *(int *)(param_1 + 1) = (int)uVar11;
      return iVar1 - (int)uVar11;
    }
  } while( true );
}



// FUNCTION 14058eb70 FUN_14058eb70 body=410 status=ok
// SIG undefined FUN_14058eb70(void)

int FUN_14058eb70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  plVar5 = (longlong *)*param_1;
  uVar9 = 0;
  plVar2 = (longlong *)*param_2;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if ((((int)plVar2[2] == (int)plVar5[2]) && (*plVar5 == *plVar2)) && (plVar5[1] == plVar2[1])) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  do {
    iVar8 = (int)uVar9;
    uVar10 = uVar10 + 1;
    uVar9 = (ulonglong)(iVar8 + 1);
    if ((longlong)uVar10 < lVar11) {
      plVar2 = (longlong *)*param_2;
      plVar5 = (longlong *)(*param_1 + uVar10 * 0x18);
      do {
        if ((((int)plVar2[2] == (int)plVar5[2]) && (*plVar5 == *plVar2)) && (plVar5[1] == plVar2[1])
           ) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar7 != bVar4) break;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        plVar5 = plVar5 + 3;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar6 = (int)uVar9 - iVar8;
    if (bVar7 == 0) {
      plVar5 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar3 = *plVar5;
        if (((lVar3 != 0) && (plVar5[1] != -1)) && (plVar5[1] == *(longlong *)(lVar3 + 0xd0))) {
          *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
          *plVar5 = 0;
          plVar5[1] = -1;
        }
        plVar5 = plVar5 + 3;
      }
    }
    else {
      iVar12 = (int)uVar13;
      if (iVar12 != iVar8) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar12 * 0x18),
                   (void *)(*param_1 + (longlong)iVar8 * 0x18),(longlong)iVar6 * 0x18);
      }
      uVar13 = (ulonglong)(uint)(iVar12 + iVar6);
    }
    bVar7 = bVar7 ^ 1;
    if (lVar11 <= (longlong)uVar10) {
      *(int *)(param_1 + 1) = (int)uVar13;
      return iVar1 - (int)uVar13;
    }
  } while( true );
}



// FUNCTION 14058ed10 FUN_14058ed10 body=397 status=ok
// SIG undefined FUN_14058ed10(void)

int FUN_14058ed10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  int local_res8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  lVar8 = *(longlong *)*param_1;
  local_res8 = 0;
  if ((lVar8 == 0) ||
     (*(int *)(lVar8 + 0x2e4) = *(int *)(lVar8 + 0x2e4) + 1, *(longlong *)(lVar8 + 200) != *param_2)
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  if (lVar8 != 0) {
    FUN_1405a53f0();
  }
  lVar8 = 0;
  iVar6 = iVar5;
joined_r0x00014058eda2:
  do {
    lVar8 = lVar8 + 1;
    iVar5 = iVar5 + 1;
    if (lVar8 < iVar1) {
      lVar2 = *(longlong *)(*param_1 + lVar8 * 8);
      if ((lVar2 == 0) ||
         (*(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1,
         *(longlong *)(lVar2 + 200) != *param_2)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (lVar2 != 0) {
        FUN_1405a53f0();
      }
      if (bVar9 == bVar3) goto joined_r0x00014058eda2;
    }
    iVar7 = iVar5 - iVar6;
    if (bVar9 == 0) {
      plVar4 = (longlong *)(*param_1 + (longlong)iVar6 * 8);
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar4 != 0) {
          FUN_1405a53f0();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      }
    }
    else {
      if (local_res8 != iVar6) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)local_res8 * 8),
                   (void *)(*param_1 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
      }
      local_res8 = local_res8 + iVar7;
    }
    bVar9 = bVar9 ^ 1;
    iVar6 = iVar5;
    if (iVar1 <= lVar8) {
      *(int *)(param_1 + 1) = local_res8;
      return iVar1 - local_res8;
    }
  } while( true );
}



// FUNCTION 14058eea0 FUN_14058eea0 body=463 status=ok
// SIG undefined FUN_14058eea0(void)

int FUN_14058eea0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  int local_res8;
  
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  plVar6 = (longlong *)*param_1;
  local_res8 = 0;
  if (((*plVar6 == 0) || (plVar6[1] == -1)) || (plVar6[1] != *(longlong *)(*plVar6 + 0xd0))) {
    bVar13 = 0;
  }
  else {
    FUN_1405affa0(*param_2,plVar6,*(undefined8 *)param_2[1]);
    bVar13 = 1;
  }
  lVar12 = 0;
  iVar10 = 0;
  do {
    lVar12 = lVar12 + 1;
    iVar11 = iVar10 + 1;
    if (lVar12 < lVar8) {
      lVar9 = lVar12 * 0x80;
      do {
        lVar3 = *(longlong *)(lVar9 + *param_1);
        lVar1 = lVar9 + *param_1;
        if (((lVar3 == 0) || (lVar4 = *(longlong *)(lVar1 + 8), lVar4 == -1)) ||
           (lVar4 != *(longlong *)(lVar3 + 0xd0))) {
          bVar5 = 0;
        }
        else {
          FUN_1405affa0(*param_2,lVar1,*(undefined8 *)param_2[1]);
          bVar5 = 1;
        }
        if (bVar13 != bVar5) break;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar9 = lVar9 + 0x80;
      } while (lVar12 < lVar8);
    }
    iVar7 = iVar11 - iVar10;
    if (bVar13 == 0) {
      plVar6 = (longlong *)((longlong)iVar10 * 0x80 + *param_1);
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        lVar9 = *plVar6;
        if (((lVar9 != 0) && (plVar6[1] != -1)) && (plVar6[1] == *(longlong *)(lVar9 + 0xd0))) {
          *(int *)(lVar9 + 0x2e8) = *(int *)(lVar9 + 0x2e8) + -1;
          *plVar6 = 0;
          plVar6[1] = -1;
        }
        plVar6 = plVar6 + 0x10;
      }
    }
    else {
      if (local_res8 != iVar10) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res8 * 0x80 + *param_1),
                   (void *)((longlong)iVar10 * 0x80 + *param_1),(longlong)iVar7 << 7);
      }
      local_res8 = local_res8 + iVar7;
    }
    bVar13 = bVar13 ^ 1;
    iVar10 = iVar11;
    if (lVar8 <= lVar12) {
      *(int *)(param_1 + 1) = local_res8;
      return iVar2 - local_res8;
    }
  } while( true );
}



// FUNCTION 14058f070 FUN_14058f070 body=384 status=ok
// SIG undefined FUN_14058f070(void)

undefined8 * FUN_14058f070(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fce2b8;
  param_1[0x8b] = &PTR_LAB_143fce9b0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 1;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AkAudioComponent0",1);
  uVar1 = *puVar2;
  uVar3 = AUGDoor::GetPrivateStaticClass();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = lVar4;
  *(undefined1 *)(lVar4 + 0x2e0) = 1;
  param_1[0x2d] = param_1[0x8c];
  *(undefined1 *)(param_1[0x8c] + 0x2f8) = 0;
  lVar4 = *(longlong *)(param_1[0x8c] + 0x378);
  *(undefined1 *)(param_1[0x8c] + 0x311) = 3;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1, lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x62) = 3;
    FUN_1405a53f0();
  }
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x447a0000;
  AActor::SetActorTickEnabled(param_1,0);
  return param_1;
}



// FUNCTION 14058f1f0 FUN_14058f1f0 body=975 status=ok
// SIG undefined FUN_14058f1f0(void)

undefined8 * FUN_14058f1f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_143fce268;
  lVar4 = 0x40;
  puVar1 = param_1 + 0x3f;
  puVar2 = (undefined8 *)0x0;
  do {
    puVar1[-0x37] = 0;
    puVar1[-0x36] = 0;
    puVar1[-0x35] = 0;
    puVar1[-0x34] = 0xffffffffffffffff;
    puVar1[-0x31] = 0;
    puVar1[-0x30] = 0;
    puVar1[-0x2e] = 0;
    puVar1[-0x2d] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0xffffffffffffffff;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x4d] = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0xffffffffffffffff;
    puVar1[0x53] = 0;
    puVar1[0x54] = 0;
    puVar1[0x56] = 0;
    puVar1[0x57] = 0;
    puVar1[0x81] = 0;
    puVar1[0x82] = 0;
    puVar1[0x83] = 0;
    puVar1[0x84] = 0;
    puVar1[0x85] = 0;
    puVar1[0x86] = 0;
    puVar1[0x8f] = 0;
    puVar1[0x90] = 0;
    puVar1[0x91] = 0;
    puVar1[0x92] = 0xffffffffffffffff;
    puVar1[0x95] = 0;
    puVar1[0x96] = 0;
    puVar1[0x98] = 0;
    puVar1[0x99] = 0;
    puVar1[0xc3] = 0;
    puVar1[0xc4] = 0;
    puVar1[0xc5] = 0;
    puVar1[0xc6] = 0;
    puVar1[199] = 0;
    puVar1[200] = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0xffffffffffffffff;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    puVar1[0x105] = 0;
    puVar1[0x106] = 0;
    puVar1[0x107] = 0;
    puVar1[0x108] = 0;
    puVar1[0x109] = 0;
    puVar1[0x10a] = 0;
    puVar1[0x113] = 0;
    puVar1[0x114] = 0;
    puVar1[0x115] = 0;
    puVar1[0x116] = 0xffffffffffffffff;
    puVar1[0x119] = 0;
    puVar1[0x11a] = 0;
    puVar1[0x11c] = 0;
    puVar1[0x11d] = 0;
    puVar1[0x147] = 0;
    puVar1[0x148] = 0;
    puVar1[0x149] = 0;
    puVar1[0x14a] = 0;
    puVar1[0x14b] = 0;
    puVar1[0x14c] = 0;
    puVar1[0x155] = 0;
    puVar1[0x156] = 0;
    puVar1[0x157] = 0;
    puVar1[0x158] = 0xffffffffffffffff;
    puVar1[0x15b] = 0;
    puVar1[0x15c] = 0;
    puVar1[0x15e] = 0;
    puVar1[0x15f] = 0;
    puVar1[0x189] = 0;
    puVar1[0x18a] = 0;
    puVar1[0x18b] = 0;
    puVar1[0x18c] = 0;
    puVar1[0x18d] = 0;
    puVar1[0x18e] = 0;
    puVar1[0x197] = 0;
    puVar1[0x198] = 0;
    puVar1[0x199] = 0;
    puVar1[0x19a] = 0xffffffffffffffff;
    puVar1[0x19d] = 0;
    puVar1[0x19e] = 0;
    puVar1[0x1a0] = 0;
    puVar1[0x1a1] = 0;
    puVar1[0x1cb] = 0;
    puVar1[0x1cc] = 0;
    puVar1[0x1cd] = 0;
    puVar1[0x1ce] = 0;
    puVar1[0x1cf] = 0;
    puVar1[0x1d0] = 0;
    puVar1 = puVar1 + 0x210;
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x1081) = 0;
  *(undefined4 *)((longlong)param_1 + 0x840c) = 0;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  param_1[0x1083] = puVar2;
  param_1[0x1082] = puVar2;
  uVar3 = FUN_1415ab270(0);
  param_1[0x1084] = uVar3;
  *(undefined1 *)(param_1 + 0x1085) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1086));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1086),4000);
  param_1[0x108b] = 0;
  return param_1;
}



// FUNCTION 14058f5c0 FEntry body=328 status=ok
// SIG undefined FEntry(void)

undefined8 * FMovieSceneExecutionTokens::FEntry::FEntry(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(byte *)((longlong)param_1 + 100) =
       *(byte *)((longlong)param_1 + 100) ^
       (*(byte *)((longlong)param_1 + 100) ^ *(byte *)((longlong)param_2 + 100)) & 1;
  bVar2 = (*(byte *)((longlong)param_2 + 100) ^ *(byte *)((longlong)param_1 + 100)) & 2 ^
          *(byte *)((longlong)param_1 + 100);
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (*(byte *)((longlong)param_2 + 100) ^ bVar2) & 4 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 100)) & 8 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 100)) & 0x10 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  *(byte *)((longlong)param_1 + 100) = (bVar2 ^ *(byte *)((longlong)param_2 + 100)) & 0x20 ^ bVar2;
  bVar2 = *(byte *)(param_1 + 0x15);
  *(byte *)(param_1 + 0x15) = bVar2 & 0xfe | 2;
  if ((*(byte *)(param_2 + 0x15) & 1) != 0) {
    *(byte *)(param_1 + 0x15) = bVar2 & 0xfe | 3;
    *(byte *)(param_2 + 0x15) = *(byte *)(param_2 + 0x15) & 0xfe;
    bVar2 = *(byte *)(param_2 + 0x15);
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfd;
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | bVar2 & 2;
    uVar1 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar1;
    uVar1 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar1;
    uVar1 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar1;
    uVar1 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = uVar1;
  }
  return param_1;
}



// FUNCTION 14058f710 FEntry body=318 status=ok
// SIG undefined FEntry(void)

undefined8 *
FMovieSceneExecutionTokens::FEntry::FEntry
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_3[1];
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x24) = *param_4;
  param_1[5] = *(undefined8 *)(param_4 + 4);
  *(undefined1 *)(param_1 + 6) = param_4[0xc];
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(param_4 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_4 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(param_4 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_4 + 0x3c);
  *(byte *)((longlong)param_1 + 100) =
       *(byte *)((longlong)param_1 + 100) ^ (*(byte *)((longlong)param_1 + 100) ^ param_4[0x40]) & 1
  ;
  bVar2 = (*(byte *)((longlong)param_1 + 100) ^ param_4[0x40]) & 2 ^
          *(byte *)((longlong)param_1 + 100);
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (bVar2 ^ param_4[0x40]) & 4 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (bVar2 ^ param_4[0x40]) & 8 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  bVar2 = (bVar2 ^ param_4[0x40]) & 0x10 ^ bVar2;
  *(byte *)((longlong)param_1 + 100) = bVar2;
  *(byte *)((longlong)param_1 + 100) = (bVar2 ^ param_4[0x40]) & 0x20 ^ bVar2;
  bVar2 = *(byte *)(param_1 + 0x15);
  *(byte *)(param_1 + 0x15) = bVar2 & 0xfe | 2;
  if ((*(byte *)(param_5 + 8) & 1) != 0) {
    *(byte *)(param_1 + 0x15) = bVar2 & 0xfe | 3;
    *(byte *)(param_5 + 8) = *(byte *)(param_5 + 8) & 0xfe;
    bVar2 = *(byte *)(param_5 + 8);
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfd;
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | bVar2 & 2;
    uVar1 = param_5[1];
    param_1[0xd] = *param_5;
    param_1[0xe] = uVar1;
    uVar1 = param_5[3];
    param_1[0xf] = param_5[2];
    param_1[0x10] = uVar1;
    uVar1 = param_5[5];
    param_1[0x11] = param_5[4];
    param_1[0x12] = uVar1;
    uVar1 = param_5[7];
    param_1[0x13] = param_5[6];
    param_1[0x14] = uVar1;
  }
  return param_1;
}



// FUNCTION 14058f850 GetAllCheats body=13 status=ok
// SIG undefined GetAllCheats(void)

undefined8 * UCheatManagerGunfire::GetAllCheats(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14058f860 operator= body=17 status=ok
// SIG undefined operator=(void)

undefined8 * FIoRequest::operator=(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14058f880 FUN_14058f880 body=21 status=ok
// SIG undefined FUN_14058f880(void)

longlong * FUN_14058f880(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
  }
  return param_1;
}



// FUNCTION 14058f8a0 FUN_14058f8a0 body=47 status=ok
// SIG undefined FUN_14058f8a0(void)

longlong * FUN_14058f8a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = *param_2;
  if (((lVar1 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar1 + 0xd0))) {
    *param_1 = lVar1;
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
  }
  return param_1;
}



// FUNCTION 14058f8d0 FUN_14058f8d0 body=18 status=ok
// SIG undefined FUN_14058f8d0(void)

longlong * FUN_14058f8d0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x2e4) = *(int *)(param_2 + 0x2e4) + 1;
  }
  return param_1;
}



// FUNCTION 14058f8f0 FUN_14058f8f0 body=46 status=ok
// SIG undefined FUN_14058f8f0(void)

longlong * FUN_14058f8f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[1] = -1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xd0) != -1)) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + 1;
    param_1[1] = *(longlong *)(lVar1 + 0xd0);
  }
  return param_1;
}



// FUNCTION 14058f920 FUN_14058f920 body=43 status=ok
// SIG undefined FUN_14058f920(void)

longlong * FUN_14058f920(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  param_1[1] = -1;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xd0) != -1)) {
    *(int *)(param_2 + 0x2e8) = *(int *)(param_2 + 0x2e8) + 1;
    param_1[1] = *(longlong *)(param_2 + 0xd0);
  }
  return param_1;
}



// FUNCTION 14058f950 FUN_14058f950 body=507 status=ok
// SIG undefined FUN_14058f950(void)

undefined8 * FUN_14058f950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fcb808;
  FUN_14058fb50(param_1 + 1,param_1);
  param_1[10] = param_1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xbff0000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4b),4000);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  return param_1;
}



// FUNCTION 14058fb50 FUN_14058fb50 body=698 status=ok
// SIG undefined FUN_14058fb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14058fb50(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  *(undefined1 *)(param_1 + 1) = 0;
  lVar8 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar2 = GetTransientPackage();
      FUN_1417846f0(uVar2,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar3 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
      iVar7 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar5 = iVar7 >> 0x1f & 0xffff;
        uVar1 = iVar7 + uVar5;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                (longlong)(int)((uVar1 & 0xffff) - uVar5) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = &PTR_FUN_143fcb7b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  iVar7 = 1000;
  param_1[7] = 0;
  param_1[8] = 1000;
  FUN_1405a8240(param_1 + 7,0);
  puVar4 = (undefined4 *)(param_1[7] + 0x88);
  do {
    *(undefined8 *)(puVar4 + -0x12) = 0;
    *(undefined8 *)(puVar4 + -0xe) = 0;
    *(undefined2 *)(puVar4 + -10) = 2;
    *(undefined1 *)((longlong)puVar4 + -0x26) = 1;
    puVar4[-9] = 0;
    puVar4[-8] = 0x3f800000;
    puVar4[-7] = 0x3f800000;
    *(undefined8 *)(puVar4 + -6) = 0;
    puVar4[-4] = 0;
    *(undefined8 *)(puVar4 + -2) = 0;
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    puVar4[8] = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    puVar4[0xc] = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x12) = 0xffffffffffffffff;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    *(undefined8 *)(puVar4 + 0x16) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    puVar4[0x1a] = 0;
    *(undefined2 *)(puVar4 + 0x1c) = 0;
    *(undefined8 *)(puVar4 + 0x22) = 0;
    *(undefined8 *)(puVar4 + 0x24) = 0;
    *(undefined8 *)(puVar4 + 0x26) = _DAT_1468b5d90;
    puVar4[0x28] = DAT_1468b5d98;
    puVar4[0x29] = 0;
    *(undefined8 *)(puVar4 + 0x2a) = 0;
    *(undefined2 *)(puVar4 + 0x2c) = 0x101;
    puVar4[0x2d] = 0;
    *(undefined8 *)(puVar4 + 0x2e) = _DAT_1468b5d90;
    puVar4[0x30] = DAT_1468b5d98;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    *(undefined8 *)(puVar4 + 0x84) = 0;
    *(undefined2 *)(puVar4 + 0x86) = 0;
    puVar4[0x87] = 0x3f800000;
    *(undefined8 *)(puVar4 + 0x8a) = 0;
    *(undefined8 *)(puVar4 + 0x8c) = 0;
    *(undefined8 *)(puVar4 + 0x90) = 0;
    *(undefined8 *)(puVar4 + 0x92) = 0;
    *(undefined8 *)(puVar4 + 0x94) = 0;
    *(undefined1 *)(puVar4 + 0x96) = 0;
    *(undefined8 *)(puVar4 + 0x97) = 0;
    iVar7 = iVar7 + -1;
    puVar4 = puVar4 + 0xbc;
  } while (iVar7 != 0);
  lVar8 = param_1[7];
  lVar6 = (longlong)*(int *)(param_1 + 8) * 0x2f0 + lVar8;
  for (; lVar8 != lVar6; lVar8 = lVar8 + 0x2f0) {
    iVar7 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar7);
    }
    *(longlong *)(param_1[2] + (longlong)iVar7 * 8) = lVar8;
  }
  return param_1;
}



// FUNCTION 14058fe10 FUN_14058fe10 body=226 status=ok
// SIG undefined FUN_14058fe10(void)

longlong FUN_14058fe10(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  return param_1;
}



// FUNCTION 14058ff00 FUN_14058ff00 body=265 status=ok
// SIG undefined FUN_14058ff00(void)

undefined8 * FUN_14058ff00(undefined8 *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  if (param_3 != 0) {
    local_18 = (wchar_t *)0x0;
    local_10 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    pwVar3 = local_18;
    FGenericPlatformString::Convert<char,wchar_t>(local_18,0x10,"External_Source",0x10,0x3f);
    pwVar5 = L"";
    if ((int)local_10 != 0) {
      pwVar5 = pwVar3;
    }
    uVar4 = AK::SoundEngine::GetIDFromString(pwVar5);
    iVar1 = *(int *)(param_1 + 2);
    local_18 = (wchar_t *)CONCAT44(param_3,uVar4);
    local_10 = CONCAT71(local_10._1_7_,param_4);
    *(int *)(param_1 + 2) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x14) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar1);
    }
    lVar2 = param_1[1];
    *(wchar_t **)(lVar2 + (longlong)iVar1 * 0xc) = local_18;
    *(int *)(lVar2 + (longlong)iVar1 * 0xc + 8) = (int)local_10;
    if (pwVar3 != (wchar_t *)0x0) {
      FMemory::Free(pwVar3);
    }
  }
  return param_1;
}



// FUNCTION 140590010 FUN_140590010 body=98 status=ok
// SIG undefined FUN_140590010(void)

longlong * FUN_140590010(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[1] = -1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xd0) != -1)) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + 1;
    param_1[1] = *(longlong *)(lVar1 + 0xd0);
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  lVar1 = *param_2;
  if (((lVar1 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *param_2 = 0;
    param_2[1] = -1;
  }
  return param_1;
}



// FUNCTION 140590080 FUN_140590080 body=20 status=ok
// SIG undefined FUN_140590080(void)

undefined8 * FUN_140590080(undefined8 *param_1)

{
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1405900a0 FUN_1405900a0 body=33 status=ok
// SIG undefined FUN_1405900a0(void)

undefined8 * FUN_1405900a0(undefined8 *param_1)

{
  FUN_1424e0120();
  *param_1 = &PTR_FUN_143fcb830;
  return param_1;
}



// FUNCTION 1405900d0 FUN_1405900d0 body=33 status=ok
// SIG undefined FUN_1405900d0(void)

undefined8 * FUN_1405900d0(undefined8 *param_1)

{
  FUN_1424e0120();
  *param_1 = &PTR_FUN_143fcbac8;
  return param_1;
}



// FUNCTION 140590100 UInterpTrackAkAudioEvent body=205 status=ok
// SIG undefined UInterpTrackAkAudioEvent(void)

undefined8 * UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424e0c30();
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143fcbd60;
  param_1[5] = &PTR_FUN_143fcc0d0;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = UInterpTrackInstAkAudioEvent::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Ak Audio Event") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xf);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xf;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar2);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Ak Audio Event",0xf);
  }
  return param_1;
}



// FUNCTION 1405901d0 FUN_1405901d0 body=170 status=ok
// SIG undefined FUN_1405901d0(void)

undefined8 * FUN_1405901d0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_1424dfdd0();
  *param_1 = &PTR_FUN_143fcd1b8;
  param_1[5] = &PTR_FUN_143fcd528;
  param_1[6] = &PTR_SetMonitoring_143fcc158;
  uVar1 = UInterpTrackInstAkAudioEvent::GetPrivateStaticClass();
  param_1[9] = uVar1;
  if ((wchar_t *)param_1[0xb] != L"Ak Audio RTPC") {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0xe);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2 + 0xe;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"Ak Audio RTPC",0xe);
  }
  return param_1;
}



// FUNCTION 140590280 FUN_140590280 body=65 status=ok
// SIG undefined FUN_140590280(void)

undefined8 * FUN_140590280(undefined8 *param_1)

{
  UMovieSceneSection::UMovieSceneSection();
  *(undefined4 *)(param_1 + 0x1f) = 0x41c80000;
  *param_1 = &PTR_FUN_143fcdef0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 10) = 0x101;
  return param_1;
}



// FUNCTION 1405902d0 UFMODSnapshotReverb body=43 status=ok
// SIG undefined UFMODSnapshotReverb(void)

undefined8 * UFMODSnapshotReverb::UFMODSnapshotReverb(undefined8 *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack();
  *param_1 = &PTR__scalar_deleting_destructor__143fcdbe0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140590300 FUN_140590300 body=51 status=ok
// SIG undefined FUN_140590300(void)

undefined8 * FUN_140590300(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143fcec48;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 140590340 FUN_140590340 body=477 status=ok
// SIG undefined FUN_140590340(void)

longlong * FUN_140590340(longlong *param_1)

{
  FUN_14237f6c0();
  *param_1 = (longlong)&PTR_FUN_143fcc428;
  param_1[5] = (longlong)&PTR_LAB_143fcc978;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  param_1[0x81] = 0;
  param_1[0x82] = -1;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 0x86) = 2;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xf7;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x60;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 0x10;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf3 | 1;
  param_1[0x7f] = -0x4010000000000000;
  *(undefined1 *)((longlong)param_1 + 0x403) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined1 *)((longlong)param_1 + 0x311) = 1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  (**(code **)(*param_1 + 0x358))(param_1,0);
  if (*(char *)((longlong)param_1 + 0x401) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x401) = 1;
    if ((param_1[0x6f] != 0) && (*(longlong *)(param_1[0x6f] + 0xe0) != 0)) {
      FUN_1405acdf0(param_1);
      FUN_1405b17d0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 140590520 FUN_140590520 body=33 status=ok
// SIG undefined FUN_140590520(void)

undefined8 * FUN_140590520(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcc9a8;
  return param_1;
}



// FUNCTION 140590550 FUN_140590550 body=280 status=ok
// SIG undefined FUN_140590550(void)

undefined8 * FUN_140590550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xff7fffff;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *param_1 = &PTR_FUN_143fcf658;
  param_1[0x18] = &PTR_FUN_143fcf8e0;
  param_1[0x19] = &PTR_FUN_143fcf8f8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x2000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 140590670 FUN_140590670 body=33 status=ok
// SIG undefined FUN_140590670(void)

undefined8 * FUN_140590670(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcf3b0;
  return param_1;
}



// FUNCTION 1405906a0 FUN_1405906a0 body=50 status=ok
// SIG undefined FUN_1405906a0(void)

undefined8 * FUN_1405906a0(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__143fcaa38;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1405906e0 FUN_1405906e0 body=123 status=ok
// SIG undefined FUN_1405906e0(void)

undefined8 * FUN_1405906e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcc1a0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xff7fffff;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140590760 FUN_140590760 body=44 status=ok
// SIG undefined FUN_140590760(void)

undefined8 * FUN_140590760(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_143fcacb0;
  param_1[5] = &PTR_LAB_143fcb200;
  return param_1;
}



// FUNCTION 140590790 FUN_140590790 body=80 status=ok
// SIG undefined FUN_140590790(void)

undefined8 * FUN_140590790(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_143fcb230;
  param_1[5] = &PTR_LAB_143fcb780;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf5;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xdf;
  param_1[0x61] = 0;
  return param_1;
}



// FUNCTION 1405907e0 FUN_1405907e0 body=58 status=ok
// SIG undefined FUN_1405907e0(void)

undefined8 * FUN_1405907e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fccc30;
  param_1[7] = &PTR_LAB_143fcceb8;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140590820 FUN_140590820 body=33 status=ok
// SIG undefined FUN_140590820(void)

undefined8 * FUN_140590820(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fca7c0;
  return param_1;
}



// FUNCTION 140590850 FUN_140590850 body=47 status=ok
// SIG undefined FUN_140590850(void)

undefined8 * FUN_140590850(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fce9d0;
  *(undefined4 *)(param_1 + 6) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xff7fffff;
  return param_1;
}



// FUNCTION 140590880 FUN_140590880 body=832 status=ok
// SIG undefined FUN_140590880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140590880(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_298 [32];
  undefined2 local_278;
  longlong local_268;
  undefined8 local_260;
  short local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FUN_141781840();
  lVar3 = 0;
  *param_1 = &PTR_FUN_143fceec0;
  plVar1 = param_1 + 5;
  *plVar1 = 0;
  plVar2 = param_1 + 0x26;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar5 = -1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  uVar7 = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *plVar2 = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xc1a00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FWindowsPlatformMisc::GetEnvironmentVariable(L"WWISEROOT",local_258,0x104);
  local_268 = 0;
  local_260 = (ulonglong)(uint)local_260;
  uVar6 = uVar7;
  if (local_258[0] != 0) {
    do {
      lVar5 = lVar5 + 1;
    } while (local_258[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_260 = (ulonglong)uVar4;
    uVar7 = uVar4;
    uVar6 = 0;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      uVar7 = (uint)local_260;
      uVar6 = local_260._4_4_;
    }
    lVar3 = local_268;
    FGenericPlatformString::Memcpy(local_268,local_258,(longlong)(int)uVar4 * 2);
  }
  if (plVar1 == &local_268) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar3;
    *(uint *)(param_1 + 6) = uVar7;
    *(uint *)((longlong)param_1 + 0x34) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x23] = 0x80;
  local_268 = 0;
  local_260 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  lVar3 = local_268;
  local_278 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_268,0x12,"User_PlaybackMode");
  if (plVar2 == &local_268) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = lVar3;
    *(uint *)(param_1 + 0x27) = (uint)local_260;
    *(uint *)((longlong)param_1 + 0x13c) = local_260._4_4_;
  }
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x400;
  *(undefined4 *)(param_1 + 0x29) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3d800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x20000;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x42800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x41000000;
  *(undefined4 *)(param_1 + 0x2d) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3e000000;
  *(undefined4 *)(param_1 + 0x2e) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f666666;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80;
  return param_1;
}



// FUNCTION 140590bc0 FUN_140590bc0 body=43 status=ok
// SIG undefined FUN_140590bc0(void)

undefined8 * FUN_140590bc0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fcfb10;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140590bf0 FUN_140590bf0 body=43 status=ok
// SIG undefined FUN_140590bf0(void)

undefined8 * FUN_140590bf0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143f597b0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140590c20 FUN_140590c20 body=80 status=ok
// SIG undefined FUN_140590c20(void)

undefined8 * FUN_140590c20(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 8) = 0x40a00000;
  *param_1 = &PTR_FUN_143fcf138;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 6) = DAT_1464aa730;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_1464aa738;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa750;
  *(undefined4 *)((longlong)param_1 + 0x3c) = DAT_1464aa754;
  return param_1;
}



// FUNCTION 140590c70 FUN_140590c70 body=58 status=ok
// SIG undefined FUN_140590c70(void)

undefined8 * FUN_140590c70(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fccee0;
  param_1[7] = &PTR_LAB_143fcd168;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140590cb0 ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator> body=190 status=ok
// SIG undefined ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>(void)

void TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
     ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
               (longlong *param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  
  lVar3 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    pbVar4 = (byte *)(lVar3 + 0x28);
    do {
      bVar1 = pbVar4[0x28];
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar4 + 8;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar4 + 8);
        }
        pbVar4[0x28] = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)(pbVar2,0);
        if ((pbVar4[0x28] & 2) == 0) {
          FMemory::Free(*(undefined8 *)(pbVar4 + 8));
        }
      }
      bVar1 = *pbVar4;
      if ((bVar1 & 1) != 0) {
        pbVar2 = pbVar4 + -0x20;
        if ((bVar1 & 2) == 0) {
          pbVar2 = *(byte **)(pbVar4 + -0x20);
        }
        *pbVar4 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar2)();
        if ((*pbVar4 & 2) == 0) {
          FMemory::Free(*(undefined8 *)(pbVar4 + -0x20));
        }
      }
      pbVar4 = pbVar4 + 0x58;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140590d70 FUN_140590d70 body=103 status=ok
// SIG undefined FUN_140590d70(void)

void FUN_140590d70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1405a53f0();
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 140590de0 FUN_140590de0 body=95 status=ok
// SIG undefined FUN_140590de0(void)

void FUN_140590de0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
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



// FUNCTION 140590e40 FUN_140590e40 body=236 status=ok
// SIG undefined FUN_140590e40(void)

void FUN_140590e40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x2b0);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0x34] != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + -0x40);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + -0x42);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + -0x44);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + -0x46);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + -0x48);
      if (plVar2[-0x4e] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x5e;
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



// FUNCTION 140590f30 ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 140590fa0 FUN_140590fa0 body=166 status=ok
// SIG undefined FUN_140590fa0(void)

void FUN_140590fa0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x50) != -1)) &&
     (*(longlong *)(param_1 + 0x50) == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140591050 FUN_140591050 body=13 status=ok
// SIG undefined FUN_140591050(void)

void FUN_140591050(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
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



// FUNCTION 140591060 FUN_140591060 body=49 status=ok
// SIG undefined FUN_140591060(void)

void FUN_140591060(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405910a0 FUN_1405910a0 body=111 status=ok
// SIG undefined FUN_1405910a0(void)

void FUN_1405910a0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_140590d70(param_1 + 2);
  iVar3 = *(int *)(param_1 + 1);
  plVar2 = (longlong *)*param_1;
  if (iVar3 != 0) {
    do {
      lVar1 = *plVar2;
      if (((lVar1 != 0) && (plVar2[1] != -1)) && (plVar2[1] == *(longlong *)(lVar1 + 0xd0))) {
        *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
        *plVar2 = 0;
        plVar2[1] = -1;
      }
      plVar2 = plVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140591110 FUN_140591110 body=103 status=ok
// SIG undefined FUN_140591110(void)

void FUN_140591110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fcb7b0;
  FUN_140590e40(param_1 + 7);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
    return;
  }
  return;
}



// FUNCTION 140591180 FUN_140591180 body=108 status=ok
// SIG undefined FUN_140591180(void)

void FUN_140591180(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1405911f0 FUN_1405911f0 body=119 status=ok
// SIG undefined FUN_1405911f0(void)

void FUN_1405911f0(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140591270 operator= body=209 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1 + 2 != param_2 + 2) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140591350 FUN_140591350 body=75 status=ok
// SIG undefined FUN_140591350(void)

longlong * FUN_140591350(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != *param_1) {
    if (*param_1 != 0) {
      FUN_1405a53f0();
      *param_1 = 0;
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      *param_1 = lVar1;
      *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    }
  }
  return param_1;
}



// FUNCTION 1405913a0 FUN_1405913a0 body=128 status=ok
// SIG undefined FUN_1405913a0(void)

longlong * FUN_1405913a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != *param_2) || (param_1[1] != param_2[1])) {
    if ((lVar1 != 0) && ((param_1[1] != -1 && (param_1[1] == *(longlong *)(lVar1 + 0xd0))))) {
      *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
      *param_1 = 0;
      param_1[1] = -1;
    }
    lVar1 = *param_2;
    if (((lVar1 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar1 + 0xd0))) {
      *param_1 = lVar1;
      param_1[1] = param_2[1];
      if (*(longlong *)(lVar1 + 0xd0) != -1) {
        *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + 1;
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 140591420 FUN_140591420 body=1013 status=ok
// SIG undefined FUN_140591420(void)

void * FUN_140591420(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x40) == 0) {
      _guard_xfg_dispatch_icall_nop(param_1,param_2,0x40);
    }
    if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x60) = *(undefined1 *)((longlong)param_2 + 0x60);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)param_1 + 0x70,(longlong)param_2 + 0x70);
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)param_1 + 0x80,(longlong)param_2 + 0x80);
  plVar1 = (longlong *)((longlong)param_1 + 0x90);
  if ((longlong *)((longlong)param_2 + 0x90) != plVar1) {
    if ((*(int *)((longlong)param_2 + 0x98) == 0) ||
       (plVar2 = *(longlong **)((longlong)param_2 + 0x90), plVar2 == (longlong *)0x0)) {
      if ((*(int *)((longlong)param_1 + 0x98) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)((longlong)param_1 + 0x98) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)param_1 + 0xa0,(longlong)param_2 + 0xa0);
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)param_1 + 0xb0,(longlong)param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
  *(undefined8 *)((longlong)param_1 + 200) = *(undefined8 *)((longlong)param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
  *(undefined1 *)((longlong)param_1 + 0xd8) = *(undefined1 *)((longlong)param_2 + 0xd8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xe4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xe8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xec);
  *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)((longlong)param_2 + 0xf0);
  *(undefined1 *)((longlong)param_1 + 0xf8) = *(undefined1 *)((longlong)param_2 + 0xf8);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)((longlong)param_2 + 0xf9);
  if ((void *)((longlong)param_1 + 0x100) != (void *)((longlong)param_2 + 0x100)) {
    if (*(longlong *)((longlong)param_2 + 0x110) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + 0x100),(void *)((longlong)param_2 + 0x100),0x10);
    }
    if (*(longlong *)((longlong)param_1 + 0x110) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
    *(undefined8 *)((longlong)param_2 + 0x110) = 0;
    *(undefined4 *)((longlong)param_1 + 0x118) = *(undefined4 *)((longlong)param_2 + 0x118);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
    *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined4 *)((longlong)param_1 + 0x128) = *(undefined4 *)((longlong)param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
  *(undefined1 *)((longlong)param_1 + 0x138) = *(undefined1 *)((longlong)param_2 + 0x138);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 0x148);
  if ((void *)((longlong)param_1 + 0x150) != (void *)((longlong)param_2 + 0x150)) {
    if (*(longlong *)((longlong)param_2 + 0x290) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + 0x150),(void *)((longlong)param_2 + 0x150),0x140);
    }
    if (*(longlong *)((longlong)param_1 + 0x290) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 0x290) = *(undefined8 *)((longlong)param_2 + 0x290);
    *(undefined8 *)((longlong)param_2 + 0x290) = 0;
    *(undefined4 *)((longlong)param_1 + 0x298) = *(undefined4 *)((longlong)param_2 + 0x298);
    *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)((longlong)param_2 + 0x29c);
    *(undefined8 *)((longlong)param_2 + 0x298) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x2a0) = *(undefined1 *)((longlong)param_2 + 0x2a0);
  *(undefined1 *)((longlong)param_1 + 0x2a1) = *(undefined1 *)((longlong)param_2 + 0x2a1);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)((longlong)param_2 + 0x2a4);
  if ((void *)((longlong)param_1 + 0x2a8) != (void *)((longlong)param_2 + 0x2a8)) {
    if (*(longlong *)((longlong)param_2 + 0x2b0) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + 0x2a8),(void *)((longlong)param_2 + 0x2a8),4);
    }
    if (*(longlong *)((longlong)param_1 + 0x2b0) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 0x2b0) = *(undefined8 *)((longlong)param_2 + 0x2b0);
    *(undefined8 *)((longlong)param_2 + 0x2b0) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2b8) = *(undefined4 *)((longlong)param_2 + 0x2b8);
    *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)((longlong)param_2 + 700);
    *(undefined8 *)((longlong)param_2 + 0x2b8) = 0;
  }
  if ((void *)((longlong)param_1 + 0x2c0) != (void *)((longlong)param_2 + 0x2c0)) {
    if (*(longlong *)((longlong)param_2 + 0x2c8) == 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_1 + 0x2c0),(void *)((longlong)param_2 + 0x2c0),4);
    }
    if (*(longlong *)((longlong)param_1 + 0x2c8) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 0x2c8) = *(undefined8 *)((longlong)param_2 + 0x2c8);
    *(undefined8 *)((longlong)param_2 + 0x2c8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2d0) = *(undefined4 *)((longlong)param_2 + 0x2d0);
    *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
    *(undefined8 *)((longlong)param_2 + 0x2d0) = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2d8) = *(undefined8 *)((longlong)param_2 + 0x2d8);
  *(undefined1 *)((longlong)param_1 + 0x2e0) = *(undefined1 *)((longlong)param_2 + 0x2e0);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(undefined4 *)((longlong)param_1 + 0x2e8) = *(undefined4 *)((longlong)param_2 + 0x2e8);
  return param_1;
}



// FUNCTION 140591860 FUN_140591860 body=37 status=ok
// SIG undefined FUN_140591860(void)

longlong FUN_140591860(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))(*(longlong **)(param_1 + 0x90),param_2,0,0);
  return param_1;
}



// FUNCTION 140591890 FUN_140591890 body=129 status=ok
// SIG undefined FUN_140591890(void)

void FUN_140591890(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (uint *)*param_1;
  LOCK();
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + *(int *)(param_1 + 2);
  UNLOCK();
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar3 < uVar4) {
    do {
      if (*(int *)(param_1 + 2) + uVar3 <= uVar4) {
        uVar4 = *(int *)(param_1 + 2) + uVar3;
      }
      (*(code *)param_1[4])(param_1[5],uVar3,uVar4,*(undefined4 *)(param_1 + 3),param_1[6]);
      LOCK();
      puVar1 = puVar2 + 1;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + *(int *)(param_1 + 2);
      UNLOCK();
      if (uVar3 + *(int *)(param_1 + 2) < *(uint *)((longlong)param_1 + 0x14)) {
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 + *(int *)(param_1 + 2);
        UNLOCK();
        uVar4 = *(uint *)((longlong)param_1 + 0x14);
      }
      else {
        (**(code **)(*DAT_146853918 + 0x10))();
        uVar3 = *(uint *)((longlong)param_1 + 0x14);
        uVar4 = uVar3;
      }
    } while (uVar3 < uVar4);
  }
  return;
}



// FUNCTION 140591920 FUN_140591920 body=207 status=ok
// SIG undefined FUN_140591920(void)

void FUN_140591920(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  cVar1 = FUN_14059ee90(*param_1 + 0x10);
  if (cVar1 == '\0') {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_1428741a0(DAT_146b17150,&local_38);
    if ((((int)local_30 != 0) && (*local_38 != 0)) &&
       (lVar2 = FUN_14059b7e0(*local_38,1), lVar2 != 0)) {
      lVar3 = FUN_1405a3150(lVar2,&local_28,*(undefined8 *)(*param_1 + 8),0);
      lVar2 = *param_1;
      FUN_1405913a0(lVar2 + 0x10,lVar3);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar3 + 0x10);
      if (((local_28 != 0) && (local_20 != -1)) && (local_20 == *(longlong *)(local_28 + 0xd0))) {
        *(int *)(local_28 + 0x2e8) = *(int *)(local_28 + 0x2e8) + -1;
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405919f0 FUN_1405919f0 body=283 status=ok
// SIG undefined FUN_1405919f0(void)

void FUN_1405919f0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x168) = 0;
    if (*(longlong *)(param_2 + 0x160) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_2 + 0x120);
    *(undefined4 *)(param_2 + 0x118) = 0;
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FMemory::Free();
    }
    FUN_140598770(param_2 + 0xd0,0);
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_2 + 200) = 0;
    if (*(longlong *)(param_2 + 0xc0) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_2 + 0x80);
    *(undefined4 *)(param_2 + 0x78) = 0;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_2 + 0x30,0);
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0x170);
  }
  return;
}



// FUNCTION 140591b10 FUN_140591b10 body=146 status=ok
// SIG undefined FUN_140591b10(void)

void FUN_140591b10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar2 = param_1[6];
  if (fVar2 != 0.0) {
    fVar1 = *param_2;
    if (*param_2 <= *param_1) {
      fVar1 = *param_1;
    }
    *param_1 = fVar1;
    fVar1 = param_2[1];
    if (param_2[1] <= param_1[1]) {
      fVar1 = param_1[1];
    }
    param_1[1] = fVar1;
    param_1[3] = ((float)(int)fVar2 * param_1[3] + param_2[3]) / (float)((int)fVar2 + 1);
    fVar1 = param_2[4];
    if (param_2[4] <= param_1[4]) {
      fVar1 = param_1[4];
    }
    param_1[4] = fVar1;
    fVar1 = param_2[5];
    if (param_2[5] <= param_1[5]) {
      fVar1 = param_1[5];
    }
    param_1[5] = fVar1;
    fVar1 = param_2[2];
    if (param_2[2] <= param_1[2]) {
      fVar1 = param_1[2];
    }
    param_1[2] = fVar1;
    param_1[6] = (float)((int)fVar2 + 1);
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  return;
}



// FUNCTION 140591c00 FUN_140591c00 body=43 status=ok
// SIG undefined FUN_140591c00(void)

undefined8 * FUN_140591c00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140591c30 FUN_140591c30 body=134 status=ok
// SIG undefined FUN_140591c30(void)

undefined8 * FUN_140591c30(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140591cc0 FUN_140591cc0 body=43 status=ok
// SIG undefined FUN_140591cc0(void)

undefined8 * FUN_140591cc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140591cf0 FUN_140591cf0 body=43 status=ok
// SIG undefined FUN_140591cf0(void)

undefined8 * FUN_140591cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140591d20 FUN_140591d20 body=97 status=ok
// SIG undefined FUN_140591d20(void)

undefined8 * FUN_140591d20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fca7b0;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140591d90 FUN_140591d90 body=43 status=ok
// SIG undefined FUN_140591d90(void)

undefined8 * FUN_140591d90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140591dc0 FUN_140591dc0 body=43 status=ok
// SIG undefined FUN_140591dc0(void)

undefined8 * FUN_140591dc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140591df0 FUN_140591df0 body=187 status=ok
// SIG undefined FUN_140591df0(void)

longlong FUN_140591df0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x520) = 0;
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4d8);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 140591eb0 FUN_140591eb0 body=43 status=ok
// SIG undefined FUN_140591eb0(void)

undefined8 * FUN_140591eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140591ee0 FUN_140591ee0 body=235 status=ok
// SIG undefined FUN_140591ee0(void)

undefined8 * FUN_140591ee0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_143fcfdc8;
  plVar5 = (longlong *)param_1[3];
  plVar1 = plVar5 + *(int *)(param_1 + 4);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar3 = (longlong *)*plVar5;
    if ((plVar3 != (longlong *)0x0) && (plVar4 = (longlong *)*plVar3, plVar4 != (longlong *)0x0)) {
      if (*(char *)((longlong)plVar4 + 0x71) == '\0') {
        (**(code **)(*plVar4 + 8))(plVar4,0);
        plVar3 = (longlong *)*plVar5;
        plVar4 = (longlong *)*plVar3;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)*plVar4)(plVar4,1);
        plVar3 = (longlong *)*plVar5;
      }
      FMemory::operator_delete(plVar3,0x18);
      *plVar5 = 0;
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140591fd0 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkWriteFileCustomParam::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__143fcfde0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140592030 FUN_140592030 body=356 status=ok
// SIG undefined FUN_140592030(void)

undefined8 * FUN_140592030(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_143fce268;
  FUN_1415b5910(param_1[0x1084]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1086));
  lVar5 = param_1[0x1083];
  while (lVar5 != 0) {
    puVar2 = (undefined8 *)param_1[0x1083];
    param_1[0x1083] = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar5 = param_1[0x1083];
  }
  lVar5 = 0x40;
  plVar4 = param_1 + 0x108b;
  do {
    plVar1 = plVar4 + -0x42;
    lVar5 = lVar5 + -1;
    if (plVar4[-0xd] != 0) {
      FMemory::Free();
    }
    if (plVar4[-0xf] != 0) {
      FMemory::Free();
    }
    if (plVar4[-0x11] != 0) {
      FMemory::Free();
    }
    if (plVar4[-0x3c] != 0) {
      FMemory::Free();
    }
    if (plVar4[-0x3f] != 0) {
      FMemory::Free();
    }
    lVar3 = plVar4[-0x43];
    if (((lVar3 != 0) && (*plVar1 != -1)) && (*plVar1 == *(longlong *)(lVar3 + 0xd0))) {
      *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
      plVar4[-0x43] = 0;
      *plVar1 = -1;
    }
    if (plVar4[-0x45] != 0) {
      FMemory::Free();
    }
    plVar4 = plVar1;
  } while (lVar5 != 0);
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8460);
  }
  return param_1;
}



// FUNCTION 1405921a0 FUN_1405921a0 body=96 status=ok
// SIG undefined FUN_1405921a0(void)

undefined8 * FUN_1405921a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (((lVar1 != 0) && (param_1[3] != -1)) && (param_1[3] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    param_1[2] = 0;
    param_1[3] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140592200 FUN_140592200 body=43 status=ok
// SIG undefined FUN_140592200(void)

undefined8 * FUN_140592200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140592230 FUN_140592230 body=43 status=ok
// SIG undefined FUN_140592230(void)

undefined8 * FUN_140592230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140592260 FUN_140592260 body=43 status=ok
// SIG undefined FUN_140592260(void)

undefined8 * FUN_140592260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140592290 FUN_140592290 body=43 status=ok
// SIG undefined FUN_140592290(void)

undefined8 * FUN_140592290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1405922c0 FUN_1405922c0 body=96 status=ok
// SIG undefined FUN_1405922c0(void)

undefined8 * FUN_1405922c0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (((lVar1 != 0) && (param_1[2] != -1)) && (param_1[2] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    param_1[1] = 0;
    param_1[2] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_FUN_143fcdb70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140592320 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FArchiveProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140592360 FUN_140592360 body=96 status=ok
// SIG undefined FUN_140592360(void)

undefined8 * FUN_140592360(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (((lVar1 != 0) && (param_1[2] != -1)) && (param_1[2] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    param_1[1] = 0;
    param_1[2] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1405923c0 FUN_1405923c0 body=43 status=ok
// SIG undefined FUN_1405923c0(void)

undefined8 * FUN_1405923c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1405923f0 FUN_1405923f0 body=96 status=ok
// SIG undefined FUN_1405923f0(void)

undefined8 * FUN_1405923f0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (((lVar1 != 0) && (param_1[2] != -1)) && (param_1[2] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    param_1[1] = 0;
    param_1[2] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140592450 FUN_140592450 body=373 status=ok
// SIG undefined FUN_140592450(void)

undefined8 * FUN_140592450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcb808;
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4b));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x47);
  FUN_1405910a0(param_1 + 0x43);
  FUN_1405919f0(param_1 + 0x42,param_1[0x42]);
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  if (param_1[0x37] != 0) {
    FMemory::Free();
  }
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  FUN_140591110(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 1405925d0 FUN_1405925d0 body=52 status=ok
// SIG undefined FUN_1405925d0(void)

undefined8 FUN_1405925d0(undefined8 param_1,ulonglong param_2)

{
  FUN_140591110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140592610 FUN_140592610 body=96 status=ok
// SIG undefined FUN_140592610(void)

undefined8 * FUN_140592610(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (((lVar1 != 0) && (param_1[3] != -1)) && (param_1[3] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    param_1[2] = 0;
    param_1[3] = 0xffffffffffffffff;
  }
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140592670 FUN_140592670 body=43 status=ok
// SIG undefined FUN_140592670(void)

undefined8 * FUN_140592670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1405926a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 HActor::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  HHitProxy::~HHitProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1405926e0 FUN_1405926e0 body=43 status=ok
// SIG undefined FUN_1405926e0(void)

undefined8 * FUN_1405926e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fce298;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140592710 FUN_140592710 body=43 status=ok
// SIG undefined FUN_140592710(void)

undefined8 * FUN_140592710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140592740 FUN_140592740 body=43 status=ok
// SIG undefined FUN_140592740(void)

undefined8 * FUN_140592740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140592770 FUN_140592770 body=43 status=ok
// SIG undefined FUN_140592770(void)

undefined8 * FUN_140592770(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcb7e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1405927a0 FUN_1405927a0 body=52 status=ok
// SIG undefined FUN_1405927a0(void)

undefined8 FUN_1405927a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1405927e0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackAkAudioEvent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 140592850 FUN_140592850 body=98 status=ok
// SIG undefined FUN_140592850(void)

longlong FUN_140592850(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
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



// FUNCTION 1405928c0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140592900 FUN_140592900 body=149 status=ok
// SIG undefined FUN_140592900(void)

longlong FUN_140592900(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x100);
  iVar3 = *(int *)(param_1 + 0x108);
  if (iVar3 != 0) {
    do {
      lVar1 = *plVar2;
      if (((lVar1 != 0) && (plVar2[1] != -1)) && (plVar2[1] == *(longlong *)(lVar1 + 0xd0))) {
        *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
        *plVar2 = 0;
        plVar2[1] = -1;
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x100);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1405929a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTestMovieSceneTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1405929f0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFGDamageOverTime::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140592a40 FUN_140592a40 body=314 status=ok
// SIG undefined FUN_140592a40(void)

longlong FUN_140592a40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x410) != -1)) &&
     (*(longlong *)(param_1 + 0x410) == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0xffffffffffffffff;
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3a0);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1405a53f0();
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 140592b80 FUN_140592b80 body=52 status=ok
// SIG undefined FUN_140592b80(void)

undefined8 FUN_140592b80(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140592bc0 FUN_140592bc0 body=248 status=ok
// SIG undefined FUN_140592bc0(void)

longlong FUN_140592bc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  iVar3 = *(int *)(param_1 + 0xf0);
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (iVar3 != 0) {
    do {
      lVar1 = *plVar2;
      if (((lVar1 != 0) && (plVar2[1] != -1)) && (plVar2[1] == *(longlong *)(lVar1 + 0xd0))) {
        *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
        *plVar2 = 0;
        plVar2[1] = -1;
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0xe8);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 140592cc0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDistributionVectorConstantCurve::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140592d10 FUN_140592d10 body=116 status=ok
// SIG undefined FUN_140592d10(void)

longlong FUN_140592d10(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 140592d90 FUN_140592d90 body=52 status=ok
// SIG undefined FUN_140592d90(void)

undefined8 FUN_140592d90(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 140592dd0 FUN_140592dd0 body=52 status=ok
// SIG undefined FUN_140592dd0(void)

undefined8 FUN_140592dd0(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 140592e10 FUN_140592e10 body=63 status=ok
// SIG undefined FUN_140592e10(void)

longlong FUN_140592e10(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_143fcb7e0;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140592e50 FUN_140592e50 body=52 status=ok
// SIG undefined FUN_140592e50(void)

undefined8 FUN_140592e50(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140592e90 FUN_140592e90 body=315 status=ok
// SIG undefined FUN_140592e90(void)

longlong FUN_140592e90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 140592fd0 FUN_140592fd0 body=70 status=ok
// SIG undefined FUN_140592fd0(void)

longlong FUN_140592fd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140593020 FUN_140593020 body=52 status=ok
// SIG undefined FUN_140593020(void)

undefined8 FUN_140593020(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140593060 FUN_140593060 body=63 status=ok
// SIG undefined FUN_140593060(void)

longlong FUN_140593060(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_143fcb7e0;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1405930a0 FUN_1405930a0 body=144 status=ok
// SIG undefined FUN_1405930a0(void)

void FUN_1405930a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar1 = DAT_1468536c8;
  if ((((*(longlong *)(param_1 + 0x378) == 0) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')
      ) && (DAT_1468536c8 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    FUN_14059ce50(lVar1 + 8,&local_res8,lVar2,param_1);
    if (local_res8 != 0) {
      *(int *)(local_res8 + 0x2e4) = *(int *)(local_res8 + 0x2e4) + 1;
      FUN_1405acf40(param_1,&local_res8);
      FUN_1405a53f0(local_res8);
    }
  }
  return;
}



// FUNCTION 140593130 FUN_140593130 body=206 status=ok
// SIG undefined FUN_140593130(void)

void FUN_140593130(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  FUN_14232c410(param_1,param_2);
  if (param_2 == '\0') {
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    FUN_1405b0f30(param_1);
  }
  if ((((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) &&
      (*(char *)((longlong)param_1 + 0x402) == '\0')) && (param_1[0x6f] != 0)) {
    FUN_1405a6580(DAT_1468536c8,param_1);
    *(undefined1 *)((longlong)param_1 + 0x401) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    FUN_1405b0f30(param_1);
    FUN_1405a1640(param_1);
    FUN_1405b1ab0(param_1,0);
    if ((param_1[0x60] != 0) && (param_1[0x61] != 0)) {
      (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_1);
    }
  }
  return;
}



// FUNCTION 140593200 FUN_140593200 body=1901 status=ok
// SIG undefined FUN_140593200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140593200(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  __uint64 _Var4;
  bool bVar5;
  void *_Src;
  ulonglong uVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  void *pvVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  int *piVar19;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_168;
  int local_160 [2];
  longlong local_158;
  longlong *local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  longlong *local_120;
  int *local_118;
  void *local_110;
  int local_108;
  undefined4 local_104;
  void *local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  void *local_e0;
  int local_d8;
  void *local_d0;
  int local_c8;
  undefined8 local_c0;
  int iStack_b8;
  uint uStack_b4;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_150 = *(longlong **)(*param_2 + 0x18);
  local_158 = param_1;
  FName::ToString(&local_150,local_98);
  iVar11 = *(int *)(param_1 + 0x28);
  lVar14 = (longlong)iVar11;
  *(int *)(param_1 + 0x28) = iVar11 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar11);
  }
  lVar13 = *(longlong *)(param_1 + 0x20);
  plVar7 = (longlong *)0x0;
  *(undefined8 *)(lVar13 + lVar14 * 0x10) = 0;
  *(undefined8 *)(lVar13 + 8 + lVar14 * 0x10) = 0;
  *(longlong *)(lVar13 + lVar14 * 0x10) = *param_2;
  plVar18 = plVar7;
  if (*param_2 != 0) {
    plVar18 = (longlong *)param_2[1];
  }
  *(longlong **)(lVar13 + 8 + lVar14 * 0x10) = plVar18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853ce0) && (_Init_thread_header(&DAT_146853ce0), DAT_146853ce0 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3fa30);
    _Init_thread_footer(&DAT_146853ce0);
  }
  DAT_146853cd8 = 0;
  if ((DAT_146853cdc < 0) && (DAT_146853cdc != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146853cd0,0);
  }
  plVar18 = plVar7;
  if (*param_2 != 0) {
    plVar18 = (longlong *)param_2[1];
  }
  (**(code **)(*plVar18 + 0x18))(plVar18,&DAT_146853cd0);
  local_118 = DAT_146853cd0;
  local_150 = (longlong *)0x0;
  local_e8 = (longlong *)
             ((ulonglong)((longlong)(DAT_146853cd0 + DAT_146853cd8) + (3 - (longlong)DAT_146853cd0))
             >> 2);
  if (DAT_146853cd0 + DAT_146853cd8 < DAT_146853cd0) {
    local_e8 = plVar7;
  }
  if (local_e8 != (longlong *)0x0) {
    plVar18 = (longlong *)(param_1 + 0x30);
    local_120 = plVar18;
    do {
      pvVar15 = (void *)0x0;
      local_160[0] = *local_118;
      if ((int)plVar18[1] != *(int *)((longlong)plVar18 + 0x34)) {
        plVar7 = (longlong *)plVar18[8];
        if ((longlong *)plVar18[8] == (longlong *)0x0) {
          plVar7 = plVar18 + 7;
        }
        iVar11 = *(int *)((longlong)plVar7 +
                         ((longlong)(int)plVar18[9] - 1U & (longlong)local_160[0]) * 4);
        if (iVar11 != -1) {
          do {
            piVar19 = (int *)((longlong)iVar11 * 0x70 + *plVar18);
            if (*piVar19 == local_160[0]) {
              if ((iVar11 != -1) && (piVar19 != (int *)0x0)) goto LAB_1405933ff;
              break;
            }
            iVar11 = piVar19[0x1a];
          } while (iVar11 != -1);
        }
      }
      local_168 = (longlong *)local_160;
      FUN_14058d700(plVar18,&local_128,&local_168,0);
      piVar19 = (int *)((longlong)local_128 * 0x70 + *plVar18);
LAB_1405933ff:
      piVar19[4] = piVar19[4] + 1;
      if (*(longlong *)(piVar19 + 2) == -1) {
        uVar9 = DAT_1461fd070;
        uVar6 = DAT_1461fd070 + 1;
        if ((DAT_1461fd070 & 3) == 0) {
          uVar9 = DAT_1461fd070 + 1;
          uVar6 = DAT_1461fd070 + 2;
        }
        DAT_1461fd070 = uVar6;
        *(ulonglong *)(piVar19 + 2) = uVar9;
        FString::PrintfImpl(&local_d0,L"~efx(%d)~");
        _Src = local_d0;
        lVar14 = (longlong)local_c8;
        local_100 = (void *)0x0;
        local_f8 = local_c8;
        if (local_c8 == 0) {
          local_f4 = local_c8;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,local_c8,0);
          pvVar15 = local_100;
          _guard_xfg_dispatch_icall_nop(local_100,_Src,lVar14 * 2);
        }
        _Var4 = *(__uint64 *)(piVar19 + 2);
        lVar14 = *(longlong *)(param_1 + 8);
        local_168 = (longlong *)&DAT_ffffffffffffffff;
        if (_Var4 != 0xffffffffffffffff) {
          AK::SoundEngine::RegisterGameObj(_Var4);
          if (local_168 == (longlong *)&DAT_ffffffffffffffff) {
            local_168 = *(longlong **)(lVar14 + 0x1f0);
          }
          AK::SoundEngine::SetListeners(_Var4,(__uint64 *)&local_168,1);
          AK::SoundEngine::SetGameObjectOutputBusVolume(_Var4,(__uint64)local_168,1.0);
          iVar11 = *(int *)(lVar14 + 0x208);
          *(int *)(lVar14 + 0x208) = iVar11 + 1;
          if (*(int *)(lVar14 + 0x20c) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar14 + 0x200,iVar11)
            ;
          }
          *(__uint64 *)(*(longlong *)(lVar14 + 0x200) + (longlong)iVar11 * 8) = _Var4;
          param_1 = local_158;
        }
        if (pvVar15 != (void *)0x0) {
          FMemory::Free(pvVar15);
        }
        lVar14 = *(longlong *)(param_1 + 8);
        plVar18 = (longlong *)(lVar14 + 0x130);
        uStack_144 = 1;
        uVar2 = *(uint *)(lVar14 + 0x158);
        puVar1 = (uint *)(lVar14 + 0x140);
        local_148 = 0;
        uStack_134 = 0;
        iStack_130 = 0;
        if (uVar2 != 0) {
          puVar17 = *(uint **)(lVar14 + 0x150);
          if (*(uint **)(lVar14 + 0x150) == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar3 = *puVar17;
          iStack_130 = 0;
          local_148 = 0;
          while (uVar3 == 0) {
            lVar13 = (longlong)local_148;
            iStack_130 = iStack_130 + 0x20;
            iVar11 = local_148 + 1;
            bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
            local_148 = iVar11;
            if (bVar5) goto LAB_1405935d4;
            uVar3 = puVar17[lVar13 + 1];
          }
          uStack_144 = -uVar3 & uVar3;
          iVar11 = 0x1f;
          if (uStack_144 != 0) {
            for (; uStack_144 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uStack_144 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_134 = (iStack_130 - iVar11) + 0x1f;
          if ((int)uVar2 < (int)uStack_134) {
LAB_1405935d4:
            uStack_134 = uVar2;
          }
        }
        uVar3 = *(uint *)(lVar14 + 0x158);
        uStack_a8 = CONCAT44(uStack_134,0xffffffff);
        local_a0 = CONCAT44(uStack_12c,iStack_130);
        uStack_80 = CONCAT44(uStack_144,local_148);
        local_138 = -1 << ((byte)uVar3 & 0x1f);
        uVar16 = uVar3 & 0xffffffe0;
        iStack_b8 = local_148;
        uStack_b4 = uStack_144;
        puStack_140 = puVar1;
        uStack_134 = uVar3;
        local_b0 = puVar1;
        local_88 = plVar18;
        puStack_78 = puVar1;
        uStack_70 = uStack_a8;
        uStack_68 = local_a0;
        local_c0 = plVar18;
        if (uVar3 != uVar2) {
          puVar17 = *(uint **)(lVar14 + 0x150);
          if (*(uint **)(lVar14 + 0x150) == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar12 = puVar17[(int)uVar3 >> 5] & local_138;
          iVar11 = (int)uVar3 >> 5;
          while (uVar12 == 0) {
            uVar16 = uVar16 + 0x20;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_1405936a7;
            uVar12 = puVar17[(longlong)iVar11 + 1];
            local_138 = 0xffffffff;
            iVar11 = iVar11 + 1;
          }
          uVar12 = -uVar12 & uVar12;
          iVar11 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_134 = (uVar16 - iVar11) + 0x1f;
          uVar3 = uStack_134;
          if ((int)uVar2 < (int)uStack_134) {
LAB_1405936a7:
            uStack_134 = uVar2;
            uVar3 = uVar2;
          }
        }
        while( true ) {
          if (((uStack_a8._4_4_ == uVar3) && (local_b0 == puVar1)) && (local_c0 == plVar18)) break;
          plVar7 = *(longlong **)(*local_c0 + (longlong)(int)uStack_a8._4_4_ * 0x10);
          local_f0 = (**(code **)(*plVar7 + 0x548))(plVar7);
          if (piVar19[8] != piVar19[0x13]) {
            piVar8 = *(int **)(piVar19 + 0x16);
            if (*(int **)(piVar19 + 0x16) == (int *)0x0) {
              piVar8 = piVar19 + 0x14;
            }
            iVar11 = piVar8[(longlong)((int)((ulonglong)local_f0 >> 0x20) * 0x17 + (int)local_f0) &
                            (longlong)piVar19[0x18] - 1U];
            if (iVar11 != -1) {
              do {
                lVar14 = *(longlong *)(piVar19 + 6) + (longlong)iVar11 * 0x18;
                if (*(longlong *)(*(longlong *)(piVar19 + 6) + (longlong)iVar11 * 0x18) == local_f0)
                {
                  if ((iVar11 != -1) && (lVar14 != 0)) goto LAB_140593795;
                  break;
                }
                iVar11 = *(int *)(lVar14 + 0x10);
              } while (iVar11 != -1);
            }
          }
          local_168 = &local_f0;
          FUN_14058d2a0(piVar19 + 6,&local_124,&local_168,0);
          lVar14 = *(longlong *)(piVar19 + 6) + (longlong)local_124 * 0x18;
LAB_140593795:
          uVar9 = DAT_1461fd070;
          uVar6 = DAT_1461fd070 + 1;
          if ((DAT_1461fd070 & 3) == 0) {
            uVar9 = DAT_1461fd070 + 1;
            uVar6 = DAT_1461fd070 + 2;
          }
          DAT_1461fd070 = uVar6;
          *(ulonglong *)(lVar14 + 8) = uVar9;
          uVar10 = (**(code **)(*plVar7 + 0x548))(plVar7);
          FString::PrintfImpl(&local_e0,L"~submix~(%d -> %d)",uVar10);
          pvVar15 = local_e0;
          lVar13 = (longlong)local_d8;
          local_110 = (void *)0x0;
          local_108 = local_d8;
          if (local_d8 == 0) {
            local_104 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_110,local_d8,0);
            _guard_xfg_dispatch_icall_nop(local_110,pvVar15,lVar13 * 2);
          }
          local_178 = *(undefined8 *)(piVar19 + 2);
          FUN_1405a3b90(*(longlong *)(local_158 + 8) + 0x1e8,*(undefined8 *)(lVar14 + 8),&local_110,
                        0);
          local_58 = local_160[0];
          local_60 = *(undefined8 *)(piVar19 + 2);
          local_54 = 0x3f800000;
          AK::SoundEngine::SetGameObjectAuxSendValues
                    (*(__uint64 *)(lVar14 + 8),(AkAuxSendValue *)&local_60,1);
          if (local_e0 != (void *)0x0) {
            FMemory::Free();
          }
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
        }
        plVar18 = local_120;
        param_1 = local_158;
        if (local_d0 != (void *)0x0) {
          FMemory::Free();
          plVar18 = local_120;
          param_1 = local_158;
        }
      }
      local_118 = local_118 + 1;
      local_150 = (longlong *)((longlong)local_150 + 1);
    } while (local_150 != local_e8);
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140593970 FUN_140593970 body=10 status=ok
// SIG undefined FUN_140593970(void)

void FUN_140593970(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140593973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))();
  return;
}



// FUNCTION 140593980 FUN_140593980 body=76 status=ok
// SIG undefined FUN_140593980(void)

void FUN_140593980(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  if ((((cVar1 != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
     ((DAT_1468536c8 != 0 && (*(char *)(param_1 + 0x48) == '\0')))) {
    FUN_1405a3cc0(DAT_1468536c8,param_1);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



// FUNCTION 1405939d0 FUN_1405939d0 body=63 status=ok
// SIG undefined FUN_1405939d0(void)

void FUN_1405939d0(longlong param_1)

{
  if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
     (*(char *)(param_1 + 0x5c) == '\0')) {
    FUN_1405a3cc0(DAT_1468536c8,param_1);
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  return;
}



// FUNCTION 140593a10 FUN_140593a10 body=113 status=ok
// SIG undefined FUN_140593a10(void)

void FUN_140593a10(void *param_1)

{
  AKRESULT AVar1;
  
  if ((((*(char *)((longlong)param_1 + 0x30) == '\0') &&
       (*(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1,
       *(int *)((longlong)param_1 + 0x4c) == 1)) && (DAT_1468b616c == '\0')) &&
     (((DAT_1468536c6 == '\0' && (DAT_1468536c5 != '\0')) &&
      ((DAT_1468536c8 != 0 && (*(int *)((longlong)param_1 + 0x50) == 0)))))) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x54) = 1;
    UNLOCK();
    AVar1 = AK::SoundEngine::LoadBank
                      (*(ulong *)((longlong)param_1 + 0x28),
                       (_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *)&LAB_140594340,param_1,-1
                      );
    if (AVar1 == 1) {
      *(undefined4 *)((longlong)param_1 + 0x50) = 1;
    }
  }
  return;
}



// FUNCTION 140593a90 FUN_140593a90 body=672 status=ok
// SIG undefined FUN_140593a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140593a90(longlong param_1,float *param_2,longlong *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar8 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
  if (lVar5 == lVar8) {
    lVar5 = *(longlong *)(param_1 + 0x460);
    if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x2f0) != 0)) && (*(char *)(lVar5 + 0x2f8) == '\0')) &&
       (*(longlong *)(param_1 + 0x468) == 0)) {
      iVar4 = *(int *)(lVar5 + 0x2f0);
      if (iVar4 != 0) {
        iVar7 = (int)param_3[1];
        if (*(int *)((longlong)param_3 + 0xc) < iVar7 + iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(param_3);
          iVar7 = (int)param_3[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x20 + *param_3),*(void **)(lVar5 + 0x2e8),
                   (longlong)iVar4 << 5);
        *(int *)(param_3 + 1) = (int)param_3[1] + iVar4;
      }
      if (param_4 == (float *)0x0) {
        return;
      }
      if (*(float *)(param_1 + 0x4b0) <= 0.0) {
        return;
      }
      pfVar10 = *(float **)(*(longlong *)(param_1 + 0x460) + 0x2e8);
      pfVar12 = pfVar10 + (longlong)*(int *)(*(longlong *)(param_1 + 0x460) + 0x2f0) * 8;
      for (; pfVar10 != pfVar12; pfVar10 = pfVar10 + 8) {
        *param_4 = ((param_2[1] - pfVar10[1]) * (param_2[1] - pfVar10[1]) +
                    (*param_2 - *pfVar10) * (*param_2 - *pfVar10) +
                   (param_2[2] - pfVar10[2]) * (param_2[2] - pfVar10[2])) /
                   (*(float *)(param_1 + 0x4b0) * *(float *)(param_1 + 0x4b0));
      }
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x168);
    puVar9 = &local_28;
    if (lVar5 == 0) {
      uVar13 = (ulonglong)(int)param_3[1];
      local_20 = DAT_1468b5d98;
      local_28 = _DAT_1468b5d90;
      iVar7 = (int)param_3[1] + 1;
      iVar4 = *(int *)((longlong)param_3 + 0xc);
      bVar16 = SBORROW4(iVar7,iVar4);
      bVar15 = iVar7 - iVar4 < 0;
      bVar14 = iVar7 == iVar4;
      *(int *)(param_3 + 1) = iVar7;
    }
    else {
      local_28 = *(undefined8 *)(lVar5 + 0x220);
      uVar13 = (ulonglong)(int)param_3[1];
      iVar7 = (int)param_3[1] + 1;
      local_20 = *(undefined4 *)(lVar5 + 0x228);
      iVar4 = *(int *)((longlong)param_3 + 0xc);
      bVar16 = SBORROW4(iVar7,iVar4);
      bVar15 = iVar7 - iVar4 < 0;
      bVar14 = iVar7 == iVar4;
      *(int *)(param_3 + 1) = iVar7;
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_1405b73f0(param_1,&local_28,param_2);
    uVar13 = (ulonglong)(int)param_3[1];
    iVar7 = (int)param_3[1] + 1;
    iVar4 = *(int *)((longlong)param_3 + 0xc);
    bVar16 = SBORROW4(iVar7,iVar4);
    bVar15 = iVar7 - iVar4 < 0;
    bVar14 = iVar7 == iVar4;
    *(int *)(param_3 + 1) = iVar7;
  }
  if (!bVar14 && bVar16 == bVar15) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_3,uVar13 & 0xffffffff);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4a0);
  uVar2 = *(undefined4 *)(param_1 + 0x49c);
  puVar11 = (undefined8 *)(uVar13 * 0x20 + *param_3);
  *puVar11 = *puVar9;
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)((longlong)puVar11 + 0xc) = DAT_1468b5da0;
  uVar6 = DAT_1468b5da8;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar1;
  *(undefined4 *)(puVar11 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar6;
  if ((param_4 != (float *)0x0) && (fVar3 = *(float *)(param_1 + 0x4b0), 0.0 < fVar3)) {
    lVar5 = *param_3;
    lVar8 = (longlong)(int)param_3[1] * 0x20;
    fVar19 = param_2[1] - *(float *)(lVar8 + -0x1c + lVar5);
    fVar18 = *param_2 - *(float *)(lVar8 + -0x20 + lVar5);
    fVar17 = param_2[2] - *(float *)(lVar8 + -0x18 + lVar5);
    *param_4 = (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) / (fVar3 * fVar3);
  }
  return;
}



// FUNCTION 140593d30 AddKeyframe body=240 status=ok
// SIG undefined AddKeyframe(void)

uint UInterpTrackAkAudioEvent::AddKeyframe
               (longlong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_28 [4];
  ulonglong uVar8;
  
  uVar5 = 0;
  local_28[0] = 0;
  uVar7 = 0;
  local_28[1] = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0x98)) {
    pfVar4 = *(float **)(param_1 + 0x90);
    uVar8 = uVar5;
    do {
      uVar7 = (uint)uVar8;
      param_3 = lVar3;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 8;
    } while ((longlong)uVar5 < lVar3);
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar2 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar2,param_3,param_4,param_2,0);
  }
  lVar6 = (longlong)(int)uVar7 * 0x20;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar6 + 0x20),(void *)(*plVar1 + lVar6),
             (longlong)(int)(iVar2 - uVar7) << 5);
  lVar3 = *plVar1;
  *(float *)(lVar6 + lVar3) = param_2;
  *(undefined8 *)(lVar6 + 8 + lVar3) = 0;
  FString::FString(lVar3 + 0x10 + lVar6,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140593e20 AddKeyframe body=144 status=ok
// SIG undefined AddKeyframe(void)

int UInterpTrackAkAudioRTPC::AddKeyframe
              (longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 in_RDX;
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  local_res20[0] = FInterpCurve<float>::Eval(param_1 + 0x70,in_RDX,local_res20);
  iVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x70,param_2,local_res20);
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x10 + (longlong)iVar1 * 0x14) = param_4;
  FInterpCurve<float>::AutoSetTangents
            (param_1 + 0x70,*(undefined4 *)(param_1 + 0x88),
             CONCAT71((int7)((ulonglong)((longlong)iVar1 * 5) >> 8),1));
  return iVar1;
}



// FUNCTION 140593eb0 FUN_140593eb0 body=155 status=ok
// SIG undefined FUN_140593eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140593eb0(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  char *local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_1;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar1);
    if (local_38 != 0) {
      FMemory::Free();
    }
    AK::SoundEngine::AddOutputCaptureMarker(local_30);
  }
  return;
}



// FUNCTION 140593f50 AddPoint body=216 status=ok
// SIG undefined AddPoint(void)

uint FInterpCurve<float>::AddPoint(longlong *param_1,float param_2,undefined4 *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  uVar5 = 0;
  uVar6 = 0;
  if (0 < iVar1) {
    pfVar3 = (float *)*param_1;
    uVar7 = uVar5;
    do {
      uVar6 = (uint)uVar7;
      if (param_2 < *pfVar3 || param_2 == *pfVar3) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 1;
      pfVar3 = pfVar3 + 5;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar4 = (longlong)(int)uVar6;
  _Src = (void *)(*param_1 + lVar4 * 0x14);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x14),_Src,(longlong)(int)(iVar1 - uVar6) * 0x14);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 4 + lVar4 * 0x14) = *param_3;
  *(float *)(lVar2 + lVar4 * 0x14) = param_2;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x14) = 0;
  *(undefined4 *)(lVar2 + 0xc + lVar4 * 0x14) = 0;
  *(undefined1 *)(lVar2 + 0x10 + lVar4 * 0x14) = 0;
  return uVar6;
}



// FUNCTION 140594030 AddPoint body=243 status=ok
// SIG undefined AddPoint(void)

uint FInterpCurve<FVector>::AddPoint(longlong *param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = (int)param_1[1];
  uVar5 = 0;
  uVar7 = 0;
  if (0 < iVar1) {
    pfVar4 = (float *)*param_1;
    uVar8 = uVar5;
    do {
      uVar7 = (uint)uVar8;
      if (param_2 < *pfVar4 || param_2 == *pfVar4) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0xb;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar6 = (longlong)(int)uVar7 * 0x2c;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar6 + 0x2c),(void *)(*param_1 + lVar6),
             (longlong)(int)(iVar1 - uVar7) * 0x2c);
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar6 + 4 + lVar3) = *param_3;
  *(undefined4 *)(lVar6 + 0xc + lVar3) = uVar2;
  *(float *)(lVar6 + lVar3) = param_2;
  *(undefined8 *)(lVar6 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar6 + 0x18 + lVar3) = 0;
  *(undefined8 *)(lVar6 + 0x1c + lVar3) = 0;
  *(undefined4 *)(lVar6 + 0x24 + lVar3) = 0;
  *(undefined1 *)(lVar6 + 0x28 + lVar3) = 0;
  return uVar7;
}



// FUNCTION 140594130 FUN_140594130 body=244 status=ok
// SIG undefined FUN_140594130(void)

void FUN_140594130(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **local_a8 [5];
  byte local_7f;
  byte local_7e;
  undefined8 local_18;
  
  uVar2 = FSoundAttenuationSettings::StaticStruct();
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  FArchive::FArchive(local_a8);
  local_7e = local_7e | 8;
  local_a8[0] = &PTR__scalar_deleting_destructor__143fcf900;
  local_18 = param_2;
  FArchive::SetIsPersistent(local_a8,0);
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar5 = 0;
  local_7f = local_7f & 0xdf;
  uVar4 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x28) < plVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_141725e50(uVar2,local_a8,*plVar3,0);
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  FArchive::~FArchive(local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return;
}



// FUNCTION 140594230 FUN_140594230 body=83 status=ok
// SIG undefined FUN_140594230(void)

void FUN_140594230(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x110,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::AddSection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x110,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSection::AddSection");
  return;
}



// FUNCTION 140594290 AddSection body=70 status=ok
// SIG undefined AddSection(void)

void UMovieSceneNiagaraTrack::AddSection(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x60),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1405942e0 AddZeroed body=87 status=ok
// SIG undefined AddZeroed(void)

int TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + (longlong)iVar1 * 0x18),0,(longlong)param_2 * 0x18);
  return iVar1;
}



// FUNCTION 140594360 FUN_140594360 body=1149 status=ok
// SIG undefined FUN_140594360(void)

void FUN_140594360(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  int local_res10;
  uint *local_c8;
  longlong *plStack_c0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined1 local_58 [32];
  
  if (param_3 != param_2) {
    uVar16 = param_3 - param_2;
    uVar14 = uVar16;
    if (DAT_1461fd068 <= uVar16) {
      uVar14 = DAT_1461fd068;
    }
    if (uVar16 < DAT_1461fd060) {
      local_res10 = 1;
    }
    else {
      local_res10 = DAT_1461fd064;
    }
    plVar9 = (longlong *)operator_new(0x18);
    plVar13 = (longlong *)0x0;
    plStack_c0 = plVar13;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_StartProfileThreadUsage_143fcfe80;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *(uint *)(plVar9 + 2) = param_2;
      *(uint *)((longlong)plVar9 + 0x14) = param_2;
      plStack_c0 = plVar9;
    }
    local_c8 = (uint *)(plStack_c0 + 2);
    SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
    plVar9 = plStack_c0;
    puVar8 = local_c8;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_c0 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if (uVar14 != 1) {
      do {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
        local_68 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x40,local_98);
        plVar15 = plVar9;
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_143fcfe90;
          puVar10[1] = puVar8;
          puVar10[2] = plVar9;
          *(int *)(puVar10 + 3) = local_res10;
          *(uint *)((longlong)puVar10 + 0x1c) = param_3;
          *(int *)(puVar10 + 4) = (int)plVar13 + 1;
          puVar10[5] = param_5;
          puVar10[6] = param_1;
          puVar10[7] = param_6;
          plVar15 = (longlong *)0x0;
        }
        local_a8 = (code *)&LAB_140595ad0;
        plVar11 = (longlong *)FUN_140596960(local_58,0,0xff);
        lVar6 = *plVar11;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(undefined4 *)(lVar6 + 0x50) = 0;
        if (local_78 == (longlong *)0x0) {
          _guard_xfg_dispatch_icall_nop((longlong *)(lVar6 + 0x20),local_98,0x20);
        }
        if (*(longlong *)(lVar6 + 0x40) != 0) {
          FMemory::Free();
        }
        *(longlong **)(lVar6 + 0x40) = local_78;
        local_78 = (longlong *)0x0;
        *(int *)(lVar6 + 0x50) = local_68;
        local_68 = 0;
        if (*(int *)(lVar6 + 0x50) == 0) {
LAB_14059459f:
          *(code **)(lVar6 + 0x10) = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          plVar12 = *(longlong **)(lVar6 + 0x40);
          if (*(longlong **)(lVar6 + 0x40) == (longlong *)0x0) {
            plVar12 = (longlong *)(lVar6 + 0x20);
          }
          if (plVar12 == (longlong *)0x0) goto LAB_14059459f;
          (**(code **)(*plVar12 + 8))();
          *(code **)(lVar6 + 0x10) = local_a8;
        }
        local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
        *(undefined4 *)(lVar6 + 0x60) = 0x12ff;
        lVar6 = *plVar11;
        lVar7 = plVar11[2];
        lVar4 = plVar11[1];
        lVar5 = *(longlong *)(lVar6 + 0x78);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1405ab110(lVar6,lVar4,(int)lVar7,1);
        if (local_68 != 0) {
          plVar11 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar11 = local_78;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar15 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (lVar5 != 0) {
          LOCK();
          piVar1 = (int *)(lVar5 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
        uVar16 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar16;
      } while (uVar16 < uVar14 - 1);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    LOCK();
    uVar14 = *puVar8;
    *puVar8 = *puVar8 + local_res10;
    UNLOCK();
    while (uVar14 < param_3) {
      uVar16 = param_3;
      if (uVar14 + local_res10 <= param_3) {
        uVar16 = uVar14 + local_res10;
      }
      (*param_5)(param_1,uVar14,uVar16,0,param_6);
      LOCK();
      puVar2 = puVar8 + 1;
      uVar14 = *puVar2;
      *puVar2 = *puVar2 + local_res10;
      UNLOCK();
      if (param_3 <= uVar14 + local_res10) {
        (**(code **)(*DAT_146853918 + 0x10))();
        break;
      }
      LOCK();
      uVar14 = *puVar8;
      *puVar8 = *puVar8 + local_res10;
      UNLOCK();
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar9 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    (**(code **)(*DAT_146853918 + 0x20))(DAT_146853918,0xffffffff,0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar9 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405947e0 FUN_1405947e0 body=1338 status=ok
// SIG undefined FUN_1405947e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405947e0(longlong param_1,longlong param_2)

{
  __uint64 *p_Var1;
  __uint64 *p_Var2;
  undefined4 uVar3;
  undefined4 uVar4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 _Var7;
  __uint64 _Var8;
  longlong lVar9;
  longlong lVar10;
  __uint64 *p_Var11;
  __uint64 *p_Var12;
  __uint64 *p_Var13;
  __uint64 *p_Var14;
  __uint64 *p_Var15;
  longlong *plVar16;
  longlong lVar17;
  __uint64 *p_Var18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_208 [32];
  __uint64 local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  __uint64 local_1d0;
  __uint64 _Stack_1c8;
  __uint64 local_1b8 [42];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    p_Var1 = (__uint64 *)(param_1 + 0x150);
    p_Var14 = (__uint64 *)(param_2 + 0x98);
    if (p_Var1 != p_Var14) {
      lVar10 = 2;
      lVar17 = 2;
      p_Var13 = local_1b8;
      p_Var18 = p_Var1;
      do {
        p_Var11 = p_Var18;
        p_Var15 = p_Var13;
        _Var7 = p_Var11[1];
        _Var5 = p_Var11[2];
        _Var6 = p_Var11[3];
        *p_Var15 = *p_Var11;
        p_Var15[1] = _Var7;
        _Var7 = p_Var11[4];
        _Var8 = p_Var11[5];
        p_Var15[2] = _Var5;
        p_Var15[3] = _Var6;
        _Var5 = p_Var11[6];
        _Var6 = p_Var11[7];
        p_Var15[4] = _Var7;
        p_Var15[5] = _Var8;
        _Var7 = p_Var11[8];
        _Var8 = p_Var11[9];
        p_Var15[6] = _Var5;
        p_Var15[7] = _Var6;
        _Var5 = p_Var11[10];
        _Var6 = p_Var11[0xb];
        p_Var15[8] = _Var7;
        p_Var15[9] = _Var8;
        _Var7 = p_Var11[0xc];
        _Var8 = p_Var11[0xd];
        p_Var15[10] = _Var5;
        p_Var15[0xb] = _Var6;
        _Var5 = p_Var11[0xe];
        _Var6 = p_Var11[0xf];
        p_Var15[0xc] = _Var7;
        p_Var15[0xd] = _Var8;
        p_Var15[0xe] = _Var5;
        p_Var15[0xf] = _Var6;
        lVar17 = lVar17 + -1;
        p_Var13 = p_Var15 + 0x10;
        p_Var18 = p_Var11 + 0x10;
      } while (lVar17 != 0);
      _Var7 = p_Var11[0x11];
      lVar17 = 2;
      _Var5 = p_Var11[0x12];
      _Var6 = p_Var11[0x13];
      p_Var15[0x10] = p_Var11[0x10];
      p_Var15[0x11] = _Var7;
      _Var7 = p_Var11[0x14];
      _Var8 = p_Var11[0x15];
      p_Var15[0x12] = _Var5;
      p_Var15[0x13] = _Var6;
      _Var5 = p_Var11[0x16];
      _Var6 = p_Var11[0x17];
      p_Var15[0x14] = _Var7;
      p_Var15[0x15] = _Var8;
      _Var7 = p_Var11[0x18];
      _Var8 = p_Var11[0x19];
      p_Var15[0x16] = _Var5;
      p_Var15[0x17] = _Var6;
      p_Var15[0x18] = _Var7;
      p_Var15[0x19] = _Var8;
      p_Var13 = p_Var1;
      p_Var18 = p_Var14;
      do {
        p_Var11 = p_Var18;
        p_Var15 = p_Var13;
        _Var7 = p_Var11[1];
        *p_Var15 = *p_Var11;
        p_Var15[1] = _Var7;
        _Var7 = p_Var11[3];
        p_Var15[2] = p_Var11[2];
        p_Var15[3] = _Var7;
        _Var7 = p_Var11[5];
        p_Var15[4] = p_Var11[4];
        p_Var15[5] = _Var7;
        _Var7 = p_Var11[7];
        p_Var15[6] = p_Var11[6];
        p_Var15[7] = _Var7;
        _Var7 = p_Var11[9];
        p_Var15[8] = p_Var11[8];
        p_Var15[9] = _Var7;
        _Var7 = p_Var11[0xb];
        p_Var15[10] = p_Var11[10];
        p_Var15[0xb] = _Var7;
        _Var7 = p_Var11[0xd];
        p_Var15[0xc] = p_Var11[0xc];
        p_Var15[0xd] = _Var7;
        _Var7 = p_Var11[0xf];
        p_Var15[0xe] = p_Var11[0xe];
        p_Var15[0xf] = _Var7;
        lVar17 = lVar17 + -1;
        p_Var13 = p_Var15 + 0x10;
        p_Var18 = p_Var11 + 0x10;
      } while (lVar17 != 0);
      _Var7 = p_Var11[0x11];
      p_Var15[0x10] = p_Var11[0x10];
      p_Var15[0x11] = _Var7;
      _Var7 = p_Var11[0x13];
      p_Var15[0x12] = p_Var11[0x12];
      p_Var15[0x13] = _Var7;
      _Var7 = p_Var11[0x15];
      p_Var15[0x14] = p_Var11[0x14];
      p_Var15[0x15] = _Var7;
      _Var7 = p_Var11[0x17];
      p_Var15[0x16] = p_Var11[0x16];
      p_Var15[0x17] = _Var7;
      _Var7 = p_Var11[0x19];
      p_Var15[0x18] = p_Var11[0x18];
      p_Var15[0x19] = _Var7;
      p_Var13 = p_Var14;
      p_Var18 = local_1b8;
      do {
        p_Var11 = p_Var18;
        p_Var15 = p_Var13;
        _Var7 = p_Var11[1];
        _Var5 = p_Var11[2];
        _Var6 = p_Var11[3];
        *p_Var15 = *p_Var11;
        p_Var15[1] = _Var7;
        _Var7 = p_Var11[4];
        _Var8 = p_Var11[5];
        p_Var15[2] = _Var5;
        p_Var15[3] = _Var6;
        _Var5 = p_Var11[6];
        _Var6 = p_Var11[7];
        p_Var15[4] = _Var7;
        p_Var15[5] = _Var8;
        _Var7 = p_Var11[8];
        _Var8 = p_Var11[9];
        p_Var15[6] = _Var5;
        p_Var15[7] = _Var6;
        _Var5 = p_Var11[10];
        _Var6 = p_Var11[0xb];
        p_Var15[8] = _Var7;
        p_Var15[9] = _Var8;
        _Var7 = p_Var11[0xc];
        _Var8 = p_Var11[0xd];
        p_Var15[10] = _Var5;
        p_Var15[0xb] = _Var6;
        _Var5 = p_Var11[0xe];
        _Var6 = p_Var11[0xf];
        p_Var15[0xc] = _Var7;
        p_Var15[0xd] = _Var8;
        p_Var15[0xe] = _Var5;
        p_Var15[0xf] = _Var6;
        lVar10 = lVar10 + -1;
        p_Var13 = p_Var15 + 0x10;
        p_Var18 = p_Var11 + 0x10;
      } while (lVar10 != 0);
      _Var7 = p_Var11[0x11];
      _Var5 = p_Var11[0x12];
      _Var6 = p_Var11[0x13];
      p_Var15[0x10] = p_Var11[0x10];
      p_Var15[0x11] = _Var7;
      _Var7 = p_Var11[0x14];
      _Var8 = p_Var11[0x15];
      p_Var15[0x12] = _Var5;
      p_Var15[0x13] = _Var6;
      _Var5 = p_Var11[0x16];
      _Var6 = p_Var11[0x17];
      p_Var15[0x14] = _Var7;
      p_Var15[0x15] = _Var8;
      _Var7 = p_Var11[0x18];
      uVar3 = *(undefined4 *)((longlong)p_Var11 + 0xc4);
      _Var8 = p_Var11[0x19];
      uVar4 = *(undefined4 *)((longlong)p_Var11 + 0xcc);
      p_Var15[0x16] = _Var5;
      p_Var15[0x17] = _Var6;
      *(int *)(p_Var15 + 0x18) = (int)_Var7;
      *(undefined4 *)((longlong)p_Var15 + 0xc4) = uVar3;
      *(int *)(p_Var15 + 0x19) = (int)_Var8;
      *(undefined4 *)((longlong)p_Var15 + 0xcc) = uVar4;
    }
    p_Var13 = (__uint64 *)0x0;
    if (*(int *)(param_2 + 0x88) != 0) {
      if ((0 < *(int *)(param_1 + 0x2b8)) && (0 < *(int *)(param_2 + 0x88))) {
        p_Var18 = p_Var13;
        p_Var15 = p_Var13;
        do {
          lVar10 = *(longlong *)(param_2 + 0x80);
          if (*(longlong *)(param_2 + 0x80) == 0) {
            lVar10 = param_2 + 0x78;
          }
          if (*(int *)(lVar10 + (longlong)p_Var18) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x2c8);
            if (*(longlong *)(param_1 + 0x2c8) == 0) {
              lVar17 = param_1 + 0x2c0;
            }
            lVar9 = *(longlong *)(param_1 + 0x2b0);
            if (*(longlong *)(param_1 + 0x2b0) == 0) {
              lVar9 = param_1 + 0x2a8;
            }
            *(int *)(lVar9 + (longlong)*(int *)(lVar17 + (longlong)p_Var18) * 4) =
                 *(int *)(lVar10 + (longlong)p_Var18);
          }
          uVar19 = (int)p_Var15 + 1;
          p_Var15 = (__uint64 *)(ulonglong)uVar19;
          p_Var18 = (__uint64 *)((longlong)p_Var18 + 4);
        } while ((int)uVar19 < *(int *)(param_2 + 0x88));
      }
      if ((*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x118)) ||
         (*(char *)(param_1 + 0x2a1) != '\0')) {
        *(undefined1 *)(param_1 + 0x2a1) = 0;
        plVar16 = *(longlong **)(param_1 + 0x110);
        if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
          plVar16 = (longlong *)(param_1 + 0x100);
        }
        p_Var18 = (__uint64 *)((longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff);
        if (plVar16 + *(int *)(param_1 + 0x118) < plVar16) {
          p_Var18 = p_Var13;
        }
        p_Var15 = p_Var13;
        if (p_Var18 != (__uint64 *)0x0) {
          do {
            if ((longlong *)*plVar16 == (longlong *)0x0) {
              local_1e8 = 0xffffffffffffffff;
            }
            else {
              local_1e8 = (**(code **)(*(longlong *)*plVar16 + 0x548))();
            }
            p_Var11 = *(__uint64 **)(param_1 + 0x290);
            if (*(__uint64 **)(param_1 + 0x290) == (__uint64 *)0x0) {
              p_Var11 = p_Var1;
            }
            p_Var2 = p_Var11 + (longlong)*(int *)(param_1 + 0x298) * 5;
            for (; p_Var11 != p_Var2; p_Var11 = p_Var11 + 5) {
              if (*p_Var11 == local_1e8) goto LAB_140594ba4;
            }
            p_Var11 = *(__uint64 **)(param_2 + 0x1d8);
            if (*(__uint64 **)(param_2 + 0x1d8) == (__uint64 *)0x0) {
              p_Var11 = p_Var14;
            }
            p_Var2 = p_Var11 + (longlong)*(int *)(param_2 + 0x1e0) * 5;
            for (; (p_Var12 = p_Var13, p_Var11 != p_Var2 &&
                   (p_Var12 = p_Var11, *p_Var11 != local_1e8)); p_Var11 = p_Var11 + 5) {
            }
            p_Var11 = p_Var12 + 1;
            if (p_Var12 == (__uint64 *)0x0) {
              p_Var11 = p_Var13;
            }
            if (p_Var11 != (__uint64 *)0x0) {
              FUN_14058cfa0(p_Var1,&local_1e8);
            }
LAB_140594ba4:
            plVar16 = plVar16 + 1;
            p_Var15 = (__uint64 *)((longlong)p_Var15 + 1);
          } while (p_Var15 != p_Var18);
        }
      }
    }
    if (*(int *)(param_1 + 0x298) == 0) {
      *(undefined4 *)(param_1 + 0x2a4) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      p_Var14 = *(__uint64 **)(param_1 + 0x290);
      if (*(__uint64 **)(param_1 + 0x290) == (__uint64 *)0x0) {
        p_Var14 = p_Var1;
      }
      p_Var1 = p_Var14 + (longlong)*(int *)(param_1 + 0x298) * 5;
      for (; p_Var14 != p_Var1; p_Var14 = p_Var14 + 5) {
        local_1e0 = (undefined4)*p_Var14;
        uStack_1dc = *(undefined4 *)((longlong)p_Var14 + 4);
        _Var7 = *p_Var14;
        fStack_1d8 = *(float *)(p_Var14 + 1);
        fStack_1d4 = *(float *)((longlong)p_Var14 + 0xc);
        local_1d0 = p_Var14[2];
        _Stack_1c8 = p_Var14[3];
        fVar22 = 1.0 - fStack_1d8;
        if (0.0 <= fVar22) {
          fVar21 = fVar22;
          if (1.0 <= fVar22) {
            fVar21 = 1.0;
          }
        }
        else {
          fVar21 = 0.0;
        }
        fVar22 = (fVar22 - fStack_1d4) - (float)local_1d0;
        if (0.0 <= fVar22) {
          if (1.0 <= fVar22) {
            fVar22 = 1.0;
          }
        }
        else {
          fVar22 = 0.0;
        }
        fVar20 = 1.0 - fVar21;
        if (1.0 - fVar21 <= *(float *)(param_1 + 0x2a4)) {
          fVar20 = *(float *)(param_1 + 0x2a4);
        }
        *(float *)(param_1 + 0x2a4) = fVar20;
        AK::SoundEngine::SetObjectObstructionAndOcclusion
                  (*(__uint64 *)(param_1 + 0xd0),_Var7,fVar21,fVar22);
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x210);
    if (lVar10 != 0) {
      FUN_1405aea80(lVar10,param_1);
    }
  }
  FUN_1405a53f0(param_1);
  return;
}



// FUNCTION 140594d20 FUN_140594d20 body=665 status=ok
// SIG undefined FUN_140594d20(void)

void FUN_140594d20(longlong param_1)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  AKRESULT AVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  __uint64 *p_Var10;
  __uint64 *p_Var11;
  uint uVar12;
  uint *puVar13;
  float local_res8 [2];
  RTPCValue_type local_res10 [2];
  float local_res18 [4];
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint local_70;
  uint uStack_6c;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  local_res10[0] = 1;
  local_res8[0] = 0.0;
  AVar5 = AK::SoundEngine::Query::GetRTPCValue
                    (0x1208d804,0xffffffffffffffff,0,local_res8,local_res10);
  if (AVar5 == 1) {
    local_res18[0] = local_res8[0];
    LOCK();
    *(float *)(param_1 + 0x250) = local_res8[0];
    UNLOCK();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 600);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uStack_c4 = 1;
  plVar2 = (longlong *)(param_1 + 0x280);
  uVar3 = *(uint *)(param_1 + 0x2a8);
  puVar1 = (uint *)(param_1 + 0x290);
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = *puVar13;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar7 = local_c8 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar7;
      if (bVar4) goto LAB_140594e4c;
      uVar12 = puVar13[lVar9 + 1];
    }
    uStack_c4 = -uVar12 & uVar12;
    iVar7 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = (iStack_b0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_140594e4c:
      uStack_b4 = uVar3;
    }
  }
  uStack_6c = *(uint *)(param_1 + 0x2a8);
  uStack_58 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  local_70 = -1 << ((byte)uStack_6c & 0x1f);
  uVar12 = uStack_6c & 0xffffffe0;
  iStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_98 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_88;
  uStack_48 = uStack_90;
  uStack_44 = uStack_8c;
  uVar8 = uStack_6c;
  if (uStack_6c != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uStack_6c >> 5] & local_70;
    iVar7 = (int)uStack_6c >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140594f12;
      uVar8 = puVar13[(longlong)iVar7 + 1];
      local_70 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_6c = (uVar12 - iVar7) + 0x1f;
    uVar8 = uStack_6c;
    if ((int)uVar3 < (int)uStack_6c) {
LAB_140594f12:
      uStack_6c = uVar3;
      uVar8 = uVar3;
    }
  }
  while ((uStack_8c != uVar8 || (local_98 != puVar1))) {
    p_Var11 = *(__uint64 **)((longlong)(int)uStack_8c * 0x20 + 8 + *plVar2);
    p_Var10 = p_Var11 + (longlong)*(int *)((longlong)(int)uStack_8c * 0x20 + 0x10 + *plVar2) * 2;
    for (; p_Var11 != p_Var10; p_Var11 = p_Var11 + 2) {
      local_res18[0] = 2.8026e-45;
      AK::SoundEngine::Query::GetRTPCValue
                ((ulong)p_Var11[1],*p_Var11,0,(float *)((longlong)p_Var11 + 0xc),
                 (RTPCValue_type *)local_res18);
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140594fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140594fc0 FUN_140594fc0 body=160 status=ok
// SIG undefined FUN_140594fc0(void)

void FUN_140594fc0(longlong param_1)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x78);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      if (uVar2 - uVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0x70),
                   (void *)((longlong)(int)uVar3 + (longlong)*(void **)(param_1 + 0x70)),
                   (longlong)(int)(uVar2 - uVar3));
        uVar2 = *(uint *)(param_1 + 0x78);
      }
      *(uint *)(param_1 + 0x78) = uVar2 - uVar3;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000140595059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 140595060 FUN_140595060 body=512 status=ok
// SIG undefined FUN_140595060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140595060(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if (param_2 < 0x80) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x180));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x180));
    }
    uVar5 = 0;
    if ((DAT_1468536c5 != '\0') && (DAT_1468536c6 == '\0')) {
      puVar6 = *(undefined8 **)(param_3 + 0x1a8);
      uVar7 = (longlong)*(int *)(param_3 + 0x1b0) & 0x1fffffffffffffff;
      if (puVar6 + *(int *)(param_3 + 0x1b0) < puVar6) {
        uVar7 = uVar5;
      }
      if (uVar7 != 0) {
        do {
          (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,param_3);
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != uVar7);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x180));
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146853988) &&
       (_Init_thread_header(&DAT_146853988), DAT_146853988 == -1)) {
      atexit((_func_5014 *)&LAB_143e3fb60);
      _Init_thread_footer(&DAT_146853988);
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
    }
    uVar1 = CONCAT44(DAT_146853978._4_4_,(undefined4)DAT_146853978);
    uVar2 = CONCAT44(DAT_146853984,DAT_146853980);
    DAT_146853978._0_4_ = (undefined4)DAT_1468537f0;
    DAT_146853978._4_4_ = DAT_1468537f0._4_4_;
    DAT_146853980 = DAT_1468537f8;
    DAT_146853984 = DAT_1468537fc;
    DAT_1468537f0 = uVar1;
    _DAT_1468537f8 = uVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853728);
    if (param_1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)CONCAT44(DAT_146853978._4_4_,(undefined4)DAT_146853978);
      puVar6 = puVar4 + (longlong)DAT_146853980 * 3;
      for (; puVar4 != puVar6; puVar4 = puVar4 + 3) {
        (**(code **)(*param_1 + 200))
                  (param_1,*(undefined4 *)(puVar4 + 1),*puVar4,(longlong)puVar4 + 0xc,1);
      }
    }
    DAT_146853980 = 0;
    if ((DAT_146853984 < 0) && (DAT_146853984 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146853978,0);
    }
    FUN_140594d20(param_3);
  }
  return;
}



// FUNCTION 140595260 AutoSetTangents body=849 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<float>::AutoSetTangents(undefined8 *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  int local_res20;
  
  iVar2 = *(int *)(param_1 + 1);
  iVar7 = iVar2 + -1;
  if (0 < iVar2) {
    lVar10 = 0;
    lVar11 = (longlong)iVar7;
    local_res20 = 1;
    do {
      uVar13 = 0;
      if (lVar10 == 0) {
        iVar4 = 0;
        if (*(char *)(param_1 + 2) != '\0') {
          iVar4 = iVar7;
        }
      }
      else {
        iVar4 = local_res20 + -2;
      }
      iVar8 = local_res20;
      if ((lVar10 == lVar11) && (iVar8 = iVar7, *(char *)(param_1 + 2) != '\0')) {
        iVar8 = 0;
      }
      pfVar3 = (float *)*param_1;
      lVar5 = (longlong)iVar4;
      lVar6 = (longlong)iVar8;
      cVar1 = *(char *)(pfVar3 + lVar10 * 5 + 4);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') ||
           ((lVar10 != 0 && ((lVar10 != lVar11 || (*(char *)(param_1 + 2) != '\0')))))) {
          if ((*(char *)(pfVar3 + lVar5 * 5 + 4) == '\x01') ||
             ((byte)(*(char *)(pfVar3 + lVar5 * 5 + 4) - 3U) < 3)) {
            if ((*(char *)(param_1 + 2) == '\0') || (lVar10 != 0)) {
              fVar16 = pfVar3[lVar5 * 5];
              fVar17 = pfVar3[lVar10 * 5];
            }
            else {
              fVar17 = *pfVar3;
              fVar16 = fVar17 - *(float *)((longlong)param_1 + 0x14);
            }
            if ((*(char *)(param_1 + 2) == '\0') || (lVar10 != lVar11)) {
              fVar15 = pfVar3[lVar6 * 5];
            }
            else {
              fVar15 = fVar17 + *(float *)((longlong)param_1 + 0x14);
            }
            pfVar9 = pfVar3 + lVar5 * 5 + 1;
            if (cVar1 == '\x05') {
              lVar12 = (longlong)(pfVar3 + lVar10 * 5 + 1) - (longlong)pfVar9;
              lVar5 = (longlong)local_res8 - (longlong)pfVar9;
              lVar6 = (longlong)(pfVar3 + lVar6 * 5 + 1) - (longlong)pfVar9;
              do {
                fVar14 = (float)ClampFloatTangent(*pfVar9,fVar16,
                                                  *(undefined4 *)((longlong)pfVar9 + lVar12),fVar17,
                                                  *(undefined4 *)(lVar6 + (longlong)pfVar9),fVar15);
                uVar13 = uVar13 + 4;
                *(float *)(lVar5 + (longlong)pfVar9) = fVar14 * (1.0 - param_2);
                pfVar9 = pfVar9 + 1;
              } while (uVar13 < 4);
            }
            else {
              fVar17 = pfVar3[lVar10 * 5 + 1];
              fVar15 = fVar15 - fVar16;
              if (fVar15 <= 0.0001) {
                fVar15 = 0.0001;
              }
              local_res8[0] =
                   (((pfVar3[lVar6 * 5 + 1] - fVar17) + (fVar17 - *pfVar9)) * (1.0 - param_2)) /
                   fVar15;
            }
            pfVar3[lVar10 * 5 + 2] = local_res8[0];
            pfVar3[lVar10 * 5 + 3] = local_res8[0];
          }
          else {
            pfVar3[lVar10 * 5 + 2] = pfVar3[lVar5 * 5 + 2];
            pfVar3[lVar10 * 5 + 3] = pfVar3[lVar5 * 5 + 3];
          }
        }
        else {
          (pfVar3 + lVar10 * 5 + 2)[0] = 0.0;
          (pfVar3 + lVar10 * 5 + 2)[1] = 0.0;
        }
      }
      else if (cVar1 == '\0') {
        fVar17 = pfVar3[lVar6 * 5 + 1];
        pfVar3[lVar10 * 5 + 2] = fVar17 - pfVar3[lVar10 * 5 + 1];
        pfVar3[lVar10 * 5 + 3] = fVar17 - pfVar3[lVar10 * 5 + 1];
      }
      else if (cVar1 == '\x02') {
        (pfVar3 + lVar10 * 5 + 2)[0] = 0.0;
        (pfVar3 + lVar10 * 5 + 2)[1] = 0.0;
      }
      local_res20 = local_res20 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar2);
  }
  return;
}



// FUNCTION 1405955c0 FUN_1405955c0 body=239 status=ok
// SIG undefined FUN_1405955c0(void)

void FUN_1405955c0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) &&
     ((((*(char *)((longlong)param_1 + 0x401) != '\0' || (param_2 != '\0')) &&
       (*(char *)((longlong)param_1 + 0x402) == '\0')) && (param_1[0x6f] != 0)))) {
    FUN_1405a6580(DAT_1468536c8,param_1);
    *(undefined1 *)((longlong)param_1 + 0x401) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    if ((param_2 == '\0') && ((char)param_1[0x80] == '\0')) {
      lVar1 = param_1[0x6f];
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
      }
      FUN_1405ae630(lVar1,0);
      if (lVar1 != 0) {
        FUN_1405a53f0(lVar1);
      }
    }
    else {
      FUN_1405b0f30(param_1);
    }
    FUN_1405a1640(param_1);
    FUN_1405b1ab0(param_1,0);
    if ((param_1[0x60] != 0) && (param_1[0x61] != 0)) {
      (**(code **)(*(longlong *)param_1[0x61] + 0x18))((longlong *)param_1[0x61],param_1);
    }
  }
  return;
}



// FUNCTION 1405956b0 FUN_1405956b0 body=27 status=ok
// SIG undefined FUN_1405956b0(void)

void FUN_1405956b0(undefined8 param_1)

{
  FUN_14059a5d0();
  FUN_142330890(param_1);
  return;
}



// FUNCTION 1405956d0 FUN_1405956d0 body=31 status=ok
// SIG undefined FUN_1405956d0(void)

void FUN_1405956d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1405956f0 FUN_1405956f0 body=272 status=ok
// SIG undefined FUN_1405956f0(void)

void FUN_1405956f0(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  void *pvVar4;
  ulong local_res8 [2];
  
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_1405a74f0();
  }
  else {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    }
    *(undefined1 *)(param_1 + 0x120) = 0;
    FUN_1405a74f0(param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  }
  FUN_1405976e0(param_1);
  if (((DAT_1468b616c == '\0') && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x4a) != '\0')) {
    if (((*(char *)(lVar1 + 0x4b) != '\0') && (*(int *)(param_1 + 100) != 0)) &&
       ((DAT_1468536c5 != '\0' &&
        (iVar3 = *(int *)(param_1 + 100) + -1, *(int *)(param_1 + 100) = iVar3, iVar3 == 0)))) {
      pvVar4 = (void *)FUN_1405a13c0(param_1,0,0,0);
      if (pvVar4 != (void *)0x0) {
        local_res8[0] = *(ulong *)(param_1 + 0x28);
        AK::SoundEngine::PrepareEvent(1,local_res8,1,FUN_1405a3380,pvVar4,*(bool *)(param_1 + 0x68))
        ;
        *(undefined1 *)(param_1 + 0x68) = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1 + 0x70);
      }
    }
    FUN_140595d70(param_1);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140595800 FUN_140595800 body=27 status=ok
// SIG undefined FUN_140595800(void)

void FUN_140595800(undefined8 param_1)

{
  FUN_1405ad780();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140595820 FUN_140595820 body=165 status=ok
// SIG undefined FUN_140595820(void)

void FUN_140595820(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  ulong local_res10 [6];
  
  if (((DAT_1468b616c == '\0') && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x4a) != '\0')) {
    if (((*(char *)(lVar1 + 0x4b) != '\0') && (*(int *)(param_1 + 100) != 0)) &&
       ((DAT_1468536c5 != '\0' &&
        (iVar2 = *(int *)(param_1 + 100) + -1, *(int *)(param_1 + 100) = iVar2, iVar2 == 0)))) {
      pvVar3 = (void *)FUN_1405a13c0(param_1,0,0,0);
      if (pvVar3 != (void *)0x0) {
        local_res10[0] = *(ulong *)(param_1 + 0x28);
        AK::SoundEngine::PrepareEvent
                  (1,local_res10,1,FUN_1405a3380,pvVar3,*(bool *)(param_1 + 0x68));
        *(undefined1 *)(param_1 + 0x68) = 0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1 + 0x70);
      }
    }
    FUN_140595d70(param_1);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1405958d0 FUN_1405958d0 body=263 status=ok
// SIG undefined FUN_1405958d0(void)

void FUN_1405958d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  undefined8 local_20;
  
  FUN_1417502d0();
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = FUN_142aaeb30();
    uVar5 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  bVar2 = false;
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x50) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar8 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *(longlong *)(param_1 + 0x48)) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x48)), plVar1 == (longlong *)0x0)
         ) {
LAB_140595977:
        bVar2 = true;
      }
      else {
        local_20 = uVar5;
        if (param_1 == 0) {
          local_20 = 0;
        }
        local_28 = param_1;
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
        if (cVar3 == '\0') goto LAB_140595977;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x5c) = iVar6 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x48,0);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1405aca60();
  return;
}



// FUNCTION 1405959e0 FUN_1405959e0 body=225 status=ok
// SIG undefined FUN_1405959e0(void)

undefined8 * FUN_1405959e0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  lVar5 = -1;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xd0) != -1)) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + 1;
    lVar5 = *(longlong *)(lVar3 + 0xd0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x28);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR_FUN_143fce248;
  puVar4[1] = lVar3;
  puVar4[2] = 0xffffffffffffffff;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xd0) != -1)) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + 1;
    puVar4[2] = *(longlong *)(lVar3 + 0xd0);
  }
  *(undefined4 *)(puVar4 + 3) = uVar2;
  *(undefined1 *)(puVar4 + 4) = uVar1;
  if (((lVar3 != 0) && (lVar5 != -1)) && (lVar5 == *(longlong *)(lVar3 + 0xd0))) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
  }
  return param_2;
}



// FUNCTION 140595ae0 FUN_140595ae0 body=52 status=ok
// SIG undefined FUN_140595ae0(void)

void FUN_140595ae0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140595b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 140595b20 FUN_140595b20 body=52 status=ok
// SIG undefined FUN_140595b20(void)

void FUN_140595b20(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_14059e180(uVar1,*(undefined4 *)(param_1 + 8),param_1 + 0xc);
    return;
  }
  return;
}



// FUNCTION 140595b60 FUN_140595b60 body=54 status=ok
// SIG undefined FUN_140595b60(void)

void FUN_140595b60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140595b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x418))(plVar2,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140595ba0 FUN_140595ba0 body=45 status=ok
// SIG undefined FUN_140595ba0(void)

void FUN_140595ba0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_14059fe50(uVar1);
    return;
  }
  return;
}



// FUNCTION 140595c10 FUN_140595c10 body=202 status=ok
// SIG undefined FUN_140595c10(void)

void FUN_140595c10(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  uVar5 = (longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x20) < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) &&
         ((plVar1[1] == *(longlong *)(param_2 + 0x10) || (param_3 != '\0')))) {
        LOCK();
        lVar2 = plVar1[2];
        *(int *)(plVar1 + 2) = 1;
        UNLOCK();
        if ((int)lVar2 == 0) {
          plVar1 = (longlong *)*plVar1;
          if (*(char *)((longlong)plVar1 + 0x73) == '\0') {
            *(undefined1 *)((longlong)plVar1 + 0x73) = 1;
            *(undefined1 *)(plVar1 + 0xe) = 1;
            if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
              (**(code **)(*plVar1 + 0x10))();
            }
          }
          if (*(code **)(param_2 + 0x18) != (code *)0x0) {
            (**(code **)(param_2 + 0x18))(param_2,1);
          }
        }
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 140595ce0 FUN_140595ce0 body=142 status=ok
// SIG undefined FUN_140595ce0(void)

void FUN_140595ce0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  iVar2 = TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                    (param_1 + 0x18,local_res10,1);
  if (iVar2 != 0) {
    FUN_1405a53f0(param_2);
    plVar1 = *(longlong **)(param_1 + 8);
    plVar3 = plVar1;
    if (plVar1 != plVar1 + (longlong)*(int *)(param_1 + 0x10) * 2) {
      while (*plVar3 != param_2) {
        plVar3 = plVar3 + 2;
        if (plVar3 == plVar1 + (longlong)*(int *)(param_1 + 0x10) * 2) {
          return;
        }
      }
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 4);
      if (iVar2 != -1) {
        plVar1[(longlong)iVar2 * 2] = 0;
      }
    }
  }
  return;
}



// FUNCTION 140595d70 FUN_140595d70 body=611 status=ok
// SIG undefined FUN_140595d70(void)

void FUN_140595d70(longlong param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  BOOL BVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853d10) && (_Init_thread_header(&DAT_146853d10), DAT_146853d10 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3faa0);
    _Init_thread_footer(&DAT_146853d10);
  }
  uVar11 = 0;
  DAT_146853d08 = 0;
  if ((DAT_146853d0c < 0) && (DAT_146853d0c != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146853d00,0);
  }
  if (param_1 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    }
    iVar6 = DAT_146853910 + -1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6 << 4;
      lVar12 = (longlong)DAT_146853910 << 4;
      lVar13 = lVar7;
      do {
        iVar5 = DAT_146853d08;
        puVar4 = DAT_146853908;
        if (DAT_146853908 == (undefined *)0x0) {
          puVar4 = &DAT_146853888;
        }
        if (*(int *)(puVar4 + lVar7 + 8) == *(int *)(param_1 + 0x28)) {
          lVar9 = (longlong)DAT_146853d08;
          uVar1 = *(undefined8 *)(puVar4 + lVar7);
          DAT_146853d08 = DAT_146853d08 + 1;
          if (DAT_146853d0c < DAT_146853d08) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146853d00,iVar5);
          }
          DAT_146853d00[lVar9] = uVar1;
          iVar5 = (DAT_146853910 - iVar6) + -1;
          if (iVar5 != 0) {
            puVar4 = DAT_146853908;
            if (DAT_146853908 == (undefined *)0x0) {
              puVar4 = &DAT_146853888;
            }
            _guard_xfg_dispatch_icall_nop(puVar4 + lVar13,puVar4 + lVar12,(longlong)iVar5 << 4);
          }
          DAT_146853910 = DAT_146853910 + -1;
          TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
          ::ResizeShrink(&DAT_146853888);
        }
        lVar12 = lVar12 + -0x10;
        lVar13 = lVar13 + -0x10;
        lVar7 = lVar7 + -0x10;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
  }
  if (DAT_1468536c5 != '\0') {
    uVar8 = (ulonglong)((longlong)(DAT_146853d00 + DAT_146853d08) + (7 - (longlong)DAT_146853d00))
            >> 3;
    if (DAT_146853d00 + DAT_146853d08 < DAT_146853d00) {
      uVar8 = uVar11;
    }
    puVar10 = DAT_146853d00;
    if (uVar8 != 0) {
      do {
        pvVar2 = (void *)*puVar10;
        AK::SoundEngine::CancelBankCallbackCookie(pvVar2);
        FMemory::operator_delete(pvVar2,0x28);
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar11 != uVar8);
    }
  }
  return;
}



// FUNCTION 140595fe0 FUN_140595fe0 body=204 status=ok
// SIG undefined FUN_140595fe0(void)

void FUN_140595fe0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x402) = 1;
  lVar1 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    if (*(char *)(param_1 + 0x401) != '\0') {
      FUN_1405a6580(DAT_1468536c8,param_1);
    }
    if (0 < *(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4)) {
      FUN_1405ae0b0(lVar1,param_1);
    }
  }
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1405ac930(*(longlong *)(param_1 + 0x378));
    lVar1 = *(longlong *)(param_1 + 0x378);
  }
  *(undefined1 *)(param_1 + 0x403) = 0;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    FUN_140596c00(lVar1);
    FUN_1405a53f0(lVar1);
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1405a53f0();
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  *(undefined1 *)(param_1 + 0x402) = 0;
  return;
}



// FUNCTION 1405960b0 FUN_1405960b0 body=236 status=ok
// SIG undefined FUN_1405960b0(void)

void FUN_1405960b0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (DAT_146853710 == 0) {
    DAT_1468536c0 = DAT_1468536c0 + 1;
    FUN_14059e390(param_1,1);
    *(undefined8 *)(DAT_146853710 + 0x8458) = 0;
  }
  else {
    *(undefined8 *)(DAT_146853710 + 0x8458) = 0;
    DAT_1468536c0 = DAT_1468536c0 + 1;
    LOCK();
    iVar4 = *(int *)(DAT_146853710 + 0x8408);
    if (iVar4 == 0) {
      *(int *)(DAT_146853710 + 0x8408) = 0;
      iVar4 = 0;
    }
    lVar3 = DAT_146853710;
    UNLOCK();
    if (iVar4 < 0x40) {
      LOCK();
      *(int *)(DAT_146853710 + 0x8408) = *(int *)(DAT_146853710 + 0x8408) + 1;
      UNLOCK();
    }
    else {
      puVar5 = (undefined8 *)operator_new(0x10);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = param_1;
        puVar1 = *(undefined8 **)(lVar3 + 0x8410);
        *(undefined8 **)(lVar3 + 0x8410) = puVar5;
        *puVar1 = puVar5;
      }
    }
    if ((DAT_146853710 != 0) &&
       (plVar2 = *(longlong **)(DAT_146853710 + 0x8420), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140596195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_146853710 + 0x8430));
  return;
}



// FUNCTION 1405961a0 FUN_1405961a0 body=306 status=ok
// SIG undefined FUN_1405961a0(void)

ulonglong FUN_1405961a0(ulonglong param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  
  uVar5 = 0;
  if (param_1 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    }
    iVar1 = DAT_146853910;
    uVar6 = uVar5;
    uVar8 = uVar5;
    iVar4 = DAT_146853910;
    if (0 < DAT_146853910) {
      do {
        puVar9 = DAT_146853908;
        if (DAT_146853908 == (undefined *)0x0) {
          puVar9 = &DAT_146853888;
        }
        iVar7 = (int)uVar8;
        if (*(ulonglong *)(puVar9 + uVar6) == param_1) {
          iVar3 = (iVar4 - iVar7) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (puVar9 + (longlong)iVar7 * 0x10,puVar9 + (longlong)(iVar4 - iVar3) * 0x10,
                       (longlong)iVar3 << 4);
            iVar4 = DAT_146853910;
          }
          DAT_146853910 = iVar4 + -1;
          TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
          ::ResizeShrink(&DAT_146853888);
          iVar4 = DAT_146853910;
        }
        else {
          uVar8 = (ulonglong)(iVar7 + 1);
          uVar6 = uVar6 + 0x10;
        }
      } while ((int)uVar8 < iVar4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853860);
    if (iVar1 != iVar4) {
      uVar5 = param_1;
    }
  }
  return uVar5;
}



// FUNCTION 1405962e0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140596390 FUN_140596390 body=75 status=ok
// SIG undefined FUN_140596390(void)

void FUN_140596390(longlong *param_1,longlong param_2)

{
  __uint64 _Var1;
  
  if ((param_2 != 0) && (param_1[0x5b] != 0)) {
    _Var1 = (**(code **)(*param_1 + 0x548))();
    AK::SoundEngine::PostEvent
              (*(ulong *)(param_2 + 0x28),_Var1,0,
               (_func_void_AkCallbackType_AkCallbackInfo_ptr *)0x0,(void *)0x0,0,
               (AkExternalSourceInfo *)0x0,0);
  }
  return;
}



// FUNCTION 1405963e0 FUN_1405963e0 body=247 status=ok
// SIG undefined FUN_1405963e0(void)

longlong *
FUN_1405963e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)((longlong)puVar9 + (longlong)*(int *)(param_2 + 1) * 0xc);
  for (; puVar9 != puVar1; puVar9 = (undefined8 *)((longlong)puVar9 + 0xc)) {
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar4 = *puVar9;
    iVar6 = (int)param_1[1];
    uVar7 = *(undefined4 *)(param_3 + 1);
    uStack_3c = (undefined4)*param_3;
    uStack_38 = (undefined4)((ulonglong)*param_3 >> 0x20);
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    lVar8 = *param_1;
    puVar2 = (undefined8 *)((longlong)iVar6 * 0x20 + lVar8);
    *puVar2 = uVar4;
    puVar2[1] = CONCAT44(uStack_3c,uVar5);
    puVar3 = (undefined4 *)((longlong)iVar6 * 0x20 + 0x10 + lVar8);
    *puVar3 = uStack_38;
    puVar3[1] = uVar7;
    puVar3[2] = param_5;
    puVar3[3] = param_4;
  }
  return param_1;
}



// FUNCTION 1405964e0 FUN_1405964e0 body=122 status=ok
// SIG undefined FUN_1405964e0(void)

undefined8 * FUN_1405964e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143fcfe90;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140596560 CopyToEmptyStorage body=58 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_6ec60eb40db75f8e9c2f68d22a72e573>_>::
     CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  return;
}



// FUNCTION 1405965a0 FUN_1405965a0 body=98 status=ok
// SIG undefined FUN_1405965a0(void)

undefined8 * FUN_1405965a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143fcfe38;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x2c) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140596610 CopyToEmptyStorage body=64 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_2931e08e46c6f3c2a867d3b9cdab28a0>_>::
     CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_143fcfe68;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 140596650 FUN_140596650 body=80 status=ok
// SIG undefined FUN_140596650(void)

void FUN_140596650(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143fcfea8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 1405966a0 FUN_1405966a0 body=121 status=ok
// SIG undefined FUN_1405966a0(void)

longlong FUN_1405966a0(longlong param_1,char param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_1 != 0) && (param_2 == '\0')) && (param_4 != 0)) &&
     ((lVar1 = FUN_140599e90(param_4), lVar1 != 0 && (lVar2 = FUN_14058e530(lVar1), lVar2 != 0)))) {
    *(longlong *)(lVar2 + 0x28) = param_1;
    FWeakObjectPtr::operator=(lVar2 + 0x40,lVar1);
    *(undefined4 *)(lVar2 + 0x30) = param_3;
    return lVar2;
  }
  return 0;
}



// FUNCTION 140596720 FUN_140596720 body=58 status=ok
// SIG undefined FUN_140596720(void)

void FUN_140596720(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fd0070;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_143fd00b8;
  }
  return;
}



// FUNCTION 140596760 FUN_140596760 body=81 status=ok
// SIG undefined FUN_140596760(void)

void FUN_140596760(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fcffe0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143fd0028;
  }
  return;
}



// FUNCTION 1405967c0 FUN_1405967c0 body=84 status=ok
// SIG undefined FUN_1405967c0(void)

void FUN_1405967c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143fcfec0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_143fcff08;
  }
  return;
}



// FUNCTION 140596820 FUN_140596820 body=84 status=ok
// SIG undefined FUN_140596820(void)

void FUN_140596820(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143fcff50;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_143fcff98;
  }
  return;
}


