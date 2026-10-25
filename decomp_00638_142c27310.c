// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c27310 SetObservedPath body=460 status=ok
// SIG undefined SetObservedPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UAITask_MoveTo::SetObservedPath(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
    TBaseMulticastDelegate<void>::Remove(*(longlong *)(param_1 + 0xf8) + 0x80);
  }
  plVar3 = (longlong *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar6 = (longlong *)param_2[1];
  lVar7 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_78 = lVar7;
  plStack_70 = plVar6;
  if (&local_78 != plVar3) {
    local_78 = *plVar3;
    plStack_70 = *(longlong **)(param_1 + 0x100);
    *plVar3 = lVar7;
    *(longlong **)(param_1 + 0x100) = plVar6;
    local_40 = lVar7;
    plStack_38 = plVar6;
  }
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  if (*plVar3 != 0) {
    puVar4 = (uint *)(*plVar3 + 0x98);
    *puVar4 = *puVar4 & 0xffffffef;
    uStack_48 = 0;
    local_50 = &LAB_14102fc44;
    local_68 = 0;
    local_60 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_68);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14428ae88;
      FWeakObjectPtr::operator=(puVar8 + 1,param_1);
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_50._4_4_;
      *(undefined4 *)(puVar8 + 3) = uStack_48;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_44;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_FUN_14428aed0;
    }
    TBaseMulticastDelegate<void>::Add(*plVar3 + 0x80,&local_58,&local_68);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    *(undefined8 *)(param_1 + 0xd8) = local_58;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142c274e0 FUN_142c274e0 body=47 status=ok
// SIG undefined FUN_142c274e0(void)

void FUN_142c274e0(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x1b8) = param_2;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 0.017453292);
  *(float *)(param_1 + 0x1bc) = fVar1;
  return;
}



// FUNCTION 142c27510 FUN_142c27510 body=184 status=ok
// SIG undefined FUN_142c27510(void)

void FUN_142c27510(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char local_28 [8];
  undefined8 local_20;
  char local_18 [8];
  undefined8 local_10;
  
  FUN_14077bb00(local_28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  if (local_28[0] != DAT_146859248) {
    local_18[0] = local_28[0];
    local_10 = local_20;
    FUN_142c2be60(param_1,local_18,param_3);
  }
  return;
}



// FUNCTION 142c275d0 FUN_142c275d0 body=259 status=ok
// SIG undefined FUN_142c275d0(void)

void FUN_142c275d0(longlong *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  longlong local_res8;
  
  if (param_2 != *(float *)((longlong)param_1 + 0x184)) {
    lVar2 = param_1[0x23];
    *(float *)((longlong)param_1 + 0x184) = param_2;
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar7;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        if (0.0 < param_2) {
          if ((*(byte *)((longlong)param_1 + 0x18c) & 1) == 0) {
            return;
          }
          local_res8 = param_1[0x32];
          uVar5 = AActor::GetWorldTimerManager(lVar2);
          uVar6 = FTimerManager::FindTimer(uVar5,&local_res8,0);
          fVar8 = (float)FTimerManager::InternalGetTimerElapsed(uVar5,uVar6);
          fVar9 = *(float *)((longlong)param_1 + 0x184);
          if (fVar8 <= 0.0) {
            fVar8 = 0.0;
          }
          if (fVar9 <= fVar8) {
            if (fVar8 <= fVar9) {
              return;
            }
            fVar9 = 0.0001;
          }
          else {
            fVar9 = fVar9 - fVar8;
          }
        }
        else {
          fVar9 = 0.0;
        }
        (**(code **)(*param_1 + 0x468))(param_1,fVar9);
      }
    }
  }
  return;
}



// FUNCTION 142c276e0 FUN_142c276e0 body=105 status=ok
// SIG undefined FUN_142c276e0(void)

void FUN_142c276e0(longlong *param_1,byte param_2)

