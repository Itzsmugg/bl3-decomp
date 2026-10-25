// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142bcc380 FUN_142bcc380 body=1111 status=ok
// SIG undefined FUN_142bcc380(void)

void FUN_142bcc380(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  int iStack_4c;
  ulonglong uVar12;
  
  FUN_142357eb0();
  uVar15 = 0;
  if ((param_1[0x2f] == 0) && (uVar14 = param_1[0x23], uVar14 != 0)) {
    lVar8 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar9 = uVar14;
    if (!bVar5) {
      uVar9 = uVar15;
    }
    param_1[0x2f] = uVar9;
    if (uVar9 == 0) {
      lVar8 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        param_1[0x2f] = *(longlong *)(uVar14 + 0x488);
      }
    }
  }
  iVar7 = (int)param_1[0x33];
  if (1 < iVar7) {
    AlgoImpl::
    IntroSortInternal<FPawnActionEvent,FIdentityFunctor,TDereferenceWrapper<FPawnActionEvent,_anonymous_namespace_::FPawnActionEvenSort>_>
              (param_1[0x32],(longlong)iVar7,local_res8[0],local_res8);
    iVar7 = (int)param_1[0x33];
  }
  if (0 < iVar7) {
    lVar8 = 4;
    uVar14 = uVar15;
    uVar9 = uVar15;
    do {
      lVar1 = param_1[0x32];
      lVar2 = *(longlong *)(uVar14 + lVar1);
      if (lVar2 != 0) {
        iVar7 = *(int *)(uVar14 + 8 + lVar1);
        if (iVar7 == 1) {
LAB_142bcc5e3:
          iStack_4c = *(int *)(uVar14 + 0xc + lVar1);
        }
        else {
          if (iVar7 != 2) {
            if (2 < iVar7) {
              if (iVar7 < 5) goto LAB_142bcc5e3;
              if (iVar7 == 5) {
                lVar13 = (longlong)*(int *)(uVar14 + 0xc + lVar1);
                lVar1 = param_1[0x30];
                plVar10 = *(longlong **)(lVar1 + lVar13 * 8);
                if (plVar10 != (longlong *)0x0) {
                  if (((*(byte *)(plVar10 + 0x12) & 1) == 0) &&
                     (*(int *)((longlong)plVar10 + 0x84) != 0)) {
                    (**(code **)(*plVar10 + 0x2a0))();
                    plVar10 = *(longlong **)(lVar1 + lVar13 * 8);
                  }
                  plVar10[5] = lVar2;
                  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar1 + lVar13 * 8);
                }
                *(longlong *)(lVar1 + lVar13 * 8) = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x30);
                *(undefined4 *)(lVar2 + 0x8c) = 0;
                uVar12 = uVar15;
                for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
                  uVar11 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar11;
                  *(uint *)(lVar2 + 0x8c) = uVar11;
                }
              }
            }
            goto LAB_142bcc5fb;
          }
          plVar10 = *(longlong **)(uVar14 + lVar1);
          uVar4 = ((undefined8 *)(uVar14 + lVar1))[1];
          if (*(int *)((longlong)plVar10 + 0x84) < 2) {
            *(undefined4 *)((longlong)plVar10 + 0x84) = 2;
          }
          if (plVar10[5] != 0) {
            FUN_142bb2ff0(plVar10[5],0);
          }
          iVar7 = (**(code **)(*plVar10 + 0x2c0))(plVar10,0);
          if (iVar7 != 4) {
            iVar7 = 4;
          }
          if ((*(int *)((longlong)plVar10 + 0x84) < iVar7) &&
             (*(int *)((longlong)plVar10 + 0x84) = iVar7, iVar7 == 4)) {
            FUN_142bca010(plVar10,3);
          }
          iStack_4c = (int)((ulonglong)uVar4 >> 0x20);
        }
        FUN_142bc50f0(param_1[0x30] + (longlong)iStack_4c * 8);
      }
LAB_142bcc5fb:
      uVar11 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar11;
      uVar14 = uVar14 + 0x18;
    } while ((int)uVar11 < (int)param_1[0x33]);
    *(undefined4 *)(param_1 + 0x33) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x19c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x32,0);
    }
    plVar10 = (longlong *)(param_1[0x30] + 0x20);
    do {
      plVar3 = (longlong *)*plVar10;
      if (plVar3 != (longlong *)0x0) break;
      plVar10 = plVar10 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    plVar10 = (longlong *)param_1[0x34];
    if (plVar10 == plVar3) {
      if (plVar10 == (longlong *)0x0) {
        FUN_142bcd980(param_1);
      }
      else if (1 < (int)plVar10[0x11]) {
        FUN_142bb3430();
      }
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        if ((((int)plVar10[0x11] == 1) && ((*(byte *)(plVar10 + 0x12) & 1) == 0)) &&
           (*(int *)((longlong)plVar10 + 0x84) == 1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          (**(code **)(*plVar10 + 0x2a0))(plVar10,plVar3);
        }
      }
      param_1[0x34] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        if ((*(int *)((longlong)plVar3 + 0x84) == 0) || ((*(byte *)(plVar3 + 0x12) & 1) == 0)) {
          cVar6 = (**(code **)(*plVar3 + 0x298))(plVar3);
        }
        else {
          cVar6 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
        }
        if (cVar6 == '\0') {
          *(uint *)(plVar3 + 0x12) = *(uint *)(plVar3 + 0x12) | 4;
          if ((int)plVar3[0x11] != 3) {
            *(undefined4 *)(plVar3 + 0x11) = 3;
          }
          FUN_142bca010(plVar3,1);
          param_1[0x34] = 0;
          goto LAB_142bcc752;
        }
      }
      if ((param_1[0x34] == 0) || (*(int *)(param_1[0x34] + 0x60) != 1)) {
        FUN_142bcd980(param_1);
      }
    }
  }
LAB_142bcc752:
  plVar10 = (longlong *)param_1[0x34];
  if (plVar10 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar10[5];
    if (plVar3 == (longlong *)0x0) {
      if (((*(uint *)(plVar10 + 0x12) & 8) == 0) || ((*(uint *)(plVar10 + 0x12) & 1) != 0))
      goto LAB_142bcc796;
      lVar8 = *plVar10;
    }
    else {
      lVar8 = *plVar3;
      plVar10 = plVar3;
    }
    (**(code **)(lVar8 + 0x290))(plVar10,param_2);
  }
LAB_142bcc796:
  if (((int)param_1[0x33] == 0) &&
     ((param_1[0x34] == 0 || ((*(uint *)(param_1[0x34] + 0x90) >> 3 & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000142bcc7ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142bcc7e0 FUN_142bcc7e0 body=8 status=ok
// SIG undefined FUN_142bcc7e0(void)

void FUN_142bcc7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142bc9f50(param_1,param_3);
  return;
}



// FUNCTION 142bcc7f0 FUN_142bcc7f0 body=28 status=ok
// SIG undefined FUN_142bcc7f0(void)

void FUN_142bcc7f0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 2;
  (**(code **)(*param_1 + 0x288))(param_1,local_res8);
  return;
}



// FUNCTION 142bcc810 FUN_142bcc810 body=690 status=ok
// SIG undefined FUN_142bcc810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bcc810(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_1[0x18] != 0) {
    if (((param_1[7] != 0) && (lVar4 = *(longlong *)(param_1[7] + 0x178), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x490), lVar4 != 0)) {
      lVar3 = FUN_142c2de20();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x458) + 0x40))(), cVar2 != '\0'))
      {
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar4 == 0) {
          return;
        }
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar4 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
        }
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          plVar5[2] = (longlong)FUN_142bcc810;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar5[4] = lVar4;
          *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_a0 = 0xbf800000;
        local_a8 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x1c,&local_88,0x3e800000);
        if (local_28 != 0) {
          plVar7 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar7 = local_38;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 == 0) {
          return;
        }
        FMemory::Free(lVar4);
        return;
      }
    }
    lVar4 = FWeakObjectPtr::Get(param_1[0x18] + 0x9c);
    if (lVar4 != 0) {
      local_98 = param_1[0x18];
      local_90 = param_1[0x19];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_142b96b80(lVar4,&local_98,1);
    }
  }
  return;
}



// FUNCTION 142bccad0 FUN_142bccad0 body=423 status=ok
// SIG undefined FUN_142bccad0(void)

void FUN_142bccad0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  FUN_1423e2140();
  if (*(longlong **)(param_1 + 0x548) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x548) + 0x400))();
  }
  if (((*(byte *)(param_1 + 0x540) & 1) != 0) &&
     (*(longlong **)(param_1 + 0x550) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x550) + 0x410))();
  }
  if ((*(longlong *)(param_1 + 0x570) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x570) + 0x118) == lVar1)) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AAIController::OnGameplayTaskResourcesClaimed",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x570);
    plVar12 = (longlong *)(lVar2 + 0x1e0);
    lVar3 = *plVar12;
    iVar10 = *(int *)(lVar2 + 0x1e8);
    for (lVar11 = lVar3; lVar11 != (longlong)iVar10 * 0x10 + lVar3; lVar11 = lVar11 + 0x10) {
      if ((*(longlong *)(lVar11 + 8) == local_res8) &&
         (lVar7 = FWeakObjectPtr::GetEvenIfUnreachable(lVar11), param_1 == lVar7)) {
        iVar10 = (int)(lVar11 - lVar3 >> 4);
        if (iVar10 != -1) {
          iVar9 = *(int *)(lVar2 + 0x1e8);
          iVar8 = (iVar9 - iVar10) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x10 + *plVar12),
                       (void *)((longlong)(iVar9 - iVar8) * 0x10 + *plVar12),(longlong)iVar8 << 4);
            iVar9 = *(int *)(lVar2 + 0x1e8);
          }
          *(int *)(lVar2 + 0x1e8) = iVar9 + -1;
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    *(undefined8 *)(param_1 + 0x570) = 0;
  }
  FUN_142c2e010(param_1,lVar1);
  return;
}



// FUNCTION 142bccc80 FUN_142bccc80 body=221 status=ok
// SIG undefined FUN_142bccc80(void)

void FUN_142bccc80(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x570) != 0) {
    if (param_2 != (longlong *)0x0) {
      plVar2 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
      plVar4 = param_2;
      do {
        plVar5 = param_2;
        if (plVar4 == plVar2) goto LAB_142bcccc0;
        plVar4 = (longlong *)plVar4[6];
      } while (plVar4 != (longlong *)0x0);
    }
    plVar5 = (longlong *)0x0;
LAB_142bcccc0:
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    if (((*(byte *)(lVar3 + 0x30) & 1) == 0) && (*(int *)(lVar3 + 0x28) == -1)) {
      bVar1 = *(byte *)(lVar3 + 0x2c);
    }
    else {
      bVar1 = *(byte *)(lVar3 + 0x28);
    }
    if ((*(ushort *)(param_1 + 0x528) >> (bVar1 & 0x1f) & 1) != 0) {
      *(ushort *)(param_1 + 0x528) = *(ushort *)(param_1 + 0x528) & ~(ushort)(1 << (bVar1 & 0x1f));
      if (param_2 != (longlong *)0x0) {
        plVar2 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
        plVar4 = param_2;
        do {
          if (plVar4 == plVar2) goto LAB_142bccd35;
          plVar4 = (longlong *)plVar4[6];
        } while (plVar4 != (longlong *)0x0);
      }
      param_2 = (longlong *)0x0;
LAB_142bccd35:
      lVar3 = FUN_142b78fe0(*(undefined8 *)(param_1 + 0x570),param_2[3]);
      if (lVar3 != 0) {
        UGameplayTask::EndTask(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 142bccd60 FUN_142bccd60 body=282 status=ok
// SIG undefined FUN_142bccd60(void)

void FUN_142bccd60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142bbcae0(lVar1);
  if ((lVar1 != 0) && (lVar3 = (longlong)*(int *)(lVar1 + 0x48), *(int *)(lVar1 + 0x48) != 0)) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x40) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar3) {
        plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x40) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar2 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar4 < lVar3);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar3);
    *(int *)(lVar1 + 0x48) = iVar7;
  }
  FUN_142bc7f90(param_1);
  FUN_142359510(param_1);
  return;
}



// FUNCTION 142bcce80 FUN_142bcce80 body=164 status=ok
// SIG undefined FUN_142bcce80(void)

void FUN_142bcce80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x180) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) != 0)) &&
      ((lVar2 = *(longlong *)(param_1 + 0x120), lVar2 != 0 || (lVar2 = FUN_1423407b0(), lVar2 != 0))
      )) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
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
      UAISystem::UnregisterBlackboardComponent(lVar2,*(undefined8 *)(param_1 + 0x180),param_1);
    }
  }
  FUN_142bba510(param_1);
  FUN_142359510(param_1);
  return;
}



// FUNCTION 142bccf30 FUN_142bccf30 body=252 status=ok
// SIG undefined FUN_142bccf30(void)

void FUN_142bccf30(longlong param_1,ushort *param_2,ushort *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_48 [2];
  ushort local_38;
  undefined1 local_36;
  byte local_35;
  
  uVar6 = 0;
  uVar1 = uVar6;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    do {
      lVar2 = (longlong)(int)uVar1 * 0x60 + *(longlong *)(param_1 + 0x1d8);
      uVar3 = uVar6;
      uVar5 = uVar6;
      if (0 < *(int *)(lVar2 + 0x20)) {
        do {
          local_48[0] = *(longlong *)(uVar3 + *(longlong *)(lVar2 + 0x18));
          local_38 = (ushort)uVar1;
          bVar7 = *param_2 < local_38;
          if (*param_2 == local_38) {
            bVar7 = param_2[1] < *(ushort *)(local_48[0] + 0x50);
          }
          if (bVar7) {
            bVar7 = local_38 < *param_3;
            if (local_38 == *param_3) {
              bVar7 = *(ushort *)(local_48[0] + 0x50) < param_3[1];
            }
            if (bVar7) {
              local_35 = local_35 & 0xfe;
              local_48[1] = 0;
              local_36 = 2;
              FUN_142bb3e30(param_1 + 0x208,local_48);
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar3 = uVar3 + 8;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < *(int *)(lVar2 + 0x20));
      }
      uVar4 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x1e0));
  }
  return;
}



// FUNCTION 142bcd030 FUN_142bcd030 body=228 status=ok
// SIG undefined FUN_142bcd030(void)

void FUN_142bcd030(longlong param_1,ushort *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_38 [2];
  ushort local_28;
  undefined1 local_26;
  byte local_25;
  
  uVar6 = 0;
  uVar1 = uVar6;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    do {
      lVar2 = (longlong)(int)uVar1 * 0x60 + *(longlong *)(param_1 + 0x1d8);
      uVar3 = uVar6;
      uVar5 = uVar6;
      if (0 < *(int *)(lVar2 + 0x20)) {
        do {
          local_38[0] = *(longlong *)(uVar3 + *(longlong *)(lVar2 + 0x18));
          local_28 = (ushort)uVar1;
          bVar7 = *param_2 < local_28;
          if (*param_2 == local_28) {
            bVar7 = param_2[1] < *(ushort *)(local_38[0] + 0x50);
          }
          if (bVar7) {
            local_25 = local_25 & 0xfe;
            local_38[1] = 0;
            local_26 = 2;
            FUN_142bb3e30(param_1 + 0x208,local_38);
          }
          uVar4 = (int)uVar5 + 1;
          uVar3 = uVar3 + 8;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < *(int *)(lVar2 + 0x20));
      }
      uVar4 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x1e0));
  }
  return;
}



// FUNCTION 142bcd120 UnregisterBlackboardComponent body=150 status=ok
// SIG undefined UnregisterBlackboardComponent(void)

void UAISystem::UnregisterBlackboardComponent(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FWeakObjectPtr::operator=(local_res8,param_3);
  FWeakObjectPtr::operator=(local_res10,param_2);
  TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
  ::FindPair(param_1 + 0xd0,local_res10,local_res8);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    UnregisterBlackboardComponent(param_1,*(longlong *)(param_2 + 0x30),param_3);
  }
  FWeakObjectPtr::operator=(local_res8,param_3);
  FWeakObjectPtr::operator=(local_res10,param_2);
  TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
  ::RemoveSingle(param_1 + 0xd0,local_res10,local_res8);
  return;
}



// FUNCTION 142bcd1c0 FUN_142bcd1c0 body=64 status=ok
// SIG undefined FUN_142bcd1c0(void)

void FUN_142bcd1c0(longlong param_1,longlong param_2)

{
  undefined2 local_res10;
  undefined2 local_res12;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1e0) != 0)) {
    local_res12 = *(undefined2 *)(param_2 + 0x50);
    local_res10 = FUN_142bbb940();
    FUN_142bc7e00(param_1 + 0x280,&local_res10);
  }
  return;
}



// FUNCTION 142bcd200 FUN_142bcd200 body=770 status=ok
// SIG undefined FUN_142bcd200(void)

void FUN_142bcd200(longlong param_1,byte param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auVar5 [12];
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar12;
  undefined1 auVar13 [16];
  undefined1 local_res8 [8];
  uint local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  undefined1 local_78 [16];
  int local_68;
  longlong *plStack_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong uVar11;
  
  plVar1 = (longlong *)(param_1 + 0x1b8);
  uStack_d0 = CONCAT31(uStack_d0._1_3_,param_2);
  iStack_cc = -1;
  iStack_c8 = -1;
  TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec),0);
  uVar11 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x1f8);
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar10 = param_1 + 0x1f0;
    }
    iStack_c8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (ulonglong)param_2) *
                                  4);
    iStack_cc = iStack_c8;
    if (iStack_c8 != -1) {
      do {
        iStack_c8 = *(int *)((longlong)iStack_cc * 0x20 + 0x18 + *plVar1);
        if (*(byte *)((longlong)iStack_cc * 0x20 + *plVar1) == param_2) break;
        iStack_cc = iStack_c8;
      } while (iStack_c8 != -1);
    }
  }
  local_78._8_4_ = uStack_d0;
  local_78._0_8_ = plVar1;
  local_78._12_4_ = iStack_cc;
  auVar13 = local_78 >> 0x40;
  plStack_60 = plVar1;
  local_68 = iStack_c8;
  do {
    if (iStack_cc == -1) {
      return;
    }
    lVar10 = (longlong)iStack_cc * 0x20 + *plVar1;
    uVar8 = uVar11;
    if ((*(int *)(lVar10 + 0x10) != 0) &&
       (plVar4 = *(longlong **)(lVar10 + 8), plVar4 != (longlong *)0x0)) {
      puVar7 = (ulonglong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      uVar8 = *puVar7;
    }
    if (uVar8 == param_3) {
      plVar4 = (longlong *)(param_1 + 0x208);
      local_d8 = 0;
      iVar2 = *(int *)(param_1 + 0x230);
      local_a8 = (uint *)(param_1 + 0x218);
      uStack_d4 = 1;
      iStack_c4 = 0;
      uStack_c0 = (ulonglong)plVar1 & 0xffffffff00000000;
      if (iVar2 == 0) goto LAB_142bcd411;
      puVar12 = *(uint **)(param_1 + 0x228);
      if (*(uint **)(param_1 + 0x228) == (uint *)0x0) {
        puVar12 = local_a8;
      }
      uVar3 = *puVar12;
      uVar8 = uVar11;
      break;
    }
    if (iStack_c8 == -1) {
      return;
    }
    iStack_cc = iStack_c8;
    do {
      iStack_c8 = *(int *)((longlong)iStack_cc * 0x20 + 0x18 + *plVar1);
      if (*(byte *)((longlong)iStack_cc * 0x20 + *plVar1) == param_2) break;
      iStack_cc = iStack_c8;
    } while (iStack_c8 != -1);
  } while( true );
joined_r0x000142bcd3b9:
  if (uVar3 != 0) goto LAB_142bcd3e4;
  iVar6 = (int)uVar8;
  uVar9 = (int)uVar11 + 0x20;
  uVar11 = (ulonglong)uVar9;
  local_d8 = iVar6 + 1;
  uVar8 = (ulonglong)local_d8;
  uStack_c0._4_4_ = (undefined4)(uStack_c0 >> 0x20);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
  if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142bcd40d;
  uVar3 = puVar12[(longlong)iVar6 + 1];
  goto joined_r0x000142bcd3b9;
LAB_142bcd3e4:
  uStack_d4 = -uVar3 & uVar3;
  iVar6 = 0x1f;
  if (uStack_d4 != 0) {
    for (; uStack_d4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (uStack_d4 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f - iVar6;
  }
  iStack_c4 = (uVar9 - iVar6) + 0x1f;
  if (iVar2 < iStack_c4) {
LAB_142bcd40d:
    iStack_c4 = iVar2;
  }
LAB_142bcd411:
  uStack_b0 = local_d8;
  uStack_ac = uStack_d4;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_c4;
  uStack_38 = (undefined4)uStack_c0;
  uStack_34 = uStack_c0._4_4_;
  local_80 = 0;
  uStack_a0 = 0xffffffff;
  iStack_9c = iStack_c4;
  local_30._0_4_ = SUB84(plVar4,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  auVar5._4_8_ = auVar13._8_8_;
  auVar5._0_4_ = iStack_c4;
  auVar13._0_8_ = auVar5._0_8_ << 0x20;
  auVar13._8_4_ = (undefined4)uStack_c0;
  auVar13._12_4_ = uStack_c0._4_4_;
  local_98._8_4_ = (undefined4)local_30;
  local_98._0_8_ = auVar13._8_8_;
  local_98._12_4_ = local_30._4_4_;
  local_88 = plVar4;
  local_58 = plVar4;
  puStack_48 = local_a8;
  local_30 = plVar4;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  if (iStack_c4 < *(int *)(param_1 + 0x230)) {
    do {
      if (*(ulonglong *)(*plVar4 + 8 + (longlong)iStack_9c * 0x18) == param_3) {
        TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
        ::Remove(local_98._8_8_,iStack_9c);
        goto LAB_142bcd4b8;
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if ((char)local_80 != '\0') {
LAB_142bcd4b8:
      if (local_80._1_1_ != '\0') {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
      }
    }
  }
  FUN_142bc7d50(plStack_60,iStack_cc);
  return;
}



// FUNCTION 142bcd510 FUN_142bcd510 body=935 status=ok
// SIG undefined FUN_142bcd510(void)

void FUN_142bcd510(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 local_res18 [8];
  int local_118;
  uint uStack_114;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f0;
  uint uStack_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *puStack_88;
  undefined1 auStack_80 [16];
  undefined1 local_50 [16];
  
  plVar2 = (longlong *)(param_1 + 0x208);
  local_108 = -1;
  iStack_104 = -1;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar2,*(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c));
  if (*(int *)(param_1 + 0x250) != 0) {
    iVar12 = (int)(param_2 >> 4);
    uVar10 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar7 = -(uVar10 + iVar12) ^ uVar10 >> 0xd;
    uVar13 = (iVar12 - uVar10) - uVar7 ^ uVar7 >> 0xc;
    uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
    uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
    uVar13 = (uVar13 - uVar10) - uVar7 ^ uVar7 >> 3;
    uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 10;
    lVar9 = *(longlong *)(param_1 + 0x248);
    if (*(longlong *)(param_1 + 0x248) == 0) {
      lVar9 = param_1 + 0x240;
    }
    iStack_104 = *(int *)(lVar9 + (((longlong)(int)((uVar7 - uVar10) - uVar13) ^
                                   (ulonglong)(uVar10 >> 0xf)) &
                                  (longlong)*(int *)(param_1 + 0x250) - 1U) * 4);
    local_108 = iStack_104;
    if (iStack_104 != -1) {
      do {
        iStack_104 = *(int *)(*plVar2 + 0x10 + (longlong)local_108 * 0x18);
        if (*(ulonglong *)(*plVar2 + (longlong)local_108 * 0x18) == param_2) break;
        local_108 = iStack_104;
      } while (iStack_104 != -1);
    }
  }
  uStack_fc = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_a8 = CONCAT44(iStack_104,local_108);
  if (local_108 != -1) {
    plVar14 = (longlong *)(param_1 + 0x1b8);
    puVar1 = (uint *)(param_1 + 0x1c8);
    iVar12 = iStack_104;
    local_b8 = plVar2;
    uStack_b0 = param_2;
    plStack_a0 = plVar2;
    do {
      iVar3 = *(int *)(param_1 + 0x1e0);
      local_118 = 0;
      uStack_114 = 1;
      iStack_104 = 0;
      iStack_100 = 0;
      if (iVar3 != 0) {
        puVar11 = *(uint **)(param_1 + 0x1d8);
        if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar7 = *puVar11;
        local_118 = 0;
        while (uVar7 == 0) {
          lVar9 = (longlong)local_118;
          iStack_100 = iStack_100 + 0x20;
          iVar8 = local_118 + 1;
          bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118;
          local_118 = iVar8;
          if (bVar4) goto LAB_142bcd745;
          uVar7 = puVar11[lVar9 + 1];
        }
        uStack_114 = -uVar7 & uVar7;
        iVar8 = 0x1f;
        if (uStack_114 != 0) {
          for (; uStack_114 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_114 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iStack_104 = (iStack_100 - iVar8) + 0x1f;
        if (iVar3 < iStack_104) {
LAB_142bcd745:
          iStack_104 = iVar3;
        }
      }
      uStack_e0 = CONCAT44(iStack_104,0xffffffff);
      auStack_80._8_4_ = iStack_100;
      auStack_80._0_8_ = uStack_e0;
      auStack_80._12_4_ = uStack_fc;
      iStack_90 = local_118;
      uStack_8c = uStack_114;
      local_c0 = 0;
      local_50._8_4_ = SUB84(plVar14,0);
      local_50._12_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      local_d8._8_4_ = local_50._8_4_;
      local_d8._0_8_ = auStack_80._8_8_;
      local_d8._12_4_ = local_50._12_4_;
      iStack_f0 = local_118;
      uStack_ec = uStack_114;
      local_50._0_8_ = auStack_80._8_8_;
      local_e8 = puVar1;
      local_c8 = plVar14;
      local_98 = plVar14;
      puStack_88 = puVar1;
      if (iStack_104 < iVar3) {
        do {
          lVar9 = *plVar2;
          lVar5 = 0;
          if ((*(int *)((longlong)iStack_104 * 0x20 + 0x10 + *plVar14) != 0) &&
             (plVar6 = *(longlong **)((longlong)iStack_104 * 0x20 + 8 + *plVar14),
             plVar6 != (longlong *)0x0)) {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res18);
            lVar5 = *plVar6;
          }
          if (lVar5 == *(longlong *)((longlong)local_108 * 0x18 + 8 + lVar9)) {
            FUN_142bc7d50(local_d8._8_8_,iStack_104);
            goto LAB_142bcd82f;
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_ec);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f0);
          iStack_104 = uStack_e0._4_4_;
        } while (uStack_e0._4_4_ < (int)local_e8[6]);
        if ((char)local_c0 != '\0') {
LAB_142bcd82f:
          if (local_c0._1_1_ != '\0') {
            TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34));
          }
        }
      }
      TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
      ::Remove(plStack_a0,local_108);
      local_108 = iVar12;
      if (iVar12 != -1) {
        do {
          iVar12 = *(int *)(*plVar2 + 0x10 + (longlong)local_108 * 0x18);
          if (*(ulonglong *)(*plVar2 + (longlong)local_108 * 0x18) == param_2) break;
          local_108 = iVar12;
        } while (iVar12 != -1);
      }
    } while (local_108 != -1);
  }
  return;
}



// FUNCTION 142bcd8c0 FUN_142bcd8c0 body=186 status=ok
// SIG undefined FUN_142bcd8c0(void)

void FUN_142bcd8c0(longlong param_1,longlong param_2,ushort param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x1e0)) {
    lVar6 = (ulonglong)param_3 * 0x60 + *(longlong *)(param_1 + 0x1d8);
    iVar7 = *(int *)(lVar6 + 0x30) + -1;
    if (-1 < iVar7) {
      lVar1 = *(longlong *)(lVar6 + 0x28);
      lVar5 = (longlong)iVar7;
      plVar3 = (longlong *)(lVar5 * 0x10 + lVar1);
      while (*plVar3 != param_2) {
        iVar7 = iVar7 + -1;
        plVar3 = plVar3 + -2;
        lVar5 = lVar5 + -1;
        if (lVar5 < 0) {
          return;
        }
      }
      iVar4 = *(int *)(lVar6 + 0x30);
      iVar2 = (iVar4 - iVar7) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + lVar1),
                   (void *)((longlong)(iVar7 + 1) * 0x10 + lVar1),(longlong)iVar2 << 4);
        iVar4 = *(int *)(lVar6 + 0x30);
      }
      *(int *)(lVar6 + 0x30) = iVar4 + -1;
      FUN_142bcda70(param_1);
    }
  }
  return;
}



// FUNCTION 142bcd980 FUN_142bcd980 body=234 status=ok
// SIG undefined FUN_142bcd980(void)

void FUN_142bcd980(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x490), plVar3 != (longlong *)0x0)) {
    uVar2 = UThrobber::GetPrivateStaticClass();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      if ((*(longlong *)(param_1 + 0x1a0) != 0) &&
         (1 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 0x60))) {
        (**(code **)(plVar3[0x2f] + 0x10))(plVar3 + 0x2f,2);
        *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) | 1;
        return;
      }
      if ((*(uint *)(param_1 + 0x1a8) & 1) != 0) {
        *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & 0xfffffffe;
        (**(code **)(plVar3[0x2f] + 0x18))(plVar3 + 0x2f,2);
        cVar1 = (**(code **)(plVar3[0x2f] + 0x28))(plVar3 + 0x2f);
        if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142bcda53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x400))();
          return;
        }
        FUN_142bef170(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 142bcda70 FUN_142bcda70 body=180 status=ok
// SIG undefined FUN_142bcda70(void)

void FUN_142bcda70(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)((longlong)iVar1 * 0x60 + -0x17 + *(longlong *)(param_1 + 0x1d8)) == '\x02';
  }
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xfb;
  iVar5 = 0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | bVar7 << 2;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      if ((*(byte *)(param_1 + 0x323) & 4) != 0) {
        return;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x1d8) + 0x30 + lVar6) + -1;
      if (-1 < iVar2) {
        lVar4 = (longlong)iVar2;
        piVar3 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x28 + lVar6) +
                        lVar4 * 0x10 + 8);
        do {
          if (*piVar3 == 1) {
            *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 4;
            break;
          }
          piVar3 = piVar3 + -4;
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (iVar5 < iVar1);
  }
  return;
}



// FUNCTION 142bcdb30 FUN_142bcdb30 body=1272 status=ok
// SIG undefined FUN_142bcdb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bcdb30(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [96];
  
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x720))(param_1,&local_b8);
  fVar26 = DAT_146690f28;
  fVar21 = DAT_146690f20._4_4_;
  fVar20 = (float)DAT_146690f20;
  uVar5 = (int)param_1[0xa7] - 1;
  uVar9 = (ulonglong)uVar5;
  lVar15 = (longlong)(int)uVar5;
  if (-1 < (int)uVar5) {
    lVar14 = lVar15 * 0x14;
    do {
      lVar13 = param_1[0xa6] + lVar14;
      lVar8 = FWeakObjectPtr::Get(lVar13);
      if (lVar8 != 0) {
        puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x8a0))(param_1,&local_a8,lVar8);
        fVar20 = (float)*puVar12;
        fVar21 = (float)((ulonglong)*puVar12 >> 0x20);
        fVar26 = *(float *)(puVar12 + 1);
LAB_142bcdca4:
        uVar9 = (ulonglong)(uint)fVar26;
        local_a8 = CONCAT44(fVar21,fVar20);
        local_a0 = fVar26;
        break;
      }
      if (((((*(float *)(lVar13 + 8) <= -(float)DAT_146690f20) ||
            ((float)DAT_146690f20 <= *(float *)(lVar13 + 8))) ||
           (*(float *)(lVar13 + 0xc) <= -DAT_146690f20._4_4_)) ||
          ((DAT_146690f20._4_4_ <= *(float *)(lVar13 + 0xc) ||
           (*(float *)(lVar13 + 0x10) <= -DAT_146690f28)))) ||
         (DAT_146690f28 <= *(float *)(lVar13 + 0x10))) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      if ((char)uVar9 != '\0') {
        fVar20 = (float)*(undefined8 *)(lVar13 + 8);
        fVar21 = (float)((ulonglong)*(undefined8 *)(lVar13 + 8) >> 0x20);
        fVar26 = *(float *)(lVar13 + 0x10);
        goto LAB_142bcdca4;
      }
      lVar14 = lVar14 + -0x14;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  if (((fVar20 <= -(float)DAT_146690f20) || ((float)DAT_146690f20 <= fVar20)) ||
     ((fVar21 <= -DAT_146690f20._4_4_ ||
      (((DAT_146690f20._4_4_ <= fVar21 || (fVar26 <= -DAT_146690f28)) || (DAT_146690f28 <= fVar26)))
      ))) {
    iVar7 = (int)(uVar9 >> 8) << 8;
  }
  else {
    iVar7 = (int)CONCAT71((int7)(uVar9 >> 8),1);
  }
  if ((char)iVar7 == '\0') {
    uVar9 = local_a8;
    fVar26 = local_a0;
    if (((*(byte *)(param_1 + 0xa8) & 0x20) != 0) &&
       (lVar15 = plVar1[0x2d], local_b8 = DAT_1468b5da0, local_b0 = DAT_1468b5da8,
       uVar9 = DAT_1468b5da0, fVar26 = DAT_1468b5da8, lVar15 != 0)) {
      local_98 = *(float *)(lVar15 + 0x210);
      fStack_94 = *(float *)(lVar15 + 0x214);
      fStack_90 = *(float *)(lVar15 + 0x218);
      fStack_8c = *(float *)(lVar15 + 0x21c);
      auVar18._4_4_ = -(uint)(fStack_94 != *(float *)(lVar15 + 0x254));
      auVar18._0_4_ = -(uint)(local_98 != *(float *)(lVar15 + 0x250));
      auVar18._8_4_ = -(uint)(fStack_90 != *(float *)(lVar15 + 600));
      auVar18._12_4_ = -(uint)(fStack_8c != *(float *)(lVar15 + 0x25c));
      iVar7 = movmskps(iVar7,auVar18);
      if (iVar7 != 0) {
        *(float *)(lVar15 + 0x250) = local_98;
        *(float *)(lVar15 + 0x254) = fStack_94;
        *(float *)(lVar15 + 600) = fStack_90;
        *(float *)(lVar15 + 0x25c) = fStack_8c;
        puVar12 = (undefined8 *)FQuat::Rotator(&local_98,local_88);
        *(undefined8 *)(lVar15 + 0x260) = *puVar12;
        *(undefined4 *)(lVar15 + 0x268) = *(undefined4 *)(puVar12 + 1);
      }
      local_b8 = *(ulonglong *)(lVar15 + 0x260);
      local_b0 = *(float *)(lVar15 + 0x268);
      uVar9 = local_b8;
      fVar26 = local_b0;
    }
  }
  else {
    pfVar10 = (float *)(**(code **)(*plVar1 + 0x790))(plVar1,&local_98);
    local_a0 = fVar26 - pfVar10[2];
    local_a8 = CONCAT44(fVar21 - pfVar10[1],fVar20 - *pfVar10);
    puVar11 = (ulonglong *)FVector::Rotation(&local_a8,local_88);
    local_b8 = *puVar11;
    local_b0 = *(float *)(puVar11 + 1);
    uVar9 = local_a8;
    fVar26 = local_a0;
  }
  local_a0 = fVar26;
  local_a8 = uVar9;
  if ((float)local_b8 != 0.0) {
    lVar15 = FUN_142bbd240(param_1);
    if (lVar15 != 0) {
      lVar14 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_142bcde87;
    }
    local_b8 = local_b8 & 0xffffffff00000000;
  }
LAB_142bcde87:
  uVar6 = (**(code **)(*param_1 + 0x728))(param_1,&local_b8,1);
  if (param_3 != '\0') {
    lVar15 = plVar1[0x2d];
    fVar26 = DAT_1468b5da8;
    uVar9 = DAT_1468b5da0;
    if (lVar15 != 0) {
      local_98 = *(float *)(lVar15 + 0x210);
      fStack_94 = *(float *)(lVar15 + 0x214);
      fStack_90 = *(float *)(lVar15 + 0x218);
      fStack_8c = *(float *)(lVar15 + 0x21c);
      auVar16._4_4_ = -(uint)(*(float *)(lVar15 + 0x254) != fStack_94);
      auVar16._0_4_ = -(uint)(*(float *)(lVar15 + 0x250) != local_98);
      auVar16._8_4_ = -(uint)(*(float *)(lVar15 + 600) != fStack_90);
      auVar16._12_4_ = -(uint)(*(float *)(lVar15 + 0x25c) != fStack_8c);
      iVar7 = movmskps(uVar6,auVar16);
      if (iVar7 != 0) {
        *(float *)(lVar15 + 0x250) = local_98;
        *(float *)(lVar15 + 0x254) = fStack_94;
        *(float *)(lVar15 + 600) = fStack_90;
        *(float *)(lVar15 + 0x25c) = fStack_8c;
        puVar12 = (undefined8 *)FQuat::Rotator(&local_98,local_88);
        *(undefined8 *)(lVar15 + 0x260) = *puVar12;
        *(undefined4 *)(lVar15 + 0x268) = *(undefined4 *)(puVar12 + 1);
      }
      fVar26 = *(float *)(lVar15 + 0x268);
      uVar9 = *(ulonglong *)(lVar15 + 0x260);
    }
    fVar22 = (float)uVar9 - (float)local_b8;
    fVar23 = (float)(uVar9 >> 0x20) - local_b8._4_4_;
    fVar20 = (float)DAT_146b2c520;
    fVar21 = DAT_146b2c520._4_4_;
    fVar2 = DAT_146b2c520._8_4_;
    fVar3 = DAT_146b2c520._12_4_;
    auVar17._4_4_ = fVar23;
    auVar17._0_4_ = fVar22;
    auVar17._8_4_ = fVar26 - local_b0;
    auVar17._12_4_ = 0;
    auVar18 = divps(auVar17,_DAT_146b2c520);
    fVar22 = fVar22 - (float)(int)auVar18._0_4_ * fVar20;
    fVar23 = fVar23 - (float)(int)auVar18._4_4_ * fVar21;
    fVar24 = (fVar26 - local_b0) - (float)(int)auVar18._8_4_ * fVar2;
    fVar25 = 0.0 - (float)(int)auVar18._12_4_ * fVar3;
    fVar22 = (float)(((uint)(fVar22 + fVar20) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                    (uint)(fVar22 + fVar20));
    fVar23 = (float)(((uint)(fVar23 + fVar21) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                    (uint)(fVar23 + fVar21));
    fVar24 = (float)(((uint)(fVar24 + fVar2) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                    (uint)(fVar24 + fVar2));
    fVar25 = (float)(((uint)(fVar25 + fVar3) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25) ^
                    (uint)(fVar25 + fVar3));
    auVar19._4_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar23 - fVar21) ^ (uint)fVar23) &
                                  -(uint)(fRam0000000146b2c514 < fVar23) ^ (uint)fVar23) &
                                uRam0000000146b2c504));
    auVar19._0_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar22 - fVar20) ^ (uint)fVar22) &
                                  -(uint)(_DAT_146b2c510 < fVar22) ^ (uint)fVar22) & _DAT_146b2c500)
                );
    auVar19._8_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar24 - fVar2) ^ (uint)fVar24) &
                                  -(uint)(fRam0000000146b2c518 < fVar24) ^ (uint)fVar24) &
                                uRam0000000146b2c508));
    auVar19._12_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar25 - fVar3) ^ (uint)fVar25) &
                                  -(uint)(fRam0000000146b2c51c < fVar25) ^ (uint)fVar25) &
                                uRam0000000146b2c50c));
    iVar7 = movmskps(fVar26,auVar19);
    if (iVar7 != 0) {
      local_a0 = local_b0;
      local_a8 = local_b8;
      (**(code **)(*plVar1 + 0x7b0))(plVar1,&local_a8,param_2);
    }
  }
  return;
}



// FUNCTION 142bce030 UpdateDeprecatedKey body=157 status=ok
// SIG undefined UpdateDeprecatedKey(void)

longlong UBlackboardKeyType_NativeEnum::UpdateDeprecatedKey(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UBlackboardKeyType_Enum::GetPrivateStaticClass();
  uVar4 = 0;
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  FString::operator=(lVar3 + 0x38,param_1 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x40);
  if ((*(longlong *)(param_1 + 0x40) != 0) && (1 < *(int *)(param_1 + 0x38))) {
    uVar4 = 1;
  }
  *(uint *)(lVar3 + 0x48) = *(uint *)(lVar3 + 0x48) & 0xfffffffe;
  *(uint *)(lVar3 + 0x48) = *(uint *)(lVar3 + 0x48) | uVar4;
  return lVar3;
}



// FUNCTION 142bce0d0 FUN_142bce0d0 body=478 status=ok
// SIG undefined FUN_142bce0d0(void)

uint FUN_142bce0d0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *_Buf2;
  longlong lVar8;
  longlong local_68 [2];
  undefined2 *puStack_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar3 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_68[1] = 0;
  puStack_58 = (undefined2 *)0x0;
  if (param_3 == 0) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *(undefined2 *)(param_3 + 0x50);
  }
  local_50 = 1;
  local_68[0] = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_58,0);
  lVar8 = (longlong)(param_4 + -1);
  *puStack_58 = uVar6;
  _Buf2 = puStack_58;
  if (-1 < param_4 + -1) {
    lVar4 = lVar8 * 0x60;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10 + lVar4);
      if (lVar5 == 0) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *(undefined2 *)(lVar5 + 0x50);
      }
      lVar5 = (longlong)local_50;
      iVar7 = local_50 + 1;
      if (local_4c < iVar7) {
        iVar1 = local_50;
        local_50 = iVar7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_58,iVar1);
        _Buf2 = puStack_58;
        iVar7 = local_50;
      }
      local_50 = iVar7;
      lVar4 = lVar4 + -0x60;
      _Buf2[lVar5] = uVar6;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar1 = local_50;
  lVar8 = local_68[0];
  iVar7 = *(int *)(param_1 + 0x1f0);
  if (0 < iVar7) {
    lVar4 = *(longlong *)(param_1 + 0x1e8);
    do {
      lVar5 = (longlong)(int)uVar3 * 0x38;
      if (((*(longlong *)(lVar5 + lVar4) == lVar8) &&
          (iVar2 = *(int *)(lVar5 + 0x18 + lVar4), iVar2 == iVar1)) &&
         (iVar2 = _guard_xfg_dispatch_icall_nop
                            (*(void **)(lVar5 + 0x10 + lVar4),_Buf2,(longlong)iVar2 * 2), iVar2 == 0
         )) goto LAB_142bce265;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar7);
  }
  local_38 = *(undefined4 *)(param_1 + 0x200);
  uVar3 = *(uint *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x1f0) = uVar3 + 1;
  if (*(int *)(param_1 + 500) < (int)(uVar3 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x1e8,uVar3);
  }
  FBehaviorTreeInstanceId::FBehaviorTreeInstanceId
            ((longlong)(int)uVar3 * 0x38 + *(longlong *)(param_1 + 0x1e8),local_68);
  _Buf2 = puStack_58;
LAB_142bce265:
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (_Buf2 != (undefined2 *)0x0) {
    FMemory::Free(_Buf2);
  }
  return uVar3 & 0xff;
}



// FUNCTION 142bce2b0 FUN_142bce2b0 body=528 status=ok
// SIG undefined FUN_142bce2b0(void)

byte FUN_142bce2b0(undefined8 param_1,wchar_t **param_2,longlong *param_3,byte param_4,int *param_5,
                  int *param_6,undefined1 *param_7)

{
  longlong lVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *_Source;
  wchar_t *local_38;
  undefined8 local_30;
  
  iVar10 = (int)param_3[1];
  while( true ) {
    if (iVar10 == 0) {
      return param_4;
    }
    lVar7 = (longlong)iVar10;
    lVar5 = *param_3;
    psVar2 = (short *)(lVar5 + -4 + lVar7 * 4);
    *psVar2 = *psVar2 + -1;
    lVar1 = lVar5 + lVar7 * 4;
    cVar3 = *(char *)(lVar5 + -2 + lVar7 * 4);
    if (cVar3 == '\x02') {
      if (((*(byte *)(lVar1 + -1) & 1) == 0) && (param_4 == 0)) {
        *(byte *)(lVar1 + -1) = *(byte *)(lVar1 + -1) & 0xfd | 1;
      }
    }
    else if (cVar3 == '\x03') {
      bVar4 = *(byte *)(lVar1 + -1);
      if (((bVar4 & 1) == 0) && (param_4 != 0)) {
        *(byte *)(lVar1 + -1) = (param_4 * '\x02' ^ bVar4) & 2 ^ bVar4 | 1;
      }
    }
    else if (cVar3 == '\x04') {
      param_4 = param_4 == 0;
    }
    if ((((int)param_3[1] == 1) && (*param_7 = 1, param_4 == 0)) && (*param_5 == -1)) {
      *param_5 = *param_6;
    }
    if ((*(byte *)(lVar1 + -1) & 1) != 0) {
      param_4 = *(byte *)(lVar1 + -1) >> 1 & 1;
    }
    if (*(short *)(lVar1 + -4) != 0) break;
    iVar10 = *(int *)(param_2 + 1);
    if (iVar10 == 0) {
      _Source = L"";
      iVar6 = -1;
    }
    else {
      _Source = *param_2;
      iVar6 = iVar10 + -1;
    }
    if (iVar10 == 0) {
      iVar6 = 0;
    }
    iVar9 = 0;
    iVar8 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar8 = iVar9;
    }
    iVar6 = iVar6 + -2;
    if ((-1 < iVar6) && (iVar9 = iVar8, iVar6 < iVar8)) {
      iVar9 = iVar6;
    }
    local_38 = (wchar_t *)0x0;
    local_30 = (ulonglong)(iVar9 + 1);
    if (iVar9 == 0) {
      local_30 = 0;
    }
    iVar10 = (int)local_30;
    pwVar11 = local_38;
    if (0 < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar11 = local_38;
      iVar10 = (int)local_30;
      if (0 < (int)local_30) {
        wcsncpy(local_38,_Source,(longlong)iVar9);
        pwVar11[iVar9] = L'\0';
      }
    }
    if (param_2 == &local_38) {
      if (pwVar11 != (wchar_t *)0x0) {
        FMemory::Free(pwVar11);
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = pwVar11;
      *(int *)(param_2 + 1) = iVar10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = (wchar_t *)0x0;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_3);
    iVar10 = (int)param_3[1];
  }
  return param_4;
}



// FUNCTION 142bce4c0 FUN_142bce4c0 body=397 status=ok
// SIG undefined FUN_142bce4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bce4c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar7 = 0;
  if (lVar5 == param_1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else if (lVar5 != 0) {
    cVar4 = *(char *)(lVar5 + 0x4c) + (char)*(undefined4 *)(lVar5 + 0x40);
    goto LAB_142bce4ec;
  }
  cVar4 = '\0';
LAB_142bce4ec:
  *(char *)(param_1 + 0x4c) = cVar4;
  lVar5 = UBlackboardData::UpdatePersistentKey<UBlackboardKeyType_Object>(param_1,&DAT_146b2c4f0);
  if (lVar5 != 0) {
    uVar6 = FUN_1428dfc70();
    *(undefined8 *)(lVar5 + 0x30) = uVar6;
  }
  bVar2 = false;
  DAT_146690f54 = DAT_146690f54 + 1;
  lVar5 = (longlong)(DAT_146690f48 + -1);
  if (-1 < DAT_146690f48 + -1) {
    lVar8 = lVar5 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar8 + 8 + DAT_146690f40) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + DAT_146690f40), plVar1 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar3 = DAT_146690f48;
  DAT_146690f54 = DAT_146690f54 + -1;
  if ((bVar2) && (DAT_146690f54 < 1)) {
    uVar9 = uVar7;
    if (0 < DAT_146690f48) {
      do {
        if (((*(int *)(uVar9 + 8 + DAT_146690f40) == 0) ||
            (*(longlong **)(uVar9 + DAT_146690f40) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(uVar9 + DAT_146690f40) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146690f40,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar9 = uVar9 + 0x10;
        }
      } while ((int)uVar7 < DAT_146690f48);
    }
    _DAT_146690f50 = DAT_146690f48 * 2;
    if (_DAT_146690f50 < 3) {
      _DAT_146690f50 = 2;
    }
    if ((_DAT_146690f50 < iVar3) && (DAT_146690f4c != DAT_146690f48)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146690f40);
    }
  }
  return;
}



// FUNCTION 142bce650 FUN_142bce650 body=298 status=ok
// SIG undefined FUN_142bce650(void)

ulonglong FUN_142bce650(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res20 [8];
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_142c36280();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xad] = lVar2;
  if (lVar2 == 0) {
    plVar3 = (longlong *)FName::FName(local_res20,L"BlackboardComponent",1);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar1 = FUN_142c36280();
    lVar2 = FUN_1417985e0(uVar1,param_1,lVar2,0,0,0,0,0,0);
    param_1[0xad] = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x898))(param_1,lVar2,param_2);
      FUN_14234b150(param_1[0xad]);
    }
  }
  else if ((*(longlong *)(lVar2 + 0x180) == 0) || (*(longlong *)(lVar2 + 0x180) != param_2)) {
    (**(code **)(*param_1 + 0x898))(param_1,lVar2,param_2);
  }
  lVar2 = param_1[0xad];
  *param_3 = lVar2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 142bce780 FUN_142bce780 body=382 status=ok
// SIG undefined FUN_142bce780(void)

void FUN_142bce780(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  short local_res8;
  undefined2 local_resa;
  undefined1 local_res20 [8];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_1 != 0) {
    local_resa = *(undefined2 *)(param_1 + 0x50);
    local_res8 = *(short *)(param_2 + 0x1e0) + -1;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_142bc72e0;
    local_48 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_30._4_4_;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144012f78;
    }
    local_38 = (code *)&local_res8;
    uStack_30 = FUN_142bd9e70(local_28,param_2,param_3,&local_48);
    FUN_142badf70(param_2 + 0x280,local_res20,&local_38,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142bce900 FUN_142bce900 body=413 status=ok
// SIG undefined FUN_142bce900(void)

void FUN_142bce900(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  short local_res20;
  undefined2 local_res22;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_1 != 0) {
    local_res22 = *(undefined2 *)(param_1 + 0x50);
    local_res20 = *(short *)(param_2 + 0x1e0) + -1;
    local_48 = (longlong *)0x0;
    local_38 = FUN_142bc72e0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_30._4_4_;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144012f78;
    }
    local_38 = (code *)&local_res20;
    uStack_30 = FUN_142bda070(local_28,param_2,param_3,param_4,&local_48);
    FUN_142badf70(param_2 + 0x280,local_res8,&local_38,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142bceaa0 FUN_142bceaa0 body=382 status=ok
// SIG undefined FUN_142bceaa0(void)

void FUN_142bceaa0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *local_28;
  int local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_28 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_20 = 3;
  local_28 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)&LAB_142bb2660;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1441c0150;
  }
  puVar5 = (undefined8 *)
           FUN_142bda070(local_18,*(undefined8 *)(param_1 + 0x48),param_2,param_3,&local_28);
  iVar2 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar2 + 1;
  if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar2);
  }
  puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x50));
  *puVar6 = *puVar5;
  puVar6[1] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142bcec20 WrappedAbortTask body=77 status=ok
// SIG undefined WrappedAbortTask(void)

undefined8 UBTTaskNode::WrappedAbortTask(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_142bbe0b0();
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142bcec56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
    return uVar1;
  }
  return 2;
}



// FUNCTION 142bcec70 FUN_142bcec70 body=107 status=ok
// SIG undefined FUN_142bcec70(void)

bool FUN_142bcec70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  
  plVar3 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    plVar3 = (longlong *)FUN_142bbe0b0();
  }
  if (plVar3 != (longlong *)0x0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    bVar2 = (**(code **)(*plVar3 + 0x300))(plVar3,param_2,param_3);
    return ((byte)(uVar1 >> 7) & 1) != bVar2;
  }
  return false;
}



// FUNCTION 142bcece0 FUN_142bcece0 body=107 status=ok
// SIG undefined FUN_142bcece0(void)

bool FUN_142bcece0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))(param_1,param_4);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3,param_4,param_5);
  }
  return cVar1 != '\0';
}



// FUNCTION 142bced50 FUN_142bced50 body=115 status=ok
// SIG undefined FUN_142bced50(void)

void FUN_142bced50(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) goto LAB_142bceda1;
  if (param_3 == (int *)0x0) {
LAB_142bced92:
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    if ((iVar1 < 0) || (*(int *)(param_2 + 0x1b0) <= iVar1)) goto LAB_142bced92;
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar1 * 8);
  }
  (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2,param_3 + 1);
LAB_142bceda1:
                    /* WARNING: Could not recover jumptable at 0x000142bcedbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bcedd0 FUN_142bcedd0 body=115 status=ok
// SIG undefined FUN_142bcedd0(void)

void FUN_142bcedd0(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) goto LAB_142bcee21;
  if (param_3 == (int *)0x0) {
LAB_142bcee12:
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    if ((iVar1 < 0) || (*(int *)(param_2 + 0x1b0) <= iVar1)) goto LAB_142bcee12;
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar1 * 8);
  }
  (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,param_3 + 1);
LAB_142bcee21:
                    /* WARNING: Could not recover jumptable at 0x000142bcee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bcee50 WrappedOnBecomeRelevant body=67 status=ok
// SIG undefined WrappedOnBecomeRelevant(void)

void UBTAuxiliaryNode::WrappedOnBecomeRelevant
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      param_1 = (longlong *)FUN_142bbe0b0();
    }
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x2c8))(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142bceea0 WrappedOnCeaseRelevant body=67 status=ok
// SIG undefined WrappedOnCeaseRelevant(void)

void UBTAuxiliaryNode::WrappedOnCeaseRelevant
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      param_1 = (longlong *)FUN_142bbe0b0();
    }
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142bceef0 FUN_142bceef0 body=58 status=ok
// SIG undefined FUN_142bceef0(void)

void FUN_142bceef0(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) goto LAB_142bcef20;
  if (param_3 == (int *)0x0) {
LAB_142bcef1a:
    param_1 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    if ((iVar1 < 0) || (*(int *)(param_2 + 0x1b0) <= iVar1)) goto LAB_142bcef1a;
    param_1 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar1 * 8);
  }
  param_3 = param_3 + 1;
LAB_142bcef20:
                    /* WARNING: Could not recover jumptable at 0x000142bcef23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bcef30 FUN_142bcef30 body=70 status=ok
// SIG undefined FUN_142bcef30(void)

void FUN_142bcef30(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) != 0) {
    if (param_3 != (int *)0x0) {
      iVar1 = *param_3;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x1b0))) {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000142bcef5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2e0))(plVar2,param_2,param_3 + 1);
        return;
      }
    }
    param_1 = (longlong *)0x0;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142bcef6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bcef80 FUN_142bcef80 body=58 status=ok
// SIG undefined FUN_142bcef80(void)

void FUN_142bcef80(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) goto LAB_142bcefb0;
  if (param_3 == (int *)0x0) {
LAB_142bcefaa:
    param_1 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    if ((iVar1 < 0) || (*(int *)(param_2 + 0x1b0) <= iVar1)) goto LAB_142bcefaa;
    param_1 = *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar1 * 8);
  }
  param_3 = param_3 + 1;
LAB_142bcefb0:
                    /* WARNING: Could not recover jumptable at 0x000142bcefb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bcefc0 FUN_142bcefc0 body=211 status=ok
// SIG undefined FUN_142bcefc0(void)

void FUN_142bcefc0(longlong *param_1,undefined8 param_2,longlong param_3,float param_4)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  if (((*(byte *)(param_1 + 0xb) & 4) != 0) || ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0)) {
    plVar2 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
      plVar2 = (longlong *)FUN_142bbe0b0();
    }
    if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0xb) & 4) != 0)) {
      if ((*(byte *)(plVar2 + 0xb) & 8) != 0) {
        uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_3 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
        }
        fVar4 = *(float *)(lVar3 + 4) - param_4;
        param_4 = param_4 + *(float *)(lVar3 + 8);
        *(float *)(lVar3 + 8) = param_4;
        *(float *)(lVar3 + 4) = fVar4;
        if (0.0 < fVar4) {
          return;
        }
        *(undefined4 *)(lVar3 + 8) = 0;
      }
      (**(code **)(*plVar2 + 0x2d8))(plVar2,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 142bcf0a0 FUN_142bcf0a0 body=782 status=ok
// SIG undefined FUN_142bcf0a0(void)

void FUN_142bcf0a0(undefined8 *param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  float local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  
  iVar11 = (int)param_2[1] + -1;
  if (-1 < iVar11) {
    lVar15 = (longlong)iVar11;
    lVar12 = lVar15 * 0x18;
    lVar13 = (longlong)(int)param_2[1] * 0x18;
    lVar14 = lVar12;
    do {
      lVar5 = *param_2;
      fVar17 = param_4 + *(float *)(lVar12 + 8 + lVar5);
      fVar1 = *(float *)(lVar12 + 4 + lVar5);
      fVar2 = *(float *)(lVar12 + lVar5);
      fVar16 = param_3 + *(float *)(lVar12 + 8 + lVar5);
      fVar3 = *(float *)(lVar12 + 4 + lVar5);
      fVar4 = *(float *)(lVar12 + lVar5);
      local_1cc = fVar2;
      local_1c8 = fVar1;
      local_1c4 = fVar17;
      local_1c0 = fVar4;
      local_1bc = fVar3;
      local_1b8 = fVar16;
      _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
      local_1b0 = *(undefined4 *)(param_1 + 1);
      local_1d8 = fVar2 - fVar4;
      local_1ac = *(undefined4 *)((longlong)param_1 + 0xc);
      local_1d4 = fVar1 - fVar3;
      local_1d0 = fVar17 - fVar16;
      local_1a8 = *(undefined4 *)(param_1 + 2);
      local_13c = 0x3f800000;
      local_1b4 = 1;
      uVar8 = FVector::Rotation(&local_1d8,local_168);
      puVar9 = (undefined4 *)FRotator::Quaternion(uVar8,local_158);
      local_178 = *puVar9;
      uStack_174 = puVar9[1];
      uStack_170 = puVar9[2];
      uStack_16c = puVar9[3];
      cVar6 = UWorld::SweepSingleByChannel
                        (*param_1,local_148,&local_1c0,&local_1cc,&local_178,
                         *(undefined4 *)(param_1 + 0x12),&local_1b4,param_1 + 3,&DAT_146aefe68);
      if (cVar6 == '\0') {
        if (*(char *)((longlong)param_1 + 0x94) == '\x01') {
          iVar10 = (int)param_2[1];
          iVar7 = (iVar10 - iVar11) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + lVar14),(void *)(lVar13 + *param_2),
                       (longlong)iVar7 * 0x18);
            iVar10 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar10 + -1;
        }
      }
      else {
        lVar5 = *param_2;
        fStack_198 = local_12c + param_5;
        local_190 = 0;
        puVar9 = (undefined4 *)(lVar12 + lVar5);
        *puVar9 = local_134;
        puVar9[1] = local_130;
        puVar9[2] = fStack_198;
        puVar9[3] = uStack_194;
        local_1a0 = local_134;
        uStack_19c = local_130;
        *(undefined8 *)(lVar12 + 0x10 + lVar5) = 0;
        local_180 = fStack_198;
      }
      if ((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 0x14))) {
        *(bool *)(lVar15 + param_1[0x13]) = cVar6 != '\0';
      }
      lVar13 = lVar13 + -0x18;
      lVar14 = lVar14 + -0x18;
      lVar15 = lVar15 + -1;
      lVar12 = lVar12 + -0x18;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  return;
}



// FUNCTION 142bcf3b0 FUN_142bcf3b0 body=583 status=ok
// SIG undefined FUN_142bcf3b0(void)

void FUN_142bcf3b0(undefined8 *param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  float local_f0;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  
  iVar6 = (int)param_2[1] + -1;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6;
    lVar7 = lVar10 * 0x18;
    lVar8 = (longlong)(int)param_2[1] * 0x18;
    lVar9 = lVar7;
    do {
      lVar2 = *param_2;
      local_134 = *(undefined4 *)(lVar7 + 4 + lVar2);
      local_138 = *(undefined4 *)(lVar7 + lVar2);
      local_130 = param_4 + *(float *)(lVar7 + 8 + lVar2);
      local_124 = param_3 + *(float *)(lVar7 + 8 + lVar2);
      local_128 = *(undefined4 *)(lVar7 + 4 + lVar2);
      local_12c = *(undefined4 *)(lVar7 + lVar2);
      _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
      local_104 = *(undefined4 *)(param_1 + 1);
      local_dc = 0x3f800000;
      local_108 = 2;
      cVar3 = UWorld::SweepSingleByChannel
                        (*param_1,local_e8,&local_12c,&local_138,&DAT_1464aa810,
                         *(undefined4 *)(param_1 + 0x12),&local_108,param_1 + 3,&DAT_146aefe68);
      if (cVar3 == '\0') {
        if (*(char *)((longlong)param_1 + 0x94) == '\x01') {
          iVar5 = (int)param_2[1];
          iVar4 = (iVar5 - iVar6) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + lVar9),(void *)(lVar8 + *param_2),(longlong)iVar4 * 0x18)
            ;
            iVar5 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar5 + -1;
        }
      }
      else {
        lVar2 = *param_2;
        fStack_118 = local_cc + param_5;
        local_110 = 0;
        puVar1 = (undefined4 *)(lVar7 + lVar2);
        *puVar1 = local_d4;
        puVar1[1] = local_d0;
        puVar1[2] = fStack_118;
        puVar1[3] = uStack_114;
        local_120 = local_d4;
        uStack_11c = local_d0;
        *(undefined8 *)(lVar7 + 0x10 + lVar2) = 0;
        local_f0 = fStack_118;
      }
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x14))) {
        *(bool *)(lVar10 + param_1[0x13]) = cVar3 != '\0';
      }
      lVar8 = lVar8 + -0x18;
      lVar9 = lVar9 + -0x18;
      lVar10 = lVar10 + -1;
      lVar7 = lVar7 + -0x18;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 142bcf600 FUN_142bcf600 body=595 status=ok
// SIG undefined FUN_142bcf600(void)

void FUN_142bcf600(undefined8 *param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  float local_f0;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  
  iVar6 = (int)param_2[1] + -1;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6;
    lVar7 = lVar10 * 0x18;
    lVar8 = (longlong)(int)param_2[1] * 0x18;
    lVar9 = lVar7;
    do {
      lVar2 = *param_2;
      local_134 = *(undefined4 *)(lVar7 + 4 + lVar2);
      local_138 = *(undefined4 *)(lVar7 + lVar2);
      local_130 = param_4 + *(float *)(lVar7 + 8 + lVar2);
      local_124 = param_3 + *(float *)(lVar7 + 8 + lVar2);
      local_128 = *(undefined4 *)(lVar7 + 4 + lVar2);
      local_12c = *(undefined4 *)(lVar7 + lVar2);
      _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
      local_11c = *(undefined4 *)(param_1 + 1);
      local_118 = *(undefined4 *)(param_1 + 2);
      local_dc = 0x3f800000;
      local_120 = 3;
      cVar3 = UWorld::SweepSingleByChannel
                        (*param_1,local_e8,&local_12c,&local_138,&DAT_1464aa810,
                         *(undefined4 *)(param_1 + 0x12),&local_120,param_1 + 3,&DAT_146aefe68);
      if (cVar3 == '\0') {
        if (*(char *)((longlong)param_1 + 0x94) == '\x01') {
          iVar5 = (int)param_2[1];
          iVar4 = (iVar5 - iVar6) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + lVar9),(void *)(lVar8 + *param_2),(longlong)iVar4 * 0x18)
            ;
            iVar5 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar5 + -1;
        }
      }
      else {
        lVar2 = *param_2;
        fStack_108 = local_cc + param_5;
        local_100 = 0;
        puVar1 = (undefined4 *)(lVar7 + lVar2);
        *puVar1 = local_d4;
        puVar1[1] = local_d0;
        puVar1[2] = fStack_108;
        puVar1[3] = uStack_104;
        local_110 = local_d4;
        uStack_10c = local_d0;
        *(undefined8 *)(lVar7 + 0x10 + lVar2) = 0;
        local_f0 = fStack_108;
      }
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x14))) {
        *(bool *)(lVar10 + param_1[0x13]) = cVar3 != '\0';
      }
      lVar8 = lVar8 + -0x18;
      lVar9 = lVar9 + -0x18;
      lVar10 = lVar10 + -1;
      lVar7 = lVar7 + -0x18;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 142bcf860 FUN_142bcf860 body=570 status=ok
// SIG undefined FUN_142bcf860(void)

void FUN_142bcf860(undefined8 *param_1,longlong *param_2,float param_3,float param_4,float param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  float local_f0;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  
  iVar6 = (int)param_2[1] + -1;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6;
    lVar7 = lVar10 * 0x18;
    lVar9 = (longlong)(int)param_2[1] * 0x18;
    lVar8 = lVar7;
    do {
      lVar2 = *param_2;
      local_124 = *(undefined4 *)(lVar2 + 4 + lVar8);
      local_128 = *(undefined4 *)(lVar2 + lVar8);
      local_120 = param_4 + *(float *)(lVar2 + 8 + lVar8);
      local_114 = param_3 + *(float *)(lVar2 + 8 + lVar8);
      local_118 = *(undefined4 *)(lVar2 + 4 + lVar8);
      local_11c = *(undefined4 *)(lVar2 + lVar8);
      _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
      local_dc = 0x3f800000;
      cVar3 = UWorld::LineTraceSingleByChannel
                        (*param_1,local_e8,&local_11c,&local_128,*(undefined4 *)(param_1 + 0x12),
                         param_1 + 3,&DAT_146aefe68);
      if (cVar3 == '\0') {
        if (*(char *)((longlong)param_1 + 0x94) == '\x01') {
          iVar5 = (int)param_2[1];
          iVar4 = (iVar5 - iVar6) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + lVar7),(void *)(lVar9 + *param_2),(longlong)iVar4 * 0x18)
            ;
            iVar5 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar5 + -1;
        }
      }
      else {
        lVar2 = *param_2;
        fStack_108 = local_cc + param_5;
        local_100 = 0;
        puVar1 = (undefined4 *)(lVar2 + lVar8);
        *puVar1 = local_d4;
        puVar1[1] = local_d0;
        puVar1[2] = fStack_108;
        puVar1[3] = uStack_104;
        local_110 = local_d4;
        uStack_10c = local_d0;
        *(undefined8 *)(lVar2 + 0x10 + lVar8) = 0;
        local_f0 = fStack_108;
      }
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x14))) {
        *(bool *)(lVar10 + param_1[0x13]) = cVar3 != '\0';
      }
      lVar9 = lVar9 + -0x18;
      lVar7 = lVar7 + -0x18;
      lVar10 = lVar10 + -1;
      lVar8 = lVar8 + -0x18;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 142bcfaa0 FUN_142bcfaa0 body=512 status=ok
// SIG undefined FUN_142bcfaa0(void)

void FUN_142bcfaa0(undefined8 *param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  
  iVar8 = (int)param_3[1] + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 * 0x18;
    lVar11 = (longlong)(int)param_3[1] * 0x18;
    lVar10 = lVar9;
    do {
      pfVar7 = (float *)(*param_3 + lVar10);
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
      local_114 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_118 = *(undefined4 *)(param_1 + 1);
      local_128 = *pfVar7 - *param_2;
      local_110 = *(undefined4 *)(param_1 + 2);
      local_124 = pfVar7[1] - param_2[1];
      local_120 = pfVar7[2] - param_2[2];
      local_ac = 0x3f800000;
      local_11c = 1;
      uVar4 = FVector::Rotation(&local_128,local_d8);
      puVar5 = (undefined4 *)FRotator::Quaternion(uVar4,local_c8);
      local_e8 = *puVar5;
      uStack_e4 = puVar5[1];
      uStack_e0 = puVar5[2];
      uStack_dc = puVar5[3];
      cVar2 = UWorld::SweepSingleByChannel
                        (*param_1,local_b8,param_2,pfVar7,&local_e8,*(undefined4 *)(param_1 + 0x12),
                         &local_11c,param_1 + 3,&DAT_146aefe68);
      if (cVar2 == '\0') {
        if (*(char *)((longlong)param_1 + 0x94) == '\x01') {
          iVar6 = (int)param_3[1];
          iVar3 = (iVar6 - iVar8) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_3 + lVar9),(void *)(lVar11 + *param_3),(longlong)iVar3 * 0x18
                      );
            iVar6 = (int)param_3[1];
          }
          *(int *)(param_3 + 1) = iVar6 + -1;
        }
      }
      else {
        lVar1 = *param_3;
        local_f8 = 0;
        local_108 = local_a4;
        uStack_104 = uStack_a0;
        uStack_100 = local_9c;
        puVar5 = (undefined4 *)(lVar10 + lVar1);
        *puVar5 = local_a4;
        puVar5[1] = uStack_a0;
        puVar5[2] = local_9c;
        puVar5[3] = uStack_fc;
        *(undefined8 *)(lVar10 + 0x10 + lVar1) = 0;
      }
      lVar11 = lVar11 + -0x18;
      lVar9 = lVar9 + -0x18;
      lVar10 = lVar10 + -0x18;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142bcfca0 Emplace<TTuple<UClass_*,FEnvQueryContextData>_const_&> body=452 status=ok
// SIG undefined Emplace<TTuple<UClass_*,FEnvQueryContextData>_const_&>(void)

int * TSet<TTuple<UClass_*,FEnvQueryContextData>,TDefaultMapHashableKeyFuncs<UClass_*,FEnvQueryContextData,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<UClass_*,FEnvQueryContextData>_const_&>
                (longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  *local_30 = *param_3;
  FEnvQueryContextData::FEnvQueryContextData(local_30 + 1,param_3 + 1);
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  bVar7 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142bcfe41;
    }
  }
  cVar1 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x2c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_142bcfe41:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142bcfe70 FUN_142bcfe70 body=678 status=ok
// SIG undefined FUN_142bcfe70(void)

int * FUN_142bcfe70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong *_Src;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  int local_res8 [2];
  int local_res10;
  
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar7 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar8 + lVar7);
  *puVar15 = *puVar15 | 1 << ((byte)iVar9 & 0x1f);
  lVar1 = (longlong)iVar9 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar2 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar17 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar1 + lVar13) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar13) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar8 + lVar7);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_142bd00ec;
    }
  }
  uVar12 = 0;
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar14 = -(iVar9 + uVar11) ^ uVar11 >> 0xd;
    uVar10 = (iVar9 - uVar11) - uVar14 ^ uVar14 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar14 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142bd00ec:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 142bd0120 FUN_142bd0120 body=465 status=ok
// SIG undefined FUN_142bd0120(void)

int * FUN_142bd0120(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *(ulonglong *)*param_3;
  local_30[1] = 0;
  *(undefined4 *)(local_30 + 2) = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142bd02c8;
    }
  }
  cVar1 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x2c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_142bd02c8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142bd0300 FUN_142bd0300 body=671 status=ok
// SIG undefined FUN_142bd0300(void)

int * FUN_142bd0300(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  
  iVar8 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar13 = false;
  puVar11 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  puVar11 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  *(undefined8 *)(puVar11 + 2) = *puVar2;
  *(undefined8 *)(puVar11 + 4) = puVar2[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    iVar6 = iVar12;
    if (uVar10 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar5 != -1) {
        do {
          iVar6 = iVar5;
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar11) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
          iVar6 = iVar12;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar6 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      plVar4 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_142bd0572;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar12 = 0x20;
    if (uVar3 != 0) {
      iVar12 = 0x1f - iVar8;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142bd0572:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 142bd05a0 Emplace<TPairInitializer<UClass_*_const_&,FEnvQueryContextData_const_&>_> body=455 status=ok
// SIG undefined Emplace<TPairInitializer<UClass_*_const_&,FEnvQueryContextData_const_&>_>(void)

int * TSet<TTuple<UClass_*,FEnvQueryContextData>,TDefaultMapHashableKeyFuncs<UClass_*,FEnvQueryContextData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UClass_*_const_&,FEnvQueryContextData_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(ulonglong *)*param_3;
  FEnvQueryContextData::FEnvQueryContextData(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)local_res8[0] * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142bd0744;
    }
  }
  cVar2 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6);
  if (cVar2 == '\0') {
    iVar6 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar7 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar4 = (iVar6 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x2c) = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142bd0744:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142bd0770 FUN_142bd0770 body=494 status=ok
// SIG undefined FUN_142bd0770(void)

void FUN_142bd0770(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar9 = iVar6;
joined_r0x000142bd07a5:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          lVar10 = param_1[iVar8];
          lVar1 = param_1[(longlong)iVar7 + 2];
          if (*(byte *)(lVar1 + 0xf0) < *(byte *)(lVar10 + 0xf0)) {
            bVar4 = true;
          }
          else if ((*(char *)(lVar1 + 0x44) == '\x01') || (*(char *)(lVar10 + 0x44) != '\x01')) {
            bVar4 = *(int *)(lVar1 + 0x40) < *(int *)(lVar10 + 0x40);
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        lVar10 = param_1[iVar8];
        lVar1 = param_1[iVar6];
        if ((*(byte *)(lVar1 + 0xf0) < *(byte *)(lVar10 + 0xf0)) ||
           (((*(char *)(lVar1 + 0x44) != '\x01' && (*(char *)(lVar10 + 0x44) == '\x01')) ||
            (*(int *)(lVar1 + 0x40) < *(int *)(lVar10 + 0x40))))) {
          param_1[iVar6] = lVar10;
          iVar7 = iVar8 * 2 + 1;
          param_1[iVar8] = lVar1;
          iVar6 = iVar8;
          goto joined_r0x000142bd07a5;
        }
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar9 + -1;
      iVar5 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar6 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar2;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            lVar1 = param_1[iVar7];
            lVar3 = param_1[(longlong)iVar5 + 2];
            if (*(byte *)(lVar3 + 0xf0) < *(byte *)(lVar1 + 0xf0)) {
              bVar4 = true;
            }
            else if ((*(char *)(lVar3 + 0x44) == '\x01') || (*(char *)(lVar1 + 0x44) != '\x01')) {
              bVar4 = *(int *)(lVar3 + 0x40) < *(int *)(lVar1 + 0x40);
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          lVar1 = param_1[iVar7];
          lVar3 = param_1[iVar6];
          if (((*(byte *)(lVar1 + 0xf0) <= *(byte *)(lVar3 + 0xf0)) &&
              ((*(char *)(lVar3 + 0x44) == '\x01' || (*(char *)(lVar1 + 0x44) != '\x01')))) &&
             (*(int *)(lVar1 + 0x40) <= *(int *)(lVar3 + 0x40))) break;
          param_1[iVar6] = lVar1;
          param_1[iVar7] = lVar3;
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 142bd0960 FUN_142bd0960 body=606 status=ok
// SIG undefined FUN_142bd0960(void)

void FUN_142bd0960(undefined8 *param_1,int param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar9 = iVar6;
    do {
      while (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          lVar10 = param_1[iVar8];
          lVar1 = param_1[(longlong)iVar7 + 2];
          if (*(byte *)(lVar1 + 0xf0) < *(byte *)(lVar10 + 0xf0)) {
            bVar4 = true;
          }
          else if (*(byte *)(lVar1 + 0xf0) == *param_4) {
            if ((*(char *)(lVar1 + 0x44) == '\x01') && (*(char *)(lVar10 + 0x44) != '\x01')) {
              bVar4 = true;
            }
            else {
LAB_142bd09fc:
              bVar4 = *(int *)(lVar1 + 0x40) < *(int *)(lVar10 + 0x40);
            }
          }
          else {
            if ((*(char *)(lVar1 + 0x44) == '\x01') || (*(char *)(lVar10 + 0x44) != '\x01'))
            goto LAB_142bd09fc;
            bVar4 = true;
          }
          if (bVar4) {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        lVar10 = param_1[iVar8];
        lVar1 = param_1[iVar6];
        if (*(byte *)(lVar10 + 0xf0) <= *(byte *)(lVar1 + 0xf0)) {
          if (*(byte *)(lVar1 + 0xf0) == *param_4) {
            if ((*(char *)(lVar1 + 0x44) != '\x01') || (*(char *)(lVar10 + 0x44) == '\x01')) {
LAB_142bd0a59:
              if (*(int *)(lVar10 + 0x40) <= *(int *)(lVar1 + 0x40)) break;
            }
          }
          else if ((*(char *)(lVar1 + 0x44) == '\x01') || (*(char *)(lVar10 + 0x44) != '\x01'))
          goto LAB_142bd0a59;
        }
        param_1[iVar6] = lVar10;
        param_1[iVar8] = lVar1;
        iVar6 = iVar8;
        iVar7 = iVar8 * 2 + 1;
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar9 + -1;
      iVar5 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar2 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar2;
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            lVar1 = param_1[iVar7];
            lVar3 = param_1[(longlong)iVar5 + 2];
            if (*(byte *)(lVar3 + 0xf0) < *(byte *)(lVar1 + 0xf0)) {
              bVar4 = true;
            }
            else if (*(byte *)(lVar3 + 0xf0) == *param_4) {
              if ((*(char *)(lVar3 + 0x44) == '\x01') && (*(char *)(lVar1 + 0x44) != '\x01')) {
                bVar4 = true;
              }
              else {
LAB_142bd0b1e:
                bVar4 = *(int *)(lVar3 + 0x40) < *(int *)(lVar1 + 0x40);
              }
            }
            else {
              if ((*(char *)(lVar3 + 0x44) == '\x01') || (*(char *)(lVar1 + 0x44) != '\x01'))
              goto LAB_142bd0b1e;
              bVar4 = true;
            }
            if (bVar4) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          lVar1 = param_1[iVar7];
          lVar3 = param_1[iVar6];
          if (*(byte *)(lVar1 + 0xf0) <= *(byte *)(lVar3 + 0xf0)) {
            if (*(byte *)(lVar3 + 0xf0) == *param_4) {
              if ((*(char *)(lVar3 + 0x44) != '\x01') || (*(char *)(lVar1 + 0x44) == '\x01')) {
LAB_142bd0b7d:
                if (*(int *)(lVar1 + 0x40) <= *(int *)(lVar3 + 0x40)) break;
              }
            }
            else if ((*(char *)(lVar3 + 0x44) == '\x01') || (*(char *)(lVar1 + 0x44) != '\x01'))
            goto LAB_142bd0b7d;
          }
          param_1[iVar6] = lVar1;
          param_1[iVar7] = lVar3;
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 142bd0bc0 FUN_142bd0bc0 body=464 status=ok
// SIG undefined FUN_142bd0bc0(void)

void FUN_142bd0bc0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar5 = iVar8;
    iVar10 = iVar7;
joined_r0x000142bd0bf7:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          cVar6 = FUN_142bd6d10((longlong)param_1 + (longlong)iVar9 * 0xc,
                                (longlong)param_1 + (longlong)(iVar8 + 2) * 0xc);
          if (cVar6 != '\0') {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar11 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar9 * 0xc);
        cVar6 = FUN_142bd6d10(puVar1,puVar11);
        if (cVar6 != '\0') {
          if (puVar11 != puVar1) {
            uVar3 = *puVar11;
            uVar4 = *(undefined4 *)(puVar11 + 1);
            *puVar11 = *puVar1;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar1 = uVar3;
            *(undefined4 *)(puVar1 + 1) = uVar4;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000142bd0bf7;
        }
      }
      iVar8 = iVar5 + -2;
      iVar7 = iVar10 + -1;
      iVar5 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0xc);
    do {
      if (param_1 != puVar11) {
        uVar3 = *param_1;
        uVar4 = *(undefined4 *)(param_1 + 1);
        *param_1 = *puVar11;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar11 + 1);
        *puVar11 = uVar3;
        *(undefined4 *)(puVar11 + 1) = uVar4;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar7 * 2;
          iVar8 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            cVar6 = FUN_142bd6d10((longlong)param_1 + (longlong)iVar8 * 0xc,
                                  (longlong)param_1 + (longlong)(iVar5 + 2) * 0xc);
            if (cVar6 != '\0') {
              iVar8 = iVar5;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          cVar6 = FUN_142bd6d10(puVar2,puVar1);
          if (cVar6 == '\0') break;
          if (puVar1 != puVar2) {
            uVar3 = *puVar1;
            uVar4 = *(undefined4 *)(puVar1 + 1);
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar2 = uVar3;
            *(undefined4 *)(puVar2 + 1) = uVar4;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = (undefined8 *)((longlong)puVar11 + -0xc);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142bd0d90 FUN_142bd0d90 body=708 status=ok
// SIG undefined FUN_142bd0d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bd0d90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_318 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar11 = &local_328;
    do {
      plVar8 = (longlong *)*plVar11;
      plVar3 = (longlong *)plVar11[1];
      lVar1 = plVar11[2];
      local_338._0_4_ = (int)lVar1;
      lVar4 = (longlong)plVar3 - (longlong)plVar8;
      plVar9 = plVar8;
      plVar10 = plVar3;
      if ((int)local_338 != 0) {
LAB_142bd0e60:
        lVar5 = (lVar4 >> 3) + 1;
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = (lVar4 >> 3) + 2;
          }
          lVar4 = plVar9[lVar5 >> 1];
          plVar9[lVar5 >> 1] = *plVar9;
          plVar6 = plVar10 + 1;
          *plVar9 = lVar4;
          plVar8 = plVar9;
LAB_142bd0e90:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar10) goto code_r0x000142bd0e99;
          goto LAB_142bd0ec5;
        }
        for (; plVar3 = plVar9, plVar8 = plVar9, plVar9 < plVar10; plVar10 = plVar10 + -1) {
          while (plVar6 = plVar3, plVar8 = plVar8 + 1, plVar8 <= plVar10) {
            lVar1 = *plVar6;
            lVar4 = *plVar8;
            if (*(byte *)(lVar1 + 0xf0) < *(byte *)(lVar4 + 0xf0)) {
              bVar2 = true;
            }
            else if ((*(char *)(lVar1 + 0x44) == '\x01') || (*(char *)(lVar4 + 0x44) != '\x01')) {
              bVar2 = *(int *)(lVar1 + 0x40) < *(int *)(lVar4 + 0x40);
            }
            else {
              bVar2 = true;
            }
            plVar3 = plVar8;
            if (!bVar2) {
              plVar3 = plVar6;
            }
          }
          lVar1 = *plVar6;
          *plVar6 = *plVar10;
          *plVar10 = lVar1;
        }
        goto LAB_142bd0fa0;
      }
LAB_142bd0f91:
      local_338 = lVar1;
      FUN_142bd0770(plVar8,plVar3,param_3,param_4);
LAB_142bd0fa0:
      plVar11 = plVar11 + -3;
    } while (&local_328 <= plVar11);
  }
  return;
code_r0x000142bd0e99:
  lVar4 = *plVar9;
  lVar5 = *plVar8;
  if ((*(byte *)(lVar5 + 0xf0) <= *(byte *)(lVar4 + 0xf0)) &&
     (((*(char *)(lVar4 + 0x44) == '\x01' || (*(char *)(lVar5 + 0x44) != '\x01')) &&
      (*(int *)(lVar5 + 0x40) <= *(int *)(lVar4 + 0x40))))) goto LAB_142bd0e90;
LAB_142bd0ec5:
  while (plVar7 = plVar6, plVar6 = plVar7 + -1, plVar9 < plVar6) {
    lVar4 = *plVar6;
    lVar5 = *plVar9;
    if (((*(byte *)(lVar4 + 0xf0) < *(byte *)(lVar5 + 0xf0)) ||
        ((*(char *)(lVar4 + 0x44) != '\x01' && (*(char *)(lVar5 + 0x44) == '\x01')))) ||
       (*(int *)(lVar4 + 0x40) < *(int *)(lVar5 + 0x40))) break;
  }
  if (plVar8 <= plVar6) {
    lVar4 = *plVar8;
    *plVar8 = *plVar6;
    *plVar6 = lVar4;
    goto LAB_142bd0e90;
  }
  lVar4 = *plVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *plVar9 = *plVar6;
  *plVar6 = lVar4;
  if ((longlong)((longlong)plVar6 + (-8 - (longlong)plVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar10 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar10) {
      *plVar11 = (longlong)plVar8;
      plVar11[1] = (longlong)plVar10;
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (plVar6 <= plVar9 + 1) goto LAB_142bd0fa0;
    plVar10 = plVar7 + -2;
    plVar8 = plVar9;
  }
  else {
    if (plVar9 + 1 < plVar6) {
      *plVar11 = (longlong)plVar9;
      plVar11[1] = (longlong)(plVar7 + -2);
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (plVar10 <= plVar8) goto LAB_142bd0fa0;
  }
  lVar4 = (longlong)plVar10 - (longlong)plVar8;
  plVar9 = plVar8;
  if ((int)local_338 == 0) goto LAB_142bd0f91;
  goto LAB_142bd0e60;
}



// FUNCTION 142bd1060 FUN_142bd1060 body=825 status=ok
// SIG undefined FUN_142bd1060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142bd1060(longlong param_1,ulonglong param_2,undefined1 param_3,byte *param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  lStack_330 = param_1 + (param_2 - 1) * 8;
  fVar12 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar12 = fVar12 + 1.8446744e+19;
  }
  local_338 = param_1;
  fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
  local_328 = (undefined4)(longlong)(fVar12 + fVar12);
  _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
  plVar11 = &local_338;
LAB_142bd10f0:
  plVar2 = (longlong *)plVar11[1];
  local_348 = plVar11[2];
  lVar4 = (longlong)plVar2 - *plVar11;
  plVar3 = (longlong *)*plVar11;
  plVar10 = plVar2;
  iVar8 = (int)local_348;
  while (iVar8 != 0) {
    lVar5 = (lVar4 >> 3) + 1;
    if (lVar5 < 9) goto joined_r0x000142bd12f8;
    if (lVar5 < 0) {
      lVar5 = (lVar4 >> 3) + 2;
    }
    lVar4 = plVar3[lVar5 >> 1];
    plVar3[lVar5 >> 1] = *plVar3;
    plVar6 = plVar10 + 1;
    *plVar3 = lVar4;
    plVar9 = plVar3;
LAB_142bd1160:
    do {
      plVar9 = plVar9 + 1;
      if (plVar10 < plVar9) break;
      lVar4 = *plVar3;
      lVar5 = *plVar9;
      if (*(byte *)(lVar4 + 0xf0) < *(byte *)(lVar5 + 0xf0)) break;
      if (*(byte *)(lVar4 + 0xf0) != *param_4) {
        if ((*(char *)(lVar4 + 0x44) == '\x01') || (*(char *)(lVar5 + 0x44) != '\x01'))
        goto LAB_142bd11a8;
        break;
      }
      if ((*(char *)(lVar4 + 0x44) == '\x01') && (*(char *)(lVar5 + 0x44) != '\x01')) break;
LAB_142bd11a8:
    } while (*(int *)(lVar5 + 0x40) <= *(int *)(lVar4 + 0x40));
    do {
      plVar7 = plVar6;
      plVar6 = plVar7 + -1;
      if (plVar6 <= plVar3) break;
      lVar4 = *plVar6;
      lVar5 = *plVar3;
      if (*(byte *)(lVar4 + 0xf0) < *(byte *)(lVar5 + 0xf0)) break;
      if (*(byte *)(lVar4 + 0xf0) == *param_4) {
        if ((*(char *)(lVar4 + 0x44) == '\x01') && (*(char *)(lVar5 + 0x44) != '\x01')) break;
      }
      else if ((*(char *)(lVar4 + 0x44) != '\x01') && (*(char *)(lVar5 + 0x44) == '\x01')) break;
    } while (*(int *)(lVar5 + 0x40) <= *(int *)(lVar4 + 0x40));
    if (plVar9 <= plVar6) {
      lVar4 = *plVar9;
      *plVar9 = *plVar6;
      *plVar6 = lVar4;
      goto LAB_142bd1160;
    }
    lVar4 = *plVar3;
    iVar8 = iVar8 + -1;
    *plVar3 = *plVar6;
    *plVar6 = lVar4;
    if ((longlong)((longlong)plVar6 + (-8 - (longlong)plVar3) & 0xfffffffffffffff8U) <
        (longlong)((longlong)plVar10 - (longlong)plVar9 & 0xfffffffffffffff8U)) {
      if (plVar9 < plVar10) {
        *plVar11 = (longlong)plVar9;
        plVar11[1] = (longlong)plVar10;
        *(int *)(plVar11 + 2) = iVar8;
        plVar11 = plVar11 + 3;
      }
      if (plVar6 <= plVar3 + 1) goto LAB_142bd12a9;
      plVar10 = plVar7 + -2;
      plVar9 = plVar3;
    }
    else {
      if (plVar3 + 1 < plVar6) {
        *plVar11 = (longlong)plVar3;
        plVar11[1] = (longlong)(plVar7 + -2);
        *(int *)(plVar11 + 2) = iVar8;
        plVar11 = plVar11 + 3;
      }
      if (plVar10 <= plVar9) goto LAB_142bd12a9;
    }
    lVar4 = (longlong)plVar10 - (longlong)plVar9;
    plVar3 = plVar9;
  }
  FUN_142bd0960(plVar3,plVar2,param_3,param_4);
  goto LAB_142bd12a9;
joined_r0x000142bd12f8:
  for (; plVar6 = plVar3, plVar2 = plVar3, plVar3 < plVar10; plVar10 = plVar10 + -1) {
    while (plVar9 = plVar6, plVar2 = plVar2 + 1, plVar2 <= plVar10) {
      lVar4 = *plVar9;
      lVar5 = *plVar2;
      if (*(byte *)(lVar4 + 0xf0) < *(byte *)(lVar5 + 0xf0)) {
        bVar1 = true;
      }
      else if (*(byte *)(lVar4 + 0xf0) == *param_4) {
        if ((*(char *)(lVar4 + 0x44) == '\x01') && (*(char *)(lVar5 + 0x44) != '\x01')) {
          bVar1 = true;
        }
        else {
LAB_142bd135d:
          bVar1 = *(int *)(lVar4 + 0x40) < *(int *)(lVar5 + 0x40);
        }
      }
      else {
        if ((*(char *)(lVar4 + 0x44) == '\x01') || (*(char *)(lVar5 + 0x44) != '\x01'))
        goto LAB_142bd135d;
        bVar1 = true;
      }
      plVar6 = plVar2;
      if (!bVar1) {
        plVar6 = plVar9;
      }
    }
    lVar4 = *plVar9;
    *plVar9 = *plVar10;
    *plVar10 = lVar4;
  }
LAB_142bd12a9:
  plVar11 = plVar11 + -3;
  if (plVar11 < &local_338) {
    return;
  }
  goto LAB_142bd10f0;
}



// FUNCTION 142bd13a0 FUN_142bd13a0 body=885 status=ok
// SIG undefined FUN_142bd13a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bd13a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  undefined8 *puVar6;
  undefined8 *puVar8;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0xc + -0xc;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    local_338 = (undefined4)(longlong)(fVar13 + fVar13);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar9 = &local_348;
    do {
      puVar7 = (undefined8 *)*plVar9;
      puVar12 = (undefined8 *)plVar9[1];
      local_358 = plVar9[2];
      lVar4 = ((longlong)puVar12 - (longlong)puVar7) / 0xc + 1;
      puVar11 = puVar7;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142bd14a0:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar7 = (undefined8 *)((longlong)puVar11 + (lVar4 >> 1) * 0xc);
          if (puVar7 != puVar11) {
            uVar1 = *puVar7;
            uVar2 = *(undefined4 *)(puVar7 + 1);
            *puVar7 = *puVar11;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
            *puVar11 = uVar1;
            *(undefined4 *)(puVar11 + 1) = uVar2;
          }
          puVar5 = (undefined8 *)((longlong)puVar12 + 0xc);
          puVar7 = puVar11;
LAB_142bd14f0:
          puVar8 = puVar7;
          puVar7 = (undefined8 *)((longlong)puVar8 + 0xc);
          if (puVar7 <= puVar12) goto code_r0x000142bd14f9;
          goto LAB_142bd1510;
        }
        for (; puVar5 = puVar11, puVar7 = puVar11, puVar11 < puVar12;
            puVar12 = (undefined8 *)((longlong)puVar12 + -0xc)) {
          while (puVar8 = puVar5, puVar7 = (undefined8 *)((longlong)puVar7 + 0xc), puVar7 <= puVar12
                ) {
            cVar3 = FUN_142bd6d10(puVar7,puVar8);
            puVar5 = puVar7;
            if (cVar3 == '\0') {
              puVar5 = puVar8;
            }
          }
          if (puVar8 != puVar12) {
            uVar1 = *puVar8;
            uVar2 = *(undefined4 *)(puVar8 + 1);
            *puVar8 = *puVar12;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
            *puVar12 = uVar1;
            *(undefined4 *)(puVar12 + 1) = uVar2;
          }
        }
        goto LAB_142bd164c;
      }
LAB_142bd1633:
      FUN_142bd0bc0(puVar7,lVar4,param_3,param_4);
LAB_142bd164c:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  return;
code_r0x000142bd14f9:
  cVar3 = FUN_142bd6d10(puVar7,puVar11);
  if (cVar3 == '\0') goto LAB_142bd14f0;
LAB_142bd1510:
  do {
    puVar6 = puVar5;
    puVar5 = (undefined8 *)((longlong)puVar6 + -0xc);
    if (puVar5 <= puVar11) break;
    cVar3 = FUN_142bd6d10(puVar11,puVar5);
  } while (cVar3 == '\0');
  if (puVar7 <= puVar5) {
    if (puVar7 != puVar5) {
      uVar1 = *puVar7;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0x14);
      *puVar7 = *puVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)((longlong)puVar6 + -4);
      *puVar5 = uVar1;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar2;
    }
    goto LAB_142bd14f0;
  }
  if (puVar11 != puVar5) {
    uVar1 = *puVar11;
    uVar2 = *(undefined4 *)(puVar11 + 1);
    *puVar11 = *puVar5;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar6 + -4);
    *puVar5 = uVar1;
    *(undefined4 *)((longlong)puVar6 + -4) = uVar2;
  }
  lVar4 = (longlong)puVar5 + (-0xc - (longlong)puVar11);
  iVar10 = iVar10 + -1;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)puVar12 - (longlong)puVar7) / 0xc) {
    if (puVar7 < puVar12) {
      *plVar9 = (longlong)puVar7;
      plVar9[1] = (longlong)puVar12;
      *(int *)(plVar9 + 2) = iVar10;
      plVar9 = plVar9 + 3;
    }
    if (puVar5 <= (undefined8 *)((longlong)puVar11 + 0xcU)) goto LAB_142bd164c;
    puVar12 = puVar6 + -3;
    puVar7 = puVar11;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0xcU) < puVar5) {
      *plVar9 = (longlong)puVar11;
      plVar9[1] = (longlong)(puVar6 + -3);
      *(int *)(plVar9 + 2) = iVar10;
      plVar9 = plVar9 + 3;
    }
    if (puVar12 <= puVar7) goto LAB_142bd164c;
  }
  lVar4 = ((longlong)puVar12 - (longlong)puVar7) / 0xc + 1;
  puVar11 = puVar7;
  if (iVar10 == 0) goto LAB_142bd1633;
  goto LAB_142bd14a0;
}



// FUNCTION 142bd1720 FUN_142bd1720 body=64 status=ok
// SIG undefined FUN_142bd1720(void)

void FUN_142bd1720(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_145802360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 142bd1760 FUN_142bd1760 body=195 status=ok
// SIG undefined FUN_142bd1760(void)

undefined8 * FUN_142bd1760(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"PathFollowingComponent");
  uVar1 = AInteractiveFoliageActor::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PathFollowingComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_142bb0cb0(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1457ff258;
  param_1[0x8b] = &PTR_LAB_1457ffb38;
  param_1[0xa1] = &PTR_LAB_1457ffb90;
  param_1[0xa2] = &PTR_LAB_1457ffba8;
  param_1[0xa3] = &PTR_LAB_1457ffbf0;
  param_1[0xa4] = &PTR_LAB_1457ffc18;
  return param_1;
}



// FUNCTION 142bd1830 FUN_142bd1830 body=561 status=ok
// SIG undefined FUN_142bd1830(void)

undefined8 * FUN_142bd1830(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FUN_1422ff290();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145801408;
  param_1[0x8b] = &PTR_LAB_145801d60;
  param_1[0x116] = &PTR_LAB_145801db8;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0;
  *(undefined4 *)(param_1 + 0x122) = 0xffffffff;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(uint *)((longlong)param_1 + 0x93c) = *(uint *)((longlong)param_1 + 0x93c) | 7;
  *(undefined4 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x126) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x128) = 3;
  *(uint *)(param_1 + 0x129) = *(uint *)(param_1 + 0x129) & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x94c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12a) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0xbf800000;
  *(undefined4 *)(param_1 + 299) = 0x3f000000;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b2c748) {
    _Init_thread_header(&DAT_146b2c748);
    if (DAT_146b2c748 == -1) {
      FName::FName(&DAT_146b2c740,L"NoCollision",1);
      _Init_thread_footer(&DAT_146b2c748);
    }
  }
  (**(code **)(*(longlong *)param_1[0x9a] + 0x640))((longlong *)param_1[0x9a],DAT_146b2c740);
  *(undefined4 *)(param_1 + 0x129) = DAT_1465318f0;
  *(undefined4 *)((longlong)param_1 + 0x94c) = DAT_1465318f4;
  *(undefined4 *)(param_1 + 0x12a) = DAT_1465318f8;
  *(undefined4 *)((longlong)param_1 + 0x954) = DAT_1465318fc;
  *(undefined4 *)(param_1 + 299) = DAT_146531900;
  local_28 = DAT_146531908;
  FString::FString(local_20,&DAT_146531910);
  FSoftObjectPath::operator=(param_1 + 300,&local_28);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 4;
  if (param_1[0x99] != 0) {
    *(undefined1 *)(param_1[0x99] + 0x4b0) = 0;
  }
  return param_1;
}



// FUNCTION 142bd1a70 FAIDataProviderBoolValue body=59 status=ok
// SIG undefined FAIDataProviderBoolValue(void)

undefined8 * FAIDataProviderBoolValue::FAIDataProviderBoolValue(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_ValueToString_1457f8848;
  *(undefined1 *)(param_1 + 5) = 0;
  uVar1 = UBoolProperty::GetPrivateStaticClass();
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 142bd1ab0 FAIDataProviderFloatValue body=58 status=ok
// SIG undefined FAIDataProviderFloatValue(void)

undefined8 * FAIDataProviderFloatValue::FAIDataProviderFloatValue(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 142bd1af0 FAIDataProviderIntValue body=58 status=ok
// SIG undefined FAIDataProviderIntValue(void)

undefined8 * FAIDataProviderIntValue::FAIDataProviderIntValue(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_ValueToString_1457f8818;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = UIntProperty::GetPrivateStaticClass();
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 142bd1b30 FUN_142bd1b30 body=412 status=ok
// SIG undefined FUN_142bd1b30(void)

undefined8 *
FUN_142bd1b30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = param_2;
  param_1[1] = *param_5;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_5 + 1);
  param_1[3] = *param_4;
  param_1[4] = param_4[1];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_4 + 2);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_4 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_4 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_4 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_4 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_4 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_4 + 0x16);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 3);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 4);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_4 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_4 + 0x25);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_4 + 10);
  puVar3 = (undefined8 *)param_4[9];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(param_1 + 8,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_4 + 5;
    }
    puVar2 = (undefined8 *)param_1[0xc];
    if ((undefined8 *)param_1[0xc] == (undefined8 *)0x0) {
      puVar2 = param_1 + 8;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_4 + 0xe);
  puVar3 = (undefined8 *)param_4[0xd];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0xe,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_4 + 0xb;
    }
    puVar2 = (undefined8 *)param_1[0x10];
    if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
      puVar2 = param_1 + 0xe;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x94) = param_6;
  *(undefined4 *)(param_1 + 0x12) = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142bd1cd0 FEQSParametrizedQueryExecutionRequest body=48 status=ok
// SIG undefined FEQSParametrizedQueryExecutionRequest(void)

undefined8 *
FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffc;
  return param_1;
}



// FUNCTION 142bd1d00 FUN_142bd1d00 body=686 status=ok
// SIG undefined FUN_142bd1d00(void)

undefined8 *
FUN_142bd1d00(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  
  FUN_1423e4560();
  lVar11 = 0;
  *param_1 = &PTR_FUN_145800920;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d6) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x91) = 2;
  *(undefined4 *)(param_1 + 0x8d) = 0x44bb8000;
  if (*(int *)(param_3 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_3;
  }
  uVar7 = FUN_1427703d0(puVar12,0);
  *(undefined4 *)(param_1 + 0x8a) = uVar7;
  FString::operator=(param_1 + 0x8b,param_3);
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfeffffff;
  puVar1 = param_1 + 0x80;
  if (puVar1 != param_4) {
    iVar13 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
    *(int *)(param_1 + 0x81) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x40c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    }
    else {
      FUN_1409b7fb0(puVar1,iVar13);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar13 * 0x14);
    }
  }
  plVar2 = param_1 + 0x82;
  if (plVar2 != param_5) {
    plVar14 = (longlong *)*plVar2;
    for (iVar13 = *(int *)(param_1 + 0x83); iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 6;
    }
    iVar13 = (int)param_5[1];
    lVar9 = *param_5;
    *(int *)(param_1 + 0x83) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x41c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar2,iVar13);
      if (iVar13 != 0) {
        puVar15 = (undefined4 *)(*plVar2 + 0x1c);
        lVar9 = lVar9 - *plVar2;
        do {
          FString::FString(puVar15 + -7,lVar9 + -0x1c + (longlong)puVar15);
          *(undefined8 *)(puVar15 + -3) = *(undefined8 *)(lVar9 + -0xc + (longlong)puVar15);
          puVar15[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar15);
          puVar3 = (undefined4 *)(lVar9 + (longlong)puVar15);
          uVar7 = puVar3[1];
          uVar4 = puVar3[2];
          uVar5 = puVar3[3];
          *puVar15 = *puVar3;
          puVar15[1] = uVar7;
          puVar15[2] = uVar4;
          puVar15[3] = uVar5;
          puVar15 = puVar15 + 0xc;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  if (param_2 != 0) {
    lVar9 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (uVar8 = 1, (*(byte *)(param_2 + 0x700) & 1) != 0)) goto LAB_142bd1f43;
  }
  uVar8 = 0;
LAB_142bd1f43:
  *(uint *)(param_1 + 0x9d) = *(uint *)(param_1 + 0x9d) & 0xfffffffe;
  *(uint *)(param_1 + 0x9d) = *(uint *)(param_1 + 0x9d) | uVar8;
  lVar9 = *(longlong *)(param_2 + 0x118);
  param_1[0x9b] = lVar9;
  if (lVar9 != 0) {
    uVar10 = UEQSQueryResultSourceInterface::GetPrivateStaticClass();
    lVar11 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar10);
  }
  param_1[0x9c] = lVar11;
  if (lVar11 == 0) {
    uVar10 = UEQSQueryResultSourceInterface::GetPrivateStaticClass();
    uVar10 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar10);
    param_1[0x9c] = uVar10;
  }
  return param_1;
}



// FUNCTION 142bd1fb0 FEnvQueryContextData body=114 status=ok
// SIG undefined FEnvQueryContextData(void)

undefined8 * FEnvQueryContextData::FEnvQueryContextData(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 142bd2030 FUN_142bd2030 body=249 status=ok
// SIG undefined FUN_142bd2030(void)

undefined8 * FUN_142bd2030(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((longlong)param_1 + 0x181) = 0;
  FUN_142bd6900();
  return param_1;
}



// FUNCTION 142bd2130 FUN_142bd2130 body=309 status=ok
// SIG undefined FUN_142bd2130(void)

undefined8 * FUN_142bd2130(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(byte *)((longlong)param_1 + 0x156) = *(byte *)((longlong)param_1 + 0x156) & 0xf8;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x181) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  return param_1;
}



// FUNCTION 142bd2270 FUN_142bd2270 body=310 status=ok
// SIG undefined FUN_142bd2270(void)

undefined8 * FUN_142bd2270(undefined8 *param_1,longlong param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  *param_1 = param_3;
  iVar3 = param_4;
  if (param_4 == -1) {
    iVar3 = (int)param_3[0x27];
  }
  *(int *)(param_1 + 1) = iVar3;
  if (param_4 == -1) {
    iVar3 = (int)param_3[0x27];
    *(int *)(param_1 + 1) = iVar3;
    if ((((iVar3 < 0) || ((int)param_3[1] <= iVar3)) ||
        (uVar1 = *(uint *)(*param_3 + 4 + (longlong)iVar3 * 0xc), (uVar1 >> 0x1e & 1) != 0)) ||
       ((int)uVar1 < 0)) {
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 1) = iVar3;
      if (iVar3 < (int)param_3[1]) {
        do {
          uVar1 = *(uint *)(*param_3 + 4 + (longlong)iVar3 * 0xc);
          if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) break;
          iVar3 = iVar3 + 1;
          *(int *)(param_1 + 1) = iVar3;
        } while (iVar3 < (int)param_3[1]);
      }
    }
  }
  else {
    *(int *)(param_1 + 1) = param_4;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x59);
  bVar2 = 4;
  if ((*(byte *)(param_2 + 0x44) & 0xfd) != 0) {
    bVar2 = 0;
  }
  bVar2 = *(byte *)((longlong)param_1 + 0x22) & 0xfb | bVar2;
  *(byte *)((longlong)param_1 + 0x22) = bVar2;
  if (*(float *)((longlong)param_3 + 0x164) <= 0.0) {
    dVar4 = -1.0;
  }
  else {
    QueryPerformanceCounter(&local_res8);
    bVar2 = *(byte *)((longlong)param_1 + 0x22);
    dVar4 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0 +
            (double)*(float *)((longlong)param_3 + 0x164);
  }
  param_1[3] = 0;
  *(byte *)((longlong)param_1 + 0x22) = bVar2 & 0xfd | 1;
  param_1[2] = dVar4;
  return param_1;
}



// FUNCTION 142bd23b0 FUN_142bd23b0 body=304 status=ok
// SIG undefined FUN_142bd23b0(void)

undefined8 * FUN_142bd23b0(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *local_res8;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457fead0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bd2443;
  }
  lVar3 = 0;
LAB_142bd2443:
  FWeakObjectPtr::operator=((longlong)param_1 + 0x54,lVar3);
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x1000000;
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x54);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x150), lVar3 != 0)) {
      lVar2 = FUN_142c32730();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_res8 = param_1;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0xb0,&local_res8);
      }
    }
  }
  return param_1;
}



// FUNCTION 142bd24e0 UAIDataProvider body=33 status=ok
// SIG undefined UAIDataProvider(void)

undefined8 * UAIDataProvider::UAIDataProvider(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457f8860;
  return param_1;
}



// FUNCTION 142bd2510 UAIDataProvider_Random body=53 status=ok
// SIG undefined UAIDataProvider_Random(void)

undefined8 * UAIDataProvider_Random::UAIDataProvider_Random(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  *param_1 = &PTR_FUN_1457fefd0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return param_1;
}



// FUNCTION 142bd2550 FUN_142bd2550 body=397 status=ok
// SIG undefined FUN_142bd2550(void)

undefined8 * FUN_142bd2550(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UBTCompositeNode::UBTCompositeNode();
  uStack_10 = 9;
  *param_1 = &PTR_FUN_1457f60e8;
  param_1[5] = &PTR_LAB_1457f63f8;
  local_18 = (undefined1 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = (longlong)local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,9,"Selector",9,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_10._4_4_;
  }
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = &LAB_142be5350;
  plVar1 = param_1 + 0xf;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14407c870;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_10._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
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
  return param_1;
}



// FUNCTION 142bd26e0 FUN_142bd26e0 body=397 status=ok
// SIG undefined FUN_142bd26e0(void)

undefined8 * FUN_142bd26e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UBTCompositeNode::UBTCompositeNode();
  uStack_10 = 9;
  *param_1 = &PTR_FUN_1457f60e8;
  param_1[5] = &PTR_LAB_1457f63f8;
  local_18 = (undefined1 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = (longlong)local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,9,"Sequence",9,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_10._4_4_;
  }
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = &LAB_142be5380;
  plVar1 = param_1 + 0xf;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14407c870;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_10._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
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
  return param_1;
}



// FUNCTION 142bd2870 FUN_142bd2870 body=404 status=ok
// SIG undefined FUN_142bd2870(void)

undefined8 * FUN_142bd2870(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UBTCompositeNode::UBTCompositeNode();
  uStack_10 = 0x10;
  *param_1 = &PTR_FUN_1457f6440;
  param_1[5] = &PTR_LAB_1457f6750;
  local_18 = (undefined1 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = (longlong)local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x10,"Simple Parallel",0x10,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_10._4_4_;
  }
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 0x2b;
  local_18 = &LAB_142be53b0;
  uStack_10 = uStack_10 & 0xffffffff00000000;
  plVar1 = param_1 + 0xf;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14407c870;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_10._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
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
  return param_1;
}



// FUNCTION 142bd2a10 UBTDecorator_Blackboard body=224 status=ok
// SIG undefined UBTDecorator_Blackboard(void)

undefined8 * UBTDecorator_Blackboard::UBTDecorator_Blackboard(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase();
  local_10 = 0x1b;
  *param_1 = &PTR__scalar_deleting_destructor__1457f6af0;
  param_1[5] = &PTR_LAB_1457f6e00;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_18,0x1b,"Blackboard Based Condition",0x1b,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  return param_1;
}



// FUNCTION 142bd2af0 UBTDecorator_BlackboardBase body=226 status=ok
// SIG undefined UBTDecorator_BlackboardBase(void)

undefined8 * UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0xf;
  *param_1 = &PTR__scalar_deleting_destructor__1457f6798;
  param_1[5] = &PTR_LAB_1457f6aa8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"BlackboardBase",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 142bd2be0 UBTDecorator_BlueprintBase body=744 status=ok
// SIG undefined UBTDecorator_BlueprintBase(void)

undefined8 * UBTDecorator_BlueprintBase::UBTDecorator_BlueprintBase(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  UBTDecorator::UBTDecorator();
  *param_1 = &PTR__scalar_deleting_destructor__1457f6e48;
  param_1[5] = &PTR_LAB_1457f7150;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar3 = GetPrivateStaticClass();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveTickAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveTick",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffffe7;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 3;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveExecutionStartAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveExecutionStart",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffff9f;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 5;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveExecutionFinishAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveExecutionFinish",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffe7f;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 7;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveObserverActivatedAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveObserverActivated",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffff9ff;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 9;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveObserverDeactivatedAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveObserverDeactivated",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffe7ff;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 0xb;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"PerformConditionCheckAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"PerformConditionCheck",1);
  iVar2 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  uVar1 = *(uint *)(param_1 + 0x13);
  uVar6 = (iVar2 << 0xd ^ *(uint *)(param_1 + 0x13)) & 0x6000 ^ uVar1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7;
  *(byte *)(param_1 + 0xb) =
       (uVar6 & 0x600) != 0 | *(byte *)(param_1 + 0xb) & 0xf9 | -((uVar6 & 0x1800) != 0) & 2U |
       -((uVar1 & 0x18) != 0) & 4U;
  *(uint *)(param_1 + 0x13) = uVar6 & 0xfffffff9 | 1;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  *(uint *)(param_1 + 0xc) =
       -(uint)((uVar1 & 0x60) != 0) & 8 | *(uint *)(param_1 + 0xc) & 0xffffffef |
       -(uint)((uVar6 & 0x180) != 0) & 0x10;
  return param_1;
}



// FUNCTION 142bd2ed0 UBTDecorator_CheckGameplayTagsOnActor body=340 status=ok
// SIG undefined UBTDecorator_CheckGameplayTagsOnActor(void)

undefined8 *
UBTDecorator_CheckGameplayTagsOnActor::UBTDecorator_CheckGameplayTagsOnActor(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0x17;
  *param_1 = &PTR__scalar_deleting_destructor__1457f7198;
  param_1[5] = &PTR_LAB_1457f74a0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x17,"Gameplay Tag Condition",0x17,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ActorToCheck",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xd,param_1,*puVar4,uVar3);
  uVar3 = DAT_146b2c600;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8;
  param_1[0xf] = uVar3;
  return param_1;
}



// FUNCTION 142bd3030 UBTDecorator_CompareBBEntries body=275 status=ok
// SIG undefined UBTDecorator_CompareBBEntries(void)

undefined8 * UBTDecorator_CompareBBEntries::UBTDecorator_CompareBBEntries(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0x1b;
  *param_1 = &PTR__scalar_deleting_destructor__1457f74e8;
  param_1[5] = &PTR_LAB_1457f77f8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_18,0x1b,"Compare Blackboard entries",0x1b,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 142bd3150 FUN_142bd3150 body=397 status=ok
// SIG undefined FUN_142bd3150(void)

undefined8 * FUN_142bd3150(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase();
  local_10 = 0x1b;
  local_18 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457f6af0;
  param_1[5] = &PTR_LAB_1457f6e00;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_18,0x1b,"Blackboard Based Condition",0x1b,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457f7840;
  local_18 = 0;
  param_1[5] = &PTR_LAB_1457f6e00;
  local_10 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x11,"Conditional Loop",0x11,0x3f);
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8 | 0x10;
  return param_1;
}



// FUNCTION 142bd32e0 UBTDecorator_ConeCheck body=590 status=ok
// SIG undefined UBTDecorator_ConeCheck(void)

undefined8 * UBTDecorator_ConeCheck::UBTDecorator_ConeCheck(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  UBTDecorator::UBTDecorator();
  puVar6 = param_1 + 0x13;
  local_20 = 0xb;
  puVar2 = param_1 + 0x18;
  *param_1 = &PTR__scalar_deleting_destructor__1457f7b50;
  param_1[5] = &PTR_LAB_1457f7e58;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *puVar6 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  *puVar2 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xb,"Cone Check",0xb,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar3;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeOrigin",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeOrigin",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar5);
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeDirection",1);
  FBlackboardKeySelector::AddObjectFilter(puVar6,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeDirection",1);
  FBlackboardKeySelector::AddVectorFilter(puVar6,param_1,*puVar5);
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) | 1;
  uVar4 = FUN_1428dfc70();
  puVar6 = (undefined8 *)FName::FName(local_res8,L"Observed",1);
  FBlackboardKeySelector::AddObjectFilter(puVar2,param_1,*puVar6,uVar4);
  puVar6 = (undefined8 *)FName::FName(local_res8,L"Observed",1);
  FBlackboardKeySelector::AddVectorFilter(puVar2,param_1,*puVar6);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 5;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x42340000;
  return param_1;
}



// FUNCTION 142bd3530 UBTDecorator_Cooldown body=208 status=ok
// SIG undefined UBTDecorator_Cooldown(void)

undefined8 * UBTDecorator_Cooldown::UBTDecorator_Cooldown(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 9;
  *param_1 = &PTR__scalar_deleting_destructor__1457f7ea0;
  param_1[5] = &PTR_LAB_1441d5298;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,9,"Cooldown",9,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  *(undefined4 *)(param_1 + 0xd) = 0x40a00000;
  return param_1;
}



// FUNCTION 142bd3600 UBTDecorator_DoesPathExist body=477 status=ok
// SIG undefined UBTDecorator_DoesPathExist(void)

undefined8 * UBTDecorator_DoesPathExist::UBTDecorator_DoesPathExist(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  UBTDecorator::UBTDecorator();
  puVar2 = param_1 + 0x12;
  local_20 = 0x10;
  *param_1 = &PTR__scalar_deleting_destructor__1457f81a8;
  param_1[5] = &PTR_LAB_1457f84b0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *puVar2 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(uint *)((longlong)param_1 + 0xb4) = *(uint *)((longlong)param_1 + 0xb4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x16) = 0xff;
  param_1[0x18] = 0;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0x10,"Does path exist",0x10,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar3;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeyA",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xd,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeyA",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xd,param_1,*puVar5);
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeyB",1);
  FBlackboardKeySelector::AddObjectFilter(puVar2,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeyB",1);
  FBlackboardKeySelector::AddVectorFilter(puVar2,param_1,*puVar5);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff9 | 1;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xf] = DAT_146b2c600;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return param_1;
}



// FUNCTION 142bd37e0 UBTDecorator_ForceSuccess body=162 status=ok
// SIG undefined UBTDecorator_ForceSuccess(void)

undefined8 * UBTDecorator_ForceSuccess::UBTDecorator_ForceSuccess(undefined8 *param_1)

{
  int iVar1;
  
  UBTDecorator::UBTDecorator();
  *param_1 = &PTR__scalar_deleting_destructor__1457f84f8;
  param_1[5] = &PTR_LAB_1440747b8;
  if ((wchar_t *)param_1[6] != L"Force Success") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0xe);
      iVar1 = *(int *)(param_1 + 7);
    }
    *(int *)(param_1 + 7) = iVar1 + 0xe;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6);
    }
    builtin_wcsncpy((wchar_t *)param_1[6],L"Force Success",0xe);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8 | 0x20;
  return param_1;
}



// FUNCTION 142bd3890 UBTDecorator_IsAtLocation body=375 status=ok
// SIG undefined UBTDecorator_IsAtLocation(void)

undefined8 * UBTDecorator_IsAtLocation::UBTDecorator_IsAtLocation(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457f8ae8;
  param_1[5] = &PTR_LAB_1457f8df8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar3 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x17] = uVar3;
  local_18 = 0;
  local_10 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"Is At Location",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)((longlong)param_1 + 0xcc) = *(uint *)((longlong)param_1 + 0xcc) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0xcc) = *(uint *)((longlong)param_1 + 0xcc) | 6;
  *(undefined4 *)(param_1 + 0x12) = 0x42480000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xd,param_1,*puVar4,uVar3);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xd,param_1,*puVar4);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 142bd3a10 UBTDecorator_IsBBEntryOfClass body=237 status=ok
// SIG undefined UBTDecorator_IsBBEntryOfClass(void)

undefined8 * UBTDecorator_IsBBEntryOfClass::UBTDecorator_IsBBEntryOfClass(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase();
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457f8e40;
  param_1[5] = &PTR_LAB_1457f9150;
  param_1[0x12] = 0;
  if ((wchar_t *)param_1[6] != L"Is BlackBoard value of given Class") {
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0x23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0x23);
      iVar3 = *(int *)(param_1 + 7);
    }
    *(int *)(param_1 + 7) = iVar3 + 0x23;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar3 + 0x23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6);
    }
    builtin_wcsncpy((wchar_t *)param_1[6],L"Is BlackBoard value of given Class",0x23);
  }
  uVar1 = UObject::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xd,param_1,*puVar2,uVar1);
  return param_1;
}



// FUNCTION 142bd3b00 UBTDecorator_KeepInCone body=472 status=ok
// SIG undefined UBTDecorator_KeepInCone(void)

undefined8 * UBTDecorator_KeepInCone::UBTDecorator_KeepInCone(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  UBTDecorator::UBTDecorator();
  puVar2 = param_1 + 0x13;
  local_20 = 0xd;
  *param_1 = &PTR__scalar_deleting_destructor__1457f9198;
  param_1[5] = &PTR_LAB_1457f94a0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *puVar2 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xd,"Keep in Cone",0xd,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar3;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeOrigin",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"ConeOrigin",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar5);
  uVar4 = FUN_1428dfc70();
  puVar5 = (undefined8 *)FName::FName(local_res8,L"Observed",1);
  FBlackboardKeySelector::AddObjectFilter(puVar2,param_1,*puVar5,uVar4);
  puVar5 = (undefined8 *)FName::FName(local_res8,L"Observed",1);
  FBlackboardKeySelector::AddVectorFilter(puVar2,param_1,*puVar5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 5;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
  *(undefined1 *)((longlong)param_1 + 100) = 2;
  param_1[0x10] = DAT_146b2c600;
  *(undefined4 *)(param_1 + 0xd) = 0x42340000;
  return param_1;
}



// FUNCTION 142bd3ce0 UBTDecorator_Loop body=215 status=ok
// SIG undefined UBTDecorator_Loop(void)

undefined8 * UBTDecorator_Loop::UBTDecorator_Loop(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 5;
  *param_1 = &PTR__scalar_deleting_destructor__1457f94e8;
  param_1[5] = &PTR_LAB_1457f97f0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,5,&DAT_1457efd04,5,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined4 *)(param_1 + 0xd) = 3;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8 | 8;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  return param_1;
}



// FUNCTION 142bd3dc0 UBTDecorator_ReachedMoveGoal body=197 status=ok
// SIG undefined UBTDecorator_ReachedMoveGoal(void)

undefined8 * UBTDecorator_ReachedMoveGoal::UBTDecorator_ReachedMoveGoal(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__1457f9838;
  param_1[5] = &PTR_LAB_1440747b8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x12,"Reached move goal",0x12,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 142bd3e90 UBTDecorator_SetTagCooldown body=216 status=ok
// SIG undefined UBTDecorator_SetTagCooldown(void)

undefined8 * UBTDecorator_SetTagCooldown::UBTDecorator_SetTagCooldown(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0x11;
  *param_1 = &PTR__scalar_deleting_destructor__1457f9b40;
  param_1[5] = &PTR_LAB_1457f97f0;
  param_1[0xd] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x11,"Set Tag Cooldown",0x11,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  *(undefined4 *)(param_1 + 0xe) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 142bd3f70 UBTDecorator_TagCooldown body=218 status=ok
// SIG undefined UBTDecorator_TagCooldown(void)

undefined8 * UBTDecorator_TagCooldown::UBTDecorator_TagCooldown(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 0xd;
  *param_1 = &PTR__scalar_deleting_destructor__1457f9e48;
  param_1[5] = &PTR_LAB_1457f97f0;
  param_1[0xd] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xd,"Tag Cooldown",0xd,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  *(undefined4 *)(param_1 + 0xe) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
  return param_1;
}



// FUNCTION 142bd4050 UBTDecorator_TimeLimit body=216 status=ok
// SIG undefined UBTDecorator_TimeLimit(void)

undefined8 * UBTDecorator_TimeLimit::UBTDecorator_TimeLimit(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTDecorator::UBTDecorator();
  local_10 = 10;
  *param_1 = &PTR__scalar_deleting_destructor__1457fa150;
  param_1[5] = &PTR_LAB_1441d5298;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,10,"TimeLimit",10,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0xc;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc | 8;
  *(undefined4 *)(param_1 + 0xd) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 100) = 2;
  return param_1;
}



// FUNCTION 142bd4130 UBTService_BlackboardBase body=242 status=ok
// SIG undefined UBTService_BlackboardBase(void)

undefined8 * UBTService_BlackboardBase::UBTService_BlackboardBase(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTService::UBTService();
  local_10 = 0xf;
  *param_1 = &PTR__scalar_deleting_destructor__1457fa458;
  param_1[5] = &PTR_LAB_1457fa748;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"BlackboardBase",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd4230 UBTService_BlueprintBase body=551 status=ok
// SIG undefined UBTService_BlueprintBase(void)

undefined8 * UBTService_BlueprintBase::UBTService_BlueprintBase(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  UBTService::UBTService();
  *param_1 = &PTR__scalar_deleting_destructor__1457fa790;
  param_1[5] = &PTR_LAB_1457faa80;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar3 = GetPrivateStaticClass();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveTickAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveTick",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffff3;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | (uVar1 & 3) << 2;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveActivationAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveActivation",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xffffffcf;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | (uVar1 & 3) << 4;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveDeactivationAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveDeactivation",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xffffff3f;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | (uVar1 & 3) << 6;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveSearchStartAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveSearchStart",1);
  iVar2 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffb;
  uVar1 = *(uint *)(param_1 + 0x12);
  uVar6 = (iVar2 << 8 ^ *(uint *)(param_1 + 0x12)) & 0x300 ^ uVar1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | -(uint)((uVar6 & 0x300) != 0) & 4;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  *(byte *)(param_1 + 0xb) =
       (uVar6 & 0x30) != 0 | *(byte *)(param_1 + 0xb) & 0xf9 | -((uVar1 & 0xc0) != 0) & 2U |
       -((uVar1 & 0xc) != 0) & 4U;
  *(uint *)(param_1 + 0x12) = uVar6 | 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    FUN_142bb6220(param_1,uVar3,param_1 + 0x10);
  }
  return param_1;
}



// FUNCTION 142bd4460 UBTService_DefaultFocus body=291 status=ok
// SIG undefined UBTService_DefaultFocus(void)

undefined8 * UBTService_DefaultFocus::UBTService_DefaultFocus(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTService_BlackboardBase::UBTService_BlackboardBase();
  local_10 = 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__1440751b8;
  param_1[5] = &PTR_LAB_1440754a8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x12,"Set default focus",0x12,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar4,uVar3);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar4);
  return param_1;
}



// FUNCTION 142bd4590 FUN_142bd4590 body=587 status=ok
// SIG undefined FUN_142bd4590(void)

undefined8 * FUN_142bd4590(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  UBTService_BlackboardBase::UBTService_BlackboardBase();
  uStack_20 = 0x21;
  local_28 = (code *)0x0;
  *param_1 = &PTR_FUN_1457faac8;
  plVar1 = param_1 + 0x1c;
  param_1[5] = &PTR_LAB_1457fadb8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) & 0xfffffffc;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar6 = (longlong)local_28;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28,0x21,"Run EQS query on a regular basis",0x21,0x3f);
  plVar5 = param_1 + 6;
  if (plVar5 == &local_28) {
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  else {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = lVar6;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 2;
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar4,uVar3);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar4);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_28 = FUN_142beba80;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_20._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144089968;
  }
  if (&local_28 != plVar1) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x1d) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)(param_1 + 0x1d) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return param_1;
}



// FUNCTION 142bd47e0 UBTTask_BlackboardBase body=242 status=ok
// SIG undefined UBTTask_BlackboardBase(void)

undefined8 * UBTTask_BlackboardBase::UBTTask_BlackboardBase(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0xf;
  *param_1 = &PTR__scalar_deleting_destructor__1457fb610;
  param_1[5] = &PTR_LAB_1457fb900;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"BlackboardBase",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd48e0 UBTTask_BlueprintBase body=403 status=ok
// SIG undefined UBTTask_BlueprintBase(void)

undefined8 * UBTTask_BlueprintBase::UBTTask_BlueprintBase(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  UBTTaskNode::UBTTaskNode();
  *param_1 = &PTR__scalar_deleting_destructor__1457fb948;
  param_1[5] = &PTR_LAB_1457fbc38;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar3 = GetPrivateStaticClass();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveTickAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveTick",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffff9;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) * 2;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveExecuteAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveExecute",1);
  uVar1 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xffffffe7;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) | (uVar1 & 3) << 3;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"ReceiveAbortAI",1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"ReceiveAbort",1);
  iVar2 = FBTNodeBPImplementationHelper::CheckEventImplementationVersion
                    (*puVar5,*puVar4,param_1,uVar3);
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffd;
  uVar1 = (iVar2 << 5 ^ *(uint *)(param_1 + 0x13)) & 0x60 ^ *(uint *)(param_1 + 0x13);
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | -(uint)((uVar1 & 6) != 0) & 2 | 4;
  *(uint *)(param_1 + 0x13) = uVar1 & 0xffffff7f | 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    FUN_142bb6220(param_1,uVar3,param_1 + 0x11);
  }
  return param_1;
}



// FUNCTION 142bd4a80 UBTTask_GameplayTaskBase body=197 status=ok
// SIG undefined UBTTask_GameplayTaskBase(void)

undefined8 * UBTTask_GameplayTaskBase::UBTTask_GameplayTaskBase(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0x12;
  *param_1 = &PTR_FUN_1457fbc80;
  param_1[5] = &PTR_LAB_1457fbf78;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x12,"GameplayTask Base",0x12,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) | 1;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 4;
  return param_1;
}



// FUNCTION 142bd4b50 UBTTask_MakeNoise body=213 status=ok
// SIG undefined UBTTask_MakeNoise(void)

undefined8 * UBTTask_MakeNoise::UBTTask_MakeNoise(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *param_1 = &PTR_FUN_1457fbfc0;
  local_10 = 10;
  param_1[5] = &PTR_LAB_1440743c0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,10,"MakeNoise",10,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd4c30 UBTTask_MoveDirectlyToward body=217 status=ok
// SIG undefined UBTTask_MoveDirectlyToward(void)

undefined8 * UBTTask_MoveDirectlyToward::UBTTask_MoveDirectlyToward(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142bd4d10();
  local_10 = 0x13;
  *param_1 = &PTR__scalar_deleting_destructor__1457fc5a8;
  param_1[5] = &PTR_LAB_1457fc8a0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x13,"MoveDirectlyToward",0x13,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) & 0xfffffdff;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffa | 2;
  return param_1;
}



// FUNCTION 142bd4d10 FUN_142bd4d10 body=680 status=ok
// SIG undefined FUN_142bd4d10(void)

undefined8 * FUN_142bd4d10(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase();
  local_10 = 8;
  *param_1 = &PTR__scalar_deleting_destructor__1457fc2b0;
  param_1[5] = &PTR_LAB_144076190;
  param_1[0x14] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,8,"Move To",8,0x3f);
  plVar3 = param_1 + 6;
  if (plVar3 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  bVar1 = *(byte *)(lVar4 + 0x8f);
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffd;
  uVar2 = ((uint)bVar1 << 10 ^ *(uint *)((longlong)param_1 + 0xac)) & 0x400 ^
          *(uint *)((longlong)param_1 + 0xac);
  *(uint *)((longlong)param_1 + 0xac) = uVar2;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | ~(uVar2 >> 9) & 2 | 4;
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar4 + 0x80);
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  uVar2 = ((uint)*(byte *)(lVar4 + 0x8c) << 7 ^ *(uint *)((longlong)param_1 + 0xac)) & 0x80 ^
          *(uint *)((longlong)param_1 + 0xac);
  uVar2 = (uVar2 >> 2 ^ uVar2) & 0x20 ^ uVar2;
  *(uint *)((longlong)param_1 + 0xac) = (uVar2 * 2 ^ uVar2) & 0x40 ^ uVar2;
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  *(uint *)((longlong)param_1 + 0xac) =
       *(uint *)((longlong)param_1 + 0xac) ^
       ((uint)*(byte *)(lVar4 + 0x8e) * 2 ^ *(uint *)((longlong)param_1 + 0xac)) & 2;
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  bVar1 = *(byte *)(lVar4 + 0x8d);
  *(float *)(param_1 + 0x15) = *(float *)(param_1 + 0x13) * 0.95;
  *(uint *)((longlong)param_1 + 0xac) =
       ((uint)bVar1 << 2 ^ *(uint *)((longlong)param_1 + 0xac)) & 4 ^
       *(uint *)((longlong)param_1 + 0xac) | 0x318;
  uVar5 = FUN_1428dfc70();
  puVar6 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar6,uVar5);
  puVar6 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar6);
  return param_1;
}



// FUNCTION 142bd4fc0 UBTTask_PawnActionBase body=206 status=ok
// SIG undefined UBTTask_PawnActionBase(void)

undefined8 * UBTTask_PawnActionBase::UBTTask_PawnActionBase(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0xc;
  *param_1 = &PTR__scalar_deleting_destructor__1457fc8e8;
  param_1[5] = &PTR_LAB_1457ecdb8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xc,"Action Base",0xc,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd5090 FUN_142bd5090 body=455 status=ok
// SIG undefined FUN_142bd5090(void)

undefined8 * FUN_142bd5090(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  UBTTaskNode::UBTTaskNode();
  uStack_10 = 0xf;
  local_18 = (code *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1457fcbe8;
  plVar1 = param_1 + 0x13;
  param_1[5] = &PTR_LAB_1457fced8;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar4 = (longlong)local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"Play Animation",0xf,0x3f);
  plVar3 = param_1 + 6;
  if (plVar3 == &local_18) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_10._4_4_;
  }
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffffc;
  local_18 = UBTTask_PlayAnimation::OnAnimationTimerDone;
  uStack_10 = uStack_10 & 0xffffffff00000000;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_10._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x14) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
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
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 142bd5260 UBTTask_PlaySound body=206 status=ok
// SIG undefined UBTTask_PlaySound(void)

undefined8 * UBTTask_PlaySound::UBTTask_PlaySound(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 10;
  *param_1 = &PTR_FUN_1457fcf20;
  param_1[5] = &PTR_LAB_1440743c0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,10,"PlaySound",10,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd5330 UBTTask_PushPawnAction body=350 status=ok
// SIG undefined UBTTask_PushPawnAction(void)

undefined8 * UBTTask_PushPawnAction::UBTTask_PushPawnAction(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0xc;
  *param_1 = &PTR__scalar_deleting_destructor__1457fc8e8;
  param_1[5] = &PTR_LAB_1457ecdb8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xc,"Action Base",0xc,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  local_18 = 0;
  *param_1 = &PTR_FUN_1457fd210;
  local_10 = 0x10;
  param_1[5] = &PTR_LAB_1440743c0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x10,"Push PawnAction",0x10,0x3f);
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  return param_1;
}



// FUNCTION 142bd5490 UBTTask_RotateToFaceBBEntry body=328 status=ok
// SIG undefined UBTTask_RotateToFaceBBEntry(void)

undefined8 * UBTTask_RotateToFaceBBEntry::UBTTask_RotateToFaceBBEntry(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined8 local_10;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase();
  *(undefined4 *)(param_1 + 0x13) = 0x41200000;
  *param_1 = &PTR__scalar_deleting_destructor__1457fd510;
  local_10 = 0x18;
  param_1[5] = &PTR_LAB_144075e50;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x18,"Rotate to face BB entry",0x18,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 2;
  uVar3 = FUN_1428dfc70();
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0xe,param_1,*puVar4,uVar3);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddVectorFilter(param_1 + 0xe,param_1,*puVar4);
  puVar4 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddRotatorFilter(param_1 + 0xe,param_1,*puVar4);
  return param_1;
}



// FUNCTION 142bd55e0 UBTTask_RunBehavior body=206 status=ok
// SIG undefined UBTTask_RunBehavior(void)

undefined8 * UBTTask_RunBehavior::UBTTask_RunBehavior(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0xd;
  *param_1 = &PTR_FUN_1457fd800;
  param_1[5] = &PTR_LAB_1440743c0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xd,"Run Behavior",0xd,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
    return param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_1;
}



// FUNCTION 142bd56b0 UBTTask_RunBehaviorDynamic body=197 status=ok
// SIG undefined UBTTask_RunBehaviorDynamic(void)

undefined8 * UBTTask_RunBehaviorDynamic::UBTTask_RunBehaviorDynamic(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0x15;
  *param_1 = &PTR__scalar_deleting_destructor__1457fdaf8;
  param_1[5] = &PTR_LAB_1457fddf0;
  param_1[0xe] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x15,"Run Behavior Dynamic",0x15,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  return param_1;
}



// FUNCTION 142bd5780 FUN_142bd5780 body=614 status=ok
// SIG undefined FUN_142bd5780(void)

undefined8 * FUN_142bd5780(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase();
  uStack_20 = 0xe;
  local_28 = (code *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1457fde38;
  plVar1 = param_1 + 0x28;
  param_1[5] = &PTR_LAB_1457fe128;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1d) = 0xff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_1 + 0x134) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x26) = 0xff;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(uint *)((longlong)param_1 + 0x13c) = *(uint *)((longlong)param_1 + 0x13c) & 0xfffffffc;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar4 = (longlong)local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xe,"Run EQS Query",0xe,0x3f);
  plVar3 = param_1 + 6;
  if (plVar3 == &local_28) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = lVar4;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_20._4_4_;
  }
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_28 = FUN_142bebcb0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_20._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_144089968;
  }
  if (&local_28 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x29) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x29) = 0;
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
  uVar5 = FUN_142c3f210();
  puVar6 = (undefined8 *)FName::FName(local_res8,L"EQSQueryBlackboardKey",1);
  FBlackboardKeySelector::AddObjectFilter(param_1 + 0x19,param_1,*puVar6,uVar5);
  return param_1;
}



// FUNCTION 142bd59f0 UBTTask_SetTagCooldown body=204 status=ok
// SIG undefined UBTTask_SetTagCooldown(void)

undefined8 * UBTTask_SetTagCooldown::UBTTask_SetTagCooldown(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 0x11;
  *param_1 = &PTR__scalar_deleting_destructor__1457fe170;
  param_1[5] = &PTR_LAB_1457fe460;
  param_1[0xe] = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0x11,"Set Tag Cooldown",0x11,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40a00000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 142bd5ac0 UBTTask_Wait body=200 status=ok
// SIG undefined UBTTask_Wait(void)

undefined8 * UBTTask_Wait::UBTTask_Wait(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  UBTTaskNode::UBTTaskNode();
  local_10 = 5;
  *param_1 = &PTR_FUN_1457fe4a8;
  param_1[5] = &PTR_LAB_1440743c0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,5,&DAT_1457efcdc,5,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x40a00000;
  return param_1;
}



// FUNCTION 142bd5b90 UBTTask_WaitBlackboardTime body=434 status=ok
// SIG undefined UBTTask_WaitBlackboardTime(void)

undefined8 * UBTTask_WaitBlackboardTime::UBTTask_WaitBlackboardTime(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined8 local_20;
  
  UBTTaskNode::UBTTaskNode();
  local_20 = 5;
  *param_1 = &PTR_FUN_1457fe4a8;
  param_1[5] = &PTR_LAB_1440743c0;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar2 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,5,&DAT_1457efcdc,5,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_28) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__1457fe798;
  *(undefined4 *)(param_1 + 0xe) = 0x40a00000;
  param_1[5] = &PTR_LAB_1457fea88;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  local_28 = 0;
  local_20 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar2 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0x15,"Wait Blackboard Time",0x15,0x3f);
  if (plVar1 == &local_28) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_20._4_4_;
  }
  puVar3 = (undefined8 *)FName::FName(local_res8,L"BlackboardKey",1);
  FBlackboardKeySelector::AddFloatFilter(param_1 + 0xf,param_1,*puVar3);
  return param_1;
}



// FUNCTION 142bd5d50 FUN_142bd5d50 body=111 status=ok
// SIG undefined FUN_142bd5d50(void)

undefined8 * FUN_142bd5d50(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1457f5c38;
  param_1[5] = &PTR_LAB_1457f6088;
  param_1[0x2f] = &PTR_LAB_1457f60b8;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FAIResourceLock::FAIResourceLock(param_1 + 0x36);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142bd5dc0 FUN_142bd5dc0 body=184 status=ok
// SIG undefined FUN_142bd5dc0(void)

undefined8 * FUN_142bd5dc0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145800a98;
  param_1[5] = &PTR_LAB_145801380;
  param_1[0x5a] = &PTR_LAB_1458013b0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xde,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xde],0xe,"GameplayDebug",0xe,0x3f);
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  return param_1;
}



// FUNCTION 142bd5e80 FUN_142bd5e80 body=86 status=ok
// SIG undefined FUN_142bd5e80(void)

undefined8 * FUN_142bd5e80(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_1457fae00;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 142bd5ee0 UEnvQueryContext_BlueprintBase body=311 status=ok
// SIG undefined UEnvQueryContext_BlueprintBase(void)

undefined8 * UEnvQueryContext_BlueprintBase::UEnvQueryContext_BlueprintBase(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1457ffc30;
  lVar1 = GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProvideSingleActor",1);
  lVar3 = FUN_141719c60(param_1[2],*puVar2,1);
  lVar3 = *(longlong *)(lVar3 + 0x20);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProvideSingleLocation",1);
  lVar4 = FUN_141719c60(param_1[2],*puVar2,1);
  lVar4 = *(longlong *)(lVar4 + 0x20);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProvideActorsSet",1);
  lVar5 = FUN_141719c60(param_1[2],*puVar2,1);
  lVar5 = *(longlong *)(lVar5 + 0x20);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProvideLocationsSet",1);
  lVar6 = FUN_141719c60(param_1[2],*puVar2,1);
  lVar6 = *(longlong *)(lVar6 + 0x20);
  if (lVar3 != lVar1) {
    *(undefined4 *)(param_1 + 5) = 1;
  }
  if (lVar4 != lVar1) {
    *(undefined4 *)(param_1 + 5) = 2;
  }
  if (lVar5 != lVar1) {
    *(undefined4 *)(param_1 + 5) = 3;
  }
  if (lVar6 != lVar1) {
    *(undefined4 *)(param_1 + 5) = 4;
  }
  return param_1;
}



// FUNCTION 142bd6020 FUN_142bd6020 body=33 status=ok
// SIG undefined FUN_142bd6020(void)

undefined8 * FUN_142bd6020(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457ffeb0;
  return param_1;
}



// FUNCTION 142bd6050 FUN_142bd6050 body=59 status=ok
// SIG undefined FUN_142bd6050(void)

undefined8 * FUN_142bd6050(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1458003c0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
  return param_1;
}



// FUNCTION 142bd6090 FUN_142bd6090 body=238 status=ok
// SIG undefined FUN_142bd6090(void)

undefined8 * FUN_142bd6090(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
  *param_1 = &PTR_FUN_145801e00;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = &PTR_ValueToString_1457f8848;
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar1 = UBoolProperty::GetPrivateStaticClass();
  param_1[0x11] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x17] = uVar1;
  param_1[0x19] = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  uVar1 = FUN_1428dfc70();
  param_1[0xc] = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x19] = uVar1;
  return param_1;
}



// FUNCTION 142bd6180 FUN_142bd6180 body=118 status=ok
// SIG undefined FUN_142bd6180(void)

undefined8 * FUN_142bd6180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
  *param_1 = &PTR_FUN_1458020a8;
  FText::FText(param_1 + 0xc);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0xf] = uVar1;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[0x10] = uVar1;
  return param_1;
}



// FUNCTION 142bd6200 UEnvQueryInstanceBlueprintWrapper body=81 status=ok
// SIG undefined UEnvQueryInstanceBlueprintWrapper(void)

undefined8 *
UEnvQueryInstanceBlueprintWrapper::UEnvQueryInstanceBlueprintWrapper(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR_FUN_1457fb078;
  param_1[5] = &PTR_LAB_1457fb2f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 142bd6260 FUN_142bd6260 body=365 status=ok
// SIG undefined FUN_142bd6260(void)

undefined8 * FUN_142bd6260(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  FSelfRegisteringExec::FSelfRegisteringExec(param_1 + 6);
  *param_1 = &PTR_FUN_1457fb338;
  *puVar1 = &PTR_FUN_1457fb5b8;
  param_1[6] = &PTR_LAB_1457fb600;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0x403e000000000000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



// FUNCTION 142bd63d0 FUN_142bd63d0 body=43 status=ok
// SIG undefined FUN_142bd63d0(void)

undefined8 * FUN_142bd63d0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145800130;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142bd6400 FUN_142bd6400 body=503 status=ok
// SIG undefined FUN_142bd6400(void)

undefined8 * FUN_142bd6400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_145800660;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = &PTR_ValueToString_1457f8848;
  *(undefined1 *)(param_1 + 0x11) = 0;
  uVar1 = UBoolProperty::GetPrivateStaticClass();
  param_1[0x10] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x17) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x16] = uVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x18] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x1c] = uVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1f] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x23] = uVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x25] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x29] = uVar1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2b] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x2f] = uVar1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x31] = &PTR_ValueToString_1457f8830;
  *(undefined4 *)(param_1 + 0x36) = 0;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  param_1[0x35] = uVar1;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 2;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 2;
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) | 1;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  return param_1;
}



// FUNCTION 142bd6600 FUN_142bd6600 body=277 status=ok
// SIG undefined FUN_142bd6600(void)

void FUN_142bd6600(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0x29];
  plVar1 = (longlong *)param_1[0x28];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x28];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteGeometryShape,FDefaultAllocator>::~TArray<FSpriteGeometryShape,FDefaultAllocator>
            (param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,FEnvQueryContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x18,0);
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bd6720 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UClass_*,FEnvQueryContextData>,TDefaultMapHashableKeyFuncs<UClass_*,FEnvQueryContextData,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<UClass_*,FEnvQueryContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142bd685d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_142bd685d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<UClass_*,FEnvQueryContextData>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x30 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142bd6900 FUN_142bd6900 body=1034 status=ok
// SIG undefined FUN_142bd6900(void)

undefined8 * FUN_142bd6900(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  
  if (param_1 != param_2) {
    iVar9 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar3,(longlong)iVar9 * 0xc);
    }
  }
  param_1[2] = param_2[2];
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
  FString::operator=(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xc,param_2 + 0xc);
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(param_1 + 0xe,param_2 + 0xe);
  TSet<TTuple<UClass_*,FEnvQueryContextData>,TDefaultMapHashableKeyFuncs<UClass_*,FEnvQueryContextData,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x18,param_2 + 0x18);
  plVar8 = param_1 + 0x22;
  if (plVar8 != param_2 + 0x22) {
    iVar9 = *(int *)(param_1 + 0x23);
    if (iVar9 != 0) {
      plVar6 = (longlong *)(*plVar8 + 8);
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_2 + 0x23);
    lVar4 = param_2[0x22];
    *(int *)(param_1 + 0x23) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x11c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar8,iVar9);
      puVar7 = (undefined8 *)*plVar8;
      if (iVar9 != 0) {
        puVar10 = (undefined8 *)(lVar4 + 8);
        do {
          *puVar7 = puVar10[-1];
          puVar7[1] = 0;
          iVar2 = *(int *)(puVar10 + 1);
          pvVar3 = (void *)*puVar10;
          *(int *)(puVar7 + 2) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar7 + 1,iVar2,0);
            _guard_xfg_dispatch_icall_nop((void *)puVar7[1],pvVar3,(longlong)iVar2 << 3);
          }
          *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar10 + 2);
          puVar7[4] = puVar10[3];
          puVar1 = (uint *)(puVar10 + 4);
          puVar10 = puVar10 + 6;
          *(uint *)(puVar7 + 5) = *(uint *)(puVar7 + 5) ^ (*puVar1 ^ *(uint *)(puVar7 + 5)) & 1;
          puVar7 = puVar7 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x24,param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  puVar7 = param_1 + 0x28;
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  if (puVar7 != param_2 + 0x28) {
    plVar8 = (longlong *)*puVar7;
    for (iVar9 = *(int *)(param_1 + 0x29); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    iVar9 = *(int *)(param_2 + 0x29);
    puVar10 = (undefined8 *)param_2[0x28];
    *(int *)(param_1 + 0x29) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x14c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar9);
      puVar7 = (undefined8 *)*puVar7;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = 0;
        iVar2 = *(int *)(puVar10 + 1);
        pvVar3 = (void *)*puVar10;
        *(int *)(puVar7 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar7,iVar2,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar3,(longlong)iVar2 << 2);
        }
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined2 *)((longlong)param_1 + 0x154) = *(undefined2 *)((longlong)param_2 + 0x154);
  *(byte *)((longlong)param_1 + 0x156) =
       *(byte *)((longlong)param_1 + 0x156) ^
       (*(byte *)((longlong)param_1 + 0x156) ^ *(byte *)((longlong)param_2 + 0x156)) & 1;
  bVar5 = (*(byte *)((longlong)param_1 + 0x156) ^ *(byte *)((longlong)param_2 + 0x156)) & 2 ^
          *(byte *)((longlong)param_1 + 0x156);
  *(byte *)((longlong)param_1 + 0x156) = bVar5;
  *(byte *)((longlong)param_1 + 0x156) = (*(byte *)((longlong)param_2 + 0x156) ^ bVar5) & 4 ^ bVar5;
  param_1[0x2b] = param_2[0x2b];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)((longlong)param_2 + 0x181);
  return param_1;
}



// FUNCTION 142bd6d10 FUN_142bd6d10 body=129 status=ok
// SIG undefined FUN_142bd6d10(void)

ulonglong FUN_142bd6d10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint7 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  fVar1 = param_1[1];
  iVar6 = (int)fVar1 * 2 >> 1;
  if ((((uint)fVar1 >> 0x1e & 1) == 0) && (-1 < (int)fVar1)) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  fVar2 = param_2[1];
  if ((((uint)fVar2 >> 0x1e & 1) == 0) && (-1 < (int)fVar2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  if (cVar5 != cVar4) {
    uVar3 = (uint7)(uint3)((uint)fVar1 >> 8);
    if ((-1 < iVar6) && (-1 < (int)fVar1)) {
      return (ulonglong)uVar3 << 8;
    }
    return CONCAT71(uVar3,1);
  }
  fVar1 = param_1[2];
  if ((((uint)param_2[2] ^ (uint)fVar1) & 1) != 0) {
    return (ulonglong)CONCAT31((int3)((uint)fVar1 >> 8),~SUB41(fVar1,0)) & 0xffffffffffffff01;
  }
  if (*param_1 != *param_2) {
    return (ulonglong)(*param_1 < *param_2);
  }
  return (ulonglong)(iVar6 < (int)fVar2 * 2 >> 1);
}



// FUNCTION 142bd6f60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ALandscape::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14074ea50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 142bd6fa0 FUN_142bd6fa0 body=296 status=ok
// SIG undefined FUN_142bd6fa0(void)

longlong FUN_142bd6fa0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x998);
  lVar4 = *(longlong *)(param_1 + 0x990);
  if (iVar5 != 0) {
    do {
      FUN_142bd6600(lVar4);
      lVar4 = lVar4 + 0x188;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = *(longlong *)(param_1 + 0x990);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  plVar3 = *(longlong **)(param_1 + 0x988);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x928) = 0;
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x8e0);
  TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(param_1 + 0x8d0)
  ;
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x8b0) = &PTR_FUN_144080410;
  FUN_14080d0a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9a0);
  }
  return param_1;
}



// FUNCTION 142bd70d0 FUN_142bd70d0 body=43 status=ok
// SIG undefined FUN_142bd70d0(void)

undefined8 * FUN_142bd70d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ValueToString_14407aff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142bd7100 FUN_142bd7100 body=43 status=ok
// SIG undefined FUN_142bd7100(void)

undefined8 * FUN_142bd7100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ValueToString_14407aff8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142bd7130 FUN_142bd7130 body=215 status=ok
// SIG undefined FUN_142bd7130(void)

longlong FUN_142bd7130(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x30);
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(lVar3 + 0x1a0);
    for (plVar5 = plVar2; plVar5 != plVar2 + *(int *)(lVar3 + 0x1a8); plVar5 = plVar5 + 1) {
      if (*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
        if (iVar4 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar2 + iVar4,plVar2 + iVar4 + 1,
                     (longlong)((*(int *)(lVar3 + 0x1a8) - iVar4) + -1) << 3);
          *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + -1;
        }
        break;
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142bd7210 FUN_142bd7210 body=90 status=ok
// SIG undefined FUN_142bd7210(void)

longlong FUN_142bd7210(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  FUN_14074ee10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 142bd7270 FUN_142bd7270 body=52 status=ok
// SIG undefined FUN_142bd7270(void)

undefined8 FUN_142bd7270(undefined8 param_1,ulonglong param_2)

{
  FUN_140729a30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142bd72b0 FUN_142bd72b0 body=52 status=ok
// SIG undefined FUN_142bd72b0(void)

undefined8 FUN_142bd72b0(undefined8 param_1,ulonglong param_2)

{
  FUN_140729a30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd72f0 `scalar_deleting_destructor' body=129 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_Blackboard::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142bd7380 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_BlackboardBase::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142bd73e0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_BlueprintBase::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142bd7450 `scalar_deleting_destructor' body=146 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_CheckGameplayTagsOnActor::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142bd74f0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_CompareBBEntries::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142bd7560 `scalar_deleting_destructor' body=129 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_ConeCheck::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142bd75f0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_DoesPathExist::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142bd7660 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_IsAtLocation::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142bd76d0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_IsBBEntryOfClass::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd7730 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_KeepInCone::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142bd77a0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator_Loop::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142bd7800 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTService_BlackboardBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd7860 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTService_BlueprintBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd78d0 FUN_142bd78d0 body=136 status=ok
// SIG undefined FUN_142bd78d0(void)

longlong FUN_142bd78d0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142bd7960 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_BlackboardBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd79d0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_BlueprintBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142bd7a40 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_MoveDirectlyToward::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142bd7ab0 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_PlayAnimation::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142bd7b20 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_RunBehaviorDynamic::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142bd7b80 `scalar_deleting_destructor' body=196 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_RunEQSQuery::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(param_1 + 0x100)
  ;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TArray<FCurveEdEntry,FDefaultAllocator>::~TArray<FCurveEdEntry,FDefaultAllocator>(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 142bd7c50 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_SetTagCooldown::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142bd7cb0 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTask_WaitBlackboardTime::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142bd7d20 FUN_142bd7d20 body=121 status=ok
// SIG undefined FUN_142bd7d20(void)

longlong FUN_142bd7d20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_144063ad8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 142bd7da0 FUN_142bd7da0 body=175 status=ok
// SIG undefined FUN_142bd7da0(void)

longlong FUN_142bd7da0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x720);
  plVar1 = *(longlong **)(param_1 + 0x718);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x718);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
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



// FUNCTION 142bd7e50 FUN_142bd7e50 body=116 status=ok
// SIG undefined FUN_142bd7e50(void)

longlong FUN_142bd7e50(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142bd7ed0 FUN_142bd7ed0 body=102 status=ok
// SIG undefined FUN_142bd7ed0(void)

longlong FUN_142bd7ed0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x68) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142bd7f40 FUN_142bd7f40 body=160 status=ok
// SIG undefined FUN_142bd7f40(void)

longlong FUN_142bd7f40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142bd7fe0 FUN_142bd7fe0 body=209 status=ok
// SIG undefined FUN_142bd7fe0(void)

longlong FUN_142bd7fe0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144080410;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142bd80c0 FUN_142bd80c0 body=317 status=ok
// SIG undefined FUN_142bd80c0(void)

longlong FUN_142bd80c0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      FUN_142bd6600(lVar2);
      lVar2 = lVar2 + 0x198;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_14182c170(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142bd8200 FUN_142bd8200 body=137 status=ok
// SIG undefined FUN_142bd8200(void)

longlong FUN_142bd8200(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x188) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x158) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x128) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xf8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xc0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x90) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 142bd8290 FUN_142bd8290 body=130 status=ok
// SIG undefined FUN_142bd8290(void)

undefined8 FUN_142bd8290(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_18;
  longlong local_10;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    do {
      lVar2 = *plVar1;
      if ((*(int *)(lVar2 + 0x30) == param_2) && (*(int *)(lVar2 + 0x28) == 0)) {
        *(undefined4 *)(lVar2 + 0x28) = 3;
        local_10 = plVar1[1];
        local_18 = *plVar1;
        lVar2 = local_18;
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
          lVar2 = *plVar1;
        }
        FUN_140699060(lVar2 + 0x60,&local_18);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        return 1;
      }
      iVar3 = iVar3 + 1;
      plVar1 = plVar1 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 142bd8320 FUN_142bd8320 body=145 status=ok
// SIG undefined FUN_142bd8320(void)

undefined1 FUN_142bd8320(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_142bb3390(param_2,param_1);
  *(char *)(param_1 + 0x80) = ((*(byte *)(param_1 + 0x98) & 0x60) != 0) + '\x02';
  uVar1 = *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = uVar1 | 0x80;
  if ((uVar1 & 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x98) = uVar1 | 0x180;
    if ((lVar2 == 0) || ((uVar1 & 0x40) == 0)) {
      if ((uVar1 & 0x20) != 0) {
        FUN_142c3bab0(param_1,*(undefined8 *)(param_1 + 0x78));
      }
    }
    else {
      FUN_142c3baf0(param_1,lVar2,*(undefined8 *)(lVar2 + 0x488));
    }
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffeff;
  }
  return *(undefined1 *)(param_1 + 0x80);
}



// FUNCTION 142bd83c0 AbortTask body=56 status=ok
// SIG undefined AbortTask(void)

undefined8 UBTTask_GameplayTaskBase::AbortTask(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xfe;
    plVar1 = (longlong *)FWeakObjectPtr::Get(param_3);
    if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x39) != '\x04')) {
      (**(code **)(*plVar1 + 0x298))(plVar1);
    }
  }
  return 2;
}



// FUNCTION 142bd8400 FUN_142bd8400 body=152 status=ok
// SIG undefined FUN_142bd8400(void)

void FUN_142bd8400(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_3 + 9) & 1) == 0) {
    if (*param_3 == -1) {
      *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0xfd;
      plVar1 = (longlong *)FWeakObjectPtr::Get(param_3 + 7);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x298))(plVar1);
      }
    }
    else if ((*(longlong *)(param_2 + 0x188) != 0) &&
            (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x188) + 0x548),
            plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x428))(plVar1,param_1,0x10,*param_3,0);
    }
  }
  FUN_1404473a0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142bd84a0 FUN_142bd84a0 body=64 status=ok
// SIG undefined FUN_142bd84a0(void)

undefined8 FUN_142bd84a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(longlong *)(param_2 + 0x188) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x560), lVar1 != 0)) &&
     (iVar2 = FUN_142bb3240(lVar1,param_1,1), iVar2 != 0)) {
    return 3;
  }
  return 2;
}



// FUNCTION 142bd84e0 FUN_142bd84e0 body=147 status=ok
// SIG undefined FUN_142bd84e0(void)

undefined8 FUN_142bd84e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong **)(param_2 + 0x188) != (longlong *)0x0))
     && (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x188) + 0x148))();
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xa8);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x90) == 0)) {
    FUN_1423b9af0(*(longlong *)(param_1 + 0x88),0);
  }
  return 2;
}



// FUNCTION 142bd8580 FUN_142bd8580 body=31 status=ok
// SIG undefined FUN_142bd8580(void)

undefined8 FUN_142bd8580(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x188) != 0) {
    FUN_142bd9d60();
  }
  return 2;
}



// FUNCTION 142bd85a0 FUN_142bd85a0 body=63 status=ok
// SIG undefined FUN_142bd85a0(void)

undefined8 FUN_142bd85a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_2);
  }
  lVar1 = UBehaviorTreeManager::GetCurrent(lVar1);
  if (lVar1 != 0) {
    FUN_142bd8290(lVar1,*param_3);
  }
  return 2;
}



// FUNCTION 142bd85e0 FUN_142bd85e0 body=281 status=ok
// SIG undefined FUN_142bd85e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bd85e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_1 + 0x50);
    for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) goto LAB_142bd8620;
    }
  }
  lVar4 = 0;
LAB_142bd8620:
  lVar3 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  while( true ) {
    if (lVar4 == 0) {
      if (param_2 != 0) {
        lVar4 = *(longlong *)(param_2 + 0x168);
        if (lVar4 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_28 = *(undefined8 *)(lVar4 + 0x220);
          local_20 = *(undefined4 *)(lVar4 + 0x228);
        }
        local_18 = local_28;
        local_10 = local_20;
        FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point,FVector>
                  (*(undefined8 *)(param_1 + 0x88),&local_18);
      }
      return;
    }
    if (lVar4 == lVar3) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  FWeakObjectPtr::operator=(local_res8,param_2);
  FUN_140ae9440(uVar1,local_res8);
  return;
}



// FUNCTION 142bd8700 FUN_142bd8700 body=144 status=ok
// SIG undefined FUN_142bd8700(void)

void FUN_142bd8700(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x50);
    for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) goto LAB_142bd8740;
    }
  }
  lVar3 = 0;
LAB_142bd8740:
  lVar2 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  while( true ) {
    if (lVar3 == 0) {
      local_18 = *param_2;
      local_10 = *(undefined4 *)(param_2 + 1);
      FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point,FVector>
                (*(undefined8 *)(param_1 + 0x88),&local_18);
      return;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  return;
}



// FUNCTION 142bd8790 FUN_142bd8790 body=178 status=ok
// SIG undefined FUN_142bd8790(void)

void FUN_142bd8790(longlong *param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint local_20;
  
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0x24) < (int)(uVar1 + param_3)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3,uVar1);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)uVar1 + param_1[3]),param_2,(longlong)param_3);
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(ulonglong *)(lVar3 + (longlong)iVar2 * 0xc) = ((ulonglong)uVar1 & 0x7fffffff) << 0x20;
  *(uint *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = local_20 & 0xfffffffe;
  return;
}



// FUNCTION 142bd8850 FUN_142bd8850 body=134 status=ok
// SIG undefined FUN_142bd8850(void)

void FUN_142bd8850(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x54);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
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
      local_res8 = param_1;
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (lVar2 + 0xb0,&local_res8);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142bd88e0 BindData body=59 status=ok
// SIG undefined BindData(void)

void FAIDataProviderValue::BindData(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (param_2 != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x278))();
    uVar1 = UStruct::FindPropertyByName
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                       *(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}



// FUNCTION 142bd8920 BindData body=95 status=ok
// SIG undefined BindData(void)

void UAIDataProvider_QueryParams::BindData(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_142be40d0(param_2);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_142be2dc0(lVar1,param_3,*(undefined8 *)(param_1 + 0x28));
    *(float *)(param_1 + 0x30) = fVar2;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    *(bool *)(param_1 + 0x38) = 0.0 < fVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 142bd8a10 FUN_142bd8a10 body=13 status=ok
// SIG undefined FUN_142bd8a10(void)

void FUN_142bd8a10(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x180) = param_2;
  }
  return;
}



// FUNCTION 142bd8a20 FUN_142bd8a20 body=211 status=ok
// SIG undefined FUN_142bd8a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142bd8a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c738) {
    _Init_thread_header(&DAT_146b2c738);
    if (DAT_146b2c738 == -1) {
      DAT_146b2c728 = _DAT_1468b5d90;
      DAT_146b2c730 = DAT_1468b5d98;
      _Init_thread_footer(&DAT_146b2c738);
    }
  }
  local_2c = DAT_146b2c728;
  local_20 = CONCAT44(DAT_146b2c734,DAT_146b2c734);
  local_24 = DAT_146b2c730;
  local_14 = DAT_146b2c734;
  local_18 = DAT_146b2c734;
  FBoxSphereBounds::TransformBy(&local_2c,param_2,param_3);
  return param_2;
}



// FUNCTION 142bd8b00 FUN_142bd8b00 body=196 status=ok
// SIG undefined FUN_142bd8b00(void)

uint FUN_142bd8b00(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  pauVar3 = *(undefined1 (**) [16])(param_1 + 0x18);
  uVar4 = 0;
  uVar2 = 0;
  uVar5 = (longlong)*(int *)(param_1 + 0x20);
  if ((undefined1 (*) [16])(*pauVar3 + *(int *)(param_1 + 0x20)) < pauVar3) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    if (0x1f < uVar5) {
      auVar6 = ZEXT816(0);
      auVar7 = ZEXT816(0);
      do {
        uVar2 = uVar2 + 0x20;
        auVar6 = *pauVar3 ^ auVar6;
        pauVar1 = pauVar3 + 1;
        pauVar3 = pauVar3 + 2;
        auVar7 = *pauVar1 ^ auVar7;
      } while (uVar2 != (uVar5 & 0xffffffffffffffe0));
      auVar6 = auVar7 ^ auVar6 ^ (auVar7 ^ auVar6) >> 0x40;
      auVar6 = auVar6 ^ auVar6 >> 0x20;
      auVar6 = auVar6 ^ auVar6 >> 0x10;
      uVar4 = auVar6._0_4_ ^ auVar6._1_4_;
    }
    for (; uVar2 != uVar5; uVar2 = uVar2 + 1) {
      uVar4 = (uint)(byte)((byte)uVar4 ^ (*pauVar3)[0]);
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
    }
  }
  return uVar4 & 0xff;
}



// FUNCTION 142bd8bd0 FUN_142bd8bd0 body=492 status=ok
// SIG undefined FUN_142bd8bd0(void)

ulonglong FUN_142bd8bd0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong in_RAX;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (lVar1 != 0) {
    local_58 = DAT_1468b5d90;
    local_54 = DAT_1468b5d94;
    local_50 = DAT_1468b5d98;
    local_68 = DAT_1468b5d90;
    fStack_64 = DAT_1468b5d94;
    local_60 = DAT_1468b5d98;
    cVar2 = FUN_142bbdb40(lVar1,*(undefined1 *)(param_1 + 0x90),&local_58);
    in_RAX = FUN_142bbdb40(lVar1,*(undefined1 *)(param_1 + 0xb8),&local_68);
    if ((cVar2 != '\0') && ((char)in_RAX != '\0')) {
      local_68 = local_68 - local_58;
      fStack_64 = fStack_64 - local_54;
      local_60 = local_60 - local_50;
      fVar3 = fStack_64 * fStack_64 + local_68 * local_68 + local_60 * local_60;
      if (fVar3 != 1.0) {
        if (fVar3 < 1e-08) {
          local_68 = DAT_1468b5d90;
          local_60 = DAT_1468b5d98;
          fStack_64 = DAT_1468b5d94;
        }
        else {
          auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
          fVar4 = auVar5._0_4_;
          fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
          fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
          local_68 = local_68 * fVar4;
          fStack_64 = fStack_64 * fVar4;
          local_60 = local_60 * fVar4;
        }
      }
      *param_3 = CONCAT44(fStack_64,local_68);
      *(float *)(param_3 + 1) = local_60;
      return CONCAT71((uint7)(uint3)((uint)local_60 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bd8dc0 CalculateDirection body=566 status=ok
// SIG undefined CalculateDirection(void)

ulonglong UBTDecorator_ConeCheck::CalculateDirection
                    (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                    undefined8 *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  uint local_50;
  undefined1 local_48 [64];
  
  uVar2 = (ulonglong)DAT_1468b5da8;
  local_60 = DAT_1468b5d98;
  local_70 = DAT_1468b5d98;
  local_58 = DAT_1468b5da0;
  local_68 = DAT_1468b5d90;
  local_64 = DAT_1468b5d94;
  local_78 = DAT_1468b5d90;
  fStack_74 = DAT_1468b5d94;
  local_50 = DAT_1468b5da8;
  if (param_2 != 0) {
    if (((*(byte *)(param_4 + 0x24) & 1) == 0) || (*(char *)(param_4 + 0x20) != -1)) {
      uVar2 = FUN_142bbdb40(param_2,*(undefined1 *)(param_3 + 0x20),&local_68);
      if (((char)uVar2 != '\0') &&
         (uVar2 = FUN_142bbdb40(param_2,*(undefined1 *)(param_4 + 0x20),&local_78),
         (char)uVar2 != '\0')) {
        local_78 = local_78 - local_68;
        fStack_74 = fStack_74 - local_64;
        local_70 = local_70 - local_60;
        fVar4 = fStack_74 * fStack_74 + local_78 * local_78 + local_70 * local_70;
        if (fVar4 != 1.0) {
          if (1e-08 <= fVar4) {
            auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
            fVar5 = auVar6._0_4_;
            fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
            fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
            local_78 = local_78 * fVar5;
            fStack_74 = fStack_74 * fVar5;
            local_70 = local_70 * fVar5;
          }
          else {
            local_78 = DAT_1468b5d90;
            local_70 = DAT_1468b5d98;
            fStack_74 = DAT_1468b5d94;
          }
        }
        *param_5 = CONCAT44(fStack_74,local_78);
        *(float *)(param_5 + 1) = local_70;
        return CONCAT71((uint7)(uint3)((uint)local_70 >> 8),1);
      }
    }
    else {
      uVar2 = FUN_142bbe5c0(param_2,*(undefined1 *)(param_3 + 0x20),&local_58);
      if ((char)uVar2 != '\0') {
        puVar3 = (undefined8 *)FRotator::Vector(&local_58,local_48);
        *param_5 = *puVar3;
        uVar1 = *(undefined4 *)(puVar3 + 1);
        *(undefined4 *)(param_5 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142bd9000 FUN_142bd9000 body=39 status=ok
// SIG undefined FUN_142bd9000(void)

undefined1 FUN_142bd9000(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_2 + 0x180) != 0) {
    cVar1 = FUN_142be03b0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bd9070 FUN_142bd9070 body=152 status=ok
// SIG undefined FUN_142bd9070(void)

ulonglong FUN_142bd9070(longlong param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_2 + 0x180) != 0) {
    lVar1 = FUN_140725690(*(longlong *)(param_2 + 0x180),*(undefined1 *)(param_1 + 0x88));
    in_RAX = (longlong *)0x0;
    if (lVar1 != 0) {
      uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      in_RAX = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      if (in_RAX != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x90) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142bd90f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*in_RAX + 0x28))(in_RAX,param_1 + 0x98);
          return uVar3;
        }
        if (*(char *)(param_1 + 0x90) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000142bd90dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*in_RAX + 0x20))(in_RAX,param_1 + 0x98);
          return uVar3;
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bd9110 FUN_142bd9110 body=206 status=ok
// SIG undefined FUN_142bd9110(void)

bool FUN_142bd9110(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar2 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x88);
    for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar2) goto LAB_142bd9153;
    }
  }
  lVar5 = 0;
LAB_142bd9153:
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    lVar3 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_1 + 0xb0);
    for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_142bd9181;
    }
  }
  lVar4 = 0;
LAB_142bd9181:
  if ((lVar5 == lVar4) && (*(longlong *)(param_2 + 0x180) != 0)) {
    iVar1 = FUN_142bb6510(*(longlong *)(param_2 + 0x180),*(undefined8 *)(param_1 + 0x88),
                          *(undefined1 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0xb8));
    return (iVar1 == 0) != (*(char *)(param_1 + 0x68) != '\0');
  }
  return false;
}



// FUNCTION 142bd91e0 FUN_142bd91e0 body=502 status=ok
// SIG undefined FUN_142bd91e0(void)

undefined8 FUN_142bd91e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                    (param_1,uVar1,param_1 + 0x70,param_1 + 0xc0,&local_78);
  if ((cVar2 != '\0') &&
     (cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                        (param_1,uVar1,param_1 + 0x70,param_1 + 0x98,&local_68), cVar2 != '\0')) {
    fVar3 = local_64 * local_64 + local_68 * local_68;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      local_68 = local_68 * fVar4;
      local_64 = local_64 * fVar4;
    }
    fVar3 = local_78 * local_78 + local_74 * local_74;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4) + fVar4;
      local_78 = local_78 * fVar4;
      local_74 = fVar4 * local_74;
    }
    fVar3 = local_78 * local_68 + local_74 * local_64;
    if (*(float *)(param_1 + 0xe8) <= fVar3 && fVar3 != *(float *)(param_1 + 0xe8)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bd93e0 FUN_142bd93e0 body=66 status=ok
// SIG undefined FUN_142bd93e0(void)

bool FUN_142bd93e0(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_2);
  }
  return *(float *)(param_1 + 0x68) <= *(float *)(lVar1 + 0x790) - *param_3;
}



// FUNCTION 142bd9430 FUN_142bd9430 body=584 status=ok
// SIG undefined FUN_142bd9430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bd9430(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  ulonglong in_RAX;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [128];
  
  lVar8 = *(longlong *)(param_2 + 0x180);
  if (lVar8 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_d8 = _DAT_1468b5d90;
  local_e8 = _DAT_1468b5d90;
  local_d0 = DAT_1468b5d98;
  local_e0 = DAT_1468b5d98;
  cVar5 = FUN_142bbdb40(lVar8,*(undefined1 *)(param_1 + 0x88),&local_d8);
  cVar6 = FUN_142bbdb40(lVar8,*(undefined1 *)(param_1 + 0xb0),&local_e8);
  bVar7 = 0;
  lVar8 = *(longlong *)(param_2 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_2);
    if (lVar8 == 0) goto LAB_142bd9651;
  }
  lVar8 = *(longlong *)(lVar8 + 0x138);
  if (lVar8 != 0) {
    lVar9 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((bVar4) && (cVar5 != '\0')) && (cVar6 != '\0')) &&
       (lVar9 = *(longlong *)(param_2 + 0x188), lVar9 != 0)) {
      uVar10 = (**(code **)(*(longlong *)(lVar9 + 0x458) + 0x10))();
      lVar11 = FUN_142b8f070(lVar8,uVar10);
      if (lVar11 != 0) {
        FUN_142b90120(&local_c8,lVar11,lVar9,*(undefined8 *)(param_1 + 0xc0));
        cVar5 = *(char *)(param_1 + 0xbc);
        if (cVar5 != '\0') {
          local_a8 = local_c8;
          plStack_a0 = plStack_c0;
          local_b8 = 0;
          uStack_b0 = 0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
            UNLOCK();
          }
          uVar10 = FUN_142b80bd0(local_98,lVar9,lVar11,&local_d8,&local_e8,&local_a8,&local_b8);
          bVar7 = FUN_142b98910(lVar8,uVar10,cVar5 == '\x01',0);
        }
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plStack_c0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
            }
          }
        }
      }
    }
  }
LAB_142bd9651:
  return (ulonglong)bVar7;
}



// FUNCTION 142bd9680 FUN_142bd9680 body=1263 status=ok
// SIG undefined FUN_142bd9680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142bd9680(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  lVar2 = *(longlong *)(param_2 + 0x188);
  if (lVar2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(lVar2 + 0x548);
  }
  if (lVar11 == 0) {
    return false;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  fVar15 = *(float *)(param_1 + 0x90);
  if (((((*(byte *)(param_1 + 0xcc) & 1) != 0) && (lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 0x488) != 0)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FAIDataProviderValue::BindData(param_1 + 0x98,*(longlong *)(lVar2 + 0x488),0xffffffff);
    if ((*(longlong *)(param_1 + 0xa0) == 0) ||
       (pfVar6 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x44) +
                          *(longlong *)(param_1 + 0xa8)), pfVar6 == (float *)0x0)) {
      fVar15 = *(float *)(param_1 + 0xc0);
    }
    else {
      fVar15 = *pfVar6;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar7 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar9 = *(longlong *)(param_1 + 0x80);
    for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar7) goto LAB_142bd9770;
    }
  }
  lVar9 = 0;
LAB_142bd9770:
  lVar8 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar9 == lVar8) {
    lVar9 = FUN_140725690(uVar3,*(undefined1 *)(param_1 + 0x88));
    if (lVar9 == 0) {
      return false;
    }
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return false;
    }
    if ((*(uint *)(param_1 + 0xcc) & 4) != 0) {
      uVar5 = FUN_142c09900(lVar11,lVar9,CONCAT71((int7)((ulonglong)(lVar8 + 0x88) >> 8),3),fVar15,
                            (byte)(*(uint *)(param_1 + 0xcc) >> 1) & 1);
      return (bool)uVar5;
    }
    if (*(longlong *)(lVar2 + 0x488) != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x168);
      if (lVar11 == 0) {
        local_38 = _DAT_1468b5d90;
        puVar10 = &local_38;
        local_30 = DAT_1468b5d98;
      }
      else {
        puVar10 = &local_48;
        local_40 = (float)*(undefined4 *)(lVar11 + 0x228);
        local_48 = *(undefined8 *)(lVar11 + 0x220);
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + 0x168);
      if (lVar2 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar2 + 0x220);
        local_30 = *(float *)(lVar2 + 0x228);
      }
      cVar1 = *(char *)(param_1 + 200);
      fVar14 = 3.4028235e+38;
      local_58 = (float)*puVar10;
      fStack_54 = (float)((ulonglong)*puVar10 >> 0x20);
      local_48._0_4_ = (float)local_38;
      local_48._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      if (cVar1 == '\0') {
        local_30 = *(float *)(puVar10 + 1) - local_30;
        fVar14 = (fStack_54 - local_48._4_4_) * (fStack_54 - local_48._4_4_) +
                 (local_58 - (float)local_48) * (local_58 - (float)local_48) + local_30 * local_30;
      }
      else {
        if (cVar1 == '\x01') {
          return (fStack_54 - local_48._4_4_) * (fStack_54 - local_48._4_4_) +
                 (local_58 - (float)local_48) * (local_58 - (float)local_48) < fVar15 * fVar15;
        }
        if (cVar1 == '\x02') {
          local_30 = local_30 - *(float *)(puVar10 + 1);
          return local_30 * local_30 < fVar15 * fVar15;
        }
      }
      return fVar14 < fVar15 * fVar15;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar7 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar9 = *(longlong *)(param_1 + 0x80);
      for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar7) goto LAB_142bd9993;
      }
    }
    lVar9 = 0;
LAB_142bd9993:
    lVar8 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar9 != lVar8) {
      return false;
    }
    FUN_140725750(uVar3,&local_48,*(undefined1 *)(param_1 + 0x88));
    fVar14 = (float)local_48;
    fVar12 = local_48._4_4_;
    if ((((float)local_48 <= -DAT_146691060) || (DAT_146691060 <= (float)local_48)) ||
       ((local_48._4_4_ <= -DAT_146691064 ||
        (((DAT_146691064 <= local_48._4_4_ || (local_40 <= -DAT_146691068)) ||
         (DAT_146691068 <= local_40)))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return false;
    }
    if ((*(byte *)(param_1 + 0xcc) & 4) != 0) {
      uVar5 = FUN_142c09800(lVar11,&local_48,1,fVar15);
      return (bool)uVar5;
    }
    if (*(longlong *)(lVar2 + 0x488) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + 0x168);
      if (lVar2 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar2 + 0x220);
        local_30 = *(float *)(lVar2 + 0x228);
      }
      cVar1 = *(char *)(param_1 + 200);
      fVar13 = 3.4028235e+38;
      local_48._0_4_ = (float)local_38;
      local_48._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      if (cVar1 == '\0') {
        fVar14 = fVar14 - (float)local_48;
        fVar12 = fVar12 - local_48._4_4_;
        fVar13 = fVar12 * fVar12 + fVar14 * fVar14 + (local_40 - local_30) * (local_40 - local_30);
      }
      else {
        if (cVar1 == '\x01') {
          fVar14 = fVar14 - (float)local_48;
          fVar12 = fVar12 - local_48._4_4_;
          return fVar12 * fVar12 + fVar14 * fVar14 < fVar15 * fVar15;
        }
        if (cVar1 == '\x02') {
          return (local_30 - local_40) * (local_30 - local_40) < fVar15 * fVar15;
        }
      }
      return fVar13 < fVar15 * fVar15;
    }
  }
  return false;
}



// FUNCTION 142bd9b70 FUN_142bd9b70 body=160 status=ok
// SIG undefined FUN_142bd9b70(void)

ulonglong FUN_142bd9b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_2 + 0x180) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = FUN_140725690();
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = UObject::GetPrivateStaticClass();
      lVar4 = *(longlong *)(param_1 + 0x90);
      for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) goto LAB_142bd9bd0;
      }
    }
    lVar4 = 0;
LAB_142bd9bd0:
    for (lVar2 = *(longlong *)(lVar2 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 142bd9c40 FUN_142bd9c40 body=91 status=ok
// SIG undefined FUN_142bd9c40(void)

bool FUN_142bd9c40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  
  FUN_142bbef90(param_2,*(undefined8 *)(param_1 + 0x68));
  if (extraout_XMM0_Da == 0.0) {
    return true;
  }
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_2);
  }
  return extraout_XMM0_Da < *(float *)(lVar1 + 0x790) ||
         extraout_XMM0_Da == *(float *)(lVar1 + 0x790);
}



// FUNCTION 142bd9cf0 FUN_142bd9cf0 body=97 status=ok
// SIG undefined FUN_142bd9cf0(void)

undefined8 FUN_142bd9cf0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + *(int *)(param_1 + 0x40);
  while( true ) {
    if (plVar4 == plVar1) {
      return 0;
    }
    if (((*plVar4 != 0) && (plVar2 = *(longlong **)(*plVar4 + 0x28), plVar2 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x298))(), cVar3 != '\0')) break;
    plVar4 = plVar4 + 1;
  }
  return 1;
}



// FUNCTION 142bd9d60 FUN_142bd9d60 body=133 status=ok
// SIG undefined FUN_142bd9d60(void)

void FUN_142bd9d60(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  float *pfVar2;
  bool bVar3;
  undefined1 local_18 [16];
  
  if (*(char *)((longlong)param_3 + 0x14) == '\0') {
    pfVar2 = (float *)FUN_142bbd100(param_2,local_18,2);
    if (*pfVar2 != *(float *)(param_3 + 1)) {
      return;
    }
    if (pfVar2[1] != *(float *)((longlong)param_3 + 0xc)) {
      return;
    }
    bVar3 = pfVar2[2] == *(float *)(param_3 + 2);
  }
  else if ((int)param_2[0xa7] < 3) {
    bVar3 = *param_3 == 0;
  }
  else {
    lVar1 = FWeakObjectPtr::Get(param_2[0xa6] + 0x28);
    bVar3 = *param_3 == lVar1;
  }
  if (bVar3) {
    (**(code **)(*param_2 + 0x8c8))(param_2,2);
  }
  return;
}



// FUNCTION 142bd9df0 FUN_142bd9df0 body=127 status=ok
// SIG undefined FUN_142bd9df0(void)

void FUN_142bd9df0(longlong param_1)

{
  longlong local_18 [2];
  
  FAIResourceLock::ClearLock(param_1 + 0x38);
  if (*(short *)(param_1 + 0x38) == 0) {
    local_18[1] = 9;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"unlocked",0x12);
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x420))((longlong *)(param_1 + -0x178),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bd9e70 FUN_142bd9e70 body=497 status=ok
// SIG undefined FUN_142bd9e70(void)

longlong ** FUN_142bd9e70(longlong **param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *local_30;
  
  plVar5 = (longlong *)0x0;
  *param_1 = (longlong *)0x0;
  param_1[1] = (longlong *)0x0;
  if (param_2 == 0) {
    return param_1;
  }
  plVar4 = (longlong *)operator_new(0x38);
  plVar6 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined4 *)(plVar4 + 3) = 0xffffffff;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar6 = plVar4;
  }
  plVar6[2] = param_3;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar6 + 4,param_4);
  FUN_142beef60(plVar6,param_2);
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_145802370;
    plVar4[2] = (longlong)plVar6;
    plVar5 = plVar4;
  }
  local_38 = plVar6;
  local_30 = plVar5;
  if ((*plVar6 != 0) && (plVar6[1] != 0)) {
    piVar1 = (int *)(plVar6[1] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) goto LAB_142bd9fd1;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *plVar6 = (longlong)plVar6;
  plVar4 = (longlong *)plVar6[1];
  if (plVar5 != plVar4) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)plVar6[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    plVar6[1] = (longlong)plVar5;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
LAB_142bd9fd1:
  if (param_1 != &local_38) {
    *param_1 = plVar6;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_30);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142bda070 FUN_142bda070 body=498 status=ok
// SIG undefined FUN_142bda070(void)

longlong **
FUN_142bda070(longlong **param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *local_30;
  
  plVar5 = (longlong *)0x0;
  *param_1 = (longlong *)0x0;
  param_1[1] = (longlong *)0x0;
  if (param_2 == 0) {
    return param_1;
  }
  plVar4 = (longlong *)operator_new(0x38);
  plVar6 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar6 = plVar4;
  }
  plVar6[2] = param_3;
  *(undefined4 *)(plVar6 + 3) = param_4;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar6 + 4,param_5);
  FUN_142beef60(plVar6,param_2);
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_145802370;
    plVar4[2] = (longlong)plVar6;
    plVar5 = plVar4;
  }
  local_38 = plVar6;
  local_30 = plVar5;
  if ((*plVar6 != 0) && (plVar6[1] != 0)) {
    piVar1 = (int *)(plVar6[1] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) goto LAB_142bda1d2;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *plVar6 = (longlong)plVar6;
  plVar4 = (longlong *)plVar6[1];
  if (plVar5 != plVar4) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)plVar6[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    plVar6[1] = (longlong)plVar5;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
LAB_142bda1d2:
  if (param_1 != &local_38) {
    *param_1 = plVar6;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_30);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142bda270 FUN_142bda270 body=1489 status=ok
// SIG undefined FUN_142bda270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_142bda270(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined4 param_5,byte param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined1 auStack_208 [32];
  uint local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  char local_19c;
  longlong *local_198;
  longlong local_188 [2];
  undefined1 local_178 [24];
  longlong local_160;
  uint local_158;
  undefined4 local_154;
  longlong *local_148;
  longlong *local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  code *local_108;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if ((param_1 == 0) && (param_1 = param_2, param_2 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar6 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return 0;
    }
    param_2 = *(longlong *)(param_1 + 0x488);
    if (param_2 == 0) {
      return 0;
    }
  }
  plVar9 = *(longlong **)(param_2 + 0x490);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = FUN_142c2de20();
  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,2);
  FUN_1417846f0(lVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_1a8 = 0;
  uVar7 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  lVar8 = FUN_1417985e0(uVar7,lVar6,0,0);
  FAIMoveRequest::FAIMoveRequest(local_178);
  local_154 = param_5;
  local_158 = (uint)param_6 << 5 | local_158 & 0xffffffdf | 4;
  if (param_4 == 0) {
    FAIMoveRequest::SetGoalLocation(local_178,param_3);
  }
  else {
    FAIMoveRequest::SetGoalActor(local_178,param_4);
  }
  local_160 = plVar9[0xaf];
  (**(code **)(*plVar9 + 0x850))(plVar9,&local_1a0,local_178,0);
  if (local_19c == '\x01') {
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_138 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar9 + 1,lVar8);
      plVar9[2] = (longlong)FUN_142bea0b0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar6;
      *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_1e0 = CONCAT44(local_1e0._4_4_,0xbf800000);
    local_1e8 = local_1e8 & 0xffffff00;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,lVar8 + 0x60,&local_b8,0x3dcccccd);
    if (local_58 != 0) {
      plVar13 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar13 = local_68;
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar9 == (longlong *)0x0) goto LAB_142bda7d2;
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    plVar9 = (longlong *)FMemory::Realloc(plVar9,0,0);
    local_138 = plVar9;
  }
  else {
    if (local_19c == '\x02') {
      FWeakObjectPtr::operator=(lVar8 + 0x48,plVar9);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UAIAsyncTaskBlueprintProxy::OnMoveCompleted",L"::")
      ;
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(local_188,pwVar5 + 2,1);
      lVar6 = FWeakObjectPtr::Get(lVar8 + 0x48);
      plVar9 = (longlong *)(lVar6 + 0x580);
      FWeakObjectPtr::operator=(&local_1b8,0);
      local_1b0 = 0;
      FWeakObjectPtr::operator=(&local_1b8,lVar8);
      local_1b0 = local_188[0];
      local_198 = (longlong *)0x0;
      if ((local_188[0] != 0) && (lVar11 = FWeakObjectPtr::Get(&local_1b8), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_1b0);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
      iVar2 = *(int *)(lVar6 + 0x588);
      *(int *)(lVar6 + 0x588) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x58c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar12 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar9);
      *puVar12 = local_1b8;
      puVar12[1] = local_1b4;
      *(longlong *)(puVar12 + 2) = local_1b0;
      *(undefined4 *)(lVar8 + 0x50) = local_1a0;
      goto LAB_142bda7d2;
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_198 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar9 + 1,lVar8);
      plVar9[2] = (longlong)FUN_142beb5f0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar6;
      *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_128 = 0;
    local_120 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_128);
    }
    FWeakObjectPtr::operator=(local_118,0);
    local_1e0 = CONCAT44(local_1e0._4_4_,0xbf800000);
    local_1e8 = local_1e8 & 0xffffff00;
    local_110 = 0;
    local_d8 = (longlong *)0x0;
    local_c8 = 0;
    local_108 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,lVar8 + 0x60,&local_128,0x3dcccccd);
    if (local_c8 != 0) {
      plVar13 = local_f8;
      if (local_d8 != (longlong *)0x0) {
        plVar13 = local_d8;
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
    if (plVar9 == (longlong *)0x0) goto LAB_142bda7d2;
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    plVar9 = (longlong *)FMemory::Realloc(plVar9,0,0);
    local_198 = plVar9;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
LAB_142bda7d2:
  if (local_148 == (longlong *)0x0) {
    return lVar8;
  }
  LOCK();
  plVar9 = local_148 + 1;
  lVar6 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    (**(code **)*local_148)(local_148);
    LOCK();
    piVar1 = (int *)((longlong)local_148 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_148 + 8))(local_148,1);
      return lVar8;
    }
    return lVar8;
  }
  return lVar8;
}



// FUNCTION 142bda850 FUN_142bda850 body=3148 status=ok
// SIG undefined FUN_142bda850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142bda850(longlong param_1,longlong *param_2,longlong param_3,int param_4,longlong *param_5)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined2 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  int local_304;
  undefined8 *local_300;
  uint local_2f8;
  int local_2f4;
  undefined1 local_2f0 [4];
  int local_2ec;
  uint local_2e8;
  int local_2e4;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  int local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  longlong local_288;
  longlong *local_280;
  longlong *local_278;
  longlong local_270 [2];
  longlong local_260;
  undefined8 *local_258;
  uint local_250;
  undefined4 local_24c;
  int local_248;
  longlong local_240;
  uint local_238;
  longlong local_230 [2];
  longlong local_220 [2];
  undefined8 *local_210;
  undefined8 *local_208 [2];
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 local_1b2;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  byte local_9a;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_6f;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  iVar6 = 0;
  local_278 = param_5;
  local_304 = 0;
  local_2c0 = param_4;
  local_288 = param_1;
  local_280 = param_2;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x40) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*param_5 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar24 = *(longlong *)(param_1 + 0xa0);
      piVar18 = (int *)(lVar24 + 0x174);
      plVar11 = (longlong *)(lVar24 + 400);
      do {
        if ((*plVar11 == *(longlong *)(param_3 + 0x18)) && (*piVar18 == param_4)) {
          lVar24 = lVar24 + 8 + (longlong)iVar6 * 0x198;
          if (lVar24 != 0) goto LAB_142bdb36b;
          break;
        }
        iVar6 = iVar6 + 1;
        plVar11 = plVar11 + 0x33;
        piVar18 = piVar18 + 0x66;
      } while (iVar6 < *(int *)(param_1 + 0xa8));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b2c6b8) &&
       (_Init_thread_header(&DAT_146b2c6b8), DAT_146b2c6b8 == -1)) {
      uVar16 = UEnum::GetPrivateStaticClass();
      DAT_146b2c6b0 = FUN_141799410(uVar16,0xffffffffffffffff,L"EEnvQueryRunMode");
      _Init_thread_footer(&DAT_146b2c6b8);
    }
    if (DAT_146b2c6b0 == 0) {
      local_2c8 = *(longlong *)(param_3 + 0x18);
      puVar8 = (undefined8 *)FName::ToString(&local_2c8,local_220);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_300,L"%s_%d",puVar20,(longlong)param_4 & 0xff);
      ppuVar9 = &local_300;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
      bVar1 = true;
    }
    else {
      puVar8 = (undefined8 *)UEnum::GetNameStringByValue(DAT_146b2c6b0,local_270,(longlong)param_4);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar8;
      }
      local_2d0 = *(longlong *)(param_3 + 0x18);
      puVar8 = (undefined8 *)FName::ToString(&local_2d0,local_230);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar25 = &DAT_143f3eda8;
      }
      else {
        puVar25 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(local_208,L"%s_%s",puVar25,puVar20);
      ppuVar9 = local_208;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
    }
    puVar8 = *ppuVar9;
    *ppuVar9 = (undefined8 *)0x0;
    iVar6 = *(int *)(ppuVar9 + 1);
    ppuVar9[1] = (undefined8 *)0x0;
    local_210 = puVar8;
    if ((bVar1) && (local_300 != (undefined8 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_220[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_208[0] != (undefined8 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_230[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_270[0] != 0)) {
      FMemory::Free();
    }
    puVar23 = (undefined8 *)&DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar23 = puVar8;
    }
    puVar8 = (undefined8 *)FName::FName(local_208,puVar23,1);
    local_318 = 0xff800000;
    local_320 = 0;
    local_328 = 0;
    lVar10 = FUN_1417987a0(param_3,param_1,*puVar8,0xefffffff);
    local_9a = local_9a & 0xf8;
    local_68 = *(undefined8 *)(param_3 + 0x18);
    local_1c8 = 0;
    uStack_1c0 = 0xffffffff00000000;
    local_1a0 = *(undefined8 *)(lVar10 + 0x18);
    local_2d0 = *(longlong *)(lVar10 + 0x30);
    local_98 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1b2 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0xffffffff;
    local_14c = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0xffffffff;
    local_fc = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 0xffffffffffffffff;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_6f = 0;
    local_2c8 = lVar10;
    local_1f8 = lVar10;
    plVar11 = (longlong *)FName::ToString(&local_2d0,&local_300);
    if (&local_1b0 != plVar11) {
      if (local_1b0 != 0) {
        FMemory::Free();
      }
      local_1b0 = *plVar11;
      *plVar11 = 0;
      local_1a8 = plVar11[1];
      plVar11[1] = 0;
    }
    if (local_300 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    plVar11 = (longlong *)(param_1 + 0xa0);
    iVar6 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar6 + 1;
    local_84 = param_4;
    if (*(int *)(param_1 + 0xac) < iVar6 + 1) {
      TArray<FQueuedPlayer,TSizedDefaultAllocator<32>_>::ResizeGrow(plVar11,iVar6);
    }
    lVar24 = (longlong)iVar6 * 0x198;
    lVar15 = *plVar11;
    *(longlong *)(lVar24 + lVar15) = local_1f8;
    FUN_142bd2030(lVar15 + 8 + lVar24,&local_1f0);
    *(undefined8 *)(lVar24 + 400 + lVar15) = local_68;
    lVar24 = *plVar11 + 8 + lVar24;
    local_2d0 = lVar24;
    FUN_142bd6600(&local_1f0);
    local_304 = 0;
    local_2e4 = 0;
    if (0 < *(int *)(lVar10 + 0x40)) {
      local_306 = local_308;
      local_307 = local_308;
      local_2b8 = 0;
      uVar21 = local_308;
      uVar22 = local_308;
LAB_142bdad50:
      lVar15 = local_2b8;
      iVar6 = local_2e4;
      lVar24 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + local_2b8 * 8);
      if (((lVar24 != 0) && (lVar13 = *(longlong *)(lVar24 + 0x28), lVar13 != 0)) &&
         (*(longlong *)(lVar13 + 0x50) != 0)) {
        lVar12 = UEnvQueryItemType::GetPrivateStaticClass();
        lVar13 = *(longlong *)(lVar13 + 0x50);
        lVar14 = lVar13;
        if (lVar13 != 0) {
LAB_142bdad80:
          if (lVar14 != lVar12) goto code_r0x000142bdad85;
          if (lVar13 == 0) goto LAB_142bdad8e;
          local_318 = 0xff800000;
          local_320 = 0;
          local_328 = 0;
          local_2a0 = 0;
          lVar13 = FUN_1417987a0(lVar24,local_288,0,0xefffffff);
          local_318 = 0xff800000;
          local_320 = 0;
          local_328 = 0;
          local_298 = 0;
          local_270[0] = lVar13;
          local_220[0] = FUN_1417987a0(*(undefined8 *)(lVar24 + 0x28),local_288,0,0xefffffff);
          *(longlong *)(*(longlong *)(lVar10 + 0x38) + lVar15 * 8) = lVar13;
          *(longlong *)(lVar13 + 0x28) = local_220[0];
          iVar6 = *(int *)(lVar24 + 0x38);
          if (((1 < iVar6) &&
              (lVar10 = *(longlong *)(*(longlong *)(lVar24 + 0x30) + -8 + (longlong)iVar6 * 8),
              lVar10 != 0)) && ((*(int *)(lVar10 + 0x40) == 0 && (iVar17 = 0, 0 < iVar6)))) {
            lVar10 = 0;
            do {
              lVar15 = *(longlong *)(lVar10 + *(longlong *)(lVar24 + 0x30));
              if (lVar15 != 0) {
                *(int *)(lVar15 + 0x40) = iVar17;
              }
              iVar17 = iVar17 + 1;
              lVar10 = lVar10 + 8;
            } while (iVar17 < *(int *)(lVar24 + 0x38));
          }
          uVar26 = *(uint *)(lVar24 + 0x38);
          puVar8 = (undefined8 *)0x0;
          _Src = *(void **)(lVar24 + 0x30);
          local_2e8 = 0;
          local_2d8 = (undefined8 *)0x0;
          local_300 = (undefined8 *)0x0;
          local_2e0 = (longlong *)CONCAT44(local_2e0._4_4_,uVar26);
          local_2f8 = uVar26;
          if (uVar26 == 0) {
            local_2f4 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_300,uVar26,0);
            puVar8 = local_300;
            local_2d8 = local_300;
            _guard_xfg_dispatch_icall_nop(local_300,_Src,(longlong)(int)uVar26 << 3);
            local_2e0 = (longlong *)CONCAT44(local_2e0._4_4_,local_2f8);
          }
          uVar27 = (ulonglong)local_2f8;
          iVar6 = local_2f8 - 1;
          lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x28) + 0x50);
          local_2ec = local_2f4;
          if (iVar6 < 0) goto LAB_142bdafbd;
          local_2e0 = puVar8 + iVar6;
          puVar8 = puVar8 + (int)local_2f8;
          plVar11 = local_2e0;
LAB_142bdaf48:
          lVar10 = *local_2e0;
          if ((lVar10 != 0) && (lVar24 != 0)) {
            lVar13 = UEnvQueryItemType::GetPrivateStaticClass();
            lVar15 = lVar24;
            do {
              if (lVar15 == lVar13) {
                lVar13 = UEnvQueryItemType::GetPrivateStaticClass();
                lVar15 = lVar24;
                goto LAB_142bdb0a3;
              }
              lVar15 = *(longlong *)(lVar15 + 0x30);
            } while (lVar15 != 0);
          }
LAB_142bdaf72:
          iVar17 = ((int)uVar27 - iVar6) + -1;
          if (iVar17 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar11,puVar8,(longlong)iVar17 << 3);
          }
          uVar27 = (ulonglong)((int)uVar27 - 1);
          goto LAB_142bdaf92;
        }
      }
LAB_142bdad8e:
      iVar17 = *(int *)(lVar10 + 0x40);
      iVar7 = (iVar17 - iVar6) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar6 * 8),
                   (void *)(*(longlong *)(lVar10 + 0x38) + (longlong)(iVar6 + 1) * 8),
                   (longlong)iVar7 << 3);
        iVar17 = *(int *)(lVar10 + 0x40);
      }
      local_2e4 = iVar6 + -1;
      *(int *)(lVar10 + 0x40) = iVar17 + -1;
      local_2b8 = lVar15 + -1;
      goto LAB_142bdb330;
    }
LAB_142bdb352:
    if (local_210 != (undefined8 *)0x0) {
      FMemory::Free();
    }
LAB_142bdb36b:
    plVar11 = local_278;
    param_2 = local_280;
    lVar10 = 0;
    if (*(int *)(lVar24 + 0x118) == 0) {
      *local_280 = 0;
      local_280[1] = 0;
    }
    else {
      lVar15 = operator_new(0x188);
      if (lVar15 != 0) {
        lVar10 = FUN_142bd2030(lVar15,lVar24);
      }
      local_2b0 = lVar10;
      local_2a8 = FUN_142bd1720(lVar10);
      SharedPointerInternals::EnableSharedFromThis(&local_2b0,lVar10,lVar10);
      iVar6 = (int)plVar11[1] + -1;
      if ((int)plVar11[1] == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        FString::operator=(local_2b0 + 0x40,plVar11);
      }
      *param_2 = local_2b0;
      param_2[1] = local_2a8;
      local_2a8 = 0;
      local_2b0 = 0;
    }
    if (*plVar11 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
code_r0x000142bdad85:
  lVar14 = *(longlong *)(lVar14 + 0x30);
  if (lVar14 == 0) goto LAB_142bdad8e;
  goto LAB_142bdad80;
  while (lVar15 = *(longlong *)(lVar15 + 0x30), lVar14 = 0, lVar15 != 0) {
LAB_142bdb0a3:
    lVar14 = lVar24;
    if (lVar15 == lVar13) break;
  }
  if (*(longlong *)(lVar10 + 0x1c0) != 0) {
    lVar12 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar15 = *(longlong *)(lVar10 + 0x1c0);
    for (lVar13 = lVar15; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
      if (lVar13 == lVar12) goto LAB_142bdb0e4;
    }
  }
  lVar15 = 0;
LAB_142bdb0e4:
  if (lVar14 != lVar15) {
    if (*(longlong *)(lVar10 + 0x1c0) != 0) {
      lVar14 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar15 = *(longlong *)(lVar10 + 0x1c0);
      for (lVar13 = lVar15; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
        if (lVar13 == lVar14) goto LAB_142bdb118;
      }
    }
    lVar15 = 0;
LAB_142bdb118:
    lVar14 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar13 = lVar24;
    do {
      lVar12 = lVar24;
      if (lVar13 == lVar14) goto joined_r0x000142bdb138;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
    lVar12 = 0;
joined_r0x000142bdb138:
    do {
      if (lVar12 == 0) goto LAB_142bdaf72;
      if (lVar12 == lVar15) break;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while( true );
  }
  if ((int)local_2e8 < (int)(uint)*(byte *)(lVar10 + 0xf0)) {
    local_2e8 = (uint)*(byte *)(lVar10 + 0xf0);
  }
LAB_142bdaf92:
  puVar8 = puVar8 + -1;
  local_2e0 = local_2e0 + -1;
  plVar11 = plVar11 + -1;
  iVar6 = iVar6 + -1;
  if (iVar6 < 0) goto code_r0x000142bdafae;
  goto LAB_142bdaf48;
code_r0x000142bdafae:
  local_2e0._4_4_ = (undefined4)((ulonglong)local_2e0 >> 0x20);
  local_2e0 = (longlong *)CONCAT44(local_2e0._4_4_,(int)uVar27);
  uVar21 = local_306;
  uVar22 = local_307;
LAB_142bdafbd:
  lVar24 = local_270[0];
  ppuVar9 = (undefined8 **)(local_270[0] + 0x30);
  *(undefined4 *)(local_270[0] + 0x38) = 0;
  if (*(int *)(local_270[0] + 0x3c) < (int)uVar27) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(ppuVar9);
  }
  lVar10 = local_288;
  lVar15 = lVar24;
  if (0 < (int)uVar27) {
    local_290 = 0;
    puVar8 = local_2d8;
    do {
      local_318 = 0xff800000;
      local_320 = 0;
      local_328 = 0;
      local_230[0] = FUN_1417987a0(*puVar8,lVar10,0,0xefffffff);
      iVar6 = *(int *)(lVar24 + 0x38);
      *(int *)(lVar24 + 0x38) = iVar6 + 1;
      if (*(int *)(lVar24 + 0x3c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(ppuVar9,iVar6);
      }
      puVar8 = puVar8 + 1;
      (*ppuVar9)[iVar6] = local_230[0];
      uVar27 = uVar27 - 1;
      lVar15 = local_270[0];
      uVar21 = local_306;
      uVar22 = local_307;
    } while (uVar27 != 0);
  }
  puVar8 = local_2d8;
  if (&local_300 == ppuVar9) {
    uVar26 = (uint)local_2e0;
  }
  else {
    uVar26 = *(uint *)(lVar24 + 0x38);
    puVar23 = *ppuVar9;
    local_2f8 = uVar26;
    if ((uVar26 == 0) && (local_2ec == 0)) {
      local_2f4 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_300,uVar26);
      puVar8 = local_300;
      local_2d8 = local_300;
      _guard_xfg_dispatch_icall_nop(local_300,puVar23,(longlong)(int)uVar26 << 3);
      uVar26 = local_2f8;
    }
  }
  if ((uVar26 != 0) && ((*(byte *)(local_220[0] + 0x58) & 1) != 0)) {
    if (local_2c0 == 0) {
      local_308 = (undefined1)local_2e8;
      FUN_142bd1060(puVar8,(longlong)(int)uVar26,uVar21,&local_308);
    }
    else if (local_2c0 - 1U < 3) {
      FUN_142bd0d90(puVar8,(longlong)(int)uVar26,uVar22,local_2f0);
    }
  }
  local_260 = *(longlong *)(lVar15 + 0x28);
  local_258 = (undefined8 *)0x0;
  local_24c = 0;
  local_240 = *(longlong *)(local_260 + 0x50);
  local_248 = local_304;
  local_250 = uVar26;
  if (0 < (int)uVar26) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_258);
  }
  lVar15 = local_240;
  puVar23 = local_258;
  lVar10 = local_260;
  _guard_xfg_dispatch_icall_nop(local_258,0,(longlong)(int)uVar26 << 3);
  lVar24 = local_2d0;
  if (0 < (int)uVar26) {
    uVar27 = (ulonglong)uVar26;
    puVar19 = puVar23;
    do {
      *puVar19 = *(undefined8 *)(((longlong)puVar8 - (longlong)puVar23) + (longlong)puVar19);
      puVar19 = puVar19 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  iVar6 = *(int *)(local_2d0 + 0x118);
  *(int *)(local_2d0 + 0x118) = iVar6 + 1;
  if (*(int *)(local_2d0 + 0x11c) < iVar6 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_2d0 + 0x110,iVar6);
  }
  plVar11 = (longlong *)((longlong)iVar6 * 0x30 + *(longlong *)(lVar24 + 0x110));
  lVar24 = (longlong)(int)local_250;
  *plVar11 = lVar10;
  plVar11[1] = 0;
  *(uint *)(plVar11 + 2) = local_250;
  if (local_250 == 0) {
    *(undefined4 *)((longlong)plVar11 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar11 + 1,local_250,0);
    _guard_xfg_dispatch_icall_nop((void *)plVar11[1],puVar23,lVar24 << 3);
  }
  *(uint *)(plVar11 + 5) = *(uint *)(plVar11 + 5) & 0xfffffffe;
  *(int *)(plVar11 + 3) = local_248;
  plVar11[4] = lVar15;
  *(uint *)(plVar11 + 5) = *(uint *)(plVar11 + 5) | local_238 & 1;
  if (puVar23 != (undefined8 *)0x0) {
    FMemory::Free(puVar23);
  }
  lVar10 = local_2c8;
  if (local_2d8 != (undefined8 *)0x0) {
    FMemory::Free();
    lVar10 = local_2c8;
  }
LAB_142bdb330:
  local_304 = local_304 + 1;
  local_2e4 = local_2e4 + 1;
  local_2b8 = local_2b8 + 1;
  lVar24 = local_2d0;
  if (*(int *)(lVar10 + 0x40) <= local_2e4) goto LAB_142bdb352;
  goto LAB_142bdad50;
}



// FUNCTION 142bdb4a0 FUN_142bdb4a0 body=73 status=ok
// SIG undefined FUN_142bdb4a0(void)

void FUN_142bdb4a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x4f0);
  if (lVar1 != 0) {
    FUN_142bd1d00(lVar1,param_1,param_1 + 0x6f0,param_1 + 0x708,param_1 + 0x718);
    return;
  }
  return;
}



// FUNCTION 142bdb4f0 FUN_142bdb4f0 body=6831 status=ok
// SIG undefined FUN_142bdb4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bdbc51) */
/* WARNING: Removing unreachable block (ram,0x000142bdbc61) */
/* WARNING: Removing unreachable block (ram,0x000142bdbc6d) */
/* WARNING: Removing unreachable block (ram,0x000142bdbc81) */

undefined8 FUN_142bdb4f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  char *pcVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_b58 [32];
  undefined2 local_b38;
  undefined4 *local_b28;
  undefined4 *puStack_b20;
  undefined4 *local_b18;
  undefined4 *puStack_b10;
  undefined4 *local_b08;
  undefined4 *puStack_b00;
  undefined4 *local_af8;
  ulonglong *puStack_af0;
  undefined4 *local_ae8;
  undefined4 *puStack_ae0;
  longlong local_ad8 [14];
  undefined4 *local_a68;
  undefined4 *puStack_a60;
  undefined1 local_a58 [8];
  longlong *local_a50;
  undefined8 local_a40;
  undefined1 local_a38 [8];
  longlong *local_a30;
  undefined8 local_a20;
  longlong local_a18;
  undefined8 local_a10;
  longlong local_a08;
  undefined8 local_a00;
  longlong *plStack_9f8;
  undefined8 local_9f0;
  longlong local_9e8;
  undefined8 local_9e0;
  longlong local_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  longlong local_9b8;
  undefined8 local_9b0;
  longlong local_9a8;
  undefined1 local_9a0 [20];
  undefined4 local_98c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined1 local_978 [16];
  undefined8 local_968;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  longlong local_948 [2];
  longlong local_938 [2];
  longlong local_928 [2];
  undefined8 local_918;
  undefined8 uStack_910;
  undefined1 local_908 [16];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined1 local_8e8 [16];
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c8 [16];
  longlong local_8b8 [2];
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_898 [16];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined1 local_878 [16];
  undefined1 local_868 [8];
  longlong *local_860;
  undefined1 local_850 [8];
  longlong *local_848;
  undefined1 local_838 [8];
  longlong *local_830;
  undefined1 local_820 [24];
  undefined1 local_808 [24];
  undefined1 local_7f0 [24];
  undefined1 local_7d8 [8];
  longlong *local_7d0;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a8 [8];
  longlong *local_7a0;
  undefined1 local_790 [8];
  longlong *local_788;
  undefined1 local_778 [8];
  longlong *local_770;
  undefined1 local_760 [8];
  longlong *local_758;
  undefined1 local_748 [24];
  undefined1 local_730 [24];
  undefined1 local_718 [8];
  longlong *local_710;
  undefined1 local_700 [24];
  undefined1 local_6e8 [8];
  longlong *local_6e0;
  undefined1 local_6d0 [8];
  longlong *local_6c8;
  undefined1 local_6b8 [8];
  longlong *local_6b0;
  undefined1 local_6a0 [24];
  undefined1 local_688 [8];
  longlong *local_680;
  undefined1 local_670 [8];
  longlong *local_668;
  undefined1 local_658 [8];
  longlong *local_650;
  undefined1 local_640 [8];
  longlong *local_638;
  undefined1 local_628 [8];
  longlong *local_620;
  undefined1 local_610 [8];
  longlong *local_608;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined1 local_5e0 [8];
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5b0 [8];
  longlong *local_5a8;
  undefined1 local_598 [8];
  longlong *local_590;
  undefined1 local_580 [16];
  undefined1 local_570 [16];
  undefined1 local_560 [16];
  undefined1 local_550 [16];
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [24];
  undefined1 local_4f8 [24];
  undefined1 local_4e0 [24];
  undefined1 local_4c8 [24];
  undefined1 local_4b0 [24];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  undefined1 local_468 [24];
  undefined1 local_450 [24];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  undefined4 local_378 [4];
  undefined1 local_368 [8];
  longlong *local_360;
  char local_350;
  undefined4 local_348 [4];
  undefined1 local_338 [24];
  undefined1 local_320;
  undefined4 local_318;
  undefined1 local_308 [24];
  undefined1 local_2f0;
  undefined4 local_2e8 [4];
  undefined1 local_2d8 [24];
  char local_2c0 [8];
  undefined4 local_2b8;
  undefined1 local_2a8 [24];
  undefined1 local_290;
  undefined4 local_288 [4];
  undefined1 local_278 [24];
  undefined1 local_260;
  undefined4 local_258;
  undefined1 local_248 [24];
  undefined1 local_230;
  undefined4 local_228 [4];
  undefined1 local_218 [24];
  undefined1 local_200;
  undefined4 local_1f8;
  undefined1 local_1e8 [24];
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [24];
  char local_170 [8];
  undefined4 local_168;
  undefined1 local_158 [24];
  undefined1 local_140;
  undefined4 local_138;
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  char local_e0 [8];
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_b58;
  local_af8 = (undefined4 *)((ulonglong)local_af8 & 0xffffffff00000000);
  local_b08 = param_3;
  local_a40 = param_2;
  FText::FText(local_a38);
  local_988 = (undefined4 *)CONCAT44(local_988._4_4_,(undefined4)local_988);
  uStack_980 = (undefined4 *)CONCAT44(uStack_980._4_4_,(undefined4)uStack_980);
  local_968 = (undefined4 *)CONCAT44(local_968._4_4_,(undefined4)local_968);
  uStack_960 = (undefined4 *)CONCAT44(uStack_960._4_4_,(undefined4)uStack_960);
  if ((*(char *)(param_1 + 0x44) != '\x01') &&
     (local_988 = (undefined4 *)CONCAT44(local_988._4_4_,(undefined4)local_988),
     uStack_980 = (undefined4 *)CONCAT44(uStack_980._4_4_,(undefined4)uStack_980),
     local_968 = (undefined4 *)CONCAT44(local_968._4_4_,(undefined4)local_968),
     uStack_960 = (undefined4 *)CONCAT44(uStack_960._4_4_,(undefined4)uStack_960),
     *(char *)(param_1 + 0x5a) == '\x03')) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      bVar27 = *(char *)(param_1 + 0x88) == '\0';
      if (bVar27) {
        uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_688,L"not ",L"EnvQueryGenerator",L"NotWithSpace");
      }
      else {
        uVar15 = FUN_1404b03b0();
        uVar15 = FText::FText(local_670,uVar15);
      }
      bVar12 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = !bVar27;
      bVar8 = true;
      bVar7 = false;
      bVar6 = true;
      local_ad8[0] = 0;
      local_ad8[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8,0);
      local_b38 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_ad8[0],0xb,"{0} {1}{2}");
      puVar16 = (undefined4 *)FText::FromString(local_4c8,param_3);
      local_b28 = puVar16;
      puVar17 = (undefined4 *)FText::FText(local_4b0,uVar15);
      local_af8 = puVar17;
      puVar20 = (undefined4 *)
                FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_498,L"require",L"EnvQueryGenerator",L"FilterRequire");
      local_b18 = puVar20;
      uVar15 = FText::FromString(local_6a0,local_ad8);
      puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_520,uVar15);
      local_198[0] = 4;
      FText::FText(local_188,puVar20);
      local_170[0] = '\x01';
      local_168 = 4;
      FText::FText(local_158,puVar17);
      local_140 = 1;
      local_138 = 4;
      FText::FText(local_128,puVar16);
      local_a68 = local_198;
      local_110 = 1;
      puStack_a60 = local_108;
      local_a20 = *puVar24;
      local_a18 = puVar24[1];
      if (local_a18 != 0) {
        LOCK();
        *(int *)(local_a18 + 8) = *(int *)(local_a18 + 8) + 1;
        UNLOCK();
      }
      local_968 = local_a68;
      uStack_960 = puStack_a60;
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_958,&local_968);
      uVar15 = FText::Format(local_6b8,&local_a20,uVar15);
      FText::FText(local_7c0,uVar15);
      if (local_6b0 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_6b0 + 1;
        lVar18 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_6b0)(local_6b0);
          LOCK();
          piVar1 = (int *)((longlong)local_6b0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_6b0 + 8))(local_6b0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_958);
      lVar18 = 3;
      pcVar25 = local_e0;
      do {
        lVar18 = lVar18 + -1;
        pcVar2 = pcVar25 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar19 = *(longlong **)(pcVar25 + -0x40);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar19 + 1;
            lVar26 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar26 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
        }
        pcVar25 = pcVar2;
      } while (lVar18 != 0);
      plVar19 = (longlong *)puVar24[1];
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(local_b18 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(local_af8 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(local_b28 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      puVar21 = local_7c0;
    }
    else {
      local_ad8[2] = 0;
      local_ad8[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 2,0);
      local_b38 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_ad8[2],0xd,"{0} {1}: {2}");
      uVar15 = FAIDataProviderValue::ToString(param_1 + 0x60,local_948);
      puVar16 = (undefined4 *)FText::FromString(local_510,uVar15);
      local_b18 = puVar16;
      puVar17 = (undefined4 *)FText::FromString(local_4f8,param_3);
      local_af8 = puVar17;
      lVar18 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_4e0,L"require",L"EnvQueryGenerator",L"FilterRequire");
      uVar15 = FText::FromString(local_778,local_ad8 + 2);
      plVar19 = (longlong *)FTextFormat::FTextFormat(local_530,uVar15);
      local_228[0] = 4;
      FText::FText(local_218,lVar18);
      local_200 = 1;
      local_1f8 = 4;
      FText::FText(local_1e8,puVar17);
      local_1d0 = 1;
      local_1c8 = 4;
      FText::FText(local_1b8,puVar16);
      local_ae8 = local_228;
      local_1a0 = 1;
      puStack_ae0 = local_198;
      local_a68 = (undefined4 *)*plVar19;
      puStack_a60 = (undefined4 *)plVar19[1];
      if (puStack_a60 != (undefined4 *)0x0) {
        LOCK();
        puStack_a60[2] = puStack_a60[2] + 1;
        UNLOCK();
      }
      local_988 = local_ae8;
      uStack_980 = puStack_ae0;
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_978,&local_988);
      uVar15 = FText::Format(local_6d0,&local_a68,uVar15);
      FText::FText(local_7a8,uVar15);
      if (local_6c8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_6c8 + 1;
        lVar26 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar26 == 1) {
          (**(code **)*local_6c8)(local_6c8);
          LOCK();
          piVar1 = (int *)((longlong)local_6c8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_6c8 + 8))(local_6c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_978);
      lVar26 = 3;
      pcVar25 = local_170;
      do {
        lVar26 = lVar26 + -1;
        pcVar2 = pcVar25 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar25 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar13 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
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
        }
        pcVar25 = pcVar2;
      } while (lVar26 != 0);
      plVar19 = (longlong *)plVar19[1];
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar26 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar26 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(lVar18 + 8);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(local_af8 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(local_b18 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar18 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      puVar21 = local_7a8;
      bVar12 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = false;
      bVar27 = false;
      bVar8 = false;
      bVar7 = true;
      bVar6 = false;
    }
    FText::operator=(local_a38,puVar21);
    if ((bVar6) && (local_7b8 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_7b8 + 1;
      lVar18 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_7b8 + 8))(local_7b8,1);
        }
      }
    }
    if ((bVar8) && (local_ad8[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar27) && (local_680 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_680 + 1;
      lVar18 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_680)(local_680);
        LOCK();
        piVar1 = (int *)((longlong)local_680 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_680 + 8))(local_680,1);
        }
      }
    }
    if ((bVar9) && (local_668 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_668 + 1;
      lVar18 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_668)(local_668);
        LOCK();
        piVar1 = (int *)((longlong)local_668 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_668 + 8))(local_668,1);
        }
      }
    }
    if ((bVar10) && (local_7a0 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_7a0 + 1;
      lVar18 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_7a0)(local_7a0);
        LOCK();
        piVar1 = (int *)((longlong)local_7a0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_7a0 + 8))(local_7a0,1);
        }
      }
    }
    if ((bVar11) && (local_770 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_770 + 1;
      lVar18 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_770)(local_770);
        LOCK();
        piVar1 = (int *)((longlong)local_770 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_770 + 8))(local_770,1);
        }
      }
    }
    if ((bVar12) && (local_948[0] != 0)) {
      FMemory::Free();
    }
    param_3 = local_b08;
    if ((bVar7) && (local_ad8[2] != 0)) {
      FMemory::Free();
      param_3 = local_b08;
    }
  }
  bVar6 = false;
  bVar27 = false;
  FNumberFormattingOptions::FNumberFormattingOptions(local_9a0);
  lVar18 = 2;
  local_98c = 2;
  FText::FText(local_a58);
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_640,L"don\'t score",L"EnvQueryGenerator",L"DontScore");
    FText::operator=(local_a58,uVar15);
    plVar19 = local_638;
  }
  else {
    if (*(char *)(param_1 + 0xf1) != '\x04') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        bVar27 = *(float *)(param_1 + 0x180) <= 0.0;
        if (bVar27) {
          uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_748,L"not ",L"EnvQueryGenerator",L"NotWithSpace");
        }
        else {
          uVar15 = FUN_1404b03b0();
          uVar15 = FText::FText(local_730,uVar15);
        }
        FText::FText(local_7f0,uVar15);
        if (bVar27) {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_748);
        }
        else {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_730);
        }
        local_9d0 = 0;
        uStack_9c8 = 0;
        FText::AsNumber(local_808,*(uint *)(param_1 + 0x180) & 0x7fffffff,local_9a0,&local_9d0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_9d0);
        local_ad8[10] = 0;
        local_ad8[0xb] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 10,0);
        local_b38 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_ad8[10],0x12,"{0} {1}{2} [x{3}]");
        uVar15 = FText::FText(local_408,local_808);
        puVar16 = (undefined4 *)FText::FromString(local_3f0,param_3);
        local_b18 = puVar16;
        puVar17 = (undefined4 *)FText::FText(local_3d8,local_7f0);
        local_b28 = puVar17;
        local_b08 = (undefined4 *)
                    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_3c0,L"prefer",L"EnvQueryGenerator",L"ScorePrefer");
        uVar22 = FText::FromString(local_700,local_ad8 + 10);
        puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_550,uVar22);
        local_108[0] = 4;
        FText::FText(local_f8,local_b08);
        local_e0[0] = '\x01';
        local_d8 = 4;
        FText::FText(local_c8,puVar17);
        local_b0 = 1;
        local_a8 = 4;
        FText::FText(local_98,puVar16);
        local_80 = 1;
        local_78 = 4;
        FText::FText(local_68,uVar15);
        local_af8 = local_108;
        local_50 = 1;
        puStack_af0 = local_48;
        local_9c0 = *puVar24;
        local_9b8 = puVar24[1];
        if (local_9b8 != 0) {
          LOCK();
          *(int *)(local_9b8 + 8) = *(int *)(local_9b8 + 8) + 1;
          UNLOCK();
        }
        local_8a8 = local_af8;
        uStack_8a0 = puStack_af0;
        uVar22 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_898,&local_8a8);
        uVar22 = FText::Format(local_718,&local_9c0,uVar22);
        FText::FText(local_820,uVar22);
        if (local_710 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_710 + 1;
          lVar26 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)*local_710)(local_710);
            LOCK();
            piVar1 = (int *)((longlong)local_710 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_710 + 8))(local_710,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_898);
        lVar26 = 4;
        puVar21 = &stack0xffffffffffffffc8;
        do {
          puVar21 = puVar21 + -0x30;
          TOptional<FExpressionError>::Reset(puVar21);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar24);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b08);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b28);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b18);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar15);
        FText::operator=(local_a58,local_820);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_820);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_700);
        if (local_ad8[10] != 0) {
          FMemory::Free();
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_808);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7f0);
      }
      else {
        local_ad8[8] = 0;
        local_ad8[9] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 8,0);
        local_b38 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_ad8[8],9,"{0}: {1}");
        uVar15 = FAIDataProviderValue::ToString(param_1 + 0x158,local_8b8);
        uVar15 = FText::FromString(local_438,uVar15);
        puVar16 = (undefined4 *)
                  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_420,L"score factor",L"EnvQueryGenerator",L"ScoreFactor");
        local_b28 = puVar16;
        uVar22 = FText::FromString(local_760,local_ad8 + 8);
        puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_560,uVar22);
        local_2e8[0] = 4;
        FText::FText(local_2d8,puVar16);
        local_2c0[0] = '\x01';
        local_2b8 = 4;
        FText::FText(local_2a8,uVar15);
        local_b18 = local_2e8;
        local_290 = 1;
        puStack_b10 = local_288;
        local_9e0 = *puVar24;
        local_9d8 = puVar24[1];
        if (local_9d8 != 0) {
          LOCK();
          *(int *)(local_9d8 + 8) = *(int *)(local_9d8 + 8) + 1;
          UNLOCK();
        }
        local_8d8 = local_b18;
        uStack_8d0 = puStack_b10;
        uVar22 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_8c8,&local_8d8);
        uVar22 = FText::Format(local_5b0,&local_9e0,uVar22);
        FText::FText(local_838,uVar22);
        if (local_5a8 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_5a8 + 1;
          lVar26 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)*local_5a8)(local_5a8);
            LOCK();
            piVar1 = (int *)((longlong)local_5a8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_5a8 + 8))(local_5a8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_8c8);
        lVar26 = 2;
        puVar21 = local_278;
        do {
          puVar21 = puVar21 + -0x30;
          TOptional<FExpressionError>::Reset(puVar21);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar24);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b28);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar15);
        FText::operator=(local_a58,local_838);
        if (local_830 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_830 + 1;
          lVar26 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)*local_830)(local_830);
            LOCK();
            piVar1 = (int *)((longlong)local_830 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_830 + 8))(local_830,1);
            }
          }
        }
        if (local_758 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_758 + 1;
          lVar26 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)*local_758)(local_758);
            LOCK();
            piVar1 = (int *)((longlong)local_758 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_758 + 8))(local_758,1);
            }
          }
        }
        if (local_8b8[0] != 0) {
          FMemory::Free();
        }
        if (local_ad8[8] != 0) {
          FMemory::Free();
        }
      }
      goto LAB_142bdcc22;
    }
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_ad8[4] = 0;
      local_ad8[5] = 5;
      local_a00 = 0;
      plStack_9f8 = (longlong *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 4,0);
      local_b38 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_ad8[4],5,&DAT_1457f38d4);
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      lVar26 = FText::AsNumber(local_480,*(uint *)(param_1 + 0x180) & 0x7fffffff,local_9a0,
                               &local_a00);
      uVar15 = FText::FromString(local_610,local_ad8 + 4);
      puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_580,uVar15);
      local_378[0] = 4;
      FText::FText(local_368,lVar26);
      local_b28 = local_378;
      local_350 = '\x01';
      puStack_b20 = local_348;
      local_a10 = *puVar24;
      local_a08 = puVar24[1];
      if (local_a08 != 0) {
        LOCK();
        *(int *)(local_a08 + 8) = *(int *)(local_a08 + 8) + 1;
        UNLOCK();
      }
      local_918 = local_b28;
      uStack_910 = puStack_b20;
      uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_908,&local_918);
      uVar15 = FText::Format(local_628,&local_a10,uVar15);
      FText::FText(local_790,uVar15);
      if (local_620 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_620 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_620)(local_620);
          LOCK();
          piVar1 = (int *)((longlong)local_620 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_620 + 8))(local_620,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_908);
      if ((local_350 != '\0') && (local_350 = '\0', local_360 != (longlong *)0x0)) {
        LOCK();
        plVar19 = local_360 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar1 = (int *)((longlong)local_360 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_360 + 8))(local_360,1);
          }
        }
      }
      plVar19 = (longlong *)puVar24[1];
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = *(longlong **)(lVar26 + 8);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar19 + 1;
        lVar26 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar26 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      puVar21 = local_790;
    }
    else {
      plVar19 = *(longlong **)(param_1 + 0x168);
      bVar27 = plVar19 == (longlong *)0x0;
      if (bVar27) {
        plVar19 = (longlong *)
                  (*(code *)**(undefined8 **)(param_1 + 0x158))
                            ((undefined8 *)(param_1 + 0x158),local_938);
      }
      else {
        plVar19 = (longlong *)
                  (**(code **)(*plVar19 + 0x280))
                            (plVar19,local_928,*(undefined8 *)(param_1 + 0x170));
      }
      local_ae8 = (undefined4 *)*plVar19;
      *plVar19 = 0;
      puStack_ae0 = (undefined4 *)plVar19[1];
      plVar19[1] = 0;
      if ((bVar27) && (local_938[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar27) && (local_928[0] != 0)) {
        FMemory::Free();
      }
      bVar27 = true;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      puVar21 = (undefined1 *)FText::FromString(local_5f8,&local_ae8);
    }
    FText::FText(local_850,puVar21);
    if ((bVar7) && (local_788 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_788 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_788)(local_788);
        LOCK();
        piVar1 = (int *)((longlong)local_788 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_788 + 8))(local_788,1);
        }
      }
    }
    if ((bVar8) && (local_608 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_608 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_608)(local_608);
        LOCK();
        piVar1 = (int *)((longlong)local_608 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_608 + 8))(local_608,1);
        }
      }
    }
    if ((bVar9) && (local_ad8[4] != 0)) {
      FMemory::Free();
    }
    plVar19 = plStack_9f8;
    if ((bVar10) && (plStack_9f8 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_9f8 + 1;
      lVar26 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*plStack_9f8)(plStack_9f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
    if ((bVar27) && (local_5f0 != (longlong *)0x0)) {
      LOCK();
      plVar19 = local_5f0 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_5f0 + 8))(local_5f0,1);
        }
      }
    }
    if ((bVar6) && (local_ae8 != (undefined4 *)0x0)) {
      FMemory::Free();
    }
    local_ad8[6] = 0;
    local_ad8[7] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 6,0);
    local_b38 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_ad8[6],10,"{0} [{1}]");
    puVar16 = (undefined4 *)FText::FText(local_468,local_850);
    local_b18 = puVar16;
    puVar17 = (undefined4 *)
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_450,L"constant score",L"EnvQueryGenerator",L"ScoreConstant");
    local_b28 = puVar17;
    uVar15 = FText::FromString(local_5c8,local_ad8 + 6);
    puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_570,uVar15);
    local_348[0] = 4;
    FText::FText(local_338,puVar17);
    local_320 = 1;
    local_318 = 4;
    FText::FText(local_308,puVar16);
    local_b08 = local_348;
    local_2f0 = 1;
    puStack_b00 = local_2e8;
    local_9f0 = *puVar24;
    local_9e8 = puVar24[1];
    if (local_9e8 != 0) {
      LOCK();
      *(int *)(local_9e8 + 8) = *(int *)(local_9e8 + 8) + 1;
      UNLOCK();
    }
    local_8f8 = local_b08;
    uStack_8f0 = puStack_b00;
    uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_8e8,&local_8f8);
    uVar15 = FText::Format(local_5e0,&local_9f0,uVar15);
    FText::FText(local_868,uVar15);
    if (local_5d8 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_5d8 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_5d8)(local_5d8);
        LOCK();
        piVar1 = (int *)((longlong)local_5d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_5d8 + 8))(local_5d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_8e8);
    lVar26 = 2;
    pcVar25 = local_2c0;
    do {
      lVar26 = lVar26 + -1;
      pcVar2 = pcVar25 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar19 = *(longlong **)(pcVar25 + -0x40);
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar19 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19,1);
            }
          }
        }
      }
      pcVar25 = pcVar2;
    } while (lVar26 != 0);
    plVar19 = (longlong *)puVar24[1];
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar19 + 1;
      lVar26 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
    plVar19 = *(longlong **)(local_b28 + 2);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar19 + 1;
      lVar26 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
    plVar19 = *(longlong **)(local_b18 + 2);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar19 + 1;
      lVar26 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
    FText::operator=(local_a58,local_868);
    if (local_860 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_860 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_860)(local_860);
        LOCK();
        piVar1 = (int *)((longlong)local_860 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_860 + 8))(local_860,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_5c0 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    plVar19 = local_848;
    if (local_ad8[6] != 0) {
      FMemory::Free();
      plVar19 = local_848;
    }
  }
  local_8d8 = (undefined4 *)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
  uStack_8d0 = (undefined4 *)CONCAT44(uStack_8d0._4_4_,(undefined4)uStack_8d0);
  local_8a8 = (undefined4 *)CONCAT44(local_8a8._4_4_,(undefined4)local_8a8);
  uStack_8a0 = (ulonglong *)CONCAT44(uStack_8a0._4_4_,(undefined4)uStack_8a0);
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar19 + 1;
    lVar26 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    local_8d8 = (undefined4 *)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
    uStack_8d0 = (undefined4 *)CONCAT44(uStack_8d0._4_4_,(undefined4)uStack_8d0);
    local_8a8 = (undefined4 *)CONCAT44(local_8a8._4_4_,(undefined4)local_8a8);
    uStack_8a0 = (ulonglong *)CONCAT44(uStack_8a0._4_4_,(undefined4)uStack_8a0);
    if ((int)lVar26 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19,1);
      }
    }
  }
LAB_142bdcc22:
  cVar14 = FText::IsEmpty(local_a38);
  if (cVar14 == '\0') {
    local_ad8[0xd] = 9;
    local_ad8[0xc] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_ad8 + 0xc,0);
    local_b38 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_ad8[0xc],9,"{0}, {1}");
    uVar15 = FText::FText(local_3a8,local_a58);
    uVar22 = FText::FText(local_390,local_a38);
    uVar23 = FText::FromString(local_6e8,local_ad8 + 0xc);
    puVar24 = (undefined8 *)FTextFormat::FTextFormat(local_540,uVar23);
    local_288[0] = 4;
    FText::FText(local_278,uVar22);
    local_260 = 1;
    local_258 = 4;
    FText::FText(local_248,uVar15);
    local_b28 = local_288;
    local_230 = 1;
    puStack_b20 = local_228;
    local_9b0 = *puVar24;
    local_9a8 = puVar24[1];
    if (local_9a8 != 0) {
      LOCK();
      *(int *)(local_9a8 + 8) = *(int *)(local_9a8 + 8) + 1;
      UNLOCK();
    }
    local_888 = local_b28;
    uStack_880 = puStack_b20;
    uVar23 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_878,&local_888);
    uVar23 = FText::Format(local_658,&local_9b0,uVar23);
    FText::FText(local_7d8,uVar23);
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_650 + 1;
      lVar26 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar26 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)local_650 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_650 + 8))(local_650,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_878);
    puVar21 = local_218;
    do {
      puVar21 = puVar21 + -0x30;
      TOptional<FExpressionError>::Reset(puVar21);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar24);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar22);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar15);
    puVar21 = local_7d8;
    bVar8 = false;
    bVar7 = true;
    bVar6 = true;
    bVar27 = true;
  }
  else {
    puVar21 = (undefined1 *)FText::FText(local_598,local_a58);
    bVar8 = true;
    bVar7 = false;
    bVar6 = false;
    bVar27 = false;
  }
  uVar15 = local_a40;
  FText::FText(local_a40,puVar21);
  if ((bVar27) && (local_7d0 != (longlong *)0x0)) {
    LOCK();
    plVar19 = local_7d0 + 1;
    lVar18 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_7d0)(local_7d0);
      LOCK();
      piVar1 = (int *)((longlong)local_7d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_7d0 + 8))(local_7d0,1);
      }
    }
  }
  if ((bVar6) && (local_6e0 != (longlong *)0x0)) {
    LOCK();
    plVar19 = local_6e0 + 1;
    lVar18 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_6e0)(local_6e0);
      LOCK();
      piVar1 = (int *)((longlong)local_6e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_6e0 + 8))(local_6e0,1);
      }
    }
  }
  if ((bVar7) && (local_ad8[0xc] != 0)) {
    FMemory::Free();
  }
  if ((bVar8) && (local_590 != (longlong *)0x0)) {
    LOCK();
    plVar19 = local_590 + 1;
    lVar18 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_590)(local_590);
      LOCK();
      piVar1 = (int *)((longlong)local_590 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_590 + 8))(local_590,1);
      }
    }
  }
  if (local_a50 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_a50 + 1;
    lVar18 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_a50)(local_a50);
      LOCK();
      piVar1 = (int *)((longlong)local_a50 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a50 + 8))(local_a50,1);
      }
    }
  }
  if (local_a30 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_a30 + 1;
    lVar18 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_a30)(local_a30);
      LOCK();
      piVar1 = (int *)((longlong)local_a30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a30 + 8))(local_a30,1);
      }
    }
  }
  return uVar15;
}



// FUNCTION 142bdcfa0 DescribeContext body=73 status=ok
// SIG undefined DescribeContext(void)

undefined8 UEnvQueryTypes::DescribeContext(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UEnvQueryContext::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_142bdcfd0;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_142bdcfd0:
  FUN_142be57d0(param_1,param_2);
  return param_1;
}



// FUNCTION 142bdcff0 FUN_142bdcff0 body=6609 status=ok
// SIG undefined FUN_142bdcff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bde88d) */
/* WARNING: Removing unreachable block (ram,0x000142bde89a) */

undefined8 FUN_142bdcff0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  char *pcVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_a88 [32];
  undefined2 local_a68;
  undefined4 *local_a58;
  ulonglong *puStack_a50;
  undefined4 *local_a48;
  undefined4 *puStack_a40;
  undefined4 *local_a38;
  longlong *plStack_a30;
  longlong local_a28 [10];
  longlong *local_9d8;
  undefined4 *puStack_9d0;
  undefined4 *local_9c8;
  undefined4 *puStack_9c0;
  undefined4 *local_9b8;
  undefined4 *puStack_9b0;
  undefined1 local_9a8 [8];
  longlong *local_9a0;
  undefined1 local_990 [8];
  longlong *local_988;
  undefined8 local_978;
  undefined8 local_970;
  longlong local_968;
  undefined8 local_960;
  longlong local_958;
  undefined8 local_950;
  longlong *plStack_948;
  undefined8 local_940;
  longlong local_938;
  undefined8 local_930;
  longlong local_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  longlong local_908;
  undefined8 local_900;
  longlong local_8f8;
  undefined1 local_8f0 [20];
  undefined4 local_8dc;
  undefined1 local_8d8 [32];
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined1 local_8a8 [16];
  longlong local_898 [2];
  longlong local_888 [2];
  undefined8 local_878;
  undefined8 uStack_870;
  undefined1 local_868 [16];
  longlong local_858 [2];
  undefined8 local_848;
  undefined8 uStack_840;
  undefined1 local_838 [16];
  longlong local_828 [2];
  longlong local_818 [2];
  longlong local_808 [2];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e8 [16];
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined1 local_7c8 [16];
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined1 local_7a8 [16];
  longlong local_798 [2];
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined1 local_768 [16];
  undefined1 local_758 [8];
  longlong *local_750;
  undefined1 local_740 [8];
  longlong *local_738;
  undefined1 local_728 [8];
  longlong *local_720;
  undefined1 local_710 [8];
  longlong *local_708;
  undefined1 local_6f8 [24];
  undefined1 local_6e0 [24];
  undefined1 local_6c8 [8];
  longlong *local_6c0;
  undefined1 local_6b0 [16];
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined1 local_688 [8];
  longlong *local_680;
  undefined1 local_670 [8];
  longlong *local_668;
  undefined1 local_658 [8];
  longlong *local_650;
  undefined1 local_640 [8];
  longlong *local_638;
  undefined1 local_628 [8];
  longlong *local_620;
  undefined1 local_610 [8];
  longlong *local_608;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined1 local_5e0 [24];
  undefined1 local_5c8 [24];
  undefined1 local_5b0 [24];
  undefined1 local_598 [8];
  longlong *local_590;
  undefined1 local_580 [8];
  longlong *local_578;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined1 local_550 [8];
  longlong *local_548;
  undefined1 local_538 [8];
  longlong *local_530;
  undefined1 local_520 [8];
  longlong *local_518;
  undefined1 local_508 [8];
  longlong *local_500;
  undefined1 local_4f0 [8];
  longlong *local_4e8;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  undefined1 local_4c0 [8];
  longlong *local_4b8;
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined1 local_490 [8];
  longlong *local_488;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [24];
  undefined1 local_3e0 [24];
  undefined1 local_3c8 [24];
  undefined1 local_3b0 [24];
  undefined1 local_398 [24];
  undefined1 local_380 [24];
  undefined1 local_368 [24];
  undefined1 local_350 [24];
  undefined1 local_338 [24];
  undefined1 local_320 [24];
  undefined1 local_308 [24];
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [24];
  undefined4 local_2c0 [4];
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  char local_298;
  undefined4 local_290 [4];
  undefined1 local_280 [8];
  longlong *local_278;
  char local_268;
  undefined4 local_260 [4];
  undefined1 local_250 [8];
  longlong *local_248;
  char local_238;
  ulonglong local_230;
  undefined4 local_228 [4];
  undefined1 local_218 [24];
  undefined1 local_200;
  undefined4 local_1f8;
  undefined1 local_1e8 [24];
  undefined1 local_1d0;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [24];
  char local_1a0 [8];
  undefined4 local_198;
  undefined1 local_188 [24];
  undefined1 local_170;
  undefined4 local_168 [4];
  undefined1 local_158 [24];
  char local_140 [8];
  undefined4 local_138;
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_a88;
  local_9d8 = (longlong *)((ulonglong)local_9d8 & 0xffffffff00000000);
  local_978 = param_2;
  FText::FText(local_990);
  lVar20 = 2;
  local_8b8 = (undefined4 *)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
  uStack_8b0 = (undefined4 *)CONCAT44(uStack_8b0._4_4_,(undefined4)uStack_8b0);
  local_878 = (undefined4 *)CONCAT44(local_878._4_4_,(undefined4)local_878);
  uStack_870 = (undefined4 *)CONCAT44(uStack_870._4_4_,(undefined4)uStack_870);
  local_848 = (undefined4 *)CONCAT44(local_848._4_4_,(undefined4)local_848);
  uStack_840 = (undefined4 *)CONCAT44(uStack_840._4_4_,(undefined4)uStack_840);
  if (*(char *)(param_1 + 0x44) != '\x01') {
    cVar11 = *(char *)(param_1 + 0x5a);
    if (cVar11 == '\0') {
      uVar12 = FAIDataProviderValue::ToString(param_1 + 0x90,local_828);
      lVar22 = FText::FromString(local_3b0,uVar12);
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_520,L"at least {0}",L"EnvQueryGenerator",L"FilterAtLeast");
      puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_418,uVar12);
      local_290[0] = 4;
      FText::FText(local_280,lVar22);
      local_9b8 = local_290;
      local_268 = '\x01';
      puStack_9b0 = local_260;
      local_970 = *puVar19;
      local_968 = puVar19[1];
      if (local_968 != 0) {
        LOCK();
        *(int *)(local_968 + 8) = *(int *)(local_968 + 8) + 1;
        UNLOCK();
      }
      local_848 = local_9b8;
      uStack_840 = puStack_9b0;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_838,&local_848);
      uVar12 = FText::Format(local_658,&local_970,uVar12);
      FText::FText(local_670,uVar12);
      if (local_650 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_650 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_650)(local_650);
          LOCK();
          piVar1 = (int *)((longlong)local_650 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_650 + 8))(local_650,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_838);
      if ((local_268 != '\0') && (local_268 = '\0', local_278 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_278 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_278)(local_278);
          LOCK();
          piVar1 = (int *)((longlong)local_278 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_278 + 8))(local_278,1);
          }
        }
      }
      plVar15 = (longlong *)puVar19[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar22 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FText::operator=(local_990,local_670);
      if (local_668 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_668 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_668)(local_668);
          LOCK();
          piVar1 = (int *)((longlong)local_668 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_668 + 8))(local_668,1);
          }
        }
      }
      if (local_518 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_518 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_518)(local_518);
          LOCK();
          piVar1 = (int *)((longlong)local_518 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_518 + 8))(local_518,1);
          }
        }
      }
      local_888[0] = local_828[0];
    }
    else if (cVar11 == '\x01') {
      uVar12 = FAIDataProviderValue::ToString(param_1 + 0xc0,local_858);
      lVar22 = FText::FromString(local_3c8,uVar12);
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_550,L"up to {0}",L"EnvQueryGenerator",L"FilterUpTo");
      plVar15 = (longlong *)FTextFormat::FTextFormat(local_428,uVar12);
      local_2c0[0] = 4;
      FText::FText(local_2b0,lVar22);
      local_9c8 = local_2c0;
      local_298 = '\x01';
      puStack_9c0 = local_290;
      local_9b8 = (undefined4 *)*plVar15;
      puStack_9b0 = (undefined4 *)plVar15[1];
      if (puStack_9b0 != (undefined4 *)0x0) {
        LOCK();
        puStack_9b0[2] = puStack_9b0[2] + 1;
        UNLOCK();
      }
      local_878 = local_9c8;
      uStack_870 = puStack_9c0;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_868,&local_878);
      uVar12 = FText::Format(local_568,&local_9b8,uVar12);
      FText::FText(local_688,uVar12);
      if (local_560 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_560 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_560)(local_560);
          LOCK();
          piVar1 = (int *)((longlong)local_560 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_560 + 8))(local_560,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_868);
      if ((local_298 != '\0') && (local_298 = '\0', local_2a8 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_2a8 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2a8)(local_2a8);
          LOCK();
          piVar1 = (int *)((longlong)local_2a8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_2a8 + 8))(local_2a8,1);
          }
        }
      }
      plVar15 = (longlong *)plVar15[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar22 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FText::operator=(local_990,local_688);
      if (local_680 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_680 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_680)(local_680);
          LOCK();
          piVar1 = (int *)((longlong)local_680 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_680 + 8))(local_680,1);
          }
        }
      }
      if (local_548 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_548 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_548)(local_548);
          LOCK();
          piVar1 = (int *)((longlong)local_548 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_548 + 8))(local_548,1);
          }
        }
      }
      local_888[0] = local_858[0];
    }
    else {
      local_8b8 = (undefined4 *)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
      uStack_8b0 = (undefined4 *)CONCAT44(uStack_8b0._4_4_,(undefined4)uStack_8b0);
      local_878 = (undefined4 *)CONCAT44(local_878._4_4_,(undefined4)local_878);
      uStack_870 = (undefined4 *)CONCAT44(uStack_870._4_4_,(undefined4)uStack_870);
      local_848 = (undefined4 *)CONCAT44(local_848._4_4_,(undefined4)local_848);
      uStack_840 = (undefined4 *)CONCAT44(uStack_840._4_4_,(undefined4)uStack_840);
      if (cVar11 != '\x02') goto LAB_142bdd890;
      uVar12 = FAIDataProviderValue::ToString(param_1 + 0xc0,local_888);
      puVar13 = (undefined4 *)FText::FromString(local_3f8,uVar12);
      local_a58 = puVar13;
      uVar12 = FAIDataProviderValue::ToString(param_1 + 0x90,local_898);
      puVar14 = (undefined4 *)FText::FromString(local_3e0,uVar12);
      local_a48 = puVar14;
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_580,L"between {0} and {1}",L"EnvQueryGenerator",L"FilterBetween");
      plVar15 = (longlong *)FTextFormat::FTextFormat(local_438,uVar12);
      local_228[0] = 4;
      local_9d8 = plVar15;
      FText::FText(local_218,puVar14);
      local_200 = 1;
      local_1f8 = 4;
      FText::FText(local_1e8,puVar13);
      local_a38 = local_228;
      local_1d0 = 1;
      plStack_a30 = (longlong *)local_1c8;
      local_9c8 = (undefined4 *)*plVar15;
      puStack_9c0 = (undefined4 *)plVar15[1];
      if (puStack_9c0 != (undefined4 *)0x0) {
        LOCK();
        puStack_9c0[2] = puStack_9c0[2] + 1;
        UNLOCK();
      }
      local_8b8 = local_a38;
      uStack_8b0 = (undefined4 *)plStack_a30;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_8a8,&local_8b8);
      uVar12 = FText::Format(local_598,&local_9c8,uVar12);
      FText::FText(local_6a0,uVar12);
      if (local_590 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_590 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_590)(local_590);
          LOCK();
          piVar1 = (int *)((longlong)local_590 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_590 + 8))(local_590,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_8a8);
      pcVar21 = local_1a0;
      lVar22 = lVar20;
      do {
        lVar22 = lVar22 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar15 = *(longlong **)(pcVar21 + -0x40);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar15 + 1;
            lVar10 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar22 != 0);
      plVar15 = (longlong *)local_9d8[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(local_a48 + 2);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(local_a58 + 2);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FText::operator=(local_990,local_6a0);
      if (local_698 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_698 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_698)(local_698);
          LOCK();
          piVar1 = (int *)((longlong)local_698 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_698 + 8))(local_698,1);
          }
        }
      }
      if (local_578 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_578 + 1;
        lVar22 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*local_578)(local_578);
          LOCK();
          piVar1 = (int *)((longlong)local_578 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_578 + 8))(local_578,1);
          }
        }
      }
      if (local_898[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_888[0] != 0) {
      FMemory::Free();
    }
  }
LAB_142bdd890:
  FNumberFormattingOptions::FNumberFormattingOptions(local_8f0);
  local_8dc = 2;
  FText::FText(local_9a8);
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_508,L"don\'t score",L"EnvQueryGenerator",L"DontScore");
    FText::operator=(local_9a8,uVar12);
    local_7f8 = (undefined4 *)CONCAT44(local_7f8._4_4_,(undefined4)local_7f8);
    uStack_7f0 = (ulonglong *)CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
    local_7d8 = (longlong *)CONCAT44(local_7d8._4_4_,(undefined4)local_7d8);
    uStack_7d0 = (undefined4 *)CONCAT44(uStack_7d0._4_4_,(undefined4)uStack_7d0);
    local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
    uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
    local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
    uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
    if (local_500 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_500 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      local_7f8 = (undefined4 *)CONCAT44(local_7f8._4_4_,(undefined4)local_7f8);
      uStack_7f0 = (ulonglong *)CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
      local_7d8 = (longlong *)CONCAT44(local_7d8._4_4_,(undefined4)local_7d8);
      uStack_7d0 = (undefined4 *)CONCAT44(uStack_7d0._4_4_,(undefined4)uStack_7d0);
      local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
      uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
      local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
      uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
      if ((int)lVar22 == 1) {
        (**(code **)*local_500)(local_500);
        LOCK();
        piVar1 = (int *)((longlong)local_500 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
        uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
        local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
        uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
        if (iVar4 == 1) {
          (**(code **)(*local_500 + 8))(local_500,1);
          local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
          uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
          local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
          uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0xf1) == '\x04') {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_a28[0] = 0;
      local_a28[1] = 5;
      local_950 = 0;
      plStack_948 = (longlong *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a28,0);
      local_a68 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_a28[0],5,&DAT_1457f3744);
      lVar22 = FText::AsNumber(local_398,*(uint *)(param_1 + 0x180) & 0x7fffffff,local_8f0,
                               &local_950);
      uVar12 = FText::FromString(local_4d8,local_a28);
      puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_408,uVar12);
      local_260[0] = 4;
      FText::FText(local_250,lVar22);
      local_a58 = local_260;
      local_238 = '\x01';
      puStack_a50 = &local_230;
      local_960 = *puVar19;
      local_958 = puVar19[1];
      if (local_958 != 0) {
        LOCK();
        *(int *)(local_958 + 8) = *(int *)(local_958 + 8) + 1;
        UNLOCK();
      }
      local_7f8 = local_a58;
      uStack_7f0 = puStack_a50;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_7e8,&local_7f8);
      uVar12 = FText::Format(local_4f0,&local_960,uVar12);
      FText::FText(local_758,uVar12);
      if (local_4e8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_4e8 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_4e8)(local_4e8);
          LOCK();
          piVar1 = (int *)((longlong)local_4e8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_4e8 + 8))(local_4e8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_7e8);
      if ((local_238 != '\0') && (local_238 = '\0', local_248 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_248 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar1 = (int *)((longlong)local_248 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_248 + 8))(local_248,1);
          }
        }
      }
      plVar15 = (longlong *)puVar19[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar22 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar22 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      bVar9 = false;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar23 = false;
      puVar16 = local_758;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x168);
      bVar23 = plVar15 == (longlong *)0x0;
      if (bVar23) {
        plVar15 = (longlong *)
                  (*(code *)**(undefined8 **)(param_1 + 0x158))
                            ((undefined8 *)(param_1 + 0x158),local_818);
      }
      else {
        plVar15 = (longlong *)
                  (**(code **)(*plVar15 + 0x280))
                            (plVar15,local_808,*(undefined8 *)(param_1 + 0x170));
      }
      local_a38 = (undefined4 *)*plVar15;
      *plVar15 = 0;
      plStack_a30 = (longlong *)plVar15[1];
      plVar15[1] = 0;
      if ((bVar23) && (local_818[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar23) && (local_808[0] != 0)) {
        FMemory::Free();
      }
      bVar9 = true;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar23 = true;
      puVar16 = (undefined1 *)FText::FromString(local_640,&local_a38);
    }
    FText::FText(local_728,puVar16);
    if ((bVar5) && (local_750 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_750 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_750)(local_750);
        LOCK();
        piVar1 = (int *)((longlong)local_750 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_750 + 8))(local_750,1);
        }
      }
    }
    if ((bVar6) && (local_4d0 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_4d0 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_4d0)(local_4d0);
        LOCK();
        piVar1 = (int *)((longlong)local_4d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_4d0 + 8))(local_4d0,1);
        }
      }
    }
    if ((bVar7) && (local_a28[0] != 0)) {
      FMemory::Free();
    }
    plVar15 = plStack_948;
    if ((bVar8) && (plStack_948 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_948 + 1;
      lVar22 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plStack_948)(plStack_948);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    if ((bVar9) && (local_638 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_638 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_638)(local_638);
        LOCK();
        piVar1 = (int *)((longlong)local_638 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_638 + 8))(local_638,1);
        }
      }
    }
    if ((bVar23) && (local_a38 != (undefined4 *)0x0)) {
      FMemory::Free();
    }
    local_a28[2] = 0;
    local_a28[3] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a28 + 2,0);
    local_a68 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a28[2],10,"{0} [{1}]");
    puVar13 = (undefined4 *)FText::FText(local_380,local_728);
    local_a48 = puVar13;
    puVar14 = (undefined4 *)
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_368,L"constant score",L"EnvQueryGenerator",L"ScoreConstant");
    local_a58 = puVar14;
    uVar12 = FText::FromString(local_610,local_a28 + 2);
    puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_478,uVar12);
    local_1c8[0] = 4;
    FText::FText(local_1b8,puVar14);
    local_1a0[0] = '\x01';
    local_198 = 4;
    FText::FText(local_188,puVar13);
    local_9d8 = (longlong *)local_1c8;
    local_170 = 1;
    puStack_9d0 = local_168;
    local_940 = *puVar19;
    local_938 = puVar19[1];
    if (local_938 != 0) {
      LOCK();
      *(int *)(local_938 + 8) = *(int *)(local_938 + 8) + 1;
      UNLOCK();
    }
    local_7d8 = local_9d8;
    uStack_7d0 = puStack_9d0;
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_7c8,&local_7d8);
    uVar12 = FText::Format(local_628,&local_940,uVar12);
    FText::FText(local_740,uVar12);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_620 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_620 + 8))(local_620,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_7c8);
    pcVar21 = local_140;
    lVar22 = lVar20;
    do {
      lVar22 = lVar22 + -1;
      pcVar2 = pcVar21 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar15 = *(longlong **)(pcVar21 + -0x40);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
      pcVar21 = pcVar2;
    } while (lVar22 != 0);
    plVar15 = (longlong *)puVar19[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar15 + 1;
      lVar22 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(local_a58 + 2);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar15 + 1;
      lVar22 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(local_a48 + 2);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar15 + 1;
      lVar22 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    FText::operator=(local_9a8,local_740);
    if (local_738 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_738 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_738)(local_738);
        LOCK();
        piVar1 = (int *)((longlong)local_738 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_738 + 8))(local_738,1);
        }
      }
    }
    if (local_608 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_608 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_608)(local_608);
        LOCK();
        piVar1 = (int *)((longlong)local_608 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_608 + 8))(local_608,1);
        }
      }
    }
    if (local_a28[2] != 0) {
      FMemory::Free();
    }
    local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
    uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
    local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
    uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
    if (local_720 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_720 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      local_7b8 = (undefined4 *)CONCAT44(local_7b8._4_4_,(undefined4)local_7b8);
      uStack_7b0 = (undefined4 *)CONCAT44(uStack_7b0._4_4_,(undefined4)uStack_7b0);
      local_788 = (undefined4 *)CONCAT44(local_788._4_4_,(undefined4)local_788);
      uStack_780 = (undefined4 *)CONCAT44(uStack_780._4_4_,(undefined4)uStack_780);
      if ((int)lVar22 == 1) {
        (**(code **)*local_720)(local_720);
        LOCK();
        piVar1 = (int *)((longlong)local_720 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_720 + 8))(local_720,1);
        }
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x168) == 0) {
    FText::FText(local_8d8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b2c6c8) {
      _Init_thread_header(&DAT_146b2c6c8);
      if (DAT_146b2c6c8 == -1) {
        uVar12 = UEnum::GetPrivateStaticClass();
        DAT_146b2c6c0 =
             (longlong *)FUN_141799410(uVar12,0xffffffffffffffff,L"EEnvTestScoreEquation",0);
        _Init_thread_footer(&DAT_146b2c6c8);
      }
    }
    if (DAT_146b2c6c0 != (longlong *)0x0) {
      uVar12 = (**(code **)(*DAT_146b2c6c0 + 0x288))
                         (DAT_146b2c6c0,local_5b0,*(undefined1 *)(param_1 + 0xf1));
      FText::operator=(local_8d8,uVar12);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5b0);
    }
    local_920 = 0;
    uStack_918 = 0;
    FText::AsNumber(local_6e0,*(uint *)(param_1 + 0x180) & 0x7fffffff,local_8f0,&local_920);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_920);
    local_a28[6] = 0;
    local_a28[7] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a28 + 6,0);
    local_a68 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a28[6],0xc,"{0} [x {1}]");
    uVar12 = FText::FText(local_320,local_6e0);
    puVar13 = (undefined4 *)FText::FText(local_308,local_8d8);
    local_a58 = puVar13;
    uVar17 = FText::FromString(local_5c8,local_a28 + 6);
    puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_448,uVar17);
    local_108[0] = 4;
    FText::FText(local_f8,puVar13);
    local_e0 = 1;
    local_d8 = 4;
    FText::FText(local_c8,uVar12);
    local_a48 = local_108;
    local_b0 = 1;
    puStack_a40 = local_a8;
    local_910 = *puVar19;
    local_908 = puVar19[1];
    if (local_908 != 0) {
      LOCK();
      *(int *)(local_908 + 8) = *(int *)(local_908 + 8) + 1;
      UNLOCK();
    }
    local_788 = local_a48;
    uStack_780 = puStack_a40;
    uVar17 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_6b0,&local_788);
    uVar17 = FText::Format(local_538,&local_910,uVar17);
    FText::FText(local_6f8,uVar17);
    if (local_530 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_530 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_530)(local_530);
        LOCK();
        piVar1 = (int *)((longlong)local_530 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_530 + 8))(local_530,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_6b0);
    puVar16 = local_98;
    lVar22 = lVar20;
    do {
      puVar16 = puVar16 + -0x30;
      TOptional<FExpressionError>::Reset(puVar16);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar19);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a58);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
    FText::operator=(local_9a8,local_6f8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6f8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5c8);
    if (local_a28[6] != 0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6e0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_8d8);
  }
  else {
    local_a28[4] = 0;
    local_a28[5] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a28 + 4,0);
    local_a68 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a28[4],9,"{0}: {1}");
    uVar12 = FAIDataProviderValue::ToString(param_1 + 0x158,local_798);
    uVar12 = FText::FromString(local_350,uVar12);
    puVar13 = (undefined4 *)
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_338,L"score factor",L"EnvQueryGenerator",L"ScoreFactor");
    local_a58 = puVar13;
    uVar17 = FText::FromString(local_5e0,local_a28 + 4);
    puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_468,uVar17);
    local_168[0] = 4;
    FText::FText(local_158,puVar13);
    local_140[0] = '\x01';
    local_138 = 4;
    FText::FText(local_128,uVar12);
    local_a48 = local_168;
    local_110 = 1;
    puStack_a40 = local_108;
    local_930 = *puVar19;
    local_928 = puVar19[1];
    if (local_928 != 0) {
      LOCK();
      *(int *)(local_928 + 8) = *(int *)(local_928 + 8) + 1;
      UNLOCK();
    }
    local_7b8 = local_a48;
    uStack_7b0 = puStack_a40;
    uVar17 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_7a8,&local_7b8);
    uVar17 = FText::Format(local_5f8,&local_930,uVar17);
    FText::FText(local_710,uVar17);
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_5f0 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_5f0 + 8))(local_5f0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_7a8);
    puVar16 = local_f8;
    lVar22 = lVar20;
    do {
      puVar16 = puVar16 + -0x30;
      TOptional<FExpressionError>::Reset(puVar16);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar19);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a58);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
    FText::operator=(local_9a8,local_710);
    if (local_708 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_708 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_708)(local_708);
        LOCK();
        piVar1 = (int *)((longlong)local_708 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_708 + 8))(local_708,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5e0);
    if (local_798[0] != 0) {
      FMemory::Free();
    }
    if (local_a28[4] != 0) {
      FMemory::Free();
    }
  }
  bVar6 = false;
  bVar5 = false;
  bVar23 = false;
  cVar11 = FText::IsEmpty(local_990);
  if (cVar11 == '\0') {
    local_a28[9] = 9;
    local_a28[8] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a28 + 8,0);
    local_a68 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a28[8],9,"{0}, {1}");
    bVar5 = true;
    bVar23 = true;
    uVar12 = FText::FText(local_2f0,local_9a8);
    uVar17 = FText::FText(local_2d8,local_990);
    uVar18 = FText::FromString(local_4a8,local_a28 + 8);
    puVar19 = (undefined8 *)FTextFormat::FTextFormat(local_458,uVar18);
    local_a8[0] = 4;
    FText::FText(local_98,uVar17);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,uVar12);
    local_a58 = local_a8;
    local_50 = 1;
    puStack_a50 = local_48;
    local_900 = *puVar19;
    local_8f8 = puVar19[1];
    if (local_8f8 != 0) {
      LOCK();
      *(int *)(local_8f8 + 8) = *(int *)(local_8f8 + 8) + 1;
      UNLOCK();
    }
    local_778 = local_a58;
    uStack_770 = puStack_a50;
    uVar18 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_768,&local_778);
    uVar18 = FText::Format(local_4c0,&local_900,uVar18);
    FText::FText(local_6c8,uVar18);
    if (local_4b8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_4b8 + 1;
      lVar22 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_4b8)(local_4b8);
        LOCK();
        piVar1 = (int *)((longlong)local_4b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_4b8 + 8))(local_4b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_768);
    puVar16 = &stack0xffffffffffffffc8;
    do {
      puVar16 = puVar16 + -0x30;
      TOptional<FExpressionError>::Reset(puVar16);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar19);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar17);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
    puVar16 = local_6c8;
  }
  else {
    bVar6 = true;
    puVar16 = (undefined1 *)FText::FText(local_490,local_9a8);
  }
  uVar12 = local_978;
  FText::FText(local_978,puVar16);
  if ((bVar23) && (local_6c0 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_6c0 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_6c0)(local_6c0);
      LOCK();
      piVar1 = (int *)((longlong)local_6c0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_6c0 + 8))(local_6c0,1);
      }
    }
  }
  if ((bVar5) && (local_4a0 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_4a0 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_4a0)(local_4a0);
      LOCK();
      piVar1 = (int *)((longlong)local_4a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_4a0 + 8))(local_4a0,1);
      }
    }
  }
  if ((bVar6) && (local_488 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_488 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_488)(local_488);
      LOCK();
      piVar1 = (int *)((longlong)local_488 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_488 + 8))(local_488,1);
      }
    }
  }
  if (local_9a0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_9a0 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_9a0)(local_9a0);
      LOCK();
      piVar1 = (int *)((longlong)local_9a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_9a0 + 8))(local_9a0,1);
      }
    }
  }
  if (local_988 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_988 + 1;
    lVar20 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_988)(local_988);
      LOCK();
      piVar1 = (int *)((longlong)local_988 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_988 + 8))(local_988,1);
      }
    }
  }
  return uVar12;
}



// FUNCTION 142bde9d0 FUN_142bde9d0 body=296 status=ok
// SIG undefined FUN_142bde9d0(void)

/* WARNING: Removing unreachable block (ram,0x000142bdea75) */

void FUN_142bde9d0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  UBTCompositeNode::DescribeRuntimeValues();
  if (param_4 == 1) {
    pwVar4 = L"not active";
    if ((*(byte *)(param_3 + 9) & 1) != 0) {
      pwVar4 = L"active";
    }
    FString::PrintfImpl(&local_18,L"main task: %s",pwVar4);
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_18;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
    if ((*(byte *)(param_3 + 9) & 2) != 0) {
      local_18 = 0;
      local_10 = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      uVar2 = local_18;
      FGenericPlatformString::Memcpy(local_18,L"force background tree",0x2c);
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
    }
  }
  return;
}



// FUNCTION 142bdeb00 FUN_142bdeb00 body=330 status=ok
// SIG undefined FUN_142bdeb00(void)

/* WARNING: Removing unreachable block (ram,0x000142bdec1c) */

void FUN_142bdeb00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  plVar4 = param_5;
  FUN_142bb97b0();
  lVar1 = *(longlong *)(param_2 + 0x180);
  puVar5 = (undefined2 *)0x0;
  iVar8 = 0;
  if (lVar1 != 0) {
    plVar4 = (longlong *)FUN_142bb8550(lVar1,&local_38,*(undefined1 *)(param_1 + 0x88),0,plVar4);
    iVar8 = 0;
    if (local_28 != plVar4) {
      puVar5 = (undefined2 *)*plVar4;
      *plVar4 = 0;
      iVar8 = (int)plVar4[1];
      plVar4[1] = 0;
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    cVar3 = FUN_142be03b0(param_1,lVar1);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_142bdeb99;
    }
  }
  bVar2 = false;
LAB_142bdeb99:
  puVar6 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar6 = puVar5;
  }
  pwVar7 = L"fail";
  if (bVar2) {
    pwVar7 = L"pass";
  }
  FString::PrintfImpl(&local_38,L"value: %s (%s)",puVar6,pwVar7);
  iVar8 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar8);
  }
  plVar4 = (longlong *)((longlong)iVar8 * 0x10 + *param_5);
  *plVar4 = 0;
  *plVar4 = local_38;
  *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 142bdec50 DescribeRuntimeValues body=93 status=ok
// SIG undefined DescribeRuntimeValues(void)

void UBTDecorator_BlueprintBase::DescribeRuntimeValues(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x90) != 0) {
    BlueprintNodeHelpers::DescribeRuntimeValues(param_1,lVar2 + 0x88,in_stack_00000028);
  }
  return;
}



// FUNCTION 142bdecc0 FUN_142bdecc0 body=707 status=ok
// SIG undefined FUN_142bdecc0(void)

/* WARNING: Removing unreachable block (ram,0x000142bdef69) */

void FUN_142bdecc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_88;
  float local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  cVar3 = UBTDecorator_ConeCheck::CalculateDirection
                    (param_1,uVar1,param_1 + 0x70,param_1 + 0xc0,&local_88);
  if ((cVar3 != '\0') &&
     (cVar3 = UBTDecorator_ConeCheck::CalculateDirection
                        (param_1,uVar1,param_1 + 0x70,param_1 + 0x98,&local_78), cVar3 != '\0')) {
    fVar7 = local_78._4_4_ * local_78._4_4_ + (float)local_78 * (float)local_78;
    fVar11 = local_78._4_4_;
    fVar8 = (float)local_78;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8) + fVar8;
      fVar11 = fVar8 * local_78._4_4_;
      fVar8 = fVar8 * (float)local_78;
    }
    fVar7 = local_88 * local_88 + local_84 * local_84;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar10 = auVar9._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      local_88 = local_88 * fVar10;
      local_84 = local_84 * fVar10;
    }
    fVar8 = local_88 * fVar8 + fVar11 * local_84;
    fVar11 = -1.0;
    if ((-1.0 <= fVar8) && (fVar11 = fVar8, 1.0 <= fVar8)) {
      fVar11 = 1.0;
    }
    pwVar6 = L"inside";
    if (fVar8 < *(float *)(param_1 + 0xe8)) {
      pwVar6 = L"outside";
    }
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    FString::PrintfImpl(&local_78,L"Angle: %.0f (%s cone)",(double)(fVar11 * 57.295776),pwVar6);
    lVar2 = param_5[1];
    iVar4 = (int)lVar2 + 1;
    *(int *)(param_5 + 1) = iVar4;
    if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar5 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_5);
    *puVar5 = 0;
    *puVar5 = local_78;
    *(undefined4 *)(puVar5 + 1) = local_70;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_6c;
  }
  return;
}



// FUNCTION 142bdef90 FUN_142bdef90 body=297 status=ok
// SIG undefined FUN_142bdef90(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf090) */

void FUN_142bdef90(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FUN_142bb97b0(param_1,param_2,param_3,param_4,param_5);
  lVar2 = *(longlong *)(param_2 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_2);
  }
  fVar6 = *(float *)(lVar2 + 0x790) - *param_3;
  if (fVar6 < *(float *)(param_1 + 0x68)) {
    puVar3 = (undefined8 *)
             FString::SanitizeFloat(local_18,(double)(*(float *)(param_1 + 0x68) - fVar6),1);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    pwVar4 = L"restart";
    if (*(char *)(param_1 + 100) == '\0') {
      pwVar4 = L"unlock";
    }
    FString::PrintfImpl(&local_28,L"%s in %ss",pwVar4,puVar5);
    lVar2 = param_5[1];
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_5 + 1) = iVar1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bdf0c0 DescribeRuntimeValues body=133 status=ok
// SIG undefined DescribeRuntimeValues(void)

void UBTDecorator_IsBBEntryOfClass::DescribeRuntimeValues(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *in_stack_00000028;
  longlong local_18;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x2b8))();
  lVar1 = in_stack_00000028[1];
  iVar3 = (int)lVar1 + 1;
  *(int *)(in_stack_00000028 + 1) = iVar3;
  if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(in_stack_00000028);
  }
  puVar4 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *in_stack_00000028);
  *puVar4 = 0;
  *puVar4 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bdf150 DescribeRuntimeValues body=609 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf39e) */

void UBTDecorator_KeepInCone::DescribeRuntimeValues
               (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  local_58 = 0x3f800000;
  cVar3 = FUN_142bd8bd0(0,param_2,&local_58);
  if (cVar3 != '\0') {
    uVar1 = *param_3;
    fVar10 = (float)local_58;
    fVar11 = (float)((ulonglong)uVar1 >> 0x20);
    local_58._0_4_ = (float)uVar1;
    _local_50 = CONCAT44(uStack_4c,*(undefined4 *)(param_3 + 1));
    fVar7 = fVar11 * fVar11 + (float)local_58 * (float)local_58;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      local_58._0_4_ = (float)local_58 * fVar8;
      fVar11 = fVar11 * fVar8;
    }
    fVar7 = local_58._4_4_ * local_58._4_4_ + fVar10 * fVar10;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar10 = fVar10 * fVar8;
      local_58._4_4_ = local_58._4_4_ * fVar8;
    }
    fVar11 = fVar10 * (float)local_58 + fVar11 * local_58._4_4_;
    fVar10 = -1.0;
    if ((-1.0 <= fVar11) && (fVar10 = fVar11, 1.0 <= fVar11)) {
      fVar10 = 1.0;
    }
    pwVar6 = L"inside";
    if (fVar11 < *(float *)(param_1 + 0xc4)) {
      pwVar6 = L"outside";
    }
    local_58 = uVar1;
    fVar10 = ::_guard_xfg_dispatch_icall_nop(fVar10);
    FString::PrintfImpl(&local_58,L"Angle: %.0f (%s cone)",(double)(fVar10 * 57.295776),pwVar6);
    lVar2 = param_5[1];
    iVar4 = (int)lVar2 + 1;
    *(int *)(param_5 + 1) = iVar4;
    if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar5 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_5);
    *puVar5 = 0;
    *puVar5 = local_58;
    *(undefined4 *)(puVar5 + 1) = local_50;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_4c;
  }
  return;
}



// FUNCTION 142bdf3c0 DescribeRuntimeValues body=351 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf4fb) */

void UBTDecorator_Loop::DescribeRuntimeValues
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FUN_142bb97b0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((longlong)param_1 + 0x6c) == '\0') {
    FString::PrintfImpl(&local_28,L"loops remaining: %d",*(undefined1 *)(param_3 + 4));
    lVar1 = param_5[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_5 + 1) = iVar2;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_18[0] = 0;
  }
  else {
    if (*(float *)(param_1 + 0xe) <= 0.0) {
      return;
    }
    (**(code **)(*param_1 + 0x148))(param_1);
    puVar3 = (undefined8 *)FString::SanitizeFloat(local_18,(double)*(float *)(param_1 + 0xe),1);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"time remaining: %s",puVar4);
    lVar1 = param_5[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_5 + 1) = iVar2;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  }
  local_20 = 0;
  local_28 = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bdf520 FUN_142bdf520 body=320 status=ok
// SIG undefined FUN_142bdf520(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf637) */

void FUN_142bdf520(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [4];
  
  FUN_142bb97b0(param_1,param_2,param_3,param_4,param_5);
  fVar6 = (float)FUN_142bbef90(param_2,*(undefined8 *)(param_1 + 0x68));
  if (0.0 < fVar6) {
    lVar2 = *(longlong *)(param_2 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_2);
    }
    fVar6 = *(float *)(lVar2 + 0x790) - fVar6;
    if (fVar6 < *(float *)(param_1 + 0x70)) {
      puVar3 = (undefined8 *)
               FString::SanitizeFloat(local_28,(double)(*(float *)(param_1 + 0x70) - fVar6),1);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar3;
      }
      pwVar4 = L"restart";
      if (*(char *)(param_1 + 100) == '\0') {
        pwVar4 = L"unlock";
      }
      FString::PrintfImpl(&local_38,L"%s in %ss",pwVar4,puVar5);
      lVar2 = param_5[1];
      iVar1 = (int)lVar2 + 1;
      *(int *)(param_5 + 1) = iVar1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
      }
      puVar3 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_5);
      *puVar3 = 0;
      *puVar3 = local_38;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = 0;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142bdf660 FUN_142bdf660 body=360 status=ok
// SIG undefined FUN_142bdf660(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf78a) */

void FUN_142bdf660(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  float fVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  FUN_142bb97b0(param_1,param_2,param_3,param_4,param_5);
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1);
  lVar6 = 0;
  if (uVar2 != 0) {
    lVar6 = param_3 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc);
  }
  if ((*(longlong *)(param_2 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_2), lVar3 != 0)) {
    fVar8 = *(float *)(lVar6 + 4);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    puVar4 = (undefined8 *)FString::SanitizeFloat(local_18,(double)fVar8,1);
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar4;
    }
    puVar4 = (undefined8 *)FUN_142bb8c80(local_28,1);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_38,L"%s in %ss",puVar5,puVar7);
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
    *puVar4 = 0;
    *puVar4 = local_38;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142bdf7d0 DescribeRuntimeValues body=108 status=ok
// SIG undefined DescribeRuntimeValues(void)

void UBTService_BlueprintBase::DescribeRuntimeValues(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x88) != 0) {
    GetPrivateStaticClass();
    BlueprintNodeHelpers::DescribeRuntimeValues(param_1,lVar2 + 0x80,in_stack_00000028);
  }
  return;
}



// FUNCTION 142bdf840 FUN_142bdf840 body=427 status=ok
// SIG undefined FUN_142bdf840(void)

/* WARNING: Removing unreachable block (ram,0x000142bdf9b9) */

void FUN_142bdf840(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  plVar11 = param_5;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_2 + 0x180) == 0) {
    return;
  }
  FUN_142bb8550(*(longlong *)(param_2 + 0x180),&local_28,*(undefined1 *)(param_1 + 0x90),0,plVar11);
  cVar2 = FWeakObjectPtr::IsValid(param_3 + 0x1c);
  if ((*(byte *)(param_3 + 0x24) & 1) == 0) {
    pwVar8 = L"";
    if (cVar2 != '\0') {
      pwVar8 = L"(task)";
    }
  }
  else {
    pwVar8 = L"(WAITING)";
  }
  puVar7 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  if (*pwVar8 != L'\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar8[lVar5] != L'\0');
    uVar4 = (int)lVar5 + 1;
    local_30 = (ulonglong)uVar4;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar6 = (uint)local_30;
    }
    puVar7 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar8,(longlong)(int)uVar4 * 2);
    puVar9 = puVar7;
    if (uVar6 != 0) goto LAB_142bdf93b;
  }
  puVar9 = &DAT_143f3eda8;
LAB_142bdf93b:
  puVar10 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar10 = local_28;
  }
  FString::PrintfImpl(&local_38,L"move target: %s%s",puVar10,puVar9);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
  *puVar3 = 0;
  *puVar3 = local_38;
  *(uint *)(puVar3 + 1) = (uint)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = (undefined2 *)0x0;
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bdf9f0 FUN_142bdf9f0 body=1307 status=ok
// SIG undefined FUN_142bdf9f0(void)

/* WARNING: Removing unreachable block (ram,0x000142bdfab0) */
/* WARNING: Removing unreachable block (ram,0x000142bdfe62) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bdf9f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  
  FName::ToString(param_1 + 0x80,&local_78);
  puVar8 = &DAT_143f3eda8;
  puVar7 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar7 = local_78;
  }
  puVar5 = (undefined8 *)UBTNode::GetStaticDescription(param_1,&local_98);
  if (*(int *)(puVar5 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(&local_88,L"%s: %s",puVar8,puVar7);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
  *puVar5 = 0;
  *puVar5 = local_88;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_80._4_4_;
  local_80._4_4_ = 0;
  local_80._0_4_ = 0;
  local_88 = 0;
  if (CONCAT44(fStack_94,local_98) != 0) {
    FMemory::Free();
  }
  lVar2 = *(longlong *)(param_2 + 0x188);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x488) == 0)) {
    local_88 = 0;
    local_80 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar9 = 0x36;
    pwVar6 = L"Controller or Pawn is NULL";
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + 0x168);
    if (lVar3 == 0) {
      local_80._0_4_ = DAT_1464aa7b0;
      puVar5 = &local_88;
      local_88 = DAT_1464aa7a8;
    }
    else {
      puVar5 = (undefined8 *)FUN_142369f10(lVar3,&local_88);
    }
    uVar9 = *puVar5;
    fVar11 = *(float *)(puVar5 + 1);
    FUN_142bbd100(lVar2,&local_98,2);
    if (((local_98 != DAT_146691060) || (fStack_94 != DAT_146691064)) || (local_90 != DAT_146691068)
       ) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x488) + 0x168);
      if (lVar2 == 0) {
        local_88 = _DAT_1468b5d90;
        fVar12 = DAT_1468b5d98;
      }
      else {
        local_88 = *(undefined8 *)(lVar2 + 0x220);
        fVar12 = *(float *)(lVar2 + 0x228);
      }
      local_a8 = (float)uVar9;
      local_98 = local_98 - (float)local_88;
      fStack_a4 = (float)((ulonglong)uVar9 >> 0x20);
      fStack_94 = fStack_94 - (float)((ulonglong)local_88 >> 0x20);
      local_80 = CONCAT44(local_80._4_4_,fVar12);
      if ((((ABS(local_a8) <= 0.0001) && (ABS(fStack_a4) <= 0.0001)) && (ABS(fVar11) <= 0.0001)) ||
         (((ABS(local_98) <= 0.0001 && (ABS(fStack_94) <= 0.0001)) &&
          (ABS(local_90 - fVar12) <= 0.0001)))) {
        fVar11 = 1.0;
LAB_142bdfdd3:
        fVar12 = fVar11;
        if (1.0 <= fVar11) {
          fVar12 = 1.0;
        }
      }
      else {
        fVar11 = fStack_a4 * fStack_a4 + local_a8 * local_a8;
        if (1e-08 < fVar11) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar10._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12) + fVar12;
          fStack_a4 = fVar12 * fStack_a4;
          local_a8 = fVar12 * local_a8;
        }
        fVar11 = fStack_94 * fStack_94 + local_98 * local_98;
        if (1e-08 < fVar11) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar10._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fStack_94 = fVar12 * fStack_94;
          local_98 = fVar12 * local_98;
        }
        fVar11 = fStack_a4 * fStack_94 + local_a8 * local_98;
        fVar12 = -1.0;
        if (-1.0 <= fVar11) goto LAB_142bdfdd3;
      }
      fVar11 = _guard_xfg_dispatch_icall_nop(fVar12);
      FString::PrintfImpl(&local_88,L"Current angle: %.2f",(double)(fVar11 * 57.295776));
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
      *puVar5 = 0;
      *puVar5 = local_88;
      local_88 = 0;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_80._4_4_;
      local_80 = 0;
      goto LAB_142bdfecb;
    }
    local_88 = 0;
    local_80 = 0x22;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar9 = 0x44;
    pwVar6 = L"FocalPoint is an Invalid Location";
  }
  uVar4 = local_88;
  FGenericPlatformString::Memcpy(local_88,pwVar6,uVar9);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_5);
  *puVar5 = uVar4;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_80._4_4_;
LAB_142bdfecb:
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bdff10 DescribeRuntimeValues body=279 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142be0003) */

void UBTTask_RunBehaviorDynamic::DescribeRuntimeValues
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar2 = param_5;
  plVar5 = param_5;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10,param_4,plVar5);
  }
  else {
    param_5 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x18);
    FName::ToString(&param_5,&local_28);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  FString::PrintfImpl(&local_18,L"subtree: %s",puVar4);
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
  *puVar3 = 0;
  *puVar3 = local_18;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142be0030 DescribeRuntimeValues body=164 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142be00bf) */

void UBTTask_RunEQSQuery::DescribeRuntimeValues
               (long param_1,undefined8 param_2,undefined4 *param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (param_4 == 1) {
    FString::PrintfImpl(&local_18,L"request: %d",*param_3);
    lVar1 = param_5[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_5 + 1) = iVar2;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_18;
    *(undefined4 *)(puVar3 + 1) = local_10;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_c;
  }
  return;
}



// FUNCTION 142be00e0 DescribeRuntimeValues body=214 status=ok
// SIG undefined DescribeRuntimeValues(void)

/* WARNING: Removing unreachable block (ram,0x000142be0197) */

void UBTTask_Wait::DescribeRuntimeValues
               (long param_1,undefined8 param_2,float *param_3,undefined8 param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  plVar5 = param_5;
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (*param_3 != 0.0) {
    puVar3 = (undefined8 *)FString::SanitizeFloat(local_18,(double)*param_3,1,param_4,plVar5);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"remaining: %ss",puVar4);
    lVar1 = param_5[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_5 + 1) = iVar2;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_5);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142be01c0 FUN_142be01c0 body=20 status=ok
// SIG undefined FUN_142be01c0(void)

void FUN_142be01c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142bd7130(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142be01e0 FUN_142be01e0 body=47 status=ok
// SIG undefined FUN_142be01e0(void)

void FUN_142be01e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_142bd6600(lVar1);
    FMemory::operator_delete(lVar1,0x188);
    return;
  }
  return;
}



// FUNCTION 142be0210 Empty body=409 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<UClass_*,FEnvQueryContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_142be02e1;
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
LAB_142be02e1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1 + 0x18) != 0) {
        FMemory::Free();
      }
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



// FUNCTION 142be03b0 FUN_142be03b0 body=420 status=ok
// SIG undefined FUN_142be03b0(void)

undefined1 FUN_142be03b0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar4 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar9 = *(longlong *)(param_1 + 0x80);
    lVar5 = lVar9;
    if (lVar9 != 0) {
      while (lVar5 != lVar4) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (lVar9 != 0) {
        plVar8 = (longlong *)0x0;
        plVar7 = plVar8;
        if (lVar9 != 0) {
          plVar6 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar2 = *(longlong **)(param_1 + 0x80);
              (plVar7 = plVar8, plVar2 != (longlong *)0x0 &&
              (plVar7 = *(longlong **)(param_1 + 0x80), plVar2 != plVar6));
              plVar2 = (longlong *)plVar2[6]) {
          }
        }
        lVar9 = plVar7[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          lVar9 = plVar7[0x1f];
        }
        if ((*(int *)(param_2 + 400) != 0) &&
           ((int)(uint)*(byte *)(param_1 + 0x88) < *(int *)(param_2 + 0x1a0))) {
          plVar8 = (longlong *)
                   ((ulonglong)
                    *(ushort *)
                     (*(longlong *)(param_2 + 0x198) + (ulonglong)*(byte *)(param_1 + 0x88) * 2) +
                   *(longlong *)(param_2 + 0x188));
        }
        if ((lVar9 != 0) && (plVar8 != (longlong *)0x0)) {
          cVar1 = *(char *)(lVar9 + 0x2a);
          if (cVar1 == '\0') {
            uVar3 = FUN_142bcef30(lVar9,param_2,plVar8,*(undefined1 *)(param_1 + 0xb8));
          }
          else if (cVar1 == '\x01') {
            uVar3 = FUN_142bceef0(lVar9,param_2,plVar8,*(undefined1 *)(param_1 + 0xb8),
                                  CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x90)),
                                  *(undefined4 *)(param_1 + 0x94));
          }
          else if (cVar1 == '\x02') {
            uVar3 = FUN_142bcef80(lVar9,param_2,plVar8,*(undefined1 *)(param_1 + 0xb8),
                                  param_1 + 0x98);
          }
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 142be0560 FUN_142be0560 body=1224 status=ok
// SIG undefined FUN_142be0560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142be0560(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte bVar13;
  undefined8 **ppuVar14;
  undefined1 auStack_1a8 [32];
  int local_188 [2];
  undefined8 local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined8 local_160;
  undefined8 *local_158;
  int *local_150;
  undefined8 *local_148;
  int *local_140;
  undefined8 *local_138;
  int *local_130;
  undefined8 *local_128;
  int *local_120;
  undefined8 *local_118;
  int *local_110;
  undefined8 *local_108;
  int *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_160 = param_4;
  if ((*(byte *)((longlong)param_1 + 0x44) & 1) == 0) {
    local_f8 = *param_1;
    goto LAB_142be05ef;
  }
  local_f8 = FUN_140725690(param_3,(char)param_1[7]);
  if (local_f8 == 0) {
LAB_142be05e3:
    local_f8 = 0;
  }
  else {
    lVar7 = FUN_142c3f210();
    if ((*(int *)(*(longlong *)(local_f8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_f8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142be05e3;
  }
  *param_1 = local_f8;
LAB_142be05ef:
  if (local_f8 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_f0 = param_2;
    if (0 < (int)param_1[2]) {
      pbVar3 = (byte *)param_1[1];
      lVar7 = param_1[2];
      if (pbVar3 != pbVar3 + (longlong)(int)lVar7 * 0x38) {
        pbVar12 = pbVar3 + 0x30;
        do {
          bVar2 = *pbVar12;
          bVar13 = pbVar12[-0x28];
          if (bVar2 == 0xff) {
            if (bVar13 == 0) {
              local_180 = *(undefined8 *)(pbVar12 + -0x30);
              ppuVar14 = &local_108;
              local_188[0] = *(int *)(pbVar12 + -0x24);
              puVar11 = local_164;
              local_108 = &local_180;
              local_100 = local_188;
            }
            else {
              if (bVar13 != 1) {
                if (bVar13 == 2) {
                  local_180 = *(undefined8 *)(pbVar12 + -0x30);
                  if (*(float *)(pbVar12 + -0x24) <= 0.0) {
                    local_188[0] = -0x40800000;
                  }
                  else {
                    local_188[0] = 0x3f800000;
                  }
                  local_128 = &local_180;
                  local_120 = local_188;
                  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                            (&uStack_e0,local_16c,&local_128,0);
                }
                goto LAB_142be0989;
              }
              local_188[0] = (int)*(float *)(pbVar12 + -0x24);
              ppuVar14 = &local_118;
              puVar11 = local_168;
              local_180 = *(undefined8 *)(pbVar12 + -0x30);
              local_118 = &local_180;
              local_110 = local_188;
            }
LAB_142be097d:
            FUN_1417e05c0(&uStack_e0,puVar11,ppuVar14);
          }
          else {
            if (bVar13 == 0) {
              local_188[0] = FUN_1407255d0(param_3,bVar2);
              local_180 = *(undefined8 *)(pbVar12 + -0x30);
              ppuVar14 = &local_138;
              puVar11 = local_170;
              local_138 = &local_180;
              local_130 = local_188;
              goto LAB_142be097d;
            }
            if (bVar13 == 1) {
              lVar8 = FUN_142bbd600(param_3);
              if (((lVar8 == 0) || (*(longlong *)(lVar8 + 8) == 0)) ||
                 (lVar10 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x10),
                 lVar9 = UBlackboardKeyType_Int::GetPrivateStaticClass(), lVar10 != lVar9)) {
LAB_142be0854:
                local_188[0] = 0;
              }
              else {
                lVar8 = *(longlong *)(lVar8 + 8);
                bVar13 = *(byte *)(lVar8 + 0x2b) >> 1 & 1;
                if (bVar13 != 0) {
                  lVar8 = *(longlong *)(*(longlong *)(param_3 + 0x1a8) + (ulonglong)bVar2 * 8);
                }
                if ((*(int *)(param_3 + 400) == 0) ||
                   (*(int *)(param_3 + 0x1a0) <= (int)(uint)bVar2)) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (ulonglong)
                           *(ushort *)(*(longlong *)(param_3 + 0x198) + (ulonglong)bVar2 * 2) +
                           *(longlong *)(param_3 + 0x188);
                }
                if (lVar10 + (ulonglong)bVar13 * 4 == 0) goto LAB_142be0854;
                local_188[0] = FUN_141776080(lVar8);
              }
              ppuVar14 = &local_148;
              local_180 = *(undefined8 *)(pbVar12 + -0x30);
              puVar11 = local_174;
              local_148 = &local_180;
              local_140 = local_188;
              goto LAB_142be097d;
            }
            if (bVar13 != 2) goto LAB_142be0989;
            lVar8 = FUN_142bbd600(param_3);
            if (((lVar8 == 0) || (*(longlong *)(lVar8 + 8) == 0)) ||
               (lVar10 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x10),
               lVar9 = UBlackboardKeyType_Bool::GetPrivateStaticClass(), lVar10 != lVar9)) {
LAB_142be0762:
              cVar5 = '\0';
            }
            else {
              lVar8 = *(longlong *)(lVar8 + 8);
              bVar13 = *(byte *)(lVar8 + 0x2b) >> 1 & 1;
              if (bVar13 != 0) {
                lVar8 = *(longlong *)(*(longlong *)(param_3 + 0x1a8) + (ulonglong)bVar2 * 8);
              }
              if ((*(int *)(param_3 + 400) == 0) || (*(int *)(param_3 + 0x1a0) <= (int)(uint)bVar2))
              {
                lVar10 = 0;
              }
              else {
                lVar10 = (ulonglong)
                         *(ushort *)(*(longlong *)(param_3 + 0x198) + (ulonglong)bVar2 * 2) +
                         *(longlong *)(param_3 + 0x188);
              }
              if (lVar10 + (ulonglong)bVar13 * 4 == 0) goto LAB_142be0762;
              cVar5 = UBlackboardKeyType_Bool::GetValue(lVar8);
            }
            local_180 = *(undefined8 *)(pbVar12 + -0x30);
            if (cVar5 == '\0') {
              local_188[0] = -0x40800000;
            }
            else {
              local_188[0] = 0x3f800000;
            }
            local_158 = &local_180;
            local_150 = local_188;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                      (&uStack_e0,local_178,&local_158,0);
          }
LAB_142be0989:
          pbVar1 = pbVar12 + 8;
          pbVar12 = pbVar12 + 0x38;
        } while (pbVar1 != pbVar3 + (longlong)(int)lVar7 * 0x38);
      }
    }
    uVar6 = FUN_142be0a30(&local_f8,(char)param_1[8],local_160);
    if (local_90 != 0) {
      FMemory::Free();
    }
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&uStack_e0);
  }
  return uVar6;
}



// FUNCTION 142be0a30 FUN_142be0a30 body=346 status=ok
// SIG undefined FUN_142be0a30(void)

undefined4 FUN_142be0a30(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    if (((int)param_3[1] == 0) || ((undefined8 *)*param_3 == (undefined8 *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (*(code *)**(undefined8 **)*param_3)();
    }
    *(longlong *)(param_1 + 8) = lVar4;
    if (lVar4 == 0) {
      return 0xffffffff;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar4,0);
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 == 0) {
      return 0xffffffff;
    }
  }
  lVar4 = UBehaviorTreeManager::GetCurrent(lVar5);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  FUN_142bee240(lVar4,&local_18,param_1,param_2);
  lVar5 = local_18;
  if (local_18 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    TBaseDelegate<FSlateBrush_const_*>::operator=(local_18 + 0x60,param_3);
    iVar3 = *(int *)(lVar4 + 0x40);
    *(int *)(lVar4 + 0x40) = iVar3 + 1;
    if (*(int *)(lVar4 + 0x44) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x38,iVar3);
    }
    plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x38));
    *plVar6 = lVar5;
    plVar6[1] = (longlong)local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
      lVar5 = local_18;
    }
    uVar7 = *(undefined4 *)(lVar5 + 0x30);
  }
  plVar6 = local_10;
  if (local_10 == (longlong *)0x0) {
    return uVar7;
  }
  LOCK();
  plVar1 = local_10 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 != 1) {
    return uVar7;
  }
  (**(code **)*local_10)(local_10);
  LOCK();
  piVar2 = (int *)((longlong)plVar6 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*local_10 + 8))(local_10,1);
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 142be0b90 FUN_142be0b90 body=900 status=ok
// SIG undefined FUN_142be0b90(void)

void FUN_142be0b90(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  LARGE_INTEGER local_res8;
  
  cVar5 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x34);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 5) = 4;
    return;
  }
  iVar6 = *(int *)((longlong)param_1 + 0x2c);
  if ((iVar6 < 0) || (*(int *)(param_1 + 0x23) <= iVar6)) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
    FUN_142be2ac0(param_1);
    return;
  }
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x30 + param_1[0x22]);
  QueryPerformanceCounter(&local_res8);
  iVar6 = *(int *)(puVar10 + 2);
  iVar1 = *(int *)((longlong)param_1 + 0x134);
  lVar9 = 0;
  bVar4 = true;
  dVar3 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) * DAT_1468b02f8;
  *(undefined4 *)((longlong)param_1 + 0x164) = param_2;
  if (-1 < iVar1) {
    if ((iVar1 < *(int *)(puVar10 + 2)) &&
       (plVar2 = *(longlong **)(puVar10[1] + (longlong)iVar1 * 8), plVar2 != (longlong *)0x0)) {
      if (((iVar1 < iVar6 + -1) ||
          ((*(int *)((longlong)param_1 + 0x16c) != 0 ||
           (*(char *)((longlong)plVar2 + 0x44) == '\x01')))) ||
         ((*(char *)((longlong)plVar2 + 0x44) != '\0' &&
          (*(char *)((longlong)plVar2 + 0xf1) != '\x04')))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 2;
      }
      *(byte *)((longlong)param_1 + 0x156) = *(byte *)((longlong)param_1 + 0x156) & 0xfd | bVar7;
      if ((bVar7 != 0) && (0 < *(int *)(puVar10 + 2) + -1)) {
        plVar8 = (longlong *)puVar10[1];
        do {
          if (*(char *)(*plVar8 + 0x44) != '\0') {
            FUN_142bd13a0(*param_1,(longlong)*(int *)(param_1 + 1),local_res8.s.LowPart._0_1_,
                          &local_res8);
            break;
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar9 < *(int *)(puVar10 + 2) + -1);
      }
      iVar6 = *(int *)(param_1 + 0x27);
      *(undefined1 *)((longlong)param_1 + 0x181) = 0;
      (**(code **)(*plVar2 + 0x290))(plVar2,param_1);
      if (((*(int *)(param_1 + 0x27) < *(int *)(param_1 + 1)) &&
          ((*(byte *)((longlong)param_1 + 0x156) & 1) == 0)) && (iVar6 != *(int *)(param_1 + 0x27)))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        if (*(char *)((longlong)param_1 + 0x181) == '\0') {
          if ((*(byte *)((longlong)param_1 + 0x156) & 2) == 0) {
            FUN_142be9600(*(undefined8 *)
                           (*(longlong *)
                             (param_1[0x22] + 8 +
                             (longlong)*(int *)((longlong)param_1 + 0x2c) * 0x30) +
                           (longlong)*(int *)((longlong)param_1 + 0x134) * 8),param_1);
          }
          else {
            TArray<FString,FDefaultAllocator>::Reset(param_1 + 0x28,0);
          }
        }
      }
    }
    goto LAB_142be0e46;
  }
  iVar6 = *(int *)((longlong)param_1 + 0x2c);
  if (((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x23))) &&
     (plVar2 = *(longlong **)(param_1[0x22] + 0x20 + (longlong)iVar6 * 0x30),
     *(int *)(param_1 + 0x2d) != iVar6)) {
    *(int *)(param_1 + 0x2d) = iVar6;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x27) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x24)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((*(int *)((longlong)param_1 + 0xc) < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    *(byte *)((longlong)param_1 + 0x156) = *(byte *)((longlong)param_1 + 0x156) & 0xfd;
    param_1[2] = plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_142be0ce9:
      if (lVar9 == 0) {
        *(undefined2 *)((longlong)param_1 + 0x154) = 0;
        goto LAB_142be0d02;
      }
    }
    else {
      lVar9 = plVar2[0x1f];
      if (lVar9 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar9 = plVar2[0x1f];
        goto LAB_142be0ce9;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x154) = *(undefined2 *)(lVar9 + 0x28);
  }
LAB_142be0d02:
  (**(code **)(*(longlong *)*puVar10 + 0x290))((longlong *)*puVar10,param_1);
  FUN_142be2720(param_1);
LAB_142be0e46:
  QueryPerformanceCounter(&local_res8);
  *(float *)(param_1 + 0x2c) =
       (float)((double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
               DAT_1468b02f8 - dVar3) + *(float *)(param_1 + 0x2c);
  if (bVar4) {
    *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + 1;
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  if ((*(int *)(param_1 + 5) == 0) &&
     ((*(int *)(puVar10 + 2) == *(int *)((longlong)param_1 + 0x134) ||
      (*(int *)(param_1 + 0x2a) < 1)))) {
    if ((*(int *)(param_1 + 0x2a) < 1) &&
       (iVar6 = *(int *)((longlong)param_1 + 0x2c) + 1, iVar6 < *(int *)(param_1 + 0x23))) {
      *(int *)((longlong)param_1 + 0x2c) = iVar6;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
    }
    else {
      FUN_142be2ac0(param_1);
    }
  }
  return;
}



// FUNCTION 142be0f20 FUN_142be0f20 body=137 status=ok
// SIG undefined FUN_142be0f20(void)

undefined1 FUN_142be0f20(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if (((*(uint *)(param_1 + 0x98) & 0x18) != 0) || (uVar3 = 1, (*(uint *)(param_1 + 0x98) & 6) != 0)
     ) {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0x80) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = uVar1 & 0xffffff7f;
  if ((uVar1 & 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x98) = uVar1 & 0xffffff7f | 0x100;
    if ((lVar2 == 0) || ((uVar1 & 0x10) == 0)) {
      if ((uVar1 & 8) != 0) {
        FUN_142c3bc60(param_1,*(undefined8 *)(param_1 + 0x78));
      }
    }
    else {
      FUN_142c3bca0(param_1,lVar2,*(undefined8 *)(lVar2 + 0x488));
    }
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffeff;
  }
  return *(undefined1 *)(param_1 + 0x80);
}



// FUNCTION 142be0fb0 FUN_142be0fb0 body=194 status=ok
// SIG undefined FUN_142be0fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142be0fb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_2 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14291fb80();
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
      lVar3 = *(longlong *)(lVar3 + 0x488);
      goto LAB_142be100a;
    }
  }
  lVar3 = 0;
LAB_142be100a:
  if (lVar3 != 0) {
    local_10 = DAT_1468b5d98;
    local_18 = _DAT_1468b5d90;
    FUN_1422369f0(0,*(undefined4 *)(param_1 + 0x70),lVar3,&local_18,0,0);
    return 0;
  }
  return 1;
}



// FUNCTION 142be1080 FUN_142be1080 body=353 status=ok
// SIG undefined FUN_142be1080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142be1080(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined8 *)(param_3 + 4) = _DAT_146691060;
  param_3[6] = DAT_146691068;
  uVar6 = 3;
  *param_3 = DAT_146690efc;
  if ((*(uint *)(param_1 + 0xac) & 0x400) == 0) {
    bVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x188) + 0x458) + 0x40))();
  }
  else {
    bVar2 = 0;
  }
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) ^ (*(byte *)(param_3 + 9) ^ bVar2) & 1;
  if ((*(byte *)(param_3 + 9) & 1) == 0) {
    uVar3 = FUN_142bec5e0(param_1,param_2,param_3);
    uVar6 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 3) {
      return uVar3;
    }
  }
  if (((*(byte *)(param_1 + 0xac) & 1) != 0) && (lVar1 = *(longlong *)(param_2 + 0x180), lVar1 != 0)
     ) {
    if (*(longlong *)(param_3 + 2) != 0) {
      FUN_142bcd200(lVar1,*(undefined1 *)(param_1 + 0x90),*(undefined8 *)(param_3 + 2));
    }
    local_28 = FUN_142bead20;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar4 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_1c;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[5] = uVar5;
    }
    puVar4 = (undefined8 *)
             FUN_142bc77b0(lVar1,local_res8,*(undefined1 *)(param_1 + 0x90),param_1,&local_38);
    *(undefined8 *)(param_3 + 2) = *puVar4;
  }
  return uVar6;
}



// FUNCTION 142be11f0 FUN_142be11f0 body=626 status=ok
// SIG undefined FUN_142be11f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142be11f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar7 = *(longlong **)(param_2 + 0x188);
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (((*(longlong *)(param_1 + 0x70) != 0) && (plVar7 != (longlong *)0x0)) &&
     (lVar6 = plVar7[0x91], lVar6 != 0)) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(lVar6 + 0x4c0);
    }
    else {
      plVar1 = (longlong *)plVar7[0x91];
      uVar5 = FUN_142a07000();
      lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    }
    if (lVar6 != 0) {
      uVar3 = FUN_14062c730(lVar6);
      *(undefined4 *)(param_1 + 0x90) = uVar3;
      *(longlong *)(param_1 + 0x88) = lVar6;
      FUN_1423b5fe0(lVar6,*(undefined8 *)(param_1 + 0x70),*(byte *)(param_1 + 0x78) & 1);
      fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x70) + 0x280))();
      if ((*(uint *)(param_1 + 0x78) & 2) != 0) {
        return 0;
      }
      if (0.0 < fVar8) {
        if ((*(uint *)(param_1 + 0x78) & 1) == 0) {
          lVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
          if (*(longlong *)(lVar6 + 400) == 0) {
            uVar5 = *(undefined8 *)(lVar6 + 0x3f8);
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
          }
          local_a8 = 0;
          local_a0 = 0;
          if ((((longlong *)(param_1 + 0x98) != &local_a8) && (*(int *)(param_1 + 0xa0) != 0)) &&
             (plVar7 = *(longlong **)(param_1 + 0x98), plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
          }
          FWeakObjectPtr::operator=(local_98,0);
          local_b0 = 0xbf800000;
          local_b8 = 0;
          local_90 = 0;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar5,(undefined8 *)(param_1 + 0xa8),&local_a8,fVar8);
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
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        }
        return 3;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142be1470 FUN_142be1470 body=206 status=ok
// SIG undefined FUN_142be1470(void)

bool FUN_142be1470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  lVar2 = 0;
  if (((*(longlong *)(param_1 + 0x70) != 0) && (lVar2 = 0, *(longlong *)(param_2 + 0x188) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x488), lVar1 != 0)) {
    local_38 = DAT_1468b5da0;
    local_30 = DAT_1468b5da8;
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    lVar2 = FUN_142460bb0(*(longlong *)(param_1 + 0x70),*(undefined8 *)(lVar1 + 0x168),0,&local_28,
                          &local_38,0,0,0x3f800000,0x3f800000,0,0,0,1);
  }
  return lVar2 == 0;
}



// FUNCTION 142be1540 FUN_142be1540 body=146 status=ok
// SIG undefined FUN_142be1540(void)

undefined8 FUN_142be1540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_2;
    if ((param_2 + 1U & 0xfffffffffffffffe) == 0) {
      lVar2 = GetTransientPackage();
    }
    lVar2 = FUN_1417987a0(lVar1,lVar2,0,0xefffffff,0,0,0xff800000);
  }
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_142bee850(param_1,param_2,lVar2);
  }
  return uVar3;
}



// FUNCTION 142be15e0 FUN_142be15e0 body=3049 status=ok
// SIG undefined FUN_142be15e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142be15e0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_108;
  float fStack_104;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  
  plVar3 = *(longlong **)(param_2 + 0x188);
  if ((plVar3 == (longlong *)0x0) || (plVar3[0x91] == 0)) {
    return 1;
  }
  *param_3 = 0;
  param_3[1] = CONCAT44(DAT_146691064,DAT_146691060);
  *(float *)(param_3 + 2) = DAT_146691068;
  *(undefined1 *)((longlong)param_3 + 0x14) = 0;
  lVar10 = plVar3[0x91];
  lVar7 = *(longlong *)(lVar10 + 0x168);
  if (lVar7 == 0) {
    local_d0 = DAT_1468b5d98;
    puVar9 = &local_d8;
    local_d8 = _DAT_1468b5d90;
  }
  else {
    puVar9 = &local_f8;
    local_f0 = *(float *)(lVar7 + 0x228);
    local_f8 = *(undefined8 *)(lVar7 + 0x220);
  }
  uVar1 = *puVar9;
  fVar17 = *(float *)(puVar9 + 1);
  lVar7 = *(longlong *)(param_2 + 0x180);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar8 = *(longlong *)(param_1 + 0x88);
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar5) goto LAB_142be16f7;
    }
  }
  lVar8 = 0;
LAB_142be16f7:
  lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  bVar4 = true;
  local_108 = (float)uVar1;
  fStack_104 = (float)((ulonglong)uVar1 >> 0x20);
  if (lVar8 == lVar6) {
    lVar7 = FUN_140725690(lVar7,*(undefined1 *)(param_1 + 0x90));
    if (lVar7 == 0) {
      return 1;
    }
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    if (!bVar4) {
      return 1;
    }
    lVar8 = *(longlong *)(lVar7 + 0x168);
    if (lVar8 == 0) {
      local_d0 = DAT_1468b5d98;
      puVar9 = &local_d8;
      local_d8 = _DAT_1468b5d90;
    }
    else {
      puVar9 = &local_f8;
      local_f0 = *(float *)(lVar8 + 0x228);
      local_f8 = *(undefined8 *)(lVar8 + 0x220);
    }
    local_d8 = *puVar9;
    local_d0 = *(float *)(puVar9 + 1);
    fStack_104 = (float)((ulonglong)local_d8 >> 0x20) - fStack_104;
    local_108 = (float)local_d8 - local_108;
    fVar17 = local_d0 - fVar17;
    if (*(longlong *)(lVar10 + 0x168) == 0) {
      local_d0 = DAT_1464aa7b0;
      puVar9 = &local_d8;
      local_d8 = DAT_1464aa7a8;
    }
    else {
      puVar9 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar10 + 0x168),&local_d8);
    }
    uVar1 = *puVar9;
    fVar16 = (float)uVar1;
    local_f0 = *(float *)(puVar9 + 1);
    local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    if (((0.0001 < ABS(fVar16)) || (0.0001 < ABS(local_f8._4_4_))) || (0.0001 < ABS(local_f0))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      if (((0.0001 < ABS(local_108)) || (0.0001 < ABS(fStack_104))) || (0.0001 < ABS(fVar17))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        fVar17 = local_f8._4_4_ * local_f8._4_4_ + fVar16 * fVar16;
        if (1e-08 < fVar17) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
          fVar16 = fVar16 * fVar14;
          local_f8._4_4_ = local_f8._4_4_ * fVar14;
        }
        fVar17 = fStack_104 * fStack_104 + local_108 * local_108;
        if (1e-08 < fVar17) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
          local_108 = local_108 * fVar14;
          fStack_104 = fStack_104 * fVar14;
        }
        fVar17 = local_f8._4_4_ * fStack_104 + fVar16 * local_108;
        goto LAB_142be19ed;
      }
    }
    fVar17 = 1.0;
LAB_142be19ed:
    if (fVar17 < *(float *)(param_1 + 0x9c)) {
      local_f8 = uVar1;
      (**(code **)(*plVar3 + 0x8c0))(plVar3,lVar7,2);
      *(undefined1 *)((longlong)param_3 + 0x14) = 1;
      *param_3 = lVar7;
      return 3;
    }
    return 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar8 = *(longlong *)(param_1 + 0x88);
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar5) goto LAB_142be1a53;
    }
  }
  lVar8 = 0;
LAB_142be1a53:
  lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar8 != lVar6) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar8 = *(longlong *)(param_1 + 0x88);
      for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_142be1d50;
      }
    }
    lVar8 = 0;
LAB_142be1d50:
    lVar6 = FUN_142c361d0();
    if (lVar8 != lVar6) {
      return 1;
    }
    bVar2 = *(byte *)(param_1 + 0x90);
    lVar8 = FUN_142bbd600(lVar7,bVar2);
    if (((lVar8 == 0) || (*(longlong *)(lVar8 + 8) == 0)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x10), lVar5 = FUN_142c361d0(),
       lVar6 != lVar5)) {
      local_f8 = CONCAT44(DAT_146b2c590._4_4_,(float)DAT_146b2c590);
      local_f0 = DAT_146b2c598;
      fVar14 = DAT_146b2c590._4_4_;
      fVar16 = (float)DAT_146b2c590;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 8);
      bVar11 = *(byte *)(lVar8 + 0x2b) >> 1 & 1;
      if (bVar11 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)bVar2 * 8);
      }
      if ((*(int *)(lVar7 + 400) == 0) || (*(int *)(lVar7 + 0x1a0) <= (int)(uint)bVar2)) {
        lVar7 = 0;
      }
      else {
        lVar7 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar2 * 2) +
                *(longlong *)(lVar7 + 0x188);
      }
      if (lVar7 + (ulonglong)bVar11 * 4 == 0) {
        local_d0 = DAT_146b2c598;
        puVar9 = &local_d8;
        local_d8 = CONCAT44(DAT_146b2c590._4_4_,(float)DAT_146b2c590);
      }
      else {
        puVar9 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(&local_d8,lVar8);
      }
      uVar1 = *puVar9;
      local_f8 = uVar1;
      uVar1 = local_f8;
      local_f0 = *(float *)(puVar9 + 1);
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_f8._0_4_ = (float)uVar1;
      fVar14 = local_f8._4_4_;
      fVar16 = (float)local_f8;
      local_f8 = uVar1;
    }
    if (((fVar16 == DAT_146691038) && (fVar14 == DAT_14669103c)) && (local_f0 == DAT_146691040)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return 1;
    }
    FRotator::Vector(&local_f8,&local_d8);
    if (*(longlong *)(lVar10 + 0x168) == 0) {
      local_e0 = DAT_1464aa7b0;
      puVar9 = &local_e8;
      local_e8 = DAT_1464aa7a8;
    }
    else {
      puVar9 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar10 + 0x168),&local_e8);
    }
    fVar16 = (float)*puVar9;
    local_e8._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
    if (((0.0001 < ABS(fVar16)) || (0.0001 < ABS(local_e8._4_4_))) ||
       (0.0001 < ABS(*(float *)(puVar9 + 1)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
LAB_142be20cb:
      fVar16 = 1.0;
    }
    else {
      if (((0.0001 < ABS((float)local_d8)) || (0.0001 < ABS(local_d8._4_4_))) ||
         (0.0001 < ABS(local_d0))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_142be20cb;
      fVar14 = local_e8._4_4_ * local_e8._4_4_ + fVar16 * fVar16;
      if (1e-08 < fVar14) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar13 = auVar15._0_4_;
        fVar13 = fVar13 + fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13);
        fVar13 = fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13) + fVar13;
        local_e8._4_4_ = fVar13 * local_e8._4_4_;
        fVar16 = fVar13 * fVar16;
      }
      fVar12 = local_d8._4_4_ * local_d8._4_4_ + (float)local_d8 * (float)local_d8;
      fVar14 = local_d8._4_4_;
      fVar13 = (float)local_d8;
      if (1e-08 < fVar12) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar13 = auVar15._0_4_;
        fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
        fVar13 = fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13) + fVar13;
        fVar14 = fVar13 * local_d8._4_4_;
        fVar13 = fVar13 * (float)local_d8;
      }
      fVar16 = local_e8._4_4_ * fVar14 + fVar16 * fVar13;
    }
    if (*(float *)(param_1 + 0x9c) <= fVar16) {
      return 0;
    }
    puVar9 = &local_e8;
    lVar10 = *plVar3;
    local_108 = local_108 + (float)local_d8 * 10000.0;
    fStack_104 = local_d8._4_4_ * 10000.0 + fStack_104;
    fVar17 = local_d0 * 10000.0 + fVar17;
    local_e8 = CONCAT44(fStack_104,local_108);
    local_e0 = fVar17;
    goto LAB_142be2135;
  }
  FUN_140725750(lVar7,&local_f8,*(undefined1 *)(param_1 + 0x90));
  if ((((((float)local_f8 <= -DAT_146691060) || (DAT_146691060 <= (float)local_f8)) ||
       (local_f8._4_4_ <= -DAT_146691064)) ||
      ((DAT_146691064 <= local_f8._4_4_ || (local_f0 <= -DAT_146691068)))) ||
     (DAT_146691068 <= local_f0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 1;
  }
  local_108 = (float)local_f8 - local_108;
  fVar16 = local_f8._4_4_ - fStack_104;
  fVar17 = local_f0 - fVar17;
  if (*(longlong *)(lVar10 + 0x168) == 0) {
    local_d0 = DAT_1464aa7b0;
    puVar9 = &local_d8;
    local_d8 = DAT_1464aa7a8;
  }
  else {
    puVar9 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar10 + 0x168),&local_d8);
  }
  fVar14 = (float)*puVar9;
  fStack_104 = (float)((ulonglong)*puVar9 >> 0x20);
  if (((0.0001 < ABS(fVar14)) || (0.0001 < ABS(fStack_104))) ||
     (0.0001 < ABS(*(float *)(puVar9 + 1)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
LAB_142be1ce4:
    fVar17 = 1.0;
  }
  else {
    if (((0.0001 < ABS(local_108)) || (0.0001 < ABS(fVar16))) || (0.0001 < ABS(fVar17))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142be1ce4;
    fVar17 = fStack_104 * fStack_104 + fVar14 * fVar14;
    if (1e-08 < fVar17) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar13 = auVar15._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13) + fVar13;
      fStack_104 = fVar13 * fStack_104;
      fVar14 = fVar13 * fVar14;
    }
    fVar17 = fVar16 * fVar16 + local_108 * local_108;
    if (1e-08 < fVar17) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar13 = auVar15._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13);
      local_108 = local_108 * fVar13;
      fVar16 = fVar16 * fVar13;
    }
    fVar17 = fStack_104 * fVar16 + fVar14 * local_108;
  }
  if (*(float *)(param_1 + 0x9c) <= fVar17) {
    return 0;
  }
  local_108 = (float)local_f8;
  fStack_104 = (float)((ulonglong)local_f8 >> 0x20);
  puVar9 = &local_d8;
  lVar10 = *plVar3;
  local_d8 = local_f8;
  local_d0 = local_f0;
  fVar17 = local_f0;
LAB_142be2135:
  (**(code **)(lVar10 + 0x8b8))(plVar3,puVar9,2);
  param_3[1] = CONCAT44(fStack_104,local_108);
  *(float *)(param_3 + 2) = fVar17;
  return 3;
}



// FUNCTION 142be21d0 FUN_142be21d0 body=337 status=ok
// SIG undefined FUN_142be21d0(void)

undefined8 FUN_142be21d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    cVar2 = FUN_142bc6b80(param_2);
    if ((cVar2 != '\0') && (0 < *(int *)(param_2 + 0x1e0))) {
      local_18 = &LAB_1404c2114;
      uStack_10 = 0;
      plVar5 = (longlong *)
               (*(longlong *)(param_2 + 0x1d8) + -0x10 + (longlong)*(int *)(param_2 + 0x1e0) * 0x60)
      ;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_14428aed0;
      }
      if (&local_18 != plVar5) {
        if (plVar3 == (longlong *)0x0) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar4 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar4;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))(plVar3,plVar5);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      return 3;
    }
  }
  return 1;
}



// FUNCTION 142be2330 FUN_142be2330 body=340 status=ok
// SIG undefined FUN_142be2330(void)

undefined8 FUN_142be2330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar2 = FUN_142bc6b80(param_2);
    if ((cVar2 != '\0') && (0 < *(int *)(param_2 + 0x1e0))) {
      local_18 = &LAB_1404c2114;
      uStack_10 = 0;
      plVar5 = (longlong *)
               (*(longlong *)(param_2 + 0x1d8) + -0x10 + (longlong)*(int *)(param_2 + 0x1e0) * 0x60)
      ;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_14428aed0;
      }
      if (&local_18 != plVar5) {
        if (plVar3 == (longlong *)0x0) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar4 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar4;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))(plVar3,plVar5);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      return 3;
    }
  }
  return 1;
}



// FUNCTION 142be2490 FUN_142be2490 body=215 status=ok
// SIG undefined FUN_142be2490(void)

undefined8 FUN_142be2490(longlong param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x118);
  if (lVar4 != 0) {
    lVar3 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = *(longlong *)(lVar4 + 0x488);
    }
    if ((lVar4 != 0) && ((*(uint *)(param_1 + 0x13c) >> 1 & 1) != 0)) {
      iVar2 = FUN_142be0560(param_1 + 0xf8,lVar4,*(undefined8 *)(param_2 + 0x180),param_1 + 0x140);
      *param_3 = iVar2;
      if (-1 < iVar2) {
        FUN_142bce900(param_1,param_2,DAT_146b2c648,iVar2);
        return 3;
      }
    }
  }
  return 1;
}



// FUNCTION 142be2570 ExecuteTask body=36 status=ok
// SIG undefined ExecuteTask(void)

undefined8 UBTTask_SetTagCooldown::ExecuteTask(longlong param_1,undefined8 param_2)

{
  FUN_142bb3630(param_2,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x7c),
                *(undefined1 *)(param_1 + 0x78));
  return 0;
}



// FUNCTION 142be25a0 ExecuteTask body=122 status=ok
// SIG undefined ExecuteTask(void)

undefined8 UBTTask_Wait::ExecuteTask(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar4 = fVar1 - fVar2;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  iVar3 = rand();
  *param_3 = (float)iVar3 * 3.051851e-05 * ((fVar2 + fVar1) - fVar4) + fVar4;
  return 3;
}



// FUNCTION 142be2620 FUN_142be2620 body=243 status=ok
// SIG undefined FUN_142be2620(void)

undefined8 FUN_142be2620(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  
  lVar3 = *(longlong *)(param_2 + 0x180);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar7 = *(longlong *)(param_1 + 0x90);
      for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_142be2684;
      }
    }
    lVar7 = 0;
LAB_142be2684:
    lVar6 = UBlackboardKeyType_Float::GetPrivateStaticClass();
    if (lVar7 == lVar6) {
      uVar8 = FUN_1407255d0(lVar3,*(undefined1 *)(param_1 + 0x98));
      *(undefined4 *)(param_1 + 0x70) = uVar8;
    }
  }
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar9 = fVar1 - fVar2;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  iVar4 = rand();
  *param_3 = (float)iVar4 * 3.051851e-05 * ((fVar2 + fVar1) - fVar9) + fVar9;
  return 3;
}



// FUNCTION 142be2720 FUN_142be2720 body=809 status=ok
// SIG undefined FUN_142be2720(void)

void FUN_142be2720(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  void *local_38;
  undefined8 local_30;
  
  plVar17 = (longlong *)(param_1 + 0x140);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0x10 + (longlong)*(int *)(param_1 + 0x2c) * 0x30
                  );
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 8);
  TArray<FString,FDefaultAllocator>::Reset(plVar17);
  *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xfe;
  iVar18 = 0;
  iVar7 = *(int *)(param_1 + 0x150);
  if (0 < iVar7) {
    if (*(int *)(param_1 + 0x14c) < iVar7) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar17);
      iVar7 = *(int *)(param_1 + 0x150);
    }
    if (0 < iVar7) {
      do {
        local_38 = (void *)0x0;
        local_30._4_4_ = 0;
        local_30._0_4_ = iVar1;
        if (0 < iVar1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38);
        }
        uVar5 = local_30._4_4_;
        iVar4 = (int)local_30;
        pvVar3 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,0,(longlong)iVar1 << 2);
        iVar7 = *(int *)(param_1 + 0x148);
        iVar8 = iVar7 + 1;
        *(int *)(param_1 + 0x148) = iVar8;
        if (*(int *)(param_1 + 0x14c) < iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17);
        }
        local_38 = (void *)0x0;
        iVar18 = iVar18 + 1;
        puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar17);
        *puVar9 = pvVar3;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
        *(int *)(puVar9 + 1) = iVar4;
        local_30 = 0;
      } while (iVar18 < *(int *)(param_1 + 0x150));
    }
  }
  lVar12 = 0;
  lVar14 = lVar12;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar10 = UEnvQueryItemType::GetPrivateStaticClass();
    for (lVar11 = *(longlong *)(param_1 + 0x10); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30))
    {
      if (lVar11 == lVar10) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          lVar11 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
          if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_142be291e;
          lVar13 = UEnvQueryItemType::GetPrivateStaticClass();
          lVar15 = *(longlong *)(param_1 + 0x10);
          lVar10 = lVar15;
          goto joined_r0x000142be290a;
        }
        break;
      }
    }
  }
  goto LAB_142be2896;
joined_r0x000142be290a:
  if (lVar10 == 0) goto LAB_142be291e;
  if (lVar10 == lVar13) goto joined_r0x000142be2924;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x000142be290a;
LAB_142be291e:
  lVar15 = 0;
joined_r0x000142be2924:
  do {
    if (lVar15 == 0) goto LAB_142be2896;
    if (lVar15 == lVar11) {
      if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_142be296e;
      plVar16 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      plVar17 = *(longlong **)(param_1 + 0x10);
      plVar2 = plVar17;
      break;
    }
    lVar15 = *(longlong *)(lVar15 + 0x30);
  } while( true );
joined_r0x000142be2959:
  if (plVar2 == (longlong *)0x0) goto LAB_142be296e;
  if (plVar2 == plVar16) goto LAB_142be2971;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000142be2959;
joined_r0x000142be29c0:
  if (lVar11 == 0) goto LAB_142be29d0;
  if (lVar11 == lVar15) goto joined_r0x000142be29d6;
  lVar11 = *(longlong *)(lVar11 + 0x30);
  goto joined_r0x000142be29c0;
LAB_142be29d0:
  lVar10 = 0;
joined_r0x000142be29d6:
  do {
    if (lVar10 == 0) goto LAB_142be28ca;
    if (lVar10 == lVar14) {
      if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_142be2a1e;
      plVar16 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      plVar17 = *(longlong **)(param_1 + 0x10);
      plVar2 = plVar17;
      break;
    }
    lVar10 = *(longlong *)(lVar10 + 0x30);
  } while( true );
joined_r0x000142be2a09:
  if (plVar2 == (longlong *)0x0) goto LAB_142be2a1e;
  if (plVar2 == plVar16) goto LAB_142be2a21;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000142be2a09;
LAB_142be2a1e:
  plVar17 = (longlong *)0x0;
LAB_142be2a21:
  lVar12 = plVar17[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar17 + 0x368))(plVar17);
    lVar12 = plVar17[0x1f];
  }
  goto LAB_142be28ca;
LAB_142be296e:
  plVar17 = (longlong *)0x0;
LAB_142be2971:
  lVar14 = plVar17[0x1f];
  if (plVar17[0x1f] == 0) {
    (**(code **)(*plVar17 + 0x368))(plVar17);
    lVar14 = plVar17[0x1f];
  }
LAB_142be2896:
  *(longlong *)(param_1 + 0x170) = lVar14;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar11 = UEnvQueryItemType::GetPrivateStaticClass();
    for (lVar14 = *(longlong *)(param_1 + 0x10); lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30))
    {
      if (lVar14 == lVar11) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          lVar14 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
          if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_142be29d0;
          lVar15 = UEnvQueryItemType::GetPrivateStaticClass();
          lVar10 = *(longlong *)(param_1 + 0x10);
          lVar11 = lVar10;
          goto joined_r0x000142be29c0;
        }
        break;
      }
    }
  }
LAB_142be28ca:
  *(longlong *)(param_1 + 0x178) = lVar12;
  uVar6 = FUN_142bd8b00(param_1);
  *(undefined1 *)(param_1 + 0x180) = uVar6;
  return;
}



// FUNCTION 142be2a50 FUN_142be2a50 body=108 status=ok
// SIG undefined FUN_142be2a50(void)

void FUN_142be2a50(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  FUN_142be2720();
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x118))) {
    if ((*(int *)(param_1 + 0x134) == -1) &&
       (((0 < *(int *)(param_1 + 0x150) && (*(int *)(param_1 + 0x168) != -1)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x110) + 0x10 + (longlong)iVar1 * 0x30))))) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    uVar2 = FUN_142bd8b00(param_1);
    *(undefined1 *)(param_1 + 0x180) = uVar2;
  }
  return;
}



// FUNCTION 142be2ac0 FUN_142be2ac0 body=641 status=ok
// SIG undefined FUN_142be2ac0(void)

void FUN_142be2ac0(undefined8 *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  
  if (*(int *)(param_1 + 0x2a) < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    TArray<FString,FDefaultAllocator>::Reset(param_1 + 0x28,0);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(int *)((longlong)param_1 + 0x24) < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
    }
    *(undefined4 *)(param_1 + 5) = 2;
    return;
  }
  if (*(int *)((longlong)param_1 + 0x16c) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x156) & 3) == 0) {
      FUN_142bd13a0(*param_1,(longlong)*(int *)(param_1 + 1),local_res8[0]._0_1_,local_res8);
      FUN_142beca30(param_1,0);
      *(undefined4 *)(param_1 + 5) = 1;
      return;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x16c) - 1U < 2) {
    FUN_142bd13a0(*param_1,(longlong)*(int *)(param_1 + 1),local_res8[0]._0_1_,local_res8);
    if (*(int *)((longlong)param_1 + 0x16c) == 1) {
      fVar11 = 0.95;
    }
    else {
      fVar11 = 0.75;
    }
    pfVar5 = (float *)*param_1;
    iVar4 = 1;
    iVar9 = *(int *)(param_1 + 0x2a);
    fVar10 = *pfVar5;
    iVar7 = iVar9;
    if (1 < iVar9) {
      do {
        pfVar5 = pfVar5 + 3;
        iVar7 = iVar4;
        if (*pfVar5 <= fVar11 * fVar10 && fVar11 * fVar10 != *pfVar5) break;
        iVar4 = iVar4 + 1;
        iVar7 = iVar9;
      } while (iVar4 < iVar9);
    }
    if (iVar7 < 1) {
      iVar9 = 0;
    }
    else {
      DAT_146b2c4fc = DAT_146b2c4fc * 0xbb38435 + 0x3619636b;
      local_res8[0] = (float)(DAT_146b2c4fc & 0x7fffff | 0x3f800000);
      iVar9 = (int)((local_res8[0] - (float)(int)local_res8[0]) * ((float)iVar7 - 1e-05));
    }
    FUN_142beca30(param_1,iVar9);
  }
  else {
    FUN_142bd13a0(*param_1,(longlong)*(int *)(param_1 + 1),local_res8[0]._0_1_,local_res8);
    TArray<FName,FDefaultAllocator>::SetNum(param_1,*(undefined4 *)(param_1 + 0x2a),1);
    uVar2 = *(uint *)(param_1 + 0x2a);
    fVar12 = 0.0;
    pfVar5 = (float *)*param_1;
    fVar10 = 0.0;
    fVar11 = -3.4e+38;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      pfVar6 = pfVar5;
      do {
        fVar1 = *pfVar6;
        pfVar6 = pfVar6 + 3;
        fVar3 = fVar1;
        if (fVar1 <= fVar11) {
          fVar3 = fVar11;
        }
        fVar11 = fVar3;
        if (fVar10 <= fVar1) {
          fVar1 = fVar10;
        }
        fVar10 = fVar1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (fVar10 == fVar11) {
      if (fVar10 != 0.0) {
        fVar12 = 1.0;
      }
      iVar9 = 0;
      if (0 < (int)uVar2) {
        do {
          *pfVar5 = fVar12;
          pfVar5 = pfVar5 + 3;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x2a));
        *(undefined4 *)(param_1 + 5) = 1;
        return;
      }
    }
    else {
      iVar9 = 0;
      if (0 < (int)uVar2) {
        do {
          iVar9 = iVar9 + 1;
          *pfVar5 = (*pfVar5 - fVar10) * (1.0 / (fVar11 - fVar10));
          pfVar5 = pfVar5 + 3;
        } while (iVar9 < *(int *)(param_1 + 0x2a));
        *(undefined4 *)(param_1 + 5) = 1;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 142be2d50 FUN_142be2d50 body=97 status=ok
// SIG undefined FUN_142be2d50(void)

longlong FUN_142be2d50(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  uVar2 = UThrobber::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  return lVar3;
}



// FUNCTION 142be2dc0 FUN_142be2dc0 body=585 status=ok
// SIG undefined FUN_142be2dc0(void)

undefined4 FUN_142be2dc0(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  
  iVar3 = (int)((ulonglong)param_3 >> 0x20);
  plVar6 = (longlong *)0x0;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar4 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x50));
        if ((int)*plVar7 == param_2) {
          if (iVar2 != -1) goto LAB_142be2e40;
          break;
        }
        iVar2 = (int)plVar7[3];
      } while (iVar2 != -1);
    }
  }
  plVar7 = plVar6;
LAB_142be2e40:
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  if (plVar8 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x40) < 1) {
      return 0;
    }
    plVar7 = *(longlong **)(param_1 + 0x38);
    while (lVar4 = *plVar7, *(int *)(lVar4 + 0x30) != param_2) {
      plVar6 = (longlong *)((longlong)plVar6 + 1);
      plVar7 = plVar7 + 2;
      if ((longlong)*(int *)(param_1 + 0x40) <= (longlong)plVar6) {
        return 0;
      }
    }
    if (*(int *)(lVar4 + 0x78) == *(int *)(lVar4 + 0xa4)) {
      return 0;
    }
    lVar5 = *(longlong *)(lVar4 + 0xb0);
    if (*(longlong *)(lVar4 + 0xb0) == 0) {
      lVar5 = lVar4 + 0xa8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)param_3) &
                             (longlong)*(int *)(lVar4 + 0xb8) - 1U) * 4);
    if (iVar3 == -1) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar4 + 0x70);
    while (lVar5 = (longlong)iVar3, *(longlong *)(lVar4 + lVar5 * 0x18) != param_3) {
      iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
      if (iVar3 == -1) {
        return 0;
      }
    }
    if (iVar3 == -1) {
      return 0;
    }
    lVar4 = lVar4 + lVar5 * 0x18;
    if (lVar4 == 0) {
      return 0;
    }
    return *(undefined4 *)(lVar4 + 8);
  }
  plVar6 = (longlong *)plVar8[1];
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  iVar2 = (int)plVar6[1];
  bVar9 = iVar2 == 0;
  if (bVar9) {
    *(int *)(plVar6 + 1) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  while( true ) {
    if (bVar9) {
      return 0;
    }
    LOCK();
    bVar9 = iVar2 == (int)plVar6[1];
    if (bVar9) {
      *(int *)(plVar6 + 1) = iVar2 + 1;
    }
    UNLOCK();
    if (bVar9) break;
    LOCK();
    iVar2 = (int)plVar6[1];
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(plVar6 + 1) = 0;
      iVar2 = 0;
    }
    UNLOCK();
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = *plVar8;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x78) != *(int *)(lVar4 + 0xa4))) {
    lVar5 = *(longlong *)(lVar4 + 0xb0);
    if (*(longlong *)(lVar4 + 0xb0) == 0) {
      lVar5 = lVar4 + 0xa8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)param_3) &
                             (longlong)*(int *)(lVar4 + 0xb8) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(lVar4 + 0x70);
      do {
        lVar5 = (longlong)iVar3;
        if (*(longlong *)(lVar4 + lVar5 * 0x18) == param_3) {
          if ((iVar3 != -1) && (lVar4 = lVar4 + lVar5 * 0x18, lVar4 != 0)) {
            uVar10 = *(undefined4 *)(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
      } while (iVar3 != -1);
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  lVar4 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return uVar10;
}



// FUNCTION 142be3010 FUN_142be3010 body=319 status=ok
// SIG undefined FUN_142be3010(void)

longlong FUN_142be3010(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x58) == 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x138), lVar6 == 0)) {
    return 0;
  }
  lVar3 = FUN_142ba9430();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x34);
  if ((cVar2 == '\0') || (lVar3 = FWeakObjectPtr::Get(param_1 + 0x34), lVar3 == 0)) {
LAB_142be3109:
    lVar6 = *(longlong *)(lVar6 + 0x28);
    if (lVar6 == 0) {
      return 0;
    }
    lVar3 = FUN_142baab40();
    if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        == lVar3 + 0x88)) {
      bVar1 = true;
      goto LAB_142be30f5;
    }
  }
  else {
    uVar4 = UNavAgentInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_142be3109;
    uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar6 = FUN_142b8f070(lVar6,uVar4);
    if (lVar6 == 0) {
      return 0;
    }
    lVar3 = FUN_142baab40();
    if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        == lVar3 + 0x88)) {
      bVar1 = true;
      goto LAB_142be30f5;
    }
  }
  bVar1 = false;
LAB_142be30f5:
  if (!bVar1) {
    return 0;
  }
  return lVar6;
}



// FUNCTION 142be3150 FinishAbort body=139 status=ok
// SIG undefined FinishAbort(void)

void UBTTask_BlueprintBase::FinishAbort(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142be319e;
  }
  lVar3 = 0;
LAB_142be319e:
  if ((*(uint *)(param_1 + 0x98) >> 8 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x80) = 2;
    return;
  }
  if ((lVar3 != 0) && ((char)*(uint *)(param_1 + 0x98) < '\0')) {
    UBTTaskNode::FinishLatentAbort(param_1,lVar3);
  }
  return;
}



// FUNCTION 142be31e0 DestroyAllActiveCaptures body=37 status=ok
// SIG undefined DestroyAllActiveCaptures(void)

void FMovieSceneCaptureModule::DestroyAllActiveCaptures(undefined8 param_1)

{
  FUN_140483870(&DAT_1464b57b8,param_1);
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142be3210 FinishExecute body=165 status=ok
// SIG undefined FinishExecute(void)

void UBTTask_BlueprintBase::FinishExecute(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142be3266;
  }
  lVar3 = 0;
LAB_142be3266:
  if ((*(uint *)(param_1 + 0x98) >> 8 & 1) != 0) {
    *(byte *)(param_1 + 0x80) = param_2 ^ 1;
    return;
  }
  if ((lVar3 != 0) && (-1 < (char)*(uint *)(param_1 + 0x98))) {
    UBTTaskNode::FinishLatentTask(param_1,lVar3);
  }
  return;
}



// FUNCTION 142be32c0 FUN_142be32c0 body=111 status=ok
// SIG undefined FUN_142be32c0(void)

void FUN_142be32c0(longlong param_1)

{
  longlong local_18 [2];
  
  FAIResourceLock::ForceClearAllLocks(param_1 + 0x38);
  local_18[1] = 0x11;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"unlocked: forced",0x22);
  (**(code **)(*(longlong *)(param_1 + -0x178) + 0x420))((longlong *)(param_1 + -0x178),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}