{
  float fVar1;
  
  if ((*(uint *)((longlong)param_1 + 0x18c) & 1) != (uint)param_2) {
    fVar1 = 0.0;
    *(uint *)((longlong)param_1 + 0x18c) =
         *(uint *)((longlong)param_1 + 0x18c) & 0xfffffffe | (uint)param_2;
    if ((param_2 != 0) && (0.0 < *(float *)((longlong)param_1 + 0x184))) {
      fVar1 = (float)FGenericPlatformMath::SRand();
      fVar1 = fVar1 * *(float *)((longlong)param_1 + 0x184) + 0.0001;
    }
                    /* WARNING: Could not recover jumptable at 0x000142c2773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x468))(param_1,fVar1);
    return;
  }
  return;
}



// FUNCTION 142c27750 FUN_142c27750 body=563 status=ok
// SIG undefined FUN_142c27750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c27750(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 != 0) {
    iVar2 = *(int *)(lVar6 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar7;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      iVar2 = UEngine::GetNetMode(DAT_146b17150,lVar3);
      if (iVar2 < 3) {
        local_b8 = &LAB_142c1bdd4;
        uStack_b0 = 0;
        uVar4 = AActor::GetWorldTimerManager(lVar6);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar5 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar5[5] = lVar6;
          *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 400,&local_a8,param_2);
        if (local_48 != 0) {
          plVar8 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar8 = local_58;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          lVar6 = FMemory::Realloc(plVar5,0,0);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c27990 SetUp body=437 status=ok
// SIG undefined SetUp(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UAITask_MoveTo::SetUp(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x90) = *param_3;
  *(undefined8 *)(param_1 + 0x98) = param_3[1];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0xa8) = param_3[3];
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ (*(uint *)(param_1 + 0xb0) ^ *(uint *)(param_3 + 4)) & 1;
  uVar9 = (*(uint *)(param_1 + 0xb0) ^ *(uint *)(param_3 + 4)) & 2 ^ *(uint *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = uVar9;
  uVar9 = (uVar9 ^ *(uint *)(param_3 + 4)) & 4 ^ uVar9;
  *(uint *)(param_1 + 0xb0) = uVar9;
  uVar9 = (uVar9 ^ *(uint *)(param_3 + 4)) & 8 ^ uVar9;
  *(uint *)(param_1 + 0xb0) = uVar9;
  uVar9 = (uVar9 ^ *(uint *)(param_3 + 4)) & 0x10 ^ uVar9;
  *(uint *)(param_1 + 0xb0) = uVar9;
  uVar9 = (uVar9 ^ *(uint *)(param_3 + 4)) & 0x20 ^ uVar9;
  *(uint *)(param_1 + 0xb0) = uVar9;
  uVar9 = (uVar9 ^ *(uint *)(param_3 + 4)) & 0x40 ^ uVar9;
  *(uint *)(param_1 + 0xb0) = uVar9;
  puVar3 = (undefined8 *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb0) = (uVar9 ^ *(uint *)(param_3 + 4)) & 0x80 ^ uVar9;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_30 = (longlong *)param_3[6];
  local_38 = param_3[5];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar3;
    plVar6 = *(longlong **)(param_1 + 0xc0);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xbc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0xc4) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 == (longlong *)0x0) {
    uVar8 = *(undefined4 *)(param_3 + 7);
  }
  else {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
      uVar8 = *(undefined4 *)(param_3 + 7);
    }
    else {
      uVar8 = *(undefined4 *)(param_3 + 7);
    }
  }
  *(undefined4 *)(param_1 + 200) = uVar8;
  return;
}



// FUNCTION 142c27b50 FUN_142c27b50 body=245 status=ok
// SIG undefined FUN_142c27b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142c27b50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong param_5,undefined4 *param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_6 = 0x3f800000;
  if ((*(float *)(param_2 + 8) != -1.0) &&
     (((*(float *)(param_3 + 0x14) != (float)DAT_146691200 ||
       (DAT_146691200._4_4_ != *(float *)(param_3 + 0x18))) ||
      (DAT_146691208 != *(float *)(param_3 + 0x1c))))) {
    lVar1 = *(longlong *)(param_5 + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(float *)(lVar1 + 0x228);
    }
    fVar4 = *(float *)(param_3 + 0x14) - (float)local_18;
    fVar2 = *(float *)(param_3 + 0x1c) - local_10;
    fVar3 = *(float *)(param_3 + 0x18) - (float)((ulonglong)local_18 >> 0x20);
    return (ulonglong)
           CONCAT31((int3)((uint)local_10 >> 8),
                    fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= *(float *)(param_2 + 8));
  }
  return (ulonglong)param_6 & 0xffffffffffffff00;
}



// FUNCTION 142c27cf0 FUN_142c27cf0 body=190 status=ok
// SIG undefined FUN_142c27cf0(void)

undefined8 FUN_142c27cf0(longlong *param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c8ec) {
    _Init_thread_header(&DAT_146b2c8ec);
    if (DAT_146b2c8ec == -1) {
      DAT_146b2c8e9 = 7;
      _Init_thread_footer(&DAT_146b2c8ec);
    }
  }
  if (param_3 != DAT_146b2c8e9) {
    if (param_1 == (longlong *)0x0) {
      uVar2 = param_3 & 2;
    }
    else {
      bVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      uVar2 = 1 << (bVar1 & 0x1f) & (uint)param_3;
    }
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142c27db0 FUN_142c27db0 body=588 status=ok
// SIG undefined FUN_142c27db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c27db0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  plVar2 = (longlong *)param_1[0x1a];
  uVar7 = (longlong)(int)param_1[0x1b] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[0x1b] < plVar2) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x30) >> 1 & 1) != 0)) {
        uStack_b0 = *(ulonglong *)(lVar1 + 0x50);
        local_b8 = (code *)CONCAT71(local_b8._1_7_,*(undefined1 *)(lVar1 + 0x48));
        UAIPerceptionSystem::RegisterAllPawnsAsSourcesForSense(param_1,&local_b8);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    local_b8 = FUN_142c1cb70;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    lVar1 = param_1[0x1c];
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar2 + 3) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_b0._4_4_;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 1;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x2f,&local_a8,(int)lVar1);
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142c28000 FUN_142c28000 body=792 status=ok
// SIG undefined FUN_142c28000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c28000(longlong param_1,longlong param_2)

{
  float fVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined1 local_178 [4];
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [12];
  undefined4 local_14c;
  undefined1 local_ec [36];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  if (((param_1 != 0) && (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8, param_2 != 0)) &&
     (plVar4 = (longlong *)FWeakObjectPtr::Get(), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x148))(plVar4);
    pvVar2 = ThreadLocalStoragePointer;
    lVar5 = *(longlong *)(param_2 + 0x168);
    if (lVar5 == 0) {
      local_174 = _DAT_1468b5d90;
      local_16c = DAT_1468b5d98;
    }
    else {
      local_174 = *(undefined8 *)(lVar5 + 0x220);
      local_16c = *(undefined4 *)(lVar5 + 0x228);
    }
    local_160 = local_16c;
    pfVar7 = *(float **)(param_1 + 0x348);
    if (*(float **)(param_1 + 0x348) == (float *)0x0) {
      pfVar7 = (float *)(param_1 + 8);
    }
    local_168 = local_174;
    pfVar9 = pfVar7 + (longlong)*(int *)(param_1 + 0x350) * 0x1a;
    if (pfVar7 != pfVar9) {
      uVar8 = (ulonglong)_tls_index;
      do {
        if (((((((uint)pfVar7[0x11] >> 8 & 1) != 0) && (0.0 < pfVar7[2])) &&
             ((fVar1 = *pfVar7, fVar1 < 3.4028235e+38 &&
              ((((uint)pfVar7[0x11] >> 2 & 1) == 0 &&
               (pfVar7[0x10] <= fVar1 && fVar1 != pfVar7[0x10])))))) &&
            (lVar5 = (**(code **)(*plVar4 + 0x688))(plVar4), lVar5 != 0)) &&
           (lVar6 = (**(code **)(*plVar4 + 0x148))(plVar4), lVar6 != 0)) {
          if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar8 * 8) + 0x38) < DAT_146b2c900) &&
             (_Init_thread_header(&DAT_146b2c900), DAT_146b2c900 == -1)) {
            FName::FName(&DAT_146b2c8f8,L"AISenseValidityTest",1);
            _Init_thread_footer(&DAT_146b2c900);
          }
          _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
          local_14c = 0x3f800000;
          local_198 = 0;
          FUN_1422ffb20(local_c8,DAT_146b2c8f8,local_178,0);
          local_188 = &DAT_146aefe68;
          local_190 = local_c8;
          local_198 = CONCAT44(local_198._4_4_,3);
          cVar3 = UWorld::LineTraceSingleByChannel(lVar6,local_158,&local_168);
          if ((cVar3 == '\0') || (lVar6 = FWeakObjectPtr::Get(local_ec), lVar6 == lVar5)) {
            pfVar7[0x11] = (float)((uint)pfVar7[0x11] & 0xfffffffd | 4);
          }
          if (local_60 != 0) {
            FMemory::Free();
          }
          if (local_80 != 0) {
            FMemory::Free();
          }
        }
        pfVar7 = pfVar7 + 0x1a;
      } while (pfVar7 != pfVar9);
    }
  }
  return;
}



// FUNCTION 142c28320 FUN_142c28320 body=1467 status=ok
// SIG undefined FUN_142c28320(void)

void FUN_142c28320(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar12 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1 + -8),2);
  if ((*(byte *)(lVar12 + 0x830) & 0x80) != 0) {
    return;
  }
  uVar17 = 0;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar12 + 0x790);
  uVar14 = 0;
  if ((*(byte *)(param_1 + 0x120) & 2) != 0) {
    plVar13 = (longlong *)(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 0xf8);
    puStack_68 = (uint *)(param_1 + 0xe0);
    local_b8 = 0x100000000;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    if (iVar1 != 0) {
      puVar19 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar19 = puStack_68;
      }
      uVar10 = *puVar19;
      uVar16 = uVar17;
      uStack_a0 = uVar17;
      while (uVar10 == 0) {
        uStack_a0 = uStack_a0 + 0x20;
        local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        local_b8 = CONCAT44(local_b8._4_4_,uVar16 + 1);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar16)
        goto LAB_142c2846d;
        uVar10 = puVar19[(longlong)(int)uVar16 + 1];
        uVar16 = uVar16 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar11 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      local_b8 = CONCAT44(uVar10,(undefined4)local_b8);
      if (uVar10 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_a8._4_4_ = (uStack_a0 - iVar11) + 0x1f;
      if (iVar1 < local_a8._4_4_) {
LAB_142c2846d:
        local_a8._4_4_ = iVar1;
      }
    }
    uStack_60 = CONCAT44(local_a8._4_4_,0xffffffff);
    auVar6._8_4_ = uStack_a0;
    auVar6._0_8_ = uStack_60;
    auVar6._12_4_ = iStack_9c;
    local_50._0_4_ = SUB84(plVar13,0);
    local_50._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
    uStack_70 = local_b8;
    local_80 = 0;
    uStack_a0 = 0xffffffff;
    iStack_9c = local_a8._4_4_;
    uStack_b0 = local_b8;
    uStack_58 = auVar6._8_8_;
    local_98._8_4_ = (undefined4)local_50;
    local_98._0_8_ = uStack_58;
    local_98._12_4_ = local_50._4_4_;
    bVar4 = local_a8._4_4_ < *(int *)(param_1 + 0xf8);
    local_88 = plVar13;
    local_78 = plVar13;
    local_a8 = puStack_68;
    local_50 = plVar13;
    uVar10 = uVar17;
    if (bVar4) {
      do {
        iVar1 = iStack_9c;
        lVar12 = (longlong)iStack_9c;
        cVar9 = FWeakObjectPtr::IsValid(*plVar13 + 8 + lVar12 * 0x20);
        uVar14 = uVar10;
        if (cVar9 == '\0') {
          uVar14 = uVar10 | *(uint *)(lVar12 * 0x20 + 0x10 + *plVar13);
          TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
          ::Remove(local_98._8_8_,iVar1);
          local_80 = CONCAT11(local_80._1_1_,1);
        }
        uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        uVar10 = uVar14;
      } while (iStack_9c < (int)local_a8[6]);
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
      }
    }
    uVar18 = 0xffffffff;
    uVar16 = 0xffffffff;
    uVar10 = uVar14;
    while ((uVar10 != 0 && (uVar16 = uVar16 + 1, uVar14 == 0 && 1 << (uVar16 & 0x1f) == 0))) {
      uVar18 = uVar18 & ~(1 << (uVar16 & 0x1f));
      uVar10 = uVar14 & uVar18;
    }
    do {
      if ((((uVar14 & uVar18) == 0) || ((int)uVar16 < 0)) ||
         (*(int *)(param_1 + 0xb0) <= (int)uVar16)) goto LAB_142c285b6;
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar16 * 8);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x288))();
      }
      uVar18 = uVar18 & ~(1 << (uVar16 & 0x1f));
      if ((uVar14 & uVar18) == 0) goto LAB_142c285b6;
      do {
        uVar16 = uVar16 + 1;
        if (uVar14 != 0 || 1 << (uVar16 & 0x1f) != 0) break;
        uVar18 = uVar18 & ~(1 << (uVar16 & 0x1f));
      } while ((uVar14 & uVar18) != 0);
    } while( true );
  }
LAB_142c285be:
  bVar4 = false;
  if (0 < *(int *)(param_1 + 0x140)) {
    FUN_142c22da0(param_1 + -0x28);
  }
  plVar13 = *(longlong **)(param_1 + 0xa8);
  uVar14 = uVar17;
  if (0 < *(int *)(param_1 + 0xb0)) {
    do {
      lVar12 = *plVar13;
      if ((lVar12 == 0) ||
         (fVar20 = *(float *)(lVar12 + 0x40) - param_2, *(float *)(lVar12 + 0x40) = fVar20,
         0.0 < fVar20)) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      bVar4 = (bool)(bVar4 | bVar8);
      uVar14 = uVar14 + 1;
      plVar13 = plVar13 + 1;
    } while ((int)uVar14 < *(int *)(param_1 + 0xb0));
    if (bVar4) {
      plVar13 = (longlong *)(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x30);
      puStack_68 = (uint *)(param_1 + 0x18);
      local_b8 = 0x100000000;
      local_a8._4_4_ = 0;
      uStack_a0 = 0;
      if (iVar1 != 0) {
        puVar19 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar19 = puStack_68;
        }
        uVar14 = *puVar19;
        uVar10 = uVar17;
        uStack_a0 = uVar17;
        while (uVar14 == 0) {
          uStack_a0 = uStack_a0 + 0x20;
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          local_b8 = CONCAT44(local_b8._4_4_,uVar10 + 1);
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar10)
          goto LAB_142c286dc;
          uVar14 = puVar19[(longlong)(int)uVar10 + 1];
          uVar10 = uVar10 + 1;
        }
        uVar14 = -uVar14 & uVar14;
        iVar11 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        local_b8 = CONCAT44(uVar14,(undefined4)local_b8);
        if (uVar14 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        local_a8._4_4_ = (uStack_a0 - iVar11) + 0x1f;
        if (iVar1 < local_a8._4_4_) {
LAB_142c286dc:
          local_a8._4_4_ = iVar1;
        }
      }
      uStack_60 = CONCAT44(local_a8._4_4_,0xffffffff);
      auVar7._8_4_ = uStack_a0;
      auVar7._0_8_ = uStack_60;
      auVar7._12_4_ = iStack_9c;
      local_50._0_4_ = SUB84(plVar13,0);
      local_50._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      uStack_58 = auVar7._8_8_;
      uStack_70 = local_b8;
      local_80 = 0;
      uStack_a0 = 0xffffffff;
      iStack_9c = local_a8._4_4_;
      uStack_b0 = local_b8;
      local_98._8_4_ = (undefined4)local_50;
      local_98._0_8_ = uStack_58;
      local_98._12_4_ = local_50._4_4_;
      bVar5 = local_a8._4_4_ < *(int *)(param_1 + 0x30);
      local_88 = plVar13;
      local_78 = plVar13;
      local_50 = plVar13;
      local_a8 = puStack_68;
      if (bVar5) {
        do {
          iVar1 = iStack_9c;
          lVar12 = (longlong)iStack_9c * 0x3c;
          cVar9 = FWeakObjectPtr::IsValid(*plVar13 + 4 + lVar12);
          if (cVar9 == '\0') {
            lVar2 = *plVar13;
            plVar15 = *(longlong **)(param_1 + 0xa8);
            uVar14 = uVar17;
            if (0 < *(int *)(param_1 + 0xb0)) {
              do {
                lVar3 = *plVar15;
                if ((lVar3 != 0) &&
                   ((*(uint *)(lVar2 + lVar12 + 0xc) >> (*(byte *)(lVar3 + 0x48) & 0x1f) & 1) != 0))
                {
                  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
                            (lVar3 + 0x78,lVar2 + lVar12 + 4);
                }
                uVar14 = uVar14 + 1;
                plVar15 = plVar15 + 1;
              } while ((int)uVar14 < *(int *)(param_1 + 0xb0));
            }
            TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
            ::Remove(local_98._8_8_,iVar1);
            local_80 = CONCAT11(local_80._1_1_,1);
          }
          else {
            FUN_142c1ce20(*plVar13 + 4 + lVar12);
          }
          uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        } while (iStack_9c < (int)local_a8[6]);
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
        }
      }
      plVar13 = *(longlong **)(param_1 + 0xa8);
      if (0 < *(int *)(param_1 + 0xb0)) {
        do {
          plVar15 = (longlong *)*plVar13;
          if ((plVar15 != (longlong *)0x0) && (*(float *)(plVar15 + 8) <= 0.0)) {
            uVar21 = (**(code **)(*plVar15 + 0x2b8))(plVar15);
            *(undefined4 *)(plVar15 + 8) = uVar21;
          }
          uVar17 = uVar17 + 1;
          plVar13 = plVar13 + 1;
        } while ((int)uVar17 < *(int *)(param_1 + 0xb0));
      }
    }
  }
  cVar9 = FUN_142c1e380(param_1 + -0x28,!bVar4);
  if (((bVar4) || (cVar9 != '\0')) || ((*(byte *)(param_1 + 0x120) & 1) != 0)) {
    FUN_142c238a0(param_1 + 8);
    FUN_142c238a0(param_1 + 0x58);
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffffffe;
  }
  return;
LAB_142c285b6:
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffffffd;
  goto LAB_142c285be;
}



// FUNCTION 142c288e0 FUN_142c288e0 body=168 status=ok
// SIG undefined FUN_142c288e0(void)

void FUN_142c288e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (((*(byte *)(param_1 + 0x178) & 2) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x118), plVar2 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if ((lVar3 != 0) && (lVar3 = FUN_142c1f5b0(lVar3), lVar3 != 0)) {
      puVar4 = *(undefined8 **)(param_1 + 0x180);
      puVar1 = puVar4 + *(int *)(param_1 + 0x188);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        FUN_142c28cb0(lVar3,plVar2,*puVar4);
      }
    }
    *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffd;
  }
  return;
}



// FUNCTION 142c28990 FUN_142c28990 body=413 status=ok
// SIG undefined FUN_142c28990(void)

void FUN_142c28990(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  
  if (param_2 != 0) {
    lVar3 = FUN_142c33440();
    lVar4 = param_2;
    while (lVar4 != lVar3) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (((plVar1 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar4 != 0)
        ) && (lVar4 = FUN_142c1f5b0(lVar4), lVar4 != 0)) {
      FUN_142c28cb0(lVar4,plVar1,param_2);
      plVar1 = *(longlong **)(param_1 + 0x180);
      lVar4 = 0;
      iVar9 = *(int *)(param_1 + 0x188);
      for (plVar10 = plVar1; plVar10 != plVar1 + iVar9; plVar10 = plVar10 + 1) {
        lVar3 = lVar4;
        if (*plVar10 != 0) {
          lVar5 = FUN_142c33440();
          for (lVar7 = *plVar10; (lVar3 = lVar4, lVar7 != 0 && (lVar3 = *plVar10, lVar7 != lVar5));
              lVar7 = *(longlong *)(lVar7 + 0x30)) {
          }
        }
        lVar5 = FUN_142c33440();
        lVar7 = param_2;
        do {
          lVar6 = param_2;
          if (lVar7 == lVar5) break;
          lVar7 = *(longlong *)(lVar7 + 0x30);
          lVar6 = lVar4;
        } while (lVar7 != 0);
        if (lVar3 == lVar6) {
          iVar9 = (int)((longlong)plVar10 - (longlong)plVar1 >> 3);
          if (iVar9 != -1) {
            iVar8 = *(int *)(param_1 + 0x188);
            iVar2 = (iVar8 - iVar9) + -1;
            if (0 < iVar2) {
              iVar2 = 1;
            }
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar9 * 8),
                         (void *)(*(longlong *)(param_1 + 0x180) + (longlong)(iVar8 - iVar2) * 8),
                         (longlong)iVar2 << 3);
              iVar8 = *(int *)(param_1 + 0x188);
            }
            *(int *)(param_1 + 0x188) = iVar8 + -1;
          }
          break;
        }
      }
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffd;
      uVar11 = 0;
      if (0 < *(int *)(param_1 + 0x188)) {
        uVar11 = 2;
      }
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | uVar11;
    }
  }
  return;
}



// FUNCTION 142c28b30 FUN_142c28b30 body=371 status=ok
// SIG undefined FUN_142c28b30(void)

void FUN_142c28b30(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int local_res10 [2];
  
  iVar1 = *(int *)(param_2 + 0x268);
  lVar5 = 0x80;
  if (*(char *)(param_2 + 0x1bc) == '\0') {
    lVar5 = 0x30;
  }
  plVar6 = (longlong *)(lVar5 + param_1);
  local_res10[0] = iVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c938) && (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1))
  {
    DAT_146b2c934 = -1;
    _Init_thread_footer(&DAT_146b2c938);
  }
  if (iVar1 == DAT_146b2c934) {
    return;
  }
  if ((int)plVar6[1] == *(int *)((longlong)plVar6 + 0x34)) {
    return;
  }
  uVar8 = (longlong)(int)plVar6[9] - 1;
  plVar7 = (longlong *)plVar6[8];
  if ((longlong *)plVar6[8] == (longlong *)0x0) {
    plVar7 = plVar6 + 7;
  }
  iVar2 = *(int *)((longlong)plVar7 + ((longlong)iVar1 & uVar8) * 4);
  if (iVar2 == -1) {
    return;
  }
  lVar5 = *plVar6;
  while (*(int *)((longlong)iVar2 * 0x3c + lVar5) != iVar1) {
    iVar2 = *(int *)((longlong)iVar2 * 0x3c + 0x34 + lVar5);
    if (iVar2 == -1) {
      return;
    }
  }
  if (iVar2 == -1) {
    return;
  }
  iVar2 = *(int *)((longlong)plVar7 + ((longlong)iVar1 & uVar8) * 4);
  do {
    if (iVar2 == -1) {
LAB_142c28c2d:
      piVar4 = (int *)0x0;
LAB_142c28c2f:
      FUN_142c215f0(param_1,piVar4 + 1);
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::Remove(plVar6,local_res10);
      puVar3 = (undefined4 *)FUN_142c20fe0(local_res10);
      *(undefined4 *)(param_2 + 0x268) = *puVar3;
      return;
    }
    piVar4 = (int *)((longlong)iVar2 * 0x3c + lVar5);
    if (*piVar4 == iVar1) {
      if (iVar2 != -1) goto LAB_142c28c2f;
      goto LAB_142c28c2d;
    }
    iVar2 = piVar4[0xd];
  } while( true );
}



// FUNCTION 142c28cb0 FUN_142c28cb0 body=378 status=ok
// SIG undefined FUN_142c28cb0(void)

void FUN_142c28cb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  int local_res8 [2];
  byte local_38 [16];
  ulonglong uVar6;
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xf8,local_res8,param_2);
  uVar6 = 0;
  uVar3 = uVar6;
  if (local_res8[0] != -1) {
    uVar3 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf8);
  }
  uVar7 = uVar3 + 8;
  if (uVar3 == 0) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    if (param_3 != 0) {
      lVar2 = FUN_142c33440();
      lVar4 = param_3;
      do {
        if (lVar4 == lVar2) {
          FUN_14077bb00(local_38,param_3);
          if ((((int)(uint)local_38[0] < *(int *)(param_1 + 0xd8)) &&
              (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + (ulonglong)local_38[0] * 8),
              plVar1 != (longlong *)0x0)) &&
             ((*(uint *)(uVar7 + 8) >> (*(byte *)(plVar1 + 9) & 0x1f) & 1) != 0)) {
            (**(code **)(*plVar1 + 0x280))(plVar1,param_2);
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & ~(1 << (local_38[0] & 0x1f));
          }
          if (*(int *)(uVar7 + 8) != 0) {
            return;
          }
          goto LAB_142c28d8f;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
    uVar3 = uVar6;
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        plVar1 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0xd0));
        if ((plVar1 != (longlong *)0x0) &&
           ((*(uint *)(uVar7 + 8) >> (*(byte *)(plVar1 + 9) & 0x1f) & 1) != 0)) {
          (**(code **)(*plVar1 + 0x280))(plVar1,param_2);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar3 = uVar3 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0xd8));
    }
    *(undefined4 *)(uVar7 + 8) = 0;
LAB_142c28d8f:
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_2 + 0x2a0,param_1 + 0xe8);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_2 + 0x2a0);
    TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0xf8,param_2);
  }
  return;
}



// FUNCTION 142c28e30 FUN_142c28e30 body=707 status=ok
// SIG undefined FUN_142c28e30(void)

void FUN_142c28e30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_a8 [112];
  
  iVar1 = *(int *)(param_2 + 0xc);
  FWeakObjectPtr::operator=(&local_c8,0);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar6 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar6 = param_1 + 0xd0;
    }
    iVar10 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)iVar1) * 4);
    if (iVar10 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x98);
      while (lVar5 = (longlong)iVar10, *(int *)(lVar6 + lVar5 * 0x28) != iVar1) {
        iVar10 = *(int *)(lVar6 + 0x20 + lVar5 * 0x28);
        if (iVar10 == -1) {
          return;
        }
      }
      if (iVar10 != -1) {
        local_c8 = *(undefined4 *)(lVar6 + 8 + lVar5 * 0x28);
        local_c4 = *(undefined4 *)(lVar6 + 0xc + lVar5 * 0x28);
        local_c0 = *(undefined8 *)(lVar6 + 0x10 + lVar5 * 0x28);
        local_b8 = *(undefined1 *)(lVar6 + 0x18 + lVar5 * 0x28);
        local_b4 = *(undefined4 *)(lVar6 + 0x1c + lVar5 * 0x28);
        TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x98));
        if ((0 < *(int *)(param_1 + 0x140)) && (lVar6 = FWeakObjectPtr::Get(&local_c8), lVar6 != 0))
        {
          iVar10 = *(int *)(param_1 + 0x140) + -1;
          lVar5 = (longlong)iVar10 * 0x24;
          piVar11 = (int *)(*(longlong *)(param_1 + 0x138) + lVar5);
          if (-1 < iVar10) {
            lVar2 = *(longlong *)(param_1 + 0x38);
            lVar12 = (longlong)*(int *)(param_1 + 0x140) * 0x24;
            do {
              if (piVar11[1] == iVar1) {
                if ((*(byte *)(piVar11 + 8) & 1) != 0) {
                  if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
                    lVar7 = *(longlong *)(lVar2 + 0x70);
                    if (*(longlong *)(lVar2 + 0x70) == 0) {
                      lVar7 = lVar2 + 0x68;
                    }
                    iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(lVar2 + 0x78) - 1U &
                                             (longlong)*piVar11) * 4);
                    if (iVar3 != -1) {
                      do {
                        piVar9 = (int *)((longlong)iVar3 * 0x3c + *(longlong *)(lVar2 + 0x30));
                        if (*piVar9 == *piVar11) {
                          if (iVar3 != -1) goto LAB_142c29010;
                          break;
                        }
                        iVar3 = piVar9[0xd];
                      } while (iVar3 != -1);
                    }
                  }
                  piVar9 = (int *)0x0;
LAB_142c29010:
                  FWeakObjectPtr::IsValid(piVar9 + 1);
                  FUN_142c1a410(local_a8,param_1,0,piVar11 + 5,piVar9 + 4,1,0);
                  piVar9[0xb] = piVar9[0xb] | 1;
                  uVar8 = FWeakObjectPtr::Get(piVar9 + 1);
                  FUN_142c24770(uVar8,lVar6,local_a8);
                }
                iVar3 = *(int *)(param_1 + 0x140);
                iVar4 = (iVar3 - iVar10) + -1;
                if (iVar4 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(param_1 + 0x138) + lVar5),
                             (void *)(*(longlong *)(param_1 + 0x138) + lVar12),
                             (longlong)iVar4 * 0x24);
                  iVar3 = *(int *)(param_1 + 0x140);
                }
                *(int *)(param_1 + 0x140) = iVar3 + -1;
              }
              lVar12 = lVar12 + -0x24;
              lVar5 = lVar5 + -0x24;
              piVar11 = piVar11 + -9;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c29100 FUN_142c29100 body=66 status=ok
// SIG undefined FUN_142c29100(void)

undefined8 FUN_142c29100(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c338d0(param_1,param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xbc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
  }
  return uVar1;
}



// FUNCTION 142c29150 FUN_142c29150 body=701 status=ok
// SIG undefined FUN_142c29150(void)

undefined8 FUN_142c29150(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_98 [112];
  
  iVar12 = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar11 = 0;
    uVar13 = (ulonglong)_tls_index;
    do {
      lVar2 = *(longlong *)(param_1 + 0x98);
      lVar8 = *(longlong *)(lVar11 + 0x20 + lVar2);
      if (lVar8 != 0) {
        uVar5 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar5);
        if (plVar6 == (longlong *)0x0) {
          lVar8 = *(longlong *)(lVar11 + 0x20 + lVar2);
          if (lVar8 != 0) {
            lVar7 = FUN_1429d7ab0();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar8 = *(longlong *)(lVar8 + 0x490);
              if (lVar8 == 0) goto LAB_142c29357;
              uVar5 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
              plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar5);
            }
          }
          if (plVar6 == (longlong *)0x0) goto LAB_142c29357;
        }
        lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (lVar8 != 0) {
          iVar4 = *(int *)(lVar8 + 0x268);
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
               DAT_146b2c938) && (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1)) {
            DAT_146b2c934 = -1;
            _Init_thread_footer(&DAT_146b2c938);
          }
          if (iVar4 != DAT_146b2c934) {
            if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
              lVar7 = *(longlong *)(lVar1 + 0x70);
              if (*(longlong *)(lVar1 + 0x70) == 0) {
                lVar7 = lVar1 + 0x68;
              }
              iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(lVar1 + 0x78) - 1U &
                                       (longlong)*(int *)(lVar8 + 0x268)) * 4);
              if (iVar4 != -1) {
                do {
                  piVar10 = (int *)((longlong)iVar4 * 0x3c + *(longlong *)(lVar1 + 0x30));
                  if (*piVar10 == *(int *)(lVar8 + 0x268)) {
                    if (iVar4 != -1) goto LAB_142c292df;
                    break;
                  }
                  iVar4 = piVar10[0xd];
                } while (iVar4 != -1);
              }
            }
            piVar10 = (int *)0x0;
LAB_142c292df:
            if (((uint)piVar10[3] >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) != 0) {
              FUN_142c1a410(local_98,param_1,*(undefined4 *)(lVar11 + lVar2),lVar2 + 4 + lVar11,
                            lVar2 + 0x10 + lVar11,0,0);
              uVar5 = *(undefined8 *)(lVar11 + 0x28 + lVar2);
              piVar10[0xb] = piVar10[0xb] | 1;
              uVar9 = FWeakObjectPtr::Get(piVar10 + 1);
              FUN_142c24770(uVar9,uVar5,local_98);
            }
          }
        }
      }
LAB_142c29357:
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 0x30;
    } while (iVar12 < *(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xa4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x98,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0x41f00000;
  return 0x7f7fffff;
}



// FUNCTION 142c29410 FUN_142c29410 body=1818 status=ok
// SIG undefined FUN_142c29410(void)

undefined8 FUN_142c29410(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  float *pfVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  void *pvVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res10;
  uint local_res18;
  undefined4 local_res1c;
  int *local_res20;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  uint uStack_1c0;
  int iStack_1bc;
  undefined1 local_1b8 [16];
  longlong *local_1a8;
  undefined2 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168;
  longlong local_160;
  undefined4 local_158;
  uint local_154;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  uint local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  
  local_130 = param_1[7];
  plVar18 = (longlong *)(local_130 + 0x30);
  iVar4 = *(int *)(local_130 + 0x58);
  puStack_98 = (uint *)(local_130 + 0x40);
  local_1d8 = 0;
  uStack_1d4 = 1;
  local_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)(local_130 + 0x50);
    if (*(uint **)(local_130 + 0x50) == (uint *)0x0) {
      puVar17 = puStack_98;
    }
    uVar12 = *puVar17;
    local_1d8 = 0;
    uStack_1c0 = 0;
    while (uVar12 == 0) {
      lVar14 = (longlong)(int)local_1d8;
      uStack_1c0 = uStack_1c0 + 0x20;
      uVar12 = local_1d8 + 1;
      bVar8 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_1d8;
      local_1d8 = uVar12;
      if (bVar8) goto LAB_142c294e6;
      uVar12 = puVar17[lVar14 + 1];
    }
    uStack_1d4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar10 = 0x1f;
    if (uStack_1d4 != 0) {
      for (; uStack_1d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_1d4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_1c8._4_4_ = (uStack_1c0 - iVar10) + 0x1f;
    if (iVar4 < local_1c8._4_4_) {
LAB_142c294e6:
      local_1c8._4_4_ = iVar4;
    }
  }
  auStack_90._4_4_ = local_1c8._4_4_;
  auStack_90._0_4_ = 0xffffffff;
  auStack_90._8_4_ = uStack_1c0;
  auStack_90._12_4_ = iStack_1bc;
  uStack_a0 = local_1d8;
  uStack_9c = uStack_1d4;
  local_1a0 = 0;
  local_80._0_4_ = SUB84(plVar18,0);
  local_80._4_4_ = (undefined4)((ulonglong)plVar18 >> 0x20);
  uStack_1c0 = 0xffffffff;
  iStack_1bc = local_1c8._4_4_;
  uStack_1d0 = local_1d8;
  uStack_1cc = uStack_1d4;
  local_1b8._8_4_ = (undefined4)local_80;
  local_1b8._0_8_ = auStack_90._8_8_;
  local_1b8._12_4_ = local_80._4_4_;
  bVar8 = local_1c8._4_4_ < *(int *)(local_130 + 0x58);
  local_1a8 = plVar18;
  local_a8 = plVar18;
  local_80 = plVar18;
  local_1c8 = puStack_98;
  if (bVar8) {
    do {
      uVar19 = (ulonglong)_tls_index;
      lVar16 = 0;
      lVar14 = *plVar18;
      lVar21 = (longlong)iStack_1bc * 0x3c;
      if ((*(uint *)(lVar21 + 0xc + lVar14) >> (*(byte *)(param_1 + 9) & 0x1f) & 1) != 0) {
        if ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4)) {
          iVar4 = *(int *)(lVar21 + 0x30 + lVar14);
          plVar11 = (longlong *)param_1[0x1e];
          if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
            plVar11 = param_1 + 0x1d;
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           ((longlong)(int)param_1[0x1f] - 1U & (longlong)iVar4) * 4);
          if (iVar10 != -1) {
            do {
              local_res20 = (int *)((longlong)iVar10 * 0x1c + param_1[0x16]);
              if (*local_res20 == iVar4) {
                if (iVar10 != -1) goto LAB_142c2963e;
                break;
              }
              iVar10 = local_res20[5];
            } while (iVar10 != -1);
          }
        }
        local_res20 = (int *)0x0;
LAB_142c2963e:
        local_res10 = 0;
        piVar15 = local_res20;
        pvVar20 = ThreadLocalStoragePointer;
        if (0 < (int)param_1[0x14]) {
          do {
            lVar6 = param_1[0x13];
            fVar22 = *(float *)(lVar21 + 0x18 + lVar14) - *(float *)(lVar16 + 0xc + lVar6);
            fVar24 = *(float *)(lVar21 + 0x14 + lVar14) - *(float *)(lVar16 + 8 + lVar6);
            fVar25 = *(float *)(lVar16 + 0x10 + lVar6);
            fVar23 = *(float *)(lVar21 + 0x10 + lVar14) - *(float *)(lVar16 + 4 + lVar6);
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
            fVar22 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22;
            if ((fVar22 <= fVar25 * fVar25 * (float)piVar15[1]) &&
               ((fVar23 = *(float *)(lVar16 + 0x14 + lVar6), fVar23 <= 0.0 ||
                (fVar23 = fVar23 * fVar25, fVar22 <= fVar23 * fVar23)))) {
              bVar1 = *(byte *)(piVar15 + 3);
              uVar2 = *(undefined1 *)(lVar16 + 0x28 + lVar6);
              uVar3 = *(undefined1 *)(lVar21 + 0x28 + lVar14);
              if (*(int *)(*(longlong *)((longlong)pvVar20 + uVar19 * 8) + 0x38) < DAT_1468591e4) {
                _Init_thread_header(&DAT_1468591e4);
                if (DAT_1468591e4 == -1) {
                  DAT_1468591e0 = 7;
                  _Init_thread_footer(&DAT_1468591e4);
                }
              }
              if (bVar1 == DAT_1468591e0) {
LAB_142c29752:
                if (*(float *)(param_1 + 0x15) <= 0.0) {
                  fVar22 = 0.0;
                }
                else {
                  fVar24 = *(float *)(lVar21 + 0x14 + lVar14) - *(float *)(lVar16 + 8 + lVar6);
                  fVar23 = *(float *)(lVar21 + 0x10 + lVar14) - *(float *)(lVar16 + 4 + lVar6);
                  fVar22 = *(float *)(lVar21 + 0x18 + lVar14) - *(float *)(lVar16 + 0xc + lVar6);
                  fVar22 = (fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22) /
                           *(float *)(param_1 + 0x15);
                }
                local_184 = *(undefined4 *)(lVar16 + 0xc + lVar6);
                local_18c = *(undefined8 *)(lVar16 + 4 + lVar6);
                local_178 = *(undefined4 *)(lVar21 + 0x18 + lVar14);
                local_170 = *(undefined8 *)(lVar16 + 0x20 + lVar6);
                local_180 = *(undefined8 *)(lVar21 + 0x10 + lVar14);
                local_198 = 0;
                local_168 = 0xff;
                local_190 = fVar25;
                FName::FName(&local_160,L"Invalid",1);
                local_158 = 0;
                local_148 = 0;
                local_144 = 0xbf800000;
                local_res18 = local_res18 & 0xffffff80;
                local_res1c = 0;
                local_154 = (*(char *)((longlong)param_1 + 0x2c) == '\x01') + 2 |
                            local_154 & 0xfffffc02;
                local_150 = param_1[2];
                (**(code **)(*param_1 + 0x2c8))(param_1,&local_res18);
                uVar5 = *(undefined4 *)(lVar21 + 0x30 + lVar14);
                uVar7 = *(undefined8 *)(lVar16 + 0x18 + lVar6);
                local_158 = local_res1c;
                local_194 = (undefined4)param_1[5];
                local_154 = local_154 ^ (local_res18 * 8 ^ local_154) & 0x3f8;
                local_168 = (undefined1)param_1[9];
                local_160 = param_1[10];
                local_138 = local_184;
                local_140 = local_18c;
                local_124 = 0xffffffffffffffff;
                local_11c = 0.0;
                FUN_140772210(&local_118);
                lVar6 = local_130;
                local_124 = CONCAT44(local_124._4_4_,uVar5);
                local_128 = fVar22 + *(float *)(local_130 + 0x170);
                FWeakObjectPtr::operator=((longlong)&local_124 + 4,uVar7);
                local_118 = local_198;
                local_110 = local_190;
                local_114 = local_194;
                local_104 = local_184;
                local_100 = local_180;
                local_10c = local_18c;
                iVar4 = *(int *)(lVar6 + 0x158);
                local_f8 = local_178;
                local_f0 = local_170;
                local_e8 = local_168;
                local_e0 = local_160;
                local_d8 = local_158;
                local_d4 = local_d4 ^ (local_d4 ^ local_154) & 0x3ff;
                local_d0 = local_150;
                local_b8 = local_138;
                local_c8 = local_148;
                local_c4 = local_144;
                local_c0 = local_140;
                *(int *)(lVar6 + 0x158) = iVar4 + 1;
                if (*(int *)(lVar6 + 0x15c) < iVar4 + 1) {
                  TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::
                  ResizeGrow((longlong *)(lVar6 + 0x150),iVar4);
                }
                pfVar13 = (float *)((longlong)iVar4 * 0x78 + *(longlong *)(lVar6 + 0x150));
                *pfVar13 = local_128;
                pfVar13[1] = (float)local_124;
                pfVar13[2] = local_124._4_4_;
                pfVar13[3] = local_11c;
                FUN_1407263c0(pfVar13 + 4,&local_118);
              }
              else {
                if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                  bVar9 = 1;
                }
                else {
                  bVar9 = (*(code *)PTR_FUN_146690ee0)(uVar3,uVar2);
                }
                if ((bVar1 & (byte)(1 << (bVar9 & 0x1f))) != 0) goto LAB_142c29752;
              }
              uVar19 = (ulonglong)_tls_index;
              piVar15 = local_res20;
              pvVar20 = ThreadLocalStoragePointer;
            }
            lVar16 = lVar16 + 0x30;
            local_res10 = local_res10 + 1;
          } while (local_res10 < (int)param_1[0x14]);
        }
      }
      uStack_1c0 = uStack_1c0 & ~uStack_1cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
    } while (iStack_1bc < (int)local_1c8[6]);
    if (((char)local_1a0 != '\0') && (local_1a0._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_1a8,(int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x13,0);
  }
  return 0x7f7fffff;
}



// FUNCTION 142c29b30 FUN_142c29b30 body=909 status=ok
// SIG undefined FUN_142c29b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142c29b30(longlong *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  float local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  float local_60;
  undefined1 local_58 [32];
  
  lVar4 = param_1[7];
  piVar17 = (int *)0x0;
  piVar14 = piVar17;
  piVar16 = piVar17;
  if ((int)param_1[0x14] < 1) {
LAB_142c29e74:
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x13,0);
    }
    return 0x7f7fffff;
  }
LAB_142c29b80:
  lVar5 = param_1[0x13];
  lVar8 = *(longlong *)((longlong)piVar14 + lVar5);
  if ((lVar8 != 0) && (*(longlong *)((longlong)piVar14 + lVar5 + 8) != 0)) {
    uVar6 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
    if ((plVar7 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 != 0))
    {
      iVar2 = *(int *)(lVar8 + 0x268);
      if (*(int *)(lVar4 + 0x38) != *(int *)(lVar4 + 100)) {
        lVar8 = *(longlong *)(lVar4 + 0x70);
        if (*(longlong *)(lVar4 + 0x70) == 0) {
          lVar8 = lVar4 + 0x68;
        }
        iVar3 = *(int *)(lVar8 + ((longlong)*(int *)(lVar4 + 0x78) - 1U & (longlong)iVar2) * 4);
        if (iVar3 != -1) {
          lVar8 = *(longlong *)(lVar4 + 0x30);
          iVar12 = iVar3;
          do {
            if (*(int *)((longlong)iVar12 * 0x3c + lVar8) == iVar2) {
              if (iVar12 != -1) goto joined_r0x000142c29c38;
              break;
            }
            iVar12 = *(int *)((longlong)iVar12 * 0x3c + 0x34 + lVar8);
          } while (iVar12 != -1);
        }
      }
    }
  }
  goto LAB_142c29e40;
joined_r0x000142c29c38:
  if (iVar3 == -1) goto LAB_142c29c5d;
  piVar13 = (int *)((longlong)iVar3 * 0x3c + lVar8);
  if (*piVar13 == iVar2) {
    if (iVar3 != -1) goto LAB_142c29c60;
    goto LAB_142c29c5d;
  }
  iVar3 = piVar13[0xd];
  goto joined_r0x000142c29c38;
LAB_142c29c5d:
  piVar13 = piVar17;
LAB_142c29c60:
  if (((uint)piVar13[3] >> (*(byte *)(param_1 + 9) & 0x1f) & 1) != 0) {
    plVar7 = *(longlong **)((longlong)piVar14 + lVar5 + 8);
    fVar1 = *(float *)((longlong)piVar14 + lVar5 + 0x10);
    pfVar9 = (float *)(**(code **)(*plVar7 + 0x308))(plVar7,local_58);
    lVar8 = *(longlong *)(*(longlong *)((longlong)piVar14 + lVar5 + 8) + 0x168);
    if (lVar8 == 0) {
      local_e4 = DAT_1468b5d98;
      puVar10 = &local_ec;
      local_ec = _DAT_1468b5d90;
    }
    else {
      puVar10 = (undefined8 *)&local_f8;
      local_f8 = *(undefined4 *)(lVar8 + 0x220);
      local_f0 = *(undefined4 *)(lVar8 + 0x228);
      uStack_f4 = *(undefined4 *)(lVar8 + 0x224);
    }
    local_d8 = *(float *)(puVar10 + 1);
    local_res10 = 0;
    local_bc = local_d8 + fVar1 * pfVar9[2];
    local_d0 = 0;
    local_c8 = 0x3f800000;
    local_a0 = 0xff;
    local_c4 = CONCAT44((float)((ulonglong)*puVar10 >> 0x20) + fVar1 * pfVar9[1],
                        (float)*puVar10 + fVar1 * *pfVar9);
    local_b0 = piVar13[6];
    local_b8 = *(undefined8 *)(piVar13 + 4);
    local_a8 = 0;
    local_60 = local_bc;
    FName::FName(&local_98,L"Invalid",1);
    local_90 = 0;
    local_80 = 0;
    local_res8 = local_res8 & 0xffffff80;
    local_7c = 0xbf800000;
    local_8c = (*(char *)((longlong)param_1 + 0x2c) == '\x01') + 2 | local_8c & 0xfffffc02;
    local_resc = 0;
    local_88 = param_1[2];
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_res8);
    local_a0 = (undefined1)param_1[9];
    uVar6 = *(undefined8 *)((longlong)piVar14 + lVar5 + 8);
    local_90 = local_resc;
    local_cc = (undefined4)param_1[5];
    local_8c = local_8c ^ (local_res8 * 8 ^ local_8c) & 0x3f8;
    local_98 = param_1[10];
    piVar13[0xb] = piVar13[0xb] | 1;
    local_70 = local_bc;
    local_78 = local_c4;
    uVar11 = FWeakObjectPtr::Get(piVar13 + 1);
    FUN_142c24770(uVar11,uVar6,&local_d0);
  }
LAB_142c29e40:
  uVar15 = (int)piVar16 + 1;
  piVar14 = piVar14 + 6;
  piVar16 = (int *)(ulonglong)uVar15;
  if ((int)param_1[0x14] <= (int)uVar15) goto LAB_142c29e74;
  goto LAB_142c29b80;
}



// FUNCTION 142c29ec0 FUN_142c29ec0 body=4488 status=ok
// SIG undefined FUN_142c29ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_142c29ec0(longlong *param_1)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  char cVar7;
  float *pfVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint unaff_EBX;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auStack_318 [32];
  float *local_2f8;
  float *local_2f0;
  undefined *local_2e8;
  undefined1 local_2d8 [4];
  int local_2d4;
  undefined8 local_2d0;
  float local_2c8;
  int local_2c0;
  float local_2bc;
  float local_2b8 [2];
  int *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  uint local_290;
  uint local_288;
  undefined4 local_284;
  uint local_280;
  undefined4 local_27c;
  uint local_278;
  undefined4 local_274;
  uint local_270;
  undefined4 local_26c;
  uint local_268;
  undefined4 local_264;
  undefined8 local_260;
  float local_258;
  LARGE_INTEGER local_250;
  int local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  LARGE_INTEGER local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined1 local_16c [36];
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  int local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_110;
  undefined4 local_108;
  uint local_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  float local_e8;
  longlong local_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_1f8 = UEngine::GetWorldFromContextObject(DAT_146b17150,*(undefined8 *)(param_1[7] + 0x20),1)
  ;
  if (local_1f8 == 0) {
    uVar25 = 0x7f7fffff;
  }
  else {
    iVar23 = 0;
    local_2d4 = 0;
    QueryPerformanceCounter(&local_250);
    local_2a0 = 0;
    uVar18 = unaff_EBX & 0xffffff00;
    local_298 = 0;
    local_2b0 = (int *)0x0;
    local_2a8 = 0;
    dVar3 = (double)local_250.QuadPart * DAT_1468b02f8;
    dVar2 = (double)param_1[0x2a];
    local_290 = uVar18;
    TArray<float,FDefaultAllocator>::ResizeTo(&local_2a0,0x10);
    TArray<float,FDefaultAllocator>::ResizeTo(&local_2b0);
    piVar21 = (int *)param_1[0x27];
    local_250.QuadPart = param_1[7] + 0x30;
    local_2c0 = 0;
    iVar22 = iVar23;
    if (0 < (int)param_1[0x28]) {
      do {
        iVar23 = iVar23 + 1;
        local_248 = iVar23;
        if (((char)uVar18 == '\0') && (iVar23 % *(int *)((longlong)param_1 + 0x14c) == 0)) {
          QueryPerformanceCounter(&local_200);
          local_290 = uVar18 & 0xff;
          uVar18 = local_290;
          if (dVar3 + 16777216.0 + dVar2 < (double)local_200.QuadPart * DAT_1468b02f8 + 16777216.0)
          {
            local_290 = 1;
            uVar18 = local_290;
          }
        }
        if ((iVar22 < (int)param_1[0x29]) && ((char)uVar18 == '\0')) {
          if (*(int *)(local_250.QuadPart + 8) != *(int *)(local_250.QuadPart + 0x34)) {
            plVar10 = *(longlong **)(local_250.QuadPart + 0x40);
            if (*(longlong **)(local_250.QuadPart + 0x40) == (longlong *)0x0) {
              plVar10 = (longlong *)(local_250.QuadPart + 0x38);
            }
            iVar23 = *(int *)((longlong)plVar10 +
                             ((longlong)*(int *)(local_250.QuadPart + 0x48) - 1U &
                             (longlong)*piVar21) * 4);
            if (iVar23 != -1) {
              do {
                piVar15 = (int *)((longlong)iVar23 * 0x3c + *(longlong *)local_250);
                if (*piVar15 == *piVar21) {
                  if (iVar23 != -1) goto LAB_142c2a111;
                  break;
                }
                iVar23 = piVar15[0xd];
              } while (iVar23 != -1);
            }
          }
          piVar15 = (int *)0x0;
LAB_142c2a111:
          piVar20 = piVar15 + 1;
          FWeakObjectPtr::IsValid(piVar20);
          if ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc)) {
            plVar10 = (longlong *)param_1[0x1b];
            if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
              plVar10 = param_1 + 0x1a;
            }
            iVar23 = *(int *)((longlong)plVar10 +
                             ((longlong)(int)param_1[0x1c] - 1U & (longlong)piVar21[1]) * 4);
            if (iVar23 != -1) {
              do {
                piVar16 = (int *)(param_1[0x13] + (longlong)iVar23 * 0x28);
                if (*(int *)(param_1[0x13] + (longlong)iVar23 * 0x28) == piVar21[1]) {
                  if (iVar23 != -1) goto LAB_142c2a193;
                  break;
                }
                iVar23 = piVar16[8];
              } while (iVar23 != -1);
            }
          }
          piVar16 = (int *)0x0;
LAB_142c2a193:
          cVar6 = FWeakObjectPtr::IsValid(piVar16 + 2);
          cVar7 = FWeakObjectPtr::IsValid(piVar20);
          uVar5 = local_298;
          if ((cVar6 == '\0') || (cVar7 == '\0')) {
            lVar19 = (longlong)(int)local_298;
            iVar23 = (int)local_298 + 1;
            local_298 = CONCAT44(local_298._4_4_,iVar23);
            if (local_298._4_4_ < iVar23) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_2a0,uVar5 & 0xffffffff);
            }
            *(int *)(local_2a0 + lVar19 * 4) = local_2c0;
            if (cVar6 == '\0') {
              lVar19 = (longlong)(int)local_2a8;
              if (local_2b0 != local_2b0 + lVar19) {
                piVar15 = local_2b0;
                do {
                  if (*piVar15 == piVar21[1]) {
                    if ((int)((longlong)piVar15 - (longlong)local_2b0 >> 2) != -1)
                    goto LAB_142c2adff;
                    break;
                  }
                  piVar15 = piVar15 + 1;
                } while (piVar15 != local_2b0 + lVar19);
              }
              iVar23 = (int)local_2a8 + 1;
              local_2a8 = CONCAT44(local_2a8._4_4_,iVar23);
              if (local_2a8._4_4_ < iVar23) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_2b0);
              }
              local_2b0[lVar19] = piVar21[1];
            }
          }
          else {
            pfVar8 = (float *)FWeakObjectPtr::Get(piVar16 + 2);
            lVar19 = *(longlong *)(pfVar8 + 0x5a);
            if (lVar19 == 0) {
              local_1e8 = DAT_1468b5d98;
              puVar9 = &local_1f0;
              local_1f0 = _DAT_1468b5d90;
            }
            else {
              puVar9 = (undefined8 *)&local_210;
              local_210 = *(undefined4 *)(lVar19 + 0x220);
              local_208 = *(undefined4 *)(lVar19 + 0x228);
              uStack_20c = *(undefined4 *)(lVar19 + 0x224);
            }
            local_2d0 = *puVar9;
            local_2c8 = *(float *)(puVar9 + 1);
            if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
              plVar10 = (longlong *)param_1[0x25];
              if ((longlong *)param_1[0x25] == (longlong *)0x0) {
                plVar10 = param_1 + 0x24;
              }
              iVar23 = *(int *)((longlong)plVar10 +
                               ((longlong)(int)param_1[0x26] - 1U & (longlong)*piVar21) * 4);
              if (iVar23 != -1) {
                do {
                  piVar17 = (int *)((longlong)iVar23 * 0x20 + param_1[0x1d]);
                  if (*piVar17 == *piVar21) {
                    if (iVar23 != -1) goto LAB_142c2a290;
                    break;
                  }
                  iVar23 = piVar17[6];
                } while (iVar23 != -1);
              }
            }
            piVar17 = (int *)0x0;
LAB_142c2a290:
            pfVar12 = (float *)(piVar17 + 1);
            if ((*(byte *)(piVar21 + 8) & 1) == 0) {
              fVar24 = (float)piVar17[2];
            }
            else {
              fVar24 = (float)piVar17[4];
            }
            local_2f0 = &local_2bc;
            local_2bc = 1.0;
            local_2f8 = pfVar8;
            cVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,pfVar12,piVar21,piVar20);
            pfVar1 = (float *)(piVar15 + 4);
            if (cVar6 == '\0') {
              fVar27 = (float)local_2d0 - *pfVar1;
              fVar29 = local_2d0._4_4_ - (float)piVar15[5];
              fVar30 = local_2c8 - (float)piVar15[6];
              fVar26 = fVar29 * fVar29 + fVar27 * fVar27 + fVar30 * fVar30;
              if (fVar26 <= fVar24) {
                auVar28 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
                local_2b8[0] = auVar28._0_4_;
                local_2b8[0] = local_2b8[0] +
                               local_2b8[0] * (0.5 - fVar26 * 0.5 * local_2b8[0] * local_2b8[0]);
                local_2b8[0] = local_2b8[0] +
                               local_2b8[0] * (0.5 - fVar26 * 0.5 * local_2b8[0] * local_2b8[0]);
                fVar26 = local_2b8[0] * fVar27 * (float)piVar15[7] +
                         local_2b8[0] * fVar29 * (float)piVar15[8] +
                         local_2b8[0] * fVar30 * (float)piVar15[9];
                if (*pfVar12 <= fVar26 && fVar26 != *pfVar12) {
                  local_260 = 0;
                  local_258 = 0.0;
                  if (*(longlong *)(piVar16 + 4) == 0) {
                    _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
                    local_1cc = 0x3f800000;
                    uVar11 = FWeakObjectPtr::Get(piVar20);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x38) < DAT_146b2c910) &&
                       (_Init_thread_header(&DAT_146b2c910), DAT_146b2c910 == -1)) {
                      FName::FName(&DAT_146b2c908,"AILineOfSight",1);
                      _Init_thread_footer(&DAT_146b2c910);
                    }
                    uVar4 = DAT_146b2c908;
                    local_2f8 = (float *)FUN_142c1f500(uVar11);
                    local_2f0 = (float *)FUN_1422ffb20(&local_148,uVar4,local_2d8,1);
                    local_2e8 = &DAT_146aefe68;
                    local_2f8 = (float *)CONCAT44(local_2f8._4_4_,(int)param_1[0x2d]);
                    cVar6 = UWorld::LineTraceSingleByChannel(local_1f8,local_1d8,pfVar1,&local_2d0);
                    if (local_e0 != 0) {
                      FMemory::Free();
                    }
                    if (local_100 != 0) {
                      FMemory::Free();
                    }
                    local_2d4 = local_2d4 + 1;
                    if (cVar6 == '\0') {
LAB_142c2aa10:
                      local_134 = local_2c8;
                      local_128 = piVar15[6];
                      local_13c = local_2d0;
                      local_130 = *(undefined8 *)pfVar1;
                      local_120 = 0;
                      local_220 = 0;
                      local_148 = 0;
                      local_140 = 1.0;
                      local_118 = 0xff;
                      FName::FName(&local_110,L"Invalid",1);
                      local_108 = 0;
                      local_f8 = 0;
                      local_270 = local_270 & 0xffffff80;
                      local_f4 = 0xbf800000;
                      local_104 = (*(char *)((longlong)param_1 + 0x2c) == '\x01') + 2 |
                                  local_104 & 0xfffffc02;
                      local_26c = 0;
                      local_100 = param_1[2];
                      (**(code **)(*param_1 + 0x2c8))(param_1,&local_270);
                      local_108 = local_26c;
                      local_144 = (undefined4)param_1[5];
                      local_104 = local_104 ^ (local_270 * 8 ^ local_104) & 0x3f8;
                      local_f0 = local_13c;
                      local_118 = (undefined1)param_1[9];
                      local_110 = param_1[10];
                      piVar15[0xb] = piVar15[0xb] | 1;
                      local_e8 = local_134;
                      uVar11 = FWeakObjectPtr::Get(piVar20);
                      FUN_142c24770(uVar11,pfVar8,&local_148);
                      piVar21[8] = piVar21[8] | 1;
                      *(undefined8 *)(piVar21 + 5) = local_2d0;
                      piVar21[7] = (int)local_2c8;
                    }
                    else {
                      cVar6 = FWeakObjectPtr::IsValid(local_16c);
                      if (cVar6 != '\0') {
                        for (pfVar12 = (float *)FWeakObjectPtr::Get(local_16c);
                            pfVar12 != (float *)0x0; pfVar12 = *(float **)(pfVar12 + 0x46)) {
                          if (pfVar12 == pfVar8) goto LAB_142c2aa10;
                        }
                      }
                      if ((*(byte *)(piVar21 + 8) & 1) != 0) {
                        local_134 = local_2c8;
                        local_128 = piVar15[6];
                        local_13c = local_2d0;
                        local_130 = *(undefined8 *)pfVar1;
                        local_120 = 0;
                        local_228 = 0;
                        local_148 = 0;
                        local_140 = -1.0;
                        local_118 = 0xff;
                        FName::FName(&local_110,L"Invalid",1);
                        local_108 = 0;
                        local_f8 = 0;
                        local_278 = local_278 & 0xffffff80;
                        local_104 = (uint)(*(char *)((longlong)param_1 + 0x2c) == '\x01') |
                                    local_104 & 0xfffffc00;
                        local_f4 = 0xbf800000;
                        local_100 = param_1[2];
                        local_274 = 0;
                        (**(code **)(*param_1 + 0x2c8))(param_1,&local_278);
                        local_108 = local_274;
                        local_144 = (undefined4)param_1[5];
                        local_104 = local_104 ^ (local_278 * 8 ^ local_104) & 0x3f8;
                        local_f0 = local_13c;
                        local_118 = (undefined1)param_1[9];
                        local_110 = param_1[10];
                        piVar15[0xb] = piVar15[0xb] | 1;
                        local_e8 = local_134;
                        uVar11 = FWeakObjectPtr::Get(piVar20);
                        FUN_142c24770(uVar11,pfVar8,&local_148);
                        piVar21[8] = piVar21[8] & 0xfffffffe;
                        *(undefined8 *)(piVar21 + 5) = DAT_146691200;
                        piVar21[7] = DAT_146691208;
                      }
                    }
                  }
                  else {
                    local_2b8[0] = 0.0;
                    uVar11 = FWeakObjectPtr::Get(piVar20);
                    lVar19 = **(longlong **)(piVar16 + 4);
                    local_2f0 = (float *)FUN_142c1f500(uVar11);
                    local_2f8 = &local_2bc;
                    cVar6 = (**(code **)(lVar19 + 0x10))
                                      (*(undefined8 *)(piVar16 + 4),pfVar1,&local_260,local_2b8);
                    if (cVar6 == '\x01') {
                      local_134 = local_258;
                      local_128 = piVar15[6];
                      local_140 = local_2bc;
                      local_130 = *(undefined8 *)pfVar1;
                      local_120 = 0;
                      local_238 = 0;
                      local_148 = 0;
                      local_13c = local_260;
                      local_118 = 0xff;
                      FName::FName(&local_110,L"Invalid",1);
                      local_108 = 0;
                      local_f8 = 0;
                      local_288 = local_288 & 0xffffff80;
                      local_f4 = 0xbf800000;
                      local_104 = (*(char *)((longlong)param_1 + 0x2c) == '\x01') + 2 |
                                  local_104 & 0xfffffc02;
                      local_284 = 0;
                      local_100 = param_1[2];
                      (**(code **)(*param_1 + 0x2c8))(param_1,&local_288);
                      local_108 = local_284;
                      local_144 = (undefined4)param_1[5];
                      local_104 = local_104 ^ (local_288 * 8 ^ local_104) & 0x3f8;
                      local_f0 = local_13c;
                      local_118 = (undefined1)param_1[9];
                      local_110 = param_1[10];
                      piVar15[0xb] = piVar15[0xb] | 1;
                      local_e8 = local_134;
                      uVar11 = FWeakObjectPtr::Get(piVar20);
                      FUN_142c24770(uVar11,pfVar8,&local_148);
                      piVar21[8] = piVar21[8] | 1;
                      local_2d4 = local_2d4 + (int)local_2b8[0];
                      *(undefined8 *)(piVar21 + 5) = local_260;
                      piVar21[7] = (int)local_258;
                    }
                    else {
                      if ((*(byte *)(piVar21 + 8) & 1) != 0) {
                        local_134 = local_2c8;
                        local_128 = piVar15[6];
                        local_13c = local_2d0;
                        local_130 = *(undefined8 *)pfVar1;
                        local_120 = 0;
                        local_230 = 0;
                        local_148 = 0;
                        local_140 = -1.0;
                        local_118 = 0xff;
                        FName::FName(&local_110,L"Invalid",1);
                        local_108 = 0;
                        local_f8 = 0;
                        local_280 = local_280 & 0xffffff80;
                        local_104 = (uint)(*(char *)((longlong)param_1 + 0x2c) == '\x01') |
                                    local_104 & 0xfffffc00;
                        local_f4 = 0xbf800000;
                        local_100 = param_1[2];
                        local_27c = 0;
                        (**(code **)(*param_1 + 0x2c8))(param_1,&local_280);
                        local_108 = local_27c;
                        local_144 = (undefined4)param_1[5];
                        local_104 = local_104 ^ (local_280 * 8 ^ local_104) & 0x3f8;
                        local_f0 = local_13c;
                        local_118 = (undefined1)param_1[9];
                        local_110 = param_1[10];
                        piVar15[0xb] = piVar15[0xb] | 1;
                        local_e8 = local_134;
                        uVar11 = FWeakObjectPtr::Get(piVar20);
                        FUN_142c24770(uVar11,pfVar8,&local_148);
                        piVar21[8] = piVar21[8] & 0xfffffffe;
                        *(undefined8 *)(piVar21 + 5) = DAT_146691200;
                        piVar21[7] = DAT_146691208;
                      }
                      local_2d4 = local_2d4 + (int)local_2b8[0];
                    }
                  }
                  goto LAB_142c2ace5;
                }
              }
              if ((*(byte *)(piVar21 + 8) & 1) != 0) {
                local_134 = local_2c8;
                local_128 = piVar15[6];
                local_13c = local_2d0;
                local_130 = *(undefined8 *)pfVar1;
                local_120 = 0;
                local_218 = 0;
                local_148 = 0;
                local_140 = -1.0;
                local_118 = 0xff;
                FName::FName(&local_110,L"Invalid",1);
                local_108 = 0;
                local_f8 = 0;
                local_268 = local_268 & 0xffffff80;
                local_104 = (uint)(*(char *)((longlong)param_1 + 0x2c) == '\x01') |
                            local_104 & 0xfffffc00;
                local_f4 = 0xbf800000;
                local_100 = param_1[2];
                local_264 = 0;
                (**(code **)(*param_1 + 0x2c8))(param_1,&local_268);
                local_108 = local_264;
                local_144 = (undefined4)param_1[5];
                local_104 = local_104 ^ (local_268 * 8 ^ local_104) & 0x3f8;
                local_f0 = local_13c;
                local_118 = (undefined1)param_1[9];
                local_110 = param_1[10];
                piVar15[0xb] = piVar15[0xb] | 1;
                local_e8 = local_134;
                uVar11 = FWeakObjectPtr::Get(piVar20);
                FUN_142c24770(uVar11,pfVar8,&local_148);
                piVar21[8] = piVar21[8] & 0xfffffffe;
              }
            }
            else {
              local_240 = 0;
              local_2e8 = (undefined *)0x0;
              local_2f0 = (float *)((ulonglong)local_2f0 & 0xffffffff00000000);
              local_2f8 = pfVar1;
              FUN_142c1a410(&local_148,param_1,local_2bc,piVar21 + 5);
              piVar15[0xb] = piVar15[0xb] | 1;
              uVar11 = FWeakObjectPtr::Get(piVar20);
              FUN_142c24770(uVar11,pfVar8,&local_148);
              piVar21[8] = piVar21[8] | 1;
            }
LAB_142c2ace5:
            fVar26 = *(float *)(param_1 + 0x2c);
            fVar27 = (local_2d0._4_4_ - (float)piVar15[5]) * (local_2d0._4_4_ - (float)piVar15[5]) +
                     ((float)local_2d0 - *pfVar1) * ((float)local_2d0 - *pfVar1) +
                     (local_2c8 - (float)piVar15[6]) * (local_2c8 - (float)piVar15[6]);
            iVar22 = local_2d4;
            if (*(float *)((longlong)param_1 + 0x15c) <= fVar27 &&
                fVar27 != *(float *)((longlong)param_1 + 0x15c)) {
              fVar24 = ((*(float *)((longlong)param_1 + 0x164) - fVar26) / fVar24) * fVar27 + fVar26
              ;
              if (fVar24 < 0.0) {
                piVar21[2] = 0;
                piVar21[4] = 0;
                goto LAB_142c2adff;
              }
              if (fVar24 <= fVar26) {
                fVar26 = fVar24;
              }
            }
            piVar21[4] = (int)fVar26;
            piVar21[2] = 0;
          }
LAB_142c2adff:
          fVar24 = (float)piVar21[2];
          iVar23 = local_248;
          uVar18 = local_290;
        }
        else {
          fVar24 = (float)piVar21[2] + 1.0;
          piVar21[2] = (int)fVar24;
        }
        local_2c0 = local_2c0 + 1;
        piVar21[3] = (int)(fVar24 + (float)piVar21[4]);
        piVar21 = piVar21 + 9;
      } while (local_2c0 < (int)param_1[0x28]);
    }
    piVar21 = local_2b0;
    if (0 < (int)local_298) {
      lVar19 = (longlong)((int)local_298 + -1);
      if (-1 < (int)local_298 + -1) {
        iVar23 = (int)param_1[0x28];
        lVar13 = local_2a0;
        do {
          iVar22 = *(int *)(lVar13 + lVar19 * 4);
          iVar14 = (iVar23 - iVar22) + -1;
          if (0 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x27] + (longlong)iVar22 * 0x24),
                       (void *)(param_1[0x27] + (longlong)(iVar23 - iVar14) * 0x24),
                       (longlong)iVar14 * 0x24);
            iVar23 = (int)param_1[0x28];
            lVar13 = local_2a0;
          }
          iVar23 = iVar23 + -1;
          lVar19 = lVar19 + -1;
          *(int *)(param_1 + 0x28) = iVar23;
        } while (-1 < lVar19);
      }
      piVar21 = local_2b0;
      if (0 < (int)local_2a8) {
        piVar15 = local_2b0 + (int)local_2a8;
        for (piVar20 = local_2b0; piVar20 != piVar15; piVar20 = piVar20 + 1) {
          FUN_142c25ed0(param_1,piVar20,0);
          TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x13,*piVar20);
        }
        cVar6 = TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::Compact(param_1 + 0x13);
        if (cVar6 != '\0') {
          TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::Rehash(param_1 + 0x13);
        }
      }
    }
    AlgoImpl::
    IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
              (param_1[0x27],(longlong)(int)param_1[0x28],local_2d8[0],local_2d8);
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    if (local_2a0 != 0) {
      FMemory::Free(local_2a0);
    }
    uVar25 = 0;
  }
  return uVar25;
}



// FUNCTION 142c2b050 FUN_142c2b050 body=983 status=ok
// SIG undefined FUN_142c2b050(void)

undefined8 FUN_142c2b050(longlong *param_1)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  uint uStack_100;
  int iStack_fc;
  undefined1 local_f8 [16];
  longlong *local_e8;
  undefined2 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  lVar10 = param_1[7];
  plVar13 = (longlong *)(lVar10 + 0x30);
  iVar3 = *(int *)(lVar10 + 0x58);
  puStack_58 = (uint *)(lVar10 + 0x40);
  uVar14 = 0;
  local_118 = 0;
  uStack_114 = 1;
  local_108._4_4_ = 0;
  uStack_100 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)(lVar10 + 0x50);
    if (*(uint **)(lVar10 + 0x50) == (uint *)0x0) {
      puVar12 = puStack_58;
    }
    uVar15 = *puVar12;
    uVar9 = uVar14;
    uVar11 = uVar14;
    while (uVar15 == 0) {
      iVar7 = (int)uVar9;
      uStack_100 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_100;
      local_118 = iVar7 + 1;
      uVar9 = (ulonglong)local_118;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142c2b123;
      uVar15 = puVar12[(longlong)iVar7 + 1];
    }
    uStack_114 = -uVar15 & uVar15;
    iVar7 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_108._4_4_ = (uStack_100 - iVar7) + 0x1f;
    if (iVar3 < local_108._4_4_) {
LAB_142c2b123:
      local_108._4_4_ = iVar3;
    }
  }
  auStack_50._4_4_ = local_108._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_100;
  auStack_50._12_4_ = iStack_fc;
  uStack_60 = local_118;
  uStack_5c = uStack_114;
  local_e0 = 0;
  local_40._0_4_ = SUB84(plVar13,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
  uStack_100 = 0xffffffff;
  iStack_fc = local_108._4_4_;
  uStack_110 = local_118;
  uStack_10c = uStack_114;
  local_f8._8_4_ = (undefined4)local_40;
  local_f8._0_8_ = auStack_50._8_8_;
  local_f8._12_4_ = local_40._4_4_;
  bVar6 = local_108._4_4_ < *(int *)(lVar10 + 0x58);
  local_e8 = plVar13;
  local_68 = plVar13;
  local_40 = plVar13;
  local_108 = puStack_58;
  if (bVar6) {
    bVar2 = *(byte *)(param_1 + 9);
    do {
      lVar10 = (longlong)iStack_fc * 0x3c + *plVar13;
      if (((*(uint *)(lVar10 + 0xc) >> (bVar2 & 0x1f) & 1) != 0) &&
         (uVar9 = uVar14, uVar11 = uVar14, 0 < (int)param_1[0x14])) {
        do {
          lVar4 = param_1[0x13];
          if ((*(char *)(lVar10 + 0x28) == *(char *)(uVar9 + lVar4 + 0x20)) &&
             (fVar18 = *(float *)(lVar10 + 0x14) - *(float *)(uVar9 + lVar4 + 0x10),
             fVar17 = *(float *)(lVar10 + 0x10) - *(float *)(uVar9 + lVar4 + 0xc),
             fVar16 = *(float *)(lVar10 + 0x18) - *(float *)(uVar9 + lVar4 + 0x14),
             fVar16 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16,
             pfVar1 = (float *)(uVar9 + lVar4 + 0x18), fVar16 < *pfVar1 || fVar16 == *pfVar1)) {
            local_d0 = *(undefined4 *)(uVar9 + lVar4 + 0x24);
            local_d8 = 0;
            local_cc = *(undefined8 *)(uVar9 + lVar4);
            local_c4 = *(undefined4 *)(uVar9 + lVar4 + 8);
            local_c0 = *(undefined8 *)(uVar9 + lVar4 + 0xc);
            local_b8 = *(undefined4 *)(uVar9 + lVar4 + 0x14);
            local_b0 = 0;
            local_res10 = 0;
            local_a8 = 0xff;
            FName::FName(&local_a0,L"Invalid",1);
            local_98 = 0;
            local_88 = 0;
            local_res8 = local_res8 & 0xffffff80;
            local_84 = 0xbf800000;
            local_94 = (*(char *)((longlong)param_1 + 0x2c) == '\x01') + 2 | local_94 & 0xfffffc02;
            local_resc = 0;
            local_90 = param_1[2];
            (**(code **)(*param_1 + 0x2c8))(param_1,&local_res8);
            local_98 = local_resc;
            local_d4 = (undefined4)param_1[5];
            local_94 = local_94 ^ (local_res8 * 8 ^ local_94) & 0x3f8;
            local_80 = local_cc;
            local_a8 = (undefined1)param_1[9];
            local_a0 = param_1[10];
            local_78 = local_c4;
            local_d8 = *(undefined4 *)(uVar9 + lVar4 + 0x1c);
            uVar5 = *(undefined8 *)(uVar9 + lVar4 + 0x30);
            *(uint *)(lVar10 + 0x2c) = *(uint *)(lVar10 + 0x2c) | 1;
            uVar8 = FWeakObjectPtr::Get(lVar10 + 4);
            FUN_142c24770(uVar8,uVar5,&local_d8);
          }
          uVar15 = (int)uVar11 + 1;
          uVar9 = uVar9 + 0x38;
          uVar11 = (ulonglong)uVar15;
        } while ((int)uVar15 < (int)param_1[0x14]);
      }
      uStack_100 = uStack_100 & ~uStack_10c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
    } while (iStack_fc < (int)local_108[6]);
    if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x13,0);
  }
  return 0x7f7fffff;
}



// FUNCTION 142c2b430 FUN_142c2b430 body=546 status=ok
// SIG undefined FUN_142c2b430(void)

undefined8 FUN_142c2b430(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined1 local_a8 [128];
  
  piVar13 = (int *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x38);
  piVar12 = piVar13;
  piVar15 = piVar13;
  if (*(int *)(param_1 + 0xa0) < 1) {
LAB_142c2b60a:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xa4)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x98,0);
    }
    return 0x7f7fffff;
  }
LAB_142c2b490:
  lVar11 = *(longlong *)(param_1 + 0x98) + (longlong)piVar12;
  lVar6 = *(longlong *)(lVar11 + 0x10);
  if ((lVar6 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) {
    uVar4 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0))
    {
      iVar1 = *(int *)(lVar6 + 0x268);
      if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
        lVar6 = *(longlong *)(lVar2 + 0x70);
        if (*(longlong *)(lVar2 + 0x70) == 0) {
          lVar6 = lVar2 + 0x68;
        }
        iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(lVar2 + 0x78) - 1U & (longlong)iVar1) * 4);
        if (iVar3 != -1) {
          lVar6 = *(longlong *)(lVar2 + 0x30);
          iVar9 = iVar3;
          do {
            if (*(int *)((longlong)iVar9 * 0x3c + lVar6) == iVar1) {
              if (iVar9 != -1) {
                if (iVar3 == -1) goto LAB_142c2b56d;
                goto LAB_142c2b550;
              }
              break;
            }
            iVar9 = *(int *)((longlong)iVar9 * 0x3c + 0x34 + lVar6);
          } while (iVar9 != -1);
        }
      }
    }
  }
  goto LAB_142c2b5ce;
  while (iVar3 = piVar10[0xd], iVar3 != -1) {
LAB_142c2b550:
    piVar10 = (int *)((longlong)iVar3 * 0x3c + lVar6);
    if (*piVar10 == iVar1) {
      if (iVar3 != -1) goto LAB_142c2b570;
      break;
    }
  }
LAB_142c2b56d:
  piVar10 = piVar13;
LAB_142c2b570:
  if (((uint)piVar10[3] >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) != 0) {
    uVar7 = FUN_142c1a410(local_a8,param_1,0x3f800000,lVar11,lVar11,0,0);
    uVar4 = *(undefined8 *)(lVar11 + 0x18);
    piVar10[0xb] = piVar10[0xb] | 1;
    uVar8 = FWeakObjectPtr::Get(piVar10 + 1);
    FUN_142c24770(uVar8,uVar4,uVar7);
  }
LAB_142c2b5ce:
  uVar14 = (int)piVar15 + 1;
  piVar12 = piVar12 + 8;
  piVar15 = (int *)(ulonglong)uVar14;
  if (*(int *)(param_1 + 0xa0) <= (int)uVar14) goto LAB_142c2b60a;
  goto LAB_142c2b490;
}



// FUNCTION 142c2b660 FUN_142c2b660 body=511 status=ok
// SIG undefined FUN_142c2b660(void)

void FUN_142c2b660(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *local_18;
  int local_10;
  
  if ((*(byte *)((longlong)param_1 + 0x18c) & 2) == 0) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))();
    UWorld::GetPawnIterator(uVar2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar3 != 0) {
        uVar5 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar5 < (int)DAT_1469e91c4) {
          uVar6 = uVar5 & 0xffff;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
          cVar1 = (**(code **)(*param_1 + 0x410))(param_1,lVar3);
          if (cVar1 == '\0') {
            (**(code **)(*param_1 + 0x458))(param_1,lVar3);
          }
        }
      }
    }
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar3 != 0) {
        uVar5 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar5 < (int)DAT_1469e91c4) {
          uVar6 = uVar5 & 0xffff;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
           (lVar3 = *(longlong *)(lVar3 + 0x488), lVar3 != 0)) {
          uVar5 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar6 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar6 * 0x18;
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
            cVar1 = (**(code **)(*param_1 + 0x410))(param_1,lVar3);
            if (cVar1 == '\0') {
              (**(code **)(*param_1 + 0x458))(param_1,lVar3);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c2b860 FUN_142c2b860 body=845 status=ok
// SIG undefined FUN_142c2b860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c2b860(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_68;
  undefined1 *local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  uint local_30;
  undefined4 local_2c;
  
  iVar3 = *(int *)(param_2 + 0xc);
  piVar8 = (int *)0x0;
  piVar6 = piVar8;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar7 = iVar3 >> 0x1f & 0xffff;
    uVar1 = iVar3 + uVar7;
    piVar6 = (int *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                    (longlong)(int)((uVar1 & 0xffff) - uVar7) * 0x18);
  }
  if (((uint)piVar6[2] >> 0x1d & 1) != 0) {
    FUN_142c28b30(param_1,param_2);
    return;
  }
  iVar3 = *(int *)(param_2 + 0x268);
  lVar9 = 0x80;
  if (*(char *)(param_2 + 0x1bc) == '\0') {
    lVar9 = 0x30;
  }
  plVar10 = (longlong *)(lVar9 + param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c938) && (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1))
  {
    DAT_146b2c934 = -1;
    _Init_thread_footer(&DAT_146b2c938);
  }
  if (iVar3 == DAT_146b2c934) {
    local_res18[0] = DAT_146b2c8f0;
    iVar3 = DAT_146b2c8f0 + 1;
    *(int *)(param_2 + 0x268) = DAT_146b2c8f0;
    DAT_146b2c8f0 = iVar3;
    FWeakObjectPtr::operator=(local_58,param_2);
    local_30 = local_30 & 0xfffffffe;
    local_4c = _DAT_1468b5d90;
    local_44 = DAT_1468b5d98;
    local_40 = DAT_1464aa798;
    local_50 = 0;
    local_38 = DAT_1464aa7a0;
    local_34 = 0xff;
    FUN_142c20fe0(&local_2c);
    FWeakObjectPtr::Get(local_58);
    if ((*(longlong *)(param_2 + 0x1a8) == 0) || (*(longlong *)(param_2 + 0x1b0) == 0)) {
      local_res10[0] = DAT_146690f0c;
      puVar4 = local_res10;
    }
    else {
      puVar4 = (undefined1 *)
               (**(code **)(**(longlong **)(param_2 + 0x1b0) + 0x18))
                         (*(longlong **)(param_2 + 0x1b0),local_res10);
    }
    local_34 = *puVar4;
    local_50 = *(undefined4 *)(param_2 + 0x1b8);
    local_2c = *(undefined4 *)(param_2 + 0x268);
    local_68 = local_res18;
    local_60 = local_58;
    FUN_142c19280(plVar10,local_res20,&local_68,0);
    FUN_142c1ce20((longlong)local_res20[0] * 0x3c + 4 + *plVar10);
    if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
      plVar5 = (longlong *)plVar10[8];
      if ((longlong *)plVar10[8] == (longlong *)0x0) {
        plVar5 = plVar10 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)plVar10[9] - 1U & (longlong)local_res18[0]) * 4);
      if (iVar3 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar3 * 0x3c + *plVar10);
          if (*piVar6 == local_res18[0]) {
            if (iVar3 != -1) goto LAB_142c2bb20;
            break;
          }
          iVar3 = piVar6[0xd];
        } while (iVar3 != -1);
      }
    }
    piVar6 = piVar8;
LAB_142c2bb20:
    plVar10 = *(longlong **)(param_1 + 0xd0);
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        lVar9 = *plVar10;
        if ((lVar9 != 0) && (((uint)piVar6[3] >> (*(byte *)(lVar9 + 0x48) & 0x1f) & 1) != 0)) {
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar9 + 0x58,piVar6 + 1);
        }
        uVar1 = (int)piVar8 + 1;
        piVar8 = (int *)(ulonglong)uVar1;
        plVar10 = plVar10 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0xd8));
    }
  }
  else {
    if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
      plVar5 = (longlong *)plVar10[8];
      if ((longlong *)plVar10[8] == (longlong *)0x0) {
        plVar5 = plVar10 + 7;
      }
      iVar2 = *(int *)((longlong)plVar5 + ((longlong)(int)plVar10[9] - 1U & (longlong)iVar3) * 4);
      if (iVar2 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar2 * 0x3c + *plVar10);
          if (*piVar6 == iVar3) {
            if (iVar2 != -1) goto LAB_142c2b982;
            break;
          }
          iVar2 = piVar6[0xd];
        } while (iVar2 != -1);
      }
    }
    piVar6 = piVar8;
LAB_142c2b982:
    FUN_142c2bbb0(piVar6 + 1,param_2);
    plVar10 = *(longlong **)(param_1 + 0xd0);
    if (0 < *(int *)(param_1 + 0xd8)) {
      do {
        if (*plVar10 != 0) {
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(*plVar10 + 0x68,piVar6 + 1);
        }
        uVar1 = (int)piVar8 + 1;
        piVar8 = (int *)(ulonglong)uVar1;
        plVar10 = plVar10 + 1;
      } while ((int)uVar1 < *(int *)(param_1 + 0xd8));
    }
  }
  return;
}



// FUNCTION 142c2bbb0 FUN_142c2bbb0 body=103 status=ok
// SIG undefined FUN_142c2bbb0(void)

void FUN_142c2bbb0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::Get();
  if ((*(longlong *)(param_2 + 0x1a8) == 0) || (*(longlong *)(param_2 + 0x1b0) == 0)) {
    local_res8[0] = DAT_146690f0c;
    puVar1 = local_res8;
  }
  else {
    puVar1 = (undefined1 *)
             (**(code **)(**(longlong **)(param_2 + 0x1b0) + 0x18))
                       (*(longlong **)(param_2 + 0x1b0),local_res8);
  }
  *(undefined1 *)(param_1 + 0x24) = *puVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x1b8);
  return;
}



// FUNCTION 142c2bc20 FUN_142c2bc20 body=573 status=ok
// SIG undefined FUN_142c2bc20(void)

void FUN_142c2bc20(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar9;
    lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar12 = 0;
  }
  if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar5 = FUN_142c33440();
  lVar12 = param_3;
  while (lVar12 != lVar5) {
    lVar12 = *(longlong *)(lVar12 + 0x30);
    if (lVar12 == 0) {
      return;
    }
  }
  iVar1 = *(int *)(param_2 + 0x268);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c938) && (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1))
  {
    DAT_146b2c934 = -1;
    _Init_thread_footer(&DAT_146b2c938);
  }
  if (iVar1 == DAT_146b2c934) {
    return;
  }
  plVar11 = *(longlong **)(param_1 + 0xd0);
  plVar13 = plVar11 + *(int *)(param_1 + 0xd8);
  do {
    if (plVar11 == plVar13) {
      return;
    }
    lVar12 = *plVar11;
    if (lVar12 == 0) {
LAB_142c2bd6b:
      bVar2 = false;
    }
    else {
      lVar6 = FUN_142c33440();
      lVar5 = param_3;
      do {
        lVar7 = param_3;
        if (lVar5 == lVar6) goto LAB_142c2bd36;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
      lVar7 = 0;
LAB_142c2bd36:
      lVar12 = *(longlong *)(lVar12 + 0x10);
      if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142c2bd6b;
      bVar2 = true;
    }
    if (bVar2) {
      lVar12 = 0x80;
      if (*(char *)(param_2 + 0x1bc) == '\0') {
        lVar12 = 0x30;
      }
      plVar13 = (longlong *)(lVar12 + param_1);
      if ((int)plVar13[1] == *(int *)((longlong)plVar13 + 0x34)) goto LAB_142c2bded;
      plVar8 = (longlong *)plVar13[8];
      if ((longlong *)plVar13[8] == (longlong *)0x0) {
        plVar8 = plVar13 + 7;
      }
      iVar4 = *(int *)((longlong)plVar8 + ((longlong)(int)plVar13[9] - 1U & (longlong)iVar1) * 4);
      if (iVar4 == -1) goto LAB_142c2bded;
      break;
    }
    plVar11 = plVar11 + 1;
  } while( true );
  while (iVar4 = piVar10[0xd], iVar4 != -1) {
    piVar10 = (int *)((longlong)iVar4 * 0x3c + *plVar13);
    if (*piVar10 == iVar1) {
      if (iVar4 != -1) goto LAB_142c2bdef;
      break;
    }
  }
LAB_142c2bded:
  piVar10 = (int *)0x0;
LAB_142c2bdef:
  FUN_142c2bbb0(piVar10 + 1,param_2);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(*plVar11 + 0x68,piVar10 + 1);
  return;
}



// FUNCTION 142c2be60 FUN_142c2be60 body=103 status=ok
// SIG undefined FUN_142c2be60(void)

void FUN_142c2be60(longlong param_1,byte *param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  
  bVar1 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x1b8);
  if ((bool)param_3 != ((uVar3 >> (bVar1 & 0x1f) & 1) != 0)) {
    if (param_3 == '\0') {
      uVar3 = uVar3 & ~(1 << (bVar1 & 0x1f));
    }
    else {
      uVar3 = uVar3 | 1 << (bVar1 & 0x1f);
    }
    *(uint *)(param_1 + 0x1b8) = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_142c1f5b0(lVar2);
    if (lVar2 != 0) {
      FUN_142c2b860(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142c2bed0 UpdateSenseID body=97 status=ok
// SIG undefined UpdateSenseID(void)

undefined1 * UAISense::UpdateSenseID(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_14077cd10(param_1 + 0x48);
  if (cVar1 == '\0') {
    cVar1 = DAT_146b2c8e8 + '\x01';
    *(char *)(param_1 + 0x48) = DAT_146b2c8e8;
    DAT_146b2c8e8 = cVar1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x18);
  }
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 142c2bf40 UpdateSenseID body=308 status=ok
// SIG undefined UpdateSenseID(void)

undefined1 * UAISense_Blueprint::UpdateSenseID(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int local_res8 [2];
  undefined1 local_res10 [8];
  char local_28 [8];
  undefined8 local_20;
  int *local_18;
  char *local_10;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb4) & 1) == 0) {
    local_res8[0] = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
    if (DAT_146691248 != DAT_146691274) {
      puVar4 = DAT_146691280;
      if (DAT_146691280 == (undefined *)0x0) {
        puVar4 = &DAT_146691278;
      }
      iVar1 = *(int *)(puVar4 + ((longlong)DAT_146691288 - 1U & (longlong)local_res8[0]) * 4);
      while (iVar1 != -1) {
        lVar6 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar6 + DAT_146691240) == local_res8[0]) {
          puVar7 = (undefined1 *)(lVar6 + DAT_146691240);
          if (iVar1 != -1) goto LAB_142c2bfe7;
          break;
        }
        iVar1 = *(int *)(lVar6 + DAT_146691240 + 0x18);
      }
    }
    puVar7 = (undefined1 *)0x0;
LAB_142c2bfe7:
    puVar5 = puVar7 + 8;
    if (puVar7 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 == (undefined1 *)0x0) {
      local_28[0] = DAT_146b2c8e8;
      local_20 = *(undefined8 *)(param_1 + 0x18);
      local_18 = local_res8;
      local_10 = local_28;
      cVar3 = DAT_146b2c8e8 + '\x01';
      *(char *)(param_1 + 0x48) = DAT_146b2c8e8;
      DAT_146b2c8e8 = cVar3;
      *(undefined8 *)(param_1 + 0x50) = local_20;
      FUN_142c18b20(&DAT_146691240,local_res10,&local_18,0);
    }
    else {
      uVar2 = *(undefined8 *)(puVar5 + 8);
      *(undefined1 *)(param_1 + 0x48) = *puVar5;
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
  }
  *param_2 = *(undefined1 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 142c2c080 FUN_142c2c080 body=47 status=ok
// SIG undefined FUN_142c2c080(void)

longlong FUN_142c2c080(void)

{
  if (DAT_146b2cb88 == 0) {
    FUN_141786440(&DAT_146b2cb88,&PTR_StaticClass_14580fed0);
  }
  return DAT_146b2cb88;
}



// FUNCTION 142c2c0d0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAIDataProvider_Random::StaticClass(void)

{
  if (DAT_146b2cba0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIDataProvider_Random",&DAT_146b2cba0,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_142c2d670,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAIDataProvider_QueryParams::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cba0;
}



// FUNCTION 142c2c190 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_146b2c9d0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIAsyncTaskBlueprintProxy",&DAT_146b2c9d0,
                  StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x68,0x10000000,0,L"Engine",
                  &LAB_142c2d600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2c9d0;
}



// FUNCTION 142c2c230 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIHotSpotManager::GetPrivateStaticClass(void)

{
  if (DAT_146b2cbb0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIHotSpotManager",&DAT_146b2cbb0,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2cbb0;
}



// FUNCTION 142c2c2e0 Z_Construct_UPackage__Script_AIModule body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_AIModule(void)

longlong Z_Construct_UPackage__Script_AIModule(void)

{
  if (DAT_146b2cbb8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
  }
  return DAT_146b2cbb8;
}



// FUNCTION 142c2c310 FUN_142c2c310 body=47 status=ok
// SIG undefined FUN_142c2c310(void)

longlong FUN_142c2c310(void)

{
  if (DAT_146b2c9c8 == 0) {
    FUN_141786440(&DAT_146b2c9c8,&PTR_GetPrivateStaticClass_145810370);
  }
  return DAT_146b2c9c8;
}



// FUNCTION 142c2c340 FUN_142c2c340 body=47 status=ok
// SIG undefined FUN_142c2c340(void)

longlong FUN_142c2c340(void)

{
  if (DAT_146b2c9c0 == 0) {
    FUN_141786a30(&DAT_146b2c9c0,&PTR_FUN_1466913e0);
  }
  return DAT_146b2c9c0;
}



// FUNCTION 142c2c370 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UHomeWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b2cc30 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIPerceptionComponent",&DAT_146b2cc30,
                  StaticRegisterNativesUHomeWidget,0x270,0x10000000,0,L"Game",&LAB_142c2d690,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2cc30;
}



// FUNCTION 142c2c430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIBlueprintHelperLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b2ca48 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIBlueprintHelperLibrary",&DAT_146b2ca48,
                  StaticRegisterNativesUAIBlueprintHelperLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b2ca48;
}



// FUNCTION 142c2c4e0 FUN_142c2c4e0 body=47 status=ok
// SIG undefined FUN_142c2c4e0(void)

longlong FUN_142c2c4e0(void)

{
  if (DAT_146b2ca40 == 0) {
    FUN_141786440(&DAT_146b2ca40,&PTR_GetPrivateStaticClass_145810b70);
  }
  return DAT_146b2ca40;
}



// FUNCTION 142c2c510 FUN_142c2c510 body=47 status=ok
// SIG undefined FUN_142c2c510(void)

longlong FUN_142c2c510(void)

{
  if (DAT_146b2c9d8 == 0) {
    FUN_141786a30(&DAT_146b2c9d8,&PTR_FUN_146691690);
  }
  return DAT_146b2c9d8;
}



// FUNCTION 142c2c540 FUN_142c2c540 body=47 status=ok
// SIG undefined FUN_142c2c540(void)

longlong FUN_142c2c540(void)

{
  if (DAT_146b2c9e0 == 0) {
    FUN_141786a30(&DAT_146b2c9e0,&PTR_FUN_146691750);
  }
  return DAT_146b2c9e0;
}



// FUNCTION 142c2c570 FUN_142c2c570 body=47 status=ok
// SIG undefined FUN_142c2c570(void)

longlong FUN_142c2c570(void)

{
  if (DAT_146b2c9e8 == 0) {
    FUN_141786a30(&DAT_146b2c9e8,&PTR_FUN_146691810);
  }
  return DAT_146b2c9e8;
}



// FUNCTION 142c2c5a0 FUN_142c2c5a0 body=47 status=ok
// SIG undefined FUN_142c2c5a0(void)

longlong FUN_142c2c5a0(void)

{
  if (DAT_146b2c9f0 == 0) {
    FUN_141786a30(&DAT_146b2c9f0,&PTR_FUN_1466918d0);
  }
  return DAT_146b2c9f0;
}



// FUNCTION 142c2c5d0 FUN_142c2c5d0 body=47 status=ok
// SIG undefined FUN_142c2c5d0(void)

longlong FUN_142c2c5d0(void)

{
  if (DAT_146b2c9f8 == 0) {
    FUN_141786a30(&DAT_146b2c9f8,&PTR_FUN_1466919a0);
  }
  return DAT_146b2c9f8;
}



// FUNCTION 142c2c600 FUN_142c2c600 body=47 status=ok
// SIG undefined FUN_142c2c600(void)

longlong FUN_142c2c600(void)

{
  if (DAT_146b2ca00 == 0) {
    FUN_141786a30(&DAT_146b2ca00,&PTR_FUN_146691a70);
  }
  return DAT_146b2ca00;
}



// FUNCTION 142c2c630 FUN_142c2c630 body=47 status=ok
// SIG undefined FUN_142c2c630(void)

longlong FUN_142c2c630(void)

{
  if (DAT_146b2ca08 == 0) {
    FUN_141786a30(&DAT_146b2ca08,&PTR_FUN_146691b40);
  }
  return DAT_146b2ca08;
}



// FUNCTION 142c2c660 FUN_142c2c660 body=47 status=ok
// SIG undefined FUN_142c2c660(void)

longlong FUN_142c2c660(void)

{
  if (DAT_146b2ca10 == 0) {
    FUN_141786a30(&DAT_146b2ca10,&PTR_FUN_146691c60);
  }
  return DAT_146b2ca10;
}



// FUNCTION 142c2c690 FUN_142c2c690 body=47 status=ok
// SIG undefined FUN_142c2c690(void)

longlong FUN_142c2c690(void)

{
  if (DAT_146b2ca18 == 0) {
    FUN_141786a30(&DAT_146b2ca18,&PTR_FUN_146691db0);
  }
  return DAT_146b2ca18;
}



// FUNCTION 142c2c6c0 FUN_142c2c6c0 body=47 status=ok
// SIG undefined FUN_142c2c6c0(void)

longlong FUN_142c2c6c0(void)

{
  if (DAT_146b2ca20 == 0) {
    FUN_141786a30(&DAT_146b2ca20,&PTR_FUN_146691e70);
  }
  return DAT_146b2ca20;
}



// FUNCTION 142c2c6f0 FUN_142c2c6f0 body=47 status=ok
// SIG undefined FUN_142c2c6f0(void)

longlong FUN_142c2c6f0(void)

{
  if (DAT_146b2ca28 == 0) {
    FUN_141786a30(&DAT_146b2ca28,&PTR_FUN_146691f30);
  }
  return DAT_146b2ca28;
}



// FUNCTION 142c2c720 FUN_142c2c720 body=47 status=ok
// SIG undefined FUN_142c2c720(void)

longlong FUN_142c2c720(void)

{
  if (DAT_146b2ca30 == 0) {
    FUN_141786a30(&DAT_146b2ca30,&PTR_FUN_146692150);
  }
  return DAT_146b2ca30;
}



// FUNCTION 142c2c750 FUN_142c2c750 body=47 status=ok
// SIG undefined FUN_142c2c750(void)

longlong FUN_142c2c750(void)

{
  if (DAT_146b2ca38 == 0) {
    FUN_141786a30(&DAT_146b2ca38,&PTR_FUN_146692270);
  }
  return DAT_146b2ca38;
}



// FUNCTION 142c2c780 FUN_142c2c780 body=151 status=ok
// SIG undefined FUN_142c2c780(void)

longlong FUN_142c2c780(void)

{
  if (DAT_146b2cca8 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIPerceptionSystem",&DAT_146b2cca8,FUN_142c2e190,0x1e0,
                  0x10000006,0,L"Game",&LAB_142c2d6d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2cca8;
}



// FUNCTION 142c2c830 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIPerceptionListenerInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b2cc40 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIPerceptionListenerInterface",&DAT_146b2cc40,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cc40;
}



// FUNCTION 142c2c8e0 FUN_142c2c8e0 body=47 status=ok
// SIG undefined FUN_142c2c8e0(void)

longlong FUN_142c2c8e0(void)

{
  if (DAT_146b2cc28 == 0) {
    FUN_141786440(&DAT_146b2cc28,&PTR_GetPrivateStaticClass_1458117f0);
  }
  return DAT_146b2cc28;
}



// FUNCTION 142c2c910 FUN_142c2c910 body=47 status=ok
// SIG undefined FUN_142c2c910(void)

longlong FUN_142c2c910(void)

{
  if (DAT_146b2cbe8 == 0) {
    FUN_141786a30(&DAT_146b2cbe8,&PTR_FUN_146694260);
  }
  return DAT_146b2cbe8;
}



// FUNCTION 142c2c940 FUN_142c2c940 body=47 status=ok
// SIG undefined FUN_142c2c940(void)

longlong FUN_142c2c940(void)

{
  if (DAT_146b2cbf0 == 0) {
    FUN_141786a30(&DAT_146b2cbf0,&PTR_FUN_146694370);
  }
  return DAT_146b2cbf0;
}



// FUNCTION 142c2c970 FUN_142c2c970 body=47 status=ok
// SIG undefined FUN_142c2c970(void)

longlong FUN_142c2c970(void)

{
  if (DAT_146b2cbf8 == 0) {
    FUN_141786a30(&DAT_146b2cbf8,&PTR_FUN_146694480);
  }
  return DAT_146b2cbf8;
}



// FUNCTION 142c2c9a0 FUN_142c2c9a0 body=47 status=ok
// SIG undefined FUN_142c2c9a0(void)

longlong FUN_142c2c9a0(void)

{
  if (DAT_146b2cc00 == 0) {
    FUN_141786a30(&DAT_146b2cc00,&PTR_FUN_146694590);
  }
  return DAT_146b2cc00;
}



// FUNCTION 142c2c9d0 FUN_142c2c9d0 body=47 status=ok
// SIG undefined FUN_142c2c9d0(void)

longlong FUN_142c2c9d0(void)

{
  if (DAT_146b2cc08 == 0) {
    FUN_141786a30(&DAT_146b2cc08,&PTR_FUN_146694650);
  }
  return DAT_146b2cc08;
}



// FUNCTION 142c2ca00 FUN_142c2ca00 body=47 status=ok
// SIG undefined FUN_142c2ca00(void)

longlong FUN_142c2ca00(void)

{
  if (DAT_146b2cc10 == 0) {
    FUN_141786a30(&DAT_146b2cc10,&PTR_FUN_146694710);
  }
  return DAT_146b2cc10;
}



// FUNCTION 142c2ca30 FUN_142c2ca30 body=47 status=ok
// SIG undefined FUN_142c2ca30(void)

longlong FUN_142c2ca30(void)

{
  if (DAT_146b2cc18 == 0) {
    FUN_141786a30(&DAT_146b2cc18,&PTR_FUN_146694750);
  }
  return DAT_146b2cc18;
}



// FUNCTION 142c2ca60 FUN_142c2ca60 body=47 status=ok
// SIG undefined FUN_142c2ca60(void)

longlong FUN_142c2ca60(void)

{
  if (DAT_146b2cc20 == 0) {
    FUN_141786a30(&DAT_146b2cc20,&PTR_FUN_146694830);
  }
  return DAT_146b2cc20;
}



// FUNCTION 142c2ca90 FUN_142c2ca90 body=47 status=ok
// SIG undefined FUN_142c2ca90(void)

longlong FUN_142c2ca90(void)

{
  if (DAT_146b2cb08 == 0) {
    FUN_141786440(&DAT_146b2cb08,&PTR_LAB_1458121c0);
  }
  return DAT_146b2cb08;
}



// FUNCTION 142c2cac0 FUN_142c2cac0 body=47 status=ok
// SIG undefined FUN_142c2cac0(void)

longlong FUN_142c2cac0(void)

{
  if (DAT_146b2ca58 == 0) {
    FUN_141786a30(&DAT_146b2ca58,&PTR_FUN_1466923f0);
  }
  return DAT_146b2ca58;
}



// FUNCTION 142c2caf0 FUN_142c2caf0 body=47 status=ok
// SIG undefined FUN_142c2caf0(void)

longlong FUN_142c2caf0(void)

{
  if (DAT_146b2ca60 == 0) {
    FUN_141786a30(&DAT_146b2ca60,&PTR_FUN_146692470);
  }
  return DAT_146b2ca60;
}



// FUNCTION 142c2cb20 FUN_142c2cb20 body=47 status=ok
// SIG undefined FUN_142c2cb20(void)

longlong FUN_142c2cb20(void)

{
  if (DAT_146b2ca68 == 0) {
    FUN_141786a30(&DAT_146b2ca68,&PTR_FUN_1466924f0);
  }
  return DAT_146b2ca68;
}



// FUNCTION 142c2cb50 FUN_142c2cb50 body=47 status=ok
// SIG undefined FUN_142c2cb50(void)

longlong FUN_142c2cb50(void)

{
  if (DAT_146b2ca70 == 0) {
    FUN_141786a30(&DAT_146b2ca70,&PTR_FUN_1466925b0);
  }
  return DAT_146b2ca70;
}



// FUNCTION 142c2cb80 FUN_142c2cb80 body=47 status=ok
// SIG undefined FUN_142c2cb80(void)

longlong FUN_142c2cb80(void)

{
  if (DAT_146b2ca78 == 0) {
    FUN_141786a30(&DAT_146b2ca78,&PTR_FUN_146692630);
  }
  return DAT_146b2ca78;
}



// FUNCTION 142c2cbb0 FUN_142c2cbb0 body=47 status=ok
// SIG undefined FUN_142c2cbb0(void)

longlong FUN_142c2cbb0(void)

{
  if (DAT_146b2ca80 == 0) {
    FUN_141786a30(&DAT_146b2ca80,&PTR_FUN_1466926b0);
  }
  return DAT_146b2ca80;
}



// FUNCTION 142c2cbe0 FUN_142c2cbe0 body=47 status=ok
// SIG undefined FUN_142c2cbe0(void)

longlong FUN_142c2cbe0(void)

{
  if (DAT_146b2ca88 == 0) {
    FUN_141786a30(&DAT_146b2ca88,&PTR_FUN_146692730);
  }
  return DAT_146b2ca88;
}



// FUNCTION 142c2cc10 FUN_142c2cc10 body=47 status=ok
// SIG undefined FUN_142c2cc10(void)

longlong FUN_142c2cc10(void)

{
  if (DAT_146b2ca90 == 0) {
    FUN_141786a30(&DAT_146b2ca90,&PTR_FUN_1466927b0);
  }
  return DAT_146b2ca90;
}



// FUNCTION 142c2cc40 FUN_142c2cc40 body=47 status=ok
// SIG undefined FUN_142c2cc40(void)

longlong FUN_142c2cc40(void)

{
  if (DAT_146b2ca98 == 0) {
    FUN_141786a30(&DAT_146b2ca98,&PTR_FUN_146692840);
  }
  return DAT_146b2ca98;
}



// FUNCTION 142c2cc70 FUN_142c2cc70 body=47 status=ok
// SIG undefined FUN_142c2cc70(void)

longlong FUN_142c2cc70(void)

{
  if (DAT_146b2caa0 == 0) {
    FUN_141786a30(&DAT_146b2caa0,&PTR_FUN_146692880);
  }
  return DAT_146b2caa0;
}



// FUNCTION 142c2cca0 FUN_142c2cca0 body=47 status=ok
// SIG undefined FUN_142c2cca0(void)

longlong FUN_142c2cca0(void)

{
  if (DAT_146b2caa8 == 0) {
    FUN_141786a30(&DAT_146b2caa8,&PTR_FUN_146692900);
  }
  return DAT_146b2caa8;
}



// FUNCTION 142c2ccd0 FUN_142c2ccd0 body=47 status=ok
// SIG undefined FUN_142c2ccd0(void)

longlong FUN_142c2ccd0(void)

{
  if (DAT_146b2cab0 == 0) {
    FUN_141786a30(&DAT_146b2cab0,&PTR_FUN_146692980);
  }
  return DAT_146b2cab0;
}



// FUNCTION 142c2cd00 FUN_142c2cd00 body=47 status=ok
// SIG undefined FUN_142c2cd00(void)

longlong FUN_142c2cd00(void)

{
  if (DAT_146b2cab8 == 0) {
    FUN_141786a30(&DAT_146b2cab8,&PTR_FUN_146692c00);
  }
  return DAT_146b2cab8;
}



// FUNCTION 142c2cd30 FUN_142c2cd30 body=47 status=ok
// SIG undefined FUN_142c2cd30(void)

longlong FUN_142c2cd30(void)

{
  if (DAT_146b2cac0 == 0) {
    FUN_141786a30(&DAT_146b2cac0,&PTR_FUN_146692ed0);
  }
  return DAT_146b2cac0;
}



// FUNCTION 142c2cd60 FUN_142c2cd60 body=47 status=ok
// SIG undefined FUN_142c2cd60(void)

longlong FUN_142c2cd60(void)

{
  if (DAT_146b2cac8 == 0) {
    FUN_141786a30(&DAT_146b2cac8,&PTR_FUN_146692f90);
  }
  return DAT_146b2cac8;
}



// FUNCTION 142c2cd90 FUN_142c2cd90 body=47 status=ok
// SIG undefined FUN_142c2cd90(void)

longlong FUN_142c2cd90(void)

{
  if (DAT_146b2cad0 == 0) {
    FUN_141786a30(&DAT_146b2cad0,&PTR_FUN_146693010);
  }
  return DAT_146b2cad0;
}



// FUNCTION 142c2cdc0 FUN_142c2cdc0 body=47 status=ok
// SIG undefined FUN_142c2cdc0(void)

longlong FUN_142c2cdc0(void)

{
  if (DAT_146b2cad8 == 0) {
    FUN_141786a30(&DAT_146b2cad8,&PTR_FUN_146693090);
  }
  return DAT_146b2cad8;
}



// FUNCTION 142c2cdf0 FUN_142c2cdf0 body=47 status=ok
// SIG undefined FUN_142c2cdf0(void)

longlong FUN_142c2cdf0(void)

{
  if (DAT_146b2cae0 == 0) {
    FUN_141786a30(&DAT_146b2cae0,&PTR_FUN_146693150);
  }
  return DAT_146b2cae0;
}



// FUNCTION 142c2ce20 FUN_142c2ce20 body=47 status=ok
// SIG undefined FUN_142c2ce20(void)

longlong FUN_142c2ce20(void)

{
  if (DAT_146b2cae8 == 0) {
    FUN_141786a30(&DAT_146b2cae8,&PTR_FUN_146693220);
  }
  return DAT_146b2cae8;
}



// FUNCTION 142c2ce50 FUN_142c2ce50 body=47 status=ok
// SIG undefined FUN_142c2ce50(void)

longlong FUN_142c2ce50(void)

{
  if (DAT_146b2caf0 == 0) {
    FUN_141786a30(&DAT_146b2caf0,&PTR_FUN_1466932b0);
  }
  return DAT_146b2caf0;
}



// FUNCTION 142c2ce80 FUN_142c2ce80 body=47 status=ok
// SIG undefined FUN_142c2ce80(void)

longlong FUN_142c2ce80(void)

{
  if (DAT_146b2caf8 == 0) {
    FUN_141786a30(&DAT_146b2caf8,&PTR_FUN_146693340);
  }
  return DAT_146b2caf8;
}



// FUNCTION 142c2ceb0 FUN_142c2ceb0 body=47 status=ok
// SIG undefined FUN_142c2ceb0(void)

longlong FUN_142c2ceb0(void)

{
  if (DAT_146b2cb00 == 0) {
    FUN_141786a30(&DAT_146b2cb00,&PTR_FUN_146693450);
  }
  return DAT_146b2cb00;
}



// FUNCTION 142c2cef0 FUN_142c2cef0 body=53 status=ok
// SIG undefined FUN_142c2cef0(void)

void FUN_142c2cef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145814328;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2cf40 FUN_142c2cf40 body=162 status=ok
// SIG undefined FUN_142c2cf40(void)

longlong FUN_142c2cf40(void)

{
  if (DAT_146b2cc70 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIPerceptionStimuliSourceComponent",&DAT_146b2cc70,
                  FUN_142c2e160,400,0x10000004,0,L"Game",&LAB_142c2d6b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2cc70;
}



// FUNCTION 142c2cff0 FUN_142c2cff0 body=47 status=ok
// SIG undefined FUN_142c2cff0(void)

longlong FUN_142c2cff0(void)

{
  if (DAT_146b2cc68 == 0) {
    FUN_141786440(&DAT_146b2cc68,&PTR_FUN_145812690);
  }
  return DAT_146b2cc68;
}



// FUNCTION 142c2d020 FUN_142c2d020 body=47 status=ok
// SIG undefined FUN_142c2d020(void)

longlong FUN_142c2d020(void)

{
  if (DAT_146b2cc48 == 0) {
    FUN_141786a30(&DAT_146b2cc48,&PTR_FUN_146694b20);
  }
  return DAT_146b2cc48;
}



// FUNCTION 142c2d050 FUN_142c2d050 body=47 status=ok
// SIG undefined FUN_142c2d050(void)

longlong FUN_142c2d050(void)

{
  if (DAT_146b2cc50 == 0) {
    FUN_141786a30(&DAT_146b2cc50,&PTR_FUN_146694b60);
  }
  return DAT_146b2cc50;
}



// FUNCTION 142c2d080 FUN_142c2d080 body=47 status=ok
// SIG undefined FUN_142c2d080(void)

longlong FUN_142c2d080(void)

{
  if (DAT_146b2cc58 == 0) {
    FUN_141786a30(&DAT_146b2cc58,&PTR_FUN_146694ba0);
  }
  return DAT_146b2cc58;
}



// FUNCTION 142c2d0b0 FUN_142c2d0b0 body=47 status=ok
// SIG undefined FUN_142c2d0b0(void)

longlong FUN_142c2d0b0(void)

{
  if (DAT_146b2cc60 == 0) {
    FUN_141786a30(&DAT_146b2cc60,&PTR_FUN_146694c30);
  }
  return DAT_146b2cc60;
}



// FUNCTION 142c2d100 FUN_142c2d100 body=47 status=ok
// SIG undefined FUN_142c2d100(void)

longlong FUN_142c2d100(void)

{
  if (DAT_146b2cca0 == 0) {
    FUN_141786440(&DAT_146b2cca0,&PTR_FUN_145812cf0);
  }
  return DAT_146b2cca0;
}



// FUNCTION 142c2d130 FUN_142c2d130 body=47 status=ok
// SIG undefined FUN_142c2d130(void)

longlong FUN_142c2d130(void)

{
  if (DAT_146b2cc78 == 0) {
    FUN_141786a30(&DAT_146b2cc78,&PTR_FUN_146694e40);
  }
  return DAT_146b2cc78;
}



// FUNCTION 142c2d160 FUN_142c2d160 body=47 status=ok
// SIG undefined FUN_142c2d160(void)

longlong FUN_142c2d160(void)

{
  if (DAT_146b2cc80 == 0) {
    FUN_141786a30(&DAT_146b2cc80,&PTR_FUN_146694f00);
  }
  return DAT_146b2cc80;
}



// FUNCTION 142c2d190 FUN_142c2d190 body=47 status=ok
// SIG undefined FUN_142c2d190(void)

longlong FUN_142c2d190(void)

{
  if (DAT_146b2cc88 == 0) {
    FUN_141786a30(&DAT_146b2cc88,&PTR_FUN_146695060);
  }
  return DAT_146b2cc88;
}



// FUNCTION 142c2d1c0 FUN_142c2d1c0 body=47 status=ok
// SIG undefined FUN_142c2d1c0(void)

longlong FUN_142c2d1c0(void)

{
  if (DAT_146b2cc90 == 0) {
    FUN_141786a30(&DAT_146b2cc90,&PTR_FUN_1466950e0);
  }
  return DAT_146b2cc90;
}



// FUNCTION 142c2d1f0 FUN_142c2d1f0 body=47 status=ok
// SIG undefined FUN_142c2d1f0(void)

longlong FUN_142c2d1f0(void)

{
  if (DAT_146b2cc98 == 0) {
    FUN_141786a30(&DAT_146b2cc98,&PTR_FUN_1466951a0);
  }
  return DAT_146b2cc98;
}



// FUNCTION 142c2d220 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UAIDataProvider::StaticClass(void)

{
  if (DAT_146b2cb80 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIDataProvider",&DAT_146b2cb80,FUN_140447710,0x28,0x10000001
                  ,0,L"Engine",&LAB_142c2d620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2cb80;
}



// FUNCTION 142c2d2c0 FUN_142c2d2c0 body=47 status=ok
// SIG undefined FUN_142c2d2c0(void)

longlong FUN_142c2d2c0(void)

{
  if (DAT_146b2cb60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb60,&PTR_Z_Construct_UPackage__Script_AIModule_146693ae0);
  }
  return DAT_146b2cb60;
}



// FUNCTION 142c2d2f0 FUN_142c2d2f0 body=47 status=ok
// SIG undefined FUN_142c2d2f0(void)

longlong FUN_142c2d2f0(void)

{
  if (DAT_146b2cb70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb70,&PTR_Z_Construct_UPackage__Script_AIModule_146693be0);
  }
  return DAT_146b2cb70;
}



// FUNCTION 142c2d320 FUN_142c2d320 body=47 status=ok
// SIG undefined FUN_142c2d320(void)

longlong FUN_142c2d320(void)

{
  if (DAT_146b2cb78 == 0) {
    FUN_141786440(&DAT_146b2cb78,&PTR_StaticClass_145813670);
  }
  return DAT_146b2cb78;
}



// FUNCTION 142c2d350 FUN_142c2d350 body=53 status=ok
// SIG undefined FUN_142c2d350(void)

void FUN_142c2d350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145813c18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d3a0 FUN_142c2d3a0 body=53 status=ok
// SIG undefined FUN_142c2d3a0(void)

void FUN_142c2d3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145813d30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d3e0 FUN_142c2d3e0 body=53 status=ok
// SIG undefined FUN_142c2d3e0(void)

void FUN_142c2d3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145813e48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d420 FUN_142c2d420 body=53 status=ok
// SIG undefined FUN_142c2d420(void)

void FUN_142c2d420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145813f60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d460 FUN_142c2d460 body=53 status=ok
// SIG undefined FUN_142c2d460(void)

void FUN_142c2d460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145814570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d4a0 FUN_142c2d4a0 body=53 status=ok
// SIG undefined FUN_142c2d4a0(void)

void FUN_142c2d4a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145814078;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d4e0 FUN_142c2d4e0 body=53 status=ok
// SIG undefined FUN_142c2d4e0(void)

void FUN_142c2d4e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145814190;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c2d530 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAIDataProvider_QueryParams::StaticClass(void)

{
  if (DAT_146b2cb90 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIDataProvider_QueryParams",&DAT_146b2cb90,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAIDataProvider::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cb90;
}



// FUNCTION 142c2d640 InternalConstructor<UAIDataProvider_QueryParams> body=47 status=ok
// SIG undefined InternalConstructor<UAIDataProvider_QueryParams>(void)

void InternalConstructor<UAIDataProvider_QueryParams>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAIDataProvider::UAIDataProvider(puVar1,param_1);
    *puVar1 = &PTR_FUN_1457fed48;
    puVar1[5] = 0;
  }
  return;
}



// FUNCTION 142c2d6f0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAIDataProviderStructValue::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ValueToString_14407aff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142c2d8e0 Copy body=207 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAIDataProviderStructValue>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *(undefined8 *)(param_2 + 8) = *puVar3;
      puVar1 = (undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x10) = puVar3[1];
      *(undefined8 *)(param_2 + 0x18) = puVar3[2];
      if (puVar1 != puVar3 + 3) {
        iVar2 = *(int *)(puVar3 + 4);
        _Src = (void *)puVar3[3];
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar3 = puVar3 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c2db90 FUN_142c2db90 body=536 status=ok
// SIG undefined FUN_142c2db90(void)

undefined8 FUN_142c2db90(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (param_4 != 0) {
    plVar5 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar5[-1];
      if (plVar1 != plVar5) {
        iVar4 = (int)plVar5[1];
        lVar2 = *plVar5;
        *(int *)(param_2 + 2) = iVar4;
        if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(plVar1,iVar4);
          puVar6 = (uint *)*plVar1;
          if (iVar4 != 0) {
            puVar7 = (uint *)(lVar2 + 0x44);
            do {
              *puVar6 = puVar7[-0x11];
              puVar6[1] = puVar7[-0x10];
              puVar6[2] = puVar7[-0xf];
              *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar7 + -0xe);
              puVar6[5] = puVar7[-0xc];
              *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar7 + -0xb);
              puVar6[8] = puVar7[-9];
              *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar7 + -7);
              *(char *)(puVar6 + 0xc) = (char)puVar7[-5];
              *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar7 + -3);
              puVar6[0x10] = puVar7[-1];
              puVar6[0x11] = puVar6[0x11] ^ (puVar6[0x11] ^ *puVar7) & 1;
              uVar3 = (puVar6[0x11] ^ *puVar7) & 2 ^ puVar6[0x11];
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 4 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 8 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 0x10 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 0x20 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 0x40 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 0x80 ^ uVar3;
              puVar6[0x11] = uVar3;
              uVar3 = (uVar3 ^ *puVar7) & 0x100 ^ uVar3;
              puVar6[0x11] = uVar3;
              puVar6[0x11] = (uVar3 ^ *puVar7) & 0x200 ^ uVar3;
              *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar7 + 1);
              puVar6[0x14] = puVar7[3];
              puVar6[0x15] = puVar7[4];
              *(undefined8 *)(puVar6 + 0x16) = *(undefined8 *)(puVar7 + 5);
              puVar6[0x18] = puVar7[7];
              puVar6 = puVar6 + 0x1a;
              puVar7 = puVar7 + 0x1a;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      puVar6 = (uint *)(plVar5 + 2);
      plVar5 = plVar5 + 4;
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) ^ (*puVar6 ^ *(uint *)(param_2 + 3)) & 1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142c2ddc0 EAISenseNotifyType_StaticEnum body=85 status=ok
// SIG undefined EAISenseNotifyType_StaticEnum(void)

void EAISenseNotifyType_StaticEnum(void)

{
  if (DAT_146b2c940 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    DAT_146b2c940 = GetStaticEnum(FUN_142c2e7c0,DAT_146b2cbb8,L"EAISenseNotifyType");
  }
  return;
}



// FUNCTION 142c2de20 FUN_142c2de20 body=162 status=ok
// SIG undefined FUN_142c2de20(void)

longlong FUN_142c2de20(void)

{
  if (DAT_146b2cb10 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIController",&DAT_146b2cb10,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x598,0x10000000,0,
                  L"Engine",&LAB_142c2d5e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_14291fb80
                  ,&LAB_140447700,0);
  }
  return DAT_146b2cb10;
}



// FUNCTION 142c2ded0 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC(void)

{
  return 0x6dfba50b;
}



// FUNCTION 142c2dee0 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC(void)

{
  return 0xf7bb9473;
}



// FUNCTION 142c2def0 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC(void)

{
  return 0xedc3dcdc;
}



// FUNCTION 142c2df00 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC(void)

{
  return 0xa171558d;
}



// FUNCTION 142c2df10 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC(void)

{
  return 0xa524bf2d;
}



// FUNCTION 142c2df20 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC(void)

{
  return 0xb0916b11;
}



// FUNCTION 142c2df30 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC(void)

{
  return 0x583dbfe;
}



// FUNCTION 142c2df40 FUN_142c2df40 body=6 status=ok
// SIG undefined FUN_142c2df40(void)

undefined8 FUN_142c2df40(void)

{
  return 0xf723e9e2;
}



// FUNCTION 142c2df50 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC(void)

{
  return 0x6e64e03e;
}



// FUNCTION 142c2dfd0 FUN_142c2dfd0 body=61 status=ok
// SIG undefined FUN_142c2dfd0(void)

void FUN_142c2dfd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2c980);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142c2e010 FUN_142c2e010 body=61 status=ok
// SIG undefined FUN_142c2e010(void)

void FUN_142c2e010(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2c988);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142c2e050 FUN_142c2e050 body=66 status=ok
// SIG undefined FUN_142c2e050(void)

void FUN_142c2e050(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b2c990);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142c2e0a0 StaticRegisterNativesUKismetArrayLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetArrayLibrary(void)

void UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c2de20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClaimTaskResource_145813ad0,0x13);
  return;
}



// FUNCTION 142c2e0d0 StaticRegisterNativesUAIAsyncTaskBlueprintProxy body=34 status=ok
// SIG undefined StaticRegisterNativesUAIAsyncTaskBlueprintProxy(void)

void UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMoveCompleted_1458139e8,1);
  return;
}



// FUNCTION 142c2e100 StaticRegisterNativesUAIBlueprintHelperLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUAIBlueprintHelperLibrary(void)

void UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateMoveToProxyObject_145813a00,0xd);
  return;
}



// FUNCTION 142c2e130 StaticRegisterNativesUHomeWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUHomeWidget(void)

void UHomeWidget::StaticRegisterNativesUHomeWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetActorsPerception_145814440,8);
  return;
}



// FUNCTION 142c2e160 FUN_142c2e160 body=34 status=ok
// SIG undefined FUN_142c2e160(void)

void FUN_142c2e160(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c2cf40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RegisterForSense_1458144c0,4);
  return;
}



// FUNCTION 142c2e190 FUN_142c2e190 body=34 status=ok
// SIG undefined FUN_142c2e190(void)

void FUN_142c2e190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c2c780();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetSenseClassForStimulus_145814500,5);
  return;
}



// FUNCTION 142c2e1c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderBoolValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb18 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC();
    DAT_146b2cb18 = GetStaticStruct(FUN_142c2e7f0,lVar1,L"AIDataProviderBoolValue",0x30,uVar2);
  }
  return;
}



// FUNCTION 142c2e240 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderFloatValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb28 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC();
    DAT_146b2cb28 = GetStaticStruct(FUN_142c2e820,lVar1,L"AIDataProviderFloatValue",0x30,uVar2);
  }
  return;
}



// FUNCTION 142c2e2c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderIntValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb38 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC();
    DAT_146b2cb38 = GetStaticStruct(FUN_142c2e850,lVar1,L"AIDataProviderIntValue",0x30,uVar2);
  }
  return;
}



// FUNCTION 142c2e340 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderStructValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb48 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC();
    DAT_146b2cb48 = GetStaticStruct(FUN_142c2e880,lVar1,L"AIDataProviderStructValue",0x30,uVar2);
  }
  return;
}



// FUNCTION 142c2e3c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderTypedValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb58 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC();
    DAT_146b2cb58 = GetStaticStruct(FUN_142c2d2c0,lVar1,L"AIDataProviderTypedValue",0x28,uVar2);
  }
  return;
}



// FUNCTION 142c2e440 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAIDataProviderValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cb68 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC();
    DAT_146b2cb68 = GetStaticStruct(FUN_142c2d2f0,lVar1,L"AIDataProviderValue",0x20,uVar2);
  }
  return;
}



// FUNCTION 142c2e4c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAISenseAffiliationFilter::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2ccb8 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_CRC();
    DAT_146b2ccb8 = GetStaticStruct(FUN_142c2e8b0,lVar1,L"AISenseAffiliationFilter",4,uVar2);
  }
  return;
}



// FUNCTION 142c2e540 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFileManifestData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2ccc8 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = FUN_142c2df40();
    DAT_146b2ccc8 = GetStaticStruct(FUN_142c2e8e0,lVar1,L"AIStimulus",0x68,uVar2);
  }
  return;
}



// FUNCTION 142c2e5c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FActorPerceptionBlueprintInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2cbd8 == 0) {
    if (DAT_146b2cbb8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2cbb8,&PTR_s__Script_AIModule_145814300);
    }
    lVar1 = DAT_146b2cbb8;
    uVar2 = Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC();
    DAT_146b2cbd8 = GetStaticStruct(FUN_142c2e910,lVar1,L"ActorPerceptionBlueprintInfo",0x20,uVar2);
  }
  return;
}



// FUNCTION 142c2e640 FUN_142c2e640 body=47 status=ok
// SIG undefined FUN_142c2e640(void)

longlong FUN_142c2e640(void)

{
  if (DAT_146b2cb98 == 0) {
    FUN_141786440(&DAT_146b2cb98,&PTR_StaticClass_145810030);
  }
  return DAT_146b2cb98;
}



// FUNCTION 142c2e670 FUN_142c2e670 body=47 status=ok
// SIG undefined FUN_142c2e670(void)

longlong FUN_142c2e670(void)

{
  if (DAT_146b2cba8 == 0) {
    FUN_141786440(&DAT_146b2cba8,&PTR_GetPrivateStaticClass_145810190);
  }
  return DAT_146b2cba8;
}



// FUNCTION 142c2e6a0 FUN_142c2e6a0 body=47 status=ok
// SIG undefined FUN_142c2e6a0(void)

longlong FUN_142c2e6a0(void)

{
  if (DAT_146b2cc38 == 0) {
    FUN_141786440(&DAT_146b2cc38,&PTR_GetPrivateStaticClass_145811b70);
  }
  return DAT_146b2cc38;
}



// FUNCTION 142c2e6d0 FUN_142c2e6d0 body=47 status=ok
// SIG undefined FUN_142c2e6d0(void)

longlong FUN_142c2e6d0(void)

{
  if (DAT_146b2ca50 == 0) {
    FUN_141786a30(&DAT_146b2ca50,&PTR_Z_Construct_UPackage__Script_AIModule_146692360);
  }
  return DAT_146b2ca50;
}



// FUNCTION 142c2e700 FUN_142c2e700 body=47 status=ok
// SIG undefined FUN_142c2e700(void)

longlong FUN_142c2e700(void)

{
  if (DAT_146b2cbc8 == 0) {
    FUN_141786a30(&DAT_146b2cbc8,&PTR_Z_Construct_UPackage__Script_AIModule_146693f40);
  }
  return DAT_146b2cbc8;
}



// FUNCTION 142c2e730 FUN_142c2e730 body=47 status=ok
// SIG undefined FUN_142c2e730(void)

longlong FUN_142c2e730(void)

{
  if (DAT_146b2cbc0 == 0) {
    FUN_141786a30(&DAT_146b2cbc0,&PTR_Z_Construct_UPackage__Script_AIModule_146693e80);
  }
  return DAT_146b2cbc0;
}



// FUNCTION 142c2e760 FUN_142c2e760 body=47 status=ok
// SIG undefined FUN_142c2e760(void)

longlong FUN_142c2e760(void)

{
  if (DAT_146b2c9b8 == 0) {
    FUN_141786a30(&DAT_146b2c9b8,&PTR_Z_Construct_UPackage__Script_AIModule_146691320);
  }
  return DAT_146b2c9b8;
}



// FUNCTION 142c2e790 FUN_142c2e790 body=47 status=ok
// SIG undefined FUN_142c2e790(void)

longlong FUN_142c2e790(void)

{
  if (DAT_146b2cbd0 == 0) {
    FUN_141786a30(&DAT_146b2cbd0,&PTR_Z_Construct_UPackage__Script_AIModule_146694000);
  }
  return DAT_146b2cbd0;
}



// FUNCTION 142c2e7c0 FUN_142c2e7c0 body=47 status=ok
// SIG undefined FUN_142c2e7c0(void)

longlong FUN_142c2e7c0(void)

{
  if (DAT_146b2ccb0 == 0) {
    FUN_1417866a0(&DAT_146b2ccb0,&PTR_Z_Construct_UPackage__Script_AIModule_146695790);
  }
  return DAT_146b2ccb0;
}



// FUNCTION 142c2e7f0 FUN_142c2e7f0 body=47 status=ok
// SIG undefined FUN_142c2e7f0(void)

longlong FUN_142c2e7f0(void)

{
  if (DAT_146b2cb20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb20,&PTR_Z_Construct_UPackage__Script_AIModule_1466938f0);
  }
  return DAT_146b2cb20;
}



// FUNCTION 142c2e820 FUN_142c2e820 body=47 status=ok
// SIG undefined FUN_142c2e820(void)

longlong FUN_142c2e820(void)

{
  if (DAT_146b2cb30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb30,&PTR_Z_Construct_UPackage__Script_AIModule_146693970);
  }
  return DAT_146b2cb30;
}



// FUNCTION 142c2e850 FUN_142c2e850 body=47 status=ok
// SIG undefined FUN_142c2e850(void)

longlong FUN_142c2e850(void)

{
  if (DAT_146b2cb40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb40,&PTR_Z_Construct_UPackage__Script_AIModule_1466939f0);
  }
  return DAT_146b2cb40;
}



// FUNCTION 142c2e880 FUN_142c2e880 body=47 status=ok
// SIG undefined FUN_142c2e880(void)

longlong FUN_142c2e880(void)

{
  if (DAT_146b2cb50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cb50,&PTR_Z_Construct_UPackage__Script_AIModule_146693a40);
  }
  return DAT_146b2cb50;
}



// FUNCTION 142c2e8b0 FUN_142c2e8b0 body=47 status=ok
// SIG undefined FUN_142c2e8b0(void)

longlong FUN_142c2e8b0(void)

{
  if (DAT_146b2ccc0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2ccc0,&PTR_Z_Construct_UPackage__Script_AIModule_146695500);
  }
  return DAT_146b2ccc0;
}



// FUNCTION 142c2e8e0 FUN_142c2e8e0 body=47 status=ok
// SIG undefined FUN_142c2e8e0(void)

longlong FUN_142c2e8e0(void)

{
  if (DAT_146b2ccd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2ccd0,&PTR_Z_Construct_UPackage__Script_AIModule_146695740);
  }
  return DAT_146b2ccd0;
}



// FUNCTION 142c2e910 FUN_142c2e910 body=47 status=ok
// SIG undefined FUN_142c2e910(void)

longlong FUN_142c2e910(void)

{
  if (DAT_146b2cbe0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b2cbe0,&PTR_Z_Construct_UPackage__Script_AIModule_146694140);
  }
  return DAT_146b2cbe0;
}



// FUNCTION 142c2e940 FUN_142c2e940 body=128 status=ok
// SIG undefined FUN_142c2e940(void)

void FUN_142c2e940(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bb5330(param_1,local_res10);
  return;
}



// FUNCTION 142c2e9c0 execCreateMoveToProxyObject body=447 status=ok
// SIG undefined execCreateMoveToProxyObject(void)

void UAIBlueprintHelperLibrary::execCreateMoveToProxyObject
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  uVar1 = FUN_142bda270(local_40,local_48,&local_28,local_res20,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2eb80 FUN_142c2eb80 body=128 status=ok
// SIG undefined FUN_142c2eb80(void)

void FUN_142c2eb80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142be3c30(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2ec20 execGetActorsPerception body=250 status=ok
// SIG undefined execGetActorsPerception(void)

void UAIPerceptionComponent::execGetActorsPerception
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  uint local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_10 = local_10 & 0xfffffffe;
  local_18 = 0;
  local_28 = 0;
  lStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142c1f280(param_1,local_res10,puVar2);
  *param_3 = uVar1;
  if (lStack_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c2ed20 FUN_142c2ed20 body=128 status=ok
// SIG undefined FUN_142c2ed20(void)

void FUN_142c2ed20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142be3fc0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2eda0 FUN_142c2eda0 body=128 status=ok
// SIG undefined FUN_142c2eda0(void)

void FUN_142c2eda0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142be4150(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2ee20 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c1f640(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c2ef10 FUN_142c2ef10 body=60 status=ok
// SIG undefined FUN_142c2ef10(void)

void FUN_142c2ef10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142bbcfd0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142c2ef50 FUN_142c2ef50 body=166 status=ok
// SIG undefined FUN_142c2ef50(void)

void FUN_142c2ef50(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  undefined1 local_18 [16];
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x8a0))(param_1,local_18,local_res8);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142c2f000 FUN_142c2f000 body=44 status=ok
// SIG undefined FUN_142c2f000(void)

void FUN_142c2f000(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bbd240();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f030 FUN_142c2f030 body=60 status=ok
// SIG undefined FUN_142c2f030(void)

void FUN_142c2f030(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142bbd5a0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142c2f070 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c1fe40(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c2f160 FUN_142c2f160 body=43 status=ok
// SIG undefined FUN_142c2f160(void)

void FUN_142c2f160(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bbde20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f1b0 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetPerceivedActors(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c2f2a0 FUN_142c2f2a0 body=163 status=ok
// SIG undefined FUN_142c2f2a0(void)

void FUN_142c2f2a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c203f0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c2f350 FUN_142c2f350 body=235 status=ok
// SIG undefined FUN_142c2f350(void)

void FUN_142c2f350(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_78 [112];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_140772210(local_78);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142c20400(local_res18,local_res10,puVar2);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142c2f440 FUN_142c2f440 body=43 status=ok
// SIG undefined FUN_142c2f440(void)

void FUN_142c2f440(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bbfc10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f470 execIsValidAIDirection body=132 status=ok
// SIG undefined execIsValidAIDirection(void)

void UAIBlueprintHelperLibrary::execIsValidAIDirection
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = IsValidAIDirection(&local_18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f500 execIsValidAILocation body=132 status=ok
// SIG undefined execIsValidAILocation(void)

void UAIBlueprintHelperLibrary::execIsValidAILocation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = IsValidAILocation(&local_18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f590 execIsValidAIRotation body=132 status=ok
// SIG undefined execIsValidAIRotation(void)

void UAIBlueprintHelperLibrary::execIsValidAIRotation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = IsValidAIRotation(&local_18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2f640 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_142bc2180(param_1,&local_18);
  return;
}



// FUNCTION 142c2f6d0 FUN_142c2f6d0 body=128 status=ok
// SIG undefined FUN_142c2f6d0(void)

void FUN_142c2f6d0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bc21b0(param_1,local_res10);
  return;
}



// FUNCTION 142c2f750 FUN_142c2f750 body=257 status=ok
// SIG undefined FUN_142c2f750(void)

void FUN_142c2f750(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142be8eb0(local_18[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142c2f860 execMoveToActor body=536 status=ok
// SIG undefined execMoveToActor(void)

void AAIController::execMoveToActor(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  local_48[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bc31b0(param_1,local_48[0],local_54,bVar2,bVar3,bVar4,local_50,local_58 != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c2fa80 execMoveToLocation body=620 status=ok
// SIG undefined execMoveToLocation(void)

void AAIController::execMoveToLocation(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20 [2];
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_res18 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_6c = 0;
  puVar2 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_6c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  bVar5 = local_78 != 0;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  bVar6 = local_74 != 0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bc3340(param_1,puVar2,local_6c,bVar3,bVar4,bVar5,bVar6,local_68,local_70 != 0);
  *local_res18 = uVar1;
  return;
}



// FUNCTION 142c2fcf0 FUN_142c2fcf0 body=196 status=ok
// SIG undefined FUN_142c2fcf0(void)

void FUN_142c2fcf0(longlong *param_1,longlong param_2)

{
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x8d0))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142c2fdc0 execOnMoveCompleted body=185 status=ok
// SIG undefined execOnMoveCompleted(void)

void UAIAsyncTaskBlueprintProxy::execOnMoveCompleted(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0xffffffff;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142beb3c0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142c2fe80 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  OnOwnerEndPlay(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142c2ff40 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c221e0(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142c30000 FUN_142c30000 body=128 status=ok
// SIG undefined FUN_142c30000(void)

void FUN_142c30000(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c23de0(param_1,local_res10);
  return;
}



// FUNCTION 142c30080 FUN_142c30080 body=238 status=ok
// SIG undefined FUN_142c30080(void)

void FUN_142c30080(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142c23e70(local_res20,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c30190 FUN_142c30190 body=128 status=ok
// SIG undefined FUN_142c30190(void)

void FUN_142c30190(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c263c0(param_1,local_res10);
  return;
}



// FUNCTION 142c30210 FUN_142c30210 body=175 status=ok
// SIG undefined FUN_142c30210(void)

void FUN_142c30210(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c26550(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142c302e0 execSetFlipbook body=150 status=ok
// SIG undefined execSetFlipbook(void)

void UPaperFlipbookComponent::execSetFlipbook
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x888))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c30380 execSendAIMessage body=304 status=ok
// SIG undefined execSendAIMessage(void)

void UAIBlueprintHelperLibrary::execSendAIMessage(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bf1b80(local_10,local_res20,local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142c304b0 FUN_142c304b0 body=130 status=ok
// SIG undefined FUN_142c304b0(void)

void FUN_142c304b0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bca960(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142c30540 FUN_142c30540 body=194 status=ok
// SIG undefined FUN_142c30540(void)

void FUN_142c30540(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c27510(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142c30610 FUN_142c30610 body=175 status=ok
// SIG undefined FUN_142c30610(void)

void FUN_142c30610(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bf1fa0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142c306c0 execSimpleMoveToLocation body=185 status=ok
// SIG undefined execSimpleMoveToLocation(void)

void UNavigationSystemV1::execSimpleMoveToLocation(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bf28a0(local_res10[0],puVar1);
  return;
}



// FUNCTION 142c30780 execSpawnAIFromClass body=459 status=ok
// SIG undefined execSpawnAIFromClass(void)

void UAIBlueprintHelperLibrary::execSpawnAIFromClass
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_60;
  local_30 = local_58;
  local_20 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_50;
  uVar1 = FUN_142bf3130(local_68,local_res20,local_res18,&local_28,&local_38,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c30950 FUN_142c30950 body=128 status=ok
// SIG undefined FUN_142c30950(void)

void FUN_142c30950(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bccc80(param_1,local_res10);
  return;
}



// FUNCTION 142c309d0 FUN_142c309d0 body=257 status=ok
// SIG undefined FUN_142c309d0(void)

void FUN_142c309d0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142bf6bf0(local_18[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142c30b00 FUN_142c30b00 body=128 status=ok
// SIG undefined FUN_142c30b00(void)

void FUN_142c30b00(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c28990(param_1,local_res10);
  return;
}



// FUNCTION 142c30b80 execUseBlackboard body=205 status=ok
// SIG undefined execUseBlackboard(void)

void AAIController::execUseBlackboard(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar2 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142bce650(param_1,local_res18[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142c30c50 FUN_142c30c50 body=47 status=ok
// SIG undefined FUN_142c30c50(void)

longlong FUN_142c30c50(void)

{
  if (DAT_146b2ce58 == 0) {
    FUN_141786440(&DAT_146b2ce58,&PTR_FUN_145814a70);
  }
  return DAT_146b2ce58;
}



// FUNCTION 142c30c80 FUN_142c30c80 body=47 status=ok
// SIG undefined FUN_142c30c80(void)

longlong FUN_142c30c80(void)

{
  if (DAT_146b2ce20 == 0) {
    FUN_141786a30(&DAT_146b2ce20,&PTR_FUN_146695b30);
  }
  return DAT_146b2ce20;
}



// FUNCTION 142c30cb0 FUN_142c30cb0 body=47 status=ok
// SIG undefined FUN_142c30cb0(void)

longlong FUN_142c30cb0(void)

{
  if (DAT_146b2ce28 == 0) {
    FUN_141786a30(&DAT_146b2ce28,&PTR_FUN_146695bf0);
  }
  return DAT_146b2ce28;
}



// FUNCTION 142c30ce0 FUN_142c30ce0 body=47 status=ok
// SIG undefined FUN_142c30ce0(void)

longlong FUN_142c30ce0(void)

{
  if (DAT_146b2ce30 == 0) {
    FUN_141786a30(&DAT_146b2ce30,&PTR_FUN_146695c70);
  }
  return DAT_146b2ce30;
}



// FUNCTION 142c30d10 FUN_142c30d10 body=47 status=ok
// SIG undefined FUN_142c30d10(void)

longlong FUN_142c30d10(void)

{
  if (DAT_146b2ce38 == 0) {
    FUN_141786a30(&DAT_146b2ce38,&PTR_FUN_146695d30);
  }
  return DAT_146b2ce38;
}



// FUNCTION 142c30d40 FUN_142c30d40 body=47 status=ok
// SIG undefined FUN_142c30d40(void)

longlong FUN_142c30d40(void)

{
  if (DAT_146b2ce40 == 0) {
    FUN_141786a30(&DAT_146b2ce40,&PTR_FUN_146695df0);
  }
  return DAT_146b2ce40;
}



// FUNCTION 142c30d70 FUN_142c30d70 body=47 status=ok
// SIG undefined FUN_142c30d70(void)

longlong FUN_142c30d70(void)

{
  if (DAT_146b2ce48 == 0) {
    FUN_141786a30(&DAT_146b2ce48,&PTR_FUN_146695eb0);
  }
  return DAT_146b2ce48;
}



// FUNCTION 142c30da0 FUN_142c30da0 body=47 status=ok
// SIG undefined FUN_142c30da0(void)

longlong FUN_142c30da0(void)

{
  if (DAT_146b2ce50 == 0) {
    FUN_141786a30(&DAT_146b2ce50,&PTR_FUN_146695fa0);
  }
  return DAT_146b2ce50;
}



// FUNCTION 142c30de0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_SpawnActor::GetPrivateStaticClass(void)

{
  if (DAT_146b2ce88 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISense_Damage",&DAT_146b2ce88,FUN_142c339c0,0xa8,0x10000004
                  ,0,L"Engine",&LAB_142c32c30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_146b2ce88;
}



// FUNCTION 142c30e90 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UBehaviorTree::StaticClass(void)

{
  if (DAT_146b2d100 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"BehaviorTree",&DAT_146b2d100,FUN_140447710,0x60,0x10000000,0
                  ,L"Engine",&LAB_142c32d70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2d100;
}



// FUNCTION 142c30f30 FUN_142c30f30 body=53 status=ok
// SIG undefined FUN_142c30f30(void)

void FUN_142c30f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145819d10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c30f70 FUN_142c30f70 body=47 status=ok
// SIG undefined FUN_142c30f70(void)

longlong FUN_142c30f70(void)

{
  if (DAT_146b2ce80 == 0) {
    FUN_141786440(&DAT_146b2ce80,&PTR_GetPrivateStaticClass_145815360);
  }
  return DAT_146b2ce80;
}



// FUNCTION 142c30fa0 FUN_142c30fa0 body=47 status=ok
// SIG undefined FUN_142c30fa0(void)

longlong FUN_142c30fa0(void)

{
  if (DAT_146b2ce78 == 0) {
    FUN_141786a30(&DAT_146b2ce78,&PTR_FUN_146696460);
  }
  return DAT_146b2ce78;
}



// FUNCTION 142c30fe0 FUN_142c30fe0 body=53 status=ok
// SIG undefined FUN_142c30fe0(void)

void FUN_142c30fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145819988;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c31030 FUN_142c31030 body=47 status=ok
// SIG undefined FUN_142c31030(void)

longlong FUN_142c31030(void)

{
  if (DAT_146b2d120 == 0) {
    FUN_141786440(&DAT_146b2d120,&PTR_GetPrivateStaticClass_1458154a0);
  }
  return DAT_146b2d120;
}



// FUNCTION 142c31060 FUN_142c31060 body=47 status=ok
// SIG undefined FUN_142c31060(void)

longlong FUN_142c31060(void)

{
  if (DAT_146b2d108 == 0) {
    FUN_141786a30(&DAT_146b2d108,&PTR_FUN_146698800);
  }
  return DAT_146b2d108;
}



// FUNCTION 142c31090 FUN_142c31090 body=47 status=ok
// SIG undefined FUN_142c31090(void)

longlong FUN_142c31090(void)

{
  if (DAT_146b2d110 == 0) {
    FUN_141786a30(&DAT_146b2d110,&PTR_FUN_1466988c0);
  }
  return DAT_146b2d110;
}



// FUNCTION 142c310c0 FUN_142c310c0 body=47 status=ok
// SIG undefined FUN_142c310c0(void)

longlong FUN_142c310c0(void)

{
  if (DAT_146b2d118 == 0) {
    FUN_141786a30(&DAT_146b2d118,&PTR_FUN_146698980);
  }
  return DAT_146b2d118;
}



// FUNCTION 142c310f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_SpawnActor::GetPrivateStaticClass(void)

{
  if (DAT_146b2cf20 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISense_Team",&DAT_146b2cf20,FUN_140447710,0xa8,0x10000004,0
                  ,L"Engine",&LAB_142c32cb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_146b2cf20;
}



// FUNCTION 142c311c0 FUN_142c311c0 body=47 status=ok
// SIG undefined FUN_142c311c0(void)

longlong FUN_142c311c0(void)

{
  if (DAT_146b2d028 == 0) {
    FUN_141786440(&DAT_146b2d028,&PTR_FUN_1458157d0);
  }
  return DAT_146b2d028;
}



// FUNCTION 142c311f0 FUN_142c311f0 body=47 status=ok
// SIG undefined FUN_142c311f0(void)

longlong FUN_142c311f0(void)

{
  if (DAT_146b2d018 == 0) {
    FUN_141786a30(&DAT_146b2d018,&PTR_FUN_146697880);
  }
  return DAT_146b2d018;
}



// FUNCTION 142c31220 FUN_142c31220 body=47 status=ok
// SIG undefined FUN_142c31220(void)

longlong FUN_142c31220(void)

{
  if (DAT_146b2d020 == 0) {
    FUN_141786a30(&DAT_146b2d020,&PTR_FUN_1466978c0);
  }
  return DAT_146b2d020;
}



// FUNCTION 142c31250 FUN_142c31250 body=162 status=ok
// SIG undefined FUN_142c31250(void)

longlong FUN_142c31250(void)

{
  if (DAT_146b2ceb0 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISense_Hearing",&DAT_146b2ceb0,FUN_142c339f0,0x100,
                  0x10000004,0,L"Game",&LAB_142c32c50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_146b2ceb0;
}



// FUNCTION 142c31300 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBehaviorTreeManager::GetPrivateStaticClass(void)

{
  if (DAT_146b2d148 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"BehaviorTreeManager",&DAT_146b2d148,FUN_140447710,0x50,
                  0x1000000c,0,L"Engine",&LAB_142c32db0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2d148;
}



// FUNCTION 142c313b0 FUN_142c313b0 body=53 status=ok
// SIG undefined FUN_142c313b0(void)

void FUN_142c313b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145819e28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c31400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_SpawnActor::GetPrivateStaticClass(void)

{
  if (DAT_146b2cf40 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISense_Touch",&DAT_146b2cf40,FUN_140447710,0xa8,0x10000004,
                  0,L"Engine",&LAB_142c32cd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_146b2cf40;
}



// FUNCTION 142c314b0 FUN_142c314b0 body=53 status=ok
// SIG undefined FUN_142c314b0(void)

void FUN_142c314b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145819f40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c31500 FUN_142c31500 body=47 status=ok
// SIG undefined FUN_142c31500(void)

longlong FUN_142c31500(void)

{
  if (DAT_146b2d040 == 0) {
    FUN_141786440(&DAT_146b2d040,&PTR_LAB_1458164c0);
  }
  return DAT_146b2d040;
}



// FUNCTION 142c31550 FUN_142c31550 body=53 status=ok
// SIG undefined FUN_142c31550(void)

void FUN_142c31550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14581ac30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c31590 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAITask_LockLogic::StaticClass(void)

{
  if (DAT_146b2d058 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AITask_LockLogic",&DAT_146b2d058,FUN_140447710,0x70,
                  0x10000004,0,L"Game",&LAB_142c32d10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fea0,&LAB_140447700,0);
  }
  return DAT_146b2d058;
}



// FUNCTION 142c31640 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAITask_RunEQS::GetPrivateStaticClass(void)

{
  if (DAT_146b2d090 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AITask_RunEQS",&DAT_146b2d090,
                  StaticRegisterNativesUAITask_RunEQS,0xe8,0x10000004,0,L"Game",&LAB_142c32d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fea0,&LAB_140447700,0);
  }
  return DAT_146b2d090;
}



// FUNCTION 142c31710 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAISenseBlueprintListener::StaticClass(void)

{
  if (DAT_146b2cf50 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISenseBlueprintListener",&DAT_146b2cf50,FUN_140447710,0xe0,
                  0x10000000,0,L"Engine",InternalConstructor<UAISenseBlueprintListener>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_14289f790,
                  UUserDefinedStruct::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cf50;
}



// FUNCTION 142c317d0 FUN_142c317d0 body=47 status=ok
// SIG undefined FUN_142c317d0(void)

longlong FUN_142c317d0(void)

{
  if (DAT_146b2d088 == 0) {
    FUN_141786440(&DAT_146b2d088,&PTR_GetPrivateStaticClass_145816a00);
  }
  return DAT_146b2d088;
}



// FUNCTION 142c31800 FUN_142c31800 body=47 status=ok
// SIG undefined FUN_142c31800(void)

longlong FUN_142c31800(void)

{
  if (DAT_146b2d080 == 0) {
    FUN_141786a30(&DAT_146b2d080,&PTR_FUN_146698420);
  }
  return DAT_146b2d080;
}



// FUNCTION 142c31830 FUN_142c31830 body=47 status=ok
// SIG undefined FUN_142c31830(void)

longlong FUN_142c31830(void)

{
  if (DAT_146b2cf58 == 0) {
    FUN_141786440(&DAT_146b2cf58,&PTR_StaticClass_145816a90);
  }
  return DAT_146b2cf58;
}



// FUNCTION 142c31880 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAISenseConfig_Blueprint::StaticClass(void)

{
  if (DAT_146b2cf70 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISenseConfig_Blueprint",&DAT_146b2cf70,FUN_140447710,0x50,
                  0x10000005,0,L"Game",&LAB_142c32aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISenseConfig::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cf70;
}



// FUNCTION 142c31940 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAISenseConfig_Damage::StaticClass(void)

{
  if (DAT_146b2cf80 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISenseConfig_Damage",&DAT_146b2cf80,FUN_140447710,0x50,
                  0x10000004,0,L"Game",&LAB_142c32ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISenseConfig::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cf80;
}



// FUNCTION 142c319f0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UBehaviorTreeTypes::StaticClass(void)

{
  if (DAT_146b2d178 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"BehaviorTreeTypes",&DAT_146b2d178,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2d178;
}



// FUNCTION 142c31a90 FUN_142c31a90 body=53 status=ok
// SIG undefined FUN_142c31a90(void)

void FUN_142c31a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14581a950;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142c31ae0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAISenseConfig_Hearing::GetPrivateStaticClass(void)

{
  if (DAT_146b2cf90 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AISenseConfig_Hearing",&DAT_146b2cf90,FUN_140447710,0x60,
                  0x10000004,0,L"Game",&LAB_142c32ae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISenseConfig::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cf90;
}



// FUNCTION 142c31b90 FUN_142c31b90 body=47 status=ok
// SIG undefined FUN_142c31b90(void)

longlong FUN_142c31b90(void)

{
  if (DAT_146b2cea8 == 0) {
    FUN_141786440(&DAT_146b2cea8,&PTR_FUN_145817ed0);
  }
  return DAT_146b2cea8;
}



// FUNCTION 142c31bc0 FUN_142c31bc0 body=47 status=ok
// SIG undefined FUN_142c31bc0(void)

longlong FUN_142c31bc0(void)

{
  if (DAT_146b2cea0 == 0) {
    FUN_141786a30(&DAT_146b2cea0,&PTR_FUN_146696830);
  }
  return DAT_146b2cea0;
}



// FUNCTION 142c31bf0 FUN_142c31bf0 body=53 status=ok
// SIG undefined FUN_142c31bf0(void)

void FUN_142c31bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14581aa68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142c31c30 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAIResourceInterface::StaticClass(void)

{
  if (DAT_146b2cdd8 == 0) {
    FUN_14171ccd0(L"/Script/AIModule",L"AIResourceInterface",&DAT_146b2cdd8,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2cdd8;
}


