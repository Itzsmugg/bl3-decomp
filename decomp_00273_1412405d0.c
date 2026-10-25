// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412405d0 FUN_1412405d0 body=1294 status=ok
// SIG undefined FUN_1412405d0(void)

void FUN_1412405d0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar14 = iVar8 == 0;
    if (bVar14) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar8 == (int)plVar4[1];
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar14) {
        if (plVar4 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x318) != 0) {
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
            cVar5 = FUN_14204d380(*(longlong *)(param_1 + 0x318),&local_48,L"fill");
            if (cVar5 != '\0') {
              fVar16 = (float)param_2;
              if (1e-08 < ABS(fVar16)) {
                fVar16 = (float)param_3 / fVar16;
                auVar15 = ZEXT416((uint)fVar16);
                auVar17 = ZEXT816(0);
                if (0.0 <= fVar16) goto LAB_1412406b3;
              }
              else {
                if ((float)param_3 < fVar16) {
                  auVar15 = ZEXT816(0);
                }
                else {
                  auVar15._0_12_ = ZEXT812(0x3f800000);
                  auVar15._12_4_ = 0;
                }
LAB_1412406b3:
                auVar17 = auVar15;
                if (1.0 <= auVar15._0_4_) {
                  auVar17._4_12_ = auVar15._4_12_;
                  auVar17._0_4_ = 0x3f800000;
                }
              }
              FUN_14203e3e0(local_48,(int)(100.0 - auVar17._0_4_ * 98.0));
            }
            plVar2 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                iVar8 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
          }
          LOCK();
          plVar2 = plVar4 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x330);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar14 = iVar8 == 0;
    if (bVar14) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar8 == (int)plVar4[1];
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar14) {
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x328) != 0) {
          local_38 = 0;
          plStack_30 = (longlong *)0x0;
          cVar5 = FUN_14204d380(*(longlong *)(param_1 + 0x328),&local_38,L"textField");
          if (cVar5 != '\0') {
            local_78 = (void *)0x0;
            local_70 = 4;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
            pvVar6 = local_78;
            FGenericPlatformString::Convert<char,wchar_t>(local_78,4,&DAT_144701174,4,0x3f);
            local_a8 = (void *)0x0;
            local_a0 = 0;
            FString::AppendInt(&local_a8,param_2);
            local_68 = (void *)0x0;
            local_60 = 0;
            FString::AppendInt(&local_68,param_3);
            if ((int)local_60 < 2) {
              local_78 = (void *)0x0;
              pvVar10 = (void *)0x0;
              iVar11 = local_70._4_4_;
              iVar12 = (int)local_70;
            }
            else {
              if ((int)local_70 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = (int)local_70 + -1;
              }
              if (((int)local_60 != 0) || (iVar7 = 1, iVar8 == 0)) {
                iVar7 = 0;
              }
              iVar12 = local_60._4_4_;
              iVar7 = iVar7 + (int)local_60;
              local_98 = local_68;
              local_68 = (void *)0x0;
              local_90 = (int)local_60;
              local_8c = local_60._4_4_;
              local_60 = 0;
              if (iVar12 < iVar7 + iVar8) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
              }
              iVar7 = local_90;
              pvVar10 = pvVar6;
              pvVar6 = local_98;
              iVar11 = local_8c;
              iVar12 = local_90;
              if (iVar8 != 0) {
                lVar9 = (longlong)local_90;
                local_90 = iVar8 + (uint)(local_90 == 0) + local_90;
                if (local_8c < local_90) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar7);
                }
                iVar11 = local_8c;
                iVar12 = local_90;
                pvVar6 = local_98;
                pvVar10 = (void *)((longlong)local_98 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar10,local_78,(longlong)iVar8 * 2);
                *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar10) = 0;
                pvVar10 = local_78;
              }
            }
            if (iVar12 < 2) {
              local_58 = local_a8;
              local_50 = (int)local_a0;
              local_4c = local_a0._4_4_;
              local_a0 = 0;
              local_a8 = (void *)0x0;
            }
            else {
              if ((int)local_a0 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = (int)local_a0 + -1;
              }
              iVar7 = 0;
              if ((iVar12 == 0) && (iVar8 != 0)) {
                iVar7 = 1;
              }
              local_88 = pvVar6;
              local_80 = iVar12;
              local_7c = iVar11;
              if (iVar11 < iVar7 + iVar12 + iVar8) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
              }
              iVar7 = local_80;
              pvVar6 = local_a8;
              pvVar13 = local_88;
              iVar11 = local_7c;
              iVar12 = local_80;
              if (iVar8 != 0) {
                lVar9 = (longlong)local_80;
                local_80 = local_80 + (uint)(local_80 == 0) + iVar8;
                if (local_7c < local_80) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar7);
                }
                iVar11 = local_7c;
                iVar12 = local_80;
                pvVar13 = local_88;
                pvVar10 = (void *)((longlong)local_88 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar10,pvVar6,(longlong)iVar8 * 2);
                *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar10) = 0;
                pvVar10 = local_78;
              }
              pvVar6 = (void *)0x0;
              local_58 = pvVar13;
              local_50 = iVar12;
              local_4c = iVar11;
            }
            FUN_142055760(local_38,&local_58,0);
            if (local_58 != (void *)0x0) {
              FMemory::Free();
            }
            if (pvVar6 != (void *)0x0) {
              FMemory::Free(pvVar6);
            }
            if (local_68 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_a8 != (void *)0x0) {
              FMemory::Free();
            }
            if (pvVar10 != (void *)0x0) {
              FMemory::Free(pvVar10);
            }
          }
          plVar2 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              iVar8 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar4 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 != 1) {
          return;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141240b00 FUN_141240b00 body=477 status=ok
// SIG undefined FUN_141240b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141240b00(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar2 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar2,param_1 + 0xc28);
  *(undefined8 *)(param_1 + 0xc28) = 0;
  FUN_142dafbc0(param_1 + 0xc38,&DAT_1468770c0);
  uVar1 = *(undefined4 *)(param_1 + 0xcd4);
  local_a8 = FUN_141240ce0;
  uStack_a0 = 0;
  uVar2 = AActor::GetWorldTimerManager(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_a0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar2,param_1 + 0xc30,&local_98,uVar1);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 141240ce0 FUN_141240ce0 body=73 status=ok
// SIG undefined FUN_141240ce0(void)

void FUN_141240ce0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar1,param_1 + 0xc30);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  FUN_142dbb5d0(param_1 + 0xc38,&DAT_1468770c0);
  return;
}



// FUNCTION 141240d40 FUN_141240d40 body=299 status=ok
// SIG undefined FUN_141240d40(void)

undefined8 FUN_141240d40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x55c) == '\0') &&
     (((((*(char *)(param_1 + 0x558) == '\0' || (*(longlong *)(param_1 + 0x6f8) == 0)) ||
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x668), lVar4 == 0)) ||
       (cVar2 = FUN_142cf39b0(lVar4,0), cVar2 == '\0')) &&
      (((*(char *)(param_1 + 0x559) == '\0' || (*(longlong *)(param_1 + 0x6f8) == 0)) ||
       (cVar2 = FUN_14122a750(*(longlong *)(param_1 + 0x6f8),0), cVar2 == '\0')))))) {
    if (*(char *)(param_1 + 0x55b) != '\0') {
      if (*(char *)(param_1 + 0x128) == '\x03') {
        *(undefined1 *)(param_1 + 0x69c) = 0;
        lVar4 = FUN_14222e260(param_1);
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
            uVar3 = 0 < *(int *)(*(longlong *)(lVar4 + 0x918) + 0x360);
          }
          else {
            uVar3 = FUN_140760c00(lVar4);
          }
          *(undefined1 *)(param_1 + 0x69c) = uVar3;
        }
      }
      if (*(char *)(param_1 + 0x69c) != '\0') {
        return 1;
      }
    }
    if (((*(char *)(param_1 + 0x55a) == '\0') || (*(longlong *)(param_1 + 0x6f8) == 0)) ||
       (cVar2 = FUN_14122eb90(), cVar2 != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141240e70 FUN_141240e70 body=129 status=ok
// SIG undefined FUN_141240e70(void)

undefined1 FUN_141240e70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  
  cVar2 = FUN_142df3220();
  if ((cVar2 != '\0') && (lVar1 = *param_2, lVar1 != 0)) {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (bVar4 = ATTLBaseBossWyvePawn::IsExecRotation(lVar1), *(byte *)(param_1 + 0x248) < bVar4)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141240f00 FUN_141240f00 body=182 status=ok
// SIG undefined FUN_141240f00(void)

ulonglong FUN_141240f00(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x670))();
    in_RAX = 0;
    if (lVar2 != 0) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        in_RAX = (ulonglong)uVar5 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar5,1);
      }
      if (((char)in_RAX != '\0') && (lVar2 = *(longlong *)(lVar2 + 0x848), lVar2 != 0)) {
        lVar3 = FUN_1413ffe00();
        iVar1 = *(int *)(lVar3 + 0x90);
        uVar4 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
           (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
           *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
          in_RAX = uVar4 & 0xffffffffffffff00;
        }
        else {
          in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (((char)in_RAX != '\0') && (*(longlong *)(lVar2 + 0x2418) != 0)) {
          uVar4 = UGeometryCacheComponent::IsPlaying();
          return uVar4;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141240ff0 FUN_141240ff0 body=262 status=ok
// SIG undefined FUN_141240ff0(void)

undefined8 FUN_141240ff0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FWeakObjectPtr::IsValid(param_3 + 0xdc);
    if (cVar1 == '\0') {
      lVar4 = (**(code **)(*param_2 + 0x2b0))(param_2);
      if (lVar4 != 0) {
        plVar2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
        (**(code **)(*plVar2 + 0x20))(plVar2,1);
      }
    }
    else {
      uVar6 = 1;
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_3 + 0xdc);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_14301f8f0();
        lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
        if ((lVar4 != 0) && (lVar5 = (**(code **)(*param_2 + 0x2b0))(param_2), lVar5 != 0)) {
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
          (**(code **)(*plVar2 + 0x18))(plVar2,0);
          plVar2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
          (**(code **)(*plVar2 + 8))(plVar2,lVar4,0,0);
        }
      }
    }
  }
  FUN_140e9c360(param_3);
  return uVar6;
}



// FUNCTION 141241100 FUN_141241100 body=715 status=ok
// SIG undefined FUN_141241100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141241100(longlong *param_1,longlong param_2,undefined1 (*param_3) [12],
                       undefined8 param_4)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar4 = 1;
  uVar5 = (**(code **)(*param_1 + 0x148))();
  lVar6 = FUN_140e7e6f0(uVar5);
  if ((lVar6 != 0) && (lVar7 = FUN_140e80650(lVar6,param_3,0), lVar7 != 0)) {
    uVar4 = FUN_140e80820(lVar6,param_3);
  }
  if (param_2 != 0) {
    uVar8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    cVar3 = FUN_143013fe0(&local_b8,param_2,uVar4,param_1);
    if (cVar3 != '\0') {
      local_a8 = (ulonglong *)0x0;
      local_a0 = 0;
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_143018ff0(&local_b8,uVar5,&local_a8,0);
      uVar13 = (ulonglong)((longlong)(local_a8 + (int)local_a0) + (7 - (longlong)local_a8)) >> 3;
      if (local_a8 + (int)local_a0 < local_a8) {
        uVar13 = uVar8;
      }
      puVar10 = local_a8;
      uVar12 = uVar8;
      if (uVar13 != 0) {
        do {
          uVar1 = *puVar10;
          FRotator::Quaternion(param_4,&local_98);
          local_88 = local_98;
          uStack_80 = uStack_90;
          local_78._12_4_ = 0;
          local_78._0_12_ = *param_3;
          local_68._4_4_ = DAT_1464aa788._4_4_;
          local_68._0_4_ = (undefined4)DAT_1464aa788;
          local_68._8_4_ = DAT_1464aa790;
          local_68._12_4_ = 0;
          local_d8 = CONCAT71(local_d8._1_7_,1);
          FUN_142399d60(*(undefined8 *)(uVar1 + 0x168),&local_88,0,0);
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != uVar13);
      }
      if (0 < (int)local_a0) {
        uVar13 = *local_a8;
        if (uVar13 != 0) {
          lVar6 = FUN_14148cad0();
          if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_1412412f4;
        }
        uVar13 = uVar8;
LAB_1412412f4:
        if (local_a8 != (ulonglong *)0x0) {
          FMemory::Free(local_a8);
        }
        if ((int)local_b0 != 0) {
          plVar9 = (longlong *)(local_b8 + 0x38);
          iVar11 = (int)local_b0;
          do {
            if (plVar9[2] != 0) {
              FMemory::Free();
            }
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar9 + -3);
            plVar9 = plVar9 + 0xc;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (local_b8 == 0) {
          return uVar13;
        }
        FMemory::Free();
        return uVar13;
      }
      if (local_a8 != (ulonglong *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    if ((int)local_b0 != 0) {
      plVar9 = (longlong *)(local_b8 + 0x38);
      iVar11 = (int)local_b0;
      do {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar9 + -3);
        plVar9 = plVar9 + 0xc;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1412413d0 FUN_1412413d0 body=345 status=ok
// SIG undefined FUN_1412413d0(void)

void FUN_1412413d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  bVar8 = false;
  if (*(char *)(param_1 + 0x90) == '\0') {
LAB_14124142f:
    bVar3 = true;
  }
  else {
    local_20 = 0;
    local_18 = 0;
    local_28 = 0;
    bVar8 = true;
    cVar4 = FSoftObjectPath::operator==(param_1 + 0x50,&local_28,param_3,param_4,0xffffffff);
    if (cVar4 != '\0') goto LAB_14124142f;
    bVar3 = false;
  }
  if ((bVar8) && (local_20 != 0)) {
    FMemory::Free();
  }
  if (bVar3) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((iVar1 < 0) || (*(int *)(param_2 + 0x6e8) <= iVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (((bVar8) &&
      (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x6e0) + (longlong)iVar1 * 8), lVar6 != 0)) &&
     (plVar2 = *(longlong **)(lVar6 + 0x118), plVar2 != (longlong *)0x0)) {
    uVar5 = FUN_1412d7930();
    lVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
    if (lVar6 != 0) goto LAB_1412414ae;
  }
  lVar6 = *(longlong *)(param_2 + 0x6d0);
  if (lVar6 == 0) {
    return;
  }
LAB_1412414ae:
  lVar6 = FUN_14127fd20(lVar6,param_1,*(undefined8 *)(param_1 + 0x98));
  if (lVar6 != 0) {
    FUN_14308a770(lVar6,1);
    lVar7 = FUN_14149a4d0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      *(undefined4 *)(lVar6 + 0x960) = *(undefined4 *)(param_1 + 0xa0);
    }
  }
  return;
}



// FUNCTION 141241530 FUN_141241530 body=402 status=ok
// SIG undefined FUN_141241530(void)

void FUN_141241530(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_1[0x1b0] == 0) ||
     (plVar1 = *(longlong **)(param_1[0x1b0] + 0x118), plVar1 == (longlong *)0x0))
  goto LAB_14124163c;
  if ((param_1[0xcd] != 0) &&
     (plVar5 = (longlong *)FUN_142ceeb40(param_1[0xcd],0), plVar5 != (longlong *)0x0)) {
    uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    if (lVar7 != 0) {
      lVar8 = (**(code **)(*plVar5 + 0x668))(plVar5);
      if (lVar8 == 0) {
LAB_1412415e9:
        lVar8 = 0;
      }
      else {
        lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1412415e9;
      }
      FUN_14077d470(lVar7,lVar8);
    }
  }
  lVar7 = ASoundManager::GetPrivateStaticClass();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_140eb1ae0(plVar1,param_1);
  }
LAB_14124163c:
  if (*(char *)((longlong)param_1 + 0x959) != '\0') {
    FUN_141217b40(param_1);
  }
  cVar3 = FUN_142dafb10(param_1 + 0x1ed,&DAT_1468770b0);
  if (cVar3 != '\0') {
    cVar3 = FUN_1407c3030(param_1 + 0x1ed);
    FUN_142dbb5d0(param_1 + 0x1ed,&DAT_1468770b0);
    cVar4 = FUN_1407c3030(param_1 + 0x1ed);
    if (cVar3 != cVar4) {
      (**(code **)(*param_1 + 0x310))(param_1,0);
    }
  }
  FUN_141219210(param_1,&DAT_1468770b8);
  return;
}



// FUNCTION 1412416d0 FUN_1412416d0 body=100 status=ok
// SIG undefined FUN_1412416d0(void)

void FUN_1412416d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar1 == '\0') &&
     (lVar2 = (**(code **)(*param_3 + 0x690))(param_3), lVar2 != *(longlong *)(param_1 + 0x6f8))) {
    if (((longlong *)param_3[0x23] != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*(longlong *)param_3[0x23] + 0x690))(),
       lVar2 == *(longlong *)(param_1 + 0x6f8))) {
      return;
    }
    FUN_1412174d0(param_1);
  }
  return;
}



// FUNCTION 141241740 FUN_141241740 body=131 status=ok
// SIG undefined FUN_141241740(void)

void FUN_141241740(longlong param_1)

{
  char cVar1;
  
  if (((((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x698) != 0)) &&
       (*(char *)(param_1 + 0xe89) == '\0')) &&
      ((*(char *)(param_1 + 0xebc) == '\0' && (*(longlong *)(param_1 + 0x668) != 0)))) &&
     ((cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418), cVar1 == '\x02' ||
      (((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')) && (cVar1 == '\x02')))))) {
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_1430dda50();
    }
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_1430db8a0();
      return;
    }
  }
  return;
}



// FUNCTION 1412417d0 FUN_1412417d0 body=146 status=ok
// SIG undefined FUN_1412417d0(void)

void FUN_1412417d0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0xbd9) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x668) + 0x418) == '\x02')) {
    *(undefined1 *)(param_1 + 0xbd9) = 1;
    if ((param_2 == '\0') || (*(longlong *)(param_1 + 0x6c8) == 0)) {
      if (*(longlong *)(param_1 + 0x698) != 0) {
        FUN_140968540(*(longlong *)(param_1 + 0x698),1);
      }
    }
    else {
      FUN_1430dc0b0(*(longlong *)(param_1 + 0x6c8),1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9d8,0);
    FUN_14148f370(param_1);
    if (*(byte *)(param_1 + 0x128) < 3) {
      FUN_14148f870(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 141241870 FUN_141241870 body=129 status=ok
// SIG undefined FUN_141241870(void)

void FUN_141241870(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
  plVar1 = plVar3 + *(int *)(param_1 + 3);
  while( true ) {
    if (plVar3 == plVar1) {
      FUN_142d408e0(*param_1,param_2,*(undefined4 *)(param_1 + 1),1,0);
      iVar2 = *(int *)(param_1 + 3);
      *(int *)(param_1 + 3) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
      }
      *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = param_2;
      return;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  return;
}



// FUNCTION 141241900 FUN_141241900 body=335 status=ok
// SIG undefined FUN_141241900(void)

void FUN_141241900(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  iVar3 = (int)param_2[1];
  plVar1 = param_1 + 0x172;
  uVar2 = *(undefined4 *)(lVar4 + 0x790);
  if (iVar3 == 0) {
    if ((char)param_1[0x175] != '\0') {
      FUN_14148fb90(param_1);
    }
    *(undefined4 *)(param_1 + 0x173) = 0;
    if (*(int *)((longlong)param_1 + 0xb9c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    fVar5 = -1.0;
    *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x175) = 0;
  }
  else {
    if (plVar1 != param_2) {
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0x173) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xb9c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xb9c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar3 << 3);
      }
    }
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    local_res8[0] = 0;
    FUN_141202a70(*plVar1,(longlong)(int)param_1[0x173],0,local_res8);
    fVar5 = *(float *)(*plVar1 + -4 + (longlong)(int)param_1[0x173] * 8) +
            *(float *)(*plVar1 + -8 + (longlong)(int)param_1[0x173] * 8);
  }
  *(float *)((longlong)param_1 + 0xba4) = fVar5;
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141241a60 FUN_141241a60 body=48 status=ok
// SIG undefined FUN_141241a60(void)

void FUN_141241a60(longlong param_1)

{
  if (((*(char *)(param_1 + 0xe88) == '\0') && (*(longlong *)(param_1 + 0x6b0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x668) + 0x418) == '\x02')) {
    thunk_FUN_1430cc8e0(*(longlong *)(param_1 + 0x6b0),1);
    return;
  }
  return;
}



// FUNCTION 141241a90 FUN_141241a90 body=193 status=ok
// SIG undefined FUN_141241a90(void)

void FUN_141241a90(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  (**(code **)(*(longlong *)(param_1 + 0x580) + 0x20))(param_1 + 0x580,0,param_2);
  plVar5 = *(longlong **)(param_1 + 0xbc8);
  plVar1 = plVar5 + *(int *)(param_1 + 0xbd0);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) &&
       (((lVar4 = FUN_141220cb0(param_1), lVar4 == 0 ||
         (cVar2 = FUN_142cf39b0(lVar4,1), cVar2 == '\0')) && (*(longlong *)(param_1 + 0x6d0) != 0)))
       ) {
      lVar4 = *(longlong *)(param_1 + 0x580);
      uVar3 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0),*plVar5);
      (**(code **)(lVar4 + 0x20))(param_1 + 0x580,uVar3,param_2);
    }
  }
  return;
}



// FUNCTION 141241b60 FUN_141241b60 body=60 status=ok
// SIG undefined FUN_141241b60(void)

undefined8 FUN_141241b60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1412287c0(param_1,1);
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xe21) = 1;
    (**(code **)(*(longlong *)(param_1 + 0x580) + 0x20))((longlong *)(param_1 + 0x580),1,0);
    return 1;
  }
  return 0;
}



// FUNCTION 141241ba0 FUN_141241ba0 body=217 status=ok
// SIG undefined FUN_141241ba0(void)

void FUN_141241ba0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1412287c0(param_1,1);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x580);
      uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0),0);
      (**(code **)(lVar3 + 0x20))(param_1 + 0x580,uVar2,1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe21) = 1;
    (**(code **)(*(longlong *)(param_1 + 0x580) + 0x20))((longlong *)(param_1 + 0x580),1,0);
  }
  plVar4 = *(longlong **)(param_1 + 3000);
  plVar1 = plVar4 + *(int *)(param_1 + 0xbc0);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if ((*plVar4 != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x580);
      uVar2 = FUN_141270f70();
      (**(code **)(lVar3 + 0x20))(param_1 + 0x580,uVar2,0);
    }
  }
  return;
}



// FUNCTION 141241c80 FUN_141241c80 body=79 status=ok
// SIG undefined FUN_141241c80(void)

void FUN_141241c80(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x580);
    uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0));
    (**(code **)(lVar1 + 0x20))((longlong *)(param_1 + 0x580),uVar2,param_3);
  }
  return;
}



// FUNCTION 141241cd0 FUN_141241cd0 body=110 status=ok
// SIG undefined FUN_141241cd0(void)

void FUN_141241cd0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return;
  }
  if (((*(longlong *)(param_1 + 0xe8) == 0) ||
      (cVar1 = FUN_142cf39b0(*(longlong *)(param_1 + 0xe8),0), cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x658) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x8a0) = 1;
  FUN_1412805c0(*(undefined8 *)(param_1 + 0x150),param_2,param_3);
  return;
}



// FUNCTION 141241d40 FUN_141241d40 body=65 status=ok
// SIG undefined FUN_141241d40(void)

void FUN_141241d40(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x6d0) != 0) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = FUN_142cf39b0(*(longlong *)(param_1 + 0x668),0);
    if (cVar1 != '\0') {
      FUN_141280660(*(undefined8 *)(param_1 + 0x6d0));
      return;
    }
  }
  return;
}



// FUNCTION 141241dd0 FUN_141241dd0 body=130 status=ok
// SIG undefined FUN_141241dd0(void)

void FUN_141241dd0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xbd9) != '\0') {
    *(undefined1 *)(param_1 + 0xbd9) = 0;
    if ((param_2 == '\0') || (*(longlong *)(param_1 + 0x6c8) == 0)) {
      if (*(longlong *)(param_1 + 0x698) != 0) {
        FUN_140968540(*(longlong *)(param_1 + 0x698),0);
      }
    }
    else {
      FUN_1430dc0b0(*(longlong *)(param_1 + 0x6c8),0);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9e8,0);
    FUN_14148f3b0(param_1);
    if (*(byte *)(param_1 + 0x128) < 3) {
      FUN_14148f8b0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 141241e90 FUN_141241e90 body=17 status=ok
// SIG undefined FUN_141241e90(void)

void FUN_141241e90(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x690);
  if (lVar1 != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x438);
    plVar5 = plVar4 + (longlong)*(int *)(lVar1 + 0x440) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if ((*(char *)(*plVar4 + 0x38) == param_2) &&
         ((lVar2 = *(longlong *)(*plVar4 + 0x48), lVar2 == 0 ||
          (cVar3 = FUN_142c48f60(lVar2,*(undefined8 *)(lVar1 + 0x188),0), cVar3 != '\0')))) {
        (**(code **)(*(longlong *)*plVar4 + 0x288))((longlong *)*plVar4,lVar1);
      }
    }
    return;
  }
  return;
}



// FUNCTION 141241eb0 FUN_141241eb0 body=536 status=ok
// SIG undefined FUN_141241eb0(void)

void FUN_141241eb0(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  byte bVar14;
  
  if (param_2 != 0) {
    plVar12 = *(longlong **)(param_1 + 0x6e0);
    plVar6 = plVar12 + *(int *)(param_1 + 0x6e8);
    for (; plVar12 != plVar6; plVar12 = plVar12 + 1) {
      lVar5 = *plVar12;
      if (((lVar5 != 0) && (lVar3 = FUN_142ceeb40(lVar5,1), lVar3 != 0)) &&
         (plVar4 = (longlong *)FUN_142ceefb0(lVar5,lVar3), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1429e18b0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           ((param_3 == '\0' || (cVar2 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar2 != '\0')))) {
          FUN_142d49f50(param_2,plVar4);
        }
      }
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x6f8);
    if (*(int *)(param_1 + 0x6f8) != 0) {
      uVar9 = 0;
      iVar8 = 0;
      uVar13 = uVar9;
      if ((**(longlong **)(param_1 + 0x6f0) == param_2) &&
         (*(char *)((longlong)*(longlong **)(param_1 + 0x6f0) + 0xc) == param_3)) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      do {
        iVar10 = (int)uVar9;
        uVar13 = uVar13 + 1;
        uVar9 = (ulonglong)(iVar10 + 1);
        if ((longlong)uVar13 < lVar5) {
          plVar6 = (longlong *)(uVar13 * 0x20 + *(longlong *)(param_1 + 0x6f0));
          do {
            if ((*plVar6 == param_2) && (*(char *)((longlong)plVar6 + 0xc) == param_3)) {
              bVar7 = 0;
            }
            else {
              bVar7 = 1;
            }
            if (bVar14 != bVar7) break;
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar13 = uVar13 + 1;
            plVar6 = plVar6 + 4;
          } while ((longlong)uVar13 < lVar5);
        }
        iVar11 = (int)uVar9 - iVar10;
        if (bVar14 == 0) {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            FUN_1412094e0();
          }
        }
        else {
          if (iVar8 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x6f0)),
                       (void *)((longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0x6f0)),
                       (longlong)iVar11 << 5);
          }
          iVar8 = iVar8 + iVar11;
        }
        bVar14 = bVar14 ^ 1;
      } while ((longlong)uVar13 < lVar5);
      *(int *)(param_1 + 0x6f8) = iVar8;
    }
  }
  return;
}



// FUNCTION 1412420d0 FUN_1412420d0 body=71 status=ok
// SIG undefined FUN_1412420d0(void)

void FUN_1412420d0(longlong param_1)

{
  if (*(char *)(param_1 + 0xba8) != '\0') {
    FUN_14148fb90();
  }
  *(undefined4 *)(param_1 + 0xb98) = 0;
  if (*(int *)(param_1 + 0xb9c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb90,0);
  }
  *(undefined4 *)(param_1 + 0xba0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xba4) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xba8) = 0;
  return;
}



// FUNCTION 141242130 FUN_141242130 body=29 status=ok
// SIG undefined FUN_141242130(void)

void FUN_141242130(longlong param_1)

{
  if ((*(char *)(param_1 + 0xe88) == '\0') && (*(longlong *)(param_1 + 0x6b0) != 0)) {
    thunk_FUN_1430cc8e0(*(longlong *)(param_1 + 0x6b0),0);
    return;
  }
  return;
}



// FUNCTION 141242150 FUN_141242150 body=391 status=ok
// SIG undefined FUN_141242150(void)

void FUN_141242150(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x6f8))) {
    puVar10 = *(undefined8 **)(param_1 + 0x6f0);
    puVar3 = puVar10 + (longlong)*(int *)(param_1 + 0x6f8) * 4;
    for (; puVar10 != puVar3; puVar10 = puVar10 + 4) {
      if (*(char *)((longlong)puVar10 + 0xc) == '\0') {
LAB_1412421e1:
        if (*(char *)(param_1 + 0x128) == '\x03') {
LAB_1412421ee:
          iVar1 = *(int *)(puVar10 + 3);
          lVar4 = (longlong)iVar1;
          if (iVar1 != 0) {
            iVar9 = 0;
            lVar6 = 0;
            bVar11 = *(longlong **)puVar10[2] != param_2;
            iVar7 = 0;
            do {
              lVar6 = lVar6 + 1;
              iVar8 = iVar7 + 1;
              if (lVar6 < lVar4) {
                puVar5 = (undefined8 *)(puVar10[2] + lVar6 * 8);
                do {
                  if (bVar11 != ((longlong *)*puVar5 != param_2)) break;
                  iVar8 = iVar8 + 1;
                  lVar6 = lVar6 + 1;
                  puVar5 = puVar5 + 1;
                } while (lVar6 < lVar4);
              }
              if (bVar11 != false) {
                if (iVar9 != iVar7) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(puVar10[2] + (longlong)iVar9 * 8),
                             (void *)(puVar10[2] + (longlong)iVar7 * 8),
                             (longlong)(iVar8 - iVar7) << 3);
                }
                iVar9 = iVar9 + (iVar8 - iVar7);
              }
              bVar11 = (bool)(bVar11 ^ 1);
              iVar7 = iVar8;
            } while (lVar6 < lVar4);
            *(int *)(puVar10 + 3) = iVar9;
            if (iVar1 != iVar9) {
              FUN_142d49f50(*puVar10,param_2);
            }
          }
        }
      }
      else {
        cVar2 = (**(code **)(*param_2 + 0x768))(param_2);
        if (cVar2 != '\0') goto LAB_1412421ee;
        if (*(char *)((longlong)puVar10 + 0xc) == '\0') goto LAB_1412421e1;
      }
    }
  }
  return;
}



// FUNCTION 1412422f0 FUN_1412422f0 body=52 status=ok
// SIG undefined FUN_1412422f0(void)

void FUN_1412422f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    uVar1 = FUN_141270f70();
    FUN_141280ef0(*(undefined8 *)(param_1 + 0x6d0),uVar1);
    return;
  }
  return;
}



// FUNCTION 141242330 FUN_141242330 body=193 status=ok
// SIG undefined FUN_141242330(void)

void FUN_141242330(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  (**(code **)(*(longlong *)(param_1 + 0x580) + 0x28))(param_1 + 0x580,0,param_2);
  plVar5 = *(longlong **)(param_1 + 0xbc8);
  plVar1 = plVar5 + *(int *)(param_1 + 0xbd0);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) &&
       (((lVar4 = FUN_141220cb0(param_1), lVar4 == 0 ||
         (cVar2 = FUN_142cf39b0(lVar4,1), cVar2 == '\0')) && (*(longlong *)(param_1 + 0x6d0) != 0)))
       ) {
      lVar4 = *(longlong *)(param_1 + 0x580);
      uVar3 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0),*plVar5);
      (**(code **)(lVar4 + 0x28))(param_1 + 0x580,uVar3,param_2);
    }
  }
  return;
}



// FUNCTION 141242400 FUN_141242400 body=66 status=ok
// SIG undefined FUN_141242400(void)

void FUN_141242400(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1412287c0(param_1,*(char *)(param_1 + 0xe21) == '\0');
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xe21) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141242438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x580) + 0x28))((longlong *)(param_1 + 0x580),1,0);
    return;
  }
  return;
}



// FUNCTION 141242450 FUN_141242450 body=228 status=ok
// SIG undefined FUN_141242450(void)

void FUN_141242450(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1412287c0(param_1,*(char *)(param_1 + 0xe21) == '\0');
  if (lVar3 != 0) {
    *(undefined1 *)(param_1 + 0xe21) = 0;
    (**(code **)(*(longlong *)(param_1 + 0x580) + 0x28))((longlong *)(param_1 + 0x580),1,0);
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x580);
    uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0),0);
    (**(code **)(lVar3 + 0x28))(param_1 + 0x580,uVar2,1);
  }
  plVar4 = *(longlong **)(param_1 + 3000);
  plVar1 = plVar4 + *(int *)(param_1 + 0xbc0);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if ((*plVar4 != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x580);
      uVar2 = FUN_141270f70();
      (**(code **)(lVar3 + 0x28))(param_1 + 0x580,uVar2,0);
    }
  }
  return;
}



// FUNCTION 141242540 FUN_141242540 body=79 status=ok
// SIG undefined FUN_141242540(void)

void FUN_141242540(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x580);
    uVar2 = FUN_141270f70(*(longlong *)(param_1 + 0x6d0));
    (**(code **)(lVar1 + 0x28))((longlong *)(param_1 + 0x580),uVar2,param_3);
  }
  return;
}



// FUNCTION 1412425b0 FUN_1412425b0 body=17 status=ok
// SIG undefined FUN_1412425b0(void)

void FUN_1412425b0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStackX_8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
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



// FUNCTION 1412425d0 FUN_1412425d0 body=69 status=ok
// SIG undefined FUN_1412425d0(void)

undefined8 FUN_1412425d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_14148fbd0(param_1 + -0x628,&local_18,&local_28);
  return 1;
}



// FUNCTION 141242620 FUN_141242620 body=225 status=ok
// SIG undefined FUN_141242620(void)

undefined8 FUN_141242620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x498) != 0)) {
    if ((*(longlong *)(param_2 + 0x990) != 0) &&
       ((*(longlong *)(*(longlong *)(param_2 + 0x990) + 0x10e0) == 0 ||
        (cVar2 = FUN_140adac80(), cVar2 == '\0')))) {
      iVar3 = *(int *)(param_1 + 0x6e8);
      iVar4 = 0;
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          if ((((-1 < lVar5) && (iVar4 < iVar3)) &&
              (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + lVar5 * 8), lVar1 != 0)) &&
             ((cVar2 = FUN_142cf39b0(lVar1,0), cVar2 == '\0' &&
              (cVar2 = FUN_142deec10(lVar1), cVar2 == '\0')))) {
            FUN_142ce1dc0(lVar1,*(undefined8 *)(param_2 + 0x498),1);
            *(undefined1 *)(param_1 + 0x12e8) = 1;
            FUN_140ec3170();
            return 1;
          }
          iVar3 = *(int *)(param_1 + 0x6e8);
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
        } while (iVar4 < iVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 141242710 FUN_141242710 body=595 status=ok
// SIG undefined FUN_141242710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141242710(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xe24) = *param_2;
  lVar3 = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xe2c) = uVar1;
  lVar5 = param_3[1];
  param_1[0x1c6] = lVar3;
  *(int *)(param_1 + 0x1c7) = (int)lVar5;
  FUN_141214880();
  FUN_141217fe0(param_1);
  FUN_14123df40(param_1,1);
  local_b0 = FUN_141218380;
  local_b8 = 0;
  uStack_a8 = 0;
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  lVar3 = param_1[0x131];
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_b0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_b0._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_a8;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_a4;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_c0 = 0xbf800000;
  local_c8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,&local_b8,&local_98,(int)lVar3);
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  cVar2 = FUN_1407c3030(param_1 + 0x215);
  FUN_142dafbc0(param_1 + 0x215,&DAT_1468770e8);
  if ((cVar2 == '\0') && (plVar4 = (longlong *)param_1[0x9a], plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x5b8))(plVar4,0);
  }
  return;
}



// FUNCTION 141242970 FUN_141242970 body=480 status=ok
// SIG undefined FUN_141242970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141242970(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  lVar2 = *(longlong *)(param_1 + 0xd80);
  if ((lVar2 != 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
      local_48 = *(float *)(lVar2 + 0x220);
      fStack_44 = *(float *)(lVar2 + 0x224);
      fStack_40 = *(float *)(lVar2 + 0x228);
      uStack_3c = *(undefined4 *)(lVar2 + 0x22c);
      local_58 = *(undefined8 *)(lVar2 + 0x210);
      fStack_50 = *(float *)(lVar2 + 0x218);
      uStack_4c = *(undefined4 *)(lVar2 + 0x21c);
      FQuat::Rotator(&local_58,&local_88);
      FRotator::Vector(&local_88,&local_68);
      fVar5 = fStack_40;
      fVar4 = fStack_44;
      fVar3 = local_48;
      lVar2 = *(longlong *)(param_1 + 0x168);
      if (lVar2 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar2 + 0x220);
        local_70 = *(float *)(lVar2 + 0x228);
      }
      if (((float)((ulonglong)local_78 >> 0x20) - fStack_44) * local_64 +
          ((float)local_78 - local_48) * local_68 + (local_70 - fStack_40) * local_60 <= 0.0) {
        pfVar8 = (float *)FRotator::RotateVector(&local_88,&local_48,param_1 + 0xe3c);
        local_78 = local_88;
        fStack_50 = fVar5 + pfVar8[2];
        local_70 = (float)local_80;
        local_58 = CONCAT44(fVar4 + pfVar8[1],fVar3 + *pfVar8);
        fStack_40 = fStack_50;
        FUN_14148fbd0(param_1,&local_58,&local_78);
      }
    }
  }
  return;
}



// FUNCTION 141242b50 FUN_141242b50 body=1007 status=ok
// SIG undefined FUN_141242b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141242b50(longlong param_1,float param_2)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x168);
    if (lVar9 == 0) {
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar11 = _DAT_146876b50 & _DAT_146876b60;
      uVar12 = uRam0000000146876b54 & uRam0000000146876b64;
      uVar13 = uRam0000000146876b58 & uRam0000000146876b68;
      uVar14 = uRam0000000146876b5c & uRam0000000146876b6c;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = uRam0000000146876b5c;
    }
    else {
      uVar15 = *(undefined4 *)(lVar9 + 0x210);
      uVar16 = *(undefined4 *)(lVar9 + 0x214);
      uVar17 = *(undefined4 *)(lVar9 + 0x218);
      uVar19 = *(undefined4 *)(lVar9 + 0x220);
      uVar20 = *(undefined4 *)(lVar9 + 0x224);
      uVar21 = *(undefined4 *)(lVar9 + 0x228);
      uVar22 = *(undefined4 *)(lVar9 + 0x22c);
      uVar11 = *(uint *)(lVar9 + 0x230);
      uVar12 = *(uint *)(lVar9 + 0x234);
      uVar13 = *(uint *)(lVar9 + 0x238);
      uVar14 = *(uint *)(lVar9 + 0x23c);
      uVar18 = *(uint *)(lVar9 + 0x21c);
    }
    *(undefined4 *)(param_1 + 0x710) = uVar15;
    *(undefined4 *)(param_1 + 0x714) = uVar16;
    *(undefined4 *)(param_1 + 0x718) = uVar17;
    *(uint *)(param_1 + 0x71c) = uVar18;
    *(undefined4 *)(param_1 + 0x720) = uVar19;
    *(undefined4 *)(param_1 + 0x724) = uVar20;
    *(undefined4 *)(param_1 + 0x728) = uVar21;
    *(undefined4 *)(param_1 + 0x72c) = uVar22;
    *(uint *)(param_1 + 0x730) = uVar11;
    *(uint *)(param_1 + 0x734) = uVar12;
    *(uint *)(param_1 + 0x738) = uVar13;
    *(uint *)(param_1 + 0x73c) = uVar14;
  }
  iVar2 = *(int *)(param_1 + 0x664);
  lVar9 = 0;
  lVar8 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar8 = param_1 + 0x5c8;
  }
  pcVar3 = *(code **)(lVar8 + (longlong)iVar2 * 8);
  iVar5 = iVar2;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,param_2);
    iVar5 = *(int *)(param_1 + 0x664);
  }
  if (iVar5 != iVar2) {
    *(undefined4 *)(param_1 + 0x668) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x528);
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar23 = 0.0;
  if ((lVar8 != 0) && (plVar4 = *(longlong **)(param_1 + 0x6f8), plVar4 != (longlong *)0x0)) {
    if (iVar5 == 4) {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x308))(plVar4,local_78);
      lVar8 = *(longlong *)(param_1 + 0x528);
    }
    else {
      local_80 = (float)DAT_1468b5d98;
      puVar6 = &local_88;
      local_88 = _DAT_1468b5d90;
    }
    uVar1 = *puVar6;
    local_90 = *(float *)(puVar6 + 1);
    fVar23 = *(float *)(param_1 + 0x6a0);
    fVar10 = *(float *)(param_1 + 0x6a8);
    *(undefined8 *)(param_1 + 0x6a0) = uVar1;
    fVar24 = 1.0 - param_2;
    local_98._0_4_ = (float)uVar1;
    local_98._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    *(float *)(param_1 + 0x6a8) = local_90;
    local_80 = (local_90 - fVar10) * param_2 + fVar24 * *(float *)(param_1 + 0x6b4);
    *(ulonglong *)(param_1 + 0x6ac) =
         CONCAT44((local_98._4_4_ - *(float *)(param_1 + 0x6a4)) * param_2 +
                  fVar24 * *(float *)(param_1 + 0x6b0),
                  ((float)local_98 - fVar23) * param_2 + fVar24 * *(float *)(param_1 + 0x6ac));
    *(float *)(param_1 + 0x6b4) = local_80;
    fVar24 = SQRT(*(float *)(param_1 + 0x6ac) * *(float *)(param_1 + 0x6ac) +
                  *(float *)(param_1 + 0x6b0) * *(float *)(param_1 + 0x6b0) +
                  *(float *)(param_1 + 0x6b4) * *(float *)(param_1 + 0x6b4));
    local_98 = uVar1;
    fVar10 = (float)UCurveFloat::GetFloatValue(lVar8,fVar24);
    fVar23 = 0.0;
    if ((0.0 < fVar24) && (0.0 < fVar10)) {
      fVar23 = -1.0 / (fVar24 / fVar10);
      fVar25 = fVar23 * *(float *)(param_1 + 0x6ac);
      fVar26 = fVar23 * *(float *)(param_1 + 0x6b0);
      fVar23 = fVar23 * *(float *)(param_1 + 0x6b4);
    }
  }
  FUN_1412244d0(param_1,&local_98,param_2);
  local_88 = *(undefined8 *)(param_1 + 0x6d4);
  local_80 = *(float *)(param_1 + 0x6dc);
  local_90 = *(float *)(param_1 + 0x728) + local_90 + *(float *)(param_1 + 0x6d0) + fVar23;
  local_98 = CONCAT44(*(float *)(param_1 + 0x724) + local_98._4_4_ + *(float *)(param_1 + 0x6cc) +
                      fVar26,*(float *)(param_1 + 0x720) + (float)local_98 +
                             *(float *)(param_1 + 0x6c8) + fVar25);
  local_70 = local_90;
  FUN_14223ca30(param_1,&local_98,&local_88,0,0,0);
  if ((((*(longlong *)(param_1 + 0x6f8) != 0) && (*(int *)(param_1 + 0x664) != 6)) &&
      (*(int *)(param_1 + 0x664) != 1)) &&
     (param_2 = *(float *)(param_1 + 0x68c) - param_2, *(float *)(param_1 + 0x68c) = param_2,
     param_2 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x68c) = 0x3f000000;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x518);
    lVar7 = lVar9;
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar8 + 0x180);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x578) + 0x180) != lVar7) {
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x180);
      }
      FUN_142df2ca0(*(longlong *)(param_1 + 0x578),lVar9);
    }
  }
  return;
}



// FUNCTION 141242f40 FUN_141242f40 body=128 status=ok
// SIG undefined FUN_141242f40(void)

void FUN_141242f40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_141242b50();
  if (((1 < *(int *)((longlong)param_1 + 0x664) - 1U) && ((char)param_1[0x25] == '\x03')) &&
     ((int)param_1[0x10a] == -1)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(float *)((longlong)param_1 + 0x854) <= *(float *)(lVar2 + 0x790) &&
        *(float *)(lVar2 + 0x790) != *(float *)((longlong)param_1 + 0x854)) {
      iVar1 = FUN_142d369f0(param_1 + 0xf1,param_1[0x23],param_1 + 0x108);
      *(int *)(param_1 + 0x10a) = iVar1;
      if (iVar1 == -1) {
        param_1[0xde] = 0;
      }
    }
  }
  return;
}



// FUNCTION 141242fc0 FUN_141242fc0 body=6338 status=ok
// SIG undefined FUN_141242fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141242fc0(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  float local_res8;
  undefined1 local_resc;
  float local_res18 [2];
  float local_res20;
  longlong local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  int local_148 [2];
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float local_128;
  longlong local_118;
  float fStack_110;
  float fStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_d8;
  longlong lStack_d0;
  
  lVar10 = (**(code **)(*param_1 + 0x148))();
  if (lVar10 == 0) {
    return;
  }
  uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = UWorld::GetGameState<APVPGameState>(uVar11);
  if (lVar10 == 0) {
    return;
  }
  if (*(char *)(lVar10 + 0x638) == '\0') {
    return;
  }
  uVar21 = 0;
  iVar9 = 0;
  if ((char)param_1[0x25] == '\x01') {
    plVar13 = (longlong *)param_1[0xdc];
    uVar23 = (longlong)(int)param_1[0xdd] & 0x1fffffffffffffff;
    if (plVar13 + (int)param_1[0xdd] < plVar13) {
      uVar23 = uVar21;
    }
    uVar19 = uVar21;
    if (uVar23 != 0) {
      do {
        if ((((*plVar13 != 0) && (lVar10 = FUN_142ceeb40(*plVar13,1), lVar10 != 0)) &&
            (*(char *)(lVar10 + 0x128) == '\x01')) &&
           ((lVar12 = *(longlong *)(lVar10 + 0x168), lVar12 != 0 &&
            (*(longlong *)(lVar12 + 400) != 0)))) {
          local_108 = *(longlong *)(lVar10 + 0xd8);
          uStack_100 = *(undefined8 *)(lVar10 + 0xe0);
          local_d8 = *(undefined8 *)(lVar10 + 0x108);
          lStack_d0 = *(longlong *)(lVar10 + 0x110);
          local_f8 = *(undefined4 *)(lVar10 + 0xe8);
          uStack_f4 = *(undefined4 *)(lVar10 + 0xec);
          uStack_f0 = *(undefined4 *)(lVar10 + 0xf0);
          uVar4 = *(undefined8 *)(lVar10 + 0xec);
          uStack_ec = *(undefined4 *)(lVar10 + 0xf4);
          uVar11 = *(undefined8 *)(lVar10 + 0xf8);
          uVar3 = *(undefined8 *)(lVar10 + 0x100);
          *(undefined8 *)(lVar12 + 0x1ec) = uStack_100;
          *(undefined8 *)(lVar12 + 0x1f8) = uVar11;
          *(undefined4 *)(lVar12 + 500) = local_f8;
          *(undefined8 *)(lVar12 + 0x204) = uVar4;
          *(undefined4 *)(lVar12 + 0x20c) = uStack_ec;
          *(int *)(lVar12 + 0x200) = (int)uVar3;
          lVar10 = lStack_d0;
          if (((lStack_d0 != 0) || (lVar10 = *(longlong *)(local_108 + 0x168), lVar10 != 0)) &&
             (*(longlong *)(lVar12 + 400) != lVar10)) {
            FUN_142382f60(lVar12,lVar10,&DAT_146af29ec,local_d8);
          }
        }
        plVar13 = plVar13 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar23);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xed7) = 0;
  FUN_1422406d0(param_1,param_2);
  fVar27 = *(float *)(param_1 + 0x1e9);
  fVar28 = *(float *)((longlong)param_1 + 0xf4c);
  local_140 = *(float *)(param_1 + 0x1ea);
  fVar29 = fVar27;
  if (fVar27 <= fVar28) {
    fVar29 = fVar28;
  }
  if (fVar29 <= local_140) {
    fVar29 = local_140;
  }
  if ((fVar29 == 3.4028235e+38) || (param_2 == 0.0)) {
    local_140 = 0.0;
    *(undefined8 *)((longlong)param_1 + 0xf54) = 0;
    *(undefined4 *)((longlong)param_1 + 0xf5c) = 0;
    lVar10 = param_1[0x2d];
    if (lVar10 == 0) {
      local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_160 = DAT_1468b5d98;
    }
    else {
      local_168 = *(longlong *)(lVar10 + 0x220);
      local_160 = *(float *)(lVar10 + 0x228);
    }
    param_1[0x1e9] = local_168;
    *(float *)(param_1 + 0x1ea) = local_160;
  }
  else {
    lVar10 = param_1[0x2d];
    if (lVar10 == 0) {
      local_160 = DAT_1468b5d98;
      local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      local_160 = *(float *)(lVar10 + 0x228);
      local_168 = *(longlong *)(lVar10 + 0x220);
    }
    local_140 = local_160 - local_140;
    fVar29 = (float)local_168;
    uVar23 = (ulonglong)local_168 >> 0x20;
    if (lVar10 == 0) {
      local_160 = DAT_1468b5d98;
      local_168 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      local_160 = *(float *)(lVar10 + 0x228);
      local_168 = *(longlong *)(lVar10 + 0x220);
    }
    fVar33 = 1.0 / param_2;
    param_1[0x1e9] = local_168;
    *(float *)(param_1 + 0x1ea) = local_160;
    local_140 = fVar33 * local_140;
    *(ulonglong *)((longlong)param_1 + 0xf54) =
         CONCAT44(fVar33 * ((float)uVar23 - fVar28),fVar33 * (fVar29 - fVar27));
    *(float *)((longlong)param_1 + 0xf5c) = local_140;
  }
  lVar10 = param_1[0x92];
  if (lVar10 == 0) {
LAB_141243405:
    fVar27 = 1.0;
  }
  else {
    lVar12 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if ((!bVar26) || (lVar10 = *(longlong *)(lVar10 + 0x748), lVar10 == 0)) goto LAB_141243405;
    fVar27 = (float)FUN_140a093c0(lVar10);
    fVar28 = (float)FUN_140a093a0(lVar10);
    fVar27 = fVar27 * fVar28 + 1.0;
  }
  *(float *)(param_1 + 0x1ec) = fVar27;
  if ((((param_1[0xd7] != 0) && (cVar5 = FUN_1430dd880(), cVar5 != '\0')) && (param_1[0xd7] != 0))
     && (*(char *)(param_1[0xd7] + 0x1c1) != '\0')) {
    lVar10 = param_1[0xd6];
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x280) == '\0')) {
      if ((((param_1[0xd3] != 0) &&
           ((*(char *)((longlong)param_1 + 0xe89) == '\0' &&
            (*(char *)((longlong)param_1 + 0xebc) == '\0')))) &&
          ((param_1[0xcd] != 0 &&
           ((cVar5 = *(char *)(param_1[0xcd] + 0x418), cVar5 == '\x02' ||
            ((cVar5 != '\0' && ((char)param_1[0x176] != '\0')))))))) ||
         ((char)param_1[0x17b] != '\0')) {
        *(undefined4 *)((longlong)param_1 + 0x9cc) = 0x3f800000;
        FUN_1409689a0(param_1[0xd3],0x3f800000);
      }
    }
    else {
      FUN_1430dbc90(lVar10,0x3f800000);
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x138a) != '\0') {
      uVar11 = FUN_142e27720();
      lVar10 = (**(code **)(*param_1 + 0x628))(param_1,uVar11);
      if (((lVar10 != 0) && (cVar5 = FUN_142c736c0(lVar10,param_1[300]), cVar5 == '\0')) &&
         (cVar5 = FUN_142c736c0(lVar10,param_1[0x12d]), cVar5 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x138a) = 0;
      }
    }
    if ((param_1[0xca] != 0) && (param_1[0x182] != 0)) {
      FUN_142dd6dc0(param_1[0xca],local_148);
      if ((local_148[0] == 0) || (cVar5 = FUN_1407c3030(param_1 + 0x187), cVar5 != '\0')) {
        cVar5 = FUN_140eb27a0(param_1[0xca],0);
        uVar6 = 0;
        if (cVar5 != '\0') goto LAB_141243571;
      }
      else {
LAB_141243571:
        uVar6 = 1;
      }
      *(undefined1 *)((longlong)param_1 + 0x9c9) = uVar6;
    }
  }
  if ((param_1[0xcd] == 0) || (lVar10 = FUN_142ceeb40(param_1[0xcd],0), lVar10 == 0)) {
LAB_1412435d3:
    cVar5 = '\0';
  }
  else {
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (!bVar26) goto LAB_1412435d3;
    cVar5 = FUN_140e1d940(lVar10);
  }
  if (cVar5 != (char)param_1[0x271]) {
    if (cVar5 != '\0') {
      FUN_141215280(param_1,0xfb);
    }
    if (param_1[0xd3] != 0) {
      FUN_140968120(param_1[0xd3],cVar5);
    }
    *(char *)(param_1 + 0x271) = cVar5;
  }
  if ((*(char *)((longlong)param_1 + 0xebc) != '\0') ||
     (*(char *)((longlong)param_1 + 0x9c9) != '\0')) {
    FUN_141215280(param_1,0xfc);
  }
  lVar10 = param_1[200];
  if (lVar10 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    if (*(int *)(lVar10 + 0x680) < 1) {
      plVar13 = (longlong *)&DAT_146866c70;
    }
    else {
      plVar13 = (longlong *)(*(longlong *)(lVar10 + 0x678) + 0x60);
    }
    lVar10 = plVar13[1];
    param_1[0x10b] = *plVar13;
    param_1[0x10c] = lVar10;
    param_1[0x10d] = plVar13[2];
  }
  puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x308))(param_1,local_148);
  lVar10 = param_1[0x2d];
  *(undefined8 *)((longlong)param_1 + 0xbec) = *puVar14;
  uVar30 = *(undefined4 *)(puVar14 + 1);
  *(undefined4 *)((longlong)param_1 + 0xbf4) = uVar30;
  fVar27 = DAT_1468b5da8;
  local_158 = DAT_1468b5da0;
  if (lVar10 != 0) {
    fVar27 = *(float *)(lVar10 + 0x210);
    local_118 = *(longlong *)(lVar10 + 0x210);
    fStack_110 = *(float *)(lVar10 + 0x218);
    fStack_10c = *(float *)(lVar10 + 0x21c);
    auVar34._4_4_ = -(uint)(*(float *)(lVar10 + 0x214) != *(float *)(lVar10 + 0x254));
    auVar34._0_4_ = -(uint)(fVar27 != *(float *)(lVar10 + 0x250));
    auVar34._8_4_ = -(uint)(fStack_110 != *(float *)(lVar10 + 600));
    auVar34._12_4_ = -(uint)(fStack_10c != *(float *)(lVar10 + 0x25c));
    iVar8 = movmskps(uVar30,auVar34);
    if (iVar8 != 0) {
      *(float *)(lVar10 + 0x250) = fVar27;
      *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
      *(float *)(lVar10 + 600) = fStack_110;
      *(float *)(lVar10 + 0x25c) = fStack_10c;
      puVar14 = (undefined8 *)FQuat::Rotator(&local_118,local_148);
      *(undefined8 *)(lVar10 + 0x260) = *puVar14;
      *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar14 + 1);
    }
    fVar27 = *(float *)(lVar10 + 0x268);
    local_158 = *(longlong *)(lVar10 + 0x260);
  }
  local_140 = fVar27 - *(float *)(param_1 + 0x180);
  *(ulonglong *)((longlong)param_1 + 0xc04) =
       CONCAT44((float)((ulonglong)local_158 >> 0x20) - *(float *)((longlong)param_1 + 0xbfc),
                (float)local_158 - *(float *)(param_1 + 0x17f));
  *(float *)((longlong)param_1 + 0xc0c) = local_140;
  param_1[0x17f] = local_158;
  *(float *)(param_1 + 0x180) = fVar27;
  local_res8 = fVar27;
  local_168 = local_158;
  local_160 = fVar27;
  local_150 = fVar27;
  if (param_1[0xd4] != 0) {
    plVar13 = (longlong *)FUN_1430d48d0(param_1[0xd4],local_148);
    param_1[0xf2] = *plVar13;
    *(int *)(param_1 + 0xf3) = (int)plVar13[1];
  }
  if (param_1[0xd3] != 0) {
    fVar29 = (float)ACharacter::GetAnimRootMotionTranslationScale();
    *(undefined4 *)(param_1 + 0xf6) = *(undefined4 *)((longlong)param_1 + 0x784);
    local_res18[0] = fVar29;
    uVar30 = UGeometryCacheComponent::GetStartTimeOffset(param_1[0xd3]);
    *(undefined4 *)((longlong)param_1 + 0x784) = uVar30;
    *(undefined4 *)(param_1 + 0xf1) = *(undefined4 *)(param_1[0xd3] + 0x428);
    fVar33 = (float)FUN_140964620();
    fVar28 = *(float *)(param_1 + 0x10a);
    *(float *)((longlong)param_1 + 0x78c) = fVar33;
    fVar31 = _guard_xfg_dispatch_icall_nop(param_2 * -5.0);
    *(bool *)(param_1 + 0xf0) = *(float *)((longlong)param_1 + 0x784) < 0.0;
    *(float *)(param_1 + 0x10a) = (fVar33 - fVar28) * (1.0 - fVar31) + fVar28;
    *(float *)((longlong)param_1 + 0x784) = ABS(*(float *)((longlong)param_1 + 0x784));
    fVar28 = (float)FUN_140963d50(param_1[0xd3]);
    fVar33 = (float)UDecalComponent::GetFadeInStartDelay(param_1[0xd3]);
    *(undefined2 *)((longlong)param_1 + 0x7ac) = 0;
    *(float *)((longlong)param_1 + 0x79c) = (fVar28 / fVar33) * 100.0;
    *(float *)(param_1 + 0xf5) =
         (float)(int)((*(float *)((longlong)param_1 + 0x784) - *(float *)(param_1 + 0xf6)) / param_2
                     );
    fVar28 = (float)FUN_1409648d0(param_1[0xd3]);
    local_res20 = fVar28;
    fVar33 = (float)FUN_140963e30(param_1[0xd3]);
    if (((((*(float *)(param_1 + 0xe3) < *(float *)((longlong)param_1 + 0x784)) || (fVar33 != 0.0))
         && (cVar5 = FUN_1430d8750(param_1), cVar5 == '\0')) &&
        ((lVar10 = param_1[0xd6], lVar10 == 0 || (*(char *)(lVar10 + 0x280) == '\0')))) &&
       (fVar28 != 0.0)) {
      lVar12 = param_1[0x9a];
      fVar27 = *(float *)(lVar12 + 0x210);
      local_118 = *(longlong *)(lVar12 + 0x210);
      fStack_110 = *(float *)(lVar12 + 0x218);
      fStack_10c = *(float *)(lVar12 + 0x21c);
      auVar32._4_4_ = -(uint)(*(float *)(lVar12 + 0x214) != *(float *)(lVar12 + 0x254));
      auVar32._0_4_ = -(uint)(fVar27 != *(float *)(lVar12 + 0x250));
      auVar32._8_4_ = -(uint)(fStack_110 != *(float *)(lVar12 + 600));
      auVar32._12_4_ = -(uint)(fStack_10c != *(float *)(lVar12 + 0x25c));
      iVar8 = movmskps((int)lVar10,auVar32);
      if (iVar8 != 0) {
        *(float *)(lVar12 + 0x250) = fVar27;
        *(float *)(lVar12 + 0x254) = *(float *)(lVar12 + 0x214);
        *(float *)(lVar12 + 600) = fStack_110;
        *(float *)(lVar12 + 0x25c) = fStack_10c;
        puVar14 = (undefined8 *)FQuat::Rotator(&local_118,local_148);
        *(undefined8 *)(lVar12 + 0x260) = *puVar14;
        *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar14 + 1);
      }
      local_168 = *(longlong *)(lVar12 + 0x260);
      local_160 = *(float *)(lVar12 + 0x268);
      FRotator::Vector(&local_168,&local_158);
      uVar11 = (**(code **)(*(longlong *)param_1[0x9a] + 0x430))
                         ((longlong *)param_1[0x9a],local_148);
      FRotator::Vector(uVar11,&local_138);
      fVar27 = DAT_1468b5d94;
      fVar33 = local_158._4_4_ * local_158._4_4_ + (float)local_158 * (float)local_158;
      fVar28 = (float)local_158;
      fVar29 = local_158._4_4_;
      if ((fVar33 != 1.0) && (fVar28 = DAT_1468b5d90, fVar29 = DAT_1468b5d94, 1e-08 <= fVar33)) {
        auVar34 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        local_128 = auVar34._0_4_;
        local_128 = local_128 + local_128 * (0.5 - fVar33 * 0.5 * local_128 * local_128);
        local_128 = local_128 + local_128 * (0.5 - fVar33 * 0.5 * local_128 * local_128);
        fVar29 = local_128 * local_158._4_4_;
        fVar28 = local_128 * (float)local_158;
      }
      fVar33 = -1.0;
      if ((-1.0 <= fVar28) && (fVar33 = fVar28, 1.0 <= fVar28)) {
        fVar33 = 1.0;
      }
      fVar28 = _guard_xfg_dispatch_icall_nop(fVar33);
      if (fVar29 < 0.0) {
        fVar28 = -fVar28;
      }
      fVar31 = fStack_134 * fStack_134 + local_138 * local_138;
      fVar29 = local_138;
      fVar33 = fStack_134;
      if ((fVar31 != 1.0) && (fVar29 = DAT_1468b5d90, fVar33 = fVar27, 1e-08 <= fVar31)) {
        auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
        local_128 = auVar34._0_4_;
        local_128 = local_128 + local_128 * (0.5 - fVar31 * 0.5 * local_128 * local_128);
        local_128 = local_128 + local_128 * (0.5 - fVar31 * 0.5 * local_128 * local_128);
        fVar29 = local_128 * local_138;
        fVar33 = local_128 * fStack_134;
      }
      if (-1.0 <= fVar29) {
        if (1.0 <= fVar29) {
          fVar29 = 1.0;
        }
      }
      else {
        fVar29 = -1.0;
      }
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar29);
      if (fVar33 < 0.0) {
        fVar27 = -fVar27;
      }
      fVar28 = ABS((fVar28 - fVar27) * 57.295776);
      fVar27 = local_res8;
      fVar29 = local_res18[0];
      if ((local_res20 <= 0.0) || (fVar28 < *(float *)(param_1 + 0xe4))) {
        if ((local_res20 < 0.0) && (*(float *)((longlong)param_1 + 0x71c) <= fVar28)) {
          *(undefined1 *)((longlong)param_1 + 0x7ac) = 1;
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x7ad) = 1;
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7ac) == '\0') &&
       (*(char *)((longlong)param_1 + 0x7ad) == '\0')) {
      *(undefined4 *)(param_1 + 0xeb) = 0;
    }
    else {
      *(float *)(param_1 + 0xeb) = param_2 + *(float *)(param_1 + 0xeb);
    }
    if (param_1[0xe6] != 0) {
      fVar28 = *(float *)((longlong)param_1 + 0x784) / *(float *)(param_1 + 0xe7);
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      fVar28 = (float)UCurveFloat::GetFloatValue(param_1[0xe6],fVar28);
      if ((*(float *)(param_1 + 0xe8) < *(float *)(param_1 + 0xeb)) ||
         (*(char *)(param_1[0xd2] + 0x328) != '\0')) {
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
      if ((fVar29 <= 0.0) || (!bVar26)) {
        fVar33 = *(float *)((longlong)param_1 + 0x75c);
        if (0.0 < fVar33) {
          fVar33 = fVar33 - param_2 * *(float *)((longlong)param_1 + 0x73c);
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          goto LAB_141243d43;
        }
      }
      else {
        fVar33 = param_2 * *(float *)((longlong)param_1 + 0x73c) +
                 *(float *)((longlong)param_1 + 0x75c);
        if (1.0 - fVar28 <= fVar33) {
          fVar33 = 1.0 - fVar28;
        }
LAB_141243d43:
        *(float *)((longlong)param_1 + 0x75c) = fVar33;
      }
      fVar28 = fVar28 + fVar33;
      if (1.0 <= fVar28) {
        fVar28 = 1.0;
      }
      fVar28 = fVar28 * 100.0;
      *(float *)((longlong)param_1 + 0x79c) = fVar28;
      if ((((fVar28 < *(float *)(param_1 + 0xea)) || (fVar28 < *(float *)(param_1 + 0xf4))) ||
          (bVar26)) || ((param_1[0xd7] != 0 && (*(char *)(param_1[0xd7] + 0x1c1) != '\0')))) {
        cVar5 = FUN_1430d8750(param_1);
        if ((cVar5 == '\0') || ((*(char *)((longlong)param_1 + 0x744) != '\0' || (fVar29 <= 0.9))))
        {
          *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)((longlong)param_1 + 0x79c);
        }
        else {
          uVar30 = FMath::FInterpTo();
          *(undefined4 *)(param_1 + 0xf4) = uVar30;
        }
      }
      else {
        uVar30 = FMath::FInterpTo();
        *(undefined4 *)(param_1 + 0xf4) = uVar30;
      }
    }
    if (((*(int *)((longlong)param_1 + 0x7a4) != 0) || (fVar29 != 0.0)) &&
       (5.0 < ABS(*(float *)((longlong)param_1 + 0x784)))) {
      if ((char)param_1[0xf0] == '\0') {
        iVar9 = (int)param_1[0xed];
        uVar23 = uVar21;
        if (0 < iVar9) {
          pfVar15 = (float *)param_1[0xec];
          do {
            if (*(float *)(param_1 + 0xf4) * 0.01 < *pfVar15 ||
                *(float *)(param_1 + 0xf4) * 0.01 == *pfVar15) break;
            uVar25 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar25;
            pfVar15 = pfVar15 + 1;
          } while ((int)uVar25 < (int)param_1[0xed]);
        }
        if ((int)uVar23 + 1 <= iVar9 + 1) {
          iVar9 = (int)uVar23;
        }
        iVar9 = iVar9 + 1;
      }
      else {
        iVar9 = -1;
      }
    }
    cVar5 = FUN_1430d8750(param_1);
    if ((cVar5 == '\0') && (*(float *)((longlong)param_1 + 0x75c) == 0.0)) {
      iVar8 = *(int *)((longlong)param_1 + 0x7a4);
      if (iVar8 < iVar9) {
        local_res8 = (float)(iVar8 + 1);
        local_resc = 1;
        *(float *)((longlong)param_1 + 0x7a4) = local_res8;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0xee,&local_res8);
      }
      else {
        if (iVar8 <= iVar9) goto LAB_141243f48;
        local_resc = 0;
        local_res8 = -NAN;
        if ((char)param_1[0xf0] == '\0') {
          local_res8 = (float)(iVar8 + -1);
        }
        *(float *)((longlong)param_1 + 0x7a4) = local_res8;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0xee,&local_res8);
      }
      FUN_14148f530(param_1,*(undefined4 *)((longlong)param_1 + 0x7a4));
    }
LAB_141243f48:
    lVar10 = param_1[0xd4];
    if ((ABS(fVar27) <= *(float *)(lVar10 + 0xc98)) ||
       (*(char *)((longlong)param_1 + 0x781) != '\0')) {
      if ((ABS(fVar27) < *(float *)(lVar10 + 0xc98)) &&
         (*(char *)((longlong)param_1 + 0x781) != '\0')) {
        FUN_1430e27d0(lVar10,0);
        *(undefined1 *)((longlong)param_1 + 0x781) = 0;
      }
    }
    else {
      FUN_1430e27d0(lVar10,1);
      *(undefined1 *)((longlong)param_1 + 0x781) = 1;
    }
  }
  cVar5 = FUN_14122a750(param_1,1);
  local_res8 = (float)CONCAT31(local_res8._1_3_,cVar5);
  if ((*(char *)((longlong)param_1 + 0xed5) != '\0') && (cVar5 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0xed5) = 0;
  }
  if ((char)param_1[0x25] != '\x03') goto LAB_1412443de;
  if (cVar5 == '\0') {
    if (10.0 < *(float *)(param_1 + 0x28)) {
      FUN_14223eb20(param_1);
    }
  }
  else if (*(float *)(param_1 + 0x28) < 100.0) {
    FUN_14223eb20(param_1,0x42c80000);
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  plVar13 = param_1 + 0x10b;
  cVar7 = FUN_142d52a00(plVar13);
  if (cVar7 != '\0') {
    uVar11 = FUN_142d52a20(plVar13);
    uVar11 = FArchive::operator<<(uVar11);
    cVar7 = FUN_142d639f0(uVar11,0);
    if ((cVar7 == '\0') && ((char)param_1[0x10e] != '\x03')) {
      cVar5 = '\0';
      uVar11 = FUN_142d52a20(plVar13);
      lVar10 = FArchive::operator<<(uVar11);
      if (1e-08 < *(float *)(lVar10 + 0x20)) {
        uVar11 = FUN_142d52a20(plVar13);
        lVar10 = FArchive::operator<<(uVar11);
        uVar30 = *(undefined4 *)(lVar10 + 0x14);
        uVar11 = FUN_142d52a20(plVar13);
        lVar10 = FArchive::operator<<(uVar11);
        fVar27 = *(float *)(lVar10 + 0x20);
        fVar28 = (float)FUN_142d5fee0(plVar13,uVar30);
        fVar28 = fVar28 / fVar27;
        if (*(float *)(param_1 + 0x10f) <= fVar28) {
          if (fVar28 < *(float *)((longlong)param_1 + 0x874)) {
            cVar5 = '\x01';
          }
        }
        else {
          cVar5 = '\x02';
        }
      }
      if (cVar5 != (char)param_1[0x10e]) {
        *(char *)(param_1 + 0x10e) = cVar5;
        (**(code **)(param_1[0xb1] + 0x48))();
      }
      cVar5 = local_res8._0_1_;
    }
  }
  if (*(char *)((longlong)param_1 + 0xbda) == '\0') {
    if (625.0 <= *(float *)((longlong)param_1 + 0xf54) * *(float *)((longlong)param_1 + 0xf54) +
                 *(float *)(param_1 + 0x1eb) * *(float *)(param_1 + 0x1eb) +
                 *(float *)((longlong)param_1 + 0xf5c) * *(float *)((longlong)param_1 + 0xf5c))
    goto LAB_1412443de;
    if (param_1[0x2d] == 0) {
      local_160 = DAT_1464aa7a0;
      plVar13 = &local_168;
      local_168 = DAT_1464aa798;
    }
    else {
      plVar13 = (longlong *)FUN_14238db80(param_1[0x2d],local_148);
    }
    local_158 = *plVar13;
    local_150 = *(float *)(plVar13 + 1);
    if (*(float *)((longlong)param_1 + 0xa7c) <= local_150) goto LAB_1412443de;
    *(undefined1 *)((longlong)param_1 + 0xbda) = 1;
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)((longlong)param_1 + 0xbdc) = *(undefined4 *)(lVar10 + 0x790);
    plVar13 = param_1 + 0x153;
  }
  else {
    if (param_1[0x2d] == 0) {
      local_160 = DAT_1464aa7a0;
      plVar13 = &local_168;
      local_168 = DAT_1464aa798;
    }
    else {
      plVar13 = (longlong *)FUN_14238db80(param_1[0x2d],local_148);
    }
    local_158 = *plVar13;
    local_150 = *(float *)(plVar13 + 1);
    if (local_150 < *(float *)((longlong)param_1 + 0xa7c)) {
      lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(float *)((longlong)param_1 + 0xa84) <=
          *(float *)(lVar10 + 0x790) - *(float *)((longlong)param_1 + 0xbdc)) {
        if ((char)param_1[0x17c] == '\0') {
          *(undefined1 *)(param_1 + 0x17c) = 1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x155,0);
          if (((*(byte *)(param_1 + 0x150) & 4) != 0) && (cVar5 != '\0')) {
            cVar5 = FUN_14122a7d0(param_1);
            if (cVar5 == '\0') {
              FUN_14123ece0(param_1,1);
            }
            else if ((char)param_1[0x25] == '\x03') {
              plVar20 = (longlong *)param_1[0xdc];
              plVar13 = plVar20 + (int)param_1[0xdd];
              for (; plVar20 != plVar13; plVar20 = plVar20 + 1) {
                if ((*plVar20 != 0) &&
                   (plVar16 = (longlong *)FUN_142ceeb40(*plVar20,0), plVar16 != (longlong *)0x0)) {
                  lVar10 = FUN_1413f82e0();
                  if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar26 = false;
                  }
                  else {
                    bVar26 = true;
                  }
                  if ((bVar26) &&
                     ((**(code **)(*plVar16 + 0x780))(plVar16), (char)param_1[0x25] == '\x03')) {
                    iVar9 = FUN_1412278a0();
                    if ((iVar9 < 0) || ((int)param_1[0xdd] <= iVar9)) {
                      bVar26 = false;
                    }
                    else {
                      bVar26 = true;
                    }
                    if ((bVar26) && (*(longlong *)(param_1[0xdc] + (longlong)iVar9 * 8) != 0)) {
                      FUN_142ce8a30();
                    }
                  }
                }
              }
            }
          }
        }
        if (((((*(uint *)(param_1 + 0x150) & 4) == 0) &&
             (*(char *)((longlong)param_1 + 0xbda) != '\0')) &&
            ((*(uint *)(param_1 + 0x150) & 1) != 0)) && ((char)param_1[0x10e] != '\x03')) {
          FUN_141220d60(param_1,0);
        }
      }
      goto LAB_1412443de;
    }
    *(undefined1 *)((longlong)param_1 + 0xbda) = 0;
    plVar13 = param_1 + 0x157;
    *(undefined1 *)(param_1 + 0x17c) = 0;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar13,0);
LAB_1412443de:
  lVar10 = param_1[0xd3];
  if ((lVar10 != 0) && (uVar23 = uVar21, 0 < *(int *)(lVar10 + 0x290))) {
    do {
      lVar10 = *(longlong *)(uVar21 + *(longlong *)(lVar10 + 0x288));
      if (lVar10 != 0) {
        lVar12 = FUN_1409655a0(lVar10);
        lVar12 = *(longlong *)(lVar12 + 8);
        if ((int)param_1[0x1a0] != *(int *)((longlong)param_1 + 0xd2c)) {
          plVar13 = (longlong *)param_1[0x1a7];
          if ((longlong *)param_1[0x1a7] == (longlong *)0x0) {
            plVar13 = param_1 + 0x1a6;
          }
          iVar9 = *(int *)((longlong)plVar13 +
                          ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                          (longlong)(int)param_1[0x1a8] - 1U) * 4);
          if (iVar9 != -1) {
            lVar22 = param_1[0x19f];
            do {
              lVar18 = (longlong)iVar9 * 0x68;
              if (*(longlong *)(lVar18 + lVar22) == lVar12) {
                if (((iVar9 != -1) && (lVar22 = (longlong)iVar9 * 0x68 + lVar22, lVar22 != 0)) &&
                   ((longlong *)(lVar22 + 8) != (longlong *)0x0)) {
                  cVar5 = FUN_140966050(lVar10);
                  FUN_140964f20(lVar10,&local_168);
                  FUN_1409639a0(lVar10,&local_138);
                  lVar12 = FUN_140963ab0(lVar10);
                  FUN_140963890(lVar10,&local_158);
                  puVar14 = (undefined8 *)FUN_141226010(param_1,&local_108);
                  uVar11 = puVar14[1];
                  *(undefined8 *)(lVar22 + 0x40) = *puVar14;
                  *(undefined8 *)(lVar22 + 0x48) = uVar11;
                  uVar30 = *(undefined4 *)((longlong)puVar14 + 0x14);
                  uVar1 = *(undefined4 *)(puVar14 + 3);
                  uVar2 = *(undefined4 *)((longlong)puVar14 + 0x1c);
                  *(undefined4 *)(lVar22 + 0x50) = *(undefined4 *)(puVar14 + 2);
                  *(undefined4 *)(lVar22 + 0x54) = uVar30;
                  *(undefined4 *)(lVar22 + 0x58) = uVar1;
                  *(undefined4 *)(lVar22 + 0x5c) = uVar2;
                  if (*(char *)(lVar22 + 0x40) == '\0') {
                    fVar27 = -1.0;
                  }
                  else {
                    fVar27 = *(float *)(lVar22 + 0x4c) - local_160;
                    lVar12 = *(longlong *)(lVar22 + 0x50);
                  }
                  *(float *)(lVar10 + 0xf0) = fVar27;
                  if (((param_1[0xd2] != 0) && (cVar5 == '\0')) &&
                     (*(char *)(lVar22 + 0x38) != '\0')) {
                    if (lVar12 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = *(undefined1 *)(lVar12 + 0x50);
                    }
                    local_118 = local_158;
                    fStack_110 = local_150;
                    local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,uVar6);
                    local_140 = local_130;
                    FUN_141278e10(param_1[0xd2],local_148,&local_118,local_res18);
                  }
                  *(ulonglong *)(lVar22 + 0x14) = CONCAT44(fStack_134,local_138);
                  *(longlong *)(lVar22 + 8) = local_158;
                  *(float *)(lVar22 + 0x1c) = local_130;
                  *(float *)(lVar22 + 0x10) = local_150;
                  *(longlong *)(lVar22 + 0x20) = local_168;
                  *(float *)(lVar22 + 0x28) = local_160;
                  *(longlong *)(lVar22 + 0x30) = lVar12;
                  *(char *)(lVar22 + 0x38) = cVar5;
                }
                break;
              }
              iVar9 = *(int *)(lVar18 + 0x60 + lVar22);
            } while (iVar9 != -1);
          }
        }
      }
      lVar10 = param_1[0xd3];
      uVar25 = (int)uVar23 + 1;
      uVar21 = uVar21 + 8;
      uVar23 = (ulonglong)uVar25;
    } while ((int)uVar25 < *(int *)(lVar10 + 0x290));
  }
  uVar21 = 0;
  FUN_141250bb0(param_1);
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if (0.0 <= *(float *)(param_1 + 0x174)) {
    fVar27 = *(float *)(lVar10 + 0x790) - *(float *)(param_1 + 0x174);
    if (fVar27 < *(float *)((longlong)param_1 + 0xba4) ||
        fVar27 == *(float *)((longlong)param_1 + 0xba4)) {
      pfVar17 = (float *)param_1[0x172];
      cVar5 = '\0';
      pfVar15 = pfVar17 + (longlong)(int)param_1[0x173] * 2;
      for (; pfVar17 != pfVar15; pfVar17 = pfVar17 + 2) {
        if ((*pfVar17 < fVar27) && (fVar27 < pfVar17[1] + *pfVar17)) {
          cVar5 = '\x01';
          break;
        }
      }
      if ((char)param_1[0x175] != cVar5) {
        *(char *)(param_1 + 0x175) = cVar5;
        if (cVar5 == '\0') {
          FUN_14148fb90(param_1);
        }
        else {
          FUN_14148f8f0();
        }
      }
    }
    else {
      if ((char)param_1[0x175] != '\0') {
        FUN_14148fb90(param_1);
      }
      *(undefined4 *)(param_1 + 0x173) = 0;
      if (*(int *)((longlong)param_1 + 0xb9c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x172,0);
      }
      *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
      *(undefined4 *)((longlong)param_1 + 0xba4) = 0xbf800000;
      *(undefined1 *)(param_1 + 0x175) = 0;
    }
  }
  lVar10 = (longlong)(int)param_1[0x1d9];
  if ((int)param_1[0x1d9] != 0) {
    bVar26 = *(longlong *)param_1[0x1d8] != 0;
    uVar23 = uVar21;
    uVar19 = uVar21;
    do {
      iVar9 = (int)uVar21;
      uVar23 = uVar23 + 1;
      uVar21 = (ulonglong)(iVar9 + 1);
      if ((longlong)uVar23 < lVar10) {
        plVar13 = (longlong *)(param_1[0x1d8] + uVar23 * 8);
        do {
          if (bVar26 != (*plVar13 != 0)) break;
          uVar21 = (ulonglong)((int)uVar21 + 1);
          uVar23 = uVar23 + 1;
          plVar13 = plVar13 + 1;
        } while ((longlong)uVar23 < lVar10);
      }
      iVar8 = (int)uVar21 - iVar9;
      if (bVar26 != false) {
        iVar24 = (int)uVar19;
        if (iVar24 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0x1d8] + (longlong)iVar24 * 8),
                     (void *)(param_1[0x1d8] + (longlong)iVar9 * 8),(longlong)iVar8 << 3);
        }
        uVar19 = (ulonglong)(uint)(iVar24 + iVar8);
      }
      bVar26 = (bool)(bVar26 ^ 1);
    } while ((longlong)uVar23 < lVar10);
    *(int *)(param_1 + 0x1d9) = (int)uVar19;
  }
  cVar5 = local_res8._0_1_;
  if (((*(char *)((longlong)param_1 + 0xed4) != local_res8._0_1_) && (local_res8._0_1_ == '\0')) &&
     ((int)param_1[0x1d9] < 1)) {
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0x1da) = *(undefined4 *)(lVar10 + 0x790);
  }
  *(char *)((longlong)param_1 + 0xed4) = cVar5;
  return;
}



// FUNCTION 141244890 FUN_141244890 body=482 status=ok
// SIG undefined FUN_141244890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141244890(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff18;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  
  if ((*(char *)(param_1 + 0x2e0) != '\0') && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    local_b8 = *(undefined4 *)(param_1 + 0x220);
    local_b4 = *(undefined4 *)(param_1 + 0x224);
    local_a0 = *(float *)(param_1 + 0x2d0) + *(float *)(param_1 + 0x228);
    local_b0 = *(float *)(param_1 + 0x228) + -*(float *)(param_1 + 0x2d0);
    local_a8 = local_b8;
    local_a4 = local_b4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146877238) {
      _Init_thread_header(&DAT_146877238);
      if (DAT_146877238 == -1) {
        puVar3 = (undefined8 *)FName::FName(&local_c8,L"UEscortLocationComponent SnapToGround",1);
        in_stack_ffffffffffffff18 = 0;
        FUN_1422ffb20(&DAT_1468771c0,*puVar3,local_res8,0,0);
        atexit(FUN_143e63bb0);
        _Init_thread_footer(&DAT_146877238);
      }
    }
    _DAT_1468771d8 = 1;
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    lVar2 = *(longlong *)(param_1 + 0x120);
    local_8c = 0x3f800000;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffff00000000;
    cVar1 = UWorld::LineTraceSingleByChannel
                      (lVar2,local_98,&local_a8,&local_b8,in_stack_ffffffffffffff18,&DAT_1468771c0,
                       &DAT_146aefe68);
    if (cVar1 != '\0') {
      local_c8 = local_84;
      local_c0 = local_7c;
      FUN_1423990b0(param_1,&local_c8,0,0,in_stack_ffffffffffffff18 & 0xffffffffffffff00);
    }
  }
  return;
}



// FUNCTION 141244a80 FUN_141244a80 body=56 status=ok
// SIG undefined FUN_141244a80(void)

void FUN_141244a80(longlong param_1)

{
  if (*(char *)(param_1 + 0x870) != '\x03') {
    *(undefined1 *)(param_1 + 0x870) = 3;
    (**(code **)(*(longlong *)(param_1 + 0x588) + 0x48))();
  }
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 141244ac0 FUN_141244ac0 body=1070 status=ok
// SIG undefined FUN_141244ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141244ac0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [96];
  
  if ((*(char *)(*(longlong *)(param_1 + 0x1680) + 0x6e3) == '\0') ||
     (fVar19 = *(float *)(param_1 + 0x1734), fVar19 <= 0.0)) {
    uVar13 = FRotator::Quaternion(param_1 + 0x17cc,local_68);
    FUN_14120ef60(param_1 + 0x3d0,0,uVar13,1);
    FUN_141215940(param_1 + 0x3d0);
    fVar14 = *(float *)(param_1 + 0x410) + *(float *)(param_1 + 0x17c0);
    fVar16 = *(float *)(param_1 + 0x414) + *(float *)(param_1 + 0x17c4);
    fVar19 = *(float *)(param_1 + 0x418) + *(float *)(param_1 + 0x17c8);
    *(undefined1 *)(param_1 + 0x479) = 1;
    *(bool *)(param_1 + 0x478) = *(int *)(param_1 + 0x470) == 0;
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = fVar19;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x410) = auVar6;
    if (*(int *)(param_1 + 0x470) == 0) {
      *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x400);
      *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_1 + 0x408);
      auVar7._4_4_ = fVar16;
      auVar7._0_4_ = fVar14;
      auVar7._8_4_ = fVar19;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x440) = auVar7;
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x420);
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x424);
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x428);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x42c);
    }
  }
  else {
    if (fVar19 < 0.25) {
      lVar1 = param_1 + 0x3d0;
      fVar21 = 1.0 - fVar19 * 4.0;
      FUN_141215940(lVar1);
      fVar19 = *(float *)(param_1 + 0x400);
      fVar16 = *(float *)(param_1 + 0x404);
      fVar14 = *(float *)(param_1 + 0x408);
      fVar20 = *(float *)(param_1 + 0x40c);
      local_78 = fVar21 * *(float *)(param_1 + 0x17cc);
      local_74 = fVar21 * *(float *)(param_1 + 0x17d0);
      local_70 = fVar21 * *(float *)(param_1 + 0x17d4);
      pfVar12 = (float *)FRotator::Quaternion(&local_78,local_68);
      fVar8 = *pfVar12;
      fVar9 = pfVar12[1];
      fVar10 = pfVar12[2];
      fVar11 = pfVar12[3];
      fVar15 = fVar8 * fVar20 * _DAT_146876b90 + fVar11 * fVar19 + fVar9 * fVar14 * _DAT_146876b80 +
               fVar10 * fVar16 * _DAT_146876b70;
      fVar17 = fVar8 * fVar14 * fRam0000000146876b94 + fVar11 * fVar16 +
               fVar9 * fVar20 * fRam0000000146876b84 + fVar10 * fVar19 * fRam0000000146876b74;
      fVar18 = fVar8 * fVar16 * fRam0000000146876b98 + fVar11 * fVar14 +
               fVar9 * fVar19 * fRam0000000146876b88 + fVar10 * fVar20 * fRam0000000146876b78;
      fVar19 = fVar8 * fVar19 * fRam0000000146876b9c + fVar11 * fVar20 +
               fVar9 * fVar16 * fRam0000000146876b8c + fVar10 * fVar14 * fRam0000000146876b7c;
      FUN_141215940(lVar1);
      *(float *)(param_1 + 0x400) = fVar15;
      *(float *)(param_1 + 0x404) = fVar17;
      *(float *)(param_1 + 0x408) = fVar18;
      *(float *)(param_1 + 0x40c) = fVar19;
      *(undefined1 *)(param_1 + 0x479) = 1;
      *(bool *)(param_1 + 0x478) = *(int *)(param_1 + 0x470) == 0;
      if (*(int *)(param_1 + 0x470) == 0) {
        *(float *)(param_1 + 0x430) = fVar15;
        *(float *)(param_1 + 0x434) = fVar17;
        *(float *)(param_1 + 0x438) = fVar18;
        *(float *)(param_1 + 0x43c) = fVar19;
        *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x410);
        *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x414);
        *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x418);
        *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x41c);
        *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x420);
        *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x428);
      }
      fVar19 = *(float *)(param_1 + 0x17c0);
      fVar16 = *(float *)(param_1 + 0x17c4);
      fVar14 = *(float *)(param_1 + 0x17c8);
      FUN_141215940(lVar1);
      *(undefined1 *)(param_1 + 0x479) = 1;
      *(bool *)(param_1 + 0x478) = *(int *)(param_1 + 0x470) == 0;
      fVar20 = fVar19 * fVar21 + *(float *)(param_1 + 0x410);
      fVar16 = fVar16 * fVar21 + *(float *)(param_1 + 0x414);
      fVar19 = fVar14 * fVar21 + *(float *)(param_1 + 0x418);
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar20;
      auVar2._8_4_ = fVar19;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x410) = auVar2;
      if (*(int *)(param_1 + 0x470) == 0) {
        *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x400);
        *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_1 + 0x408);
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar20;
        auVar3._8_4_ = fVar19;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x440) = auVar3;
        *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x420);
        *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x428);
      }
    }
    lVar1 = param_1 + 0x3d0;
    *(float *)(param_1 + 0x1764) =
         *(float *)(param_1 + 0x2f4) * *(float *)(param_1 + 0x1734) + *(float *)(param_1 + 0x1764);
    FUN_141215940(lVar1);
    fVar19 = *(float *)(param_1 + 0x400);
    fVar16 = *(float *)(param_1 + 0x404);
    fVar14 = *(float *)(param_1 + 0x408);
    fVar20 = *(float *)(param_1 + 0x40c);
    pfVar12 = (float *)FRotator::Quaternion(param_1 + 0x1748,local_68);
    fVar8 = *pfVar12;
    fVar9 = pfVar12[1];
    fVar10 = pfVar12[2];
    fVar11 = pfVar12[3];
    fVar15 = fVar8 * fVar20 * _DAT_146876b90 + fVar11 * fVar19 + fVar9 * fVar14 * _DAT_146876b80 +
             fVar10 * fVar16 * _DAT_146876b70;
    fVar17 = fVar8 * fVar14 * fRam0000000146876b94 + fVar11 * fVar16 +
             fVar9 * fVar20 * fRam0000000146876b84 + fVar10 * fVar19 * fRam0000000146876b74;
    fVar18 = fVar8 * fVar16 * fRam0000000146876b98 + fVar11 * fVar14 +
             fVar9 * fVar19 * fRam0000000146876b88 + fVar10 * fVar20 * fRam0000000146876b78;
    fVar19 = fVar8 * fVar19 * fRam0000000146876b9c + fVar11 * fVar20 +
             fVar9 * fVar16 * fRam0000000146876b8c + fVar10 * fVar14 * fRam0000000146876b7c;
    FUN_141215940(lVar1);
    *(float *)(param_1 + 0x400) = fVar15;
    *(float *)(param_1 + 0x404) = fVar17;
    *(float *)(param_1 + 0x408) = fVar18;
    *(float *)(param_1 + 0x40c) = fVar19;
    *(undefined1 *)(param_1 + 0x479) = 1;
    *(bool *)(param_1 + 0x478) = *(int *)(param_1 + 0x470) == 0;
    if (*(int *)(param_1 + 0x470) == 0) {
      *(float *)(param_1 + 0x430) = fVar15;
      *(float *)(param_1 + 0x434) = fVar17;
      *(float *)(param_1 + 0x438) = fVar18;
      *(float *)(param_1 + 0x43c) = fVar19;
      *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x410);
      *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x418);
      *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x41c);
      *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x420);
      *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x428);
    }
    FUN_14120ee10(lVar1,0,param_1 + 0x175c,1);
  }
  fVar19 = *(float *)(param_1 + 0x17fc);
  FUN_141215940(param_1 + 0x15b0);
  fVar19 = *(float *)(param_1 + 0x15f0) + fVar19;
  auVar4._4_4_ = *(undefined4 *)(param_1 + 0x15f4);
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = *(undefined4 *)(param_1 + 0x15f8);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x15f0) = auVar4;
  *(undefined1 *)(param_1 + 0x1659) = 1;
  *(bool *)(param_1 + 0x1658) = *(int *)(param_1 + 0x1650) == 0;
  if (*(int *)(param_1 + 0x1650) == 0) {
    *(undefined8 *)(param_1 + 0x1610) = *(undefined8 *)(param_1 + 0x15e0);
    *(undefined8 *)(param_1 + 0x1618) = *(undefined8 *)(param_1 + 0x15e8);
    auVar5._4_4_ = *(undefined4 *)(param_1 + 0x15f4);
    auVar5._0_4_ = fVar19;
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x15f8);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1620) = auVar5;
    *(undefined8 *)(param_1 + 0x1630) = *(undefined8 *)(param_1 + 0x1600);
    *(undefined8 *)(param_1 + 0x1638) = *(undefined8 *)(param_1 + 0x1608);
  }
  return;
}



// FUNCTION 141244ef0 FUN_141244ef0 body=1257 status=ok
// SIG undefined FUN_141244ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141244ef0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [96];
  
  if ((*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e3) == '\0') ||
     (fVar18 = *(float *)(param_1 + 0x3f4), fVar18 <= 0.0)) {
    lVar1 = param_1 + 0x520;
    FUN_141215940(lVar1);
    fVar18 = *(float *)(param_1 + 0x550);
    fVar15 = *(float *)(param_1 + 0x554);
    fVar13 = *(float *)(param_1 + 0x558);
    fVar19 = *(float *)(param_1 + 0x55c);
    pfVar12 = (float *)FRotator::Quaternion(param_1 + 0x4d8,local_68);
    fVar8 = *pfVar12;
    fVar9 = pfVar12[1];
    fVar10 = pfVar12[2];
    fVar11 = pfVar12[3];
    fVar14 = fVar8 * fVar19 * _DAT_146876b90 + fVar11 * fVar18 + fVar9 * fVar13 * _DAT_146876b80 +
             fVar10 * fVar15 * _DAT_146876b70;
    fVar16 = fVar8 * fVar13 * fRam0000000146876b94 + fVar11 * fVar15 +
             fVar9 * fVar19 * fRam0000000146876b84 + fVar10 * fVar18 * fRam0000000146876b74;
    fVar17 = fVar8 * fVar15 * fRam0000000146876b98 + fVar11 * fVar13 +
             fVar9 * fVar18 * fRam0000000146876b88 + fVar10 * fVar19 * fRam0000000146876b78;
    fVar18 = fVar8 * fVar18 * fRam0000000146876b9c + fVar11 * fVar19 +
             fVar9 * fVar15 * fRam0000000146876b8c + fVar10 * fVar13 * fRam0000000146876b7c;
    FUN_141215940(lVar1);
    *(float *)(param_1 + 0x550) = fVar14;
    *(float *)(param_1 + 0x554) = fVar16;
    *(float *)(param_1 + 0x558) = fVar17;
    *(float *)(param_1 + 0x55c) = fVar18;
    *(undefined1 *)(param_1 + 0x5c9) = 1;
    *(bool *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c0) == 0;
    if (*(int *)(param_1 + 0x5c0) == 0) {
      *(float *)(param_1 + 0x580) = fVar14;
      *(float *)(param_1 + 0x584) = fVar16;
      *(float *)(param_1 + 0x588) = fVar17;
      *(float *)(param_1 + 0x58c) = fVar18;
      *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x560);
      *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x564);
      *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x568);
      *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x56c);
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x570);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x578);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x778) != '\0') {
      *(float *)(param_1 + 0x4d4) = *(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 0x4d4);
    }
    FUN_141215940(lVar1);
    fVar13 = *(float *)(param_1 + 0x560) + *(float *)(param_1 + 0x4cc);
    fVar15 = *(float *)(param_1 + 0x564) + *(float *)(param_1 + 0x4d0);
    fVar18 = *(float *)(param_1 + 0x568) + *(float *)(param_1 + 0x4d4);
    *(undefined1 *)(param_1 + 0x5c9) = 1;
    *(bool *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c0) == 0;
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar13;
    auVar6._8_4_ = fVar18;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x560) = auVar6;
    if (*(int *)(param_1 + 0x5c0) == 0) {
      *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x550);
      *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x558);
      auVar7._4_4_ = fVar15;
      auVar7._0_4_ = fVar13;
      auVar7._8_4_ = fVar18;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x590) = auVar7;
      *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x570);
      *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x574);
      *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x578);
      *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_1 + 0x57c);
    }
  }
  else {
    if (fVar18 < 0.25) {
      lVar1 = param_1 + 0x520;
      fVar20 = 1.0 - fVar18 * 4.0;
      FUN_141215940(lVar1);
      fVar18 = *(float *)(param_1 + 0x550);
      fVar15 = *(float *)(param_1 + 0x554);
      fVar13 = *(float *)(param_1 + 0x558);
      fVar19 = *(float *)(param_1 + 0x55c);
      local_78 = fVar20 * *(float *)(param_1 + 0x4d8);
      local_74 = fVar20 * *(float *)(param_1 + 0x4dc);
      local_70 = fVar20 * *(float *)(param_1 + 0x4e0);
      pfVar12 = (float *)FRotator::Quaternion(&local_78,local_68);
      fVar8 = *pfVar12;
      fVar9 = pfVar12[1];
      fVar10 = pfVar12[2];
      fVar11 = pfVar12[3];
      fVar14 = fVar19 * fVar8 * _DAT_146876b90 + fVar11 * fVar18 + fVar13 * fVar9 * _DAT_146876b80 +
               fVar15 * fVar10 * _DAT_146876b70;
      fVar16 = fVar13 * fVar8 * fRam0000000146876b94 + fVar11 * fVar15 +
               fVar19 * fVar9 * fRam0000000146876b84 + fVar18 * fVar10 * fRam0000000146876b74;
      fVar17 = fVar15 * fVar8 * fRam0000000146876b98 + fVar11 * fVar13 +
               fVar18 * fVar9 * fRam0000000146876b88 + fVar19 * fVar10 * fRam0000000146876b78;
      fVar18 = fVar18 * fVar8 * fRam0000000146876b9c + fVar11 * fVar19 +
               fVar15 * fVar9 * fRam0000000146876b8c + fVar13 * fVar10 * fRam0000000146876b7c;
      FUN_141215940(lVar1);
      *(float *)(param_1 + 0x550) = fVar14;
      *(float *)(param_1 + 0x554) = fVar16;
      *(float *)(param_1 + 0x558) = fVar17;
      *(float *)(param_1 + 0x55c) = fVar18;
      *(undefined1 *)(param_1 + 0x5c9) = 1;
      *(bool *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c0) == 0;
      if (*(int *)(param_1 + 0x5c0) == 0) {
        *(float *)(param_1 + 0x580) = fVar14;
        *(float *)(param_1 + 0x584) = fVar16;
        *(float *)(param_1 + 0x588) = fVar17;
        *(float *)(param_1 + 0x58c) = fVar18;
        *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x560);
        *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x564);
        *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x568);
        *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x56c);
        *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x570);
        *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x578);
      }
      fVar18 = *(float *)(param_1 + 0x4cc);
      fVar15 = *(float *)(param_1 + 0x4d0);
      fVar13 = *(float *)(param_1 + 0x4d4);
      FUN_141215940(lVar1);
      *(undefined1 *)(param_1 + 0x5c9) = 1;
      *(bool *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c0) == 0;
      fVar19 = fVar18 * fVar20 + *(float *)(param_1 + 0x560);
      fVar15 = fVar15 * fVar20 + *(float *)(param_1 + 0x564);
      fVar18 = fVar13 * fVar20 + *(float *)(param_1 + 0x568);
      auVar2._4_4_ = fVar15;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x560) = auVar2;
      if (*(int *)(param_1 + 0x5c0) == 0) {
        *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x550);
        *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x558);
        auVar3._4_4_ = fVar15;
        auVar3._0_4_ = fVar19;
        auVar3._8_4_ = fVar18;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x590) = auVar3;
        *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x570);
        *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x578);
      }
    }
    lVar1 = param_1 + 0x520;
    *(float *)(param_1 + 0x40c) =
         *(float *)(param_1 + 0x2e0) * *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x40c);
    FUN_141215940(lVar1);
    fVar18 = *(float *)(param_1 + 0x550);
    fVar15 = *(float *)(param_1 + 0x554);
    fVar13 = *(float *)(param_1 + 0x558);
    fVar19 = *(float *)(param_1 + 0x55c);
    pfVar12 = (float *)FRotator::Quaternion(param_1 + 0x410,local_68);
    fVar8 = *pfVar12;
    fVar9 = pfVar12[1];
    fVar10 = pfVar12[2];
    fVar11 = pfVar12[3];
    fVar14 = fVar19 * fVar8 * _DAT_146876b90 + fVar11 * fVar18 + fVar13 * fVar9 * _DAT_146876b80 +
             fVar15 * fVar10 * _DAT_146876b70;
    fVar16 = fVar13 * fVar8 * fRam0000000146876b94 + fVar11 * fVar15 +
             fVar19 * fVar9 * fRam0000000146876b84 + fVar18 * fVar10 * fRam0000000146876b74;
    fVar17 = fVar15 * fVar8 * fRam0000000146876b98 + fVar11 * fVar13 +
             fVar18 * fVar9 * fRam0000000146876b88 + fVar19 * fVar10 * fRam0000000146876b78;
    fVar18 = fVar18 * fVar8 * fRam0000000146876b9c + fVar11 * fVar19 +
             fVar15 * fVar9 * fRam0000000146876b8c + fVar13 * fVar10 * fRam0000000146876b7c;
    FUN_141215940(lVar1);
    *(float *)(param_1 + 0x550) = fVar14;
    *(float *)(param_1 + 0x554) = fVar16;
    *(float *)(param_1 + 0x558) = fVar17;
    *(float *)(param_1 + 0x55c) = fVar18;
    *(undefined1 *)(param_1 + 0x5c9) = 1;
    *(bool *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c0) == 0;
    if (*(int *)(param_1 + 0x5c0) == 0) {
      *(float *)(param_1 + 0x580) = fVar14;
      *(float *)(param_1 + 0x584) = fVar16;
      *(float *)(param_1 + 0x588) = fVar17;
      *(float *)(param_1 + 0x58c) = fVar18;
      *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x560);
      *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x564);
      *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x568);
      *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x56c);
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x570);
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x578);
    }
    FUN_14120ee10(lVar1,0,param_1 + 0x404,1);
  }
  fVar18 = *(float *)(param_1 + 0x504);
  FUN_141215940(param_1 + 0x2c50);
  fVar18 = fVar18 + *(float *)(param_1 + 0x2c90);
  auVar4._4_4_ = *(undefined4 *)(param_1 + 0x2c94);
  auVar4._0_4_ = fVar18;
  auVar4._8_4_ = *(undefined4 *)(param_1 + 0x2c98);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x2c90) = auVar4;
  *(undefined1 *)(param_1 + 0x2cf9) = 1;
  *(bool *)(param_1 + 0x2cf8) = *(int *)(param_1 + 0x2cf0) == 0;
  if (*(int *)(param_1 + 0x2cf0) == 0) {
    *(undefined8 *)(param_1 + 0x2cb0) = *(undefined8 *)(param_1 + 0x2c80);
    *(undefined8 *)(param_1 + 0x2cb8) = *(undefined8 *)(param_1 + 0x2c88);
    auVar5._4_4_ = *(undefined4 *)(param_1 + 0x2c94);
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x2c98);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x2cc0) = auVar5;
    *(undefined8 *)(param_1 + 0x2cd0) = *(undefined8 *)(param_1 + 0x2ca0);
    *(undefined8 *)(param_1 + 0x2cd8) = *(undefined8 *)(param_1 + 0x2ca8);
  }
  return;
}



// FUNCTION 1412453e0 FUN_1412453e0 body=1482 status=ok
// SIG undefined FUN_1412453e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412453e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [64];
  
  local_80 = *(float *)(*(longlong *)(param_1 + 0x9a0) + 0x78c);
  local_88 = 0;
  FRotator::Quaternion(&local_88,&local_58);
  local_80 = *(float *)(*(longlong *)(param_1 + 0x9a0) + 0x78c) * 1.5;
  local_88 = 0;
  FRotator::Quaternion(&local_88,&local_78);
  local_80 = *(float *)(*(longlong *)(param_1 + 0x9a0) + 0x784);
  local_88 = 0;
  FRotator::Quaternion(&local_88,&local_68);
  lVar1 = param_1 + 0x140;
  FUN_141215940(lVar1);
  fVar14 = fRam0000000146876b9c;
  fVar13 = fRam0000000146876b98;
  fVar12 = fRam0000000146876b94;
  fVar11 = _DAT_146876b90;
  fVar10 = fRam0000000146876b8c;
  fVar9 = fRam0000000146876b88;
  fVar8 = fRam0000000146876b84;
  fVar7 = _DAT_146876b80;
  fVar6 = fRam0000000146876b7c;
  fVar21 = fRam0000000146876b78;
  fVar19 = fRam0000000146876b74;
  fVar17 = _DAT_146876b70;
  fVar22 = *(float *)(param_1 + 0x170);
  fVar3 = *(float *)(param_1 + 0x174);
  fVar4 = *(float *)(param_1 + 0x178);
  fVar5 = *(float *)(param_1 + 0x17c);
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  *(bool *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e0) == 0;
  fVar16 = fStack_5c * fVar22 * fVar11 + fVar5 * local_68 + fStack_60 * fVar3 * fVar7 +
           fStack_64 * fVar4 * fVar17;
  fVar18 = fStack_60 * fVar22 * fVar12 + fVar5 * fStack_64 + fStack_5c * fVar3 * fVar8 +
           local_68 * fVar4 * fVar19;
  fVar20 = fStack_64 * fVar22 * fVar13 + fVar5 * fStack_60 + local_68 * fVar3 * fVar9 +
           fStack_5c * fVar4 * fVar21;
  fVar22 = local_68 * fVar22 * fVar14 + fVar5 * fStack_5c + fStack_64 * fVar3 * fVar10 +
           fStack_60 * fVar4 * fVar6;
  *(float *)(param_1 + 0x170) = fVar16;
  *(float *)(param_1 + 0x174) = fVar18;
  *(float *)(param_1 + 0x178) = fVar20;
  *(float *)(param_1 + 0x17c) = fVar22;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    *(float *)(param_1 + 0x1a0) = fVar16;
    *(float *)(param_1 + 0x1a4) = fVar18;
    *(float *)(param_1 + 0x1a8) = fVar20;
    *(float *)(param_1 + 0x1ac) = fVar22;
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x19c);
  }
  if (*(char *)(param_1 + 0x3fa) != '\0') {
    FUN_141215940(param_1 + 0x350);
    fVar22 = *(float *)(param_1 + 0x380);
    fVar3 = *(float *)(param_1 + 900);
    fVar4 = *(float *)(param_1 + 0x388);
    fVar5 = *(float *)(param_1 + 0x38c);
    *(undefined1 *)(param_1 + 0x3f9) = 1;
    *(bool *)(param_1 + 0x3f8) = *(int *)(param_1 + 0x3f0) == 0;
    fVar16 = fStack_4c * fVar22 * fVar11 + fVar5 * local_58 + fStack_50 * fVar3 * fVar7 +
             fStack_54 * fVar4 * fVar17;
    fVar18 = fStack_50 * fVar22 * fVar12 + fVar5 * fStack_54 + fStack_4c * fVar3 * fVar8 +
             local_58 * fVar4 * fVar19;
    fVar20 = fStack_54 * fVar22 * fVar13 + fVar5 * fStack_50 + local_58 * fVar3 * fVar9 +
             fStack_4c * fVar4 * fVar21;
    fVar22 = local_58 * fVar22 * fVar14 + fVar5 * fStack_4c + fStack_54 * fVar3 * fVar10 +
             fStack_50 * fVar4 * fVar6;
    *(float *)(param_1 + 0x380) = fVar16;
    *(float *)(param_1 + 900) = fVar18;
    *(float *)(param_1 + 0x388) = fVar20;
    *(float *)(param_1 + 0x38c) = fVar22;
    if (*(int *)(param_1 + 0x3f0) == 0) {
      *(float *)(param_1 + 0x3b0) = fVar16;
      *(float *)(param_1 + 0x3b4) = fVar18;
      *(float *)(param_1 + 0x3b8) = fVar20;
      *(float *)(param_1 + 0x3bc) = fVar22;
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x390);
      *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x394);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x398);
      *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x39c);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3a0);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3a4);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x3a8);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3ac);
    }
  }
  if (*(char *)(param_1 + 0x4aa) != '\0') {
    FUN_141215940(param_1 + 0x400);
    fVar22 = *(float *)(param_1 + 0x430);
    fVar3 = *(float *)(param_1 + 0x434);
    fVar4 = *(float *)(param_1 + 0x438);
    fVar5 = *(float *)(param_1 + 0x43c);
    *(undefined1 *)(param_1 + 0x4a9) = 1;
    *(bool *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a0) == 0;
    fVar16 = fStack_6c * fVar22 * fVar11 + fVar5 * local_78 + fStack_70 * fVar3 * fVar7 +
             fStack_74 * fVar4 * fVar17;
    fVar18 = fStack_70 * fVar22 * fVar12 + fVar5 * fStack_74 + fStack_6c * fVar3 * fVar8 +
             local_78 * fVar4 * fVar19;
    fVar20 = fStack_74 * fVar22 * fVar13 + fVar5 * fStack_70 + local_78 * fVar3 * fVar9 +
             fStack_6c * fVar4 * fVar21;
    fVar22 = local_78 * fVar22 * fVar14 + fVar5 * fStack_6c + fStack_74 * fVar3 * fVar10 +
             fStack_70 * fVar4 * fVar6;
    *(float *)(param_1 + 0x430) = fVar16;
    *(float *)(param_1 + 0x434) = fVar18;
    *(float *)(param_1 + 0x438) = fVar20;
    *(float *)(param_1 + 0x43c) = fVar22;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      *(float *)(param_1 + 0x460) = fVar16;
      *(float *)(param_1 + 0x464) = fVar18;
      *(float *)(param_1 + 0x468) = fVar20;
      *(float *)(param_1 + 0x46c) = fVar22;
      *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x440);
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_1 + 0x444);
      *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x448);
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x44c);
      *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x450);
      *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x454);
      *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x458);
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x45c);
    }
  }
  if (*(char *)(param_1 + 0x55a) != '\0') {
    FUN_141215940(param_1 + 0x4b0);
    fVar22 = *(float *)(param_1 + 0x4e0);
    fVar3 = *(float *)(param_1 + 0x4e4);
    fVar4 = *(float *)(param_1 + 0x4e8);
    fVar5 = *(float *)(param_1 + 0x4ec);
    *(undefined1 *)(param_1 + 0x559) = 1;
    *(bool *)(param_1 + 0x558) = *(int *)(param_1 + 0x550) == 0;
    fVar17 = fStack_6c * fVar22 * fVar11 + fVar5 * local_78 + fStack_70 * fVar3 * fVar7 +
             fStack_74 * fVar4 * fVar17;
    fVar19 = fStack_70 * fVar22 * fVar12 + fVar5 * fStack_74 + fStack_6c * fVar3 * fVar8 +
             local_78 * fVar4 * fVar19;
    fVar21 = fStack_74 * fVar22 * fVar13 + fVar5 * fStack_70 + local_78 * fVar3 * fVar9 +
             fStack_6c * fVar4 * fVar21;
    fVar22 = local_78 * fVar22 * fVar14 + fVar5 * fStack_6c + fStack_74 * fVar3 * fVar10 +
             fStack_70 * fVar4 * fVar6;
    *(float *)(param_1 + 0x4e0) = fVar17;
    *(float *)(param_1 + 0x4e4) = fVar19;
    *(float *)(param_1 + 0x4e8) = fVar21;
    *(float *)(param_1 + 0x4ec) = fVar22;
    if (*(int *)(param_1 + 0x550) == 0) {
      *(float *)(param_1 + 0x510) = fVar17;
      *(float *)(param_1 + 0x514) = fVar19;
      *(float *)(param_1 + 0x518) = fVar21;
      *(float *)(param_1 + 0x51c) = fVar22;
      *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x4f0);
      *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x4f8);
      *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x500);
      *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x508);
    }
  }
  if (*(char *)(param_1 + 0x6ba) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 0.8;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 0.8,*(float *)(lVar2 + 0x7a8) * 0.8);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,7,uVar15,1);
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 0.95;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 0.95,*(float *)(lVar2 + 0x7a8) * 0.95);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,6,uVar15,1);
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 1.2;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 1.2,*(float *)(lVar2 + 0x7a8) * 1.2);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,9,uVar15,1);
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 0.7;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 0.7,*(float *)(lVar2 + 0x7a8) * 0.7);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,8,uVar15,1);
  }
  if (*(char *)(param_1 + 0x29a) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 0.8;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 0.8,*(float *)(lVar2 + 0x7a8) * 0.8);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,1,uVar15);
  }
  if (*(char *)(param_1 + 0x34a) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x9a0);
    local_80 = *(float *)(lVar2 + 0x7b0) * 1.2;
    local_88 = CONCAT44(*(float *)(lVar2 + 0x7ac) * 1.2,*(float *)(lVar2 + 0x7a8) * 1.2);
    uVar15 = FRotator::Quaternion(&local_88,local_48);
    FUN_14120e180(lVar1,2,uVar15,1);
  }
  return;
}



// FUNCTION 1412459b0 FUN_1412459b0 body=1776 status=ok
// SIG undefined FUN_1412459b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412459b0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar5 = *(float *)(*(longlong *)(param_1 + 0x1680) + 0x754) * 0.008726646;
  if (fVar5 < 0.0) {
    fVar3 = fVar5 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = fVar5 * 0.15915494 + 0.5;
  }
  fVar12 = -1.0;
  fVar5 = fVar5 - (float)(int)fVar3 * 6.2831855;
  if (fVar5 <= 1.5707964) {
    if (-1.5707964 <= fVar5) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = -1.0;
      fVar5 = -3.1415927 - fVar5;
    }
  }
  else {
    fVar3 = -1.0;
    fVar5 = 3.1415927 - fVar5;
  }
  fVar4 = fVar5 * fVar5;
  fVar5 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 + 0.008333331
            ) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar5;
  fVar11 = DAT_1464aa7a0 * fVar5;
  fVar10 = DAT_1464aa798._4_4_ * fVar5;
  fVar5 = (float)DAT_1464aa798 * fVar5;
  fVar3 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 + 0.041666638)
            * fVar4 - 0.5) * fVar4 + 1.0) * fVar3;
  FUN_141215940(param_1 + 0xe20);
  fVar4 = *(float *)(param_1 + 0xe50);
  fVar1 = *(float *)(param_1 + 0xe54);
  fVar2 = *(float *)(param_1 + 0xe58);
  fVar7 = *(float *)(param_1 + 0xe5c);
  *(undefined1 *)(param_1 + 0xec9) = 1;
  *(bool *)(param_1 + 0xec8) = *(int *)(param_1 + 0xec0) == 0;
  fVar6 = fVar3 * fVar4 * _DAT_146876b90 + fVar7 * fVar5 + fVar11 * fVar1 * _DAT_146876b80 +
          fVar10 * fVar2 * _DAT_146876b70;
  fVar8 = fVar11 * fVar4 * fRam0000000146876b94 + fVar7 * fVar10 +
          fVar3 * fVar1 * fRam0000000146876b84 + fVar5 * fVar2 * fRam0000000146876b74;
  fVar9 = fVar10 * fVar4 * fRam0000000146876b98 + fVar7 * fVar11 +
          fVar5 * fVar1 * fRam0000000146876b88 + fVar3 * fVar2 * fRam0000000146876b78;
  fVar5 = fVar5 * fVar4 * fRam0000000146876b9c + fVar7 * fVar3 +
          fVar10 * fVar1 * fRam0000000146876b8c + fVar11 * fVar2 * fRam0000000146876b7c;
  *(float *)(param_1 + 0xe50) = fVar6;
  *(float *)(param_1 + 0xe54) = fVar8;
  *(float *)(param_1 + 0xe58) = fVar9;
  *(float *)(param_1 + 0xe5c) = fVar5;
  if (*(int *)(param_1 + 0xec0) == 0) {
    *(float *)(param_1 + 0xe80) = fVar6;
    *(float *)(param_1 + 0xe84) = fVar8;
    *(float *)(param_1 + 0xe88) = fVar9;
    *(float *)(param_1 + 0xe8c) = fVar5;
    *(undefined8 *)(param_1 + 0xe90) = *(undefined8 *)(param_1 + 0xe60);
    *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0xe68);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(param_1 + 0xe70);
    *(undefined8 *)(param_1 + 0xea8) = *(undefined8 *)(param_1 + 0xe78);
  }
  fVar5 = *(float *)(*(longlong *)(param_1 + 0x1680) + 0x760) * 0.008726646;
  if (fVar5 < 0.0) {
    fVar3 = fVar5 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = fVar5 * 0.15915494 + 0.5;
  }
  fVar5 = fVar5 - (float)(int)fVar3 * 6.2831855;
  if (fVar5 <= 1.5707964) {
    if (-1.5707964 <= fVar5) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = -1.0;
      fVar5 = -3.1415927 - fVar5;
    }
  }
  else {
    fVar3 = -1.0;
    fVar5 = 3.1415927 - fVar5;
  }
  fVar4 = fVar5 * fVar5;
  fVar5 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 + 0.008333331
            ) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar5;
  fVar11 = DAT_1464aa7a0 * fVar5;
  fVar10 = DAT_1464aa798._4_4_ * fVar5;
  fVar5 = (float)DAT_1464aa798 * fVar5;
  fVar3 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 + 0.041666638)
            * fVar4 - 0.5) * fVar4 + 1.0) * fVar3;
  FUN_141215940(param_1 + 0xcc0);
  fVar4 = *(float *)(param_1 + 0xcf0);
  fVar1 = *(float *)(param_1 + 0xcf4);
  fVar2 = *(float *)(param_1 + 0xcf8);
  fVar7 = *(float *)(param_1 + 0xcfc);
  *(undefined1 *)(param_1 + 0xd69) = 1;
  *(bool *)(param_1 + 0xd68) = *(int *)(param_1 + 0xd60) == 0;
  fVar6 = fVar3 * fVar4 * _DAT_146876b90 + fVar7 * fVar5 + fVar11 * fVar1 * _DAT_146876b80 +
          fVar10 * fVar2 * _DAT_146876b70;
  fVar8 = fVar11 * fVar4 * fRam0000000146876b94 + fVar7 * fVar10 +
          fVar3 * fVar1 * fRam0000000146876b84 + fVar5 * fVar2 * fRam0000000146876b74;
  fVar9 = fVar10 * fVar4 * fRam0000000146876b98 + fVar7 * fVar11 +
          fVar5 * fVar1 * fRam0000000146876b88 + fVar3 * fVar2 * fRam0000000146876b78;
  fVar5 = fVar5 * fVar4 * fRam0000000146876b9c + fVar7 * fVar3 +
          fVar10 * fVar1 * fRam0000000146876b8c + fVar11 * fVar2 * fRam0000000146876b7c;
  *(float *)(param_1 + 0xcf0) = fVar6;
  *(float *)(param_1 + 0xcf4) = fVar8;
  *(float *)(param_1 + 0xcf8) = fVar9;
  *(float *)(param_1 + 0xcfc) = fVar5;
  if (*(int *)(param_1 + 0xd60) == 0) {
    *(float *)(param_1 + 0xd20) = fVar6;
    *(float *)(param_1 + 0xd24) = fVar8;
    *(float *)(param_1 + 0xd28) = fVar9;
    *(float *)(param_1 + 0xd2c) = fVar5;
    *(undefined8 *)(param_1 + 0xd30) = *(undefined8 *)(param_1 + 0xd00);
    *(undefined8 *)(param_1 + 0xd38) = *(undefined8 *)(param_1 + 0xd08);
    *(undefined8 *)(param_1 + 0xd40) = *(undefined8 *)(param_1 + 0xd10);
    *(undefined8 *)(param_1 + 0xd48) = *(undefined8 *)(param_1 + 0xd18);
  }
  fVar5 = *(float *)(param_1 + 0x17a8) * 0.5;
  if (fVar5 < 0.0) {
    fVar3 = fVar5 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = fVar5 * 0.15915494 + 0.5;
  }
  fVar5 = fVar5 - (float)(int)fVar3 * 6.2831855;
  if (fVar5 <= 1.5707964) {
    if (-1.5707964 <= fVar5) {
      fVar12 = 1.0;
    }
    else {
      fVar5 = -3.1415927 - fVar5;
    }
  }
  else {
    fVar5 = 3.1415927 - fVar5;
  }
  fVar3 = fVar5 * fVar5;
  fVar5 = (((((2.7525562e-06 - fVar3 * 2.3889859e-08) * fVar3 - 0.00019840874) * fVar3 + 0.008333331
            ) * fVar3 - 0.16666667) * fVar3 + 1.0) * fVar5;
  fVar9 = DAT_1464aa7b0 * fVar5;
  fVar10 = (float)DAT_1464aa7a8 * fVar5;
  fVar5 = DAT_1464aa7a8._4_4_ * fVar5;
  fVar12 = (((((2.4760495e-05 - fVar3 * 2.6051615e-07) * fVar3 - 0.0013888378) * fVar3 + 0.041666638
             ) * fVar3 - 0.5) * fVar3 + 1.0) * fVar12;
  FUN_141215940(param_1 + 0xf80);
  fVar3 = *(float *)(param_1 + 0xfb0);
  fVar4 = *(float *)(param_1 + 0xfb4);
  fVar1 = *(float *)(param_1 + 0xfb8);
  fVar2 = *(float *)(param_1 + 0xfbc);
  *(undefined1 *)(param_1 + 0x1029) = 1;
  *(bool *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1020) == 0;
  fVar7 = fVar3 * fVar12 * _DAT_146876b90 + fVar2 * fVar10 + fVar9 * fVar4 * _DAT_146876b80 +
          fVar5 * fVar1 * _DAT_146876b70;
  fVar6 = fVar3 * fVar9 * fRam0000000146876b94 + fVar2 * fVar5 +
          fVar12 * fVar4 * fRam0000000146876b84 + fVar10 * fVar1 * fRam0000000146876b74;
  fVar8 = fVar3 * fVar5 * fRam0000000146876b98 + fVar2 * fVar9 +
          fVar10 * fVar4 * fRam0000000146876b88 + fVar12 * fVar1 * fRam0000000146876b78;
  fVar5 = fVar3 * fVar10 * fRam0000000146876b9c + fVar2 * fVar12 +
          fVar5 * fVar4 * fRam0000000146876b8c + fVar9 * fVar1 * fRam0000000146876b7c;
  *(float *)(param_1 + 0xfb0) = fVar7;
  *(float *)(param_1 + 0xfb4) = fVar6;
  *(float *)(param_1 + 0xfb8) = fVar8;
  *(float *)(param_1 + 0xfbc) = fVar5;
  if (*(int *)(param_1 + 0x1020) == 0) {
    *(float *)(param_1 + 0xfe0) = fVar7;
    *(float *)(param_1 + 0xfe4) = fVar6;
    *(float *)(param_1 + 0xfe8) = fVar8;
    *(float *)(param_1 + 0xfec) = fVar5;
    *(undefined8 *)(param_1 + 0xff0) = *(undefined8 *)(param_1 + 0xfc0);
    *(undefined8 *)(param_1 + 0xff8) = *(undefined8 *)(param_1 + 0xfc8);
    *(undefined8 *)(param_1 + 0x1000) = *(undefined8 *)(param_1 + 0xfd0);
    *(undefined8 *)(param_1 + 0x1008) = *(undefined8 *)(param_1 + 0xfd8);
  }
  return;
}



// FUNCTION 1412460a0 FUN_1412460a0 body=2023 status=ok
// SIG undefined FUN_1412460a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412460a0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [160];
  
  FUN_141215940(param_1 + 0x19c0);
  fVar19 = *(float *)(param_1 + 0x19f0);
  fVar7 = *(float *)(param_1 + 0x19f4);
  fVar20 = *(float *)(param_1 + 0x19f8);
  fVar8 = *(float *)(param_1 + 0x19fc);
  pfVar5 = (float *)FRotator::Quaternion(param_1 + 0x44c,&local_c8);
  fVar3 = *pfVar5;
  fVar10 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar16 = fVar14 * fVar19 * _DAT_146876b90 + fVar8 * fVar3 + fVar12 * fVar7 * _DAT_146876b80 +
           fVar10 * fVar20 * _DAT_146876b70;
  fVar17 = fVar12 * fVar19 * fRam0000000146876b94 + fVar8 * fVar10 +
           fVar14 * fVar7 * fRam0000000146876b84 + fVar3 * fVar20 * fRam0000000146876b74;
  fVar18 = fVar10 * fVar19 * fRam0000000146876b98 + fVar8 * fVar12 +
           fVar3 * fVar7 * fRam0000000146876b88 + fVar14 * fVar20 * fRam0000000146876b78;
  fVar19 = fVar3 * fVar19 * fRam0000000146876b9c + fVar8 * fVar14 +
           fVar10 * fVar7 * fRam0000000146876b8c + fVar12 * fVar20 * fRam0000000146876b7c;
  FUN_141215940(param_1 + 0x19c0);
  *(float *)(param_1 + 0x19f0) = fVar16;
  *(float *)(param_1 + 0x19f4) = fVar17;
  *(float *)(param_1 + 0x19f8) = fVar18;
  *(float *)(param_1 + 0x19fc) = fVar19;
  *(undefined1 *)(param_1 + 0x1a69) = 1;
  *(bool *)(param_1 + 0x1a68) = *(int *)(param_1 + 0x1a60) == 0;
  if (*(int *)(param_1 + 0x1a60) == 0) {
    *(float *)(param_1 + 0x1a20) = fVar16;
    *(float *)(param_1 + 0x1a24) = fVar17;
    *(float *)(param_1 + 0x1a28) = fVar18;
    *(float *)(param_1 + 0x1a2c) = fVar19;
    *(undefined8 *)(param_1 + 0x1a30) = *(undefined8 *)(param_1 + 0x1a00);
    *(undefined8 *)(param_1 + 0x1a38) = *(undefined8 *)(param_1 + 0x1a08);
    *(undefined8 *)(param_1 + 0x1a40) = *(undefined8 *)(param_1 + 0x1a10);
    *(undefined8 *)(param_1 + 0x1a48) = *(undefined8 *)(param_1 + 0x1a18);
  }
  fVar19 = *(float *)(param_1 + 0x444) * 0.008726646;
  if (fVar19 < 0.0) {
    fVar7 = fVar19 * 0.15915494 - 0.5;
  }
  else {
    fVar7 = fVar19 * 0.15915494 + 0.5;
  }
  fVar20 = -1.0;
  fVar19 = fVar19 - (float)(int)fVar7 * 6.2831855;
  if (fVar19 <= 1.5707964) {
    if (-1.5707964 <= fVar19) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = -1.0;
      fVar19 = -3.1415927 - fVar19;
    }
  }
  else {
    fVar7 = -1.0;
    fVar19 = 3.1415927 - fVar19;
  }
  fVar8 = fVar19 * fVar19;
  fVar19 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
             0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fVar19;
  fVar16 = DAT_1464aa7a0 * fVar19;
  fVar14 = DAT_1464aa798._4_4_ * fVar19;
  fVar19 = (float)DAT_1464aa798 * fVar19;
  fVar7 = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 + 0.041666638)
            * fVar8 - 0.5) * fVar8 + 1.0) * fVar7;
  FUN_141215940(param_1 + 0x1b20);
  fVar8 = *(float *)(param_1 + 0x1b50);
  fVar3 = *(float *)(param_1 + 0x1b54);
  fVar10 = *(float *)(param_1 + 7000);
  fVar12 = *(float *)(param_1 + 0x1b5c);
  local_c8 = CONCAT44(fVar14,fVar19);
  fVar17 = fVar7 * fVar8 * _DAT_146876b90 + fVar12 * fVar19 + fVar16 * fVar3 * _DAT_146876b80 +
           fVar14 * fVar10 * _DAT_146876b70;
  fVar18 = fVar16 * fVar8 * fRam0000000146876b94 + fVar12 * fVar14 +
           fVar7 * fVar3 * fRam0000000146876b84 + fVar19 * fVar10 * fRam0000000146876b74;
  fVar15 = fVar14 * fVar8 * fRam0000000146876b98 + fVar12 * fVar16 +
           fVar19 * fVar3 * fRam0000000146876b88 + fVar7 * fVar10 * fRam0000000146876b78;
  fVar19 = fVar19 * fVar8 * fRam0000000146876b9c + fVar12 * fVar7 +
           fVar14 * fVar3 * fRam0000000146876b8c + fVar16 * fVar10 * fRam0000000146876b7c;
  fStack_c0 = fVar16;
  fStack_bc = fVar7;
  FUN_141215940(param_1 + 0x1b20);
  *(float *)(param_1 + 0x1b50) = fVar17;
  *(float *)(param_1 + 0x1b54) = fVar18;
  *(float *)(param_1 + 7000) = fVar15;
  *(float *)(param_1 + 0x1b5c) = fVar19;
  *(undefined1 *)(param_1 + 0x1bc9) = 1;
  *(bool *)(param_1 + 0x1bc8) = *(int *)(param_1 + 0x1bc0) == 0;
  if (*(int *)(param_1 + 0x1bc0) == 0) {
    *(float *)(param_1 + 0x1b80) = fVar17;
    *(float *)(param_1 + 0x1b84) = fVar18;
    *(float *)(param_1 + 0x1b88) = fVar15;
    *(float *)(param_1 + 0x1b8c) = fVar19;
    *(undefined8 *)(param_1 + 0x1b90) = *(undefined8 *)(param_1 + 0x1b60);
    *(undefined8 *)(param_1 + 0x1b98) = *(undefined8 *)(param_1 + 0x1b68);
    *(undefined8 *)(param_1 + 0x1ba0) = *(undefined8 *)(param_1 + 0x1b70);
    *(undefined8 *)(param_1 + 0x1ba8) = *(undefined8 *)(param_1 + 0x1b78);
  }
  FRotator::Quaternion(param_1 + 0x484,&local_b8);
  uVar6 = FRotator::Quaternion(param_1 + 0x464,&local_c8);
  FUN_14120ef60(param_1 + 0x520,3,uVar6,1);
  fStack_c0 = *(float *)(param_1 + 0x470);
  local_c8 = 0;
  uVar6 = FRotator::Quaternion(&local_c8,local_a8);
  FUN_14120e180(param_1 + 0x520,0x37,uVar6,1);
  FUN_141215940(param_1 + 0x2ba0);
  fVar8 = *(float *)(param_1 + 0x2be0) + *(float *)(param_1 + 0x478);
  fVar7 = *(float *)(param_1 + 0x2be4) + *(float *)(param_1 + 0x47c);
  fVar19 = *(float *)(param_1 + 0x2be8) + *(float *)(param_1 + 0x480);
  *(undefined1 *)(param_1 + 0x2c49) = 1;
  *(bool *)(param_1 + 0x2c48) = *(int *)(param_1 + 0x2c40) == 0;
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar19;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x2be0) = auVar1;
  if (*(int *)(param_1 + 0x2c40) == 0) {
    *(undefined8 *)(param_1 + 0x2c00) = *(undefined8 *)(param_1 + 0x2bd0);
    *(undefined8 *)(param_1 + 0x2c08) = *(undefined8 *)(param_1 + 0x2bd8);
    auVar2._4_4_ = fVar7;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x2c10) = auVar2;
    *(undefined8 *)(param_1 + 0x2c20) = *(undefined8 *)(param_1 + 0x2bf0);
    *(undefined8 *)(param_1 + 0x2c28) = *(undefined8 *)(param_1 + 0x2bf8);
  }
  FUN_141215940(param_1 + 0x5d0);
  fVar4 = fRam0000000146876b9c;
  fVar15 = fRam0000000146876b98;
  fVar18 = fRam0000000146876b94;
  fVar17 = _DAT_146876b90;
  fVar16 = fRam0000000146876b8c;
  fVar14 = fRam0000000146876b88;
  fVar12 = fRam0000000146876b84;
  fVar10 = _DAT_146876b80;
  fVar19 = *(float *)(param_1 + 0x600);
  fVar7 = *(float *)(param_1 + 0x604);
  fVar8 = *(float *)(param_1 + 0x608);
  fVar3 = *(float *)(param_1 + 0x60c);
  *(undefined1 *)(param_1 + 0x679) = 1;
  *(bool *)(param_1 + 0x678) = *(int *)(param_1 + 0x670) == 0;
  fVar9 = fVar3 * local_b8 * fVar17 + fStack_ac * fVar19 + fVar8 * fStack_b4 * fVar10 +
          fVar7 * fStack_b0 * _DAT_146876b70;
  fVar11 = fVar8 * local_b8 * fVar18 + fStack_ac * fVar7 + fVar3 * fStack_b4 * fVar12 +
           fVar19 * fStack_b0 * fRam0000000146876b74;
  fVar13 = fVar7 * local_b8 * fVar15 + fStack_ac * fVar8 + fVar19 * fStack_b4 * fVar14 +
           fVar3 * fStack_b0 * fRam0000000146876b78;
  fVar19 = fVar19 * local_b8 * fVar4 + fStack_ac * fVar3 + fVar7 * fStack_b4 * fVar16 +
           fVar8 * fStack_b0 * fRam0000000146876b7c;
  *(float *)(param_1 + 0x600) = fVar9;
  *(float *)(param_1 + 0x604) = fVar11;
  *(float *)(param_1 + 0x608) = fVar13;
  *(float *)(param_1 + 0x60c) = fVar19;
  if (*(int *)(param_1 + 0x670) == 0) {
    *(float *)(param_1 + 0x630) = fVar9;
    *(float *)(param_1 + 0x634) = fVar11;
    *(float *)(param_1 + 0x638) = fVar13;
    *(float *)(param_1 + 0x63c) = fVar19;
    *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x610);
    *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_1 + 0x618);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_1 + 0x620);
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_1 + 0x624);
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_1 + 0x628);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x62c);
  }
  FUN_141215940(param_1 + 0x680);
  fVar19 = *(float *)(param_1 + 0x6b0);
  fVar7 = *(float *)(param_1 + 0x6b4);
  fVar8 = *(float *)(param_1 + 0x6b8);
  fVar3 = *(float *)(param_1 + 0x6bc);
  *(undefined1 *)(param_1 + 0x729) = 1;
  *(bool *)(param_1 + 0x728) = *(int *)(param_1 + 0x720) == 0;
  fVar10 = fVar3 * local_b8 * fVar17 + fStack_ac * fVar19 + fVar8 * fStack_b4 * fVar10 +
           fVar7 * fStack_b0 * _DAT_146876b70;
  fVar12 = fVar8 * local_b8 * fVar18 + fStack_ac * fVar7 + fVar3 * fStack_b4 * fVar12 +
           fVar19 * fStack_b0 * fRam0000000146876b74;
  fVar14 = fVar7 * local_b8 * fVar15 + fStack_ac * fVar8 + fVar19 * fStack_b4 * fVar14 +
           fVar3 * fStack_b0 * fRam0000000146876b78;
  fVar19 = fVar19 * local_b8 * fVar4 + fStack_ac * fVar3 + fVar7 * fStack_b4 * fVar16 +
           fVar8 * fStack_b0 * fRam0000000146876b7c;
  *(float *)(param_1 + 0x6b0) = fVar10;
  *(float *)(param_1 + 0x6b4) = fVar12;
  *(float *)(param_1 + 0x6b8) = fVar14;
  *(float *)(param_1 + 0x6bc) = fVar19;
  if (*(int *)(param_1 + 0x720) == 0) {
    *(float *)(param_1 + 0x6e0) = fVar10;
    *(float *)(param_1 + 0x6e4) = fVar12;
    *(float *)(param_1 + 0x6e8) = fVar14;
    *(float *)(param_1 + 0x6ec) = fVar19;
    *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_1 + 0x6c0);
    *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(param_1 + 0x6c8);
    *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x6d0);
    *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_1 + 0x6d8);
  }
  fVar19 = *(float *)(param_1 + 0x4b0) * 0.5;
  if (fVar19 < 0.0) {
    fVar7 = fVar19 * 0.15915494 - 0.5;
  }
  else {
    fVar7 = fVar19 * 0.15915494 + 0.5;
  }
  fVar19 = fVar19 - (float)(int)fVar7 * 6.2831855;
  if (fVar19 <= 1.5707964) {
    if (-1.5707964 <= fVar19) {
      fVar20 = 1.0;
    }
    else {
      fVar19 = -3.1415927 - fVar19;
    }
  }
  else {
    fVar19 = 3.1415927 - fVar19;
  }
  fVar7 = fVar19 * fVar19;
  fVar19 = (((((2.7525562e-06 - fVar7 * 2.3889859e-08) * fVar7 - 0.00019840874) * fVar7 +
             0.008333331) * fVar7 - 0.16666667) * fVar7 + 1.0) * fVar19;
  fVar12 = DAT_1464aa7a8._4_4_ * fVar19;
  fVar14 = DAT_1464aa7b0 * fVar19;
  fVar19 = (float)DAT_1464aa7a8 * fVar19;
  fVar20 = (((((2.4760495e-05 - fVar7 * 2.6051615e-07) * fVar7 - 0.0013888378) * fVar7 + 0.041666638
             ) * fVar7 - 0.5) * fVar7 + 1.0) * fVar20;
  FUN_141215940(param_1 + 0x22b0);
  fVar7 = *(float *)(param_1 + 0x22e0);
  fVar8 = *(float *)(param_1 + 0x22e4);
  fVar3 = *(float *)(param_1 + 0x22e8);
  fVar10 = *(float *)(param_1 + 0x22ec);
  fVar16 = fVar20 * fVar7 * fVar17 + fVar10 * fVar19 + fVar14 * fVar8 * _DAT_146876b80 +
           fVar12 * fVar3 * _DAT_146876b70;
  fVar17 = fVar14 * fVar7 * fVar18 + fVar10 * fVar12 + fVar20 * fVar8 * fRam0000000146876b84 +
           fVar19 * fVar3 * fRam0000000146876b74;
  fVar18 = fVar12 * fVar7 * fVar15 + fVar10 * fVar14 + fVar19 * fVar8 * fRam0000000146876b88 +
           fVar20 * fVar3 * fRam0000000146876b78;
  fVar19 = fVar19 * fVar7 * fVar4 + fVar10 * fVar20 + fVar12 * fVar8 * fRam0000000146876b8c +
           fVar14 * fVar3 * fRam0000000146876b7c;
  FUN_141215940(param_1 + 0x22b0);
  *(float *)(param_1 + 0x22e0) = fVar16;
  *(float *)(param_1 + 0x22e4) = fVar17;
  *(float *)(param_1 + 0x22e8) = fVar18;
  *(float *)(param_1 + 0x22ec) = fVar19;
  *(undefined1 *)(param_1 + 0x2359) = 1;
  *(bool *)(param_1 + 0x2358) = *(int *)(param_1 + 0x2350) == 0;
  if (*(int *)(param_1 + 0x2350) == 0) {
    *(float *)(param_1 + 0x2310) = fVar16;
    *(float *)(param_1 + 0x2314) = fVar17;
    *(float *)(param_1 + 0x2318) = fVar18;
    *(float *)(param_1 + 0x231c) = fVar19;
    *(undefined8 *)(param_1 + 0x2320) = *(undefined8 *)(param_1 + 0x22f0);
    *(undefined8 *)(param_1 + 9000) = *(undefined8 *)(param_1 + 0x22f8);
    *(undefined8 *)(param_1 + 0x2330) = *(undefined8 *)(param_1 + 0x2300);
    *(undefined8 *)(param_1 + 0x2338) = *(undefined8 *)(param_1 + 0x2308);
  }
  return;
}



// FUNCTION 141246890 FUN_141246890 body=14524 status=ok
// SIG undefined FUN_141246890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141246890(longlong param_1,longlong *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res10;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float local_234;
  undefined1 local_230 [24];
  undefined1 local_218 [8];
  undefined8 uStack_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [64];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  if ((int)param_2[1] != 4) {
    return;
  }
  FUN_141215940(param_1 + 0xb50);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0xb90);
  local_208 = auVar3._0_4_ - *param_3;
  local_204 = auVar3._4_4_ - param_3[1];
  local_200 = auVar3._8_4_ - param_3[2];
  FUN_141215940(param_1 + 0x1230);
  lVar1 = param_1 + 0x520;
  local_1f8 = *param_4 - *(float *)(param_1 + 0x1270);
  local_1f4 = param_4[1] - *(float *)(param_1 + 0x1274);
  local_1f0 = param_4[2] - *(float *)(param_1 + 0x1278);
  FUN_141224150(lVar1,local_230,0);
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_208,local_230);
  puVar6 = (undefined8 *)FMatrix::ToQuat(uVar5,local_218);
  FUN_141215940(param_1 + 0xb50);
  uVar5 = *puVar6;
  uVar4 = puVar6[1];
  *(undefined8 *)(param_1 + 0xb80) = uVar5;
  *(undefined8 *)(param_1 + 0xb88) = uVar4;
  *(undefined1 *)(param_1 + 0xbf9) = 1;
  *(bool *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xbf0) == 0;
  if (*(int *)(param_1 + 0xbf0) == 0) {
    *(undefined8 *)(param_1 + 0xbb0) = uVar5;
    *(undefined8 *)(param_1 + 3000) = uVar4;
    *(undefined8 *)(param_1 + 0xbc0) = *(undefined8 *)(param_1 + 0xb90);
    *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xb98);
    *(undefined8 *)(param_1 + 0xbd0) = *(undefined8 *)(param_1 + 0xba0);
    *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_1 + 0xba8);
  }
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_1f8,local_230);
  puVar6 = (undefined8 *)FMatrix::ToQuat(uVar5,local_218);
  FUN_141215940(param_1 + 0x1230);
  uVar5 = *puVar6;
  uVar4 = puVar6[1];
  *(undefined8 *)(param_1 + 0x1260) = uVar5;
  *(undefined8 *)(param_1 + 0x1268) = uVar4;
  *(undefined1 *)(param_1 + 0x12d9) = 1;
  *(bool *)(param_1 + 0x12d8) = *(int *)(param_1 + 0x12d0) == 0;
  if (*(int *)(param_1 + 0x12d0) == 0) {
    *(undefined8 *)(param_1 + 0x1290) = uVar5;
    *(undefined8 *)(param_1 + 0x1298) = uVar4;
    *(undefined8 *)(param_1 + 0x12a0) = *(undefined8 *)(param_1 + 0x1270);
    *(undefined8 *)(param_1 + 0x12a8) = *(undefined8 *)(param_1 + 0x1278);
    *(undefined8 *)(param_1 + 0x12b0) = *(undefined8 *)(param_1 + 0x1280);
    *(undefined8 *)(param_1 + 0x12b8) = *(undefined8 *)(param_1 + 0x1288);
  }
  fVar19 = *(float *)(param_1 + 0x4c8) +
           *(float *)((longlong)*(int *)(param_1 + 0x3ac) * 0x20 + 8 + *param_2);
  fVar8 = (float)(int)(fVar19 * 0.0027777778) * 360.0;
  if (ABS(fVar19) < ABS(fVar8)) {
    fVar8 = fVar19;
  }
  fVar19 = fVar19 - fVar8;
  if (fVar19 < 0.0) {
    fVar19 = fVar19 + 360.0;
  }
  if (180.0 < fVar19) {
    fVar19 = fVar19 - 360.0;
  }
  fVar19 = fVar19 * -0.017453292;
  fVar18 = *(float *)(param_1 + 0x4c8) +
           *(float *)((longlong)*(int *)(param_1 + 0x3bc) * 0x20 + 8 + *param_2);
  fVar8 = (float)(int)(fVar18 * 0.0027777778) * 360.0;
  if (ABS(fVar18) < ABS(fVar8)) {
    fVar8 = fVar18;
  }
  fVar18 = fVar18 - fVar8;
  if (fVar18 < 0.0) {
    fVar18 = fVar18 + 360.0;
  }
  if (180.0 < fVar18) {
    fVar18 = fVar18 - 360.0;
  }
  fVar18 = fVar18 * -0.017453292;
  if ((*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e3) == '\0') ||
     (fVar8 = *(float *)(param_1 + 0x3f4), fVar8 <= 0.0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x3b8);
    *(float *)(param_1 + 0x3ec) = fVar19;
    *(float *)(param_1 + 0x3f0) = fVar18;
    uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x148);
    fVar8 = (float)FRichCurve::Eval(uVar5,uVar2,0);
    uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x148);
    local_234 = (float)FRichCurve::Eval(uVar5,*(undefined4 *)(param_1 + 0x3c8),0);
    fVar8 = fVar8 * -0.008726646;
    if (fVar8 < 0.0) {
      fVar9 = fVar8 * 0.15915494 - 0.5;
    }
    else {
      fVar9 = fVar8 * 0.15915494 + 0.5;
    }
    fVar8 = fVar8 - (float)(int)fVar9 * 6.2831855;
    if (fVar8 <= 1.5707964) {
      if (-1.5707964 <= fVar8) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = -1.0;
        fVar8 = -3.1415927 - fVar8;
      }
    }
    else {
      fVar9 = -1.0;
      fVar8 = 3.1415927 - fVar8;
    }
    fVar16 = fVar8 * fVar8;
    fVar8 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
              0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar8;
    fVar14 = DAT_1464aa7a8._4_4_ * fVar8;
    local_278 = DAT_1464aa7b0 * fVar8;
    fVar8 = (float)DAT_1464aa7a8 * fVar8;
    fVar9 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
              0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar9;
    FUN_141215940(param_1 + 0xc00);
    *(undefined1 *)(param_1 + 0xca9) = 1;
    *(bool *)(param_1 + 0xca8) = *(int *)(param_1 + 0xca0) == 0;
    fStack_280 = local_278;
    *(float *)(param_1 + 0xc30) = fVar8;
    *(float *)(param_1 + 0xc34) = fVar14;
    *(float *)(param_1 + 0xc38) = local_278;
    *(float *)(param_1 + 0xc3c) = fVar9;
    if (*(int *)(param_1 + 0xca0) == 0) {
      *(float *)(param_1 + 0xc60) = fVar8;
      *(float *)(param_1 + 0xc64) = fVar14;
      *(float *)(param_1 + 0xc68) = local_278;
      *(float *)(param_1 + 0xc6c) = fVar9;
      *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xc40);
      *(undefined8 *)(param_1 + 0xc78) = *(undefined8 *)(param_1 + 0xc48);
      *(undefined8 *)(param_1 + 0xc80) = *(undefined8 *)(param_1 + 0xc50);
      *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xc58);
    }
    local_288 = fVar8;
    fStack_284 = fVar14;
    fStack_27c = fVar9;
    puVar6 = (undefined8 *)FUN_1412242c0(lVar1,&local_248,10);
    fVar8 = *(float *)(param_1 + 0x4b4) * 0.008726646;
    uVar5 = *puVar6;
    fStack_260 = *(float *)(puVar6 + 1);
    if (fVar8 < 0.0) {
      fVar9 = fVar8 * 0.15915494 - 0.5;
    }
    else {
      fVar9 = fVar8 * 0.15915494 + 0.5;
    }
    fVar8 = fVar8 - (float)(int)fVar9 * 6.2831855;
    if (fVar8 <= 1.5707964) {
      if (-1.5707964 <= fVar8) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = -1.0;
        fVar8 = -3.1415927 - fVar8;
      }
    }
    else {
      fVar9 = -1.0;
      fVar8 = 3.1415927 - fVar8;
    }
    local_268._0_4_ = (float)uVar5;
    local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    fVar16 = fVar8 * fVar8;
    fVar8 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
              0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar8;
    fVar17 = (float)local_268 * fVar8;
    fVar9 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
              0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar9;
    fVar15 = local_268._4_4_ * fVar8;
    fVar8 = fStack_260 * fVar8;
    local_268 = uVar5;
    FUN_141215940(param_1 + 0xc00);
    fVar16 = *(float *)(param_1 + 0xc30);
    fVar14 = *(float *)(param_1 + 0xc34);
    fVar7 = *(float *)(param_1 + 0xc38);
    fVar10 = *(float *)(param_1 + 0xc3c);
    *(undefined1 *)(param_1 + 0xca9) = 1;
    *(bool *)(param_1 + 0xca8) = *(int *)(param_1 + 0xca0) == 0;
    fVar11 = fVar10 * fVar17 * _DAT_146876b90 + fVar9 * fVar16 + fVar7 * fVar15 * _DAT_146876b80 +
             fVar14 * fVar8 * _DAT_146876b70;
    fVar12 = fVar7 * fVar17 * fRam0000000146876b94 + fVar9 * fVar14 +
             fVar10 * fVar15 * fRam0000000146876b84 + fVar16 * fVar8 * fRam0000000146876b74;
    fVar13 = fVar14 * fVar17 * fRam0000000146876b98 + fVar9 * fVar7 +
             fVar16 * fVar15 * fRam0000000146876b88 + fVar10 * fVar8 * fRam0000000146876b78;
    fVar16 = fVar16 * fVar17 * fRam0000000146876b9c + fVar9 * fVar10 +
             fVar14 * fVar15 * fRam0000000146876b8c + fVar7 * fVar8 * fRam0000000146876b7c;
    *(float *)(param_1 + 0xc30) = fVar11;
    *(float *)(param_1 + 0xc34) = fVar12;
    *(float *)(param_1 + 0xc38) = fVar13;
    *(float *)(param_1 + 0xc3c) = fVar16;
    if (*(int *)(param_1 + 0xca0) == 0) {
      *(float *)(param_1 + 0xc60) = fVar11;
      *(float *)(param_1 + 0xc64) = fVar12;
      *(float *)(param_1 + 0xc68) = fVar13;
      *(float *)(param_1 + 0xc6c) = fVar16;
      *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xc40);
      *(undefined8 *)(param_1 + 0xc78) = *(undefined8 *)(param_1 + 0xc48);
      *(undefined8 *)(param_1 + 0xc80) = *(undefined8 *)(param_1 + 0xc50);
      *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xc58);
    }
    fVar16 = local_234 * 0.008726646;
    if (fVar16 < 0.0) {
      fVar14 = fVar16 * 0.15915494 - 0.5;
    }
    else {
      fVar14 = fVar16 * 0.15915494 + 0.5;
    }
    fVar16 = fVar16 - (float)(int)fVar14 * 6.2831855;
    if (fVar16 <= 1.5707964) {
      if (-1.5707964 <= fVar16) {
        fVar14 = 1.0;
      }
      else {
        fVar14 = -1.0;
        fVar16 = -3.1415927 - fVar16;
      }
    }
    else {
      fVar14 = -1.0;
      fVar16 = 3.1415927 - fVar16;
    }
    fVar7 = fVar16 * fVar16;
    fVar16 = (((((2.7525562e-06 - fVar7 * 2.3889859e-08) * fVar7 - 0.00019840874) * fVar7 +
               0.008333331) * fVar7 - 0.16666667) * fVar7 + 1.0) * fVar16;
    local_278 = DAT_1464aa7b0 * fVar16;
    fVar10 = DAT_1464aa7a8._4_4_ * fVar16;
    fVar16 = (float)DAT_1464aa7a8 * fVar16;
    fVar14 = (((((2.4760495e-05 - fVar7 * 2.6051615e-07) * fVar7 - 0.0013888378) * fVar7 +
               0.041666638) * fVar7 - 0.5) * fVar7 + 1.0) * fVar14;
    local_288 = fVar17;
    fStack_284 = fVar15;
    fStack_280 = fVar8;
    fStack_27c = fVar9;
    FUN_141215940(param_1 + 0x12e0);
    *(undefined1 *)(param_1 + 0x1389) = 1;
    *(bool *)(param_1 + 5000) = *(int *)(param_1 + 0x1380) == 0;
    fStack_280 = local_278;
    *(float *)(param_1 + 0x1310) = fVar16;
    *(float *)(param_1 + 0x1314) = fVar10;
    *(float *)(param_1 + 0x1318) = local_278;
    *(float *)(param_1 + 0x131c) = fVar14;
    if (*(int *)(param_1 + 0x1380) == 0) {
      *(float *)(param_1 + 0x1340) = fVar16;
      *(float *)(param_1 + 0x1344) = fVar10;
      *(float *)(param_1 + 0x1348) = local_278;
      *(float *)(param_1 + 0x134c) = fVar14;
      *(undefined8 *)(param_1 + 0x1350) = *(undefined8 *)(param_1 + 0x1320);
      *(undefined8 *)(param_1 + 0x1358) = *(undefined8 *)(param_1 + 0x1328);
      *(undefined8 *)(param_1 + 0x1360) = *(undefined8 *)(param_1 + 0x1330);
      *(undefined8 *)(param_1 + 0x1368) = *(undefined8 *)(param_1 + 0x1338);
    }
    local_288 = fVar16;
    fStack_284 = fVar10;
    fStack_27c = fVar14;
    puVar6 = (undefined8 *)FUN_1412242c0(lVar1,&local_248,0x14);
    fVar8 = *(float *)(param_1 + 0x4b4) * 0.008726646;
    uVar5 = *puVar6;
    fStack_260 = *(float *)(puVar6 + 1);
    if (fVar8 < 0.0) {
      fVar9 = fVar8 * 0.15915494 - 0.5;
    }
    else {
      fVar9 = fVar8 * 0.15915494 + 0.5;
    }
    fVar8 = fVar8 - (float)(int)fVar9 * 6.2831855;
    if (fVar8 <= 1.5707964) {
      if (-1.5707964 <= fVar8) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = -1.0;
        fVar8 = -3.1415927 - fVar8;
      }
    }
    else {
      fVar9 = -1.0;
      fVar8 = 3.1415927 - fVar8;
    }
    local_268._0_4_ = (float)uVar5;
    local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    fVar16 = fVar8 * fVar8;
    fVar8 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
              0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar8;
    fVar17 = (float)local_268 * fVar8;
    fVar9 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
              0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar9;
    fVar15 = local_268._4_4_ * fVar8;
    fVar8 = fStack_260 * fVar8;
    local_268 = uVar5;
    FUN_141215940(param_1 + 0x12e0);
    fVar16 = *(float *)(param_1 + 0x1310);
    fVar14 = *(float *)(param_1 + 0x1314);
    fVar7 = *(float *)(param_1 + 0x1318);
    fVar10 = *(float *)(param_1 + 0x131c);
    *(undefined1 *)(param_1 + 0x1389) = 1;
    *(bool *)(param_1 + 5000) = *(int *)(param_1 + 0x1380) == 0;
    fVar11 = fVar10 * fVar17 * _DAT_146876b90 + fVar9 * fVar16 + fVar7 * fVar15 * _DAT_146876b80 +
             fVar14 * fVar8 * _DAT_146876b70;
    fVar12 = fVar7 * fVar17 * fRam0000000146876b94 + fVar9 * fVar14 +
             fVar10 * fVar15 * fRam0000000146876b84 + fVar16 * fVar8 * fRam0000000146876b74;
    fVar13 = fVar14 * fVar17 * fRam0000000146876b98 + fVar9 * fVar7 +
             fVar16 * fVar15 * fRam0000000146876b88 + fVar10 * fVar8 * fRam0000000146876b78;
    fVar16 = fVar16 * fVar17 * fRam0000000146876b9c + fVar9 * fVar10 +
             fVar14 * fVar15 * fRam0000000146876b8c + fVar7 * fVar8 * fRam0000000146876b7c;
    *(float *)(param_1 + 0x1310) = fVar11;
    *(float *)(param_1 + 0x1314) = fVar12;
    *(float *)(param_1 + 0x1318) = fVar13;
    *(float *)(param_1 + 0x131c) = fVar16;
    if (*(int *)(param_1 + 0x1380) == 0) {
      *(float *)(param_1 + 0x1340) = fVar11;
      *(float *)(param_1 + 0x1344) = fVar12;
      *(float *)(param_1 + 0x1348) = fVar13;
      *(float *)(param_1 + 0x134c) = fVar16;
      *(undefined8 *)(param_1 + 0x1350) = *(undefined8 *)(param_1 + 0x1320);
      *(undefined8 *)(param_1 + 0x1358) = *(undefined8 *)(param_1 + 0x1328);
      *(undefined8 *)(param_1 + 0x1360) = *(undefined8 *)(param_1 + 0x1330);
      *(undefined8 *)(param_1 + 0x1368) = *(undefined8 *)(param_1 + 0x1338);
    }
    fVar19 = fVar19 * 0.5;
    fVar16 = fVar19 * 0.15915494;
    if (fVar19 < 0.0) {
      fVar14 = fVar16 - 0.5;
    }
    else {
      fVar14 = fVar16 + 0.5;
    }
    fVar14 = fVar19 - (float)(int)fVar14 * 6.2831855;
    if (fVar14 <= 1.5707964) {
      if (-1.5707964 <= fVar14) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = -1.0;
        fVar14 = -3.1415927 - fVar14;
      }
    }
    else {
      fVar7 = -1.0;
      fVar14 = 3.1415927 - fVar14;
    }
    fVar10 = fVar14 * fVar14;
    fVar14 = (((((2.7525562e-06 - fVar10 * 2.3889859e-08) * fVar10 - 0.00019840874) * fVar10 +
               0.008333331) * fVar10 - 0.16666667) * fVar10 + 1.0) * fVar14;
    local_234 = DAT_1464aa7c0 * fVar14;
    local_278 = DAT_1464aa7b8._4_4_ * fVar14;
    fVar14 = (float)DAT_1464aa7b8 * fVar14;
    fVar7 = (((((2.4760495e-05 - fVar10 * 2.6051615e-07) * fVar10 - 0.0013888378) * fVar10 +
              0.041666638) * fVar10 - 0.5) * fVar10 + 1.0) * fVar7;
    local_288 = fVar17;
    fStack_284 = fVar15;
    fStack_280 = fVar8;
    fStack_27c = fVar9;
    FUN_141215940(param_1 + 0xaa0);
    fVar8 = *(float *)(param_1 + 0xad0);
    fVar9 = *(float *)(param_1 + 0xad4);
    fVar10 = *(float *)(param_1 + 0xad8);
    fVar11 = *(float *)(param_1 + 0xadc);
    *(undefined1 *)(param_1 + 0xb49) = 1;
    *(bool *)(param_1 + 0xb48) = *(int *)(param_1 + 0xb40) == 0;
    fStack_284 = local_278;
    fStack_280 = local_234;
    fVar12 = fVar7 * fVar8 * _DAT_146876b90 + fVar11 * fVar14 + local_234 * fVar9 * _DAT_146876b80 +
             local_278 * fVar10 * _DAT_146876b70;
    fVar13 = local_234 * fVar8 * fRam0000000146876b94 + fVar11 * local_278 +
             fVar7 * fVar9 * fRam0000000146876b84 + fVar14 * fVar10 * fRam0000000146876b74;
    fVar15 = local_278 * fVar8 * fRam0000000146876b98 + fVar11 * local_234 +
             fVar14 * fVar9 * fRam0000000146876b88 + fVar7 * fVar10 * fRam0000000146876b78;
    fVar8 = fVar14 * fVar8 * fRam0000000146876b9c + fVar11 * fVar7 +
            local_278 * fVar9 * fRam0000000146876b8c + local_234 * fVar10 * fRam0000000146876b7c;
    *(float *)(param_1 + 0xad0) = fVar12;
    *(float *)(param_1 + 0xad4) = fVar13;
    *(float *)(param_1 + 0xad8) = fVar15;
    *(float *)(param_1 + 0xadc) = fVar8;
    if (*(int *)(param_1 + 0xb40) == 0) {
      *(float *)(param_1 + 0xb00) = fVar12;
      *(float *)(param_1 + 0xb04) = fVar13;
      *(float *)(param_1 + 0xb08) = fVar15;
      *(float *)(param_1 + 0xb0c) = fVar8;
      *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_1 + 0xae0);
      *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_1 + 0xae8);
      *(undefined8 *)(param_1 + 0xb20) = *(undefined8 *)(param_1 + 0xaf0);
      *(undefined8 *)(param_1 + 0xb28) = *(undefined8 *)(param_1 + 0xaf8);
    }
    fVar18 = fVar18 * 0.5;
    local_258 = fVar18 * 0.15915494;
    if (fVar18 < 0.0) {
      fVar8 = local_258 - 0.5;
    }
    else {
      fVar8 = local_258 + 0.5;
    }
    fVar8 = fVar18 - (float)(int)fVar8 * 6.2831855;
    if (fVar8 <= 1.5707964) {
      if (-1.5707964 <= fVar8) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = -1.0;
        fVar8 = -3.1415927 - fVar8;
      }
    }
    else {
      fVar9 = -1.0;
      fVar8 = 3.1415927 - fVar8;
    }
    fVar10 = fVar8 * fVar8;
    fVar8 = (((((2.7525562e-06 - fVar10 * 2.3889859e-08) * fVar10 - 0.00019840874) * fVar10 +
              0.008333331) * fVar10 - 0.16666667) * fVar10 + 1.0) * fVar8;
    local_234 = DAT_1464aa7c0 * fVar8;
    local_278 = DAT_1464aa7b8._4_4_ * fVar8;
    fVar8 = (float)DAT_1464aa7b8 * fVar8;
    fVar9 = (((((2.4760495e-05 - fVar10 * 2.6051615e-07) * fVar10 - 0.0013888378) * fVar10 +
              0.041666638) * fVar10 - 0.5) * fVar10 + 1.0) * fVar9;
    local_288 = fVar14;
    fStack_27c = fVar7;
    FUN_141215940(param_1 + 0x9f0);
    fVar14 = *(float *)(param_1 + 0xa20);
    fVar7 = *(float *)(param_1 + 0xa24);
    fVar10 = *(float *)(param_1 + 0xa28);
    fVar11 = *(float *)(param_1 + 0xa2c);
    *(undefined1 *)(param_1 + 0xa99) = 1;
    *(bool *)(param_1 + 0xa98) = *(int *)(param_1 + 0xa90) == 0;
    fStack_284 = local_278;
    fStack_280 = local_234;
    fVar12 = fVar9 * fVar14 * _DAT_146876b90 + fVar11 * fVar8 + local_234 * fVar7 * _DAT_146876b80 +
             local_278 * fVar10 * _DAT_146876b70;
    fVar13 = local_234 * fVar14 * fRam0000000146876b94 + fVar11 * local_278 +
             fVar9 * fVar7 * fRam0000000146876b84 + fVar8 * fVar10 * fRam0000000146876b74;
    fVar15 = local_278 * fVar14 * fRam0000000146876b98 + fVar11 * local_234 +
             fVar8 * fVar7 * fRam0000000146876b88 + fVar9 * fVar10 * fRam0000000146876b78;
    fVar14 = fVar8 * fVar14 * fRam0000000146876b9c + fVar11 * fVar9 +
             local_278 * fVar7 * fRam0000000146876b8c + local_234 * fVar10 * fRam0000000146876b7c;
    *(float *)(param_1 + 0xa20) = fVar12;
    *(float *)(param_1 + 0xa24) = fVar13;
    *(float *)(param_1 + 0xa28) = fVar15;
    *(float *)(param_1 + 0xa2c) = fVar14;
    if (*(int *)(param_1 + 0xa90) == 0) {
      *(float *)(param_1 + 0xa50) = fVar12;
      *(float *)(param_1 + 0xa54) = fVar13;
      *(float *)(param_1 + 0xa58) = fVar15;
      *(float *)(param_1 + 0xa5c) = fVar14;
      *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xa30);
      *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_1 + 0xa40);
      *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xa48);
    }
    if (fVar19 < 0.0) {
      fVar16 = fVar16 - 0.5;
    }
    else {
      fVar16 = fVar16 + 0.5;
    }
    fVar19 = fVar19 - (float)(int)fVar16 * 6.2831855;
    if (fVar19 <= 1.5707964) {
      if (-1.5707964 <= fVar19) {
        fVar16 = 1.0;
      }
      else {
        fVar16 = -1.0;
        fVar19 = -3.1415927 - fVar19;
      }
    }
    else {
      fVar16 = -1.0;
      fVar19 = 3.1415927 - fVar19;
    }
    fVar14 = fVar19 * fVar19;
    fVar19 = (((((2.7525562e-06 - fVar14 * 2.3889859e-08) * fVar14 - 0.00019840874) * fVar14 +
               0.008333331) * fVar14 - 0.16666667) * fVar14 + 1.0) * fVar19;
    fVar13 = DAT_1464aa7b8._4_4_ * fVar19;
    local_278 = DAT_1464aa7c0 * fVar19;
    fVar19 = (float)DAT_1464aa7b8 * fVar19;
    fVar16 = (((((2.4760495e-05 - fVar14 * 2.6051615e-07) * fVar14 - 0.0013888378) * fVar14 +
               0.041666638) * fVar14 - 0.5) * fVar14 + 1.0) * fVar16;
    local_288 = fVar8;
    fStack_27c = fVar9;
    FUN_141215940(param_1 + 0x2410);
    fVar8 = *(float *)(param_1 + 0x2440);
    fVar9 = *(float *)(param_1 + 0x2444);
    fVar14 = *(float *)(param_1 + 0x2448);
    fVar7 = *(float *)(param_1 + 0x244c);
    *(undefined1 *)(param_1 + 0x24b9) = 1;
    *(bool *)(param_1 + 0x24b8) = *(int *)(param_1 + 0x24b0) == 0;
    fStack_280 = local_278;
    fVar10 = fVar16 * fVar8 * _DAT_146876b90 + fVar7 * fVar19 + local_278 * fVar9 * _DAT_146876b80 +
             fVar13 * fVar14 * _DAT_146876b70;
    fVar11 = local_278 * fVar8 * fRam0000000146876b94 + fVar7 * fVar13 +
             fVar16 * fVar9 * fRam0000000146876b84 + fVar19 * fVar14 * fRam0000000146876b74;
    fVar12 = fVar13 * fVar8 * fRam0000000146876b98 + fVar7 * local_278 +
             fVar19 * fVar9 * fRam0000000146876b88 + fVar16 * fVar14 * fRam0000000146876b78;
    fVar8 = fVar19 * fVar8 * fRam0000000146876b9c + fVar7 * fVar16 +
            fVar13 * fVar9 * fRam0000000146876b8c + local_278 * fVar14 * fRam0000000146876b7c;
    *(float *)(param_1 + 0x2440) = fVar10;
    *(float *)(param_1 + 0x2444) = fVar11;
    *(float *)(param_1 + 0x2448) = fVar12;
    *(float *)(param_1 + 0x244c) = fVar8;
    if (*(int *)(param_1 + 0x24b0) == 0) {
      *(float *)(param_1 + 0x2470) = fVar10;
      *(float *)(param_1 + 0x2474) = fVar11;
      *(float *)(param_1 + 0x2478) = fVar12;
      *(float *)(param_1 + 0x247c) = fVar8;
      *(undefined8 *)(param_1 + 0x2480) = *(undefined8 *)(param_1 + 0x2450);
      *(undefined8 *)(param_1 + 0x2488) = *(undefined8 *)(param_1 + 0x2458);
      *(undefined8 *)(param_1 + 0x2490) = *(undefined8 *)(param_1 + 0x2460);
      *(undefined8 *)(param_1 + 0x2498) = *(undefined8 *)(param_1 + 0x2468);
    }
    if (fVar18 < 0.0) {
      fVar8 = local_258 - 0.5;
    }
    else {
      fVar8 = local_258 + 0.5;
    }
    fVar18 = fVar18 - (float)(int)fVar8 * 6.2831855;
    if (fVar18 <= 1.5707964) {
      if (-1.5707964 <= fVar18) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = -1.0;
        fVar18 = -3.1415927 - fVar18;
      }
    }
    else {
      fVar8 = -1.0;
      fVar18 = 3.1415927 - fVar18;
    }
    fVar9 = fVar18 * fVar18;
    fVar18 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 +
               0.008333331) * fVar9 - 0.16666667) * fVar9 + 1.0) * fVar18;
    fVar12 = DAT_1464aa7b8._4_4_ * fVar18;
    local_278 = DAT_1464aa7c0 * fVar18;
    fVar18 = (float)DAT_1464aa7b8 * fVar18;
    fVar8 = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 +
              0.041666638) * fVar9 - 0.5) * fVar9 + 1.0) * fVar8;
    local_288 = fVar19;
    fStack_284 = fVar13;
    fStack_27c = fVar16;
    FUN_141215940(param_1 + 0x2360);
    fVar19 = *(float *)(param_1 + 0x2390);
    fVar9 = *(float *)(param_1 + 0x2394);
    fVar16 = *(float *)(param_1 + 0x2398);
    fVar14 = *(float *)(param_1 + 0x239c);
    *(undefined1 *)(param_1 + 0x2409) = 1;
    *(bool *)(param_1 + 0x2408) = *(int *)(param_1 + 0x2400) == 0;
    fStack_280 = local_278;
    fVar7 = fVar8 * fVar19 * _DAT_146876b90 + fVar14 * fVar18 + local_278 * fVar9 * _DAT_146876b80 +
            fVar16 * fVar12 * _DAT_146876b70;
    fVar10 = local_278 * fVar19 * fRam0000000146876b94 + fVar14 * fVar12 +
             fVar8 * fVar9 * fRam0000000146876b84 + fVar16 * fVar18 * fRam0000000146876b74;
    fVar11 = fVar12 * fVar19 * fRam0000000146876b98 + fVar14 * local_278 +
             fVar18 * fVar9 * fRam0000000146876b88 + fVar16 * fVar8 * fRam0000000146876b78;
    fVar19 = fVar18 * fVar19 * fRam0000000146876b9c + fVar14 * fVar8 +
             fVar12 * fVar9 * fRam0000000146876b8c + fVar16 * local_278 * fRam0000000146876b7c;
    *(float *)(param_1 + 0x2390) = fVar7;
    *(float *)(param_1 + 0x2394) = fVar10;
    *(float *)(param_1 + 0x2398) = fVar11;
    *(float *)(param_1 + 0x239c) = fVar19;
    local_288 = fVar18;
    fStack_284 = fVar12;
    fStack_27c = fVar8;
    if (*(int *)(param_1 + 0x2400) == 0) {
      *(float *)(param_1 + 0x23c0) = fVar7;
      *(float *)(param_1 + 0x23c4) = fVar10;
      *(float *)(param_1 + 0x23c8) = fVar11;
      *(float *)(param_1 + 0x23cc) = fVar19;
      *(undefined8 *)(param_1 + 0x23d0) = *(undefined8 *)(param_1 + 0x23a0);
      *(undefined8 *)(param_1 + 0x23d8) = *(undefined8 *)(param_1 + 0x23a8);
      *(undefined8 *)(param_1 + 0x23e0) = *(undefined8 *)(param_1 + 0x23b0);
      *(undefined8 *)(param_1 + 0x23e8) = *(undefined8 *)(param_1 + 0x23b8);
    }
  }
  else {
    local_234 = fVar8 * *(float *)(param_1 + 0x2d4);
    fVar9 = *(float *)(param_1 + 0x418) * *(float *)(param_1 + 0x324);
    local_258 = fVar9 * 0.75;
    local_278 = fVar9;
    if (0.0 < *(float *)(param_1 + 0x418)) {
      local_278 = local_258;
      local_258 = fVar9;
    }
    local_278 = local_278 + local_234;
    fVar16 = *(float *)(param_1 + 0x400) * -0.017453292;
    fVar9 = *(float *)(param_1 + 0x410) * *(float *)(param_1 + 0x328) * -0.008726646;
    local_238 = (fVar16 - fVar19) * fVar8 + fVar19;
    *(float *)(param_1 + 0x3ec) = local_238;
    fVar18 = (fVar16 - fVar18) * fVar8 + fVar18;
    *(float *)(param_1 + 0x3f0) = fVar18;
    if (fVar9 < 0.0) {
      fVar8 = fVar9 * 0.15915494 - 0.5;
    }
    else {
      fVar8 = fVar9 * 0.15915494 + 0.5;
    }
    fVar9 = fVar9 - (float)(int)fVar8 * 6.2831855;
    if (fVar9 <= 1.5707964) {
      if (-1.5707964 <= fVar9) {
        local_res10 = 1.0;
      }
      else {
        local_res10 = -1.0;
        fVar9 = -3.1415927 - fVar9;
      }
    }
    else {
      local_res10 = -1.0;
      fVar9 = 3.1415927 - fVar9;
    }
    fVar19 = fVar9 * fVar9;
    fVar9 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
              0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fVar9;
    local_d8 = DAT_1464aa7b8._4_4_ * fVar9;
    fStack_260 = (float)DAT_1464aa7b8 * fVar9;
    fVar9 = DAT_1464aa7c0 * fVar9;
    fVar8 = (local_234 - local_258) * 0.008726646;
    local_248 = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                  0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * local_res10;
    if (fVar8 < 0.0) {
      fVar19 = fVar8 * 0.15915494 - 0.5;
    }
    else {
      fVar19 = fVar8 * 0.15915494 + 0.5;
    }
    fVar8 = fVar8 - (float)(int)fVar19 * 6.2831855;
    if (fVar8 <= 1.5707964) {
      if (-1.5707964 <= fVar8) {
        local_res10 = 1.0;
      }
      else {
        local_res10 = -1.0;
        fVar8 = -3.1415927 - fVar8;
      }
    }
    else {
      local_res10 = -1.0;
      fVar8 = 3.1415927 - fVar8;
    }
    fVar16 = fVar8 * fVar8;
    fVar8 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
              0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar8;
    fVar14 = (float)DAT_1464aa7a8 * fVar8;
    fVar19 = DAT_1464aa7a8._4_4_ * fVar8;
    fVar8 = DAT_1464aa7b0 * fVar8;
    local_268 = CONCAT44(fStack_260,fStack_260);
    local_res10 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                    0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * local_res10;
    local_218._4_4_ =
         fVar8 * fStack_260 * fRam0000000146876b94 + fVar19 * local_248 +
         local_res10 * local_d8 * fRam0000000146876b84 + fVar14 * fVar9 * fRam0000000146876b74;
    local_218._0_4_ =
         local_res10 * fStack_260 * _DAT_146876b90 + fVar14 * local_248 +
         fVar8 * local_d8 * _DAT_146876b80 + fVar19 * fVar9 * _DAT_146876b70;
    uStack_210._0_4_ =
         fVar19 * fStack_260 * fRam0000000146876b98 + fVar8 * local_248 +
         fVar14 * local_d8 * fRam0000000146876b88 + local_res10 * fVar9 * fRam0000000146876b78;
    uStack_210._4_4_ =
         fVar14 * fStack_260 * fRam0000000146876b9c + local_res10 * local_248 +
         fVar19 * local_d8 * fRam0000000146876b8c + fVar8 * fVar9 * fRam0000000146876b7c;
    fStack_280 = local_278 * -0.008726646;
    if (fStack_280 < 0.0) {
      fVar8 = fStack_280 * 0.15915494 - 0.5;
    }
    else {
      fVar8 = fStack_280 * 0.15915494 + 0.5;
    }
    fStack_280 = fStack_280 - (float)(int)fVar8 * 6.2831855;
    if (fStack_280 <= 1.5707964) {
      if (-1.5707964 <= fStack_280) {
        fStack_27c = 1.0;
      }
      else {
        fStack_27c = -1.0;
        fStack_280 = -3.1415927 - fStack_280;
      }
    }
    else {
      fStack_27c = -1.0;
      fStack_280 = 3.1415927 - fStack_280;
    }
    fVar8 = fStack_280 * fStack_280;
    fStack_280 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                   0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fStack_280;
    local_288 = (float)DAT_1464aa7a8 * fStack_280;
    fStack_284 = fStack_280 * DAT_1464aa7a8._4_4_;
    fStack_280 = DAT_1464aa7b0 * fStack_280;
    fStack_27c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                   0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_27c;
    local_148 = fStack_27c * fStack_260 * _DAT_146876b90 + local_288 * local_248 +
                fStack_280 * local_d8 * _DAT_146876b80 + fStack_284 * fVar9 * _DAT_146876b70;
    fStack_144 = fStack_280 * fStack_260 * fRam0000000146876b94 + fStack_284 * local_248 +
                 fStack_27c * local_d8 * fRam0000000146876b84 +
                 local_288 * fVar9 * fRam0000000146876b74;
    fStack_140 = fStack_284 * fStack_260 * fRam0000000146876b98 + fStack_280 * local_248 +
                 local_288 * local_d8 * fRam0000000146876b88 +
                 fStack_27c * fVar9 * fRam0000000146876b78;
    fStack_13c = local_288 * fStack_260 * fRam0000000146876b9c + fStack_27c * local_248 +
                 fStack_284 * local_d8 * fRam0000000146876b8c +
                 fStack_280 * fVar9 * fRam0000000146876b7c;
    fStack_25c = fStack_260;
    fStack_244 = local_248;
    fStack_240 = local_248;
    fStack_23c = local_248;
    fStack_d4 = local_d8;
    fStack_d0 = local_d8;
    fStack_cc = local_d8;
    FUN_141215940(param_1 + 0xc00);
    *(undefined1 (*) [8])(param_1 + 0xc30) = local_218;
    *(undefined8 *)(param_1 + 0xc38) = uStack_210;
    *(bool *)(param_1 + 0xca8) = *(int *)(param_1 + 0xca0) == 0;
    *(undefined1 *)(param_1 + 0xca9) = 1;
    if (*(int *)(param_1 + 0xca0) == 0) {
      *(undefined1 (*) [8])(param_1 + 0xc60) = local_218;
      *(undefined8 *)(param_1 + 0xc68) = uStack_210;
      *(undefined8 *)(param_1 + 0xc70) = *(undefined8 *)(param_1 + 0xc40);
      *(undefined8 *)(param_1 + 0xc78) = *(undefined8 *)(param_1 + 0xc48);
      *(undefined8 *)(param_1 + 0xc80) = *(undefined8 *)(param_1 + 0xc50);
      *(undefined8 *)(param_1 + 0xc88) = *(undefined8 *)(param_1 + 0xc58);
    }
    FUN_141215940(param_1 + 0x12e0);
    *(ulonglong *)(param_1 + 0x1310) = CONCAT44(fStack_144,local_148);
    *(ulonglong *)(param_1 + 0x1318) = CONCAT44(fStack_13c,fStack_140);
    *(bool *)(param_1 + 5000) = *(int *)(param_1 + 0x1380) == 0;
    *(undefined1 *)(param_1 + 0x1389) = 1;
    if (*(int *)(param_1 + 0x1380) == 0) {
      *(ulonglong *)(param_1 + 0x1340) = CONCAT44(fStack_144,local_148);
      *(ulonglong *)(param_1 + 0x1348) = CONCAT44(fStack_13c,fStack_140);
      *(undefined8 *)(param_1 + 0x1350) = *(undefined8 *)(param_1 + 0x1320);
      *(undefined8 *)(param_1 + 0x1358) = *(undefined8 *)(param_1 + 0x1328);
      *(undefined8 *)(param_1 + 0x1360) = *(undefined8 *)(param_1 + 0x1330);
      *(undefined8 *)(param_1 + 0x1368) = *(undefined8 *)(param_1 + 0x1338);
    }
    local_238 = local_238 * 0.5;
    fVar8 = local_238 * 0.15915494;
    if (local_238 < 0.0) {
      fVar19 = fVar8 - 0.5;
    }
    else {
      fVar19 = fVar8 + 0.5;
    }
    fStack_240 = local_238 - (float)(int)fVar19 * 6.2831855;
    if (fStack_240 <= 1.5707964) {
      if (-1.5707964 <= fStack_240) {
        fStack_23c = 1.0;
      }
      else {
        fStack_23c = -1.0;
        fStack_240 = -3.1415927 - fStack_240;
      }
    }
    else {
      fStack_23c = -1.0;
      fStack_240 = 3.1415927 - fStack_240;
    }
    fVar19 = fStack_240 * fStack_240;
    fStack_240 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
                   0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fStack_240;
    fStack_244 = DAT_1464aa7b8._4_4_ * fStack_240;
    local_248 = (float)DAT_1464aa7b8 * fStack_240;
    fStack_240 = DAT_1464aa7c0 * fStack_240;
    fStack_23c = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                   0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fStack_23c;
    FUN_14120e180(lVar1,8,&local_248,1);
    fVar18 = fVar18 * 0.5;
    local_258 = fVar18 * 0.15915494;
    if (fVar18 < 0.0) {
      fVar19 = local_258 - 0.5;
    }
    else {
      fVar19 = local_258 + 0.5;
    }
    fStack_240 = fVar18 - (float)(int)fVar19 * 6.2831855;
    if (fStack_240 <= 1.5707964) {
      if (-1.5707964 <= fStack_240) {
        fStack_23c = 1.0;
      }
      else {
        fStack_23c = -1.0;
        fStack_240 = -3.1415927 - fStack_240;
      }
    }
    else {
      fStack_23c = -1.0;
      fStack_240 = 3.1415927 - fStack_240;
    }
    fVar19 = fStack_240 * fStack_240;
    fStack_240 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
                   0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fStack_240;
    fStack_244 = DAT_1464aa7b8._4_4_ * fStack_240;
    local_248 = (float)DAT_1464aa7b8 * fStack_240;
    fStack_240 = DAT_1464aa7c0 * fStack_240;
    fStack_23c = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                   0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fStack_23c;
    FUN_14120e180(lVar1,7,&local_248,1);
    if (local_238 < 0.0) {
      fVar8 = fVar8 - 0.5;
    }
    else {
      fVar8 = fVar8 + 0.5;
    }
    fStack_240 = local_238 - (float)(int)fVar8 * 6.2831855;
    if (fStack_240 <= 1.5707964) {
      if (-1.5707964 <= fStack_240) {
        fStack_23c = 1.0;
      }
      else {
        fStack_23c = -1.0;
        fStack_240 = -3.1415927 - fStack_240;
      }
    }
    else {
      fStack_23c = -1.0;
      fStack_240 = 3.1415927 - fStack_240;
    }
    fVar8 = fStack_240 * fStack_240;
    fStack_240 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                   0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fStack_240;
    fStack_244 = DAT_1464aa7b8._4_4_ * fStack_240;
    local_248 = (float)DAT_1464aa7b8 * fStack_240;
    fStack_240 = DAT_1464aa7c0 * fStack_240;
    fStack_23c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                   0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_23c;
    FUN_14120e180(lVar1,0x2d,&local_248,1);
    if (fVar18 < 0.0) {
      fVar8 = local_258 - 0.5;
    }
    else {
      fVar8 = local_258 + 0.5;
    }
    fVar18 = fVar18 - (float)(int)fVar8 * 6.2831855;
    if (fVar18 <= 1.5707964) {
      if (-1.5707964 <= fVar18) {
        fStack_23c = 1.0;
      }
      else {
        fStack_23c = -1.0;
        fVar18 = -3.1415927 - fVar18;
      }
    }
    else {
      fStack_23c = -1.0;
      fVar18 = 3.1415927 - fVar18;
    }
    fVar8 = fVar18 * fVar18;
    fVar18 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
               0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fVar18;
    fStack_240 = DAT_1464aa7c0 * fVar18;
    local_248 = (float)DAT_1464aa7b8 * fVar18;
    fStack_244 = DAT_1464aa7b8._4_4_ * fVar18;
    fStack_23c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                   0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_23c;
    FUN_14120e180(lVar1,0x2c,&local_248,1);
    if (*(float *)(param_1 + 0x3f4) <= 1.0 && *(float *)(param_1 + 0x3f4) != 1.0) {
      uVar2 = *(undefined4 *)(param_1 + 0x3b8);
      uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x148);
      fVar8 = (float)FRichCurve::Eval(uVar5,uVar2,0);
      uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x148);
      fVar19 = (float)FRichCurve::Eval(uVar5,*(undefined4 *)(param_1 + 0x3c8),0);
      fVar8 = fVar8 * -0.008726646;
      if (fVar8 < 0.0) {
        fVar18 = fVar8 * 0.15915494 - 0.5;
      }
      else {
        fVar18 = fVar8 * 0.15915494 + 0.5;
      }
      fVar8 = fVar8 - (float)(int)fVar18 * 6.2831855;
      if (fVar8 <= 1.5707964) {
        if (-1.5707964 <= fVar8) {
          fStack_23c = 1.0;
        }
        else {
          fStack_23c = -1.0;
          fVar8 = -3.1415927 - fVar8;
        }
      }
      else {
        fStack_23c = -1.0;
        fVar8 = 3.1415927 - fVar8;
      }
      fVar18 = fVar8 * fVar8;
      fVar8 = (((((2.7525562e-06 - fVar18 * 2.3889859e-08) * fVar18 - 0.00019840874) * fVar18 +
                0.008333331) * fVar18 - 0.16666667) * fVar18 + 1.0) * fVar8;
      fStack_240 = DAT_1464aa7b0 * fVar8;
      local_248 = (float)DAT_1464aa7a8 * fVar8;
      fStack_244 = DAT_1464aa7a8._4_4_ * fVar8;
      fStack_23c = (((((2.4760495e-05 - fVar18 * 2.6051615e-07) * fVar18 - 0.0013888378) * fVar18 +
                     0.041666638) * fVar18 - 0.5) * fVar18 + 1.0) * fStack_23c;
      FUN_14120ef60(lVar1,10,&local_248,1);
      fVar8 = *(float *)(param_1 + 0x4b4);
      fVar18 = *(float *)(param_1 + 0x3f4);
      puVar6 = (undefined8 *)FUN_1412242c0(lVar1,&local_248,10);
      uVar5 = *puVar6;
      fStack_260 = *(float *)(puVar6 + 1);
      fStack_280 = (1.0 - fVar18) * fVar8 * 0.008726646;
      if (fStack_280 < 0.0) {
        fVar8 = fStack_280 * 0.15915494 - 0.5;
      }
      else {
        fVar8 = fStack_280 * 0.15915494 + 0.5;
      }
      fStack_280 = fStack_280 - (float)(int)fVar8 * 6.2831855;
      if (fStack_280 <= 1.5707964) {
        if (-1.5707964 <= fStack_280) {
          fStack_27c = 1.0;
        }
        else {
          fStack_27c = -1.0;
          fStack_280 = -3.1415927 - fStack_280;
        }
      }
      else {
        fStack_27c = -1.0;
        fStack_280 = 3.1415927 - fStack_280;
      }
      fVar8 = fStack_280 * fStack_280;
      fStack_280 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                     0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fStack_280;
      local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      fStack_284 = fStack_280 * local_268._4_4_;
      local_268._0_4_ = (float)uVar5;
      local_288 = fStack_280 * (float)local_268;
      fStack_280 = fStack_280 * fStack_260;
      fStack_27c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                     0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_27c;
      local_268 = uVar5;
      FUN_14120ef60(lVar1,10,&local_288,1);
      fVar19 = fVar19 * 0.008726646;
      if (fVar19 < 0.0) {
        fVar8 = fVar19 * 0.15915494 - 0.5;
      }
      else {
        fVar8 = fVar19 * 0.15915494 + 0.5;
      }
      fVar19 = fVar19 - (float)(int)fVar8 * 6.2831855;
      if (fVar19 <= 1.5707964) {
        if (-1.5707964 <= fVar19) {
          fStack_27c = 1.0;
        }
        else {
          fStack_27c = -1.0;
          fVar19 = -3.1415927 - fVar19;
        }
      }
      else {
        fStack_27c = -1.0;
        fVar19 = 3.1415927 - fVar19;
      }
      fVar8 = fVar19 * fVar19;
      fVar19 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                 0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fVar19;
      fStack_284 = DAT_1464aa7a8._4_4_ * fVar19;
      local_288 = (float)DAT_1464aa7a8 * fVar19;
      fStack_280 = DAT_1464aa7b0 * fVar19;
      fStack_27c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                     0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_27c;
      FUN_14120ef60(lVar1,0x14,&local_288,1);
      fVar8 = *(float *)(param_1 + 0x4b4);
      fVar19 = *(float *)(param_1 + 0x3f4);
      puVar6 = (undefined8 *)FUN_1412242c0(lVar1,&local_248,0x14);
      uVar5 = *puVar6;
      fStack_260 = *(float *)(puVar6 + 1);
      fStack_280 = (1.0 - fVar19) * fVar8 * 0.008726646;
      if (fStack_280 < 0.0) {
        fVar8 = fStack_280 * 0.15915494 - 0.5;
      }
      else {
        fVar8 = fStack_280 * 0.15915494 + 0.5;
      }
      fStack_280 = fStack_280 - (float)(int)fVar8 * 6.2831855;
      if (fStack_280 <= 1.5707964) {
        if (-1.5707964 <= fStack_280) {
          fStack_27c = 1.0;
        }
        else {
          fStack_27c = -1.0;
          fStack_280 = -3.1415927 - fStack_280;
        }
      }
      else {
        fStack_27c = -1.0;
        fStack_280 = 3.1415927 - fStack_280;
      }
      fVar8 = fStack_280 * fStack_280;
      fStack_280 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                     0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fStack_280;
      local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      fStack_284 = fStack_280 * local_268._4_4_;
      local_268._0_4_ = (float)uVar5;
      local_288 = fStack_280 * (float)local_268;
      fStack_280 = fStack_280 * fStack_260;
      fStack_27c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                     0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fStack_27c;
      local_268 = uVar5;
      FUN_14120ef60(lVar1,0x14,&local_288,1);
    }
  }
  fVar9 = -1.0;
  FUN_141215940(param_1 + 0xd60);
  fVar8 = *(float *)(param_1 + 0xda0);
  fVar19 = *(float *)(param_1 + 0xda4);
  fVar18 = *(float *)(param_1 + 0xda8);
  FUN_141215940(param_1 + 0xcb0);
  local_1e8 = *(float *)(param_1 + 0xcf0) - fVar8;
  local_1e4 = *(float *)(param_1 + 0xcf4) - fVar19;
  local_1e0 = *(float *)(param_1 + 0xcf8) - fVar18;
  FUN_141215940(param_1 + 0x1390);
  fVar8 = *(float *)(param_1 + 0x13d0);
  fVar19 = *(float *)(param_1 + 0x13d4);
  fVar18 = *(float *)(param_1 + 0x13d8);
  FUN_141215940(param_1 + 0x1440);
  local_1d8 = *(float *)(param_1 + 0x1480) - fVar8;
  local_1d4 = *(float *)(param_1 + 0x1484) - fVar19;
  local_1d0 = *(float *)(param_1 + 0x1488) - fVar18;
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_1e8,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0xc,uVar5,1);
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_1d8,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0x16,uVar5,1);
  FUN_141215940(param_1 + 0xe10);
  fVar8 = *(float *)(param_1 + 0xe50);
  fVar19 = *(float *)(param_1 + 0xe54);
  fVar18 = *(float *)(param_1 + 0xe58);
  FUN_141215940(param_1 + 0xec0);
  local_1c8 = *(float *)(param_1 + 0xf00) - fVar8;
  local_1c4 = *(float *)(param_1 + 0xf04) - fVar19;
  local_1c0 = *(float *)(param_1 + 0xf08) - fVar18;
  FUN_141215940(param_1 + 0x15a0);
  fVar8 = *(float *)(param_1 + 0x15e0);
  fVar19 = *(float *)(param_1 + 0x15e4);
  fVar18 = *(float *)(param_1 + 0x15e8);
  FUN_141215940(param_1 + 0x14f0);
  local_1b8 = *(float *)(param_1 + 0x1530) - fVar8;
  local_1b4 = *(float *)(param_1 + 0x1534) - fVar19;
  local_1b0 = *(float *)(param_1 + 0x1538) - fVar18;
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_1c8,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0xd,uVar5,1);
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_1b8,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0x17,uVar5,1);
  FUN_141215940(param_1 + 0x10d0);
  fVar8 = *(float *)(param_1 + 0x1110);
  fVar19 = *(float *)(param_1 + 0x1114);
  fVar18 = *(float *)(param_1 + 0x1118);
  FUN_141215940(param_1 + 0x1180);
  local_1a8 = *(float *)(param_1 + 0x11c0) - fVar8;
  local_1a4 = *(float *)(param_1 + 0x11c4) - fVar19;
  local_1a0 = *(float *)(param_1 + 0x11c8) - fVar18;
  FUN_141215940(param_1 + 0x17b0);
  fVar8 = *(float *)(param_1 + 0x17f0);
  fVar19 = *(float *)(param_1 + 0x17f4);
  fVar18 = *(float *)(param_1 + 0x17f8);
  FUN_141215940(param_1 + 0x1860);
  local_198 = *(float *)(param_1 + 0x18a0) - fVar8;
  local_194 = *(float *)(param_1 + 0x18a4) - fVar19;
  local_190 = *(float *)(param_1 + 0x18a8) - fVar18;
  uVar5 = FRotationMatrix::MakeFromZX(local_118,&local_1a8,local_230);
  FMatrix::ToQuat(uVar5,&local_138);
  uVar5 = FRotationMatrix::MakeFromZX(local_118,&local_198,local_230);
  FMatrix::ToQuat(uVar5,&local_128);
  FUN_141215940(param_1 + 0x10d0);
  *(undefined8 *)(param_1 + 0x1100) = local_138;
  *(undefined8 *)(param_1 + 0x1108) = uStack_130;
  *(bool *)(param_1 + 0x1178) = *(int *)(param_1 + 0x1170) == 0;
  *(undefined1 *)(param_1 + 0x1179) = 1;
  if (*(int *)(param_1 + 0x1170) == 0) {
    *(undefined8 *)(param_1 + 0x1130) = local_138;
    *(undefined8 *)(param_1 + 0x1138) = uStack_130;
    *(undefined8 *)(param_1 + 0x1140) = *(undefined8 *)(param_1 + 0x1110);
    *(undefined8 *)(param_1 + 0x1148) = *(undefined8 *)(param_1 + 0x1118);
    *(undefined8 *)(param_1 + 0x1150) = *(undefined8 *)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x1158) = *(undefined8 *)(param_1 + 0x1128);
  }
  FUN_141215940(param_1 + 0x17b0);
  *(undefined8 *)(param_1 + 0x17e0) = local_128;
  *(undefined8 *)(param_1 + 0x17e8) = uStack_120;
  *(bool *)(param_1 + 0x1858) = *(int *)(param_1 + 0x1850) == 0;
  *(undefined1 *)(param_1 + 0x1859) = 1;
  if (*(int *)(param_1 + 0x1850) == 0) {
    *(undefined8 *)(param_1 + 0x1810) = local_128;
    *(undefined8 *)(param_1 + 0x1818) = uStack_120;
    *(undefined8 *)(param_1 + 0x1820) = *(undefined8 *)(param_1 + 0x17f0);
    *(undefined8 *)(param_1 + 0x1828) = *(undefined8 *)(param_1 + 0x17f8);
    *(undefined8 *)(param_1 + 0x1830) = *(undefined8 *)(param_1 + 0x1800);
    *(undefined8 *)(param_1 + 0x1838) = *(undefined8 *)(param_1 + 0x1808);
  }
  FUN_141215940(param_1 + 0x1180);
  *(undefined8 *)(param_1 + 0x11b0) = local_138;
  *(undefined8 *)(param_1 + 0x11b8) = uStack_130;
  *(bool *)(param_1 + 0x1228) = *(int *)(param_1 + 0x1220) == 0;
  *(undefined1 *)(param_1 + 0x1229) = 1;
  if (*(int *)(param_1 + 0x1220) == 0) {
    *(undefined8 *)(param_1 + 0x11e0) = local_138;
    *(undefined8 *)(param_1 + 0x11e8) = uStack_130;
    *(undefined8 *)(param_1 + 0x11f0) = *(undefined8 *)(param_1 + 0x11c0);
    *(undefined8 *)(param_1 + 0x11f8) = *(undefined8 *)(param_1 + 0x11c8);
    *(undefined8 *)(param_1 + 0x1200) = *(undefined8 *)(param_1 + 0x11d0);
    *(undefined8 *)(param_1 + 0x1208) = *(undefined8 *)(param_1 + 0x11d8);
  }
  FUN_141215940(param_1 + 0x1860);
  *(undefined8 *)(param_1 + 0x1890) = local_128;
  *(undefined8 *)(param_1 + 0x1898) = uStack_120;
  *(bool *)(param_1 + 0x1908) = *(int *)(param_1 + 0x1900) == 0;
  *(undefined1 *)(param_1 + 0x1909) = 1;
  if (*(int *)(param_1 + 0x1900) == 0) {
    *(undefined8 *)(param_1 + 0x18c0) = local_128;
    *(undefined8 *)(param_1 + 0x18c8) = uStack_120;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x18a0);
    *(undefined8 *)(param_1 + 0x18d8) = *(undefined8 *)(param_1 + 0x18a8);
    *(undefined8 *)(param_1 + 0x18e0) = *(undefined8 *)(param_1 + 0x18b0);
    *(undefined8 *)(param_1 + 0x18e8) = *(undefined8 *)(param_1 + 0x18b8);
  }
  FUN_141215940(param_1 + 0x1020);
  fVar8 = *(float *)(param_1 + 0x1060);
  fVar19 = *(float *)(param_1 + 0x1064);
  fVar18 = *(float *)(param_1 + 0x1068);
  FUN_141215940(param_1 + 0xf70);
  local_188 = *(float *)(param_1 + 0xfb0) - fVar8;
  local_184 = *(float *)(param_1 + 0xfb4) - fVar19;
  local_180 = *(float *)(param_1 + 0xfb8) - fVar18;
  FUN_141215940(param_1 + 0x1650);
  fVar8 = *(float *)(param_1 + 0x1690);
  fVar19 = *(float *)(param_1 + 0x1694);
  fVar18 = *(float *)(param_1 + 0x1698);
  FUN_141215940(param_1 + 0x1700);
  local_178 = *(float *)(param_1 + 0x1740) - fVar8;
  local_174 = *(float *)(param_1 + 0x1744) - fVar19;
  local_170 = *(float *)(param_1 + 0x1748) - fVar18;
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_188,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0xf,uVar5,1);
  uVar5 = FRotationMatrix::MakeFromYX(local_118,&local_178,local_230);
  uVar5 = FMatrix::ToQuat(uVar5,local_218);
  FUN_1412400d0(lVar1,0x19,uVar5,1);
  FUN_141215940(param_1 + 0x2200);
  fVar8 = *(float *)(param_1 + 0x2240);
  fVar19 = *(float *)(param_1 + 0x2244);
  fVar18 = *(float *)(param_1 + 0x2248);
  FUN_141215940(param_1 + 0x2150);
  local_268 = CONCAT44(*(float *)(param_1 + 0x2194) - fVar19,*(float *)(param_1 + 0x2190) - fVar8);
  fStack_260 = *(float *)(param_1 + 0x2198) - fVar18;
  uVar5 = FRotationMatrix::MakeFromZX(local_118,&local_268,local_230);
  FMatrix::ToQuat(uVar5,&local_168);
  FUN_141215940(param_1 + 8000);
  fVar8 = *(float *)(param_1 + 0x1f80);
  fVar19 = *(float *)(param_1 + 0x1f84);
  fVar18 = *(float *)(param_1 + 0x1f88);
  FUN_141215940(param_1 + 0x1ff0);
  fStack_260 = *(float *)(param_1 + 0x2038) - fVar18;
  local_268 = CONCAT44(*(float *)(param_1 + 0x2034) - fVar19,*(float *)(param_1 + 0x2030) - fVar8);
  uVar5 = FRotationMatrix::MakeFromZX(local_118,&local_268,local_230);
  FMatrix::ToQuat(uVar5,&local_158);
  fVar8 = *(float *)(param_1 + 0x3ec) * 0.5;
  _local_218 = ZEXT416((uint)(float)DAT_1464aa798);
  if (fVar8 < 0.0) {
    fVar19 = fVar8 * 0.15915494 - 0.5;
  }
  else {
    fVar19 = fVar8 * 0.15915494 + 0.5;
  }
  fVar8 = fVar8 - (float)(int)fVar19 * 6.2831855;
  if (fVar8 <= 1.5707964) {
    if (-1.5707964 <= fVar8) {
      local_238 = 1.0;
      goto LAB_1412494be;
    }
    fVar19 = -3.1415927;
  }
  else {
    fVar19 = 3.1415927;
  }
  fVar8 = fVar19 - fVar8;
  local_238 = -1.0;
LAB_1412494be:
  fVar16 = fVar8 * fVar8;
  fVar8 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
            0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar8;
  fVar19 = fVar8 * (float)DAT_1464aa798;
  fVar18 = fVar8 * DAT_1464aa798._4_4_;
  fVar8 = fVar8 * DAT_1464aa7a0;
  fStack_280 = *(float *)(param_1 + 0x3f0) * 0.5;
  fVar16 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
             0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * local_238;
  if (fStack_280 < 0.0) {
    fVar14 = fStack_280 * 0.15915494 - 0.5;
  }
  else {
    fVar14 = fStack_280 * 0.15915494 + 0.5;
  }
  fStack_280 = fStack_280 - (float)(int)fVar14 * 6.2831855;
  if (fStack_280 <= 1.5707964) {
    if (-1.5707964 <= fStack_280) {
      fStack_27c = 1.0;
    }
    else {
      fStack_27c = -1.0;
      fStack_280 = -3.1415927 - fStack_280;
    }
  }
  else {
    fStack_27c = -1.0;
    fStack_280 = 3.1415927 - fStack_280;
  }
  fVar14 = fStack_280 * fStack_280;
  fStack_280 = (((((2.7525562e-06 - fVar14 * 2.3889859e-08) * fVar14 - 0.00019840874) * fVar14 +
                 0.008333331) * fVar14 - 0.16666667) * fVar14 + 1.0) * fStack_280;
  fStack_284 = DAT_1464aa798._4_4_ * fStack_280;
  local_288 = (float)DAT_1464aa798 * fStack_280;
  fStack_280 = DAT_1464aa7a0 * fStack_280;
  fStack_27c = (((((2.4760495e-05 - fVar14 * 2.6051615e-07) * fVar14 - 0.0013888378) * fVar14 +
                 0.041666638) * fVar14 - 0.5) * fVar14 + 1.0) * fStack_27c;
  fVar11 = fVar8 * local_168;
  fVar12 = fVar18 * local_168;
  fVar13 = fVar19 * local_168;
  fVar14 = fVar19 * fStack_164;
  fVar7 = fVar18 * fStack_164;
  fVar10 = fVar8 * fStack_160;
  local_168 = fVar16 * local_168 * _DAT_146876b90 + fStack_15c * fVar19 +
              fVar8 * fStack_164 * _DAT_146876b80 + fVar18 * fStack_160 * _DAT_146876b70;
  fStack_164 = fVar11 * fRam0000000146876b94 + fStack_15c * fVar18 +
               fVar16 * fStack_164 * fRam0000000146876b84 +
               fVar19 * fStack_160 * fRam0000000146876b74;
  fStack_160 = fVar12 * fRam0000000146876b98 + fStack_15c * fVar8 + fVar14 * fRam0000000146876b88 +
               fVar16 * fStack_160 * fRam0000000146876b78;
  fStack_15c = fVar13 * fRam0000000146876b9c + fStack_15c * fVar16 + fVar7 * fRam0000000146876b8c +
               fVar10 * fRam0000000146876b7c;
  fVar18 = fStack_280 * local_158;
  fVar16 = fStack_284 * local_158;
  fVar14 = local_288 * local_158;
  fVar8 = local_288 * fStack_154;
  fVar19 = fStack_284 * fStack_154;
  fVar7 = fStack_280 * fStack_150;
  local_158 = fStack_27c * local_158 * _DAT_146876b90 + fStack_14c * local_288 +
              fStack_280 * fStack_154 * _DAT_146876b80 + fStack_284 * fStack_150 * _DAT_146876b70;
  fStack_154 = fVar18 * fRam0000000146876b94 + fStack_14c * fStack_284 +
               fStack_27c * fStack_154 * fRam0000000146876b84 +
               local_288 * fStack_150 * fRam0000000146876b74;
  fStack_150 = fVar16 * fRam0000000146876b98 + fStack_14c * fStack_280 +
               fVar8 * fRam0000000146876b88 + fStack_27c * fStack_150 * fRam0000000146876b78;
  fStack_14c = fVar14 * fRam0000000146876b9c + fStack_14c * fStack_27c +
               fVar19 * fRam0000000146876b8c + fVar7 * fRam0000000146876b7c;
  local_278 = fStack_280;
  FUN_141215940(param_1 + 0x2200);
  *(ulonglong *)(param_1 + 0x2230) = CONCAT44(fStack_164,local_168);
  *(ulonglong *)(param_1 + 0x2238) = CONCAT44(fStack_15c,fStack_160);
  *(bool *)(param_1 + 0x22a8) = *(int *)(param_1 + 0x22a0) == 0;
  *(undefined1 *)(param_1 + 0x22a9) = 1;
  if (*(int *)(param_1 + 0x22a0) == 0) {
    *(ulonglong *)(param_1 + 0x2260) = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(param_1 + 0x2268) = CONCAT44(fStack_15c,fStack_160);
    *(undefined8 *)(param_1 + 0x2270) = *(undefined8 *)(param_1 + 0x2240);
    *(undefined8 *)(param_1 + 0x2278) = *(undefined8 *)(param_1 + 0x2248);
    *(undefined8 *)(param_1 + 0x2280) = *(undefined8 *)(param_1 + 0x2250);
    *(undefined8 *)(param_1 + 0x2288) = *(undefined8 *)(param_1 + 0x2258);
  }
  FUN_141215940(param_1 + 0x2150);
  *(bool *)(param_1 + 0x21f8) = *(int *)(param_1 + 0x21f0) == 0;
  *(ulonglong *)(param_1 + 0x2180) = CONCAT44(fStack_164,local_168);
  *(ulonglong *)(param_1 + 0x2188) = CONCAT44(fStack_15c,fStack_160);
  *(undefined1 *)(param_1 + 0x21f9) = 1;
  if (*(int *)(param_1 + 0x21f0) == 0) {
    *(ulonglong *)(param_1 + 0x21b0) = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(param_1 + 0x21b8) = CONCAT44(fStack_15c,fStack_160);
    *(undefined8 *)(param_1 + 0x21c0) = *(undefined8 *)(param_1 + 0x2190);
    *(undefined8 *)(param_1 + 0x21c8) = *(undefined8 *)(param_1 + 0x2198);
    *(undefined8 *)(param_1 + 0x21d0) = *(undefined8 *)(param_1 + 0x21a0);
    *(undefined8 *)(param_1 + 0x21d8) = *(undefined8 *)(param_1 + 0x21a8);
  }
  FUN_141215940(param_1 + 0x1ff0);
  *(bool *)(param_1 + 0x2098) = *(int *)(param_1 + 0x2090) == 0;
  *(ulonglong *)(param_1 + 0x2020) = CONCAT44(fStack_154,local_158);
  *(ulonglong *)(param_1 + 0x2028) = CONCAT44(fStack_14c,fStack_150);
  *(undefined1 *)(param_1 + 0x2099) = 1;
  if (*(int *)(param_1 + 0x2090) == 0) {
    *(ulonglong *)(param_1 + 0x2050) = CONCAT44(fStack_154,local_158);
    *(ulonglong *)(param_1 + 0x2058) = CONCAT44(fStack_14c,fStack_150);
    *(undefined8 *)(param_1 + 0x2060) = *(undefined8 *)(param_1 + 0x2030);
    *(undefined8 *)(param_1 + 0x2068) = *(undefined8 *)(param_1 + 0x2038);
    *(undefined8 *)(param_1 + 0x2070) = *(undefined8 *)(param_1 + 0x2040);
    *(undefined8 *)(param_1 + 0x2078) = *(undefined8 *)(param_1 + 0x2048);
  }
  FUN_141215940(param_1 + 8000);
  *(bool *)(param_1 + 0x1fe8) = *(int *)(param_1 + 0x1fe0) == 0;
  *(ulonglong *)(param_1 + 0x1f70) = CONCAT44(fStack_154,local_158);
  *(ulonglong *)(param_1 + 0x1f78) = CONCAT44(fStack_14c,fStack_150);
  *(undefined1 *)(param_1 + 0x1fe9) = 1;
  if (*(int *)(param_1 + 0x1fe0) == 0) {
    *(ulonglong *)(param_1 + 0x1fa0) = CONCAT44(fStack_154,local_158);
    *(ulonglong *)(param_1 + 0x1fa8) = CONCAT44(fStack_14c,fStack_150);
    *(undefined8 *)(param_1 + 0x1fb0) = *(undefined8 *)(param_1 + 0x1f80);
    *(undefined8 *)(param_1 + 0x1fb8) = *(undefined8 *)(param_1 + 0x1f88);
    *(undefined8 *)(param_1 + 0x1fc0) = *(undefined8 *)(param_1 + 0x1f90);
    *(undefined8 *)(param_1 + 0x1fc8) = *(undefined8 *)(param_1 + 0x1f98);
  }
  puVar6 = (undefined8 *)FUN_141224200(lVar1,&local_248,0x28);
  fVar8 = *(float *)(param_1 + 0x3ec) * 0.5;
  uVar5 = *puVar6;
  fStack_260 = *(float *)(puVar6 + 1);
  if (fVar8 < 0.0) {
    fVar19 = fVar8 * 0.15915494 - 0.5;
  }
  else {
    fVar19 = fVar8 * 0.15915494 + 0.5;
  }
  fVar8 = fVar8 - (float)(int)fVar19 * 6.2831855;
  if (fVar8 <= 1.5707964) {
    if (-1.5707964 <= fVar8) {
      fVar19 = 1.0;
    }
    else {
      fVar19 = -1.0;
      fVar8 = -3.1415927 - fVar8;
    }
  }
  else {
    fVar19 = -1.0;
    fVar8 = 3.1415927 - fVar8;
  }
  local_268._0_4_ = (float)uVar5;
  local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  fVar18 = fVar8 * fVar8;
  fVar8 = (((((2.7525562e-06 - fVar18 * 2.3889859e-08) * fVar18 - 0.00019840874) * fVar18 +
            0.008333331) * fVar18 - 0.16666667) * fVar18 + 1.0) * fVar8;
  fVar16 = (float)local_268 * fVar8;
  fVar19 = (((((2.4760495e-05 - fVar18 * 2.6051615e-07) * fVar18 - 0.0013888378) * fVar18 +
             0.041666638) * fVar18 - 0.5) * fVar18 + 1.0) * fVar19;
  fVar18 = local_268._4_4_ * fVar8;
  fVar8 = fStack_260 * fVar8;
  local_268 = uVar5;
  FUN_141215940(param_1 + 0x20a0);
  *(undefined1 *)(param_1 + 0x2149) = 1;
  *(bool *)(param_1 + 0x2148) = *(int *)(param_1 + 0x2140) == 0;
  *(float *)(param_1 + 0x20d0) = fVar16;
  *(float *)(param_1 + 0x20d4) = fVar18;
  *(float *)(param_1 + 0x20d8) = fVar8;
  *(float *)(param_1 + 0x20dc) = fVar19;
  if (*(int *)(param_1 + 0x2140) == 0) {
    *(float *)(param_1 + 0x2100) = fVar16;
    *(float *)(param_1 + 0x2104) = fVar18;
    *(float *)(param_1 + 0x2108) = fVar8;
    *(float *)(param_1 + 0x210c) = fVar19;
    *(undefined8 *)(param_1 + 0x2110) = *(undefined8 *)(param_1 + 0x20e0);
    *(undefined8 *)(param_1 + 0x2118) = *(undefined8 *)(param_1 + 0x20e8);
    *(undefined8 *)(param_1 + 0x2120) = *(undefined8 *)(param_1 + 0x20f0);
    *(undefined8 *)(param_1 + 0x2128) = *(undefined8 *)(param_1 + 0x20f8);
  }
  local_288 = fVar16;
  fStack_284 = fVar18;
  fStack_280 = fVar8;
  fStack_27c = fVar19;
  puVar6 = (undefined8 *)FUN_141224200(lVar1,&local_248,0x25);
  fVar8 = *(float *)(param_1 + 0x3f0) * 0.5;
  uVar5 = *puVar6;
  fStack_260 = *(float *)(puVar6 + 1);
  if (fVar8 < 0.0) {
    fVar19 = fVar8 * 0.15915494 - 0.5;
  }
  else {
    fVar19 = fVar8 * 0.15915494 + 0.5;
  }
  fVar8 = fVar8 - (float)(int)fVar19 * 6.2831855;
  if (fVar8 <= 1.5707964) {
    if (-1.5707964 <= fVar8) {
      fVar19 = 1.0;
    }
    else {
      fVar19 = -1.0;
      fVar8 = -3.1415927 - fVar8;
    }
  }
  else {
    fVar19 = -1.0;
    fVar8 = 3.1415927 - fVar8;
  }
  local_268._0_4_ = (float)uVar5;
  local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  fVar18 = fVar8 * fVar8;
  fVar8 = (((((2.7525562e-06 - fVar18 * 2.3889859e-08) * fVar18 - 0.00019840874) * fVar18 +
            0.008333331) * fVar18 - 0.16666667) * fVar18 + 1.0) * fVar8;
  fVar16 = (float)local_268 * fVar8;
  fVar19 = (((((2.4760495e-05 - fVar18 * 2.6051615e-07) * fVar18 - 0.0013888378) * fVar18 +
             0.041666638) * fVar18 - 0.5) * fVar18 + 1.0) * fVar19;
  fVar18 = local_268._4_4_ * fVar8;
  fVar8 = fStack_260 * fVar8;
  local_268 = uVar5;
  FUN_141215940(param_1 + 0x1e90);
  *(undefined1 *)(param_1 + 0x1f39) = 1;
  *(bool *)(param_1 + 0x1f38) = *(int *)(param_1 + 0x1f30) == 0;
  *(float *)(param_1 + 0x1ec0) = fVar16;
  *(float *)(param_1 + 0x1ec4) = fVar18;
  *(float *)(param_1 + 0x1ec8) = fVar8;
  *(float *)(param_1 + 0x1ecc) = fVar19;
  if (*(int *)(param_1 + 0x1f30) == 0) {
    *(float *)(param_1 + 0x1ef0) = fVar16;
    *(float *)(param_1 + 0x1ef4) = fVar18;
    *(float *)(param_1 + 0x1ef8) = fVar8;
    *(float *)(param_1 + 0x1efc) = fVar19;
    *(undefined8 *)(param_1 + 0x1f00) = *(undefined8 *)(param_1 + 0x1ed0);
    *(undefined8 *)(param_1 + 0x1f08) = *(undefined8 *)(param_1 + 0x1ed8);
    *(undefined8 *)(param_1 + 0x1f10) = *(undefined8 *)(param_1 + 0x1ee0);
    *(undefined8 *)(param_1 + 0x1f18) = *(undefined8 *)(param_1 + 0x1ee8);
  }
  fVar14 = *(float *)(param_1 + 0x3f0);
  fVar7 = *(float *)(param_1 + 0x3ec);
  local_288 = fVar16;
  fStack_284 = fVar18;
  fStack_280 = fVar8;
  fStack_27c = fVar19;
  puVar6 = (undefined8 *)FUN_141224150(lVar1,&local_248,0x30);
  uVar5 = *puVar6;
  fStack_260 = *(float *)(puVar6 + 1);
  local_258 = (fVar14 + fVar7) * -0.25;
  fVar8 = local_258 * 0.15915494;
  if (local_258 < 0.0) {
    fVar19 = fVar8 - 0.5;
  }
  else {
    fVar19 = fVar8 + 0.5;
  }
  fStack_280 = local_258 - (float)(int)fVar19 * 6.2831855;
  if (fStack_280 <= 1.5707964) {
    if (-1.5707964 <= fStack_280) {
      fStack_27c = 1.0;
    }
    else {
      fStack_27c = -1.0;
      fStack_280 = -3.1415927 - fStack_280;
    }
  }
  else {
    fStack_27c = -1.0;
    fStack_280 = 3.1415927 - fStack_280;
  }
  fVar19 = fStack_280 * fStack_280;
  local_268._0_4_ = (float)uVar5;
  fStack_280 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
                 0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fStack_280;
  local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  local_288 = (float)local_268 * fStack_280;
  fStack_284 = local_268._4_4_ * fStack_280;
  fStack_280 = fStack_260 * fStack_280;
  fStack_27c = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                 0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fStack_27c;
  local_268 = uVar5;
  FUN_14120ef60(lVar1,0x30,&local_288,1);
  puVar6 = (undefined8 *)FUN_141224150(lVar1,&local_248,0x31);
  uVar5 = *puVar6;
  fStack_260 = *(float *)(puVar6 + 1);
  if (local_258 < 0.0) {
    fVar19 = fVar8 - 0.5;
  }
  else {
    fVar19 = fVar8 + 0.5;
  }
  fStack_280 = local_258 - (float)(int)fVar19 * 6.2831855;
  if (fStack_280 <= 1.5707964) {
    if (-1.5707964 <= fStack_280) {
      fStack_27c = 1.0;
    }
    else {
      fStack_27c = -1.0;
      fStack_280 = -3.1415927 - fStack_280;
    }
  }
  else {
    fStack_27c = -1.0;
    fStack_280 = 3.1415927 - fStack_280;
  }
  fVar19 = fStack_280 * fStack_280;
  local_268._0_4_ = (float)uVar5;
  fStack_280 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
                 0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fStack_280;
  local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  local_288 = (float)local_268 * fStack_280;
  fStack_284 = local_268._4_4_ * fStack_280;
  fStack_280 = fStack_260 * fStack_280;
  fStack_27c = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
                 0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fStack_27c;
  local_268 = uVar5;
  FUN_14120ef60(lVar1,0x31,&local_288,1);
  puVar6 = (undefined8 *)FUN_141224150(lVar1,&local_248,0x32);
  uVar5 = *puVar6;
  fStack_260 = *(float *)(puVar6 + 1);
  if (local_258 < 0.0) {
    fVar8 = fVar8 - 0.5;
  }
  else {
    fVar8 = fVar8 + 0.5;
  }
  fStack_280 = local_258 - (float)(int)fVar8 * 6.2831855;
  if (fStack_280 <= 1.5707964) {
    if (-1.5707964 <= fStack_280) {
      fVar9 = 1.0;
    }
    else {
      fStack_280 = -3.1415927 - fStack_280;
    }
  }
  else {
    fStack_280 = 3.1415927 - fStack_280;
  }
  fVar8 = fStack_280 * fStack_280;
  local_268._0_4_ = (float)uVar5;
  fStack_280 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                 0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fStack_280;
  local_268._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  fStack_284 = local_268._4_4_ * fStack_280;
  local_288 = (float)local_268 * fStack_280;
  fStack_280 = fStack_260 * fStack_280;
  fStack_27c = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                 0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fVar9;
  local_268 = uVar5;
  FUN_14120ef60(lVar1,0x32,&local_288,1);
  return;
}



// FUNCTION 14124a150 FUN_14124a150 body=2523 status=ok
// SIG undefined FUN_14124a150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124a150(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_168;
  float local_164;
  float local_160;
  undefined1 local_158 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  float *local_e0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [128];
  
  FUN_141224200(param_1 + 0x230,local_158,0);
  FUN_1412242c0(param_1 + 0x230,&local_168,0);
  local_110 = *(float *)(param_1 + 0x18c) * 0.5;
  if (local_110 < 0.0) {
    fVar20 = local_110 * 0.15915494 - 0.5;
  }
  else {
    fVar20 = local_110 * 0.15915494 + 0.5;
  }
  local_110 = local_110 - (float)(int)fVar20 * 6.2831855;
  if (local_110 <= 1.5707964) {
    if (-1.5707964 <= local_110) {
      local_10c = 1.0;
    }
    else {
      local_10c = -1.0;
      local_110 = -3.1415927 - local_110;
    }
  }
  else {
    local_10c = -1.0;
    local_110 = 3.1415927 - local_110;
  }
  lVar1 = param_1 + 0xe90;
  lVar4 = *(longlong *)(param_1 + 0x180);
  fVar20 = local_110 * local_110;
  local_110 = (((((2.7525562e-06 - fVar20 * 2.3889859e-08) * fVar20 - 0.00019840874) * fVar20 +
                0.008333331) * fVar20 - 0.16666667) * fVar20 + 1.0) * local_110;
  local_118 = local_168 * local_110;
  local_114 = local_164 * local_110;
  local_110 = local_160 * local_110;
  local_10c = (((((2.4760495e-05 - fVar20 * 2.6051615e-07) * fVar20 - 0.0013888378) * fVar20 +
                0.041666638) * fVar20 - 0.5) * fVar20 + 1.0) * local_10c;
  FUN_141215940(lVar1);
  fVar20 = *(float *)(param_1 + 0xed0);
  fVar21 = *(float *)(param_1 + 0xed4);
  fVar22 = *(float *)(param_1 + 0xed8);
  FUN_141215940(param_1 + 0xd30);
  local_168 = *(float *)(param_1 + 0xd70) - fVar20;
  local_164 = *(float *)(param_1 + 0xd74) - fVar21;
  local_160 = *(float *)(param_1 + 0xd78) - fVar22;
  uVar17 = FRotationMatrix::MakeFromXY(&local_f8,&local_168,local_158);
  pfVar18 = (float *)FMatrix::ToQuat(uVar17,&local_148);
  lVar2 = param_1 + 0xde0;
  local_108 = -*pfVar18;
  fStack_100 = -pfVar18[2];
  fStack_104 = -pfVar18[1];
  fStack_fc = pfVar18[3];
  FUN_141215940(lVar2);
  fVar20 = *(float *)(param_1 + 0xe20);
  fVar21 = *(float *)(param_1 + 0xe24);
  fVar22 = *(float *)(param_1 + 0xe28);
  FUN_141215940(param_1 + 0xb20);
  local_168 = *(float *)(param_1 + 0xb60) - fVar20;
  local_164 = *(float *)(param_1 + 0xb64) - fVar21;
  local_160 = *(float *)(param_1 + 0xb68) - fVar22;
  uVar17 = FRotationMatrix::MakeFromXY(local_98,&local_168,local_158);
  pfVar18 = (float *)FMatrix::ToQuat(uVar17,&local_f8);
  local_148 = -*pfVar18;
  fStack_144 = -pfVar18[1];
  fStack_140 = -pfVar18[2];
  fStack_13c = pfVar18[3];
  local_f0 = local_158;
  local_e0 = &local_118;
  local_f8 = param_1;
  local_e8 = lVar4 + 0x6c8;
  FUN_14120aad0(&local_f8,param_1 + 400,0xe);
  FUN_14120aad0(&local_f8,param_1 + 0x1a0,0xf);
  FUN_14120aad0(&local_f8,param_1 + 0x1b0,0x10);
  FUN_14120aad0(&local_f8,param_1 + 0x1c0,0xb);
  FUN_14120aad0(&local_f8,param_1 + 0x1d0,0xc);
  FUN_14120aad0(&local_f8,param_1 + 0x1e0,0xd);
  FUN_141215940(param_1 + 0x1200);
  fVar22 = *(float *)(param_1 + 0x1240) + *(float *)(param_1 + 0x1b4);
  fVar21 = *(float *)(param_1 + 0x1244) + *(float *)(param_1 + 0x1b8);
  fVar20 = *(float *)(param_1 + 0x1248) + *(float *)(param_1 + 0x1bc);
  auVar3._4_4_ = fVar21;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar20;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1240) = auVar3;
  *(undefined1 *)(param_1 + 0x12a9) = 1;
  *(bool *)(param_1 + 0x12a8) = *(int *)(param_1 + 0x12a0) == 0;
  if (*(int *)(param_1 + 0x12a0) == 0) {
    *(undefined8 *)(param_1 + 0x1260) = *(undefined8 *)(param_1 + 0x1230);
    *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x1238);
    auVar5._4_4_ = fVar21;
    auVar5._0_4_ = fVar22;
    auVar5._8_4_ = fVar20;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1270) = auVar5;
    *(undefined8 *)(param_1 + 0x1280) = *(undefined8 *)(param_1 + 0x1250);
    *(undefined8 *)(param_1 + 0x1288) = *(undefined8 *)(param_1 + 0x1258);
  }
  FUN_141215940(param_1 + 0x12b0);
  fVar22 = *(float *)(param_1 + 0x12f0) + *(float *)(param_1 + 0x1e4);
  fVar21 = *(float *)(param_1 + 0x12f4) + *(float *)(param_1 + 0x1e8);
  fVar20 = *(float *)(param_1 + 0x12f8) + *(float *)(param_1 + 0x1ec);
  *(undefined1 *)(param_1 + 0x1359) = 1;
  *(bool *)(param_1 + 0x1358) = *(int *)(param_1 + 0x1350) == 0;
  auVar6._4_4_ = fVar21;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x12f0) = auVar6;
  if (*(int *)(param_1 + 0x1350) == 0) {
    *(undefined8 *)(param_1 + 0x1310) = *(undefined8 *)(param_1 + 0x12e0);
    *(undefined8 *)(param_1 + 0x1318) = *(undefined8 *)(param_1 + 0x12e8);
    auVar7._4_4_ = fVar21;
    auVar7._0_4_ = fVar22;
    auVar7._8_4_ = fVar20;
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1320) = auVar7;
    *(undefined8 *)(param_1 + 0x1330) = *(undefined8 *)(param_1 + 0x1300);
    *(undefined8 *)(param_1 + 0x1338) = *(undefined8 *)(param_1 + 0x1308);
  }
  FUN_141215940(lVar1);
  fVar20 = *(float *)(param_1 + 0xed0);
  fVar21 = *(float *)(param_1 + 0xed4);
  fVar22 = *(float *)(param_1 + 0xed8);
  FUN_141215940(param_1 + 0xd30);
  local_168 = *(float *)(param_1 + 0xd70) - fVar20;
  local_164 = *(float *)(param_1 + 0xd74) - fVar21;
  local_160 = *(float *)(param_1 + 0xd78) - fVar22;
  uVar17 = FRotationMatrix::MakeFromXY(local_98,&local_168,local_158);
  FMatrix::ToQuat(uVar17,&local_b8);
  FUN_141215940(lVar2);
  fVar20 = *(float *)(param_1 + 0xe20);
  fVar21 = *(float *)(param_1 + 0xe24);
  fVar22 = *(float *)(param_1 + 0xe28);
  FUN_141215940(param_1 + 0xb20);
  local_168 = *(float *)(param_1 + 0xb60) - fVar20;
  local_164 = *(float *)(param_1 + 0xb64) - fVar21;
  local_160 = *(float *)(param_1 + 0xb68) - fVar22;
  uVar17 = FRotationMatrix::MakeFromXY(local_98,&local_168,local_158);
  FMatrix::ToQuat(uVar17,&local_a8);
  fVar16 = fRam0000000146876b9c;
  fVar15 = fRam0000000146876b98;
  fVar13 = fRam0000000146876b94;
  fVar12 = _DAT_146876b90;
  fVar27 = fRam0000000146876b8c;
  fVar22 = fRam0000000146876b88;
  fVar21 = fRam0000000146876b84;
  fVar20 = _DAT_146876b80;
  fVar23 = fStack_fc * local_b8 * _DAT_146876b90 + fStack_ac * local_108 +
           fStack_100 * fStack_b4 * _DAT_146876b80 + fStack_104 * fStack_b0 * _DAT_146876b70;
  fVar24 = fStack_100 * local_b8 * fRam0000000146876b94 + fStack_ac * fStack_104 +
           fStack_fc * fStack_b4 * fRam0000000146876b84 +
           local_108 * fStack_b0 * fRam0000000146876b74;
  fVar25 = fStack_104 * local_b8 * fRam0000000146876b98 + fStack_ac * fStack_100 +
           local_108 * fStack_b4 * fRam0000000146876b88 +
           fStack_fc * fStack_b0 * fRam0000000146876b78;
  fVar26 = local_108 * local_b8 * fRam0000000146876b9c + fStack_ac * fStack_fc +
           fStack_104 * fStack_b4 * fRam0000000146876b8c +
           fStack_100 * fStack_b0 * fRam0000000146876b7c;
  FUN_141215940(param_1 + 0x10a0);
  *(float *)(param_1 + 0x10d0) = fVar23;
  *(float *)(param_1 + 0x10d4) = fVar24;
  *(float *)(param_1 + 0x10d8) = fVar25;
  *(float *)(param_1 + 0x10dc) = fVar26;
  *(undefined1 *)(param_1 + 0x1149) = 1;
  *(bool *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1140) == 0;
  if (*(int *)(param_1 + 0x1140) == 0) {
    *(float *)(param_1 + 0x1100) = fVar23;
    *(float *)(param_1 + 0x1104) = fVar24;
    *(float *)(param_1 + 0x1108) = fVar25;
    *(float *)(param_1 + 0x110c) = fVar26;
    *(undefined8 *)(param_1 + 0x1110) = *(undefined8 *)(param_1 + 0x10e0);
    *(undefined8 *)(param_1 + 0x1118) = *(undefined8 *)(param_1 + 0x10e8);
    *(undefined8 *)(param_1 + 0x1120) = *(undefined8 *)(param_1 + 0x10f0);
    *(undefined8 *)(param_1 + 0x1128) = *(undefined8 *)(param_1 + 0x10f8);
  }
  fVar20 = fStack_13c * local_a8 * fVar12 + fStack_9c * local_148 + fStack_140 * fStack_a4 * fVar20
           + fStack_144 * fStack_a0 * _DAT_146876b70;
  fVar21 = fStack_140 * local_a8 * fVar13 + fStack_9c * fStack_144 + fStack_13c * fStack_a4 * fVar21
           + local_148 * fStack_a0 * fRam0000000146876b74;
  fVar22 = fStack_144 * local_a8 * fVar15 + fStack_9c * fStack_140 + local_148 * fStack_a4 * fVar22
           + fStack_13c * fStack_a0 * fRam0000000146876b78;
  fVar27 = local_148 * local_a8 * fVar16 + fStack_9c * fStack_13c + fStack_144 * fStack_a4 * fVar27
           + fStack_140 * fStack_a0 * fRam0000000146876b7c;
  FUN_141215940(param_1 + 0x1150);
  *(float *)(param_1 + 0x1180) = fVar20;
  *(float *)(param_1 + 0x1184) = fVar21;
  *(float *)(param_1 + 0x1188) = fVar22;
  *(float *)(param_1 + 0x118c) = fVar27;
  *(undefined1 *)(param_1 + 0x11f9) = 1;
  *(bool *)(param_1 + 0x11f8) = *(int *)(param_1 + 0x11f0) == 0;
  if (*(int *)(param_1 + 0x11f0) == 0) {
    *(float *)(param_1 + 0x11b0) = fVar20;
    *(float *)(param_1 + 0x11b4) = fVar21;
    *(float *)(param_1 + 0x11b8) = fVar22;
    *(float *)(param_1 + 0x11bc) = fVar27;
    *(undefined8 *)(param_1 + 0x11c0) = *(undefined8 *)(param_1 + 0x1190);
    *(undefined8 *)(param_1 + 0x11c8) = *(undefined8 *)(param_1 + 0x1198);
    *(undefined8 *)(param_1 + 0x11d0) = *(undefined8 *)(param_1 + 0x11a0);
    *(undefined8 *)(param_1 + 0x11d8) = *(undefined8 *)(param_1 + 0x11a8);
  }
  FUN_141215940(lVar1);
  fVar22 = *(float *)(param_1 + 0xed0) + *(float *)(param_1 + 500);
  fVar21 = *(float *)(param_1 + 0xed4) + *(float *)(param_1 + 0x1f8);
  fVar20 = *(float *)(param_1 + 0xed8) + *(float *)(param_1 + 0x1fc);
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = fVar22;
  auVar8._8_4_ = fVar20;
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xed0) = auVar8;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined8 *)(param_1 + 0xef0) = *(undefined8 *)(param_1 + 0xec0);
    *(undefined8 *)(param_1 + 0xef8) = *(undefined8 *)(param_1 + 0xec8);
    auVar9._4_4_ = fVar21;
    auVar9._0_4_ = fVar22;
    auVar9._8_4_ = fVar20;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xf00) = auVar9;
    *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xee0);
    *(undefined8 *)(param_1 + 0xf18) = *(undefined8 *)(param_1 + 0xee8);
  }
  FUN_141215940(lVar2);
  fVar22 = *(float *)(param_1 + 0xe20) + *(float *)(param_1 + 0x214);
  fVar21 = *(float *)(param_1 + 0xe24) + *(float *)(param_1 + 0x218);
  fVar20 = *(float *)(param_1 + 0xe28) + *(float *)(param_1 + 0x21c);
  *(undefined1 *)(param_1 + 0xe89) = 1;
  *(bool *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe80) == 0;
  auVar10._4_4_ = fVar21;
  auVar10._0_4_ = fVar22;
  auVar10._8_4_ = fVar20;
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe20) = auVar10;
  if (*(int *)(param_1 + 0xe80) == 0) {
    *(undefined8 *)(param_1 + 0xe40) = *(undefined8 *)(param_1 + 0xe10);
    *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_1 + 0xe18);
    auVar11._4_4_ = fVar21;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar20;
    auVar11._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe50) = auVar11;
    *(undefined8 *)(param_1 + 0xe60) = *(undefined8 *)(param_1 + 0xe30);
    *(undefined8 *)(param_1 + 0xe68) = *(undefined8 *)(param_1 + 0xe38);
  }
  FUN_141215940(param_1 + 0xf40);
  fVar27 = *(float *)(param_1 + 0xf80);
  fVar12 = *(float *)(param_1 + 0xf84);
  fVar13 = *(float *)(param_1 + 0xf88);
  fVar20 = *(float *)(param_1 + 0x204);
  fVar21 = *(float *)(param_1 + 0x208);
  fVar22 = *(float *)(param_1 + 0x20c);
  FUN_141215940(lVar1);
  local_138 = *(float *)(param_1 + 0xed0) - (fVar27 + fVar20);
  local_134 = *(float *)(param_1 + 0xed4) - (fVar12 + fVar21);
  local_130 = *(float *)(param_1 + 0xed8) - (fVar13 + fVar22);
  FUN_141215940(param_1 + 0xff0);
  fVar27 = *(float *)(param_1 + 0x1030);
  fVar12 = *(float *)(param_1 + 0x1034);
  fVar13 = *(float *)(param_1 + 0x1038);
  fVar20 = *(float *)(param_1 + 0x224);
  fVar21 = *(float *)(param_1 + 0x228);
  fVar22 = *(float *)(param_1 + 0x22c);
  FUN_141215940(lVar2);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0xe20);
  local_124 = auVar3._4_4_ - (fVar12 + fVar21);
  local_128 = auVar3._0_4_ - (fVar27 + fVar20);
  local_120 = auVar3._8_4_ - (fVar13 + fVar22);
  uVar17 = FRotationMatrix::MakeFromXY(local_98,&local_138,local_158);
  puVar19 = (undefined8 *)FMatrix::ToQuat(uVar17,&local_f8);
  FUN_141215940(lVar1);
  uVar17 = *puVar19;
  uVar14 = puVar19[1];
  *(undefined8 *)(param_1 + 0xec0) = uVar17;
  *(undefined8 *)(param_1 + 0xec8) = uVar14;
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined8 *)(param_1 + 0xef0) = uVar17;
    *(undefined8 *)(param_1 + 0xef8) = uVar14;
    *(undefined8 *)(param_1 + 0xf00) = *(undefined8 *)(param_1 + 0xed0);
    *(undefined8 *)(param_1 + 0xf08) = *(undefined8 *)(param_1 + 0xed8);
    *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xee0);
    *(undefined8 *)(param_1 + 0xf18) = *(undefined8 *)(param_1 + 0xee8);
  }
  uVar17 = FRotationMatrix::MakeFromXY(local_98,&local_128,local_158);
  puVar19 = (undefined8 *)FMatrix::ToQuat(uVar17,&local_f8);
  FUN_141215940(lVar1);
  uVar17 = *puVar19;
  uVar14 = puVar19[1];
  *(undefined8 *)(param_1 + 0xec0) = uVar17;
  *(undefined8 *)(param_1 + 0xec8) = uVar14;
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined8 *)(param_1 + 0xef0) = uVar17;
    *(undefined8 *)(param_1 + 0xef8) = uVar14;
    *(undefined8 *)(param_1 + 0xf00) = *(undefined8 *)(param_1 + 0xed0);
    *(undefined8 *)(param_1 + 0xf08) = *(undefined8 *)(param_1 + 0xed8);
    *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xee0);
    *(undefined8 *)(param_1 + 0xf18) = *(undefined8 *)(param_1 + 0xee8);
  }
  return;
}



// FUNCTION 14124ab30 FUN_14124ab30 body=1650 status=ok
// SIG undefined FUN_14124ab30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124ab30(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FUN_14124d180();
  FRotator::Quaternion(param_1 + 0x1ac4,&local_48);
  FRotator::Quaternion(param_1 + 0x1ab8,&local_58);
  FUN_141215940(param_1 + 0x1780);
  fVar12 = fRam0000000146876b9c;
  fVar11 = fRam0000000146876b98;
  fVar10 = fRam0000000146876b94;
  fVar9 = _DAT_146876b90;
  fVar8 = fRam0000000146876b8c;
  fVar7 = fRam0000000146876b88;
  fVar6 = fRam0000000146876b84;
  fVar5 = _DAT_146876b80;
  fVar4 = fRam0000000146876b7c;
  fVar18 = fRam0000000146876b78;
  fVar16 = fRam0000000146876b74;
  fVar14 = _DAT_146876b70;
  fVar19 = *(float *)(param_1 + 0x17b0);
  fVar1 = *(float *)(param_1 + 0x17b4);
  fVar2 = *(float *)(param_1 + 0x17b8);
  fVar3 = *(float *)(param_1 + 0x17bc);
  *(undefined1 *)(param_1 + 0x1829) = 1;
  *(bool *)(param_1 + 0x1828) = *(int *)(param_1 + 0x1820) == 0;
  fVar13 = fVar3 * local_48 * fVar9 + fStack_3c * fVar19 + fVar2 * fStack_44 * fVar5 +
           fVar1 * fStack_40 * fVar14;
  fVar15 = fVar2 * local_48 * fVar10 + fStack_3c * fVar1 + fVar3 * fStack_44 * fVar6 +
           fVar19 * fStack_40 * fVar16;
  fVar17 = fVar1 * local_48 * fVar11 + fStack_3c * fVar2 + fVar19 * fStack_44 * fVar7 +
           fVar3 * fStack_40 * fVar18;
  fVar19 = fVar19 * local_48 * fVar12 + fStack_3c * fVar3 + fVar1 * fStack_44 * fVar8 +
           fVar2 * fStack_40 * fVar4;
  *(float *)(param_1 + 0x17b0) = fVar13;
  *(float *)(param_1 + 0x17b4) = fVar15;
  *(float *)(param_1 + 0x17b8) = fVar17;
  *(float *)(param_1 + 0x17bc) = fVar19;
  if (*(int *)(param_1 + 0x1820) == 0) {
    *(float *)(param_1 + 0x17e0) = fVar13;
    *(float *)(param_1 + 0x17e4) = fVar15;
    *(float *)(param_1 + 0x17e8) = fVar17;
    *(float *)(param_1 + 0x17ec) = fVar19;
    *(undefined4 *)(param_1 + 0x17f0) = *(undefined4 *)(param_1 + 0x17c0);
    *(undefined4 *)(param_1 + 0x17f4) = *(undefined4 *)(param_1 + 0x17c4);
    *(undefined4 *)(param_1 + 0x17f8) = *(undefined4 *)(param_1 + 0x17c8);
    *(undefined4 *)(param_1 + 0x17fc) = *(undefined4 *)(param_1 + 0x17cc);
    *(undefined4 *)(param_1 + 0x1800) = *(undefined4 *)(param_1 + 0x17d0);
    *(undefined4 *)(param_1 + 0x1804) = *(undefined4 *)(param_1 + 0x17d4);
    *(undefined4 *)(param_1 + 0x1808) = *(undefined4 *)(param_1 + 0x17d8);
    *(undefined4 *)(param_1 + 0x180c) = *(undefined4 *)(param_1 + 0x17dc);
  }
  FUN_141215940(param_1 + 0x18e0);
  fVar19 = *(float *)(param_1 + 0x1910);
  fVar1 = *(float *)(param_1 + 0x1914);
  fVar2 = *(float *)(param_1 + 0x1918);
  fVar3 = *(float *)(param_1 + 0x191c);
  *(undefined1 *)(param_1 + 0x1989) = 1;
  *(bool *)(param_1 + 0x1988) = *(int *)(param_1 + 0x1980) == 0;
  fVar13 = fVar3 * local_48 * fVar9 + fStack_3c * fVar19 + fVar2 * fStack_44 * fVar5 +
           fVar1 * fStack_40 * fVar14;
  fVar15 = fVar2 * local_48 * fVar10 + fStack_3c * fVar1 + fVar3 * fStack_44 * fVar6 +
           fVar19 * fStack_40 * fVar16;
  fVar17 = fVar1 * local_48 * fVar11 + fStack_3c * fVar2 + fVar19 * fStack_44 * fVar7 +
           fVar3 * fStack_40 * fVar18;
  fVar19 = fVar19 * local_48 * fVar12 + fStack_3c * fVar3 + fVar1 * fStack_44 * fVar8 +
           fVar2 * fStack_40 * fVar4;
  *(float *)(param_1 + 0x1910) = fVar13;
  *(float *)(param_1 + 0x1914) = fVar15;
  *(float *)(param_1 + 0x1918) = fVar17;
  *(float *)(param_1 + 0x191c) = fVar19;
  if (*(int *)(param_1 + 0x1980) == 0) {
    *(float *)(param_1 + 0x1940) = fVar13;
    *(float *)(param_1 + 0x1944) = fVar15;
    *(float *)(param_1 + 0x1948) = fVar17;
    *(float *)(param_1 + 0x194c) = fVar19;
    *(undefined4 *)(param_1 + 0x1950) = *(undefined4 *)(param_1 + 0x1920);
    *(undefined4 *)(param_1 + 0x1954) = *(undefined4 *)(param_1 + 0x1924);
    *(undefined4 *)(param_1 + 0x1958) = *(undefined4 *)(param_1 + 0x1928);
    *(undefined4 *)(param_1 + 0x195c) = *(undefined4 *)(param_1 + 0x192c);
    *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x1930);
    *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x1934);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1938);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x193c);
  }
  FUN_141215940(param_1 + 0x14c0);
  fVar19 = *(float *)(param_1 + 0x14f0);
  fVar1 = *(float *)(param_1 + 0x14f4);
  fVar2 = *(float *)(param_1 + 0x14f8);
  fVar3 = *(float *)(param_1 + 0x14fc);
  *(undefined1 *)(param_1 + 0x1569) = 1;
  *(bool *)(param_1 + 0x1568) = *(int *)(param_1 + 0x1560) == 0;
  fVar13 = fVar3 * local_48 * fVar9 + fStack_3c * fVar19 + fVar2 * fStack_44 * fVar5 +
           fVar1 * fStack_40 * fVar14;
  fVar15 = fVar2 * local_48 * fVar10 + fStack_3c * fVar1 + fVar3 * fStack_44 * fVar6 +
           fVar19 * fStack_40 * fVar16;
  fVar17 = fVar1 * local_48 * fVar11 + fStack_3c * fVar2 + fVar19 * fStack_44 * fVar7 +
           fVar3 * fStack_40 * fVar18;
  fVar19 = fVar19 * local_48 * fVar12 + fStack_3c * fVar3 + fVar1 * fStack_44 * fVar8 +
           fVar2 * fStack_40 * fVar4;
  *(float *)(param_1 + 0x14f0) = fVar13;
  *(float *)(param_1 + 0x14f4) = fVar15;
  *(float *)(param_1 + 0x14f8) = fVar17;
  *(float *)(param_1 + 0x14fc) = fVar19;
  if (*(int *)(param_1 + 0x1560) == 0) {
    *(float *)(param_1 + 0x1520) = fVar13;
    *(float *)(param_1 + 0x1524) = fVar15;
    *(float *)(param_1 + 0x1528) = fVar17;
    *(float *)(param_1 + 0x152c) = fVar19;
    *(undefined4 *)(param_1 + 0x1530) = *(undefined4 *)(param_1 + 0x1500);
    *(undefined4 *)(param_1 + 0x1534) = *(undefined4 *)(param_1 + 0x1504);
    *(undefined4 *)(param_1 + 0x1538) = *(undefined4 *)(param_1 + 0x1508);
    *(undefined4 *)(param_1 + 0x153c) = *(undefined4 *)(param_1 + 0x150c);
    *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_1 + 0x1510);
    *(undefined4 *)(param_1 + 0x1544) = *(undefined4 *)(param_1 + 0x1514);
    *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_1 + 0x1518);
    *(undefined4 *)(param_1 + 0x154c) = *(undefined4 *)(param_1 + 0x151c);
  }
  FUN_141215940(param_1 + 0x16d0);
  fVar19 = *(float *)(param_1 + 0x1700);
  fVar1 = *(float *)(param_1 + 0x1704);
  fVar2 = *(float *)(param_1 + 0x1708);
  fVar3 = *(float *)(param_1 + 0x170c);
  *(undefined1 *)(param_1 + 0x1779) = 1;
  *(bool *)(param_1 + 0x1778) = *(int *)(param_1 + 6000) == 0;
  fVar13 = fVar3 * local_48 * fVar9 + fStack_3c * fVar19 + fVar2 * fStack_44 * fVar5 +
           fVar1 * fStack_40 * fVar14;
  fVar15 = fVar2 * local_48 * fVar10 + fStack_3c * fVar1 + fVar3 * fStack_44 * fVar6 +
           fVar19 * fStack_40 * fVar16;
  fVar17 = fVar1 * local_48 * fVar11 + fStack_3c * fVar2 + fVar19 * fStack_44 * fVar7 +
           fVar3 * fStack_40 * fVar18;
  fVar19 = fVar19 * local_48 * fVar12 + fStack_3c * fVar3 + fVar1 * fStack_44 * fVar8 +
           fVar2 * fStack_40 * fVar4;
  *(float *)(param_1 + 0x1700) = fVar13;
  *(float *)(param_1 + 0x1704) = fVar15;
  *(float *)(param_1 + 0x1708) = fVar17;
  *(float *)(param_1 + 0x170c) = fVar19;
  if (*(int *)(param_1 + 6000) == 0) {
    *(float *)(param_1 + 0x1730) = fVar13;
    *(float *)(param_1 + 0x1734) = fVar15;
    *(float *)(param_1 + 0x1738) = fVar17;
    *(float *)(param_1 + 0x173c) = fVar19;
    *(undefined4 *)(param_1 + 0x1740) = *(undefined4 *)(param_1 + 0x1710);
    *(undefined4 *)(param_1 + 0x1744) = *(undefined4 *)(param_1 + 0x1714);
    *(undefined4 *)(param_1 + 0x1748) = *(undefined4 *)(param_1 + 0x1718);
    *(undefined4 *)(param_1 + 0x174c) = *(undefined4 *)(param_1 + 0x171c);
    *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(param_1 + 0x1720);
    *(undefined4 *)(param_1 + 0x1754) = *(undefined4 *)(param_1 + 0x1724);
    *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(param_1 + 0x1728);
    *(undefined4 *)(param_1 + 0x175c) = *(undefined4 *)(param_1 + 0x172c);
  }
  FUN_141215940(param_1 + 0x1830);
  fVar19 = *(float *)(param_1 + 0x1860);
  fVar1 = *(float *)(param_1 + 0x1864);
  fVar2 = *(float *)(param_1 + 0x1868);
  fVar3 = *(float *)(param_1 + 0x186c);
  *(undefined1 *)(param_1 + 0x18d9) = 1;
  *(bool *)(param_1 + 0x18d8) = *(int *)(param_1 + 0x18d0) == 0;
  fVar13 = fVar3 * local_58 * fVar9 + fStack_4c * fVar19 + fVar2 * fStack_54 * fVar5 +
           fVar1 * fStack_50 * fVar14;
  fVar15 = fVar2 * local_58 * fVar10 + fStack_4c * fVar1 + fVar3 * fStack_54 * fVar6 +
           fVar19 * fStack_50 * fVar16;
  fVar17 = fVar1 * local_58 * fVar11 + fStack_4c * fVar2 + fVar19 * fStack_54 * fVar7 +
           fVar3 * fStack_50 * fVar18;
  fVar19 = fVar19 * local_58 * fVar12 + fStack_4c * fVar3 + fVar1 * fStack_54 * fVar8 +
           fVar2 * fStack_50 * fVar4;
  *(float *)(param_1 + 0x1860) = fVar13;
  *(float *)(param_1 + 0x1864) = fVar15;
  *(float *)(param_1 + 0x1868) = fVar17;
  *(float *)(param_1 + 0x186c) = fVar19;
  if (*(int *)(param_1 + 0x18d0) == 0) {
    *(float *)(param_1 + 0x1890) = fVar13;
    *(float *)(param_1 + 0x1894) = fVar15;
    *(float *)(param_1 + 0x1898) = fVar17;
    *(float *)(param_1 + 0x189c) = fVar19;
    *(undefined4 *)(param_1 + 0x18a0) = *(undefined4 *)(param_1 + 0x1870);
    *(undefined4 *)(param_1 + 0x18a4) = *(undefined4 *)(param_1 + 0x1874);
    *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_1 + 0x1878);
    *(undefined4 *)(param_1 + 0x18ac) = *(undefined4 *)(param_1 + 0x187c);
    *(undefined4 *)(param_1 + 0x18b0) = *(undefined4 *)(param_1 + 0x1880);
    *(undefined4 *)(param_1 + 0x18b4) = *(undefined4 *)(param_1 + 0x1884);
    *(undefined4 *)(param_1 + 0x18b8) = *(undefined4 *)(param_1 + 0x1888);
    *(undefined4 *)(param_1 + 0x18bc) = *(undefined4 *)(param_1 + 0x188c);
  }
  FUN_141215940(param_1 + 0x1990);
  fVar19 = *(float *)(param_1 + 0x19c0);
  fVar1 = *(float *)(param_1 + 0x19c4);
  fVar2 = *(float *)(param_1 + 0x19c8);
  fVar3 = *(float *)(param_1 + 0x19cc);
  *(undefined1 *)(param_1 + 0x1a39) = 1;
  *(bool *)(param_1 + 0x1a38) = *(int *)(param_1 + 0x1a30) == 0;
  fVar13 = fVar3 * local_58 * fVar9 + fStack_4c * fVar19 + fVar2 * fStack_54 * fVar5 +
           fVar1 * fStack_50 * fVar14;
  fVar15 = fVar2 * local_58 * fVar10 + fStack_4c * fVar1 + fVar3 * fStack_54 * fVar6 +
           fVar19 * fStack_50 * fVar16;
  fVar17 = fVar1 * local_58 * fVar11 + fStack_4c * fVar2 + fVar19 * fStack_54 * fVar7 +
           fVar3 * fStack_50 * fVar18;
  fVar19 = fVar19 * local_58 * fVar12 + fStack_4c * fVar3 + fVar1 * fStack_54 * fVar8 +
           fVar2 * fStack_50 * fVar4;
  *(float *)(param_1 + 0x19c0) = fVar13;
  *(float *)(param_1 + 0x19c4) = fVar15;
  *(float *)(param_1 + 0x19c8) = fVar17;
  *(float *)(param_1 + 0x19cc) = fVar19;
  if (*(int *)(param_1 + 0x1a30) == 0) {
    *(float *)(param_1 + 0x19f0) = fVar13;
    *(float *)(param_1 + 0x19f4) = fVar15;
    *(float *)(param_1 + 0x19f8) = fVar17;
    *(float *)(param_1 + 0x19fc) = fVar19;
    *(undefined4 *)(param_1 + 0x1a00) = *(undefined4 *)(param_1 + 0x19d0);
    *(undefined4 *)(param_1 + 0x1a04) = *(undefined4 *)(param_1 + 0x19d4);
    *(undefined4 *)(param_1 + 0x1a08) = *(undefined4 *)(param_1 + 0x19d8);
    *(undefined4 *)(param_1 + 0x1a0c) = *(undefined4 *)(param_1 + 0x19dc);
    *(undefined4 *)(param_1 + 0x1a10) = *(undefined4 *)(param_1 + 0x19e0);
    *(undefined4 *)(param_1 + 0x1a14) = *(undefined4 *)(param_1 + 0x19e4);
    *(undefined4 *)(param_1 + 0x1a18) = *(undefined4 *)(param_1 + 0x19e8);
    *(undefined4 *)(param_1 + 0x1a1c) = *(undefined4 *)(param_1 + 0x19ec);
  }
  FUN_141215940(param_1 + 0x1360);
  fVar19 = *(float *)(param_1 + 0x1390);
  fVar1 = *(float *)(param_1 + 0x1394);
  fVar2 = *(float *)(param_1 + 0x1398);
  fVar3 = *(float *)(param_1 + 0x139c);
  *(undefined1 *)(param_1 + 0x1409) = 1;
  *(bool *)(param_1 + 0x1408) = *(int *)(param_1 + 0x1400) == 0;
  fVar13 = fVar3 * local_58 * fVar9 + fStack_4c * fVar19 + fVar2 * fStack_54 * fVar5 +
           fVar1 * fStack_50 * fVar14;
  fVar15 = fVar2 * local_58 * fVar10 + fStack_4c * fVar1 + fVar3 * fStack_54 * fVar6 +
           fVar19 * fStack_50 * fVar16;
  fVar17 = fVar1 * local_58 * fVar11 + fStack_4c * fVar2 + fVar19 * fStack_54 * fVar7 +
           fVar3 * fStack_50 * fVar18;
  fVar19 = fVar19 * local_58 * fVar12 + fStack_4c * fVar3 + fVar1 * fStack_54 * fVar8 +
           fVar2 * fStack_50 * fVar4;
  *(float *)(param_1 + 0x1390) = fVar13;
  *(float *)(param_1 + 0x1394) = fVar15;
  *(float *)(param_1 + 0x1398) = fVar17;
  *(float *)(param_1 + 0x139c) = fVar19;
  if (*(int *)(param_1 + 0x1400) == 0) {
    *(float *)(param_1 + 0x13c0) = fVar13;
    *(float *)(param_1 + 0x13c4) = fVar15;
    *(float *)(param_1 + 0x13c8) = fVar17;
    *(float *)(param_1 + 0x13cc) = fVar19;
    *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(param_1 + 0x13a0);
    *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_1 + 0x13a4);
    *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_1 + 0x13a8);
    *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_1 + 0x13ac);
    *(undefined4 *)(param_1 + 0x13e0) = *(undefined4 *)(param_1 + 0x13b0);
    *(undefined4 *)(param_1 + 0x13e4) = *(undefined4 *)(param_1 + 0x13b4);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13b8);
    *(undefined4 *)(param_1 + 0x13ec) = *(undefined4 *)(param_1 + 0x13bc);
  }
  FUN_141215940(param_1 + 0x1570);
  fVar19 = *(float *)(param_1 + 0x15a0);
  fVar1 = *(float *)(param_1 + 0x15a4);
  fVar2 = *(float *)(param_1 + 0x15a8);
  fVar3 = *(float *)(param_1 + 0x15ac);
  *(undefined1 *)(param_1 + 0x1619) = 1;
  *(bool *)(param_1 + 0x1618) = *(int *)(param_1 + 0x1610) == 0;
  fVar13 = fVar3 * local_58 * fVar9 + fStack_4c * fVar19 + fVar2 * fStack_54 * fVar5 +
           fVar1 * fStack_50 * fVar14;
  fVar15 = fVar2 * local_58 * fVar10 + fStack_4c * fVar1 + fVar3 * fStack_54 * fVar6 +
           fVar19 * fStack_50 * fVar16;
  fVar17 = fVar1 * local_58 * fVar11 + fStack_4c * fVar2 + fVar19 * fStack_54 * fVar7 +
           fVar3 * fStack_50 * fVar18;
  fVar19 = fVar19 * local_58 * fVar12 + fStack_4c * fVar3 + fVar1 * fStack_54 * fVar8 +
           fVar2 * fStack_50 * fVar4;
  *(float *)(param_1 + 0x15a0) = fVar13;
  *(float *)(param_1 + 0x15a4) = fVar15;
  *(float *)(param_1 + 0x15a8) = fVar17;
  *(float *)(param_1 + 0x15ac) = fVar19;
  if (*(int *)(param_1 + 0x1610) == 0) {
    *(float *)(param_1 + 0x15d0) = fVar13;
    *(float *)(param_1 + 0x15d4) = fVar15;
    *(float *)(param_1 + 0x15d8) = fVar17;
    *(float *)(param_1 + 0x15dc) = fVar19;
    *(undefined4 *)(param_1 + 0x15e0) = *(undefined4 *)(param_1 + 0x15b0);
    *(undefined4 *)(param_1 + 0x15e4) = *(undefined4 *)(param_1 + 0x15b4);
    *(undefined4 *)(param_1 + 0x15e8) = *(undefined4 *)(param_1 + 0x15b8);
    *(undefined4 *)(param_1 + 0x15ec) = *(undefined4 *)(param_1 + 0x15bc);
    *(undefined4 *)(param_1 + 0x15f0) = *(undefined4 *)(param_1 + 0x15c0);
    *(undefined4 *)(param_1 + 0x15f4) = *(undefined4 *)(param_1 + 0x15c4);
    *(undefined4 *)(param_1 + 0x15f8) = *(undefined4 *)(param_1 + 0x15c8);
    *(undefined4 *)(param_1 + 0x15fc) = *(undefined4 *)(param_1 + 0x15cc);
  }
  FUN_141215940(param_1 + 0x1410);
  fVar19 = *(float *)(param_1 + 0x1440);
  fVar1 = *(float *)(param_1 + 0x1444);
  fVar2 = *(float *)(param_1 + 0x1448);
  fVar3 = *(float *)(param_1 + 0x144c);
  *(undefined1 *)(param_1 + 0x14b9) = 1;
  *(bool *)(param_1 + 0x14b8) = *(int *)(param_1 + 0x14b0) == 0;
  fVar13 = fVar3 * local_58 * fVar9 + fStack_4c * fVar19 + fVar2 * fStack_54 * fVar5 +
           fVar1 * fStack_50 * fVar14;
  fVar15 = fVar2 * local_58 * fVar10 + fStack_4c * fVar1 + fVar3 * fStack_54 * fVar6 +
           fVar19 * fStack_50 * fVar16;
  fVar17 = fVar1 * local_58 * fVar11 + fStack_4c * fVar2 + fVar19 * fStack_54 * fVar7 +
           fVar3 * fStack_50 * fVar18;
  fVar19 = fVar19 * local_58 * fVar12 + fStack_4c * fVar3 + fVar1 * fStack_54 * fVar8 +
           fVar2 * fStack_50 * fVar4;
  *(float *)(param_1 + 0x1440) = fVar13;
  *(float *)(param_1 + 0x1444) = fVar15;
  *(float *)(param_1 + 0x1448) = fVar17;
  *(float *)(param_1 + 0x144c) = fVar19;
  if (*(int *)(param_1 + 0x14b0) == 0) {
    *(float *)(param_1 + 0x1470) = fVar13;
    *(float *)(param_1 + 0x1474) = fVar15;
    *(float *)(param_1 + 0x1478) = fVar17;
    *(float *)(param_1 + 0x147c) = fVar19;
    *(undefined4 *)(param_1 + 0x1480) = *(undefined4 *)(param_1 + 0x1450);
    *(undefined4 *)(param_1 + 0x1484) = *(undefined4 *)(param_1 + 0x1454);
    *(undefined4 *)(param_1 + 0x1488) = *(undefined4 *)(param_1 + 0x1458);
    *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x145c);
    *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_1 + 0x1460);
    *(undefined4 *)(param_1 + 0x1494) = *(undefined4 *)(param_1 + 0x1464);
    *(undefined4 *)(param_1 + 0x1498) = *(undefined4 *)(param_1 + 0x1468);
    *(undefined4 *)(param_1 + 0x149c) = *(undefined4 *)(param_1 + 0x146c);
  }
  FUN_141215940(param_1 + 0x1620);
  fVar19 = *(float *)(param_1 + 0x1650);
  fVar1 = *(float *)(param_1 + 0x1654);
  fVar2 = *(float *)(param_1 + 0x1658);
  fVar3 = *(float *)(param_1 + 0x165c);
  *(undefined1 *)(param_1 + 0x16c9) = 1;
  *(bool *)(param_1 + 0x16c8) = *(int *)(param_1 + 0x16c0) == 0;
  fVar14 = local_58 * fVar3 * fVar9 + fStack_4c * fVar19 + fStack_54 * fVar2 * fVar5 +
           fStack_50 * fVar1 * fVar14;
  fVar16 = local_58 * fVar2 * fVar10 + fStack_4c * fVar1 + fStack_54 * fVar3 * fVar6 +
           fStack_50 * fVar19 * fVar16;
  fVar18 = local_58 * fVar1 * fVar11 + fStack_4c * fVar2 + fStack_54 * fVar19 * fVar7 +
           fStack_50 * fVar3 * fVar18;
  fVar19 = local_58 * fVar19 * fVar12 + fStack_4c * fVar3 + fStack_54 * fVar1 * fVar8 +
           fStack_50 * fVar2 * fVar4;
  *(float *)(param_1 + 0x1650) = fVar14;
  *(float *)(param_1 + 0x1654) = fVar16;
  *(float *)(param_1 + 0x1658) = fVar18;
  *(float *)(param_1 + 0x165c) = fVar19;
  if (*(int *)(param_1 + 0x16c0) == 0) {
    *(float *)(param_1 + 0x1680) = fVar14;
    *(float *)(param_1 + 0x1684) = fVar16;
    *(float *)(param_1 + 0x1688) = fVar18;
    *(float *)(param_1 + 0x168c) = fVar19;
    *(undefined8 *)(param_1 + 0x1690) = *(undefined8 *)(param_1 + 0x1660);
    *(undefined8 *)(param_1 + 0x1698) = *(undefined8 *)(param_1 + 0x1668);
    *(undefined8 *)(param_1 + 0x16a0) = *(undefined8 *)(param_1 + 0x1670);
    *(undefined8 *)(param_1 + 0x16a8) = *(undefined8 *)(param_1 + 0x1678);
  }
  return;
}



// FUNCTION 14124b1b0 FUN_14124b1b0 body=8144 status=ok
// SIG undefined FUN_14124b1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124b1b0(longlong param_1,longlong *param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res10;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e4;
  undefined8 local_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined1 local_178 [16];
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [224];
  
  if ((int)param_2[1] == 4) {
    lVar1 = param_1 + 0x520;
    local_1a0 = param_4[2] - param_3[2];
    local_1a4 = param_4[1] - param_3[1];
    local_1a8 = *param_4 - *param_3;
    fVar17 = local_1a8 * 0.5;
    fVar15 = local_1a4 * 0.5;
    fVar7 = *param_3;
    fVar13 = local_1a0 * 0.5;
    fVar18 = param_3[1];
    fVar16 = param_3[2];
    FUN_141224150(lVar1,local_178,0);
    uVar3 = FRotationMatrix::MakeFromYX(local_f8,&local_1a8,local_178);
    puVar4 = (undefined8 *)FMatrix::ToQuat(uVar3,local_1c8);
    FUN_141215940(param_1 + 0x7e0);
    auVar9._4_4_ = fVar15 + fVar18;
    auVar9._0_4_ = fVar17 + fVar7;
    auVar9._8_4_ = fVar13 + fVar16;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x820) = auVar9;
    uVar3 = *puVar4;
    uVar2 = puVar4[1];
    *(undefined8 *)(param_1 + 0x810) = uVar3;
    *(undefined8 *)(param_1 + 0x818) = uVar2;
    *(undefined1 *)(param_1 + 0x889) = 1;
    *(bool *)(param_1 + 0x888) = *(int *)(param_1 + 0x880) == 0;
    if (*(int *)(param_1 + 0x880) == 0) {
      *(undefined8 *)(param_1 + 0x840) = uVar3;
      *(undefined8 *)(param_1 + 0x848) = uVar2;
      *(undefined1 (*) [16])(param_1 + 0x850) = auVar9;
      *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_1 + 0x830);
      *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(param_1 + 0x838);
    }
    fVar18 = *(float *)(param_1 + 0x4c8) +
             *(float *)((longlong)*(int *)(param_1 + 0x3cc) * 0x20 + 8 + *param_2);
    fVar7 = (float)(int)(fVar18 * 0.0027777778) * 360.0;
    if (ABS(fVar18) < ABS(fVar7)) {
      fVar7 = fVar18;
    }
    fVar18 = fVar18 - fVar7;
    if (fVar18 < 0.0) {
      fVar18 = fVar18 + 360.0;
    }
    if (180.0 < fVar18) {
      fVar18 = fVar18 - 360.0;
    }
    fVar18 = fVar18 * -0.017453292;
    fVar16 = *(float *)(param_1 + 0x4c8) +
             *(float *)((longlong)*(int *)(param_1 + 0x3dc) * 0x20 + 8 + *param_2);
    fVar7 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
    if (ABS(fVar16) < ABS(fVar7)) {
      fVar7 = fVar16;
    }
    fVar16 = fVar16 - fVar7;
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + 360.0;
    }
    if (180.0 < fVar16) {
      fVar16 = fVar16 - 360.0;
    }
    fVar16 = fVar16 * -0.017453292;
    if ((*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e3) == '\0') ||
       (fVar7 = *(float *)(param_1 + 0x3f4), fVar7 <= 0.0)) {
      fVar7 = fVar18 * 0.5;
      fVar13 = fVar7 * 0.15915494;
      if (fVar7 < 0.0) {
        fVar15 = fVar13 - 0.5;
      }
      else {
        fVar15 = fVar13 + 0.5;
      }
      fVar15 = fVar7 - (float)(int)fVar15 * 6.2831855;
      if (fVar15 <= 1.5707964) {
        if (-1.5707964 <= fVar15) {
          fVar17 = 1.0;
        }
        else {
          fVar17 = -1.0;
          fVar15 = -3.1415927 - fVar15;
        }
      }
      else {
        fVar17 = -1.0;
        fVar15 = 3.1415927 - fVar15;
      }
      fVar5 = fVar15 * fVar15;
      fVar15 = (((((2.7525562e-06 - fVar5 * 2.3889859e-08) * fVar5 - 0.00019840874) * fVar5 +
                 0.008333331) * fVar5 - 0.16666667) * fVar5 + 1.0) * fVar15;
      local_1e8 = DAT_1464aa7b8._4_4_ * fVar15;
      fVar12 = DAT_1464aa7c0 * fVar15;
      _local_1c8 = ZEXT416((uint)((float)DAT_1464aa7b8 * fVar15));
      fVar17 = (((((2.4760495e-05 - fVar5 * 2.6051615e-07) * fVar5 - 0.0013888378) * fVar5 +
                 0.041666638) * fVar5 - 0.5) * fVar5 + 1.0) * fVar17;
      FUN_141215940(param_1 + 0x940);
      fVar15 = *(float *)(param_1 + 0x970);
      fVar5 = *(float *)(param_1 + 0x974);
      fVar6 = *(float *)(param_1 + 0x978);
      fVar8 = *(float *)(param_1 + 0x97c);
      *(undefined1 *)(param_1 + 0x9e9) = 1;
      *(bool *)(param_1 + 0x9e8) = *(int *)(param_1 + 0x9e0) == 0;
      local_1f8 = (float)local_1c8._0_4_;
      fStack_1f4 = local_1e8;
      fVar10 = fVar17 * fVar15 * _DAT_146876b90 + fVar8 * (float)local_1c8._0_4_ +
               fVar12 * fVar5 * _DAT_146876b80 + local_1e8 * fVar6 * _DAT_146876b70;
      fVar11 = fVar12 * fVar15 * fRam0000000146876b94 + fVar8 * local_1e8 +
               fVar17 * fVar5 * fRam0000000146876b84 +
               (float)local_1c8._0_4_ * fVar6 * fRam0000000146876b74;
      fVar14 = local_1e8 * fVar15 * fRam0000000146876b98 + fVar8 * fVar12 +
               (float)local_1c8._0_4_ * fVar5 * fRam0000000146876b88 +
               fVar17 * fVar6 * fRam0000000146876b78;
      fVar15 = (float)local_1c8._0_4_ * fVar15 * fRam0000000146876b9c + fVar8 * fVar17 +
               local_1e8 * fVar5 * fRam0000000146876b8c + fVar12 * fVar6 * fRam0000000146876b7c;
      *(float *)(param_1 + 0x970) = fVar10;
      *(float *)(param_1 + 0x974) = fVar11;
      *(float *)(param_1 + 0x978) = fVar14;
      *(float *)(param_1 + 0x97c) = fVar15;
      if (*(int *)(param_1 + 0x9e0) == 0) {
        *(float *)(param_1 + 0x9a0) = fVar10;
        *(float *)(param_1 + 0x9a4) = fVar11;
        *(float *)(param_1 + 0x9a8) = fVar14;
        *(float *)(param_1 + 0x9ac) = fVar15;
        *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(param_1 + 0x980);
        *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_1 + 0x988);
        *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_1 + 0x990);
        *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(param_1 + 0x998);
      }
      fVar16 = fVar16 * 0.5;
      local_1e4 = fVar16 * 0.15915494;
      if (fVar16 < 0.0) {
        fVar15 = local_1e4 - 0.5;
      }
      else {
        fVar15 = local_1e4 + 0.5;
      }
      fVar15 = fVar16 - (float)(int)fVar15 * 6.2831855;
      if (fVar15 <= 1.5707964) {
        if (-1.5707964 <= fVar15) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = -1.0;
          fVar15 = -3.1415927 - fVar15;
        }
      }
      else {
        fVar5 = -1.0;
        fVar15 = 3.1415927 - fVar15;
      }
      fVar6 = fVar15 * fVar15;
      fVar15 = (((((2.7525562e-06 - fVar6 * 2.3889859e-08) * fVar6 - 0.00019840874) * fVar6 +
                 0.008333331) * fVar6 - 0.16666667) * fVar6 + 1.0) * fVar15;
      local_1e8 = DAT_1464aa7b8._4_4_ * fVar15;
      fVar10 = DAT_1464aa7c0 * fVar15;
      _local_1c8 = ZEXT416((uint)((float)DAT_1464aa7b8 * fVar15));
      fVar5 = (((((2.4760495e-05 - fVar6 * 2.6051615e-07) * fVar6 - 0.0013888378) * fVar6 +
                0.041666638) * fVar6 - 0.5) * fVar6 + 1.0) * fVar5;
      fStack_1f0 = fVar12;
      fStack_1ec = fVar17;
      FUN_141215940(param_1 + 0x890);
      fVar15 = *(float *)(param_1 + 0x8c0);
      fVar17 = *(float *)(param_1 + 0x8c4);
      fVar6 = *(float *)(param_1 + 0x8c8);
      fVar8 = *(float *)(param_1 + 0x8cc);
      *(undefined1 *)(param_1 + 0x939) = 1;
      *(bool *)(param_1 + 0x938) = *(int *)(param_1 + 0x930) == 0;
      local_1f8 = (float)local_1c8._0_4_;
      fStack_1f4 = local_1e8;
      fVar12 = fVar5 * fVar15 * _DAT_146876b90 + fVar8 * (float)local_1c8._0_4_ +
               fVar10 * fVar17 * _DAT_146876b80 + local_1e8 * fVar6 * _DAT_146876b70;
      fVar11 = fVar10 * fVar15 * fRam0000000146876b94 + fVar8 * local_1e8 +
               fVar5 * fVar17 * fRam0000000146876b84 +
               (float)local_1c8._0_4_ * fVar6 * fRam0000000146876b74;
      fVar14 = local_1e8 * fVar15 * fRam0000000146876b98 + fVar8 * fVar10 +
               (float)local_1c8._0_4_ * fVar17 * fRam0000000146876b88 +
               fVar5 * fVar6 * fRam0000000146876b78;
      fVar15 = (float)local_1c8._0_4_ * fVar15 * fRam0000000146876b9c + fVar8 * fVar5 +
               local_1e8 * fVar17 * fRam0000000146876b8c + fVar10 * fVar6 * fRam0000000146876b7c;
      *(float *)(param_1 + 0x8c0) = fVar12;
      *(float *)(param_1 + 0x8c4) = fVar11;
      *(float *)(param_1 + 0x8c8) = fVar14;
      *(float *)(param_1 + 0x8cc) = fVar15;
      if (*(int *)(param_1 + 0x930) == 0) {
        *(float *)(param_1 + 0x8f0) = fVar12;
        *(float *)(param_1 + 0x8f4) = fVar11;
        *(float *)(param_1 + 0x8f8) = fVar14;
        *(float *)(param_1 + 0x8fc) = fVar15;
        *(undefined8 *)(param_1 + 0x900) = *(undefined8 *)(param_1 + 0x8d0);
        *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_1 + 0x8d8);
        *(undefined8 *)(param_1 + 0x910) = *(undefined8 *)(param_1 + 0x8e0);
        *(undefined8 *)(param_1 + 0x918) = *(undefined8 *)(param_1 + 0x8e8);
      }
      _local_1c8 = ZEXT416((uint)(float)DAT_1464aa7b8);
      if (fVar7 < 0.0) {
        fVar13 = fVar13 - 0.5;
      }
      else {
        fVar13 = fVar13 + 0.5;
      }
      fVar7 = fVar7 - (float)(int)fVar13 * 6.2831855;
      if (fVar7 <= 1.5707964) {
        if (-1.5707964 <= fVar7) {
          fVar13 = 1.0;
        }
        else {
          fVar13 = -1.0;
          fVar7 = -3.1415927 - fVar7;
        }
      }
      else {
        fVar13 = -1.0;
        fVar7 = 3.1415927 - fVar7;
      }
      fVar15 = fVar7 * fVar7;
      fVar7 = (((((2.7525562e-06 - fVar15 * 2.3889859e-08) * fVar15 - 0.00019840874) * fVar15 +
                0.008333331) * fVar15 - 0.16666667) * fVar15 + 1.0) * fVar7;
      fVar11 = DAT_1464aa7b8._4_4_ * fVar7;
      local_1e8 = DAT_1464aa7c0 * fVar7;
      fVar7 = (float)DAT_1464aa7b8 * fVar7;
      fVar13 = (((((2.4760495e-05 - fVar15 * 2.6051615e-07) * fVar15 - 0.0013888378) * fVar15 +
                 0.041666638) * fVar15 - 0.5) * fVar15 + 1.0) * fVar13;
      fStack_1f0 = fVar10;
      fStack_1ec = fVar5;
      FUN_141215940(param_1 + 0x2570);
      fVar15 = *(float *)(param_1 + 0x25a0);
      fVar17 = *(float *)(param_1 + 0x25a4);
      fVar5 = *(float *)(param_1 + 0x25a8);
      fVar6 = *(float *)(param_1 + 0x25ac);
      *(undefined1 *)(param_1 + 0x2619) = 1;
      *(bool *)(param_1 + 0x2618) = *(int *)(param_1 + 0x2610) == 0;
      fStack_1f0 = local_1e8;
      fVar8 = fVar13 * fVar15 * _DAT_146876b90 + fVar6 * fVar7 + local_1e8 * fVar17 * _DAT_146876b80
              + fVar11 * fVar5 * _DAT_146876b70;
      fVar12 = local_1e8 * fVar15 * fRam0000000146876b94 + fVar6 * fVar11 +
               fVar13 * fVar17 * fRam0000000146876b84 + fVar7 * fVar5 * fRam0000000146876b74;
      fVar10 = fVar11 * fVar15 * fRam0000000146876b98 + fVar6 * local_1e8 +
               fVar7 * fVar17 * fRam0000000146876b88 + fVar13 * fVar5 * fRam0000000146876b78;
      fVar15 = fVar7 * fVar15 * fRam0000000146876b9c + fVar6 * fVar13 +
               fVar11 * fVar17 * fRam0000000146876b8c + local_1e8 * fVar5 * fRam0000000146876b7c;
      *(float *)(param_1 + 0x25a0) = fVar8;
      *(float *)(param_1 + 0x25a4) = fVar12;
      *(float *)(param_1 + 0x25a8) = fVar10;
      *(float *)(param_1 + 0x25ac) = fVar15;
      if (*(int *)(param_1 + 0x2610) == 0) {
        *(float *)(param_1 + 0x25d0) = fVar8;
        *(float *)(param_1 + 0x25d4) = fVar12;
        *(float *)(param_1 + 0x25d8) = fVar10;
        *(float *)(param_1 + 0x25dc) = fVar15;
        *(undefined8 *)(param_1 + 0x25e0) = *(undefined8 *)(param_1 + 0x25b0);
        *(undefined8 *)(param_1 + 0x25e8) = *(undefined8 *)(param_1 + 0x25b8);
        *(undefined8 *)(param_1 + 0x25f0) = *(undefined8 *)(param_1 + 0x25c0);
        *(undefined8 *)(param_1 + 0x25f8) = *(undefined8 *)(param_1 + 0x25c8);
      }
      _local_1c8 = ZEXT416((uint)(float)DAT_1464aa7b8);
      if (fVar16 < 0.0) {
        fVar15 = local_1e4 - 0.5;
      }
      else {
        fVar15 = local_1e4 + 0.5;
      }
      fVar16 = fVar16 - (float)(int)fVar15 * 6.2831855;
      if (fVar16 <= 1.5707964) {
        if (-1.5707964 <= fVar16) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = -1.0;
          fVar16 = -3.1415927 - fVar16;
        }
      }
      else {
        fVar15 = -1.0;
        fVar16 = 3.1415927 - fVar16;
      }
      fVar17 = fVar16 * fVar16;
      fVar16 = (((((2.7525562e-06 - fVar17 * 2.3889859e-08) * fVar17 - 0.00019840874) * fVar17 +
                 0.008333331) * fVar17 - 0.16666667) * fVar17 + 1.0) * fVar16;
      fVar10 = DAT_1464aa7b8._4_4_ * fVar16;
      local_1e8 = DAT_1464aa7c0 * fVar16;
      fVar16 = (float)DAT_1464aa7b8 * fVar16;
      fVar15 = (((((2.4760495e-05 - fVar17 * 2.6051615e-07) * fVar17 - 0.0013888378) * fVar17 +
                 0.041666638) * fVar17 - 0.5) * fVar17 + 1.0) * fVar15;
      local_1f8 = fVar7;
      fStack_1f4 = fVar11;
      fStack_1ec = fVar13;
      FUN_141215940(param_1 + 0x24c0);
      fVar7 = *(float *)(param_1 + 0x24f0);
      fVar13 = *(float *)(param_1 + 0x24f4);
      fVar17 = *(float *)(param_1 + 0x24f8);
      fVar5 = *(float *)(param_1 + 0x24fc);
      *(undefined1 *)(param_1 + 0x2569) = 1;
      *(bool *)(param_1 + 0x2568) = *(int *)(param_1 + 0x2560) == 0;
      fStack_1f0 = local_1e8;
      fVar6 = fVar15 * fVar7 * _DAT_146876b90 + fVar5 * fVar16 + local_1e8 * fVar13 * _DAT_146876b80
              + fVar10 * fVar17 * _DAT_146876b70;
      fVar8 = local_1e8 * fVar7 * fRam0000000146876b94 + fVar5 * fVar10 +
              fVar15 * fVar13 * fRam0000000146876b84 + fVar16 * fVar17 * fRam0000000146876b74;
      fVar12 = fVar10 * fVar7 * fRam0000000146876b98 + fVar5 * local_1e8 +
               fVar16 * fVar13 * fRam0000000146876b88 + fVar15 * fVar17 * fRam0000000146876b78;
      fVar7 = fVar16 * fVar7 * fRam0000000146876b9c + fVar5 * fVar15 +
              fVar10 * fVar13 * fRam0000000146876b8c + local_1e8 * fVar17 * fRam0000000146876b7c;
      *(float *)(param_1 + 0x24f0) = fVar6;
      *(float *)(param_1 + 0x24f4) = fVar8;
      *(float *)(param_1 + 0x24f8) = fVar12;
      *(float *)(param_1 + 0x24fc) = fVar7;
      local_1f8 = fVar16;
      fStack_1f4 = fVar10;
      fStack_1ec = fVar15;
      if (*(int *)(param_1 + 0x2560) == 0) {
        *(float *)(param_1 + 0x2520) = fVar6;
        *(float *)(param_1 + 0x2524) = fVar8;
        *(float *)(param_1 + 0x2528) = fVar12;
        *(float *)(param_1 + 0x252c) = fVar7;
        *(undefined8 *)(param_1 + 0x2530) = *(undefined8 *)(param_1 + 0x2500);
        *(undefined8 *)(param_1 + 0x2538) = *(undefined8 *)(param_1 + 0x2508);
        *(undefined8 *)(param_1 + 0x2540) = *(undefined8 *)(param_1 + 0x2510);
        *(undefined8 *)(param_1 + 0x2548) = *(undefined8 *)(param_1 + 0x2518);
      }
    }
    else {
      fVar15 = fVar7 * *(float *)(param_1 + 0x2d4);
      fVar13 = *(float *)(param_1 + 0x418) * *(float *)(param_1 + 0x324);
      local_1e4 = fVar13 * 0.75;
      local_1e8 = fVar13;
      if (0.0 < *(float *)(param_1 + 0x418)) {
        local_1e8 = local_1e4;
        local_1e4 = fVar13;
      }
      fVar13 = *(float *)(param_1 + 0x400) * -0.017453292;
      local_1e8 = fVar15 + local_1e8;
      fVar17 = fVar13 - fVar18;
      local_1c8._4_4_ = *(float *)(param_1 + 0x410) * *(float *)(param_1 + 0x328) * -0.008726646;
      if ((float)local_1c8._4_4_ < 0.0) {
        fVar5 = (float)local_1c8._4_4_ * 0.15915494 - 0.5;
      }
      else {
        fVar5 = (float)local_1c8._4_4_ * 0.15915494 + 0.5;
      }
      local_1c8._4_4_ = (float)local_1c8._4_4_ - (float)(int)fVar5 * 6.2831855;
      if ((float)local_1c8._4_4_ <= 1.5707964) {
        if (-1.5707964 <= (float)local_1c8._4_4_) {
          local_res10 = 1.0;
        }
        else {
          local_res10 = -1.0;
          local_1c8._4_4_ = -3.1415927 - (float)local_1c8._4_4_;
        }
      }
      else {
        local_res10 = -1.0;
        local_1c8._4_4_ = 3.1415927 - (float)local_1c8._4_4_;
      }
      fVar5 = (float)local_1c8._4_4_ * (float)local_1c8._4_4_;
      fVar15 = (fVar15 - local_1e4) * 0.008726646;
      local_1c8._4_4_ =
           (((((2.7525562e-06 - fVar5 * 2.3889859e-08) * fVar5 - 0.00019840874) * fVar5 +
             0.008333331) * fVar5 - 0.16666667) * fVar5 + 1.0) * (float)local_1c8._4_4_;
      local_128 = (float)DAT_1464aa7b8 * (float)local_1c8._4_4_;
      fStack_1d0 = DAT_1464aa7b8._4_4_ * (float)local_1c8._4_4_;
      local_1c8._4_4_ = DAT_1464aa7c0 * (float)local_1c8._4_4_;
      local_138 = ZEXT416((uint)(float)DAT_1464aa7a8);
      local_118 = (((((2.4760495e-05 - fVar5 * 2.6051615e-07) * fVar5 - 0.0013888378) * fVar5 +
                    0.041666638) * fVar5 - 0.5) * fVar5 + 1.0) * local_res10;
      if (fVar15 < 0.0) {
        fVar5 = fVar15 * 0.15915494 - 0.5;
      }
      else {
        fVar5 = fVar15 * 0.15915494 + 0.5;
      }
      fVar15 = fVar15 - (float)(int)fVar5 * 6.2831855;
      if (fVar15 <= 1.5707964) {
        if (-1.5707964 <= fVar15) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = -1.0;
          fVar15 = -3.1415927 - fVar15;
        }
      }
      else {
        fVar5 = -1.0;
        fVar15 = 3.1415927 - fVar15;
      }
      fVar8 = fVar15 * fVar15;
      fVar15 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                 0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fVar15;
      fVar12 = (float)DAT_1464aa7a8 * fVar15;
      fVar6 = DAT_1464aa7a8._4_4_ * fVar15;
      fVar15 = DAT_1464aa7b0 * fVar15;
      local_1d8 = CONCAT44(fStack_1d0,fStack_1d0);
      fVar5 = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * fVar5;
      local_1c8._0_4_ = local_1c8._4_4_;
      fStack_1c0 = (float)local_1c8._4_4_;
      fStack_1bc = (float)local_1c8._4_4_;
      local_1b8 = fVar5 * local_128 * _DAT_146876b90 + local_118 * fVar12 +
                  fVar15 * fStack_1d0 * _DAT_146876b80 +
                  fVar6 * (float)local_1c8._4_4_ * _DAT_146876b70;
      fStack_1b4 = fVar15 * local_128 * fRam0000000146876b94 + local_118 * fVar6 +
                   fVar5 * fStack_1d0 * fRam0000000146876b84 +
                   fVar12 * (float)local_1c8._4_4_ * fRam0000000146876b74;
      fStack_1b0 = fVar6 * local_128 * fRam0000000146876b98 + local_118 * fVar15 +
                   fVar12 * fStack_1d0 * fRam0000000146876b88 +
                   fVar5 * (float)local_1c8._4_4_ * fRam0000000146876b78;
      fStack_1ac = fVar12 * local_128 * fRam0000000146876b9c + local_118 * fVar5 +
                   fVar6 * fStack_1d0 * fRam0000000146876b8c +
                   fVar15 * (float)local_1c8._4_4_ * fRam0000000146876b7c;
      fVar15 = local_1e8 * -0.008726646;
      if (fVar15 < 0.0) {
        fVar5 = fVar15 * 0.15915494 - 0.5;
      }
      else {
        fVar5 = fVar15 * 0.15915494 + 0.5;
      }
      fVar15 = fVar15 - (float)(int)fVar5 * 6.2831855;
      if (fVar15 <= 1.5707964) {
        if (-1.5707964 <= fVar15) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = -1.0;
          fVar15 = -3.1415927 - fVar15;
        }
      }
      else {
        fVar5 = -1.0;
        fVar15 = 3.1415927 - fVar15;
      }
      fVar12 = fVar15 * fVar15;
      fVar15 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                 0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fVar15;
      fVar6 = DAT_1464aa7b0 * fVar15;
      fVar8 = fVar15 * DAT_1464aa7a8._4_4_;
      fVar15 = (float)DAT_1464aa7a8 * fVar15;
      fVar5 = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fVar5;
      local_1f8 = fVar5 * local_128 * _DAT_146876b90 + local_118 * fVar15 +
                  fVar6 * fStack_1d0 * _DAT_146876b80 +
                  fVar8 * (float)local_1c8._4_4_ * _DAT_146876b70;
      fStack_1f4 = fVar6 * local_128 * fRam0000000146876b94 + local_118 * fVar8 +
                   fVar5 * fStack_1d0 * fRam0000000146876b84 +
                   fVar15 * (float)local_1c8._4_4_ * fRam0000000146876b74;
      fStack_1f0 = fVar8 * local_128 * fRam0000000146876b98 + local_118 * fVar6 +
                   fVar15 * fStack_1d0 * fRam0000000146876b88 +
                   fVar5 * (float)local_1c8._4_4_ * fRam0000000146876b78;
      fStack_1ec = fVar15 * local_128 * fRam0000000146876b9c + local_118 * fVar5 +
                   fVar8 * fStack_1d0 * fRam0000000146876b8c +
                   fVar6 * (float)local_1c8._4_4_ * fRam0000000146876b7c;
      fStack_1cc = fStack_1d0;
      fStack_124 = local_128;
      fStack_120 = local_128;
      fStack_11c = local_128;
      fStack_114 = local_118;
      fStack_110 = local_118;
      fStack_10c = local_118;
      FUN_14120e180(lVar1,6,&local_1b8,1);
      FUN_14120e180(lVar1,5,&local_1f8,1);
      FUN_14120e180(lVar1,0x2f,&local_1b8,1);
      FUN_14120e180(lVar1,0x2e,&local_1f8,1);
      fVar5 = (fVar17 * fVar7 + fVar18) * 0.5;
      fVar15 = fVar5 * 0.15915494;
      if (fVar5 < 0.0) {
        fVar6 = fVar15 - 0.5;
      }
      else {
        fVar6 = fVar15 + 0.5;
      }
      fStack_1f0 = fVar5 - (float)(int)fVar6 * 6.2831855;
      if (fStack_1f0 <= 1.5707964) {
        if (-1.5707964 <= fStack_1f0) {
          fStack_1ec = 1.0;
        }
        else {
          fStack_1ec = -1.0;
          fStack_1f0 = -3.1415927 - fStack_1f0;
        }
      }
      else {
        fStack_1ec = -1.0;
        fStack_1f0 = 3.1415927 - fStack_1f0;
      }
      fVar6 = fStack_1f0 * fStack_1f0;
      fStack_1f0 = (((((2.7525562e-06 - fVar6 * 2.3889859e-08) * fVar6 - 0.00019840874) * fVar6 +
                     0.008333331) * fVar6 - 0.16666667) * fVar6 + 1.0) * fStack_1f0;
      fStack_1f4 = DAT_1464aa7b8._4_4_ * fStack_1f0;
      local_1f8 = (float)DAT_1464aa7b8 * fStack_1f0;
      fStack_1f0 = DAT_1464aa7c0 * fStack_1f0;
      fStack_1ec = (((((2.4760495e-05 - fVar6 * 2.6051615e-07) * fVar6 - 0.0013888378) * fVar6 +
                     0.041666638) * fVar6 - 0.5) * fVar6 + 1.0) * fStack_1ec;
      FUN_14120e180(lVar1,6,&local_1f8,1);
      fVar7 = ((fVar13 - fVar16) * fVar7 + fVar16) * 0.5;
      local_1e4 = fVar7 * 0.15915494;
      if (fVar7 < 0.0) {
        fVar16 = local_1e4 - 0.5;
      }
      else {
        fVar16 = local_1e4 + 0.5;
      }
      fStack_1f0 = fVar7 - (float)(int)fVar16 * 6.2831855;
      if (fStack_1f0 <= 1.5707964) {
        if (-1.5707964 <= fStack_1f0) {
          fStack_1ec = 1.0;
        }
        else {
          fStack_1ec = -1.0;
          fStack_1f0 = -3.1415927 - fStack_1f0;
        }
      }
      else {
        fStack_1ec = -1.0;
        fStack_1f0 = 3.1415927 - fStack_1f0;
      }
      fVar16 = fStack_1f0 * fStack_1f0;
      fStack_1f0 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                     0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fStack_1f0;
      fStack_1f4 = DAT_1464aa7b8._4_4_ * fStack_1f0;
      local_1f8 = (float)DAT_1464aa7b8 * fStack_1f0;
      fStack_1f0 = DAT_1464aa7c0 * fStack_1f0;
      fStack_1ec = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                     0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fStack_1ec;
      FUN_14120e180(lVar1,5,&local_1f8,1);
      if (fVar5 < 0.0) {
        fVar15 = fVar15 - 0.5;
      }
      else {
        fVar15 = fVar15 + 0.5;
      }
      fVar5 = fVar5 - (float)(int)fVar15 * 6.2831855;
      if (fVar5 <= 1.5707964) {
        if (-1.5707964 <= fVar5) {
          fStack_1ec = 1.0;
        }
        else {
          fStack_1ec = -1.0;
          fVar5 = -3.1415927 - fVar5;
        }
      }
      else {
        fStack_1ec = -1.0;
        fVar5 = 3.1415927 - fVar5;
      }
      fVar16 = fVar5 * fVar5;
      fVar5 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar5;
      fStack_1f0 = DAT_1464aa7c0 * fVar5;
      local_1f8 = (float)DAT_1464aa7b8 * fVar5;
      fStack_1f4 = DAT_1464aa7b8._4_4_ * fVar5;
      fStack_1ec = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                     0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fStack_1ec;
      FUN_14120e180(lVar1,0x2f,&local_1f8,1);
      if (fVar7 < 0.0) {
        fVar16 = local_1e4 - 0.5;
      }
      else {
        fVar16 = local_1e4 + 0.5;
      }
      fVar7 = fVar7 - (float)(int)fVar16 * 6.2831855;
      if (fVar7 <= 1.5707964) {
        if (-1.5707964 <= fVar7) {
          fStack_1ec = 1.0;
        }
        else {
          fStack_1ec = -1.0;
          fVar7 = -3.1415927 - fVar7;
        }
      }
      else {
        fStack_1ec = -1.0;
        fVar7 = 3.1415927 - fVar7;
      }
      fVar16 = fVar7 * fVar7;
      fVar7 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar7;
      fStack_1f0 = DAT_1464aa7c0 * fVar7;
      local_1f8 = (float)DAT_1464aa7b8 * fVar7;
      fStack_1f4 = DAT_1464aa7b8._4_4_ * fVar7;
      fStack_1ec = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                     0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fStack_1ec;
      FUN_14120e180(lVar1,0x2e,&local_1f8,1);
      fVar18 = fVar17 * *(float *)(param_1 + 0x3f4) + fVar18;
    }
    fVar15 = -1.0;
    FUN_141215940(param_1 + 0x1bd0);
    fVar7 = *(float *)(param_1 + 0x1c10);
    fVar16 = *(float *)(param_1 + 0x1c14);
    fVar13 = *(float *)(param_1 + 0x1c18);
    FUN_141215940(param_1 + 0x1c80);
    local_198 = *(float *)(param_1 + 0x1cc0) - fVar7;
    local_194 = *(float *)(param_1 + 0x1cc4) - fVar16;
    local_190 = *(float *)(param_1 + 0x1cc8) - fVar13;
    uVar3 = FUN_1412242c0(lVar1,&local_1d8,0);
    uVar3 = FRotationMatrix::MakeFromXZ(local_f8,&local_198,uVar3);
    FMatrix::ToQuat(uVar3,&local_108);
    fVar18 = fVar18 * 0.5;
    fVar7 = fVar18 * 0.15915494;
    if (fVar18 < 0.0) {
      fVar16 = fVar7 - 0.5;
    }
    else {
      fVar16 = fVar7 + 0.5;
    }
    fStack_1f4 = fVar18 - (float)(int)fVar16 * 6.2831855;
    if (fStack_1f4 <= 1.5707964) {
      if (-1.5707964 <= fStack_1f4) {
        fStack_1ec = 1.0;
      }
      else {
        fStack_1ec = -1.0;
        fStack_1f4 = -3.1415927 - fStack_1f4;
      }
    }
    else {
      fStack_1ec = -1.0;
      fStack_1f4 = 3.1415927 - fStack_1f4;
    }
    fVar16 = fStack_1f4 * fStack_1f4;
    fStack_1f4 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                   0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fStack_1f4;
    fStack_1f0 = DAT_1464aa7b0 * fStack_1f4;
    local_1f8 = (float)DAT_1464aa7a8 * fStack_1f4;
    fStack_1f4 = DAT_1464aa7a8._4_4_ * fStack_1f4;
    fStack_1ec = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                   0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fStack_1ec;
    local_1b8 = fStack_1ec * local_108 * _DAT_146876b90 + fStack_fc * local_1f8 +
                fStack_1f0 * fStack_104 * _DAT_146876b80 + fStack_1f4 * fStack_100 * _DAT_146876b70;
    fStack_1b4 = fStack_1f0 * local_108 * fRam0000000146876b94 + fStack_fc * fStack_1f4 +
                 fStack_1ec * fStack_104 * fRam0000000146876b84 +
                 local_1f8 * fStack_100 * fRam0000000146876b74;
    fStack_1b0 = fStack_1f4 * local_108 * fRam0000000146876b98 + fStack_fc * fStack_1f0 +
                 local_1f8 * fStack_104 * fRam0000000146876b88 +
                 fStack_1ec * fStack_100 * fRam0000000146876b78;
    fStack_1ac = local_1f8 * local_108 * fRam0000000146876b9c + fStack_fc * fStack_1ec +
                 fStack_1f4 * fStack_104 * fRam0000000146876b8c +
                 fStack_1f0 * fStack_100 * fRam0000000146876b7c;
    local_1e8 = fStack_1f0;
    FUN_141215940(param_1 + 0x1c80);
    *(ulonglong *)(param_1 + 0x1cb0) = CONCAT44(fStack_1b4,local_1b8);
    *(ulonglong *)(param_1 + 0x1cb8) = CONCAT44(fStack_1ac,fStack_1b0);
    *(bool *)(param_1 + 0x1d28) = *(int *)(param_1 + 0x1d20) == 0;
    *(undefined1 *)(param_1 + 0x1d29) = 1;
    if (*(int *)(param_1 + 0x1d20) == 0) {
      *(ulonglong *)(param_1 + 0x1ce0) = CONCAT44(fStack_1b4,local_1b8);
      *(ulonglong *)(param_1 + 0x1ce8) = CONCAT44(fStack_1ac,fStack_1b0);
      *(undefined8 *)(param_1 + 0x1cf0) = *(undefined8 *)(param_1 + 0x1cc0);
      *(undefined8 *)(param_1 + 0x1cf8) = *(undefined8 *)(param_1 + 0x1cc8);
      *(undefined8 *)(param_1 + 0x1d00) = *(undefined8 *)(param_1 + 0x1cd0);
      *(undefined8 *)(param_1 + 0x1d08) = *(undefined8 *)(param_1 + 0x1cd8);
    }
    FUN_141215940(param_1 + 0x1bd0);
    *(ulonglong *)(param_1 + 0x1c00) = CONCAT44(fStack_1b4,local_1b8);
    *(ulonglong *)(param_1 + 0x1c08) = CONCAT44(fStack_1ac,fStack_1b0);
    *(bool *)(param_1 + 0x1c78) = *(int *)(param_1 + 0x1c70) == 0;
    *(undefined1 *)(param_1 + 0x1c79) = 1;
    if (*(int *)(param_1 + 0x1c70) == 0) {
      *(ulonglong *)(param_1 + 0x1c30) = CONCAT44(fStack_1b4,local_1b8);
      *(ulonglong *)(param_1 + 0x1c38) = CONCAT44(fStack_1ac,fStack_1b0);
      *(undefined8 *)(param_1 + 0x1c40) = *(undefined8 *)(param_1 + 0x1c10);
      *(undefined8 *)(param_1 + 0x1c48) = *(undefined8 *)(param_1 + 0x1c18);
      *(undefined8 *)(param_1 + 0x1c50) = *(undefined8 *)(param_1 + 0x1c20);
      *(undefined8 *)(param_1 + 0x1c58) = *(undefined8 *)(param_1 + 0x1c28);
    }
    puVar4 = (undefined8 *)FUN_141224150(lVar1,&local_1f8,0x24);
    uVar3 = *puVar4;
    fStack_1d0 = *(float *)(puVar4 + 1);
    if (fVar18 < 0.0) {
      fVar16 = fVar7 - 0.5;
    }
    else {
      fVar16 = fVar7 + 0.5;
    }
    fVar16 = fVar18 - (float)(int)fVar16 * 6.2831855;
    if (fVar16 <= 1.5707964) {
      if (-1.5707964 <= fVar16) {
        fVar13 = 1.0;
      }
      else {
        fVar13 = -1.0;
        fVar16 = -3.1415927 - fVar16;
      }
    }
    else {
      fVar13 = -1.0;
      fVar16 = 3.1415927 - fVar16;
    }
    local_1d8._0_4_ = (float)uVar3;
    local_1d8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    fVar17 = fVar16 * fVar16;
    fVar16 = (((((2.7525562e-06 - fVar17 * 2.3889859e-08) * fVar17 - 0.00019840874) * fVar17 +
               0.008333331) * fVar17 - 0.16666667) * fVar17 + 1.0) * fVar16;
    fVar19 = (float)local_1d8 * fVar16;
    fVar13 = (((((2.4760495e-05 - fVar17 * 2.6051615e-07) * fVar17 - 0.0013888378) * fVar17 +
               0.041666638) * fVar17 - 0.5) * fVar17 + 1.0) * fVar13;
    fVar14 = local_1d8._4_4_ * fVar16;
    fVar16 = fStack_1d0 * fVar16;
    local_1d8 = uVar3;
    FUN_141215940(param_1 + 0x1de0);
    fVar17 = *(float *)(param_1 + 0x1e10);
    fVar5 = *(float *)(param_1 + 0x1e14);
    fVar6 = *(float *)(param_1 + 0x1e18);
    fVar8 = *(float *)(param_1 + 0x1e1c);
    *(undefined1 *)(param_1 + 0x1e89) = 1;
    *(bool *)(param_1 + 0x1e88) = *(int *)(param_1 + 0x1e80) == 0;
    fVar12 = fVar8 * fVar19 * _DAT_146876b90 + fVar13 * fVar17 + fVar6 * fVar14 * _DAT_146876b80 +
             fVar5 * fVar16 * _DAT_146876b70;
    fVar10 = fVar6 * fVar19 * fRam0000000146876b94 + fVar13 * fVar5 +
             fVar8 * fVar14 * fRam0000000146876b84 + fVar17 * fVar16 * fRam0000000146876b74;
    fVar11 = fVar5 * fVar19 * fRam0000000146876b98 + fVar13 * fVar6 +
             fVar17 * fVar14 * fRam0000000146876b88 + fVar8 * fVar16 * fRam0000000146876b78;
    fVar17 = fVar17 * fVar19 * fRam0000000146876b9c + fVar13 * fVar8 +
             fVar5 * fVar14 * fRam0000000146876b8c + fVar6 * fVar16 * fRam0000000146876b7c;
    *(float *)(param_1 + 0x1e10) = fVar12;
    *(float *)(param_1 + 0x1e14) = fVar10;
    *(float *)(param_1 + 0x1e18) = fVar11;
    *(float *)(param_1 + 0x1e1c) = fVar17;
    if (*(int *)(param_1 + 0x1e80) == 0) {
      *(float *)(param_1 + 0x1e40) = fVar12;
      *(float *)(param_1 + 0x1e44) = fVar10;
      *(float *)(param_1 + 0x1e48) = fVar11;
      *(float *)(param_1 + 0x1e4c) = fVar17;
      *(undefined8 *)(param_1 + 0x1e50) = *(undefined8 *)(param_1 + 0x1e20);
      *(undefined8 *)(param_1 + 0x1e58) = *(undefined8 *)(param_1 + 0x1e28);
      *(undefined4 *)(param_1 + 0x1e60) = *(undefined4 *)(param_1 + 0x1e30);
      *(undefined4 *)(param_1 + 0x1e64) = *(undefined4 *)(param_1 + 0x1e34);
      *(undefined4 *)(param_1 + 0x1e68) = *(undefined4 *)(param_1 + 0x1e38);
      *(undefined4 *)(param_1 + 0x1e6c) = *(undefined4 *)(param_1 + 0x1e3c);
    }
    local_1f8 = fVar19;
    fStack_1f4 = fVar14;
    fStack_1f0 = fVar16;
    fStack_1ec = fVar13;
    puVar4 = (undefined8 *)FUN_141224150(lVar1,&local_1f8,0x23);
    uVar3 = *puVar4;
    fStack_1d0 = *(float *)(puVar4 + 1);
    if (fVar18 < 0.0) {
      fVar7 = fVar7 - 0.5;
    }
    else {
      fVar7 = fVar7 + 0.5;
    }
    fVar18 = fVar18 - (float)(int)fVar7 * 6.2831855;
    if (fVar18 <= 1.5707964) {
      if (-1.5707964 <= fVar18) {
        fVar15 = 1.0;
      }
      else {
        fVar18 = -3.1415927 - fVar18;
      }
    }
    else {
      fVar18 = 3.1415927 - fVar18;
    }
    local_1d8._0_4_ = (float)uVar3;
    local_1d8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    fVar7 = fVar18 * fVar18;
    fVar18 = (((((2.7525562e-06 - fVar7 * 2.3889859e-08) * fVar7 - 0.00019840874) * fVar7 +
               0.008333331) * fVar7 - 0.16666667) * fVar7 + 1.0) * fVar18;
    fVar10 = (float)local_1d8 * fVar18;
    fVar15 = (((((2.4760495e-05 - fVar7 * 2.6051615e-07) * fVar7 - 0.0013888378) * fVar7 +
               0.041666638) * fVar7 - 0.5) * fVar7 + 1.0) * fVar15;
    fVar12 = local_1d8._4_4_ * fVar18;
    fVar18 = fStack_1d0 * fVar18;
    local_1d8 = uVar3;
    FUN_141215940(param_1 + 0x1d30);
    fVar7 = *(float *)(param_1 + 0x1d60);
    fVar16 = *(float *)(param_1 + 0x1d64);
    fVar13 = *(float *)(param_1 + 0x1d68);
    fVar17 = *(float *)(param_1 + 0x1d6c);
    *(undefined1 *)(param_1 + 0x1dd9) = 1;
    *(bool *)(param_1 + 0x1dd8) = *(int *)(param_1 + 0x1dd0) == 0;
    fVar5 = fVar17 * fVar10 * _DAT_146876b90 + fVar15 * fVar7 + fVar13 * fVar12 * _DAT_146876b80 +
            fVar16 * fVar18 * _DAT_146876b70;
    fVar6 = fVar13 * fVar10 * fRam0000000146876b94 + fVar15 * fVar16 +
            fVar17 * fVar12 * fRam0000000146876b84 + fVar7 * fVar18 * fRam0000000146876b74;
    fVar8 = fVar16 * fVar10 * fRam0000000146876b98 + fVar15 * fVar13 +
            fVar7 * fVar12 * fRam0000000146876b88 + fVar17 * fVar18 * fRam0000000146876b78;
    fVar7 = fVar7 * fVar10 * fRam0000000146876b9c + fVar15 * fVar17 +
            fVar16 * fVar12 * fRam0000000146876b8c + fVar13 * fVar18 * fRam0000000146876b7c;
    *(float *)(param_1 + 0x1d60) = fVar5;
    *(float *)(param_1 + 0x1d64) = fVar6;
    *(float *)(param_1 + 0x1d68) = fVar8;
    *(float *)(param_1 + 0x1d6c) = fVar7;
    if (*(int *)(param_1 + 0x1dd0) == 0) {
      *(float *)(param_1 + 0x1d90) = fVar5;
      *(float *)(param_1 + 0x1d94) = fVar6;
      *(float *)(param_1 + 0x1d98) = fVar8;
      *(float *)(param_1 + 0x1d9c) = fVar7;
      *(undefined8 *)(param_1 + 0x1da0) = *(undefined8 *)(param_1 + 0x1d70);
      *(undefined8 *)(param_1 + 0x1da8) = *(undefined8 *)(param_1 + 0x1d78);
      *(undefined4 *)(param_1 + 0x1db0) = *(undefined4 *)(param_1 + 0x1d80);
      *(undefined4 *)(param_1 + 0x1db4) = *(undefined4 *)(param_1 + 0x1d84);
      *(undefined4 *)(param_1 + 0x1db8) = *(undefined4 *)(param_1 + 0x1d88);
      *(undefined4 *)(param_1 + 0x1dbc) = *(undefined4 *)(param_1 + 0x1d8c);
    }
    FUN_141215940(param_1 + 0x28e0);
    fVar7 = *(float *)(param_1 + 0x2920);
    fVar18 = *(float *)(param_1 + 0x2924);
    fVar16 = *(float *)(param_1 + 0x2928);
    FUN_141215940(param_1 + 0x2830);
    local_188 = *(float *)(param_1 + 0x2870) - fVar7;
    local_184 = *(float *)(param_1 + 0x2874) - fVar18;
    local_180 = *(float *)(param_1 + 0x2878) - fVar16;
    uVar3 = FRotationMatrix::MakeFromZX(local_f8,&local_188,local_178);
    FMatrix::ToQuat(uVar3,&local_158);
    FUN_141215940(param_1 + 0x2830);
    *(undefined8 *)(param_1 + 0x2860) = local_158;
    *(undefined8 *)(param_1 + 0x2868) = uStack_150;
    *(bool *)(param_1 + 0x28d8) = *(int *)(param_1 + 0x28d0) == 0;
    *(undefined1 *)(param_1 + 0x28d9) = 1;
    if (*(int *)(param_1 + 0x28d0) == 0) {
      *(undefined8 *)(param_1 + 0x2890) = local_158;
      *(undefined8 *)(param_1 + 0x2898) = uStack_150;
      *(undefined8 *)(param_1 + 0x28a0) = *(undefined8 *)(param_1 + 0x2870);
      *(undefined8 *)(param_1 + 0x28a8) = *(undefined8 *)(param_1 + 0x2878);
      *(undefined8 *)(param_1 + 0x28b0) = *(undefined8 *)(param_1 + 0x2880);
      *(undefined8 *)(param_1 + 0x28b8) = *(undefined8 *)(param_1 + 0x2888);
    }
    FUN_141215940(param_1 + 0x28e0);
    *(bool *)(param_1 + 0x2988) = *(int *)(param_1 + 0x2980) == 0;
    *(undefined8 *)(param_1 + 0x2910) = local_158;
    *(undefined8 *)(param_1 + 0x2918) = uStack_150;
    *(undefined1 *)(param_1 + 0x2989) = 1;
    if (*(int *)(param_1 + 0x2980) == 0) {
      *(undefined8 *)(param_1 + 0x2940) = local_158;
      *(undefined8 *)(param_1 + 0x2948) = uStack_150;
      *(undefined8 *)(param_1 + 0x2950) = *(undefined8 *)(param_1 + 0x2920);
      *(undefined8 *)(param_1 + 0x2958) = *(undefined8 *)(param_1 + 0x2928);
      *(undefined8 *)(param_1 + 0x2960) = *(undefined8 *)(param_1 + 0x2930);
      *(undefined8 *)(param_1 + 0x2968) = *(undefined8 *)(param_1 + 0x2938);
    }
    FUN_141215940(param_1 + 0x2a40);
    fVar7 = *(float *)(param_1 + 0x2a80);
    fVar18 = *(float *)(param_1 + 0x2a84);
    fVar16 = *(float *)(param_1 + 0x2a88);
    FUN_141215940(param_1 + 0x2990);
    local_168 = *(float *)(param_1 + 0x29d0) - fVar7;
    local_164 = *(float *)(param_1 + 0x29d4) - fVar18;
    local_160 = *(float *)(param_1 + 0x29d8) - fVar16;
    uVar3 = FRotationMatrix::MakeFromZX(local_f8,&local_168,local_178);
    FMatrix::ToQuat(uVar3,&local_148);
    FUN_141215940(param_1 + 0x2990);
    *(bool *)(param_1 + 0x2a38) = *(int *)(param_1 + 0x2a30) == 0;
    *(undefined8 *)(param_1 + 0x29c0) = local_148;
    *(undefined8 *)(param_1 + 0x29c8) = uStack_140;
    *(undefined1 *)(param_1 + 0x2a39) = 1;
    if (*(int *)(param_1 + 0x2a30) == 0) {
      *(undefined8 *)(param_1 + 0x29f0) = local_148;
      *(undefined8 *)(param_1 + 0x29f8) = uStack_140;
      *(undefined8 *)(param_1 + 0x2a00) = *(undefined8 *)(param_1 + 0x29d0);
      *(undefined8 *)(param_1 + 0x2a08) = *(undefined8 *)(param_1 + 0x29d8);
      *(undefined8 *)(param_1 + 0x2a10) = *(undefined8 *)(param_1 + 0x29e0);
      *(undefined8 *)(param_1 + 0x2a18) = *(undefined8 *)(param_1 + 0x29e8);
    }
    FUN_141215940(param_1 + 0x2a40);
    *(undefined8 *)(param_1 + 0x2a70) = local_148;
    *(undefined8 *)(param_1 + 0x2a78) = uStack_140;
    *(bool *)(param_1 + 0x2ae8) = *(int *)(param_1 + 0x2ae0) == 0;
    *(undefined1 *)(param_1 + 0x2ae9) = 1;
    if (*(int *)(param_1 + 0x2ae0) == 0) {
      *(undefined8 *)(param_1 + 0x2aa0) = local_148;
      *(undefined8 *)(param_1 + 0x2aa8) = uStack_140;
      *(undefined8 *)(param_1 + 0x2ab0) = *(undefined8 *)(param_1 + 0x2a80);
      *(undefined8 *)(param_1 + 0x2ab8) = *(undefined8 *)(param_1 + 0x2a88);
      *(undefined8 *)(param_1 + 0x2ac0) = *(undefined8 *)(param_1 + 0x2a90);
      *(undefined8 *)(param_1 + 0x2ac8) = *(undefined8 *)(param_1 + 0x2a98);
    }
  }
  return;
}



// FUNCTION 14124d180 FUN_14124d180 body=2150 status=ok
// SIG undefined FUN_14124d180(void)

void FUN_14124d180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [128];
  
  FUN_141224200(param_1 + 0x230,local_108,0);
  lVar1 = param_1 + 0xbd0;
  FUN_141215940(lVar1);
  fVar32 = *(float *)(param_1 + 0xc10) + *(float *)(param_1 + 0x194);
  fVar31 = *(float *)(param_1 + 0xc14) + *(float *)(param_1 + 0x198);
  fVar30 = *(float *)(param_1 + 0xc18) + *(float *)(param_1 + 0x19c);
  *(undefined1 *)(param_1 + 0xc79) = 1;
  *(bool *)(param_1 + 0xc78) = *(int *)(param_1 + 0xc70) == 0;
  auVar3._4_4_ = fVar31;
  auVar3._0_4_ = fVar32;
  auVar3._8_4_ = fVar30;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc10) = auVar3;
  if (*(int *)(param_1 + 0xc70) == 0) {
    *(undefined8 *)(param_1 + 0xc30) = *(undefined8 *)(param_1 + 0xc00);
    *(undefined8 *)(param_1 + 0xc38) = *(undefined8 *)(param_1 + 0xc08);
    auVar4._4_4_ = fVar31;
    auVar4._0_4_ = fVar32;
    auVar4._8_4_ = fVar30;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xc40) = auVar4;
    *(undefined4 *)(param_1 + 0xc50) = *(undefined4 *)(param_1 + 0xc20);
    *(undefined4 *)(param_1 + 0xc54) = *(undefined4 *)(param_1 + 0xc24);
    *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_1 + 0xc28);
    *(undefined4 *)(param_1 + 0xc5c) = *(undefined4 *)(param_1 + 0xc2c);
  }
  lVar2 = param_1 + 0x9c0;
  FUN_141215940(lVar2);
  fVar32 = *(float *)(param_1 + 0xa00) + *(float *)(param_1 + 0x1c4);
  fVar31 = *(float *)(param_1 + 0xa04) + *(float *)(param_1 + 0x1c8);
  fVar30 = *(float *)(param_1 + 0xa08) + *(float *)(param_1 + 0x1cc);
  *(undefined1 *)(param_1 + 0xa69) = 1;
  *(bool *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa60) == 0;
  auVar5._4_4_ = fVar31;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar30;
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xa00) = auVar5;
  if (*(int *)(param_1 + 0xa60) == 0) {
    *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)(param_1 + 0x9f0);
    *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(param_1 + 0x9f8);
    auVar6._4_4_ = fVar31;
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = fVar30;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xa30) = auVar6;
    *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_1 + 0xa10);
    *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_1 + 0xa14);
    *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0xa1c);
  }
  FUN_141215940(lVar1);
  fVar30 = *(float *)(param_1 + 0xc10);
  fVar31 = *(float *)(param_1 + 0xc14);
  fVar32 = *(float *)(param_1 + 0xc18);
  FUN_141215940(param_1 + 0xd30);
  local_f8 = (*(float *)(param_1 + 0xd70) + *(float *)(param_1 + 0x1b4)) - fVar30;
  local_f4 = (*(float *)(param_1 + 0xd74) + *(float *)(param_1 + 0x1b8)) - fVar31;
  local_f0 = (*(float *)(param_1 + 0xd78) + *(float *)(param_1 + 0x1bc)) - fVar32;
  FUN_141215940(lVar2);
  fVar30 = *(float *)(param_1 + 0xa00);
  fVar31 = *(float *)(param_1 + 0xa04);
  fVar32 = *(float *)(param_1 + 0xa08);
  FUN_141215940(param_1 + 0xb20);
  local_e8 = (*(float *)(param_1 + 0xb60) + *(float *)(param_1 + 0x1e4)) - fVar30;
  local_e4 = (*(float *)(param_1 + 0xb64) + *(float *)(param_1 + 0x1e8)) - fVar31;
  local_e0 = (*(float *)(param_1 + 0xb68) + *(float *)(param_1 + 0x1ec)) - fVar32;
  uVar27 = FRotationMatrix::MakeFromXY(local_88,&local_f8,local_108);
  FMatrix::ToQuat(uVar27,&local_b8);
  uVar27 = FRotationMatrix::MakeFromXY(local_88,&local_e8,local_108);
  FMatrix::ToQuat(uVar27,&local_a8);
  FUN_141215940(lVar1);
  *(undefined4 *)(param_1 + 0xc00) = local_b8;
  *(undefined4 *)(param_1 + 0xc04) = uStack_b4;
  *(undefined4 *)(param_1 + 0xc08) = uStack_b0;
  *(undefined4 *)(param_1 + 0xc0c) = uStack_ac;
  *(bool *)(param_1 + 0xc78) = *(int *)(param_1 + 0xc70) == 0;
  *(undefined1 *)(param_1 + 0xc79) = 1;
  if (*(int *)(param_1 + 0xc70) == 0) {
    *(undefined4 *)(param_1 + 0xc30) = local_b8;
    *(undefined4 *)(param_1 + 0xc34) = uStack_b4;
    *(undefined4 *)(param_1 + 0xc38) = uStack_b0;
    *(undefined4 *)(param_1 + 0xc3c) = uStack_ac;
    *(undefined4 *)(param_1 + 0xc40) = *(undefined4 *)(param_1 + 0xc10);
    *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)(param_1 + 0xc14);
    *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0xc18);
    *(undefined4 *)(param_1 + 0xc4c) = *(undefined4 *)(param_1 + 0xc1c);
    *(undefined8 *)(param_1 + 0xc50) = *(undefined8 *)(param_1 + 0xc20);
    *(undefined8 *)(param_1 + 0xc58) = *(undefined8 *)(param_1 + 0xc28);
  }
  FUN_141215940(lVar2);
  *(undefined4 *)(param_1 + 0x9f0) = local_a8;
  *(undefined4 *)(param_1 + 0x9f4) = uStack_a4;
  *(undefined4 *)(param_1 + 0x9f8) = uStack_a0;
  *(undefined4 *)(param_1 + 0x9fc) = uStack_9c;
  *(bool *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa60) == 0;
  *(undefined1 *)(param_1 + 0xa69) = 1;
  if (*(int *)(param_1 + 0xa60) == 0) {
    *(undefined4 *)(param_1 + 0xa20) = local_a8;
    *(undefined4 *)(param_1 + 0xa24) = uStack_a4;
    *(undefined4 *)(param_1 + 0xa28) = uStack_a0;
    *(undefined4 *)(param_1 + 0xa2c) = uStack_9c;
    *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0xa00);
    *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_1 + 0xa04);
    *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_1 + 0xa08);
    *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_1 + 0xa0c);
    *(undefined8 *)(param_1 + 0xa40) = *(undefined8 *)(param_1 + 0xa10);
    *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xa18);
  }
  FUN_141215940(param_1 + 0x10a0);
  fVar32 = *(float *)(param_1 + 0x10e0) + *(float *)(param_1 + 0x194);
  fVar31 = *(float *)(param_1 + 0x10e4) + *(float *)(param_1 + 0x198);
  fVar30 = *(float *)(param_1 + 0x10e8) + *(float *)(param_1 + 0x19c);
  *(undefined1 *)(param_1 + 0x1149) = 1;
  *(bool *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1140) == 0;
  auVar7._4_4_ = fVar31;
  auVar7._0_4_ = fVar32;
  auVar7._8_4_ = fVar30;
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x10e0) = auVar7;
  if (*(int *)(param_1 + 0x1140) == 0) {
    *(undefined8 *)(param_1 + 0x1100) = *(undefined8 *)(param_1 + 0x10d0);
    *(undefined8 *)(param_1 + 0x1108) = *(undefined8 *)(param_1 + 0x10d8);
    auVar8._4_4_ = fVar31;
    auVar8._0_4_ = fVar32;
    auVar8._8_4_ = fVar30;
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x1110) = auVar8;
    *(undefined4 *)(param_1 + 0x1120) = *(undefined4 *)(param_1 + 0x10f0);
    *(undefined4 *)(param_1 + 0x1124) = *(undefined4 *)(param_1 + 0x10f4);
    *(undefined4 *)(param_1 + 0x1128) = *(undefined4 *)(param_1 + 0x10f8);
    *(undefined4 *)(param_1 + 0x112c) = *(undefined4 *)(param_1 + 0x10fc);
  }
  FUN_141215940(param_1 + 0x1150);
  fVar32 = *(float *)(param_1 + 0x1190) + *(float *)(param_1 + 0x1c4);
  fVar31 = *(float *)(param_1 + 0x1194) + *(float *)(param_1 + 0x1c8);
  fVar30 = *(float *)(param_1 + 0x1198) + *(float *)(param_1 + 0x1cc);
  *(undefined1 *)(param_1 + 0x11f9) = 1;
  *(bool *)(param_1 + 0x11f8) = *(int *)(param_1 + 0x11f0) == 0;
  auVar9._4_4_ = fVar31;
  auVar9._0_4_ = fVar32;
  auVar9._8_4_ = fVar30;
  auVar9._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1190) = auVar9;
  if (*(int *)(param_1 + 0x11f0) == 0) {
    *(undefined8 *)(param_1 + 0x11b0) = *(undefined8 *)(param_1 + 0x1180);
    *(undefined8 *)(param_1 + 0x11b8) = *(undefined8 *)(param_1 + 0x1188);
    auVar10._4_4_ = fVar31;
    auVar10._0_4_ = fVar32;
    auVar10._8_4_ = fVar30;
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar10;
    *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11a0);
    *(undefined4 *)(param_1 + 0x11d4) = *(undefined4 *)(param_1 + 0x11a4);
    *(undefined4 *)(param_1 + 0x11d8) = *(undefined4 *)(param_1 + 0x11a8);
    *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)(param_1 + 0x11ac);
  }
  FUN_141215940(param_1 + 0x10a0);
  *(undefined4 *)(param_1 + 0x10d0) = local_b8;
  *(undefined4 *)(param_1 + 0x10d4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x10d8) = uStack_b0;
  *(undefined4 *)(param_1 + 0x10dc) = uStack_ac;
  *(bool *)(param_1 + 0x1148) = *(int *)(param_1 + 0x1140) == 0;
  *(undefined1 *)(param_1 + 0x1149) = 1;
  if (*(int *)(param_1 + 0x1140) == 0) {
    *(undefined4 *)(param_1 + 0x1100) = local_b8;
    *(undefined4 *)(param_1 + 0x1104) = uStack_b4;
    *(undefined4 *)(param_1 + 0x1108) = uStack_b0;
    *(undefined4 *)(param_1 + 0x110c) = uStack_ac;
    *(undefined4 *)(param_1 + 0x1110) = *(undefined4 *)(param_1 + 0x10e0);
    *(undefined4 *)(param_1 + 0x1114) = *(undefined4 *)(param_1 + 0x10e4);
    *(undefined4 *)(param_1 + 0x1118) = *(undefined4 *)(param_1 + 0x10e8);
    *(undefined4 *)(param_1 + 0x111c) = *(undefined4 *)(param_1 + 0x10ec);
    *(undefined8 *)(param_1 + 0x1120) = *(undefined8 *)(param_1 + 0x10f0);
    *(undefined8 *)(param_1 + 0x1128) = *(undefined8 *)(param_1 + 0x10f8);
  }
  FUN_141215940(param_1 + 0x1150);
  *(undefined4 *)(param_1 + 0x1180) = local_a8;
  *(undefined4 *)(param_1 + 0x1184) = uStack_a4;
  *(undefined4 *)(param_1 + 0x1188) = uStack_a0;
  *(undefined4 *)(param_1 + 0x118c) = uStack_9c;
  *(bool *)(param_1 + 0x11f8) = *(int *)(param_1 + 0x11f0) == 0;
  *(undefined1 *)(param_1 + 0x11f9) = 1;
  if (*(int *)(param_1 + 0x11f0) == 0) {
    *(undefined4 *)(param_1 + 0x11b0) = local_a8;
    *(undefined4 *)(param_1 + 0x11b4) = uStack_a4;
    *(undefined4 *)(param_1 + 0x11b8) = uStack_a0;
    *(undefined4 *)(param_1 + 0x11bc) = uStack_9c;
    *(undefined4 *)(param_1 + 0x11c0) = *(undefined4 *)(param_1 + 0x1190);
    *(undefined4 *)(param_1 + 0x11c4) = *(undefined4 *)(param_1 + 0x1194);
    *(undefined4 *)(param_1 + 0x11c8) = *(undefined4 *)(param_1 + 0x1198);
    *(undefined4 *)(param_1 + 0x11cc) = *(undefined4 *)(param_1 + 0x119c);
    *(undefined8 *)(param_1 + 0x11d0) = *(undefined8 *)(param_1 + 0x11a0);
    *(undefined8 *)(param_1 + 0x11d8) = *(undefined8 *)(param_1 + 0x11a8);
  }
  FUN_141215940(param_1 + 0xc80);
  fVar32 = *(float *)(param_1 + 0xcc0) + *(float *)(param_1 + 0x1a4);
  fVar31 = *(float *)(param_1 + 0xcc4) + *(float *)(param_1 + 0x1a8);
  fVar30 = *(float *)(param_1 + 0xcc8) + *(float *)(param_1 + 0x1ac);
  *(undefined1 *)(param_1 + 0xd29) = 1;
  *(bool *)(param_1 + 0xd28) = *(int *)(param_1 + 0xd20) == 0;
  auVar11._4_4_ = fVar31;
  auVar11._0_4_ = fVar32;
  auVar11._8_4_ = fVar30;
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xcc0) = auVar11;
  if (*(int *)(param_1 + 0xd20) == 0) {
    *(undefined8 *)(param_1 + 0xce0) = *(undefined8 *)(param_1 + 0xcb0);
    *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(param_1 + 0xcb8);
    auVar12._4_4_ = fVar31;
    auVar12._0_4_ = fVar32;
    auVar12._8_4_ = fVar30;
    auVar12._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xcf0) = auVar12;
    *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_1 + 0xcd0);
    *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_1 + 0xcd4);
    *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_1 + 0xcd8);
    *(undefined4 *)(param_1 + 0xd0c) = *(undefined4 *)(param_1 + 0xcdc);
  }
  FUN_141215940(param_1 + 0xa70);
  fVar32 = *(float *)(param_1 + 0xab0) + *(float *)(param_1 + 0x1d4);
  fVar31 = *(float *)(param_1 + 0xab4) + *(float *)(param_1 + 0x1d8);
  fVar30 = *(float *)(param_1 + 0xab8) + *(float *)(param_1 + 0x1dc);
  *(undefined1 *)(param_1 + 0xb19) = 1;
  *(bool *)(param_1 + 0xb18) = *(int *)(param_1 + 0xb10) == 0;
  auVar13._4_4_ = fVar31;
  auVar13._0_4_ = fVar32;
  auVar13._8_4_ = fVar30;
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xab0) = auVar13;
  if (*(int *)(param_1 + 0xb10) == 0) {
    *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0xaa0);
    *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xaa8);
    auVar14._4_4_ = fVar31;
    auVar14._0_4_ = fVar32;
    auVar14._8_4_ = fVar30;
    auVar14._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xae0) = auVar14;
    *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_1 + 0xac0);
    *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_1 + 0xac4);
    *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_1 + 0xac8);
    *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_1 + 0xacc);
  }
  lVar1 = param_1 + 0xe90;
  FUN_141215940(lVar1);
  fVar32 = *(float *)(param_1 + 0xed0) + *(float *)(param_1 + 500);
  fVar31 = *(float *)(param_1 + 0xed4) + *(float *)(param_1 + 0x1f8);
  fVar30 = *(float *)(param_1 + 0xed8) + *(float *)(param_1 + 0x1fc);
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  auVar15._4_4_ = fVar31;
  auVar15._0_4_ = fVar32;
  auVar15._8_4_ = fVar30;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xed0) = auVar15;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined8 *)(param_1 + 0xef0) = *(undefined8 *)(param_1 + 0xec0);
    *(undefined8 *)(param_1 + 0xef8) = *(undefined8 *)(param_1 + 0xec8);
    auVar16._4_4_ = fVar31;
    auVar16._0_4_ = fVar32;
    auVar16._8_4_ = fVar30;
    auVar16._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xf00) = auVar16;
    *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0xee0);
    *(undefined4 *)(param_1 + 0xf14) = *(undefined4 *)(param_1 + 0xee4);
    *(undefined4 *)(param_1 + 0xf18) = *(undefined4 *)(param_1 + 0xee8);
    *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(param_1 + 0xeec);
  }
  FUN_141215940(param_1 + 0xde0);
  fVar32 = *(float *)(param_1 + 0xe20) + *(float *)(param_1 + 0x214);
  fVar31 = *(float *)(param_1 + 0xe24) + *(float *)(param_1 + 0x218);
  fVar30 = *(float *)(param_1 + 0xe28) + *(float *)(param_1 + 0x21c);
  *(undefined1 *)(param_1 + 0xe89) = 1;
  *(bool *)(param_1 + 0xe88) = *(int *)(param_1 + 0xe80) == 0;
  auVar17._4_4_ = fVar31;
  auVar17._0_4_ = fVar32;
  auVar17._8_4_ = fVar30;
  auVar17._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe20) = auVar17;
  if (*(int *)(param_1 + 0xe80) == 0) {
    *(undefined8 *)(param_1 + 0xe40) = *(undefined8 *)(param_1 + 0xe10);
    *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_1 + 0xe18);
    auVar18._4_4_ = fVar31;
    auVar18._0_4_ = fVar32;
    auVar18._8_4_ = fVar30;
    auVar18._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe50) = auVar18;
    *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0xe30);
    *(undefined4 *)(param_1 + 0xe64) = *(undefined4 *)(param_1 + 0xe34);
    *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe38);
    *(undefined4 *)(param_1 + 0xe6c) = *(undefined4 *)(param_1 + 0xe3c);
  }
  FUN_141215940(param_1 + 0xf40);
  fVar19 = *(float *)(param_1 + 0xf80);
  fVar20 = *(float *)(param_1 + 0xf84);
  fVar21 = *(float *)(param_1 + 0xf88);
  fVar30 = *(float *)(param_1 + 0x204);
  fVar31 = *(float *)(param_1 + 0x208);
  fVar32 = *(float *)(param_1 + 0x20c);
  FUN_141215940(lVar1);
  local_d8 = *(float *)(param_1 + 0xed0) - (fVar19 + fVar30);
  local_d4 = *(float *)(param_1 + 0xed4) - (fVar20 + fVar31);
  local_d0 = *(float *)(param_1 + 0xed8) - (fVar21 + fVar32);
  FUN_141215940(param_1 + 0xff0);
  fVar19 = *(float *)(param_1 + 0x1030);
  fVar20 = *(float *)(param_1 + 0x1034);
  fVar21 = *(float *)(param_1 + 0x1038);
  fVar30 = *(float *)(param_1 + 0x224);
  fVar31 = *(float *)(param_1 + 0x228);
  fVar32 = *(float *)(param_1 + 0x22c);
  FUN_141215940(param_1 + 0xde0);
  local_c4 = *(float *)(param_1 + 0xe24) - (fVar20 + fVar31);
  local_c8 = *(float *)(param_1 + 0xe20) - (fVar19 + fVar30);
  local_c0 = *(float *)(param_1 + 0xe28) - (fVar21 + fVar32);
  uVar27 = FRotationMatrix::MakeFromXY(local_88,&local_d8,local_108);
  puVar28 = (undefined4 *)FMatrix::ToQuat(uVar27,local_98);
  FUN_141215940(lVar1);
  uVar22 = *puVar28;
  uVar23 = puVar28[1];
  uVar24 = puVar28[2];
  uVar25 = puVar28[3];
  *(undefined4 *)(param_1 + 0xec0) = uVar22;
  *(undefined4 *)(param_1 + 0xec4) = uVar23;
  *(undefined4 *)(param_1 + 0xec8) = uVar24;
  *(undefined4 *)(param_1 + 0xecc) = uVar25;
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined4 *)(param_1 + 0xef0) = uVar22;
    *(undefined4 *)(param_1 + 0xef4) = uVar23;
    *(undefined4 *)(param_1 + 0xef8) = uVar24;
    *(undefined4 *)(param_1 + 0xefc) = uVar25;
    *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(param_1 + 0xed0);
    *(undefined4 *)(param_1 + 0xf04) = *(undefined4 *)(param_1 + 0xed4);
    *(undefined4 *)(param_1 + 0xf08) = *(undefined4 *)(param_1 + 0xed8);
    *(undefined4 *)(param_1 + 0xf0c) = *(undefined4 *)(param_1 + 0xedc);
    *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xee0);
    *(undefined8 *)(param_1 + 0xf18) = *(undefined8 *)(param_1 + 0xee8);
  }
  uVar27 = FRotationMatrix::MakeFromXY(local_88,&local_c8,local_108);
  puVar29 = (undefined8 *)FMatrix::ToQuat(uVar27,local_98);
  FUN_141215940(lVar1);
  uVar27 = *puVar29;
  uVar26 = puVar29[1];
  *(undefined8 *)(param_1 + 0xec0) = uVar27;
  *(undefined8 *)(param_1 + 0xec8) = uVar26;
  *(undefined1 *)(param_1 + 0xf39) = 1;
  *(bool *)(param_1 + 0xf38) = *(int *)(param_1 + 0xf30) == 0;
  if (*(int *)(param_1 + 0xf30) == 0) {
    *(undefined8 *)(param_1 + 0xef0) = uVar27;
    *(undefined8 *)(param_1 + 0xef8) = uVar26;
    *(undefined8 *)(param_1 + 0xf00) = *(undefined8 *)(param_1 + 0xed0);
    *(undefined8 *)(param_1 + 0xf08) = *(undefined8 *)(param_1 + 0xed8);
    *(undefined8 *)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xee0);
    *(undefined8 *)(param_1 + 0xf18) = *(undefined8 *)(param_1 + 0xee8);
  }
  return;
}



// FUNCTION 14124d9f0 FUN_14124d9f0 body=3598 status=ok
// SIG undefined FUN_14124d9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124d9f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res18;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float *local_128;
  float *local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (*(int *)(param_2 + 8) == 4) {
    lVar1 = param_1 + 0x3d0;
    FUN_141215940(lVar1);
    fVar12 = *(float *)(param_1 + 0x404);
    fVar13 = -*(float *)(param_1 + 0x400);
    fVar13 = fVar13 + fVar13;
    fVar9 = fVar12 + fVar12;
    local_f8 = *(float *)(param_1 + 0x40c) * fVar9 - fVar13 * *(float *)(param_1 + 0x408);
    local_f4 = fVar13 * *(float *)(param_1 + 0x40c) + fVar9 * *(float *)(param_1 + 0x408);
    local_f0 = (fVar13 * *(float *)(param_1 + 0x400) - fVar9 * fVar12) + 1.0;
    FUN_141215940(lVar1);
    fVar12 = *(float *)(param_1 + 0x408);
    fVar13 = -*(float *)(param_1 + 0x404);
    fVar9 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    local_108 = (fVar13 * *(float *)(param_1 + 0x404) - fVar9 * fVar12) + 1.0;
    local_100 = fVar13 * *(float *)(param_1 + 0x40c) + fVar9 * *(float *)(param_1 + 0x400);
    local_104 = fVar9 * *(float *)(param_1 + 0x40c) - fVar13 * *(float *)(param_1 + 0x400);
    if ((*(char *)(*(longlong *)(param_1 + 0x1680) + 0x6e3) == '\0') ||
       (fVar12 = *(float *)(param_1 + 0x1734), fVar12 <= 0.0)) {
      local_128 = &local_108;
      local_120 = &local_f8;
      local_138 = param_1;
      uStack_130 = param_2;
      FUN_14120ade0(&local_138,param_1 + 0x168c,*(undefined4 *)(param_1 + 0x17ac),
                    *(undefined4 *)(param_1 + 0x1784));
      FUN_14120ade0(&local_138,param_1 + 0x16b4,*(undefined4 *)(param_1 + 0x17ac),
                    *(undefined4 *)(param_1 + 0x1788));
      FUN_14120ade0(&local_138,param_1 + 0x16dc,*(undefined4 *)(param_1 + 0x17b0),
                    *(undefined4 *)(param_1 + 0x178c));
      FUN_14120ade0(&local_138,param_1 + 0x1704,*(undefined4 *)(param_1 + 0x17b0),
                    *(undefined4 *)(param_1 + 0x1790));
    }
    else {
      fVar9 = *(float *)(param_1 + 0x2e4);
      fVar13 = *(float *)(param_1 + 0x2e8);
      fVar10 = *(float *)(param_1 + 0x2ec);
      FUN_141215940(param_1 + 0xb60);
      *(undefined1 *)(param_1 + 0xc09) = 1;
      *(bool *)(param_1 + 0xc08) = *(int *)(param_1 + 0xc00) == 0;
      fVar14 = fVar9 * fVar12 + *(float *)(param_1 + 0xba0);
      fVar9 = fVar13 * fVar12 + *(float *)(param_1 + 0xba4);
      fVar12 = fVar10 * fVar12 + *(float *)(param_1 + 0xba8);
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar14;
      auVar2._8_4_ = fVar12;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0xba0) = auVar2;
      if (*(int *)(param_1 + 0xc00) == 0) {
        *(undefined8 *)(param_1 + 0xbc0) = *(undefined8 *)(param_1 + 0xb90);
        *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xb98);
        auVar3._4_4_ = fVar9;
        auVar3._0_4_ = fVar14;
        auVar3._8_4_ = fVar12;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0xbd0) = auVar3;
        *(undefined8 *)(param_1 + 0xbe0) = *(undefined8 *)(param_1 + 0xbb0);
        *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(param_1 + 3000);
      }
      fVar12 = *(float *)(param_1 + 0x1734);
      fVar9 = *(float *)(param_1 + 0x2d8);
      fVar13 = *(float *)(param_1 + 0x2dc);
      fVar10 = *(float *)(param_1 + 0x2e0);
      FUN_141215940(param_1 + 0x950);
      *(undefined1 *)(param_1 + 0x9f9) = 1;
      *(bool *)(param_1 + 0x9f8) = *(int *)(param_1 + 0x9f0) == 0;
      fVar14 = fVar9 * fVar12 + *(float *)(param_1 + 0x990);
      fVar9 = fVar13 * fVar12 + *(float *)(param_1 + 0x994);
      fVar12 = fVar10 * fVar12 + *(float *)(param_1 + 0x998);
      auVar4._4_4_ = fVar9;
      auVar4._0_4_ = fVar14;
      auVar4._8_4_ = fVar12;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x990) = auVar4;
      if (*(int *)(param_1 + 0x9f0) == 0) {
        *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(param_1 + 0x980);
        *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_1 + 0x988);
        auVar5._4_4_ = fVar9;
        auVar5._0_4_ = fVar14;
        auVar5._8_4_ = fVar12;
        auVar5._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x9c0) = auVar5;
        *(undefined8 *)(param_1 + 0x9d0) = *(undefined8 *)(param_1 + 0x9a0);
        *(undefined8 *)(param_1 + 0x9d8) = *(undefined8 *)(param_1 + 0x9a8);
      }
      fStack_140 = *(float *)(param_1 + 0x17ac) * 0.008726646;
      if (fStack_140 < 0.0) {
        fVar12 = fStack_140 * 0.15915494 - 0.5;
      }
      else {
        fVar12 = fStack_140 * 0.15915494 + 0.5;
      }
      fVar9 = -1.0;
      fStack_140 = fStack_140 - (float)(int)fVar12 * 6.2831855;
      if (fStack_140 <= 1.5707964) {
        if (-1.5707964 <= fStack_140) {
          fStack_13c = 1.0;
        }
        else {
          fStack_13c = -1.0;
          fStack_140 = -3.1415927 - fStack_140;
        }
      }
      else {
        fStack_13c = -1.0;
        fStack_140 = 3.1415927 - fStack_140;
      }
      fVar12 = fStack_140 * fStack_140;
      fStack_140 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                     0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fStack_140;
      fStack_144 = DAT_1464aa798._4_4_ * fStack_140;
      local_148 = (float)DAT_1464aa798 * fStack_140;
      fStack_140 = DAT_1464aa7a0 * fStack_140;
      fStack_13c = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                     0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fStack_13c;
      FUN_14120ef60(lVar1,2,&local_148,1);
      fStack_140 = *(float *)(param_1 + 0x17ac) * 0.008726646;
      if (fStack_140 < 0.0) {
        fVar12 = fStack_140 * 0.15915494 - 0.5;
      }
      else {
        fVar12 = fStack_140 * 0.15915494 + 0.5;
      }
      fStack_140 = fStack_140 - (float)(int)fVar12 * 6.2831855;
      if (fStack_140 <= 1.5707964) {
        if (-1.5707964 <= fStack_140) {
          fStack_13c = 1.0;
        }
        else {
          fStack_13c = -1.0;
          fStack_140 = -3.1415927 - fStack_140;
        }
      }
      else {
        fStack_13c = -1.0;
        fStack_140 = 3.1415927 - fStack_140;
      }
      fVar12 = fStack_140 * fStack_140;
      fStack_140 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                     0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fStack_140;
      fStack_144 = DAT_1464aa798._4_4_ * fStack_140;
      local_148 = (float)DAT_1464aa798 * fStack_140;
      fStack_140 = DAT_1464aa7a0 * fStack_140;
      fStack_13c = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                     0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fStack_13c;
      FUN_14120ef60(lVar1,5,&local_148,1);
      fVar13 = *(float *)(param_1 + 0x1750) * *(float *)(param_1 + 0x334);
      fVar10 = *(float *)(param_1 + 0x2d4) * *(float *)(param_1 + 0x1734);
      local_res18 = fVar13 * 0.75;
      fVar12 = fVar13;
      if (0.0 < *(float *)(param_1 + 0x1750)) {
        fVar12 = local_res18;
        local_res18 = fVar13;
      }
      fVar13 = *(float *)(param_1 + 0x1748) * *(float *)(param_1 + 0x338) * -0.008726646;
      if (fVar13 < 0.0) {
        fVar14 = fVar13 * 0.15915494 - 0.5;
      }
      else {
        fVar14 = fVar13 * 0.15915494 + 0.5;
      }
      fVar13 = fVar13 - (float)(int)fVar14 * 6.2831855;
      if (fVar13 <= 1.5707964) {
        if (-1.5707964 <= fVar13) {
          local_res10 = 1.0;
        }
        else {
          local_res10 = -1.0;
          fVar13 = -3.1415927 - fVar13;
        }
      }
      else {
        local_res10 = -1.0;
        fVar13 = 3.1415927 - fVar13;
      }
      fVar8 = fVar13 * fVar13;
      fVar11 = (fVar10 - local_res18) * 0.008726646;
      fVar13 = (((((2.7525562e-06 - fVar8 * 2.3889859e-08) * fVar8 - 0.00019840874) * fVar8 +
                 0.008333331) * fVar8 - 0.16666667) * fVar8 + 1.0) * fVar13;
      local_c8 = (float)DAT_1464aa7b8 * fVar13;
      fVar14 = DAT_1464aa7b8._4_4_ * fVar13;
      fVar13 = DAT_1464aa7c0 * fVar13;
      local_d8 = ZEXT416((uint)(float)DAT_1464aa7a8);
      fVar8 = (((((2.4760495e-05 - fVar8 * 2.6051615e-07) * fVar8 - 0.0013888378) * fVar8 +
                0.041666638) * fVar8 - 0.5) * fVar8 + 1.0) * local_res10;
      if (fVar11 < 0.0) {
        fVar7 = fVar11 * 0.15915494 - 0.5;
      }
      else {
        fVar7 = fVar11 * 0.15915494 + 0.5;
      }
      fVar11 = fVar11 - (float)(int)fVar7 * 6.2831855;
      if (fVar11 <= 1.5707964) {
        if (-1.5707964 <= fVar11) {
          local_res10 = 1.0;
        }
        else {
          local_res10 = -1.0;
          fVar11 = -3.1415927 - fVar11;
        }
      }
      else {
        local_res10 = -1.0;
        fVar11 = 3.1415927 - fVar11;
      }
      fStack_140 = (fVar12 + fVar10) * -0.008726646;
      fVar10 = fVar11 * fVar11;
      fVar11 = (((((2.7525562e-06 - fVar10 * 2.3889859e-08) * fVar10 - 0.00019840874) * fVar10 +
                 0.008333331) * fVar10 - 0.16666667) * fVar10 + 1.0) * fVar11;
      fVar7 = (float)DAT_1464aa7a8 * fVar11;
      fVar12 = DAT_1464aa7a8._4_4_ * fVar11;
      fVar11 = DAT_1464aa7b0 * fVar11;
      local_res10 = (((((2.4760495e-05 - fVar10 * 2.6051615e-07) * fVar10 - 0.0013888378) * fVar10 +
                      0.041666638) * fVar10 - 0.5) * fVar10 + 1.0) * local_res10;
      local_138 = CONCAT44(fVar14,fVar14);
      uStack_130 = CONCAT44(fVar14,fVar14);
      local_e8 = local_res10 * local_c8 * _DAT_146876b90 + fVar7 * fVar8 +
                 fVar11 * fVar14 * _DAT_146876b80 + fVar12 * fVar13 * _DAT_146876b70;
      fStack_e4 = fVar11 * local_c8 * fRam0000000146876b94 + fVar12 * fVar8 +
                  local_res10 * fVar14 * fRam0000000146876b84 +
                  fVar7 * fVar13 * fRam0000000146876b74;
      fStack_e0 = fVar12 * local_c8 * fRam0000000146876b98 + fVar11 * fVar8 +
                  fVar7 * fVar14 * fRam0000000146876b88 +
                  local_res10 * fVar13 * fRam0000000146876b78;
      fStack_dc = fVar7 * local_c8 * fRam0000000146876b9c + local_res10 * fVar8 +
                  fVar12 * fVar14 * fRam0000000146876b8c + fVar11 * fVar13 * fRam0000000146876b7c;
      if (fStack_140 < 0.0) {
        fVar12 = fStack_140 * 0.15915494 - 0.5;
      }
      else {
        fVar12 = fStack_140 * 0.15915494 + 0.5;
      }
      fStack_140 = fStack_140 - (float)(int)fVar12 * 6.2831855;
      if (fStack_140 <= 1.5707964) {
        if (-1.5707964 <= fStack_140) {
          fVar9 = 1.0;
        }
        else {
          fStack_140 = -3.1415927 - fStack_140;
        }
      }
      else {
        fStack_140 = 3.1415927 - fStack_140;
      }
      fVar12 = fStack_140 * fStack_140;
      fStack_140 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                     0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fStack_140;
      local_148 = (float)DAT_1464aa7a8 * fStack_140;
      fStack_144 = fStack_140 * DAT_1464aa7a8._4_4_;
      fStack_140 = fStack_140 * DAT_1464aa7b0;
      fStack_13c = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                     0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fVar9;
      local_118 = fStack_13c * local_c8 * _DAT_146876b90 + local_148 * fVar8 +
                  fStack_140 * fVar14 * _DAT_146876b80 + fStack_144 * fVar13 * _DAT_146876b70;
      fStack_114 = fStack_140 * local_c8 * fRam0000000146876b94 + fStack_144 * fVar8 +
                   fStack_13c * fVar14 * fRam0000000146876b84 +
                   local_148 * fVar13 * fRam0000000146876b74;
      fStack_110 = fStack_144 * local_c8 * fRam0000000146876b98 + fStack_140 * fVar8 +
                   local_148 * fVar14 * fRam0000000146876b88 +
                   fStack_13c * fVar13 * fRam0000000146876b78;
      fStack_10c = local_148 * local_c8 * fRam0000000146876b9c + fStack_13c * fVar8 +
                   fStack_144 * fVar14 * fRam0000000146876b8c +
                   fStack_140 * fVar13 * fRam0000000146876b7c;
      fStack_c4 = local_c8;
      fStack_c0 = local_c8;
      fStack_bc = local_c8;
      FUN_14120e180(lVar1,2,&local_e8,1);
      FUN_14120e180(lVar1,5,&local_118,1);
      FUN_14120e180(lVar1,8,&local_e8,1);
      FUN_14120e180(lVar1,0xb,&local_118,1);
      fVar14 = *(float *)(param_1 + 0x1688) * 0.10471976 * *(float *)(param_1 + 0x300);
      fVar12 = *(float *)(param_1 + 0x2fc);
      fVar9 = *(float *)(param_1 + 0x2f8);
      fVar13 = *(float *)(param_1 + 0x1734);
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar14 + 3.0);
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      local_148 = (fVar10 * fVar12 + 1.5 + fVar9) * fVar13;
      uVar6 = FRotator::Quaternion(&local_148,&local_138);
      FUN_14120e180(lVar1,1,uVar6);
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar14 + 0.5);
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      local_148 = (fVar10 * fVar12 + 2.0 + fVar9) * fVar13;
      uVar6 = FRotator::Quaternion(&local_148,&local_138);
      FUN_14120e180(lVar1,4,uVar6,1);
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar14 + 2.0);
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      local_148 = (fVar10 * fVar12 + 0.5 + fVar9) * fVar13;
      uVar6 = FRotator::Quaternion(&local_148,&local_138);
      FUN_14120e180(lVar1,7,uVar6,1);
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar14 + 1.5);
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      local_148 = (fVar10 * fVar12 + 3.0 + fVar9) * fVar13;
      uVar6 = FRotator::Quaternion(&local_148,&local_138);
      FUN_14120e180(lVar1,10,uVar6,1);
      local_148 = (float)param_1;
      fStack_144 = (float)((ulonglong)param_1 >> 0x20);
      fStack_140 = (float)param_2;
      fStack_13c = (float)((ulonglong)param_2 >> 0x20);
      FUN_141209b50(&local_148,param_1 + 0x168c,*(undefined4 *)(param_1 + 0x1784));
      FUN_141209b50(&local_148,param_1 + 0x16b4,*(undefined4 *)(param_1 + 0x1788));
      FUN_141209b50(&local_148,param_1 + 0x16dc,*(undefined4 *)(param_1 + 0x178c));
      FUN_141209b50(&local_148,param_1 + 0x1704,*(undefined4 *)(param_1 + 0x1790));
    }
  }
  return;
}



// FUNCTION 14124e800 FUN_14124e800 body=432 status=ok
// SIG undefined FUN_14124e800(void)

void FUN_14124e800(longlong param_1,undefined8 param_2,longlong *param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xac8,&local_18);
  FUN_14148f640(param_1,param_2,param_3);
  if (param_4 != '\0') {
    if (param_5 != '\0') {
      local_18 = param_2;
      local_10 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xb08,&local_18);
      FUN_14148f7d0(param_1,param_2,param_3);
    }
    local_18 = param_2;
    local_10 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xaf8,&local_18);
    FUN_14148f730(param_1,param_2,param_3);
    lVar5 = (**(code **)(*param_3 + 0x670))(param_3);
    if (lVar5 != 0) {
      lVar6 = FUN_14145f370();
      iVar2 = *(int *)(lVar6 + 0x90);
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140d18a00(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1));
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar9 + *(int *)(param_1 + 0x6e8);
  do {
    if (plVar9 == plVar1) {
      uVar8 = 1;
LAB_14124e935:
      if ((*(longlong *)(param_1 + 0x640) != 0) &&
         (cVar4 = FUN_142d52a00(param_1 + 0x858), cVar4 != '\0')) {
        uVar7 = FUN_142d52a20(param_1 + 0x858);
        lVar5 = FArchive::operator<<(uVar7);
        FUN_14246fd70(lVar5 + 0x94,uVar8);
      }
      cVar4 = FUN_1407c3030(param_1 + 0x1000);
      if (cVar4 != '\0') {
        FUN_142d8e990(param_3,DAT_1468770c8,1);
      }
      return;
    }
    if ((*plVar9 != 0) && (cVar4 = FUN_141273d30(*plVar9,0), cVar4 != '\0')) {
      uVar8 = 0;
      goto LAB_14124e935;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 14124e9b0 FUN_14124e9b0 body=247 status=ok
// SIG undefined FUN_14124e9b0(void)

void FUN_14124e9b0(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xad8,&local_18);
  FUN_14148f690(param_1,param_2,param_3);
  if (param_4 != '\0') {
    local_18 = param_2;
    local_10 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xb18,&local_18);
    FUN_14148f780(param_1,param_2,param_3);
    lVar2 = (**(code **)(*param_3 + 0x670))(param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140d18a00(lVar2,0);
      }
    }
    uVar4 = (**(code **)(*param_3 + 0x670))(param_3);
    FUN_141242150(param_1,uVar4);
  }
  return;
}



// FUNCTION 14124eab0 FUN_14124eab0 body=259 status=ok
// SIG undefined FUN_14124eab0(void)

void FUN_14124eab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xae8,&local_18);
  FUN_14148f6e0(param_1,param_2,param_3);
  plVar5 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar5 + *(int *)(param_1 + 0x6e8);
  do {
    if (plVar5 == plVar1) {
      uVar6 = 1;
LAB_14124eb35:
      if ((*(longlong *)(param_1 + 0x640) != 0) &&
         (cVar2 = FUN_142d52a00(param_1 + 0x858), cVar2 != '\0')) {
        uVar3 = FUN_142d52a20(param_1 + 0x858);
        lVar4 = FArchive::operator<<(uVar3);
        FUN_14246fd70(lVar4 + 0x94,uVar6);
      }
      FUN_1412153d0(param_1,1);
      cVar2 = FUN_1407c3030(param_1 + 0x1000);
      if (cVar2 != '\0') {
        FUN_142d8f260(param_3,DAT_1468770c8);
      }
      return;
    }
    if (*plVar5 != 0) {
      cVar2 = FUN_141273d30(*plVar5,0);
      if (cVar2 != '\0') {
        uVar6 = 0;
        goto LAB_14124eb35;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 14124ebc0 FUN_14124ebc0 body=451 status=ok
// SIG undefined FUN_14124ebc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124ebc0(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(char *)(param_1 + 0x6b8) = param_3;
    if (param_3 == '\0') {
      if (param_2 != '\0') {
        if ((*(longlong *)(param_1 + 0x6f8) == 0) || (*(longlong *)(param_1 + 0x6f0) == 0)) {
          param_2 = '\0';
        }
        else {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x168);
          if (lVar1 == 0) {
            local_18 = _DAT_1468b5d90;
            local_10 = DAT_1468b5d98;
          }
          else {
            local_18 = *(undefined8 *)(lVar1 + 0x220);
            local_10 = *(float *)(lVar1 + 0x228);
          }
          local_20 = local_10;
          uVar2 = local_18;
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x168);
          if (lVar1 == 0) {
            local_18 = _DAT_1468b5d90;
            local_10 = DAT_1468b5d98;
          }
          else {
            local_18 = *(undefined8 *)(lVar1 + 0x220);
            local_10 = *(float *)(lVar1 + 0x228);
          }
          local_28._0_4_ = (float)uVar2;
          local_20 = local_10 - local_20;
          local_28._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          local_28 = CONCAT44((float)((ulonglong)local_18 >> 0x20) - local_28._4_4_,
                              (float)local_18 - (float)local_28);
          local_10 = local_20;
        }
      }
      puVar3 = &local_28;
      if (param_2 == '\0') {
        puVar3 = (undefined8 *)0x0;
      }
      FUN_141227a20(param_1,&local_18,*(undefined4 *)(param_1 + 0x51c),
                    *(undefined4 *)(param_1 + 0x520),puVar3);
    }
    else {
      FUN_141225d50(param_1,&local_18);
    }
    *(undefined8 *)(param_1 + 0x690) = local_18;
    *(float *)(param_1 + 0x698) = local_10;
    *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(param_1 + 0x6bc);
    *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_1 + 0x6c4);
    *(undefined4 *)(param_1 + 0x684) = 0;
    FUN_1413e7800(param_1,*(undefined8 *)(param_1 + 0x6f8));
  }
  return;
}



// FUNCTION 14124ed90 FUN_14124ed90 body=228 status=ok
// SIG undefined FUN_14124ed90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14124ed90(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if (((*(char *)(param_1 + 0x12a8) != '\0') && (param_2 != 0)) && (param_3 != 0)) {
    lVar3 = FUN_142ceeb40(param_3,0);
    if ((lVar3 != 0) && (iVar2 = FUN_140b812b0(*(undefined8 *)(param_2 + 0x488),lVar3), iVar2 == 2))
    {
      uVar1 = *(undefined8 *)(param_2 + 0x488);
      uVar4 = FUN_142d0a300(local_228);
      FUN_142d34f80(param_1,*(undefined8 *)(param_1 + 0x12a0),uVar1,uVar4);
      FUN_1409c53c0(local_228);
      local_238 = param_2;
      local_230 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1290,&local_238);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14124ee80 FUN_14124ee80 body=29 status=ok
// SIG undefined FUN_14124ee80(void)

void FUN_14124ee80(undefined8 param_1)

{
  FUN_1412153d0(param_1,1);
  FUN_1430e19d0(param_1);
  return;
}



// FUNCTION 14124ef00 FUN_14124ef00 body=72 status=ok
// SIG undefined FUN_14124ef00(void)

void FUN_14124ef00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_141477fa0();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  if (lVar2 != 0) {
    FUN_140ec6cb0(lVar2,*(undefined1 *)(param_1 + 0x38),DAT_146876ff0);
  }
  return;
}



// FUNCTION 14124ef70 FUN_14124ef70 body=31 status=ok
// SIG undefined FUN_14124ef70(void)

void FUN_14124ef70(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dbb5d0(param_1 + 0x12f0,local_res10);
  return;
}



// FUNCTION 14124efb0 FUN_14124efb0 body=1474 status=ok
// SIG undefined FUN_14124efb0(void)

void FUN_14124efb0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_b8 [176];
  
  lVar1 = *(longlong *)(param_1 + 0x1680);
  fVar12 = 0.0;
  if ((*(char *)(lVar1 + 0x6e3) == '\0') || (*(float *)(param_1 + 0x1734) <= 0.0)) {
    fVar12 = *(float *)(param_1 + 0x17b4);
    fVar10 = *(float *)(param_1 + 0x160);
    if (0.0 <= fVar12) {
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
    }
    else {
      fVar12 = 0.0;
    }
    pfVar2 = (float *)FRotator::Quaternion(lVar1 + 0x714,local_b8);
    fVar8 = *pfVar2;
    fVar11 = -pfVar2[2];
    fVar11 = fVar11 + fVar11;
    lVar1 = *(longlong *)(param_1 + 0x1680);
    fVar9 = fVar8 + fVar8;
    fVar6 = *(float *)(param_1 + 0x14c);
    fVar7 = fVar6 - -fVar6;
    fVar12 = ((fVar11 * pfVar2[3] + fVar9 * pfVar2[1]) * *(float *)(lVar1 + 0x72c) +
              ((fVar11 * pfVar2[2] - fVar9 * fVar8) + 1.0) * *(float *)(lVar1 + 0x730) +
             (fVar9 * pfVar2[3] - fVar11 * pfVar2[1]) * *(float *)(lVar1 + 0x734)) *
             ((fVar10 - 1.0) * fVar12 + 1.0);
    if (1e-08 < ABS(fVar7)) {
      fVar7 = (fVar12 - -fVar6) / fVar7;
      if (0.0 <= fVar7) goto LAB_14124f3b0;
      fVar7 = 0.0;
    }
    else {
      if (fVar12 < fVar6) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 1.0;
      }
LAB_14124f3b0:
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
    }
    uVar4 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x181c),
                          ((fVar7 + fVar7) - 1.0) * *(float *)(param_1 + 0x158),param_1 + 0x1838,
                          *(undefined4 *)(param_1 + 0x154),0x447a0000,param_2);
    *(undefined4 *)(param_1 + 0x181c) = uVar4;
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x1680) + 0x708);
    if (fVar12 <= 0.0) {
      if (0.0 <= fVar12) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = -0.01;
      }
    }
    else {
      fVar12 = 0.01;
    }
    fVar10 = *(float *)(param_1 + 0x148);
    fVar12 = fVar12 * *(float *)(*(longlong *)(param_1 + 0x1680) + 0x704);
    fVar8 = fVar10 - -fVar10;
    if (1e-08 < ABS(fVar8)) {
      fVar8 = (fVar12 - -fVar10) / fVar8;
      if (0.0 <= fVar8) goto LAB_14124f491;
      fVar8 = 0.0;
    }
    else {
      if (fVar12 < fVar10) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = 1.0;
      }
LAB_14124f491:
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
    }
    uVar5 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x1804),(fVar8 + fVar8) - 1.0,param_1 + 0x183c,
                          *(undefined4 *)(param_1 + 0x150),0x447a0000,param_2);
    *(int *)(param_1 + 0x1804) = (int)uVar5;
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x168);
    uVar4 = FRichCurve::Eval(uVar3,uVar5,0);
    uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x1814) >> 0x20),uVar4);
    *(undefined8 *)(param_1 + 0x1814) = uVar3;
    fVar12 = *(float *)(param_1 + 0x181c);
    *(undefined8 *)(param_1 + 0x1808) = uVar3;
    goto LAB_14124f50f;
  }
  lVar1 = FRotator::UnrotateVector(lVar1 + 0x714,local_b8,lVar1 + 0x72c);
  fVar10 = *(float *)(param_1 + 0x324);
  fVar8 = *(float *)(lVar1 + 4);
  fVar7 = fVar10 - -fVar10;
  fVar6 = (float)(int)fVar8 - *(float *)(param_1 + 0x1740);
  if (1e-08 < ABS(fVar7)) {
    fVar7 = (fVar6 - -fVar10) / fVar7;
    if (0.0 <= fVar7) goto LAB_14124f0a4;
    fVar7 = 0.0;
  }
  else {
    if (fVar6 < fVar10) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
LAB_14124f0a4:
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  uVar4 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x1828),fVar7 * 20.0 - 10.0,param_1 + 0x1838,
                        *(undefined4 *)(param_1 + 800),0x447a0000,param_2);
  lVar1 = *(longlong *)(param_1 + 0x1680);
  *(undefined4 *)(param_1 + 0x1828) = uVar4;
  *(float *)(param_1 + 0x1740) = (float)(int)fVar8;
  pfVar2 = (float *)FRotator::Vector(lVar1 + 0x714,local_b8);
  fVar10 = *(float *)(param_1 + 0x324);
  fVar8 = fVar10 - -fVar10;
  fVar7 = pfVar2[1] * *(float *)(lVar1 + 0x730) + *pfVar2 * *(float *)(lVar1 + 0x72c) +
          pfVar2[2] * *(float *)(lVar1 + 0x734);
  fVar6 = fVar7 - *(float *)(param_1 + 0x1744);
  if (1e-08 < ABS(fVar8)) {
    fVar8 = (fVar6 - -fVar10) / fVar8;
    if (0.0 <= fVar8) goto LAB_14124f1c2;
  }
  else {
    if (fVar6 < fVar10) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.0;
    }
LAB_14124f1c2:
    fVar12 = fVar8;
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
  }
  uVar4 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x1820),fVar12 * 20.0 - 10.0,param_1 + 0x183c,
                        *(undefined4 *)(param_1 + 0x318),0x447a0000,param_2);
  uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x1820) >> 0x20),uVar4);
  fVar12 = *(float *)(param_1 + 0x1734);
  *(undefined8 *)(param_1 + 0x1820) = uVar3;
  *(undefined8 *)(param_1 + 0x1808) = uVar3;
  *(undefined4 *)(param_1 + 0x1810) = *(undefined4 *)(param_1 + 0x1828);
  *(float *)(param_1 + 0x1744) = fVar7;
  if (0.5 <= fVar12) {
    return;
  }
  fVar10 = 1.0 - (fVar12 + fVar12);
  fVar12 = fVar10 * *(float *)(param_1 + 0x181c);
  *(ulonglong *)(param_1 + 0x1808) =
       CONCAT44(fVar10 * *(float *)(param_1 + 0x1818),fVar10 * *(float *)(param_1 + 0x1814));
LAB_14124f50f:
  *(float *)(param_1 + 0x1810) = fVar12;
  return;
}



// FUNCTION 14124f580 FUN_14124f580 body=798 status=ok
// SIG undefined FUN_14124f580(void)

void FUN_14124f580(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_98 [144];
  
  fVar12 = *(float *)(param_1 + 0x438);
  fVar1 = *(float *)(param_1 + 0x1dc);
  if (0.0 <= fVar12) {
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  pfVar4 = (float *)FRotator::Quaternion(*(longlong *)(param_1 + 0x2d20) + 0x714,local_98);
  fVar9 = *pfVar4;
  fVar11 = -pfVar4[2];
  fVar10 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  lVar3 = *(longlong *)(param_1 + 0x2d20);
  fVar2 = *(float *)(param_1 + 0x1cc);
  fVar8 = fVar2 - -fVar2;
  fVar12 = ((fVar11 * pfVar4[3] + fVar10 * pfVar4[1]) * *(float *)(lVar3 + 0x72c) +
            ((fVar11 * pfVar4[2] - fVar10 * fVar9) + 1.0) * *(float *)(lVar3 + 0x730) +
           (fVar10 * pfVar4[3] - fVar11 * pfVar4[1]) * *(float *)(lVar3 + 0x734)) *
           ((fVar1 - 1.0) * fVar12 + 1.0);
  if (1e-08 < ABS(fVar8)) {
    fVar8 = (fVar12 - -fVar2) / fVar8;
    if (0.0 <= fVar8) goto LAB_14124f6e3;
    fVar8 = 0.0;
  }
  else {
    if (fVar12 < fVar2) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.0;
    }
LAB_14124f6e3:
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  uVar6 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x490),
                        ((fVar8 + fVar8) - 1.0) * *(float *)(param_1 + 0x1d8),param_1 + 0x4a8,
                        *(undefined4 *)(param_1 + 0x1d4),0x447a0000,param_2);
  *(undefined4 *)(param_1 + 0x490) = uVar6;
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x708);
  if (fVar12 <= 0.0) {
    if (0.0 <= fVar12) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = -0.01;
    }
  }
  else {
    fVar12 = 0.01;
  }
  fVar1 = *(float *)(param_1 + 0x1c8);
  fVar12 = fVar12 * *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x704);
  fVar9 = fVar1 - -fVar1;
  if (1e-08 < ABS(fVar9)) {
    fVar9 = (fVar12 - -fVar1) / fVar9;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
      goto LAB_14124f7cc;
    }
  }
  else if (fVar12 < fVar1) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0;
  }
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
LAB_14124f7cc:
  uVar6 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x494),(fVar9 + fVar9) - 1.0,param_1 + 0x4ac,
                        *(undefined4 *)(param_1 + 0x1d0),0x447a0000,param_2);
  *(undefined4 *)(param_1 + 0x494) = uVar6;
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1e0);
  uVar7 = FRichCurve::Eval(uVar5,uVar6,0);
  *(ulonglong *)(param_1 + 0x49c) = (ulonglong)uVar7;
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x490);
  return;
}



// FUNCTION 14124f8a0 FUN_14124f8a0 body=1569 status=ok
// SIG undefined FUN_14124f8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124f8a0(longlong param_1,float param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_f8 [4];
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  lVar3 = *(longlong *)(param_1 + 0x1680);
  if (*(char *)(lVar3 + 0x6e2) == '\0') {
    fVar15 = *(float *)(lVar3 + 0x700) * 0.008928572;
  }
  else {
    fVar15 = SQRT(*(float *)(lVar3 + 0x72c) * *(float *)(lVar3 + 0x72c) +
                  *(float *)(lVar3 + 0x730) * *(float *)(lVar3 + 0x730)) * 0.0005;
  }
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fVar11 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x1688),
                                *(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x278),
                                *(undefined4 *)(param_1 + 0x26c));
  fVar12 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x1688),
                                *(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x278),
                                *(undefined4 *)(param_1 + 0x26c));
  fVar13 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x284) * *(float *)(param_1 + 0x1688),
                                *(undefined4 *)(param_1 + 0x28c),*(undefined4 *)(param_1 + 0x288),
                                *(undefined4 *)(param_1 + 0x280));
  if (*(char *)(*(longlong *)(param_1 + 0x1680) + 0x6e4) == '\0') {
    local_f8[0] = -ABS(fVar13 * fVar15) + fVar12 * fVar15;
    local_f8[2] = fVar11 * fVar15;
  }
  else {
    local_f8[0] = 0.0;
    local_f8[2] = 0.0;
  }
  local_f8[1] = 0.0;
  local_e8 = (ulonglong)(uint)local_f8[0];
  local_e0 = local_f8[2];
  uVar14 = FMath::FInterpTo();
  *(undefined4 *)(param_1 + 0x17f4) = uVar14;
  fVar11 = param_2 + *(float *)(param_1 + 0x17dc);
  fVar15 = param_2 + *(float *)(param_1 + 0x17e4);
  *(float *)(param_1 + 0x17e4) = fVar15;
  *(float *)(param_1 + 0x17dc) = fVar11;
  if (fVar11 < *(float *)(param_1 + 0x17e0)) {
    if (*(float *)(param_1 + 0x17e8) <= fVar15) {
      *(undefined4 *)(param_1 + 0x17ec) = 0;
    }
  }
  else {
    fVar15 = *(float *)(param_1 + 0x29c);
    fVar11 = *(float *)(param_1 + 0x298);
    iVar5 = rand();
    fVar12 = *(float *)(param_1 + 0x2ac);
    fVar13 = *(float *)(param_1 + 0x2a8);
    *(float *)(param_1 + 0x17e0) = (float)iVar5 * 3.051851e-05 * (fVar15 - fVar11) + fVar11;
    iVar5 = rand();
    fVar15 = *(float *)(param_1 + 0x2b4);
    fVar11 = *(float *)(param_1 + 0x2b0);
    *(float *)(param_1 + 0x17ec) = (float)iVar5 * 3.051851e-05 * (fVar12 - fVar13) + fVar13;
    iVar5 = rand();
    fVar12 = *(float *)(param_1 + 0x2a4);
    fVar13 = *(float *)(param_1 + 0x2a0);
    *(float *)(param_1 + 0x17f0) = (float)iVar5 * 3.051851e-05 * (fVar15 - fVar11) + fVar11;
    iVar5 = rand();
    *(undefined4 *)(param_1 + 0x17e4) = 0;
    *(undefined4 *)(param_1 + 0x17dc) = 0;
    *(float *)(param_1 + 0x17e8) = (float)iVar5 * 3.051851e-05 * (fVar12 - fVar13) + fVar13;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x1680) + 0x6d8);
  if (uVar2 == 0x3f) {
    fVar15 = 0.0;
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0x2c0);
    pbVar1 = pbVar10 + (longlong)*(int *)(param_1 + 0x2c8) * 8;
    for (; pbVar10 != pbVar1; pbVar10 = pbVar10 + 8) {
      if (*pbVar10 == uVar2) {
        if (pbVar10 != (byte *)0x0) {
          fVar15 = *(float *)(pbVar10 + 4);
          goto LAB_14124fbed;
        }
        break;
      }
    }
    fVar15 = *(float *)(param_1 + 0x2b8);
  }
LAB_14124fbed:
  local_d8 = (float)local_e8 * fVar15;
  local_d4 = local_e8._4_4_ * fVar15;
  local_d0 = local_e0 * fVar15;
  local_e0 = *(float *)(*(longlong *)(param_1 + 0x1680) + 0x788);
  local_f8[0] = *(float *)(param_1 + 0x17b4) * *(float *)(param_1 + 0x268);
  local_e8 = 0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  pfVar6 = (float *)FRotator::Quaternion(local_f8,local_a8);
  pfVar7 = (float *)FRotator::Quaternion(param_1 + 0x1808,local_98);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  fVar13 = pfVar6[2];
  fVar4 = pfVar6[3];
  fVar19 = *pfVar7;
  fVar20 = pfVar7[1];
  fVar21 = pfVar7[2];
  fVar22 = pfVar7[3];
  fVar16 = fVar4 * fVar19 * _DAT_146876b90 + fVar22 * fVar11 + fVar13 * fVar20 * _DAT_146876b80 +
           fVar12 * fVar21 * _DAT_146876b70;
  fVar17 = fVar13 * fVar19 * fRam0000000146876b94 + fVar22 * fVar12 +
           fVar4 * fVar20 * fRam0000000146876b84 + fVar11 * fVar21 * fRam0000000146876b74;
  fVar18 = fVar12 * fVar19 * fRam0000000146876b98 + fVar22 * fVar13 +
           fVar11 * fVar20 * fRam0000000146876b88 + fVar4 * fVar21 * fRam0000000146876b78;
  fVar19 = fVar11 * fVar19 * fRam0000000146876b9c + fVar22 * fVar4 +
           fVar12 * fVar20 * fRam0000000146876b8c + fVar13 * fVar21 * fRam0000000146876b7c;
  pfVar6 = (float *)FRotator::Quaternion(&local_e8,local_88);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  fVar13 = pfVar6[2];
  fVar4 = pfVar6[3];
  fVar20 = fVar16 * fVar4 * _DAT_146876b90 + fVar19 * fVar11 + fVar17 * fVar13 * _DAT_146876b80 +
           fVar18 * fVar12 * _DAT_146876b70;
  fVar21 = fVar16 * fVar13 * fRam0000000146876b94 + fVar19 * fVar12 +
           fVar17 * fVar4 * fRam0000000146876b84 + fVar18 * fVar11 * fRam0000000146876b74;
  fVar22 = fVar16 * fVar12 * fRam0000000146876b98 + fVar19 * fVar13 +
           fVar17 * fVar11 * fRam0000000146876b88 + fVar18 * fVar4 * fRam0000000146876b78;
  fVar19 = fVar16 * fVar11 * fRam0000000146876b9c + fVar19 * fVar4 +
           fVar17 * fVar12 * fRam0000000146876b8c + fVar18 * fVar13 * fRam0000000146876b7c;
  pfVar6 = (float *)FRotator::Quaternion(&local_d8,local_78);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  fVar13 = pfVar6[2];
  fVar4 = pfVar6[3];
  local_c8 = fVar20 * fVar4 * _DAT_146876b90 + fVar19 * fVar11 + fVar21 * fVar13 * _DAT_146876b80 +
             fVar22 * fVar12 * _DAT_146876b70;
  fStack_c4 = fVar20 * fVar13 * fRam0000000146876b94 + fVar19 * fVar12 +
              fVar21 * fVar4 * fRam0000000146876b84 + fVar22 * fVar11 * fRam0000000146876b74;
  fStack_c0 = fVar20 * fVar12 * fRam0000000146876b98 + fVar19 * fVar13 +
              fVar21 * fVar11 * fRam0000000146876b88 + fVar22 * fVar4 * fRam0000000146876b78;
  fStack_bc = fVar20 * fVar11 * fRam0000000146876b9c + fVar19 * fVar4 +
              fVar21 * fVar12 * fRam0000000146876b8c + fVar22 * fVar13 * fRam0000000146876b7c;
  puVar8 = (undefined8 *)FQuat::Rotator(&local_c8,local_b8);
  *(undefined8 *)(param_1 + 0x17cc) = *puVar8;
  *(undefined4 *)(param_1 + 0x17d4) = *(undefined4 *)(puVar8 + 1);
  uVar9 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1e0);
  fVar11 = (float)FRichCurve::Eval(uVar9,*(undefined4 *)(param_1 + 0x1804),0);
  fVar12 = (float)FMath::FInterpTo();
  lVar3 = *(longlong *)(param_1 + 0x1680);
  *(float *)(param_1 + 0x17f8) = fVar12;
  local_d0 = fVar12 * *(float *)(param_1 + 0x294) * fVar15 + *(float *)(lVar3 + 0x788) + fVar11;
  *(undefined8 *)(param_1 + 0x17c0) = 0;
  *(float *)(param_1 + 0x17c8) = local_d0;
  uVar14 = FMath::FInterpTo(lVar3,*(undefined4 *)(lVar3 + 0x710),param_2,0x40e00000);
  *(undefined4 *)(param_1 + 0x17fc) = uVar14;
  return;
}



// FUNCTION 14124fed0 FUN_14124fed0 body=1576 status=ok
// SIG undefined FUN_14124fed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14124fed0(longlong param_1,float param_2)

{
  byte *pbVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_118 [3];
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [128];
  
  fVar17 = *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x700) * 0.008928572;
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar13 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x3a8),
                                *(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_1 + 0x270),
                                *(undefined4 *)(param_1 + 0x264));
  fVar14 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x3a8),
                                *(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_1 + 0x270),
                                *(undefined4 *)(param_1 + 0x264));
  fVar15 = (float)FUN_1408d8c50(*(float *)(param_1 + 0x27c) * *(float *)(param_1 + 0x3a8),
                                *(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x280),
                                *(undefined4 *)(param_1 + 0x278));
  if (*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e4) == '\0') {
    local_118[0] = -ABS(fVar15 * fVar17) + fVar14 * fVar17;
    local_118[2] = fVar13 * fVar17;
  }
  else {
    local_118[0] = 0.0;
    local_118[2] = 0.0;
  }
  local_118[1] = 0.0;
  local_100 = (ulonglong)(uint)local_118[0];
  local_f8 = local_118[2];
  uVar16 = FMath::FInterpTo();
  *(undefined4 *)(param_1 + 0x4fc) = uVar16;
  fVar17 = param_2 + *(float *)(param_1 + 0x4e4);
  param_2 = param_2 + *(float *)(param_1 + 0x4ec);
  *(float *)(param_1 + 0x4ec) = param_2;
  *(float *)(param_1 + 0x4e4) = fVar17;
  if (fVar17 < *(float *)(param_1 + 0x4e8)) {
    if (*(float *)(param_1 + 0x4f0) <= param_2) {
      *(undefined4 *)(param_1 + 0x4f4) = 0;
    }
  }
  else {
    fVar17 = *(float *)(param_1 + 0x294);
    fVar13 = *(float *)(param_1 + 0x290);
    iVar8 = rand();
    fVar14 = *(float *)(param_1 + 0x2a4);
    fVar15 = *(float *)(param_1 + 0x2a0);
    *(float *)(param_1 + 0x4e8) = (float)iVar8 * 3.051851e-05 * (fVar17 - fVar13) + fVar13;
    iVar8 = rand();
    fVar17 = *(float *)(param_1 + 0x2ac);
    fVar13 = *(float *)(param_1 + 0x2a8);
    *(float *)(param_1 + 0x4f4) = (float)iVar8 * 3.051851e-05 * (fVar14 - fVar15) + fVar15;
    iVar8 = rand();
    fVar14 = *(float *)(param_1 + 0x29c);
    fVar15 = *(float *)(param_1 + 0x298);
    *(float *)(param_1 + 0x4f8) = (float)iVar8 * 3.051851e-05 * (fVar17 - fVar13) + fVar13;
    iVar8 = rand();
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0;
    *(float *)(param_1 + 0x4f0) = (float)iVar8 * 3.051851e-05 * (fVar14 - fVar15) + fVar15;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2d20) + 0x6d8);
  if (uVar2 == 0x3f) {
    fVar17 = 0.0;
  }
  else {
    pbVar12 = *(byte **)(param_1 + 0x2b8);
    pbVar1 = pbVar12 + (longlong)*(int *)(param_1 + 0x2c0) * 8;
    for (; pbVar12 != pbVar1; pbVar12 = pbVar12 + 8) {
      if (*pbVar12 == uVar2) {
        if (pbVar12 != (byte *)0x0) {
          fVar17 = *(float *)(pbVar12 + 4);
          goto LAB_1412501ed;
        }
        break;
      }
    }
    fVar17 = *(float *)(param_1 + 0x2b0);
  }
LAB_1412501ed:
  local_e8 = *(float *)(param_1 + 0x43c);
  local_118[0] = *(float *)(param_1 + 600) * *(float *)(param_1 + 0x438);
  local_118[1] = 0.0;
  local_118[2] = 0.0;
  local_ec = local_e8 * *(float *)(param_1 + 0x4a0);
  local_f0 = local_e8 * *(float *)(param_1 + 0x49c);
  local_e8 = local_e8 * *(float *)(param_1 + 0x4a4);
  pfVar9 = (float *)FRotator::Quaternion(local_118,local_b8);
  pfVar10 = (float *)FRotator::Quaternion(&local_f0,local_a8);
  fVar13 = *pfVar9;
  fVar14 = pfVar9[1];
  fVar15 = pfVar9[2];
  fVar3 = pfVar9[3];
  fVar4 = *pfVar10;
  fVar5 = pfVar10[1];
  fVar6 = pfVar10[2];
  fVar7 = pfVar10[3];
  local_10c = 0;
  local_e4 = (float)local_100 * fVar17;
  local_dc = local_f8 * fVar17;
  local_e0 = local_100._4_4_ * fVar17;
  local_104 = *(float *)(param_1 + 0x460);
  fVar21 = fVar4 * fVar3 * _DAT_146876b90 + fVar7 * fVar13 + fVar5 * fVar15 * _DAT_146876b80 +
           fVar6 * fVar14 * _DAT_146876b70;
  fVar22 = fVar4 * fVar15 * fRam0000000146876b94 + fVar7 * fVar14 +
           fVar5 * fVar3 * fRam0000000146876b84 + fVar6 * fVar13 * fRam0000000146876b74;
  fVar23 = fVar4 * fVar14 * fRam0000000146876b98 + fVar7 * fVar15 +
           fVar5 * fVar13 * fRam0000000146876b88 + fVar6 * fVar3 * fRam0000000146876b78;
  fVar24 = fVar4 * fVar13 * fRam0000000146876b9c + fVar7 * fVar3 +
           fVar5 * fVar14 * fRam0000000146876b8c + fVar6 * fVar15 * fRam0000000146876b7c;
  pfVar9 = (float *)FRotator::Quaternion(&local_e4,local_98);
  pfVar10 = (float *)FRotator::Quaternion(&local_10c,local_88);
  fVar13 = *pfVar9;
  fVar14 = pfVar9[1];
  fVar15 = pfVar9[2];
  fVar3 = pfVar9[3];
  fVar4 = *pfVar10;
  fVar5 = pfVar10[1];
  fVar6 = pfVar10[2];
  fVar7 = pfVar10[3];
  fVar18 = fVar3 * fVar4 * _DAT_146876b90 + fVar7 * fVar13 + fVar15 * fVar5 * _DAT_146876b80 +
           fVar14 * fVar6 * _DAT_146876b70;
  fVar19 = fVar15 * fVar4 * fRam0000000146876b94 + fVar7 * fVar14 +
           fVar3 * fVar5 * fRam0000000146876b84 + fVar13 * fVar6 * fRam0000000146876b74;
  fVar20 = fVar14 * fVar4 * fRam0000000146876b98 + fVar7 * fVar15 +
           fVar13 * fVar5 * fRam0000000146876b88 + fVar3 * fVar6 * fRam0000000146876b78;
  fVar13 = fVar13 * fVar4 * fRam0000000146876b9c + fVar7 * fVar3 +
           fVar14 * fVar5 * fRam0000000146876b8c + fVar15 * fVar6 * fRam0000000146876b7c;
  local_d8 = fVar18 * fVar24 * _DAT_146876b90 + fVar13 * fVar21 + fVar19 * fVar23 * _DAT_146876b80 +
             fVar20 * fVar22 * _DAT_146876b70;
  fStack_d4 = fVar18 * fVar23 * fRam0000000146876b94 + fVar13 * fVar22 +
              fVar19 * fVar24 * fRam0000000146876b84 + fVar20 * fVar21 * fRam0000000146876b74;
  fStack_d0 = fVar18 * fVar22 * fRam0000000146876b98 + fVar13 * fVar23 +
              fVar19 * fVar21 * fRam0000000146876b88 + fVar20 * fVar24 * fRam0000000146876b78;
  fStack_cc = fVar18 * fVar21 * fRam0000000146876b9c + fVar13 * fVar24 +
              fVar19 * fVar22 * fRam0000000146876b8c + fVar20 * fVar23 * fRam0000000146876b7c;
  puVar11 = (undefined8 *)FQuat::Rotator(&local_d8,local_c8);
  *(undefined8 *)(param_1 + 0x4d8) = *puVar11;
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(puVar11 + 1);
  fVar13 = (float)FMath::FInterpTo();
  *(float *)(param_1 + 0x500) = fVar13;
  local_104 = fVar13 * *(float *)(param_1 + 0x28c) * fVar17 + *(float *)(param_1 + 0x460) +
              *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x4cc) = 0;
  *(float *)(param_1 + 0x4d4) = local_104;
  uVar16 = FMath::FInterpTo();
  *(undefined4 *)(param_1 + 0x504) = uVar16;
  return;
}



// FUNCTION 141250500 FUN_141250500 body=583 status=ok
// SIG undefined FUN_141250500(void)

void FUN_141250500(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  uVar6 = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x180);
  fVar4 = *(float *)(lVar1 + 2000);
  uVar5 = 0x80000000;
  fVar3 = -*(float *)(lVar1 + 0x7d8);
  fVar2 = fVar4 + fVar4;
  fVar3 = fVar3 + fVar3;
  fVar4 = ((((fVar3 * *(float *)(lVar1 + 0x7d8) - fVar2 * fVar4) + 1.0) * *(float *)(lVar1 + 0x730)
            + (fVar3 * *(float *)(lVar1 + 0x7dc) + fVar2 * *(float *)(lVar1 + 0x7d4)) *
              *(float *)(lVar1 + 0x72c) +
           (fVar2 * *(float *)(lVar1 + 0x7dc) - fVar3 * *(float *)(lVar1 + 0x7d4)) *
           *(float *)(lVar1 + 0x734)) - -130.0) * 0.0038461538;
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
    uVar5 = 0;
  }
  fVar4 = (fVar4 + fVar4) - 1.0;
  uVar5 = FUN_1408d8300(*(undefined4 *)(param_1 + 0x1a68),CONCAT44(uVar5,fVar4 + fVar4),local_res8,
                        0x3e4ccccd,0x461c4000,param_2);
  *(undefined4 *)(param_1 + 0x1a68) = uVar5;
  fVar4 = *(float *)(*(longlong *)(param_1 + 0x180) + 0x700);
  if (fVar4 <= 0.0) {
    if (0.0 <= fVar4) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = -0.01;
    }
  }
  else {
    fVar4 = 0.01;
  }
  fVar4 = (*(float *)(*(longlong *)(param_1 + 0x180) + 0x704) * fVar4 - -25.0) * 0.02;
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  FUN_1408d8300(*(undefined4 *)(param_1 + 0x1a60),(fVar4 - 1.0) * 2.5,local_res8,0x3ecccccd,
                0x461c4000,param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x6df) == '\0') {
    uVar6 = 0;
  }
  fVar4 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a70),uVar6,param_2,0x40a00000);
  *(float *)(param_1 + 0x1a60) = fVar4 * 0.02;
  return;
}



// FUNCTION 141250750 FUN_141250750 body=953 status=ok
// SIG undefined FUN_141250750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141250750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  lVar8 = *(longlong *)(param_1 + -0x410);
  if (lVar8 == 0) {
    local_78 = _DAT_1468b5d90;
    local_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar8 + 0x220);
    local_70 = *(float *)(lVar8 + 0x228);
  }
  local_70 = local_70 + *(float *)(param_1 + -0x114);
  *(undefined8 *)(param_2 + 0x50) = local_78;
  *(float *)(param_2 + 0x58) = local_70;
  lVar8 = *(longlong *)(param_1 + -0x410);
  if (lVar8 == 0) {
    uVar11 = (undefined4)DAT_1468b5da0;
    uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_70 = (float)DAT_1468b5da8;
  }
  else {
    local_68 = *(float *)(lVar8 + 0x210);
    fStack_64 = *(float *)(lVar8 + 0x214);
    fStack_60 = *(float *)(lVar8 + 0x218);
    fStack_5c = *(float *)(lVar8 + 0x21c);
    auVar2._4_4_ = -(uint)(fStack_64 != *(float *)(lVar8 + 0x254));
    auVar2._0_4_ = -(uint)(local_68 != *(float *)(lVar8 + 0x250));
    auVar2._8_4_ = -(uint)(fStack_60 != *(float *)(lVar8 + 600));
    auVar2._12_4_ = -(uint)(fStack_5c != *(float *)(lVar8 + 0x25c));
    iVar6 = movmskps(local_70,auVar2);
    if (iVar6 != 0) {
      *(float *)(lVar8 + 0x250) = local_68;
      *(float *)(lVar8 + 0x254) = fStack_64;
      *(float *)(lVar8 + 600) = fStack_60;
      *(float *)(lVar8 + 0x25c) = fStack_5c;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_68,&local_78);
      *(undefined8 *)(lVar8 + 0x260) = *puVar7;
      *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    uVar11 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
    local_70 = (float)*(undefined4 *)(lVar8 + 0x268);
  }
  local_78 = CONCAT44(uVar12,uVar11);
  *(undefined8 *)(param_2 + 0x80) = local_78;
  *(undefined8 *)(param_2 + 0x68) = local_78;
  *(float *)(param_2 + 0x88) = local_70;
  *(float *)(param_2 + 0x70) = local_70;
  lVar8 = FUN_142ceeb40(*(undefined8 *)(param_1 + 0xf0),1);
  if (lVar8 != 0) {
    lVar9 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_1468773f8) {
        _Init_thread_header(&DAT_1468773f8);
        if (DAT_1468773f8 == -1) {
          FName::FName(&DAT_1468773f0,L"Camera_3rd",1);
          _Init_thread_footer(&DAT_1468773f8);
        }
      }
      plVar1 = *(longlong **)(lVar8 + 0x4c0);
      if (plVar1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar1 + 0x440))(plVar1,DAT_1468773f0);
        if (cVar4 != '\0') {
          (**(code **)(*plVar1 + 0x420))(plVar1,&local_58,DAT_1468773f0,0);
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
      goto LAB_1412509a2;
    }
  }
  lVar8 = 0;
LAB_1412509a2:
  *(undefined8 *)(param_2 + 0x8c) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x58);
  lVar9 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (*(longlong *)(param_1 + 0x158) != 0) {
      uVar10 = FUN_141270d10(*(longlong *)(param_1 + 0x158),0);
      *(undefined8 *)(param_2 + 0xb8) = uVar10;
    }
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + -0xa8);
    if ((*(char *)(param_1 + 0x8a8) == '\0') && (*(char *)(param_1 + 0x8a9) == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_2 + 0xc1) = uVar5;
    *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(param_1 + 0x348);
    if (lVar8 != 0) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar8 + 0x24c0);
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar8 + 0x24c8);
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(lVar8 + 0x24cc);
      }
    }
  }
  return;
}



// FUNCTION 141250b10 FUN_141250b10 body=157 status=ok
// SIG undefined FUN_141250b10(void)

void FUN_141250b10(longlong param_1,float param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  param_2 = param_2 + *(float *)(param_1 + 0x668);
  *(float *)(param_1 + 0x668) = param_2;
  if ((*(float *)(param_1 + 0x530) <= param_2 && param_2 != *(float *)(param_1 + 0x530)) &&
     (*(int *)(param_1 + 0x664) != 1)) {
    lVar2 = *(longlong *)(param_1 + 0x648);
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar2 = param_1 + 0x610;
    }
    pcVar1 = *(code **)(lVar2 + (longlong)*(int *)(param_1 + 0x664) * 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,1);
    }
    lVar2 = *(longlong *)(param_1 + 0x5b8);
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      lVar2 = param_1 + 0x580;
    }
    if (*(code **)(lVar2 + 8) != (code *)0x0) {
      (**(code **)(lVar2 + 8))(param_1,*(undefined4 *)(param_1 + 0x664));
    }
    *(undefined4 *)(param_1 + 0x664) = 1;
  }
  return;
}



// FUNCTION 141250bb0 FUN_141250bb0 body=641 status=ok
// SIG undefined FUN_141250bb0(void)

void FUN_141250bb0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fStack_44;
  longlong local_38;
  float local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1[0x13f] != 0) {
    if ((*(char *)((longlong)param_1 + 0xbd9) == '\0') ||
       ((((param_1[0xd6] != 0 && (*(char *)(param_1[0xd6] + 0x280) != '\0')) ||
         (cVar3 = FUN_1430d8750(), cVar3 != '\0')) ||
        ((cVar3 = FUN_14122a7d0(param_1), cVar3 == '\0' ||
         (fStack_44 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xf54) >> 0x20),
         fVar10 = (float)*(undefined8 *)((longlong)param_1 + 0xf54),
         fVar10 * fVar10 + fStack_44 * fStack_44 +
         *(float *)((longlong)param_1 + 0xf5c) * *(float *)((longlong)param_1 + 0xf5c) <= 625.0)))))
       ) {
      if (0.0 < *(float *)(param_1 + 0x17d)) {
        *(undefined4 *)(param_1 + 0x17d) = 0;
        if (param_1[0x13f] != 0) {
          FUN_141241eb0(param_1,param_1[0x13f],1);
          return;
        }
      }
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(float *)(param_1 + 0x17d) <= *(float *)(lVar5 + 0x790)) {
        lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        *(float *)(param_1 + 0x17d) = *(float *)(lVar5 + 0x790) + *(float *)(param_1 + 0x14f);
        uVar6 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x140);
        fVar10 = (float)FRichCurve::Eval(uVar6,*(undefined4 *)((longlong)param_1 + 0x78c),0);
        local_30 = 0.0;
        if ((0.0 <= fVar10) && (local_30 = fVar10, 1.0 <= fVar10)) {
          local_30 = 1.0;
        }
        local_38 = param_1[0x13f];
        if (local_38 != 0) {
          local_2c = 1;
          local_28 = 0;
          local_20 = 0;
          iVar4 = FUN_141200d70(param_1 + 0xde,&local_38);
          FUN_1412094e0(&local_38);
          plVar9 = (longlong *)param_1[0xdc];
          plVar1 = plVar9 + (int)param_1[0xdd];
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            lVar5 = *plVar9;
            if (((lVar5 != 0) && (lVar7 = FUN_142ceeb40(lVar5,0), lVar7 != 0)) &&
               (plVar8 = (longlong *)FUN_142ceefb0(lVar5), plVar8 != (longlong *)0x0)) {
              lVar5 = FUN_1429e18b0();
              if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (cVar3 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar3 != '\0')) {
                FUN_141241870((longlong)iVar4 * 0x20 + param_1[0xde]);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141250e40 FUN_141250e40 body=620 status=ok
// SIG undefined FUN_141250e40(void)

void FUN_141250e40(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    *(float *)(param_1 + 0x778) = param_3 + *(float *)(param_1 + 0x778);
    if (*(char *)(param_1 + 0x6dc) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x780),uVar4,param_3,0x41200000);
    *(undefined4 *)(param_1 + 0x780) = uVar4;
    uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x77c),*(undefined4 *)(param_1 + 0x6e8),
                             param_3,0x41200000);
    *(undefined4 *)(param_1 + 0x77c) = uVar4;
    fVar2 = *(float *)(param_1 + 0x6e8);
    if (*(char *)(param_1 + 0x6e2) != '\0') {
      fVar1 = ABS(*(float *)(param_1 + 0x6e8));
      fVar2 = ABS(*(float *)(param_1 + 0x6ec));
      if (ABS(*(float *)(param_1 + 0x6ec)) <= fVar1) {
        fVar2 = fVar1;
      }
    }
    fVar1 = (1.0 - fVar2) * *(float *)(param_2 + 0x130c) * *(float *)(param_1 + 0x780) +
            fVar2 * *(float *)(param_2 + 0x1308);
    fVar6 = (1.0 - fVar2) * *(float *)(param_2 + 0x1300) * *(float *)(param_1 + 0x780) +
            fVar2 * *(float *)(param_2 + 0x12fc);
    fVar2 = (float)FUN_1408d8c50(fVar1 * *(float *)(param_1 + 0x778),1,0x3f000000,fVar6);
    *(float *)(param_1 + 0x784) = fVar2;
    *(float *)(param_1 + 0x788) = fVar2 * *(float *)(param_2 + 0x12f4);
    *(undefined8 *)(param_1 + 0x79c) = 0;
    *(float *)(param_1 + 0x7a4) = fVar2;
    if (ABS(*(float *)(param_1 + 0x78c)) < 3600.0) {
      fVar5 = ((*(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x77c) * 30.0) - 10.0) *
              *(float *)(param_1 + 0x780);
    }
    else {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x78c) = fVar5;
    *(ulonglong *)(param_1 + 0x790) = (ulonglong)(uint)(fVar2 * -0.95) << 0x20;
    *(float *)(param_1 + 0x798) = fVar2 * -0.9;
    uVar3 = FUN_1408d8c50(fVar1 * *(float *)(param_1 + 0x778) * *(float *)(param_2 + 0x1310),1,
                          0x3dcccccd,fVar6 * *(float *)(param_2 + 0x1304));
    *(ulonglong *)(param_1 + 0x7a8) = (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  return;
}



// FUNCTION 1412510b0 FUN_1412510b0 body=390 status=ok
// SIG undefined FUN_1412510b0(void)

void FUN_1412510b0(longlong param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_28 [32];
  
  plVar3 = *(longlong **)(param_1 + 0x700);
  *(float *)(param_1 + 0x668) = param_2 + *(float *)(param_1 + 0x668);
  *(float *)(param_1 + 0x688) = param_2 + *(float *)(param_1 + 0x688);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x6f8);
    if (plVar3 == (longlong *)0x0) goto LAB_14125118f;
    uVar2 = FUN_142a07000();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
    *(longlong **)(param_1 + 0x700) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14125118f;
  }
  FUN_141255d90(param_1,param_2,param_1 + 0x690);
  puVar4 = (undefined8 *)FUN_1412244d0(param_1,local_28,param_2);
  *(undefined8 *)(param_1 + 0x6bc) = *puVar4;
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)
           (**(code **)(*plVar3 + 0x430))(plVar3,local_28,*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x6d4) = *puVar4;
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(puVar4 + 1);
LAB_14125118f:
  if (*(float *)(param_1 + 0x668) <= *(float *)(param_1 + 0x670) &&
      *(float *)(param_1 + 0x670) != *(float *)(param_1 + 0x668)) {
    FUN_141255b20(param_1,param_2);
  }
  else if (*(int *)(param_1 + 0x664) != 1) {
    lVar5 = *(longlong *)(param_1 + 0x648);
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar5 = param_1 + 0x610;
    }
    pcVar1 = *(code **)(lVar5 + (longlong)*(int *)(param_1 + 0x664) * 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,1);
    }
    lVar5 = *(longlong *)(param_1 + 0x5b8);
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      lVar5 = param_1 + 0x580;
    }
    if (*(code **)(lVar5 + 8) != (code *)0x0) {
      (**(code **)(lVar5 + 8))(param_1,*(undefined4 *)(param_1 + 0x664));
    }
    *(undefined4 *)(param_1 + 0x664) = 1;
    return;
  }
  return;
}



// FUNCTION 141251240 FUN_141251240 body=471 status=ok
// SIG undefined FUN_141251240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141251240(longlong param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  fVar6 = *(float *)(param_1 + 0x668);
  if (fVar6 == 0.0) {
    FUN_14223c560(0,0);
    fVar6 = *(float *)(param_1 + 0x668);
  }
  *(float *)(param_1 + 0x668) = fVar6 + param_2;
  if (*(float *)(param_1 + 0x670) <= fVar6 + param_2) {
    lVar5 = *(longlong *)(param_1 + 0x168);
    uVar2 = *(undefined8 *)(param_1 + 0x720);
    uStack_20 = *(undefined8 *)(param_1 + 0x728);
    if (lVar5 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar5 + 0x220);
      local_30 = *(float *)(lVar5 + 0x228);
    }
    local_28._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_28._0_4_ = (float)uVar2;
    local_30 = local_30 - (float)uStack_20;
    *(ulonglong *)(param_1 + 0x6bc) =
         CONCAT44((float)((ulonglong)local_38 >> 0x20) - local_28._4_4_,
                  (float)local_38 - (float)local_28);
    *(float *)(param_1 + 0x6c4) = local_30;
    if (*(int *)(param_1 + 0x664) != 3) {
      lVar5 = *(longlong *)(param_1 + 0x648);
      if (*(longlong *)(param_1 + 0x648) == 0) {
        lVar5 = param_1 + 0x610;
      }
      pcVar1 = *(code **)(lVar5 + (longlong)*(int *)(param_1 + 0x664) * 8);
      local_28 = uVar2;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(param_1,3);
      }
      lVar5 = *(longlong *)(param_1 + 0x5b8);
      if (*(longlong *)(param_1 + 0x5b8) == 0) {
        lVar5 = param_1 + 0x580;
      }
      if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(param_1,*(undefined4 *)(param_1 + 0x664));
      }
      *(undefined4 *)(param_1 + 0x664) = 3;
    }
  }
  else {
    plVar3 = (longlong *)FUN_1412291c0(param_1);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = (undefined8 *)FUN_141225300(param_1,&local_38);
      *(undefined8 *)(param_1 + 0x6bc) = *puVar4;
      *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(puVar4 + 1);
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x430))(plVar3,&local_38,*(undefined8 *)(param_1 + 0x460));
      *(undefined8 *)(param_1 + 0x6d4) = *puVar4;
      *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(puVar4 + 1);
      return;
    }
  }
  return;
}



// FUNCTION 141251420 FUN_141251420 body=316 status=ok
// SIG undefined FUN_141251420(void)

void FUN_141251420(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (cVar4 = (**(code **)(*plVar1 + 0x950))(plVar1), cVar4 != '\0')) ||
       (cVar4 = FUN_141255d90(param_1,param_2,param_1 + 0x690), cVar4 == '\0')) {
      *(undefined4 *)(param_1 + 0x780) = 0;
      *(undefined4 *)(param_1 + 0x858) = 0;
    }
    else {
      FUN_141251560(param_1,param_2);
    }
    FUN_141255b20(param_1,param_2);
    FUN_141251920(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x664) == 3) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x648);
  if (*(longlong *)(param_1 + 0x648) == 0) {
    lVar5 = param_1 + 0x610;
  }
  pcVar2 = *(code **)(lVar5 + (longlong)*(int *)(param_1 + 0x664) * 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,3);
  }
  lVar5 = *(longlong *)(param_1 + 0x5b8);
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    lVar5 = param_1 + 0x580;
  }
  if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
    (**(code **)(lVar5 + 0x18))(param_1,*(undefined4 *)(param_1 + 0x664));
  }
  *(undefined4 *)(param_1 + 0x664) = 3;
  return;
}



// FUNCTION 141251560 FUN_141251560 body=951 status=ok
// SIG undefined FUN_141251560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141251560(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined **local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  float local_124;
  longlong local_110;
  longlong *local_108;
  longlong local_e8;
  longlong local_e0;
  float local_a0;
  undefined4 local_9c;
  longlong local_78;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  if (((char)param_1[0x25] == '\x03') && (param_1[0xde] != 0)) {
    param_2 = param_2 + *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xf0) = param_2;
    if (*(float *)(param_1 + 0xed) <= param_2 && param_2 != *(float *)(param_1 + 0xed)) {
      cVar2 = (**(code **)(*param_1 + 0x6f0))();
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x10b) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
        FUN_14124ebc0(param_1,1,0);
      }
      else {
        lVar1 = param_1[0x2d];
        *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xed);
        if (lVar1 == 0) {
          local_1b8 = _DAT_1468b5d90;
          local_1b0 = DAT_1468b5d98;
        }
        else {
          local_1b8 = *(undefined8 *)(lVar1 + 0x220);
          local_1b0 = *(float *)(lVar1 + 0x228);
        }
        (**(code **)(*(longlong *)param_1[0xde] + 0x308))((longlong *)param_1[0xde],&local_188);
        lVar1 = *(longlong *)(param_1[0xde] + 0x168);
        if (lVar1 == 0) {
          local_1d8 = _DAT_1468b5d90;
          local_1d0 = DAT_1468b5d98;
        }
        else {
          local_1d8 = *(undefined8 *)(lVar1 + 0x220);
          local_1d0 = *(float *)(lVar1 + 0x228);
        }
        local_1a0 = local_1d0;
        local_160 = DAT_1468b5da8;
        local_1a8 = local_1d8;
        local_150 = local_180;
        local_168 = DAT_1468b5da0;
        local_1c0 = local_1d0;
        local_158 = local_188;
        local_1d0 = local_1b0;
        local_1c8 = local_1d8;
        local_1d8 = local_1b8;
        local_170 = DAT_1468b5d98;
        local_178 = _DAT_1468b5d90;
        FUN_14306d000(param_1,&local_198,local_res8,&local_1d8,&local_1c8,&local_158,
                      *(undefined4 *)((longlong)param_1 + 0x774),(int)param_1[0xee],0,&local_168,
                      &local_178);
        FUN_140a25850(&local_148);
        local_140 = param_1[0xec];
        lVar1 = param_1[0x2d];
        if (lVar1 == 0) {
          local_1c0 = DAT_1468b5d98;
          puVar3 = &local_1c8;
          local_1c8 = _DAT_1468b5d90;
        }
        else {
          puVar3 = &local_1d8;
          local_1d0 = *(float *)(lVar1 + 0x228);
          local_1d8 = *(undefined8 *)(lVar1 + 0x220);
        }
        local_138 = *puVar3;
        local_130 = *(undefined4 *)(puVar3 + 1);
        local_1c0 = local_1a0 + local_190;
        local_12c = CONCAT44(local_1a8._4_4_ + local_194,(float)local_1a8 + local_198);
        local_110 = param_1[0x2a];
        local_e0 = param_1[0xef];
        local_9c = local_res8[0];
        local_a0 = SQRT(local_198 * local_198 + local_194 * local_194 + local_190 * local_190);
        local_124 = local_1c0;
        local_108 = param_1;
        local_e8 = local_110;
        FUN_143040df0(&local_148);
        *(int *)(param_1 + 0x10b) = (int)param_1[0x10b] + 1;
        FUN_1413eb810(param_1,param_1[0xdf],param_1[0xde]);
        if (*(int *)((longlong)param_1 + 0x76c) <= (int)param_1[0x10b]) {
          *(undefined4 *)(param_1 + 0x10b) = 0;
          FUN_14124ebc0(param_1,1,0);
        }
        local_148 = &PTR_FUN_1441f17f0;
        FWeakObjectPtr::operator=(local_20,0);
        local_18 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 141251920 FUN_141251920 body=255 status=ok
// SIG undefined FUN_141251920(void)

bool FUN_141251920(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x480);
  if (lVar2 != 0) {
    param_2 = param_2 + *(float *)(param_1 + 0x66c);
    fVar1 = *(float *)(param_1 + 0x488);
    *(float *)(param_1 + 0x66c) = param_2;
    if (1e-08 < ABS(fVar1)) {
      fVar3 = (float)(int)(param_2 / fVar1) * fVar1;
      if (ABS(param_2) < ABS(fVar3)) {
        fVar3 = param_2;
      }
      fVar3 = param_2 - fVar3;
    }
    else {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar2);
      fVar3 = 0.0;
      lVar2 = *(longlong *)(param_1 + 0x480);
    }
    *(float *)(param_1 + 0x66c) = fVar3;
    fVar3 = (float)UCurveFloat::GetFloatValue(lVar2);
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    *(float *)(param_1 + 0x6d0) = fVar3 * *(float *)(param_1 + 0x48c);
    return fVar1 < param_2;
  }
  return true;
}



// FUNCTION 141251a20 FUN_141251a20 body=1415 status=ok
// SIG undefined FUN_141251a20(void)

void FUN_141251a20(longlong param_1,float param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_f8 [4];
  undefined4 local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  undefined1 local_d8 [8];
  undefined4 local_d0;
  undefined1 local_cc [20];
  undefined1 local_b8 [176];
  
  fVar5 = param_2 * 360.0;
  fVar6 = fVar5 / *(float *)(param_1 + 0x150) + *(float *)(param_1 + 0x1a8c);
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  *(float *)(param_1 + 0x1a8c) = fVar6 - fVar7;
  fVar6 = fVar5 / *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x1a90);
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  fVar5 = fVar5 / *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x1a94);
  *(float *)(param_1 + 0x1a90) = fVar6 - fVar7;
  fVar7 = (float)(int)(fVar5 * 0.0027777778) * 360.0;
  if (ABS(fVar5) < ABS(fVar7)) {
    fVar7 = fVar5;
  }
  *(float *)(param_1 + 0x1a94) = fVar5 - fVar7;
  fVar5 = (param_2 * 45.0) / *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0x1a98);
  fVar7 = (float)(int)(fVar5 * 0.0027777778) * 360.0;
  if (ABS(fVar5) < ABS(fVar7)) {
    fVar7 = fVar5;
  }
  fVar6 = (param_2 * 45.0) / *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x1a9c);
  *(float *)(param_1 + 0x1a98) = fVar5 - fVar7;
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  *(float *)(param_1 + 0x1a9c) = fVar6 - fVar7;
  FRotator::UnrotateVector(param_3 + 0x714,&local_e8,param_3 + 0x7b0);
  uVar1 = FVector::RotateAngleAxis
                    (param_1 + 0x1aac,local_d8,*(undefined4 *)(param_1 + 0x1a9c),&DAT_1464aa7b8);
  uVar2 = FVector::RotateAngleAxis
                    (param_1 + 0x1aa0,local_cc,*(undefined4 *)(param_1 + 0x1a98),&DAT_1464aa7a8);
  uVar1 = FRotationMatrix::MakeFromXY(local_b8,uVar2,uVar1);
  FMatrix::Rotator(uVar1,local_f8);
  if (*(char *)(param_3 + 0x6e2) == '\0') {
    uVar4 = 0x40200000;
  }
  else {
    uVar4 = 0x41200000;
  }
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x170),uVar4,param_2,0x40400000);
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  fVar7 = *(float *)(param_3 + 0x7d4);
  fVar5 = fVar7 + fVar7;
  fVar6 = -*(float *)(param_3 + 2000);
  fVar6 = fVar6 + fVar6;
  fVar5 = (fVar6 * *(float *)(param_3 + 0x7dc) + fVar5 * *(float *)(param_3 + 0x7d8)) *
          *(float *)(param_3 + 0x7c0) +
          (fVar5 * *(float *)(param_3 + 0x7dc) - fVar6 * *(float *)(param_3 + 0x7d8)) *
          *(float *)(param_3 + 0x7bc) +
          ((fVar6 * *(float *)(param_3 + 2000) - fVar5 * fVar7) + 1.0) * *(float *)(param_3 + 0x7c4)
          + local_e4 * 0.1;
  fVar7 = ABS(fVar5) * 0.009090909;
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  if (fVar5 <= 0.0) {
    if (0.0 <= fVar5) {
      fVar5 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar5 = -2.5;
      fVar6 = -0.5;
    }
  }
  else {
    fVar5 = 2.5;
    fVar6 = 0.5;
  }
  local_d0 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a68),fVar7 * fVar5 + fVar6 + local_f0,
                              param_2,0x3f800000);
  fVar7 = ABS(local_e8) * 0.002;
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  if (local_e8 <= 0.0) {
    if (0.0 <= local_e8) {
      fVar5 = -0.0;
    }
    else {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = -1.0;
  }
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a60),fVar7 * 3.0 * fVar5 + local_f0,param_2,
                           0x40000000);
  *(ulonglong *)(param_1 + 0x1a80) = CONCAT44(local_f4,uVar4);
  *(undefined4 *)(param_1 + 0x1a88) = local_d0;
  if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x779) == '\0') {
    fVar7 = *(float *)(param_1 + 0x178);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x174);
  }
  fVar6 = (*(float *)(param_1 + 0x1a88) - -10.0) * 0.05;
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
    fVar5 = 1.0;
  }
  fVar8 = 100.0 - fVar5 * 200.0;
  *(float *)(param_1 + 0x1a78) = fVar8;
  fVar5 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x1a8c) * 0.017453292);
  fVar6 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x1a90) * 0.017453292);
  fVar3 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x1a94) * 0.017453292);
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1a7c),
                           ABS(fVar8) * 0.2 + fVar5 * *(float *)(param_1 + 0x15c) +
                           fVar6 * *(float *)(param_1 + 0x160) + fVar3 * *(float *)(param_1 + 0x164)
                           + fVar7,param_2,0x40200000);
  *(undefined4 *)(param_1 + 0x1a7c) = uVar4;
  return;
}



// FUNCTION 141251fb0 FUN_141251fb0 body=1366 status=ok
// SIG undefined FUN_141251fb0(void)

void FUN_141251fb0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [24];
  undefined1 local_b8 [176];
  
  fVar6 = param_2 * 360.0;
  fVar8 = fVar6 / *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x298);
  fVar10 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar10)) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x298) = fVar8 - fVar10;
  fVar8 = fVar6 / *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x29c);
  fVar10 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar10)) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x29c) = fVar8 - fVar10;
  fVar8 = fVar6 / *(float *)(param_1 + 0x14c) + *(float *)(param_1 + 0x2a0);
  fVar10 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar10)) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x2a0) = fVar8 - fVar10;
  fVar8 = fVar6 / *(float *)(param_1 + 0x164) + *(float *)(param_1 + 0x2a4);
  fVar10 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar10)) {
    fVar10 = fVar8;
  }
  fVar7 = fVar6 / *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0x2a8);
  *(float *)(param_1 + 0x2a4) = fVar8 - fVar10;
  fVar6 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
  if (ABS(fVar7) < ABS(fVar6)) {
    fVar6 = fVar7;
  }
  *(float *)(param_1 + 0x2a8) = fVar7 - fVar6;
  uVar2 = FVector::RotateAngleAxis(param_1 + 0x270,local_e8,fVar7 - fVar6,&DAT_1464aa7b8);
  uVar3 = FVector::RotateAngleAxis(param_1 + 0x264,local_dc,fVar8 - fVar10,&DAT_1464aa7a8);
  uVar2 = FRotationMatrix::MakeFromXY(local_b8,uVar3,uVar2);
  puVar4 = (undefined8 *)FMatrix::Rotator(uVar2,local_d0);
  fVar10 = 0.0;
  *(undefined8 *)(param_1 + 0x27c) = *puVar4;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(puVar4 + 1);
  lVar1 = *(longlong *)(param_1 + 0x590);
  if (*(char *)(lVar1 + 0x6dc) != '\0') {
    fVar6 = *(float *)(lVar1 + 0x6ec);
    if (*(char *)(lVar1 + 0x6e2) == '\0') {
      fVar6 = fVar6 * *(float *)(lVar1 + 0x6e8);
    }
    fVar8 = -1.0;
    fVar6 = *(float *)(lVar1 + 0x770) * 0.011111111 + fVar6;
    if (-1.0 <= fVar6) {
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = -1.0;
    }
    fVar6 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x290),
                                 fVar6 * *(float *)(param_1 + 0x188),param_1 + 0x288,
                                 *(undefined4 *)(param_1 + 0x194),0x459c4000,param_2);
    lVar1 = *(longlong *)(param_1 + 0x590);
    *(float *)(param_1 + 0x290) = fVar6;
    *(float *)(param_1 + 0x284) = fVar6 + *(float *)(param_1 + 0x284);
    if (*(char *)(lVar1 + 0x6e2) == '\0') {
      if (*(float *)(lVar1 + 0x70c) <= 0.0) {
        if (0.0 <= *(float *)(lVar1 + 0x70c)) {
          fVar8 = 0.0;
        }
      }
      else {
        fVar8 = 1.0;
      }
      fVar8 = fVar8 * *(float *)(lVar1 + 0x6e8);
    }
    else {
      fVar8 = *(float *)(lVar1 + 0x6e8);
    }
    fVar6 = *(float *)(param_1 + 0x184);
    if (*(char *)(lVar1 + 0x6df) == '\0') {
      fVar6 = -fVar6;
    }
    if (*(char *)(lVar1 + 0x6df) == '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x18c);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 400);
    }
    fVar6 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x294),fVar6 * fVar8,param_1 + 0x28c,
                                 uVar5,0x459c4000,param_2);
    *(float *)(param_1 + 0x294) = fVar6;
    *(float *)(param_1 + 0x27c) = fVar6 + *(float *)(param_1 + 0x27c);
  }
  fVar6 = *(float *)(param_1 + 0x188);
  fVar8 = *(float *)(param_1 + 0x180);
  fVar7 = fVar6 - -fVar6;
  if (1e-08 < ABS(fVar7)) {
    fVar7 = (*(float *)(param_1 + 0x284) - -fVar6) / fVar7;
    if (0.0 <= fVar7) goto LAB_141252393;
    fVar7 = 0.0;
  }
  else {
    if (*(float *)(param_1 + 0x284) < fVar6) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
LAB_141252393:
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  fVar6 = *(float *)(param_1 + 0x184);
  fVar9 = fVar6 - -fVar6;
  fVar7 = (-fVar8 - fVar8) * fVar7 + fVar8;
  *(float *)(param_1 + 0x224) = fVar7;
  if (1e-08 < ABS(fVar9)) {
    fVar9 = (*(float *)(param_1 + 0x27c) - -fVar6) / fVar9;
    if (fVar9 < 0.0) goto LAB_141252416;
  }
  else if (*(float *)(param_1 + 0x27c) < fVar6) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0;
  }
  fVar10 = fVar9;
  if (1.0 <= fVar9) {
    fVar10 = 1.0;
  }
LAB_141252416:
  *(float *)(param_1 + 0x220) = (fVar8 + fVar8) * fVar10 - fVar8;
  fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x298) * 0.017453292);
  fVar6 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x29c) * 0.017453292);
  fVar8 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x2a0) * 0.017453292);
  uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x228),
                           ABS(fVar7) * 0.2 + fVar10 * *(float *)(param_1 + 0x150) +
                           fVar6 * *(float *)(param_1 + 0x154) + fVar8 * *(float *)(param_1 + 0x158)
                           + *(float *)(param_1 + 0x17c),param_2,0x40200000);
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  return;
}



// FUNCTION 141252510 FUN_141252510 body=667 status=ok
// SIG undefined FUN_141252510(void)

void FUN_141252510(longlong *param_1,float param_2)

{
  char cVar1;
  long lVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong local_48;
  undefined4 local_40;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x6e8))();
  if (cVar1 == '\0') {
    if (*(int *)((longlong)param_1 + 0x664) != 3) {
      plVar3 = (longlong *)param_1[0xc9];
      if ((longlong *)param_1[0xc9] == (longlong *)0x0) {
        plVar3 = param_1 + 0xc2;
      }
      if ((code *)plVar3[*(int *)((longlong)param_1 + 0x664)] != (code *)0x0) {
        (*(code *)plVar3[*(int *)((longlong)param_1 + 0x664)])(param_1,3);
      }
      plVar3 = (longlong *)param_1[0xb7];
      if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
        plVar3 = param_1 + 0xb0;
      }
      if ((code *)plVar3[3] != (code *)0x0) {
        (*(code *)plVar3[3])(param_1,*(undefined4 *)((longlong)param_1 + 0x664));
      }
      *(undefined4 *)((longlong)param_1 + 0x664) = 3;
    }
    FUN_14120d810(param_1,0);
    return;
  }
  *(float *)((longlong)param_1 + 0x784) = param_2 + *(float *)((longlong)param_1 + 0x784);
  plVar3 = param_1;
  cVar1 = FUN_141255d90(param_1,param_2,param_1 + 0xd2);
  lVar2 = (long)plVar3;
  if (cVar1 != '\0') {
    fVar6 = 0.0;
    if ((char)param_1[0xf1] != '\0') {
      fVar5 = *(float *)((longlong)param_1 + 0x784);
      fVar4 = *(float *)((longlong)param_1 + 0x76c);
      if (fVar4 < fVar5) {
        if (1e-08 < ABS(fVar4)) {
          fVar4 = (float)(int)(fVar5 / fVar4) * fVar4;
          if (ABS(fVar5) < ABS(fVar4)) {
            fVar4 = fVar5;
          }
          fVar5 = fVar5 - fVar4;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage(lVar2);
          fVar5 = 0.0;
        }
        *(float *)((longlong)param_1 + 0x784) = fVar5;
        plVar3 = param_1;
        FUN_14120d810(param_1,0);
        lVar2 = (long)plVar3;
        if ((char)param_1[0x25] == '\x03') {
          *(undefined1 *)(param_1 + 0xd7) = 0;
          FUN_141227a20(param_1,&local_48);
          param_1[0xd2] = local_48;
          *(undefined4 *)(param_1 + 0xd3) = local_40;
          param_1[0xcf] = *(longlong *)((longlong)param_1 + 0x6bc);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)((longlong)param_1 + 0x6c4);
          *(undefined4 *)((longlong)param_1 + 0x684) = 0;
          plVar3 = param_1;
          FUN_1413e7800(param_1,param_1[0xdf]);
          lVar2 = (long)plVar3;
        }
      }
      if ((char)param_1[0xf1] != '\0') goto LAB_141252777;
    }
    fVar5 = *(float *)((longlong)param_1 + 0x784);
    fVar4 = *(float *)(param_1 + 0xed);
    if (fVar4 < fVar5) {
      if (1e-08 < ABS(fVar4)) {
        fVar4 = (float)(int)(fVar5 / fVar4) * fVar4;
        if (ABS(fVar5) < ABS(fVar4)) {
          fVar4 = fVar5;
        }
        fVar6 = fVar5 - fVar4;
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage(lVar2);
      }
      *(float *)((longlong)param_1 + 0x784) = fVar6;
      FUN_14120d810(param_1,1);
    }
  }
LAB_141252777:
  FUN_141255b20(param_1,param_2);
  FUN_141251920(param_1,param_2);
  return;
}



// FUNCTION 1412527b0 FUN_1412527b0 body=177 status=ok
// SIG undefined FUN_1412527b0(void)

void FUN_1412527b0(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_141240d40();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x664) != 2)) {
    lVar3 = *(longlong *)(param_1 + 0x648);
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar3 = param_1 + 0x610;
    }
    pcVar1 = *(code **)(lVar3 + (longlong)*(int *)(param_1 + 0x664) * 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x5b8);
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      lVar3 = param_1 + 0x580;
    }
    if (*(code **)(lVar3 + 0x10) != (code *)0x0) {
      (**(code **)(lVar3 + 0x10))(param_1,*(undefined4 *)(param_1 + 0x664));
    }
    *(undefined4 *)(param_1 + 0x664) = 2;
  }
  *(undefined8 *)(param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  FUN_141255b20(param_1,param_2);
  return;
}



// FUNCTION 141252870 FUN_141252870 body=2886 status=ok
// SIG undefined FUN_141252870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141252870(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8 [2];
  undefined1 local_138 [16];
  undefined1 local_128 [40];
  float local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [224];
  
  lVar2 = *(longlong *)(param_1 + 0x1680);
  if (*(char *)(lVar2 + 0x6e3) == '\0') {
LAB_14125329f:
    *(undefined4 *)(param_1 + 0x1768) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)(param_1 + 0x176c) = DAT_1468b5d88._4_4_;
    *(undefined8 *)(param_1 + 0x1748) = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0x1750) = DAT_1468b5da8;
    *(undefined8 *)(param_1 + 0x1794) = 0;
    *(undefined8 *)(param_1 + 0x179c) = 0;
    iVar1 = *(int *)(param_1 + 0x168c);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x6d0))) {
      *(undefined4 *)(param_1 + 0x16b0) =
           *(undefined4 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(lVar2 + 0x6c8));
    }
    iVar1 = *(int *)(param_1 + 0x16b4);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x6d0))) {
      *(undefined4 *)(param_1 + 0x16d8) =
           *(undefined4 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(lVar2 + 0x6c8));
    }
    iVar1 = *(int *)(param_1 + 0x16dc);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x6d0))) {
      *(undefined4 *)(param_1 + 0x1700) =
           *(undefined4 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(lVar2 + 0x6c8));
    }
    iVar1 = *(int *)(param_1 + 0x1704);
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(lVar2 + 0x6d0) <= iVar1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1728) =
         *(undefined4 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(lVar2 + 0x6c8));
    return;
  }
  if (*(char *)(lVar2 + 0x6e2) == '\0') {
    if (*(float *)(param_1 + 0x1734) <= 0.0) goto LAB_14125329f;
    uVar12 = 0;
  }
  else {
    uVar12 = 0x3f800000;
  }
  fVar8 = (float)FMath::FInterpTo(*(float *)(param_1 + 0x1734),uVar12,param_2);
  *(float *)(param_1 + 0x1734) = fVar8;
  fVar13 = fVar8 * *(float *)(param_1 + 0x2d4);
  *(float *)(param_1 + 0x1758) = fVar13 * 0.017453292;
  *(float *)(param_1 + 0x1754) = fVar13 * -0.017453292;
  *(undefined8 *)(param_1 + 0x175c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1764) = DAT_1468b5d98;
  pfVar6 = *(float **)(param_1 + 0x340);
  pfVar7 = pfVar6 + (longlong)*(int *)(param_1 + 0x348) * 7;
  if (pfVar6 != pfVar7) {
    do {
      fVar8 = *pfVar6;
      fVar13 = pfVar6[1];
      fVar10 = pfVar6[2];
      local_100 = pfVar6[6];
      uVar3 = *(undefined8 *)(pfVar6 + 4);
      fVar9 = _guard_xfg_dispatch_icall_nop
                        (*(float *)(param_1 + 0x1688) * 0.10471976 *
                         (float)((ulonglong)uVar3 >> 0x20) + pfVar6[3]);
      pfVar6 = pfVar6 + 7;
      fVar9 = (fVar9 * local_100 + (float)uVar3) * *(float *)(param_1 + 0x1734);
      *(float *)(param_1 + 0x175c) = fVar8 * fVar9 + *(float *)(param_1 + 0x175c);
      *(float *)(param_1 + 0x1760) = fVar13 * fVar9 + *(float *)(param_1 + 0x1760);
      *(float *)(param_1 + 0x1764) = fVar10 * fVar9 + *(float *)(param_1 + 0x1764);
    } while (pfVar6 != pfVar7);
    fVar8 = *(float *)(param_1 + 0x1734);
  }
  uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x358);
  fVar8 = (float)FRichCurve::Eval(uVar3,fVar8,0);
  *(float *)(param_1 + 0x1764) = fVar8 + *(float *)(param_1 + 0x1764);
  fVar8 = modff(((param_2 * 90.0) / *(float *)(param_1 + 0x350) + *(float *)(param_1 + 0x1768)) *
                0.0027777778,local_res8);
  *(float *)(param_1 + 0x1768) = fVar8 * 360.0;
  fVar8 = modff(((param_2 * 90.0) / *(float *)(param_1 + 0x354) + *(float *)(param_1 + 0x176c)) *
                0.0027777778,local_res8);
  *(float *)(param_1 + 0x176c) = fVar8 * 360.0;
  FVector::RotateAngleAxis(&DAT_1464aa7a8,local_128,*(undefined4 *)(param_1 + 0x350),&DAT_1464aa798)
  ;
  FVector::RotateAngleAxis(&DAT_1464aa7b8,local_138,*(undefined4 *)(param_1 + 0x354),&DAT_1464aa798)
  ;
  uVar3 = FVector::RotateAngleAxis(local_138,local_f8,fVar8 * 360.0,&DAT_1464aa7b8);
  uVar4 = FVector::RotateAngleAxis
                    (local_128,local_138,*(undefined4 *)(param_1 + 0x1768),&DAT_1464aa7a8);
  uVar3 = FRotationMatrix::MakeFromXY(local_e8,uVar4,uVar3);
  puVar5 = (undefined8 *)FMatrix::Rotator(uVar3,local_128);
  fVar13 = -1.0;
  *(undefined8 *)(param_1 + 0x1748) = *puVar5;
  *(undefined4 *)(param_1 + 0x1750) = *(undefined4 *)(puVar5 + 1);
  fVar8 = *(float *)(*(longlong *)(param_1 + 0x1680) + 0x770) * 0.011111111 +
          *(float *)(*(longlong *)(param_1 + 0x1680) + 0x6ec);
  if (-1.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = -1.0;
  }
  fVar8 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x177c),fVar8 * *(float *)(param_1 + 0x308)
                               ,param_1 + 0x1774);
  *(float *)(param_1 + 0x177c) = fVar8;
  *(float *)(param_1 + 0x1750) = fVar8 + *(float *)(param_1 + 0x1750);
  fVar8 = *(float *)(param_1 + 0x304);
  if (*(char *)(*(longlong *)(param_1 + 0x1680) + 0x6df) == '\0') {
    fVar8 = -fVar8;
  }
  fVar10 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x1780),
                                fVar8 * *(float *)(*(longlong *)(param_1 + 0x1680) + 0x6e8),
                                param_1 + 0x1778);
  fVar8 = *(float *)(param_1 + 0x1734);
  *(float *)(param_1 + 0x1780) = fVar10;
  *(float *)(param_1 + 0x1748) = (fVar10 + *(float *)(param_1 + 0x1748)) * fVar8;
  *(float *)(param_1 + 0x1750) = fVar8 * *(float *)(param_1 + 0x1750);
  *(float *)(param_1 + 0x174c) = fVar8 * *(float *)(param_1 + 0x174c);
  lVar2 = *(longlong *)(param_1 + 0x1680);
  fVar8 = *(float *)(lVar2 + 0x768);
  fVar10 = *(float *)(lVar2 + 0x76c);
  if (fVar10 * fVar10 + fVar8 * fVar8 <= 3600.0) {
    fVar10 = -1.0;
    fVar9 = 1.0;
    fVar15 = 1.0;
  }
  else {
    if (1e-08 < ABS(fVar10)) {
      fVar9 = _guard_xfg_dispatch_icall_nop(ABS(fVar8) / ABS(fVar10));
      fVar9 = fVar9 * 57.295776;
      if (35.0 <= fVar9) {
        if (65.0 <= fVar9) {
          if (fVar8 <= 0.0) {
            fVar10 = fVar13;
            fVar9 = fVar13;
            fVar15 = fVar13;
            if (0.0 <= fVar8) {
              fVar13 = 0.0;
              fVar10 = fVar13;
              fVar9 = fVar13;
              fVar15 = fVar13;
            }
          }
          else {
            fVar13 = 1.0;
            fVar10 = 1.0;
            fVar9 = 1.0;
            fVar15 = 1.0;
          }
        }
        else {
          fVar9 = (fVar9 - 35.0) * 0.033333335;
          if (0.0 <= fVar9) {
            if (1.0 <= fVar9) {
              fVar9 = 1.0;
            }
          }
          else {
            fVar9 = 0.0;
          }
          if (fVar10 <= 0.0) {
            if (0.0 <= fVar10) {
              fVar13 = 0.0;
            }
            else {
              fVar13 = -1.0;
            }
          }
          else {
            fVar13 = 1.0;
          }
          if (fVar8 <= 0.0) {
            if (0.0 <= fVar8) {
              fVar8 = 0.0;
            }
            else {
              fVar8 = -1.0;
            }
          }
          else {
            fVar8 = 1.0;
          }
          fVar10 = (fVar8 + fVar13) * fVar9 - fVar13;
          fVar13 = (fVar8 - fVar13) * fVar9 + fVar13;
          fVar9 = fVar13;
          fVar15 = fVar10;
        }
        goto LAB_141252e68;
      }
    }
    if (fVar10 <= 0.0) {
      if (0.0 <= fVar10) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = -1.0;
      }
    }
    else {
      fVar10 = 1.0;
    }
    fVar13 = -fVar10;
    fVar9 = fVar13;
    fVar15 = fVar10;
  }
LAB_141252e68:
  fVar8 = *(float *)(lVar2 + 0x770);
  fVar14 = *(float *)(param_1 + 0x310);
  fVar11 = (ABS(fVar8) - 20.0) * 0.00625;
  if (0.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
  }
  else {
    fVar11 = 0.0;
  }
  if (fVar8 <= 0.0) {
    if (0.0 <= fVar8) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = -fVar14;
    }
  }
  uVar12 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x173c),fVar14 * fVar11,param_2);
  lVar2 = *(longlong *)(param_1 + 0x1680);
  fVar8 = *(float *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x173c) = uVar12;
  fVar14 = SQRT(*(float *)(lVar2 + 0x72c) * *(float *)(lVar2 + 0x72c) +
                *(float *)(lVar2 + 0x730) * *(float *)(lVar2 + 0x730) +
                *(float *)(lVar2 + 0x734) * *(float *)(lVar2 + 0x734));
  if (0.0 <= fVar14) {
    fVar11 = fVar8;
    if (fVar14 <= fVar8) {
      fVar11 = fVar14;
    }
  }
  else {
    fVar11 = 0.0;
  }
  fVar11 = fVar11 / fVar8;
  uVar12 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1794),fVar10,param_2);
  *(undefined4 *)(param_1 + 0x1794) = uVar12;
  uVar12 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x1798),fVar13,param_2);
  *(undefined4 *)(param_1 + 0x1798) = uVar12;
  uVar12 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x179c),fVar9,param_2);
  *(undefined4 *)(param_1 + 0x179c) = uVar12;
  fVar13 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x17a0),fVar15,param_2);
  fVar8 = *(float *)(param_1 + 0x173c);
  fVar14 = 1.0 - fVar11;
  *(float *)(param_1 + 0x17a0) = fVar13;
  fVar15 = *(float *)(param_1 + 0x1784) -
           (*(float *)(param_1 + 0x1794) * *(float *)(param_1 + 0x30c) * fVar11 +
            fVar14 * *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x1794) + fVar8) * param_2 *
           *(float *)(param_1 + 0x1734);
  *(float *)(param_1 + 0x1784) = fVar15;
  fVar9 = *(float *)(param_1 + 0x1790) -
          ((fVar13 * *(float *)(param_1 + 0x30c) * fVar11 +
           fVar14 * *(float *)(param_1 + 0x2f0) * fVar13) - fVar8) * param_2 *
          *(float *)(param_1 + 0x1734);
  *(float *)(param_1 + 0x1790) = fVar9;
  fVar10 = *(float *)(param_1 + 0x1788) -
           ((*(float *)(param_1 + 0x1798) * *(float *)(param_1 + 0x30c) * fVar11 +
            fVar14 * *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x1798)) - fVar8) * param_2
           * *(float *)(param_1 + 0x1734);
  *(float *)(param_1 + 0x1788) = fVar10;
  fVar13 = *(float *)(param_1 + 0x178c) -
           (*(float *)(param_1 + 0x179c) * *(float *)(param_1 + 0x30c) * fVar11 +
            fVar14 * *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x179c) + fVar8) * param_2 *
           *(float *)(param_1 + 0x1734);
  *(float *)(param_1 + 0x178c) = fVar13;
  fVar8 = (float)(int)(fVar15 * 0.0027777778) * 360.0;
  if (ABS(fVar15) < ABS(fVar8)) {
    fVar8 = fVar15;
  }
  fVar15 = fVar15 - fVar8;
  if (fVar15 < 0.0) {
    fVar15 = fVar15 + 360.0;
  }
  if (180.0 < fVar15) {
    fVar15 = fVar15 - 360.0;
  }
  *(float *)(param_1 + 0x1784) = fVar15;
  fVar8 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
  if (ABS(fVar9) < ABS(fVar8)) {
    fVar8 = fVar9;
  }
  fVar9 = fVar9 - fVar8;
  if (fVar9 < 0.0) {
    fVar9 = fVar9 + 360.0;
  }
  if (180.0 < fVar9) {
    fVar9 = fVar9 - 360.0;
  }
  *(float *)(param_1 + 0x1790) = fVar9;
  fVar8 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar8)) {
    fVar8 = fVar10;
  }
  fVar10 = fVar10 - fVar8;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (180.0 < fVar10) {
    fVar10 = fVar10 - 360.0;
  }
  *(float *)(param_1 + 0x1788) = fVar10;
  fVar8 = (float)(int)(fVar13 * 0.0027777778) * 360.0;
  if (ABS(fVar13) < ABS(fVar8)) {
    fVar8 = fVar13;
  }
  fVar13 = fVar13 - fVar8;
  if (fVar13 < 0.0) {
    fVar13 = fVar13 + 360.0;
  }
  if (180.0 < fVar13) {
    fVar13 = fVar13 - 360.0;
  }
  *(float *)(param_1 + 0x178c) = fVar13;
  return;
}



// FUNCTION 1412533c0 FUN_1412533c0 body=1482 status=ok
// SIG undefined FUN_1412533c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412533c0(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float local_res8 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [40];
  float local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [176];
  
  if (*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e3) == '\0') {
LAB_141253932:
    *(undefined4 *)(param_1 + 0x41c) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)(param_1 + 0x420) = DAT_1468b5d88._4_4_;
    *(undefined8 *)(param_1 + 0x410) = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0x418) = DAT_1468b5da8;
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6e2) == '\0') {
      if (*(float *)(param_1 + 0x3f4) <= 0.0) goto LAB_141253932;
      uVar10 = 0;
    }
    else {
      uVar10 = 0x3f800000;
    }
    fVar7 = (float)FMath::FInterpTo(*(float *)(param_1 + 0x3f4),uVar10,param_2,0x40a00000);
    *(float *)(param_1 + 0x3f4) = fVar7;
    fVar7 = fVar7 * *(float *)(param_1 + 0x2d4);
    *(float *)(param_1 + 0x3fc) = fVar7 * 0.017453292;
    *(float *)(param_1 + 0x3f8) = fVar7 * -0.017453292;
    fVar7 = ABS(*(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6ec)) +
            ABS(*(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6e8));
    if (0.0 <= fVar7) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = 0.0;
    }
    fVar8 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x434),fVar7,param_2,0x40400000);
    fVar7 = *(float *)(param_1 + 0x3f4);
    *(float *)(param_1 + 0x434) = fVar8;
    fVar11 = *(float *)(param_1 + 0x400) -
             ABS(((1.0 - fVar8) * *(float *)(param_1 + 0x2d8) + fVar8 * *(float *)(param_1 + 0x2dc))
                 * fVar7 * param_2);
    fVar8 = (float)(int)(fVar11 * 0.0027777778) * 360.0;
    if (ABS(fVar11) < ABS(fVar8)) {
      fVar8 = fVar11;
    }
    fVar11 = fVar11 - fVar8;
    if (fVar11 < 0.0) {
      fVar11 = fVar11 + 360.0;
    }
    if (180.0 < fVar11) {
      fVar11 = fVar11 - 360.0;
    }
    *(float *)(param_1 + 0x400) = fVar11;
    *(undefined8 *)(param_1 + 0x404) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x40c) = DAT_1468b5d98;
    pfVar5 = *(float **)(param_1 + 0x2f8);
    pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x300) * 7;
    if (pfVar5 != pfVar6) {
      do {
        fVar7 = *pfVar5;
        fVar8 = pfVar5[1];
        fVar11 = pfVar5[2];
        local_d0 = pfVar5[6];
        uVar2 = *(undefined8 *)(pfVar5 + 4);
        fVar9 = _guard_xfg_dispatch_icall_nop
                          (*(float *)(param_1 + 0x3a8) * 0.10471976 *
                           (float)((ulonglong)uVar2 >> 0x20) + pfVar5[3]);
        pfVar5 = pfVar5 + 7;
        fVar9 = (fVar9 * local_d0 + (float)uVar2) * *(float *)(param_1 + 0x3f4);
        *(float *)(param_1 + 0x404) = fVar7 * fVar9 + *(float *)(param_1 + 0x404);
        *(float *)(param_1 + 0x408) = fVar8 * fVar9 + *(float *)(param_1 + 0x408);
        *(float *)(param_1 + 0x40c) = fVar11 * fVar9 + *(float *)(param_1 + 0x40c);
      } while (pfVar5 != pfVar6);
      fVar7 = *(float *)(param_1 + 0x3f4);
    }
    uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x330);
    fVar7 = (float)FRichCurve::Eval(uVar2,fVar7,0);
    *(float *)(param_1 + 0x40c) = fVar7 + *(float *)(param_1 + 0x40c);
    fVar7 = modff(((param_2 * 90.0) / *(float *)(param_1 + 0x308) + *(float *)(param_1 + 0x41c)) *
                  0.0027777778,local_res8);
    *(float *)(param_1 + 0x41c) = fVar7 * 360.0;
    fVar7 = modff(((param_2 * 90.0) / *(float *)(param_1 + 0x30c) + *(float *)(param_1 + 0x420)) *
                  0.0027777778,local_res8);
    *(float *)(param_1 + 0x420) = fVar7 * 360.0;
    FVector::RotateAngleAxis
              (&DAT_1464aa7a8,local_f8,*(undefined4 *)(param_1 + 0x308),&DAT_1464aa798);
    FVector::RotateAngleAxis
              (&DAT_1464aa7b8,local_108,*(undefined4 *)(param_1 + 0x30c),&DAT_1464aa798);
    uVar2 = FVector::RotateAngleAxis(local_108,local_c8,fVar7 * 360.0,&DAT_1464aa7b8);
    uVar3 = FVector::RotateAngleAxis
                      (local_f8,local_108,*(undefined4 *)(param_1 + 0x41c),&DAT_1464aa7a8);
    uVar2 = FRotationMatrix::MakeFromXY(local_b8,uVar3,uVar2);
    puVar4 = (undefined8 *)FMatrix::Rotator(uVar2,local_f8);
    *(undefined8 *)(param_1 + 0x410) = *puVar4;
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(puVar4 + 1);
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x770) * 0.011111111 +
            *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6ec);
    fVar7 = -1.0;
    if ((-1.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
      fVar7 = 1.0;
    }
    fVar7 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x42c),
                                 fVar7 * *(float *)(param_1 + 0x314),param_1 + 0x424,
                                 *(undefined4 *)(param_1 + 800),0x459c4000,param_2);
    *(float *)(param_1 + 0x42c) = fVar7;
    *(float *)(param_1 + 0x418) = fVar7 + *(float *)(param_1 + 0x418);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6df);
    if (cVar1 == '\0') {
      uVar10 = *(undefined4 *)(param_1 + 0x318);
    }
    else {
      uVar10 = *(undefined4 *)(param_1 + 0x31c);
    }
    fVar7 = *(float *)(param_1 + 0x310);
    if (cVar1 == '\0') {
      fVar7 = -fVar7;
    }
    fVar8 = (float)FUN_1408d8300(*(undefined4 *)(param_1 + 0x430),
                                 fVar7 * *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6e8),
                                 param_1 + 0x428,uVar10,0x459c4000,param_2);
    fVar7 = *(float *)(param_1 + 0x3f4);
    *(float *)(param_1 + 0x430) = fVar8;
    *(float *)(param_1 + 0x410) = (fVar8 + *(float *)(param_1 + 0x410)) * fVar7;
    *(float *)(param_1 + 0x414) = fVar7 * *(float *)(param_1 + 0x414);
    *(float *)(param_1 + 0x418) = fVar7 * *(float *)(param_1 + 0x418);
  }
  return;
}



// FUNCTION 141253990 FUN_141253990 body=766 status=ok
// SIG undefined FUN_141253990(void)

void FUN_141253990(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 in_RDX;
  longlong *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  longlong local_48;
  float local_40;
  undefined1 local_3c [52];
  
  fVar7 = *(float *)(param_1 + 0xcd);
  lVar1 = param_1[0xd7];
  *(float *)(param_1 + 0xcd) = param_2 + fVar7;
  *(float *)(param_1 + 0xd1) = param_2 + *(float *)(param_1 + 0xd1);
  cVar2 = FUN_141255d90(param_2 + fVar7,in_RDX,param_1 + 0xd2);
  if ((char)lVar1 == '\0') {
    if (cVar2 != '\0') {
      cVar2 = FUN_141240d40(param_1);
      if (cVar2 == '\0') {
        local_40 = *(float *)((longlong)param_1 + 0x6c4);
        lVar1 = *(longlong *)((longlong)param_1 + 0x6bc);
        pfVar3 = (float *)FUN_141225d50(param_1,local_3c);
        fVar7 = *pfVar3 - (float)lVar1;
        fVar8 = pfVar3[1] - (float)((ulonglong)lVar1 >> 0x20);
        local_48 = lVar1;
        if (fVar8 * fVar8 + fVar7 * fVar7 + (pfVar3[2] - local_40) * (pfVar3[2] - local_40) <= 1.0)
        {
          *(undefined1 *)(param_1 + 0xd7) = 1;
        }
        else if ((char)param_1[0x25] == '\x03') {
          *(undefined1 *)(param_1 + 0xd7) = 1;
          FUN_141225d50(param_1,&local_48);
LAB_141253b53:
          param_1[0xd2] = local_48;
          *(float *)(param_1 + 0xd3) = local_40;
          param_1[0xcf] = *(longlong *)((longlong)param_1 + 0x6bc);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)((longlong)param_1 + 0x6c4);
          *(undefined4 *)((longlong)param_1 + 0x684) = 0;
          FUN_1413e7800(param_1,param_1[0xdf]);
        }
      }
      else {
LAB_141253acd:
        if (*(float *)((longlong)param_1 + 0x674) < *(float *)(param_1 + 0xcd)) {
          *(undefined4 *)(param_1 + 0xcd) = 0;
          local_res8 = 0xffffffffffffffff;
          uVar6 = FUN_142de77e0(param_1 + 0x92,param_1,param_1[0xdf],&local_res8);
          *(undefined4 *)((longlong)param_1 + 0x674) = uVar6;
          if ((char)param_1[0x25] == '\x03') {
            *(undefined1 *)(param_1 + 0xd7) = 0;
            FUN_141227a20(param_1,&local_48,*(undefined4 *)((longlong)param_1 + 0x51c),
                          (int)param_1[0xa4],0);
            goto LAB_141253b53;
          }
        }
      }
    }
LAB_141253be5:
    FUN_141251920(param_1,param_2);
    FUN_141255b20(param_1,param_2);
    cVar2 = (**(code **)(*param_1 + 0x6e8))(param_1);
    if ((cVar2 != '\0') && (*(int *)((longlong)param_1 + 0x664) != 4)) {
      plVar5 = (longlong *)param_1[0xc9];
      if ((longlong *)param_1[0xc9] == (longlong *)0x0) {
        plVar5 = param_1 + 0xc2;
      }
      if ((code *)plVar5[*(int *)((longlong)param_1 + 0x664)] != (code *)0x0) {
        (*(code *)plVar5[*(int *)((longlong)param_1 + 0x664)])(param_1,4);
      }
      plVar5 = (longlong *)param_1[0xb7];
      if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
        plVar5 = param_1 + 0xb0;
      }
      if ((code *)plVar5[4] != (code *)0x0) {
        (*(code *)plVar5[4])(param_1,*(undefined4 *)((longlong)param_1 + 0x664));
      }
      *(undefined4 *)((longlong)param_1 + 0x664) = 4;
    }
  }
  else {
    if (cVar2 == '\0') {
      fVar7 = *(float *)((longlong)param_1 + 0x684) + *(float *)(param_1 + 0xa7);
      if (fVar7 < *(float *)(param_1 + 0xa3) || fVar7 == *(float *)(param_1 + 0xa3))
      goto LAB_141253be5;
    }
    else {
      cVar2 = FUN_141240d40(param_1);
      if (cVar2 != '\0') goto LAB_141253acd;
      puVar4 = (undefined8 *)FUN_141225d50(param_1,local_3c);
      *(undefined8 *)((longlong)param_1 + 0x6bc) = *puVar4;
      *(undefined4 *)((longlong)param_1 + 0x6c4) = *(undefined4 *)(puVar4 + 1);
    }
    FUN_141240160(param_1,5);
  }
  return;
}



// FUNCTION 141253c90 FUN_141253c90 body=325 status=ok
// SIG undefined FUN_141253c90(void)

void FUN_141253c90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (param_1[0x26] != 0) {
    lVar6 = param_1[0xd1];
    plVar1 = (longlong *)param_1[0xd0];
    for (plVar9 = plVar1; plVar9 != plVar1 + (longlong)(int)lVar6 * 7; plVar9 = plVar9 + 7) {
      lVar10 = *plVar9;
      lVar2 = param_1[0x26];
      if (lVar10 != 0) {
        lVar5 = FUN_142956f50();
        lVar7 = lVar10;
        do {
          if (lVar7 == lVar5) goto LAB_141253d07;
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
      lVar10 = 0;
LAB_141253d07:
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar8 = (int)(((longlong)plVar9 - (longlong)plVar1) / 0x38);
        goto LAB_141253d43;
      }
    }
    iVar8 = -1;
LAB_141253d43:
    iVar4 = FUN_141229150();
    if ((iVar4 < 0) || ((int)param_1[0xd1] <= iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar8 != iVar4)) {
      (**(code **)(*param_1 + 0x7d8))(param_1);
      lVar6 = (**(code **)(*param_1 + 2000))(param_1);
      param_1[0x26] = lVar6;
      FUN_14269b8a0(param_1);
    }
    *(undefined1 *)(param_1 + 0x25d) = 1;
  }
  return;
}



// FUNCTION 141253de0 FUN_141253de0 body=2649 status=ok
// SIG undefined FUN_141253de0(void)

void FUN_141253de0(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  float local_c8 [4];
  undefined1 local_b8 [176];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    *(longlong *)(param_1 + 0x180) = lVar4;
    fVar1 = *(float *)(param_2 + 2);
    *(float *)(param_1 + 0x188) = fVar1 + *(float *)(param_1 + 0x188);
    if (*(int *)(lVar4 + 0x6d0) == 10) {
      lVar3 = (longlong)*(int *)(param_1 + 400) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x19c) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x19c) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1a0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1ac) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1ac) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1b0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1bc) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1bc) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1c0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1cc) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1cc) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1dc) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1dc) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1e0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1ec) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1ec) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x1f0) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 500) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x1fc) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1fc) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x200) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x20c) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x20c) = fVar5;
      lVar3 = (longlong)*(int *)(param_1 + 0x210) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(lVar3 + 0x18);
      fVar5 = *(float *)(lVar3 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x21c) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar3,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x21c) = fVar5;
      lVar4 = (longlong)*(int *)(param_1 + 0x220) * 0x20 + *(longlong *)(lVar4 + 0x6c8);
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar4 + 0x14);
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(lVar4 + 0x18);
      fVar5 = *(float *)(lVar4 + 0x1c);
      if (fVar5 - *(float *)(param_1 + 0x22c) < 0.0) {
        fVar5 = (float)FMath::FInterpConstantTo(lVar4,fVar5,fVar1,*(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x22c) = fVar5;
      uVar6 = FMath::FInterpTo();
      *(undefined4 *)(param_1 + 0x18c) = uVar6;
    }
    uVar6 = FMath::FInterpTo();
    *(undefined4 *)(param_1 + 0x1a6c) = uVar6;
    lVar4 = *(longlong *)(param_1 + 0x180);
    if (*(char *)(lVar4 + 0x6e3) == '\0') {
      FUN_141250500(param_1,fVar1);
    }
    else {
      puVar2 = (undefined8 *)
               FVector::RotateAngleAxis
                         (&DAT_1464aa7a8,local_c8,*(undefined4 *)(param_1 + 0x168),&DAT_1464aa798);
      *(undefined8 *)(param_1 + 0x1aa0) = *puVar2;
      *(undefined4 *)(param_1 + 0x1aa8) = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)
               FVector::RotateAngleAxis
                         (&DAT_1464aa7b8,local_c8,*(undefined4 *)(param_1 + 0x16c),&DAT_1464aa798);
      *(undefined8 *)(param_1 + 0x1aac) = *puVar2;
      *(undefined4 *)(param_1 + 0x1ab4) = *(undefined4 *)(puVar2 + 1);
      FUN_141251a20(param_1,fVar1,lVar4);
      lVar4 = *(longlong *)(param_1 + 0x180);
      if (*(char *)(lVar4 + 0x6e2) == '\0') {
        local_c8[2] = *(float *)(lVar4 + 0x6ec);
      }
      else {
        local_c8[2] = *(float *)(lVar4 + 0x7e0);
      }
      if (*(char *)(lVar4 + 0x6e2) == '\0') {
        local_c8[0] = *(float *)(lVar4 + 0x6e8);
      }
      else {
        local_c8[0] = *(float *)(lVar4 + 0x7e4);
      }
      local_c8[2] = local_c8[2] * 30.0;
      local_c8[1] = 0.0;
      local_c8[0] = local_c8[0] * -30.0;
      puVar2 = (undefined8 *)FMath::RInterpTo(local_b8,param_1 + 0x1ab8,local_c8,fVar1,0x40000000);
      *(undefined8 *)(param_1 + 0x1ab8) = *puVar2;
      *(undefined4 *)(param_1 + 0x1ac0) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)(param_1 + 0x1ac8) = 0;
      *(float *)(param_1 + 0x1acc) = *(float *)(param_1 + 0x1ac0) * 0.25;
      *(float *)(param_1 + 0x1ac4) = *(float *)(param_1 + 0x1ab8) * 0.05;
    }
  }
  return;
}



// FUNCTION 141254840 FUN_141254840 body=47 status=ok
// SIG undefined FUN_141254840(void)

void FUN_141254840(longlong param_1,longlong *param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*param_2 != 0) {
    *(longlong *)(param_1 + 0x9a0) = *param_2;
  }
  return;
}



// FUNCTION 141254870 FUN_141254870 body=1039 status=ok
// SIG undefined FUN_141254870(void)

void FUN_141254870(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    *(longlong *)(param_1 + 0x1680) = lVar3;
    fVar1 = *(float *)(param_2 + 2);
    *(float *)(param_1 + 0x1688) = fVar1 + *(float *)(param_1 + 0x1688);
    if (*(int *)(lVar3 + 0x6d0) == 4) {
      lVar2 = (longlong)*(int *)(param_1 + 0x168c) * 0x20 + *(longlong *)(lVar3 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x1694) = *(undefined4 *)(lVar2 + 0x18);
      fVar4 = *(float *)(lVar2 + 0x1c);
      if (fVar4 - *(float *)(param_1 + 0x1698) < 0.0) {
        fVar4 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x1698),fVar4,fVar1,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1698) = fVar4;
      lVar2 = (longlong)*(int *)(param_1 + 0x16b4) * 0x20 + *(longlong *)(lVar3 + 0x6c8);
      *(undefined4 *)(param_1 + 0x16b8) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x16bc) = *(undefined4 *)(lVar2 + 0x18);
      fVar4 = *(float *)(lVar2 + 0x1c);
      if (fVar4 - *(float *)(param_1 + 0x16c0) < 0.0) {
        fVar4 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x16c0),fVar4,fVar1,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x16c0) = fVar4;
      lVar2 = (longlong)*(int *)(param_1 + 0x16dc) * 0x20 + *(longlong *)(lVar3 + 0x6c8);
      *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(lVar2 + 0x18);
      fVar4 = *(float *)(lVar2 + 0x1c);
      if (fVar4 - *(float *)(param_1 + 0x16e8) < 0.0) {
        fVar4 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x16e8),fVar4,fVar1,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x16e8) = fVar4;
      lVar2 = (longlong)*(int *)(param_1 + 0x1704) * 0x20 + *(longlong *)(lVar3 + 0x6c8);
      *(undefined4 *)(param_1 + 0x1708) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x170c) = *(undefined4 *)(lVar2 + 0x18);
      fVar4 = *(float *)(lVar2 + 0x1c);
      if (fVar4 - *(float *)(param_1 + 0x1710) < 0.0) {
        fVar4 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x1710),fVar4,fVar1,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x1710) = fVar4;
      if (*(char *)(*(longlong *)(param_1 + 0x1680) + 0x6e2) == '\0') {
        uVar5 = *(undefined4 *)
                 ((longlong)*(int *)(param_1 + 0x168c) * 0x20 + 0xc + *(longlong *)(lVar3 + 0x6c8));
      }
      else {
        uVar5 = 0;
      }
      uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x17ac),uVar5,fVar1,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x1680) + 0x6f0));
      *(undefined4 *)(param_1 + 0x17ac) = uVar5;
      uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x17b0),
                               *(undefined4 *)
                                ((longlong)*(int *)(param_1 + 0x16dc) * 0x20 +
                                 *(longlong *)(lVar3 + 0x6c8) + 0xc),fVar1,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x1680) + 0x6f0));
      *(undefined4 *)(param_1 + 0x17b0) = uVar5;
      uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x17a8),
                               *(float *)(*(longlong *)(param_1 + 0x1680) + 0x6ec) *
                               *(float *)(param_1 + 600) * -0.017453292,fVar1,
                               *(undefined4 *)(*(longlong *)(param_1 + 0x1680) + 0x6f0));
      lVar3 = *(longlong *)(param_1 + 0x1680);
      *(undefined4 *)(param_1 + 0x17a8) = uVar5;
    }
    if ((*(char *)(lVar3 + 0x6df) == '\0') && (*(char *)(lVar3 + 0x6e0) == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3f800000;
    }
    fVar4 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x17b4),uVar5,fVar1,
                                    *(undefined4 *)(param_1 + 0x15c));
    *(float *)(param_1 + 0x17b4) = fVar4;
    *(ulonglong *)(param_1 + 0x182c) =
         CONCAT44(fVar4 * *(float *)(param_1 + 0x260),fVar4 * *(float *)(param_1 + 0x25c));
    *(float *)(param_1 + 0x1834) = fVar4 * *(float *)(param_1 + 0x264);
    lVar3 = *(longlong *)(param_1 + 0x1680);
    if (((*(char *)(lVar3 + 0x6de) == '\0') && (0.9 < *(float *)(lVar3 + 0x6e8))) &&
       (*(char *)(lVar3 + 0x6e2) == '\0')) {
      fVar4 = fVar1;
      if (*(char *)(lVar3 + 0x6e1) == '\0') {
        fVar4 = -fVar1;
      }
      *(float *)(param_1 + 0x17a4) =
           fVar4 * *(float *)(lVar3 + 0x774) + *(float *)(param_1 + 0x17a4);
    }
    fVar4 = *(float *)(param_1 + 0x17a4);
    fVar6 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
    if (ABS(fVar4) < ABS(fVar6)) {
      fVar6 = fVar4;
    }
    fVar4 = fVar4 - fVar6;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    if (180.0 < fVar4) {
      fVar4 = fVar4 - 360.0;
    }
    *(float *)(param_1 + 0x17a4) = fVar4;
    FUN_141252870(param_1,fVar1);
    FUN_14124efb0(param_1,fVar1);
    FUN_14124f8a0(param_1,fVar1);
  }
  return;
}



// FUNCTION 141254c80 FUN_141254c80 body=577 status=ok
// SIG undefined FUN_141254c80(void)

void FUN_141254c80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x420) = lVar1;
    fVar5 = *(float *)(param_2 + 2);
    if (*(char *)(lVar1 + 0x6dc) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x42c),uVar4,fVar5,0x41200000);
    *(undefined4 *)(param_1 + 0x42c) = uVar4;
    uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x428),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x420) + 0x6e8),fVar5,
                             0x41200000);
    lVar1 = *(longlong *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x428) = uVar4;
    if (*(char *)(lVar1 + 0x6e2) == '\0') {
      fVar2 = *(float *)(lVar1 + 0x6e8);
    }
    else {
      fVar2 = ABS(*(float *)(lVar1 + 0x6ec));
      if (ABS(*(float *)(lVar1 + 0x6ec)) <= ABS(*(float *)(lVar1 + 0x6e8))) {
        fVar2 = ABS(*(float *)(lVar1 + 0x6e8));
      }
    }
    fVar6 = (1.0 - fVar2) * *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x42c) +
            fVar2 * *(float *)(param_1 + 0x45c);
    fVar5 = ((1.0 - fVar2) * *(float *)(param_1 + 0x46c) * *(float *)(param_1 + 0x42c) +
            fVar2 * *(float *)(param_1 + 0x468)) * fVar5;
    fVar2 = (float)FUN_1408d8c50(fVar5,1,0x3f000000,fVar6);
    *(float *)(param_1 + 0x430) = fVar2;
    *(undefined8 *)(param_1 + 0x43c) = 0;
    *(float *)(param_1 + 0x434) = fVar2 * *(float *)(param_1 + 0x454);
    *(float *)(param_1 + 0x444) = fVar2;
    if (ABS(*(float *)(param_1 + 0x438)) < 3600.0) {
      fVar2 = ((*(float *)(param_1 + 0x438) - *(float *)(param_1 + 0x428) * 30.0) - 10.0) *
              *(float *)(param_1 + 0x42c);
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x438) = fVar2;
    uVar3 = FUN_1408d8c50(fVar5 * *(float *)(param_1 + 0x470),1,0x3dcccccd,
                          fVar6 * *(float *)(param_1 + 0x464));
    *(ulonglong *)(param_1 + 0x448) = (ulonglong)uVar3;
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}



// FUNCTION 141254ed0 FUN_141254ed0 body=1082 status=ok
// SIG undefined FUN_141254ed0(void)

void FUN_141254ed0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_78 [112];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    *(longlong *)(param_1 + 0x590) = lVar4;
    fVar8 = *(float *)(param_2 + 2);
    uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x210),
                             *(float *)(lVar4 + 0x6ec) * *(float *)(param_1 + 0x140) * 0.017453292,
                             fVar8);
    lVar4 = *(longlong *)(param_1 + 0x590);
    *(undefined4 *)(param_1 + 0x210) = uVar5;
    fVar6 = *(float *)(lVar4 + 0x708) - *(float *)(param_1 + 0x22c);
    if (fVar6 != 0.0) {
      if (*(char *)(lVar4 + 0x6df) == '\0') {
        fVar6 = (fVar6 / fVar8) * 0.01;
      }
      else {
        fVar6 = 20.0;
      }
      uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x254),fVar6,fVar8);
      *(undefined4 *)(param_1 + 0x254) = uVar5;
      uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x198);
      local_88 = (float)FRichCurve::Eval(uVar1,uVar5,0);
      lVar4 = *(longlong *)(param_1 + 0x590);
      if ((*(char *)(lVar4 + 0x6e3) != '\0') && (*(char *)(lVar4 + 0x6df) == '\0')) {
        local_88 = -local_88;
      }
      local_88 = local_88 - *(float *)(lVar4 + 0x714);
      uStack_84 = 0;
      uStack_80 = 0;
      puVar2 = (undefined8 *)FMath::RInterpTo(local_78,param_1 + 0x248,&local_88);
      lVar4 = *(longlong *)(param_1 + 0x590);
      *(undefined8 *)(param_1 + 0x248) = *puVar2;
      *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(lVar4 + 0x708);
    }
    if (*(char *)(lVar4 + 0x6e3) == '\0') {
      uStack_80 = *(undefined4 *)(param_1 + 0x228);
      local_88 = (float)*(undefined8 *)(param_1 + 0x220);
      uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x220) >> 0x20);
      puVar2 = (undefined8 *)FMath::VInterpConstantTo(local_78,&local_88,lVar4 + 0x77c);
      *(undefined8 *)(param_1 + 0x220) = *puVar2;
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(puVar2 + 1);
    }
    else {
      FUN_141251fb0(param_1,fVar8);
    }
    lVar4 = *(longlong *)(param_1 + 0x590);
    if ((0.9 < *(float *)(lVar4 + 0x6e8)) && (*(char *)(lVar4 + 0x6e2) == '\0')) {
      fVar6 = fVar8;
      if (*(char *)(lVar4 + 0x6e1) != '\0') {
        fVar6 = -fVar8;
      }
      *(float *)(param_1 + 0x214) = fVar6 * *(float *)(lVar4 + 0x774) + *(float *)(param_1 + 0x214);
    }
    fVar6 = *(float *)(param_1 + 0x214);
    fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar7)) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
    *(float *)(param_1 + 0x214) = fVar6;
    if (1e-08 < *(float *)(lVar4 + 0x788)) {
      pfVar3 = (float *)FRotator::Quaternion(lVar4 + 0x714,local_78);
      fVar6 = pfVar3[2];
      fVar7 = fVar6 + fVar6;
      lVar4 = *(longlong *)(param_1 + 0x590);
      fVar9 = -pfVar3[1];
      fVar9 = fVar9 + fVar9;
      fVar6 = *(float *)(param_1 + 0x23c) -
              ((pfVar3[3] * fVar7 - *pfVar3 * fVar9) * *(float *)(lVar4 + 0x73c) +
               ((pfVar3[1] * fVar9 - fVar6 * fVar7) + 1.0) * *(float *)(lVar4 + 0x738) +
              (pfVar3[3] * fVar9 + *pfVar3 * fVar7) * *(float *)(lVar4 + 0x740)) * fVar8 *
              (57.295776 / *(float *)(lVar4 + 0x788));
      fVar8 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
      if (ABS(fVar6) < ABS(fVar8)) {
        fVar8 = fVar6;
      }
      fVar6 = fVar6 - fVar8;
      if (fVar6 < 0.0) {
        fVar6 = fVar6 + 360.0;
      }
      if (180.0 < fVar6) {
        fVar6 = fVar6 - 360.0;
      }
      *(float *)(param_1 + 0x23c) = fVar6;
    }
  }
  return;
}



// FUNCTION 141255310 FUN_141255310 body=1573 status=ok
// SIG undefined FUN_141255310(void)

void FUN_141255310(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  *(longlong *)(param_1 + 0x2d20) = lVar1;
  fVar7 = *(float *)(param_2 + 2);
  *(float *)(param_1 + 0x3a8) = fVar7 + *(float *)(param_1 + 0x3a8);
  if (*(int *)(lVar1 + 0x6d0) == 4) {
    lVar2 = (longlong)*(int *)(param_1 + 0x3ac) * 0x20 + *(longlong *)(lVar1 + 0x6c8);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(lVar2 + 0x18);
    fVar3 = *(float *)(lVar2 + 0x1c);
    if (fVar3 - *(float *)(param_1 + 0x3b8) < 0.0) {
      fVar3 = (float)FMath::FInterpConstantTo
                               (*(float *)(param_1 + 0x3b8),fVar3,fVar7,
                                *(undefined4 *)(param_1 + 0x140));
    }
    *(float *)(param_1 + 0x3b8) = fVar3;
    lVar2 = (longlong)*(int *)(param_1 + 0x3bc) * 0x20 + *(longlong *)(lVar1 + 0x6c8);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(lVar2 + 0x18);
    fVar3 = *(float *)(lVar2 + 0x1c);
    if (fVar3 - *(float *)(param_1 + 0x3c8) < 0.0) {
      fVar3 = (float)FMath::FInterpConstantTo
                               (*(float *)(param_1 + 0x3c8),fVar3,fVar7,
                                *(undefined4 *)(param_1 + 0x140));
    }
    *(float *)(param_1 + 0x3c8) = fVar3;
    lVar2 = (longlong)*(int *)(param_1 + 0x3cc) * 0x20 + *(longlong *)(lVar1 + 0x6c8);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(lVar2 + 0x18);
    fVar3 = *(float *)(lVar2 + 0x1c);
    if (fVar3 - *(float *)(param_1 + 0x3d8) < 0.0) {
      fVar3 = (float)FMath::FInterpConstantTo
                               (*(float *)(param_1 + 0x3d8),fVar3,fVar7,
                                *(undefined4 *)(param_1 + 0x140));
    }
    *(float *)(param_1 + 0x3d8) = fVar3;
    lVar2 = (longlong)*(int *)(param_1 + 0x3dc) * 0x20 + *(longlong *)(lVar1 + 0x6c8);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(lVar2 + 0x14);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(lVar2 + 0x18);
    fVar3 = *(float *)(lVar2 + 0x1c);
    if (fVar3 - *(float *)(param_1 + 1000) < 0.0) {
      fVar3 = (float)FMath::FInterpConstantTo
                               (*(float *)(param_1 + 1000),fVar3,fVar7,
                                *(undefined4 *)(param_1 + 0x140));
    }
    *(float *)(param_1 + 1000) = fVar3;
    uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x4b4),
                             *(undefined4 *)
                              ((longlong)*(int *)(param_1 + 0x3ac) * 0x20 +
                               *(longlong *)(lVar1 + 0x6c8) + 0xc),fVar7,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x2d20) + 0x6f0));
    *(undefined4 *)(param_1 + 0x4b4) = uVar4;
  }
  FUN_1412533c0(param_1,fVar7);
  uVar4 = 0x3f800000;
  if (*(char *)(*(longlong *)(param_1 + 0x2d20) + 0x6df) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.0;
  }
  uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x438),fVar3,fVar7,0x40a00000);
  *(undefined4 *)(param_1 + 0x438) = uVar5;
  uVar5 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x43c),1.0 - fVar3,fVar7,0x40a00000);
  lVar1 = *(longlong *)(param_1 + 0x2d20);
  *(undefined4 *)(param_1 + 0x43c) = uVar5;
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(lVar1 + 0x75c);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(lVar1 + 0x764);
  *(ulonglong *)(param_1 + 0x44c) = (ulonglong)*(uint *)(lVar1 + 0x754) << 0x20;
  *(undefined4 *)(param_1 + 0x454) = 0;
  if ((*(char *)(lVar1 + 0x6de) == '\0') && (0.9 < *(float *)(lVar1 + 0x6e8))) {
    fVar3 = fVar7;
    if (*(char *)(lVar1 + 0x6e1) == '\0') {
      fVar3 = -fVar7;
    }
    *(float *)(param_1 + 0x4c8) = fVar3 * *(float *)(lVar1 + 0x774) + *(float *)(param_1 + 0x4c8);
  }
  fVar3 = *(float *)(param_1 + 0x4c8);
  if (fVar3 <= 360.0) {
    if (-360.0 <= fVar3) goto LAB_141255675;
    fVar3 = fVar3 + 360.0;
  }
  else {
    fVar3 = fVar3 - 360.0;
  }
  *(float *)(param_1 + 0x4c8) = fVar3;
LAB_141255675:
  if (*(char *)(lVar1 + 0x6dc) == '\0') {
    uVar4 = 0;
  }
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x458),uVar4,fVar7,0x40000000);
  *(undefined4 *)(param_1 + 0x458) = uVar4;
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x474),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x2d20) + 0x6e8),fVar7,0x40000000
                          );
  *(undefined4 *)(param_1 + 0x474) = uVar4;
  fVar3 = ABS(*(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6e8)) * *(float *)(param_1 + 0x2c8) +
          *(float *)(param_1 + 0x458);
  uVar4 = FUN_1408d8c50(*(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x3a8) * fVar3,1,
                        0x3f000000,fVar3);
  *(undefined4 *)(param_1 + 0x45c) = uVar4;
  uVar4 = FUN_1408d8c50(*(float *)(param_1 + 0x2d0) * 0.5 * *(float *)(param_1 + 0x3a8) * fVar3,1,
                        0x3f000000,
                        fVar3 * *(float *)(param_1 + 0x458) * 0.5 * *(float *)(param_1 + 0x2cc));
  fVar3 = *(float *)(param_1 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = uVar4;
  *(undefined8 *)(param_1 + 0x464) = 0;
  *(float *)(param_1 + 0x46c) = fVar3;
  if (ABS(*(float *)(param_1 + 0x470)) < 3600.0) {
    fVar6 = ((*(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x474) * 40.0) - 20.0) *
            *(float *)(param_1 + 0x458);
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x470) = fVar6;
  *(ulonglong *)(param_1 + 0x478) = (ulonglong)(uint)(fVar3 * -0.95) << 0x20;
  *(float *)(param_1 + 0x480) = fVar3 * -0.9;
  *(ulonglong *)(param_1 + 0x484) = CONCAT44(fVar3 * 0.15,fVar3 * 0.25);
  *(undefined4 *)(param_1 + 0x48c) = 0;
  FUN_14124f580(param_1,fVar7);
  uVar4 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0x4b0),
                           *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6ec) *
                           *(float *)(param_1 + 0x260) * -0.017453292,fVar7,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x2d20) + 0x6f0));
  *(undefined4 *)(param_1 + 0x4b0) = uVar4;
  FUN_14124fed0(param_1,fVar7);
  fVar7 = *(float *)(*(longlong *)(param_1 + 0x2d20) + 0x6f4);
  *(undefined8 *)(param_1 + 0x508) = 0;
  fVar7 = fVar7 * *(float *)(param_1 + 0x3a8) * 0.16666667;
  *(undefined8 *)(param_1 + 0x514) = 0;
  *(float *)(param_1 + 0x510) = fVar7;
  *(float *)(param_1 + 0x51c) = -fVar7;
  return;
}



// FUNCTION 141255940 FUN_141255940 body=470 status=ok
// SIG undefined FUN_141255940(void)

void FUN_141255940(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x890) = lVar2;
    uVar4 = (undefined4)param_2[2];
    if (*(int *)(lVar2 + 0x6d0) == 4) {
      lVar1 = (longlong)*(int *)(param_1 + 0x144) * 0x20 + *(longlong *)(lVar2 + 0x6c8);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar1 + 0x18);
      fVar3 = *(float *)(lVar1 + 0x1c);
      if (fVar3 - *(float *)(param_1 + 0x150) < 0.0) {
        fVar3 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x150),fVar3,uVar4,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x150) = fVar3;
      lVar1 = (longlong)*(int *)(param_1 + 0x154) * 0x20 + *(longlong *)(lVar2 + 0x6c8);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar1 + 0x18);
      fVar3 = *(float *)(lVar1 + 0x1c);
      if (fVar3 - *(float *)(param_1 + 0x160) < 0.0) {
        fVar3 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x160),fVar3,uVar4,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x160) = fVar3;
      lVar1 = (longlong)*(int *)(param_1 + 0x164) * 0x20 + *(longlong *)(lVar2 + 0x6c8);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(lVar1 + 0x18);
      fVar3 = *(float *)(lVar1 + 0x1c);
      if (fVar3 - *(float *)(param_1 + 0x170) < 0.0) {
        fVar3 = (float)FMath::FInterpConstantTo
                                 (*(float *)(param_1 + 0x170),fVar3,uVar4,
                                  *(undefined4 *)(param_1 + 0x140));
      }
      *(float *)(param_1 + 0x170) = fVar3;
      lVar2 = (longlong)*(int *)(param_1 + 0x174) * 0x20 + *(longlong *)(lVar2 + 0x6c8);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(lVar2 + 0x18);
      fVar3 = *(float *)(lVar2 + 0x1c);
      if (0.0 <= fVar3 - *(float *)(param_1 + 0x180)) {
        *(float *)(param_1 + 0x180) = fVar3;
      }
      else {
        uVar4 = FMath::FInterpConstantTo(lVar2,fVar3,uVar4,*(undefined4 *)(param_1 + 0x140));
        *(undefined4 *)(param_1 + 0x180) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 141255b20 FUN_141255b20 body=617 status=ok
// SIG undefined FUN_141255b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141255b20(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    local_78 = *(undefined8 *)(param_1 + 0x710);
    fStack_70 = *(float *)(param_1 + 0x718);
    uStack_6c = *(undefined4 *)(param_1 + 0x71c);
    puVar3 = (ulonglong *)FQuat::Rotator(&local_78,&local_58);
    local_60 = (float)puVar3[1];
    local_68 = *puVar3 & 0xffffffff00000000;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x168);
    if (lVar1 == 0) {
      local_78 = _DAT_1468b5d90;
      fStack_70 = DAT_1468b5d98;
    }
    else {
      local_78 = *(undefined8 *)(lVar1 + 0x220);
      fStack_70 = *(float *)(lVar1 + 0x228);
    }
    fVar5 = fStack_70;
    uVar2 = local_78;
    local_60 = fStack_70;
    lVar1 = *(longlong *)(param_1 + 0x168);
    local_68 = local_78;
    if (lVar1 == 0) {
      local_78 = _DAT_1468b5d90;
      fStack_70 = DAT_1468b5d98;
    }
    else {
      local_78 = *(undefined8 *)(lVar1 + 0x220);
      fStack_70 = *(float *)(lVar1 + 0x228);
    }
    local_68._0_4_ = (float)uVar2;
    local_68._0_4_ = (float)local_68 - (float)local_78;
    local_68._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_68._4_4_ = local_68._4_4_ - (float)((ulonglong)local_78 >> 0x20);
    local_58 = local_78;
    local_50 = fStack_70;
    fStack_70 = fVar5 - fStack_70;
    local_78 = CONCAT44(local_68._4_4_,(float)local_68);
    fVar5 = local_68._4_4_ * local_68._4_4_ + (float)local_68 * (float)local_68 +
            fStack_70 * fStack_70;
    if (1e-08 < fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fStack_70 = fStack_70 * fVar6;
      local_78 = CONCAT44(local_68._4_4_ * fVar6,(float)local_68 * fVar6);
    }
    local_68 = uVar2;
    puVar3 = (ulonglong *)FVector::Rotation(&local_78,&local_58);
    local_68 = *puVar3;
    local_60 = (float)puVar3[1];
  }
  puVar4 = (undefined8 *)
           FMath::RInterpConstantTo
                     (&local_58,param_1 + 0x6d4,&local_68,param_2,*(undefined4 *)(param_1 + 0x524));
  *(undefined8 *)(param_1 + 0x6d4) = *puVar4;
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 141255d90 FUN_141255d90 body=259 status=ok
// SIG undefined FUN_141255d90(void)

undefined8 FUN_141255d90(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (0.0 <= *(float *)(param_1 + 0x684)) {
    param_2 = *(float *)(param_1 + 0x684) + param_2;
    *(float *)(param_1 + 0x684) = param_2;
    if (param_2 < *(float *)(param_1 + 0x518)) {
      param_2 = param_2 / *(float *)(param_1 + 0x518);
      if (*(longlong *)(param_1 + 0x510) != 0) {
        param_2 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x510),param_2);
      }
      fVar3 = 1.0 - param_2;
      fVar1 = param_3[2];
      *(ulonglong *)(param_1 + 0x6bc) =
           CONCAT44(fVar3 * *(float *)(param_1 + 0x67c) + param_2 * param_3[1],
                    fVar3 * *(float *)(param_1 + 0x678) + param_2 * *param_3);
      *(float *)(param_1 + 0x6c4) = fVar3 * *(float *)(param_1 + 0x680) + param_2 * fVar1;
      return 0;
    }
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x6bc) = uVar2;
    *(float *)(param_1 + 0x6c4) = param_3[2];
    *(undefined4 *)(param_1 + 0x684) = 0xbf800000;
    FUN_1413e7840(uVar2,*(undefined8 *)(param_1 + 0x6f8));
  }
  return 1;
}



// FUNCTION 141255ea0 FUN_141255ea0 body=410 status=ok
// SIG undefined FUN_141255ea0(void)

void FUN_141255ea0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0xe48) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe58) != 0) {
    local_res8[0] = 0;
    FUN_141202d10(*(undefined8 *)(param_1 + 0xe50),(longlong)*(int *)(param_1 + 0xe58),0,local_res8)
    ;
    cVar1 = *(char *)(*(longlong *)(param_1 + 0xe50) + -1 + (longlong)*(int *)(param_1 + 0xe58) * 2)
    ;
    if (cVar1 != '\0') {
      uVar2 = 0;
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_142fa3c20(*(undefined8 *)(param_1 + 0xe48),&local_28);
      uVar3 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar3 = uVar2;
      }
      plVar4 = local_28;
      if (uVar3 != 0) {
        do {
          if (*plVar4 != 0) {
            FUN_141218f50(cVar1,*plVar4,param_1);
          }
          plVar4 = plVar4 + 1;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      FUN_142fb4100(*(undefined8 *)(param_1 + 0xe48),cVar1);
      goto joined_r0x000141256016;
    }
  }
  FUN_142fb4100(*(undefined8 *)(param_1 + 0xe48),0);
  uVar2 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_142fa3c20(*(undefined8 *)(param_1 + 0xe48),&local_28);
  uVar3 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + (int)local_20 < local_28) {
    uVar3 = uVar2;
  }
  plVar4 = local_28;
  if (uVar3 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_141218f50(0,*plVar4,param_1);
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
joined_r0x000141256016:
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 141256040 FUN_141256040 body=1595 status=ok
// SIG undefined FUN_141256040(void)

void FUN_141256040(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  code *local_78;
  undefined4 uStack_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (*(char *)(param_1 + 0x63c) == '\0') {
    return;
  }
  lVar4 = FUN_142eb65a0();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_1413a0ec0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar5 = FUN_140f578e0(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140e21bd0(lVar5), lVar6 != 0)) {
    uVar7 = FUN_140e21bd0(lVar5);
    FUN_140e36cb0(uVar7,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x2c8);
  if ((cVar2 == '\0') || (lVar5 = FWeakObjectPtr::Get(lVar4 + 0x2c8), *(int *)(lVar5 + 0x170) == -1)
     ) {
    lVar5 = FUN_1410833d0(param_1);
    if (lVar5 == 0) {
      return;
    }
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    if (*(char *)(lVar4 + 0x2d8) == '\0') {
      local_68[0] = 0;
      lVar4 = local_60;
    }
    else {
      local_68[0] = 6;
      lVar4 = 0;
      if (*(longlong *)(param_1 + 0x908) != 0) {
        lVar8 = AAFGameState::GetPrivateStaticClass();
        for (lVar6 = *(longlong *)(param_1 + 0x908);
            (lVar4 = 0, lVar6 != 0 && (lVar4 = *(longlong *)(param_1 + 0x908), lVar6 != lVar8));
            lVar6 = *(longlong *)(lVar6 + 0x30)) {
        }
      }
    }
    local_60 = lVar4;
    FUN_1411f9940(lVar5 + 0x6e0,local_68,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_Mystery",1);
    FUN_1411f9b50(lVar5 + 0x6e0,*puVar9);
    FName::FName(local_res8,L"VaultCard_Player",1);
    lVar5 = lVar5 + 0x6b8;
    goto LAB_141256632;
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x2c8);
  if (cVar2 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(lVar4 + 0x2c8);
    uVar3 = *(undefined4 *)(lVar5 + 0x170);
  }
  lVar6 = FUN_140e51670(*(undefined4 *)(param_1 + 0x898),*(undefined4 *)(lVar4 + 0x2d0),uVar3);
  uVar3 = FUN_141221160(lVar4 + 0x310);
  switch(uVar3) {
  case 3:
    if (lVar6 == 0) {
      return;
    }
    if (*(int *)(lVar6 + 0x50) < 1) {
      return;
    }
    lVar5 = FUN_1410833d0(param_1);
    if (lVar5 == 0) {
      return;
    }
    lVar4 = **(longlong **)(lVar6 + 0x48);
    if (lVar4 == 0) {
      return;
    }
    lVar6 = FUN_140f578e0(param_1);
    if ((lVar6 != 0) && (lVar8 = FUN_140e21bd0(lVar6), lVar8 != 0)) {
      uVar7 = FUN_140e21bd0(lVar6);
      FUN_140e36cb0(uVar7,lVar4);
    }
    if (*(longlong *)(lVar4 + 0x138) == 0) {
      return;
    }
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_68[0] = 0;
    FUN_1411f9940(lVar5 + 0x6e0,local_68,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_Echo",1);
    FUN_1411f9b50(lVar5 + 0x6e0,*puVar9);
    FName::FName(local_res8,L"VaultCard_Echo",1);
    lVar5 = lVar5 + 0x6b8;
    goto LAB_141256632;
  case 4:
    local_78 = FUN_1412566c0;
    goto LAB_14125653a;
  default:
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    goto LAB_14125653a;
  case 8:
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_BeastmasterHead",1);
    FUN_1412567b0(param_1,lVar6,*puVar9,*(undefined8 *)(param_1 + 0x920));
    break;
  case 9:
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_GunnerHead",1);
    FUN_1412567b0(param_1,lVar6,*puVar9,*(undefined8 *)(param_1 + 0x918));
    break;
  case 10:
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_OperativeHead",1);
    FUN_1412567b0(param_1,lVar6,*puVar9,*(undefined8 *)(param_1 + 0x910));
    break;
  case 0xb:
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_SirenHead",1);
    FUN_1412567b0(param_1,lVar6,*puVar9,*(undefined8 *)(param_1 + 0x928));
    break;
  case 0xd:
    if (lVar6 == 0) {
      return;
    }
    lVar5 = FUN_1410833d0(param_1);
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x68) == 0) {
      return;
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x68) + 0x160);
    if (lVar4 == 0) {
      return;
    }
    local_60 = *(longlong *)(lVar4 + 0x40);
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_68[0] = 6;
    FUN_1411f9940(lVar5 + 0x6e0,local_68,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_RoomDeco",1);
    FUN_1411f9b50(lVar5 + 0x6e0,*puVar9);
    pwVar10 = L"VaultCard_Player";
    goto LAB_141256238;
  case 0xf:
    local_78 = FUN_141256990;
LAB_14125653a:
    uStack_70 = 0;
    FUN_141218510(param_1,lVar6,&local_78);
    break;
  case 0x10:
    if (lVar6 == 0) {
      return;
    }
    lVar5 = FUN_1410833d0(param_1);
    if (lVar5 == 0) {
      return;
    }
    local_28 = *(longlong *)(lVar6 + 0x60);
    if (local_28 == 0) {
      return;
    }
    local_68[0] = 4;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_1c = 0;
    FUN_1411f9940(lVar5 + 0x6e0,local_68,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_Trinket",1);
    FUN_1411f9b50(lVar5 + 0x6e0,*puVar9);
    pwVar10 = L"VaultCard_Player";
    goto LAB_141256238;
  case 0x12:
    if (lVar6 == 0) {
      return;
    }
    lVar5 = FUN_1410833d0(param_1);
    if (lVar5 == 0) {
      return;
    }
    local_28 = *(longlong *)(lVar6 + 0x58);
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_1c = 0;
    local_68[0] = 3;
    FUN_1411f9940(lVar5 + 0x6e0,local_68,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_WeaponSkin",1);
    FUN_1411f9b50(lVar5 + 0x6e0,*puVar9);
    pwVar10 = L"VaultCard_Player";
LAB_141256238:
    FName::FName(local_res8,pwVar10,1);
    lVar5 = lVar5 + 0x6b8;
LAB_141256632:
    FUN_140ec02d0(lVar5,local_res8,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  }
  return;
}



// FUNCTION 1412566c0 FUN_1412566c0 body=230 status=ok
// SIG undefined FUN_1412566c0(void)

void FUN_1412566c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((param_2 != 0) && (lVar2 = FUN_141083310(), lVar2 != 0)) {
    lVar3 = FUN_141404840();
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
      uVar5 = 0;
      plVar6 = *(longlong **)(param_2 + 0x48);
      uVar7 = (longlong)*(int *)(param_2 + 0x50) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(param_2 + 0x50) < plVar6) {
        uVar7 = uVar5;
      }
      if (uVar7 != 0) {
        do {
          lVar3 = *plVar6;
          if ((lVar3 != 0) &&
             ((*(longlong *)(lVar3 + 0x130) == 0 ||
              (lVar4 = FUN_140e506b0(lVar2), *(longlong *)(lVar3 + 0x130) == lVar4)))) {
            FUN_140e58390(lVar2,lVar3);
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return;
}



// FUNCTION 1412567b0 FUN_1412567b0 body=472 status=ok
// SIG undefined FUN_1412567b0(void)

void FUN_1412567b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (((param_2 != 0) && (0 < *(int *)(param_2 + 0x50))) && (lVar1 = FUN_1410833d0(), lVar1 != 0)) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_78[0] = 6;
    lVar4 = 0;
    if (param_4 != 0) {
      lVar2 = FUN_141404840();
      lVar5 = param_4;
      do {
        lVar4 = param_4;
        if (lVar5 == lVar2) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = 0;
      } while (lVar5 != 0);
    }
    local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
    local_70 = lVar4;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 == (longlong *)0x0) {
      if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
        (**(code **)(*local_58 + 0x28))(local_58,0);
        if (local_58 != (longlong *)0x0) {
          local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
        }
        local_50 = 0;
      }
    }
    else {
      local_88 = (undefined4)param_1;
      uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_80 = (undefined4)param_2;
      uStack_7c = (undefined4)((ulonglong)param_2 >> 0x20);
      *plVar3 = (longlong)&PTR_GetPoolName_14471e928;
      *(undefined4 *)(plVar3 + 1) = local_88;
      *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_84;
      *(undefined4 *)(plVar3 + 2) = uStack_80;
      *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_7c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_14471e970;
      FUN_141215e50(plVar3,&local_58);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    FUN_1411f9940(lVar1 + 0x6e0,local_78,1);
    FUN_1411f9b50(lVar1 + 0x6e0,param_3);
    FName::FName(local_res10,L"VaultCard_Player",1);
    FUN_140ec02d0(lVar1 + 0x6b8,local_res10,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  }
  return;
}



// FUNCTION 141256990 FUN_141256990 body=396 status=ok
// SIG undefined FUN_141256990(void)

void FUN_141256990(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((param_2 != 0) && (lVar3 = FUN_141083310(), lVar3 != 0)) {
    lVar4 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = *(longlong *)(lVar3 + 0x2298), lVar3 != 0)) {
      plVar6 = *(longlong **)(param_2 + 0x48);
      plVar1 = plVar6 + *(int *)(param_2 + 0x50);
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        lVar4 = *plVar6;
        if (lVar4 != 0) {
          iVar5 = 0;
          uVar7 = 0;
          uVar8 = 0;
          do {
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            FUN_142e43820(lVar3,iVar5,&local_48,&local_58,1,1,uVar7,uVar8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 3);
          FUN_142d271f0(lVar3,lVar4,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 141256b20 FUN_141256b20 body=362 status=ok
// SIG undefined FUN_141256b20(void)

void FUN_141256b20(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar3 = *(longlong *)(param_1 + 0x518), lVar3 != 0)
     ) {
    FUN_142df2b50(lVar3,0);
    plVar9 = *(longlong **)(param_1 + 0x6e0);
    lVar8 = 0;
    cVar2 = *(char *)(param_1 + 0x9c8);
    plVar1 = plVar9 + *(int *)(param_1 + 0x6e8);
    for (; lVar7 = lVar8, plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar7 = *plVar9;
      if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x6e5) != '\0')) &&
          (cVar4 = FUN_142cf39b0(lVar7,1), cVar4 != '\0')) &&
         (plVar5 = (longlong *)FUN_142ceeb40(lVar7,0), plVar5 != (longlong *)0x0)) {
        uVar6 = UCircularThrobber::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
        if (lVar7 != 0) {
          cVar4 = (**(code **)(*plVar5 + 0x780))(plVar5);
          if (cVar4 != '\0') break;
          if (lVar8 == 0) {
            lVar8 = lVar7;
          }
        }
      }
    }
    if (lVar7 == 0) {
      FUN_142df2ca0(lVar3,*(undefined8 *)(lVar3 + 0x188));
      *(undefined1 *)(param_1 + 0x9c8) = 3;
      FUN_141214880(param_1);
    }
    else {
      cVar4 = FUN_142dec9a0(lVar7);
      *(char *)(param_1 + 0x9c8) = (cVar4 == '\x01') + '\x02';
      FUN_142df2b50(lVar3,lVar7);
    }
    if (cVar2 != *(char *)(param_1 + 0x9c8)) {
      FUN_141256d00(param_1);
    }
  }
  return;
}



// FUNCTION 141256c90 FUN_141256c90 body=110 status=ok
// SIG undefined FUN_141256c90(void)

void FUN_141256c90(longlong *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 != (longlong *)0x0) {
    bVar2 = '\x01' << (param_2 & 0x1f);
    bVar1 = 0xfb;
    if (param_2 == 2) {
      bVar1 = 0xf7;
    }
    (**(code **)(*param_1 + 0x550))(param_1,*(byte *)((longlong)param_1 + 0x3bb) & bVar1 | bVar2);
    FUN_142397960(param_1,*(byte *)((longlong)param_1 + 0x302) & bVar1 | bVar2);
  }
  return;
}



// FUNCTION 141256d00 FUN_141256d00 body=378 status=ok
// SIG undefined FUN_141256d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141256d00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar3 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140725150(param_1,local_108,0);
  plVar2 = local_108;
  if (local_48 != (longlong *)0x0) {
    plVar2 = local_48;
  }
  uVar6 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (plVar2 + (int)local_40 < plVar2) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        bVar4 = '\x01' << (*(byte *)(param_1 + 0x9c8) & 0x1f);
        bVar5 = 0xfb;
        if (*(byte *)(param_1 + 0x9c8) == 2) {
          bVar5 = 0xf7;
        }
        (**(code **)(*plVar1 + 0x550))(plVar1,*(byte *)((longlong)plVar1 + 0x3bb) & bVar5 | bVar4);
        FUN_142397960(plVar1,*(byte *)((longlong)plVar1 + 0x302) & bVar5 | bVar4);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141256e80 FUN_141256e80 body=966 status=ok
// SIG undefined FUN_141256e80(void)

void FUN_141256e80(undefined4 *param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  float local_68;
  float local_64;
  float local_60;
  longlong *local_58;
  int local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  undefined8 local_30;
  
  lVar4 = FWeakObjectPtr::Get();
  if (param_2 == lVar4) {
    return;
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *param_1 = local_res8;
  param_1[1] = uStackX_c;
  FWeakObjectPtr::operator=(&local_res8,0);
  param_1[4] = local_res8;
  param_1[5] = uStackX_c;
  param_1[6] = 0x45bb8000;
  *(undefined8 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  FWeakObjectPtr::operator=(param_1,param_2);
  lVar4 = FWeakObjectPtr::Get(param_1);
  lVar4 = FUN_14307cf20(lVar4,*(undefined1 *)(lVar4 + 0x690));
  if (lVar4 == 0) {
LAB_141256f60:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_1430bf300();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141256f60;
  }
  FWeakObjectPtr::operator=(param_1 + 2,lVar4);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar3 != '\0') {
    param_1[4] = param_1[2];
    param_1[5] = param_1[3];
    uVar6 = FWeakObjectPtr::Get(param_1 + 2);
    FUN_1430bf680(uVar6,&local_res8);
    if (CONCAT44(uStackX_c,local_res8) == 0) {
      return;
    }
    lVar5 = FUN_1428dfc70();
    lVar4 = CONCAT44(uStackX_c,local_res8);
    while( true ) {
      if (lVar4 == 0) {
        return;
      }
      if (lVar4 == lVar5) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    FActorSpawnParameters::FActorSpawnParameters(local_48);
    lVar4 = FWeakObjectPtr::Get(param_1 + 4);
    local_38 = *(longlong **)(lVar4 + 0x118);
    local_30 = (**(code **)(*local_38 + 0x690))();
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1);
    if (CONCAT44(uStackX_c,local_res8) != 0) {
      lVar8 = FUN_1428dfc70();
      lVar5 = CONCAT44(uStackX_c,local_res8);
      for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar8) goto LAB_141257057;
      }
    }
    lVar5 = 0;
LAB_141257057:
    uVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
    plVar9 = (longlong *)FUN_142550d00(uVar6,lVar5,&DAT_1468b5b70,local_48);
    uVar6 = FUN_1429f6c00();
    AActor::GetComponentsByClass(plVar9,&local_58,uVar6);
    plVar7 = local_58 + local_50;
    plVar2 = local_58;
    do {
      if (plVar2 == plVar7) {
LAB_141257138:
        (**(code **)(*plVar9 + 0x308))(plVar9,&local_68);
        fVar10 = SQRT(local_68 * local_68 + local_64 * local_64 + local_60 * local_60);
        local_60 = local_60 / fVar10;
        param_1[6] = fVar10;
        fVar10 = -1.0;
        if ((-1.0 <= local_60) && (fVar10 = local_60, 1.0 <= local_60)) {
          fVar10 = 1.0;
        }
        fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
        param_1[8] = fVar10 * 57.295776;
        FUN_142227350(plVar9,0,1);
        if (local_58 == (longlong *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        lVar5 = FUN_1430b3c30();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          lVar5 = FUN_1429f6c00();
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
            param_1[7] = *(undefined4 *)(lVar4 + 0x1dc);
            goto LAB_141257138;
          }
        }
      }
      plVar2 = plVar2 + 1;
    } while( true );
  }
  lVar4 = FWeakObjectPtr::Get(param_1);
  lVar4 = FUN_14307cf20(lVar4,*(undefined1 *)(lVar4 + 0x690));
  if (lVar4 != 0) {
    lVar5 = FUN_1430bdfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141257226;
  }
  lVar4 = 0;
LAB_141257226:
  FWeakObjectPtr::operator=(param_1 + 4,lVar4);
  return;
}



// FUNCTION 141257250 FUN_141257250 body=128 status=ok
// SIG undefined FUN_141257250(void)

bool FUN_141257250(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_1404cf9f0(lVar3 + 0x1b10);
      return iVar2 == *(int *)(param_1 + 0x898);
    }
  }
  return false;
}



// FUNCTION 1412572d0 FUN_1412572d0 body=1910 status=ok
// SIG undefined FUN_1412572d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412572d0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  float local_170;
  undefined3 local_168;
  undefined1 uStack_165;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar3 = FWeakObjectPtr::IsValid();
  if ((cVar3 != '\0') && (plVar2 = *(longlong **)(param_2 + 0x4d0), plVar2 != (longlong *)0x0)) {
    UWorld::AddOnActorSpawnedHandler(plVar2,local_148);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    lVar7 = *plVar5;
    uVar4 = (**(code **)(*plVar2 + 0x4f8))(plVar2);
    (**(code **)(lVar7 + 0x648))(plVar5,uVar4);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    lVar7 = *plVar5;
    uVar6 = (**(code **)(*plVar2 + 0x4d0))(plVar2);
    (**(code **)(lVar7 + 0x840))(plVar5,uVar6,0);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar5 + 0x5b8))(plVar5,1);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar5 + 0x638))(plVar5,3);
    if (*(char *)(param_1 + 0x10) == '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
      local_178 = 0;
      lVar7 = (**(code **)(*plVar5 + 0x6d0))(plVar5,0,1);
      local_178 = 0;
      lVar8 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        FUN_1426a8dc0(lVar7,1);
        FBodyInstance::SetMassOverride(lVar7,0x3727c5ac,1);
        FUN_142699110(lVar8,&local_138,1,0);
        lVar8 = FUN_142697310(lVar8,local_a8);
        fVar31 = local_118._0_4_;
        fVar32 = local_118._4_4_;
        fVar33 = local_118._8_4_;
        fVar12 = local_118._12_4_;
        fVar23 = local_138 * _DAT_146876ec0;
        fVar24 = fStack_134 * fRam0000000146876ec4;
        fVar25 = fStack_130 * fRam0000000146876ec8;
        fVar26 = fStack_12c * fRam0000000146876ecc;
        auVar18 = rcpps(in_XMM4,local_118);
        fVar27 = (float)((uint)(*(float *)(lVar8 + 0x10) - local_128) & _DAT_146876b60);
        fVar28 = (float)((uint)(*(float *)(lVar8 + 0x14) - fStack_124) & uRam0000000146876b64);
        fVar29 = (float)((uint)(*(float *)(lVar8 + 0x18) - fStack_120) & uRam0000000146876b68);
        fVar30 = (float)((uint)(0.0 - fStack_11c) & uRam0000000146876b6c);
        fVar11 = fVar29 * fVar24 - fVar28 * fVar25;
        fVar13 = fVar27 * fVar25 - fVar29 * fVar23;
        fVar14 = fVar28 * fVar23 - fVar27 * fVar24;
        fVar15 = fVar30 * fVar26 - fVar30 * fVar26;
        fVar17 = auVar18._0_4_;
        fVar20 = auVar18._4_4_;
        fVar21 = auVar18._8_4_;
        fVar22 = auVar18._12_4_;
        fVar11 = fVar11 + fVar11;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar31;
        fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar32;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar33;
        fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar12;
        auVar18._0_4_ = (fVar17 + fVar17) - fVar17 * fVar17 * fVar31;
        auVar18._4_4_ = (fVar20 + fVar20) - fVar20 * fVar20 * fVar32;
        auVar18._8_4_ = (fVar21 + fVar21) - fVar21 * fVar21 * fVar33;
        auVar18._12_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * fVar12;
        local_158 = ((fVar14 * fVar24 - fVar13 * fVar25) + fVar26 * fVar11 + fVar27) *
                    (float)(-(uint)((float)((uint)fVar31 & _DAT_146876bf0) <= _DAT_146876eb0) &
                            (uint)auVar18._0_4_ ^ (uint)auVar18._0_4_);
        fStack_154 = ((fVar11 * fVar25 - fVar14 * fVar23) + fVar26 * fVar13 + fVar28) *
                     (float)(-(uint)((float)((uint)fVar32 & uRam0000000146876bf4) <=
                                    fRam0000000146876eb4) & (uint)auVar18._4_4_ ^
                            (uint)auVar18._4_4_);
        fStack_150 = ((fVar13 * fVar23 - fVar11 * fVar24) + fVar26 * fVar14 + fVar29) *
                     (float)(-(uint)((float)((uint)fVar33 & uRam0000000146876bf8) <=
                                    fRam0000000146876eb8) & (uint)auVar18._8_4_ ^
                            (uint)auVar18._8_4_);
        fStack_14c = ((fVar15 * fVar26 - fVar15 * fVar26) + fVar26 * fVar15 + fVar30) *
                     (float)(-(uint)((float)((uint)fVar12 & uRam0000000146876bfc) <=
                                    fRam0000000146876ebc) & (uint)auVar18._12_4_ ^
                            (uint)auVar18._12_4_);
        FUN_142699110(lVar7,&local_108,1,0);
        lVar8 = FUN_142697310(lVar7,local_a8);
        fVar31 = local_e8._0_4_;
        fVar32 = local_e8._4_4_;
        fVar33 = local_e8._8_4_;
        local_108 = local_108 * _DAT_146876ec0;
        fStack_104 = fStack_104 * fRam0000000146876ec4;
        fStack_100 = fStack_100 * fRam0000000146876ec8;
        fStack_fc = fStack_fc * fRam0000000146876ecc;
        auVar18 = rcpps(auVar18,local_e8);
        fVar20 = (float)((uint)(*(float *)(lVar8 + 0x10) - local_f8) & _DAT_146876b60);
        fVar21 = (float)((uint)(*(float *)(lVar8 + 0x14) - fStack_f4) & uRam0000000146876b64);
        fVar22 = (float)((uint)(*(float *)(lVar8 + 0x18) - fStack_f0) & uRam0000000146876b68);
        fVar12 = fVar22 * fStack_104 - fVar21 * fStack_100;
        fVar11 = fVar20 * fStack_100 - fVar22 * local_108;
        fVar13 = fVar21 * local_108 - fVar20 * fStack_104;
        fVar14 = auVar18._0_4_;
        fVar15 = auVar18._4_4_;
        fVar17 = auVar18._8_4_;
        fVar12 = fVar12 + fVar12;
        fVar11 = fVar11 + fVar11;
        fVar13 = fVar13 + fVar13;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar31;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar32;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar33;
        fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar31;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar32;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar33;
        fVar31 = ((fVar13 * fStack_104 - fVar11 * fStack_100) + fStack_fc * fVar12 + fVar20) *
                 (float)(-(uint)((float)((uint)fVar31 & _DAT_146876bf0) <= _DAT_146876eb0) &
                         (uint)fVar14 ^ (uint)fVar14);
        fVar32 = ((fVar12 * fStack_100 - fVar13 * local_108) + fStack_fc * fVar11 + fVar21) *
                 (float)(-(uint)((float)((uint)fVar32 & uRam0000000146876bf4) <=
                                fRam0000000146876eb4) & (uint)fVar15 ^ (uint)fVar15);
        fVar33 = ((fVar11 * local_108 - fVar12 * fStack_104) + fStack_fc * fVar13 + fVar22) *
                 (float)(-(uint)((float)((uint)fVar33 & uRam0000000146876bf8) <=
                                fRam0000000146876eb8) & (uint)fVar17 ^ (uint)fVar17);
        local_188 = CONCAT44(fVar32,fVar31);
        uStack_180._0_4_ = fVar33;
        (**(code **)(*plVar2 + 0x420))(plVar2,&local_d8,*(undefined8 *)(param_1 + 8),0);
        local_178 = 0;
        if (*(longlong *)(param_1 + 8) == 0) {
          local_170 = (float)uStack_180;
          puVar9 = &local_178;
          local_178 = local_188;
        }
        else {
          fVar31 = fVar31 * local_b8;
          fVar32 = fVar32 * fStack_b4;
          fVar33 = fVar33 * fStack_b0;
          fStack_ac = fStack_ac * 0.0;
          fVar14 = fVar33 * fStack_d4 - fVar32 * fStack_d0;
          fVar15 = fVar31 * fStack_d0 - fVar33 * local_d8;
          fVar17 = fVar32 * local_d8 - fVar31 * fStack_d4;
          fVar20 = fStack_ac * fStack_cc - fStack_ac * fStack_cc;
          fVar14 = fVar14 + fVar14;
          fVar15 = fVar15 + fVar15;
          fVar17 = fVar17 + fVar17;
          fVar20 = fVar20 + fVar20;
          local_138 = local_138 * _DAT_146876ec0;
          fStack_134 = fStack_134 * fRam0000000146876ec4;
          fStack_130 = fStack_130 * fRam0000000146876ec8;
          fStack_12c = fStack_12c * fRam0000000146876ecc;
          fVar12 = local_118._0_4_;
          fVar11 = local_118._4_4_;
          fVar13 = local_118._8_4_;
          auVar19._0_4_ =
               (fVar17 * fStack_d4 - fVar15 * fStack_d0) + fStack_cc * fVar14 + fVar31 + local_c8;
          auVar19._4_4_ =
               (fVar14 * fStack_d0 - fVar17 * local_d8) + fStack_cc * fVar15 + fVar32 + fStack_c4;
          auVar19._8_4_ =
               (fVar15 * local_d8 - fVar14 * fStack_d4) + fStack_cc * fVar17 + fVar33 + fStack_c0;
          auVar19._12_4_ =
               (fVar20 * fStack_cc - fVar20 * fStack_cc) + fStack_cc * fVar20 + fStack_ac +
               fStack_bc;
          auVar18 = rcpps(auVar19,local_118);
          fVar20 = (float)((uint)(auVar19._0_4_ - local_128) & _DAT_146876b60);
          fVar21 = (float)((uint)(auVar19._4_4_ - fStack_124) & uRam0000000146876b64);
          fVar22 = (float)((uint)(auVar19._8_4_ - fStack_120) & uRam0000000146876b68);
          fVar31 = fVar22 * fStack_134 - fVar21 * fStack_130;
          fVar32 = fVar20 * fStack_130 - fVar22 * local_138;
          fVar33 = fVar21 * local_138 - fVar20 * fStack_134;
          fVar14 = auVar18._0_4_;
          fVar15 = auVar18._4_4_;
          fVar17 = auVar18._8_4_;
          fVar31 = fVar31 + fVar31;
          fVar32 = fVar32 + fVar32;
          fVar33 = fVar33 + fVar33;
          fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar12;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
          fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
          fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar12;
          fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
          fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
          puVar9 = &local_188;
          uStack_180._0_4_ =
               ((fVar32 * local_138 - fVar31 * fStack_134) + fStack_12c * fVar33 + fVar22) *
               (float)(-(uint)((float)((uint)fVar13 & uRam0000000146876bf8) <= fRam0000000146876eb8)
                       & (uint)fVar17 ^ (uint)fVar17);
          local_188 = CONCAT44(((fVar31 * fStack_130 - fVar33 * local_138) +
                               fStack_12c * fVar32 + fVar21) *
                               (float)(-(uint)((float)((uint)fVar11 & uRam0000000146876bf4) <=
                                              fRam0000000146876eb4) & (uint)fVar15 ^ (uint)fVar15),
                               ((fVar33 * fStack_134 - fVar32 * fStack_130) +
                               fStack_12c * fVar31 + fVar20) *
                               (float)(-(uint)((float)((uint)fVar12 & _DAT_146876bf0) <=
                                              _DAT_146876eb0) & (uint)fVar14 ^ (uint)fVar14));
        }
        local_188 = *puVar9;
        fVar31 = *(float *)(puVar9 + 1);
        *(ulonglong *)(lVar7 + 0x7c) =
             CONCAT44(fStack_154 - (float)((ulonglong)local_188 >> 0x20),
                      local_158 - (float)local_188);
        uStack_180 = CONCAT44(uStack_180._4_4_,fStack_150 - fVar31);
        *(float *)(lVar7 + 0x84) = fStack_150 - fVar31;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x14);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    _local_168 = CONCAT13(1,(int3)DAT_146af29ec);
    lVar7 = FWeakObjectPtr::Get(param_1);
    pfVar1 = (float *)(lVar7 + 0x280);
    local_178 = uVar6;
    local_170 = (float)uVar4;
    if (((*(float *)(lVar7 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar7 + 0x1fc) != *(float *)(lVar7 + 0x284))) ||
       (*(float *)(lVar7 + 0x200) != *(float *)(lVar7 + 0x288))) {
      local_188 = *(undefined8 *)*(undefined1 (*) [12])(lVar7 + 0x1f8);
      auVar10._12_4_ = 0;
      auVar10._0_12_ = *(undefined1 (*) [12])(lVar7 + 0x1f8);
      auVar18 = divps(auVar10,_DAT_146876b20);
      fVar12 = (float)DAT_146876b20;
      fVar11 = DAT_146876b20._4_4_;
      fVar13 = DAT_146876b20._8_4_;
      fVar31 = (float)local_188 - (float)(int)auVar18._0_4_ * fVar12;
      fVar32 = (float)((ulonglong)local_188 >> 0x20) - (float)(int)auVar18._4_4_ * fVar11;
      fVar33 = *(float *)(lVar7 + 0x200) - (float)(int)auVar18._8_4_ * fVar13;
      fVar31 = (float)(((uint)(fVar31 + fVar12) ^ (uint)fVar31) & -(uint)(0.0 <= fVar31) ^
                      (uint)(fVar31 + fVar12));
      fVar32 = (float)(((uint)(fVar32 + fVar11) ^ (uint)fVar32) & -(uint)(0.0 <= fVar32) ^
                      (uint)(fVar32 + fVar11));
      fVar33 = (float)(((uint)(fVar33 + fVar13) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                      (uint)(fVar33 + fVar13));
      uVar16 = ((uint)(fVar33 - fVar13) ^ (uint)fVar33) & -(uint)(fRam0000000146876b18 < fVar33) ^
               (uint)fVar33;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar16);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar32 - fVar11) ^ (uint)fVar32) &
                    -(uint)(fRam0000000146876b14 < fVar32) ^ (uint)fVar32,
                    ((uint)(fVar31 - fVar12) ^ (uint)fVar31) & -(uint)(_DAT_146876b10 < fVar31) ^
                    (uint)fVar31);
      *(uint *)(lVar7 + 0x288) = uVar16;
      puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,&local_158);
      uVar6 = puVar9[1];
      *(undefined8 *)(lVar7 + 0x270) = *puVar9;
      *(undefined8 *)(lVar7 + 0x278) = uVar6;
    }
    local_188 = *(undefined8 *)(lVar7 + 0x270);
    uStack_180 = *(undefined8 *)(lVar7 + 0x278);
    local_190 = 0;
    local_198 = 0;
    FUN_142397be0(lVar7,&local_178,&local_188,0);
    local_188 = DAT_1468b5da0;
    uStack_180 = CONCAT44(uStack_180._4_4_,DAT_1468b5da8);
    uVar6 = FWeakObjectPtr::Get(param_1);
    local_198 = local_198 & 0xffffffffffffff00;
    FUN_142398470(uVar6,&local_188,0,0);
    uVar6 = FWeakObjectPtr::Get(param_1);
    FUN_142382f60(uVar6,plVar2,&local_168,*(undefined8 *)(param_1 + 8));
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    local_178 = 0;
    (**(code **)(*plVar5 + 0x708))(plVar5,plVar2,0,1);
  }
  return;
}



// FUNCTION 141257a50 FUN_141257a50 body=575 status=ok
// SIG undefined FUN_141257a50(void)

void FUN_141257a50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x12c0);
    *(int *)(param_1 + 0x12c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x12c4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x12b8,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x12b8));
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    FWeakObjectPtr::operator=(puVar8,param_2);
    uVar1 = *param_4;
    *(undefined1 *)(puVar8 + 2) = param_5;
    uVar3 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar8 + 0x14) = uVar1;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    puVar8[1] = param_3;
    FUN_1412572d0(puVar8,param_1);
    FWeakObjectPtr::operator=(&local_res10,param_2);
    local_28 = FUN_1412361f0;
    plVar6 = (longlong *)(param_2 + 0x150);
    uStack_20 = 0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_144230918;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
      *(undefined4 *)(plVar4 + 4) = local_res10;
      *(undefined4 *)((longlong)plVar4 + 0x24) = local_res14;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_144230960;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_28);
      iVar2 = *(int *)(param_2 + 0x158);
      *(int *)(param_2 + 0x158) = iVar2 + 1;
      if (*(int *)(param_2 + 0x15c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar8 = plVar4;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    lVar5 = *(longlong *)(param_1 + 0x4d0);
    if (lVar5 != 0) {
      uStack_20 = 0;
      local_28 = FUN_141234030;
      plVar4 = (longlong *)(lVar5 + 0x150);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_28;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_28._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_20;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_28);
        iVar2 = *(int *)(lVar5 + 0x158);
        *(int *)(lVar5 + 0x158) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x15c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 141257d10 FUN_141257d10 body=14 status=ok
// SIG undefined FUN_141257d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141257d10(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong alStack_78 [2];
  undefined1 *apuStack_68 [2];
  longlong alStack_58 [4];
  longlong *plStack_38;
  int iStack_28;
  ulonglong uStack_18;
  
  if (*(char *)(param_1 + 0x8c8) == '\0') {
    return;
  }
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x8c4) = 2;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    alStack_78[0] = 0;
    alStack_78[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_78,0);
    FGenericPlatformString::Memcpy(alStack_78[0],&DAT_144708f44,6);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x600),alStack_78);
    if (alStack_78[0] != 0) {
      FMemory::Free();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x6d8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x6a8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x6d0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x708);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x730))(plVar2,3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x6f0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x290))(plVar2,1,0);
    }
  }
  plStack_38 = (longlong *)0x0;
  iStack_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,alStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_68[0] = &LAB_141213f50;
  FUN_14208c260(param_1,apuStack_68);
  if (iStack_28 != 0) {
    plVar2 = alStack_58;
    if (plStack_38 != (longlong *)0x0) {
      plVar2 = plStack_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141238d90(param_1);
  FUN_141236cf0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_141237f70(param_1);
  FUN_14123dc30(param_1);
  return;
}



// FUNCTION 141257d20 FUN_141257d20 body=228 status=ok
// SIG undefined FUN_141257d20(void)

/* WARNING: Removing unreachable block (ram,0x000141257df2) */

int FUN_141257d20(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_144732490,param_3);
  puVar5 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar5 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_28,L"%s%s %s%s",puVar5,param_2,puVar2,puVar3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar4 = 0;
  *puVar4 = local_28;
  *(undefined4 *)(puVar4 + 1) = local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_1c;
  return iVar1;
}



// FUNCTION 141257e10 FUN_141257e10 body=804 status=ok
// SIG undefined FUN_141257e10(void)

int FUN_141257e10(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  void *_Src_00;
  bool bVar10;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144732490,param_5);
  puVar6 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar9,param_4,puVar2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,&DAT_144732490,param_3);
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar6 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar6,param_2,puVar2,puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = (int)local_50;
  iVar5 = local_50._4_4_;
  bVar10 = (int)local_50 != 0;
  local_78 = local_58;
  local_70 = (int)local_50;
  local_58 = (void *)0x0;
  local_6c = local_50._4_4_;
  local_50 = 0;
  if (iVar5 < (int)((2 - (uint)bVar10) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar4 = local_70;
  }
  local_70 = (2 - (uint)(iVar4 != 0)) + iVar4;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
  }
  _Src_00 = local_68;
  puVar6 = (undefined2 *)((longlong)local_78 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar6 = 0x20;
  puVar6[1] = 0;
  iVar4 = (int)local_60;
  if (local_70 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    iVar5 = 0;
    if ((int)local_60 != 0) {
      iVar5 = (int)local_60 + -1;
    }
    if ((local_70 != 0) || (iVar4 = 1, iVar5 == 0)) {
      iVar4 = 0;
    }
    if (local_6c < iVar4 + local_70 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    _Src = local_68;
    iVar1 = local_70;
    _Src_00 = local_78;
    iVar4 = local_70;
    if (iVar5 != 0) {
      lVar8 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar5;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar1);
      }
      iVar4 = local_70;
      _Src_00 = local_78;
      _Dst = (void *)((longlong)local_78 + (lVar8 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar5 * 2) = 0;
    }
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_1);
  *puVar7 = 0;
  *(int *)(puVar7 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src_00,(longlong)iVar4 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar5;
}



// FUNCTION 141258140 FUN_141258140 body=1286 status=ok
// SIG undefined FUN_141258140(void)

int FUN_141258140(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  FString::PrintfImpl(&local_58,&DAT_144732490,param_7);
  puVar8 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar12,param_6,puVar3,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144732490,param_5);
  puVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_88,L"%s%s %s%s",puVar12,param_4,puVar3,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,&DAT_144732490,param_3);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar8 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar8,param_2,puVar3,puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)local_60;
  iVar7 = local_60._4_4_;
  local_98 = local_68;
  local_68 = (void *)0x0;
  local_90 = (int)local_60;
  local_8c = local_60._4_4_;
  iVar5 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
  local_60 = 0;
  if (iVar7 < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar6 = local_90;
  }
  local_90 = (2 - (uint)(iVar6 != 0)) + iVar6;
  local_res8 = local_98;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    local_res8 = local_98;
  }
  pvVar10 = local_88;
  local_98 = local_res8;
  puVar8 = (undefined2 *)((longlong)local_res8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar8 = 0x20;
  puVar8[1] = 0;
  iVar6 = (int)local_80;
  if (local_90 < 2) {
    iVar13 = local_80._4_4_;
    local_88 = (void *)0x0;
    local_80 = 0;
  }
  else {
    iVar7 = 0;
    if ((int)local_80 != 0) {
      iVar7 = (int)local_80 + -1;
    }
    if ((local_90 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = 0;
    }
    local_res8 = (void *)0x0;
    iVar5 = local_90;
    if (local_8c < iVar6 + local_90 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      iVar5 = local_90;
    }
    pvVar2 = local_88;
    pvVar10 = local_98;
    iVar13 = local_8c;
    iVar6 = iVar5;
    if (iVar7 != 0) {
      local_90 = iVar5 + (uint)(iVar5 == 0) + iVar7;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar5);
      }
      iVar13 = local_8c;
      iVar6 = local_90;
      pvVar10 = local_98;
      pvVar1 = (void *)((longlong)local_98 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_98 = pvVar10;
  local_8c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar6 != 0)) + iVar6)) {
    local_90 = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar6 = local_90;
  }
  local_90 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_8c < local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar6);
  }
  pvVar10 = local_78;
  puVar8 = (undefined2 *)((longlong)local_98 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar8 = 0x20;
  puVar8[1] = 0;
  iVar6 = (int)local_70;
  if (local_90 < 2) {
    local_78 = (void *)0x0;
    local_70 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    iVar7 = 0;
    if ((int)local_70 != 0) {
      iVar7 = (int)local_70 + -1;
    }
    if ((local_90 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = 0;
    }
    if (local_8c < local_90 + iVar7 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    }
    pvVar2 = local_78;
    iVar5 = local_90;
    pvVar10 = local_98;
    iVar6 = local_90;
    if (iVar7 != 0) {
      lVar11 = (longlong)local_90;
      local_90 = local_90 + (uint)(local_90 == 0) + iVar7;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar5);
      }
      iVar6 = local_90;
      pvVar10 = local_98;
      pvVar1 = (void *)((longlong)local_98 + (lVar11 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
  }
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_1);
  *puVar9 = 0;
  *(int *)(puVar9 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar6,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar10,(longlong)iVar6 * 2);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return iVar7;
}



// FUNCTION 141258650 FUN_141258650 body=1345 status=ok
// SIG undefined FUN_141258650(void)

int FUN_141258650(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,short *param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  puVar9 = &DAT_143f3eda8;
  local_98 = (undefined2 *)0x0;
  local_90 = 0;
  puVar2 = (undefined2 *)0x0;
  if ((param_7 != (short *)0x0) && (puVar2 = (undefined2 *)0x0, *param_7 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_7[lVar7] != 0);
    uVar4 = (int)lVar7 + 1;
    local_90 = (ulonglong)uVar4;
    uVar12 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      uVar12 = (uint)local_90;
    }
    puVar1 = local_98;
    FGenericPlatformString::Memcpy(local_98,param_7,(longlong)(int)uVar4 * 2);
    puVar2 = puVar1;
    if (uVar12 != 0) goto LAB_1412586e9;
  }
  puVar1 = &DAT_143f3eda8;
LAB_1412586e9:
  if ((int)param_1[6] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar10,param_6,puVar11,puVar1);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  FString::PrintfImpl(&local_58,&DAT_144732490,param_5);
  puVar2 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_88,L"%s%s %s%s",puVar11,param_4,puVar1,puVar2);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144732490,param_3);
  puVar2 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar9,param_2,puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar5 = (int)local_60;
  iVar6 = local_60._4_4_;
  local_98 = local_68;
  local_68 = (undefined2 *)0x0;
  local_90._0_4_ = (int)local_60;
  local_90._4_4_ = local_60._4_4_;
  iVar3 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
  local_60 = 0;
  if (iVar6 < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar5 = (uint)local_90;
  }
  local_90._0_4_ = (2 - (uint)(iVar5 != 0)) + iVar5;
  param_7 = local_98;
  if (local_90._4_4_ < (int)(uint)local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    param_7 = local_98;
  }
  puVar9 = local_88;
  local_98 = param_7;
  param_7[(longlong)iVar5 - (ulonglong)(iVar5 != 0)] = 0x20;
  (param_7 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[1] = 0;
  iVar5 = (int)local_80;
  if ((int)(uint)local_90 < 2) {
    iVar13 = local_80._4_4_;
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
  }
  else {
    iVar6 = 0;
    if ((int)local_80 != 0) {
      iVar6 = (int)local_80 + -1;
    }
    if (((uint)local_90 != 0) || (iVar5 = 1, iVar6 == 0)) {
      iVar5 = 0;
    }
    param_7 = (undefined2 *)0x0;
    iVar3 = (uint)local_90;
    if (local_90._4_4_ < (int)(iVar5 + (uint)local_90 + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      iVar3 = (uint)local_90;
    }
    puVar2 = local_88;
    puVar9 = local_98;
    iVar13 = local_90._4_4_;
    iVar5 = iVar3;
    if (iVar6 != 0) {
      local_90._0_4_ = iVar3 + (uint)(iVar3 == 0) + iVar6;
      if (local_90._4_4_ < (int)(uint)local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar3);
      }
      iVar13 = local_90._4_4_;
      iVar5 = (uint)local_90;
      puVar9 = local_98;
      puVar1 = local_98 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0));
      _guard_xfg_dispatch_icall_nop(puVar1,puVar2,(longlong)iVar6 * 2);
      puVar1[iVar6] = 0;
    }
  }
  local_98 = puVar9;
  local_90._4_4_ = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar5 != 0)) + iVar5)) {
    local_90._0_4_ = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    iVar5 = (uint)local_90;
  }
  local_90._0_4_ = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_90._4_4_ < (int)(uint)local_90) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar5);
  }
  puVar9 = local_78;
  local_98[(longlong)iVar5 - (ulonglong)(iVar5 != 0)] = 0x20;
  (local_98 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[1] = 0;
  iVar5 = (int)local_70;
  if ((int)(uint)local_90 < 2) {
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_70 != 0) {
      iVar6 = (int)local_70 + -1;
    }
    if (((uint)local_90 != 0) || (iVar5 = 1, iVar6 == 0)) {
      iVar5 = 0;
    }
    if (local_90._4_4_ < (int)((uint)local_90 + iVar6 + iVar5)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
    }
    puVar2 = local_78;
    iVar3 = (uint)local_90;
    puVar9 = local_98;
    iVar5 = (uint)local_90;
    if (iVar6 != 0) {
      lVar7 = (longlong)(int)(uint)local_90;
      local_90._0_4_ = (uint)local_90 + ((uint)local_90 == 0) + iVar6;
      if (local_90._4_4_ < (int)(uint)local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar3);
      }
      iVar5 = (uint)local_90;
      puVar9 = local_98;
      puVar1 = local_98 + (lVar7 - (ulonglong)(iVar3 != 0));
      _guard_xfg_dispatch_icall_nop(puVar1,puVar2,(longlong)iVar6 * 2);
      puVar1[iVar6] = 0;
    }
  }
  if (param_7 != (undefined2 *)0x0) {
    FMemory::Free(param_7);
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar8 = 0;
  *(int *)(puVar8 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar8,puVar9,(longlong)iVar5 * 2);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return iVar6;
}



// FUNCTION 141258ba0 FUN_141258ba0 body=758 status=ok
// SIG undefined FUN_141258ba0(void)

uint * FUN_141258ba0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar5 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar8 + lVar5);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar7 = (longlong)(int)uVar10 * 0x20;
  local_res10 = (ulonglong *)(*param_1 + lVar7);
  uVar2 = *(ulonglong *)*param_3;
  *local_res10 = uVar2;
  local_res10[1] = 0;
  local_res10[2] = 0;
  *(undefined4 *)(local_res10 + 3) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 * 0x20 + *param_1),local_res10,0x18);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar7 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar7 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar8 + lVar5);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141258e67;
    }
  }
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar11;
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
    iVar11 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar4 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(uVar4 + iVar11) ^ uVar4 >> 0xd;
    uVar14 = (iVar11 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar14 ^ uVar4 >> 5;
    uVar14 = (uVar14 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar4) - uVar14 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x1c) = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141258e67:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141258ea0 FUN_141258ea0 body=322 status=ok
// SIG undefined FUN_141258ea0(void)

longlong FUN_141258ea0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar1 = lVar6 + (longlong)(int)param_1[1] * 0x28;
  do {
    if (lVar6 == lVar1) {
      return 0;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar6 + 8)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar6 + 8) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar6);
        if (lVar3 != 0) goto LAB_141258f46;
      }
    }
    else {
LAB_141258f46:
      lVar4 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = FUN_1428dfc70();
        lVar4 = lVar3;
        do {
          if (lVar4 == lVar5) {
            if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x90)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) == lVar3 + 0x88)) {
              return lVar6;
            }
            break;
          }
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
    }
    lVar6 = lVar6 + 0x28;
  } while( true );
}



// FUNCTION 141258ff0 FUN_141258ff0 body=35 status=ok
// SIG undefined FUN_141258ff0(void)

void FUN_141258ff0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = AUGDoor::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x00014125900c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 141259020 FUN_141259020 body=1144 status=ok
// SIG undefined FUN_141259020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141259020(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined4 local_208;
  undefined4 local_204;
  longlong *local_200;
  undefined1 *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [192];
  ulonglong local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [192];
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar12 = (undefined1 *)0x0;
  local_3c = 0;
  local_48 = 0;
  local_40 = 0;
  local_1f0 = param_1;
  if (param_1 != (longlong *)0x0) {
    FUN_140725150(param_1,local_108,0);
  }
  puVar9 = local_108;
  if (local_48 != 0) {
    puVar9 = puVar12;
  }
  plVar10 = (longlong *)((ulonglong)puVar9 | local_48);
  puVar9 = (undefined1 *)((longlong)local_40 & 0x1fffffffffffffff);
  if (plVar10 + local_40 < plVar10) {
    puVar9 = puVar12;
  }
  local_1f8 = puVar9;
  if (puVar9 != (undefined1 *)0x0) {
    do {
      plVar13 = (longlong *)*plVar10;
      if ((plVar13 != (longlong *)0x0) &&
         (cVar5 = UActorComponent::ComponentHasTag(plVar13,param_2), cVar5 != '\0')) {
        pwVar6 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakVehicleBoostComponent::OnDamageCompOverlap",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_210,pwVar3 + 2,1);
        plVar4 = local_210;
        plVar11 = plVar13 + 0xae;
        FWeakObjectPtr::operator=(&local_220,0);
        local_218 = (longlong *)0x0;
        FWeakObjectPtr::operator=(&local_220,param_3);
        local_218 = plVar4;
        local_228 = 0;
        if ((plVar4 != (longlong *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_220), lVar7 != 0)) {
          UObject::FindFunction(lVar7,local_218);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
        iVar1 = (int)plVar13[0xaf];
        *(int *)(plVar13 + 0xaf) = iVar1 + 1;
        if (*(int *)((longlong)plVar13 + 0x57c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar8 = (undefined4)local_220;
        puVar8[1] = local_220._4_4_;
        *(longlong **)(puVar8 + 2) = local_218;
        FUN_1423974f0(plVar13,1);
        (**(code **)(*plVar13 + 0x638))(plVar13,0);
        puVar9 = local_1f8;
      }
      plVar10 = plVar10 + 1;
      puVar12 = puVar12 + 1;
      param_1 = local_1f0;
    } while (puVar12 != puVar9);
  }
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  FUN_14222e300(param_1,&local_1e8);
  (**(code **)(*param_1 + 0x4b8))(param_1,&local_1e8,1);
  local_210 = local_1e8;
  plVar10 = local_1e8 + (int)local_1e0;
  plVar13 = local_1e8;
  local_220 = plVar10;
  if (local_1e8 != plVar10) {
    do {
      puVar12 = (undefined1 *)0x0;
      local_118 = 0;
      local_110 = 0;
      local_10c = 0;
      local_210 = plVar13;
      if (*plVar13 != 0) {
        FUN_140725150(*plVar13,local_1d8,0);
      }
      puVar9 = local_1d8;
      if (local_118 != 0) {
        puVar9 = puVar12;
      }
      plVar11 = (longlong *)((ulonglong)puVar9 | local_118);
      puVar9 = (undefined1 *)((longlong)local_110 & 0x1fffffffffffffff);
      if (plVar11 + local_110 < plVar11) {
        puVar9 = (undefined1 *)0x0;
      }
      local_1f8 = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        do {
          plVar10 = (longlong *)*plVar11;
          if ((plVar10 != (longlong *)0x0) &&
             (cVar5 = UActorComponent::ComponentHasTag(plVar10,param_2), cVar5 != '\0')) {
            pwVar6 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakVehicleBoostComponent::OnDamageCompOverlap",L"::");
            pwVar3 = (wchar_t *)0x0;
            while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
              pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_1f0,pwVar3 + 2);
            plVar4 = local_1f0;
            plVar13 = plVar10 + 0xae;
            FWeakObjectPtr::operator=(&local_208,0);
            local_200 = (longlong *)0x0;
            FWeakObjectPtr::operator=(&local_208,param_3);
            local_200 = plVar4;
            local_228 = 0;
            if ((plVar4 != (longlong *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_208), lVar7 != 0)
               ) {
              UObject::FindFunction(lVar7,local_200);
            }
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
            iVar1 = (int)plVar10[0xaf];
            *(int *)(plVar10 + 0xaf) = iVar1 + 1;
            if (*(int *)((longlong)plVar10 + 0x57c) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
            }
            puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar13);
            *puVar8 = local_208;
            puVar8[1] = local_204;
            *(longlong **)(puVar8 + 2) = local_200;
            FUN_1423974f0(plVar10,CONCAT71((int7)((ulonglong)puVar8 >> 8),1));
            (**(code **)(*plVar10 + 0x638))(plVar10,0);
            puVar9 = local_1f8;
          }
          plVar11 = plVar11 + 1;
          puVar12 = puVar12 + 1;
          plVar13 = local_210;
          plVar10 = local_220;
        } while (puVar12 != puVar9);
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 1;
      local_210 = plVar13;
    } while (plVar13 != plVar10);
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412594a0 FUN_1412594a0 body=589 status=ok
// SIG undefined FUN_1412594a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412594a0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [192];
  ulonglong local_110;
  int local_108;
  undefined4 local_104;
  undefined1 local_100 [192];
  ulonglong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  puVar6 = (undefined1 *)0x0;
  local_34 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (longlong *)0x0) {
    FUN_140725150(param_1,local_100,0);
  }
  puVar2 = local_100;
  if (local_40 != 0) {
    puVar2 = puVar6;
  }
  plVar4 = (longlong *)((ulonglong)puVar2 | local_40);
  puVar2 = (undefined1 *)((longlong)local_38 & 0x1fffffffffffffff);
  if (plVar4 + local_38 < plVar4) {
    puVar2 = puVar6;
  }
  if (puVar2 != (undefined1 *)0x0) {
    do {
      plVar3 = (longlong *)*plVar4;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = UActorComponent::ComponentHasTag(plVar3,param_2), cVar1 != '\0')) {
        (**(code **)(*plVar3 + 0x638))(plVar3,param_3);
      }
      plVar4 = plVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar2);
  }
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  FUN_14222e300(param_1,&local_1e8);
  (**(code **)(*param_1 + 0x4b8))(param_1,&local_1e8,1);
  plVar4 = local_1e8 + (int)local_1e0;
  plVar3 = local_1e8;
  local_1d8 = plVar4;
  if (local_1e8 != plVar4) {
    do {
      puVar6 = (undefined1 *)0x0;
      local_110 = 0;
      local_108 = 0;
      local_104 = 0;
      if (*plVar3 != 0) {
        FUN_140725150(*plVar3,local_1d0,0);
      }
      puVar2 = local_1d0;
      if (local_110 != 0) {
        puVar2 = puVar6;
      }
      plVar5 = (longlong *)((ulonglong)puVar2 | local_110);
      puVar2 = (undefined1 *)((longlong)local_108 & 0x1fffffffffffffff);
      if (plVar5 + local_108 < plVar5) {
        puVar2 = (undefined1 *)0x0;
      }
      if (puVar2 != (undefined1 *)0x0) {
        do {
          plVar4 = (longlong *)*plVar5;
          if ((plVar4 != (longlong *)0x0) &&
             (cVar1 = UActorComponent::ComponentHasTag(plVar4,param_2), cVar1 != '\0')) {
            (**(code **)(*plVar4 + 0x638))(plVar4,param_3);
          }
          plVar5 = plVar5 + 1;
          puVar6 = puVar6 + 1;
          plVar4 = local_1d8;
        } while (puVar6 != puVar2);
      }
      if (local_110 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4);
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412596f0 FUN_1412596f0 body=1139 status=ok
// SIG undefined FUN_1412596f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412596f0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_14125981f;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_14125981f:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1412598df;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1412598df:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1412596f0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 141259b70 FUN_141259b70 body=349 status=ok
// SIG undefined FUN_141259b70(void)

void FUN_141259b70(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar8 = iVar5;
joined_r0x000141259b9a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar7 * 2 + 1) <
              *(int *)(param_1 + (longlong)iVar6 * 2 + 5)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(int *)(puVar9 + 1) < *(int *)(puVar10 + 1)) {
          if (puVar10 != puVar9) {
            uVar2 = puVar9[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar2;
            *puVar9 = uVar3;
            puVar9[1] = uVar4;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000141259b9a;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar8 + -1;
      iVar1 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar9) {
        uVar2 = puVar9[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar9;
        param_1[1] = uVar2;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar6 * 2 + 1) <
                *(int *)(param_1 + (longlong)iVar1 * 2 + 5)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(int *)(puVar11 + 1) <= *(int *)(puVar10 + 1)) break;
          if (puVar11 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            *puVar11 = *puVar10;
            puVar11[1] = uVar2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141259cd0 HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> body=535 status=ok
// SIG undefined HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar9 = iVar7 * 2 + 1;
    iVar1 = iVar9;
    iVar10 = iVar7;
joined_r0x000141259d07:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar7 * 2;
        iVar13 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          if (*(int *)(param_1 + ((longlong)iVar9 + 2) * 2 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)param_1[((longlong)iVar9 + 2) * 2];
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (iVar8 < 0) {
            iVar13 = iVar9;
          }
          iVar13 = iVar13 + 1;
        }
        puVar14 = param_1 + (longlong)iVar7 * 2;
        puVar16 = param_1 + (longlong)iVar13 * 2;
        if (*(int *)(puVar16 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar16;
        }
        if (*(int *)(puVar14 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar14;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (iVar7 < 0) {
          if (puVar14 != puVar16) {
            uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar3 = *(undefined4 *)(puVar16 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
            *(undefined4 *)(puVar14 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
          }
          iVar9 = iVar13 * 2 + 1;
          iVar7 = iVar13;
          goto joined_r0x000141259d07;
        }
      }
      iVar9 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar9;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar16) {
        uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar3 = *(undefined4 *)(puVar16 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar16;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar16 = uVar5;
        puVar16[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar9 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar9 * 2 + 1) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = (undefined2 *)param_1[(longlong)iVar9 * 2];
            }
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 2 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)param_1[((longlong)iVar1 + 2) * 2];
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
            if (iVar10 < 0) {
              iVar9 = iVar1;
            }
            iVar9 = iVar9 + 1;
          }
          puVar15 = param_1 + (longlong)iVar7 * 2;
          puVar14 = param_1 + (longlong)iVar9 * 2;
          if (*(int *)(puVar14 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar14;
          }
          if (*(int *)(puVar15 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar15;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (-1 < iVar7) break;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141259ef0 FUN_141259ef0 body=373 status=ok
// SIG undefined FUN_141259ef0(void)

void FUN_141259ef0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar6 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar5 = FUN_14122e820(lVar2);
      cVar1 = *(char *)(param_1 + 0x3e9);
      uVar11 = 0;
      local_res18 = 0;
      uVar7 = uVar11;
      uVar9 = uVar11;
      uVar10 = uVar11;
      if (0 < *(int *)(param_1 + 0x350)) {
        do {
          lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x348));
          if (lVar2 != 0) {
            lVar6 = UAESHelper::GetPrivateStaticClass();
            lVar2 = *(longlong *)(lVar2 + 0x10);
            if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            uVar7 = local_res18;
            if (bVar4) {
              uVar3 = *(ulonglong *)(uVar10 + *(longlong *)(param_1 + 0x348));
              if ((*(char *)(uVar3 + 0x38) == '\0') || (cVar1 != '\0')) {
                if (*(char *)(uVar3 + 0x39) != '\0') {
                  if (cVar5 != '\0') goto LAB_14125a00b;
                  if (*(char *)(uVar3 + 0x39) != '\0') goto LAB_14125a02d;
                }
                if (*(char *)(uVar3 + 0x38) != '\0') goto LAB_14125a02d;
              }
LAB_14125a00b:
              if ((local_res18 == 0) || (*(byte *)(local_res18 + 0x30) < *(byte *)(uVar3 + 0x30))) {
                uVar7 = uVar3;
                local_res18 = uVar3;
              }
            }
          }
LAB_14125a02d:
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 8;
        } while ((int)uVar8 < *(int *)(param_1 + 0x350));
        if (uVar7 != 0) {
          uVar11 = *(ulonglong *)(uVar7 + 0x40);
        }
      }
      *(ulonglong *)(param_1 + 0x3f0) = uVar11;
    }
  }
  return;
}



// FUNCTION 14125a070 FUN_14125a070 body=637 status=ok
// SIG undefined FUN_14125a070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14125a070(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_14125a140:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_14125a176:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x00014125a17f;
          goto LAB_14125a190;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar9 = puVar11, puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            puVar11 = puVar15;
            if (*(int *)(puVar9 + 1) <= *(int *)(puVar15 + 1)) {
              puVar11 = puVar9;
            }
          }
          if (puVar9 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            *puVar9 = *puVar13;
            puVar9[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_14125a25b;
      }
LAB_14125a24c:
      local_338 = lVar1;
      FUN_141259b70(puVar15,lVar8,param_3,param_4);
LAB_14125a25b:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x00014125a17f:
  if (*(int *)(puVar14 + 1) <= *(int *)(puVar9 + 3)) goto LAB_14125a176;
LAB_14125a190:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(int *)(puVar12 + -1) <= *(int *)(puVar14 + 1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_14125a176;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_14125a25b;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_14125a25b;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_14125a24c;
  goto LAB_14125a140;
}



// FUNCTION 14125a2f0 IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_> body=796 status=ok
// SIG undefined IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      local_358 = plVar12[2];
      lVar8 = ((longlong)puVar13 - (longlong)puVar17 >> 4) + 1;
      puVar16 = puVar17;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14125a3d0:
        if (8 < lVar8) {
          puVar17 = puVar16 + (lVar8 / 2) * 2;
          if (puVar17 != puVar16) {
            uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar4 = *(undefined4 *)(puVar16 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar1 = *puVar17;
            uVar2 = puVar17[1];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar3;
            *(undefined4 *)(puVar17 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
            *puVar16 = uVar1;
            puVar16[1] = uVar2;
          }
          puVar14 = puVar13 + 2;
          puVar17 = puVar16;
LAB_14125a406:
          puVar11 = puVar17;
          puVar17 = puVar11 + 2;
          if (puVar17 <= puVar13) goto code_r0x00014125a40f;
          goto LAB_14125a440;
        }
        for (; puVar14 = puVar16, puVar17 = puVar16, puVar16 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar17 = puVar17 + 2, puVar17 <= puVar13) {
            if (*(int *)(puVar17 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar17;
            }
            if (*(int *)(puVar14 + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*puVar14;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
            if (iVar10 < 0) {
              puVar14 = puVar17;
            }
          }
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar4 = *(undefined4 *)(puVar13 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(undefined4 *)(puVar14 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
          }
        }
        goto LAB_14125a537;
      }
LAB_14125a528:
      HeapSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
                (puVar17,lVar8,param_3,param_4);
LAB_14125a537:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
code_r0x00014125a40f:
  if (*(int *)(puVar11 + 3) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar17;
  }
  if (*(int *)(puVar16 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar16;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  if (-1 < iVar6) goto LAB_14125a406;
LAB_14125a440:
  do {
    puVar15 = puVar14;
    puVar14 = puVar15 + -2;
    if (puVar14 <= puVar16) break;
    if (*(int *)(puVar16 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar16;
    }
    if (*(int *)(puVar15 + -1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar14;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  } while (-1 < iVar6);
  if (puVar17 <= puVar14) {
    if (puVar17 != puVar14) {
      uVar3 = *(undefined4 *)((longlong)puVar15 + -0xc);
      uVar4 = *(undefined4 *)(puVar15 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar15 + -4);
      uVar1 = *puVar17;
      uVar2 = puVar11[3];
      *(undefined4 *)puVar17 = *(undefined4 *)puVar14;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      *(undefined4 *)(puVar11 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
      *puVar14 = uVar1;
      puVar15[-1] = uVar2;
    }
    goto LAB_14125a406;
  }
  if (puVar16 != puVar14) {
    uVar3 = *(undefined4 *)((longlong)puVar15 + -0xc);
    uVar4 = *(undefined4 *)(puVar15 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar15 + -4);
    uVar1 = *puVar16;
    uVar2 = puVar16[1];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar14;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
    *(undefined4 *)(puVar16 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
    *puVar14 = uVar1;
    puVar15[-1] = uVar2;
  }
  iVar10 = iVar10 + -1;
  if ((longlong)((longlong)puVar14 + (-0x10 - (longlong)puVar16) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar17 & 0xfffffffffffffff0U)) {
    if (puVar17 < puVar13) {
      *plVar12 = (longlong)puVar17;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    if (puVar14 <= puVar16 + 2) goto LAB_14125a537;
    puVar13 = puVar15 + -4;
    puVar17 = puVar16;
  }
  else {
    if (puVar16 + 2 < puVar14) {
      *plVar12 = (longlong)puVar16;
      plVar12[1] = (longlong)(puVar15 + -4);
      *(int *)(plVar12 + 2) = iVar10;
      plVar12 = plVar12 + 3;
    }
    if (puVar13 <= puVar17) goto LAB_14125a537;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar17 >> 4) + 1;
  puVar16 = puVar17;
  if (iVar10 == 0) goto LAB_14125a528;
  goto LAB_14125a3d0;
}



// FUNCTION 14125a610 FUN_14125a610 body=585 status=ok
// SIG undefined FUN_14125a610(void)

void FUN_14125a610(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  uint uStack_7c;
  code *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pwVar11 = *(wchar_t **)(param_1 + 0x118);
  pwVar10 = (wchar_t *)0x0;
  if (pwVar11 != (wchar_t *)0x0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(pwVar11 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar11 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14125a668;
  }
  pwVar11 = pwVar10;
LAB_14125a668:
  if ((((*(char *)(param_1 + 1000) == '\0') && (pwVar11 != (wchar_t *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)(pwVar11 + 0x2d0) + 0x10))(pwVar11 + 0x2d0), cVar4 != '\0')
      ) && (pwVar9 = pwVar10, pwVar12 = pwVar10, 0 < *(int *)(param_1 + 0x350))) {
    do {
      lVar5 = *(longlong *)((longlong)pwVar12 + *(longlong *)(param_1 + 0x348));
      if (lVar5 != 0) {
        lVar6 = UPawnAction_Sequence::StaticClass();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*(longlong *)(pwVar11 + 0x2d0) + 0x20))(pwVar11 + 0x2d0,&local_68);
          cVar4 = FUN_142d52a00(&local_68);
          if (cVar4 == '\0') {
            lVar5 = *(longlong *)(pwVar11 + 800);
            if (lVar5 != 0) {
              lStack_70 = (ulonglong)uStack_7c << 0x20;
              local_78 = FUN_141275fe0;
              pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeAdded",L"::");
              pwVar3 = pwVar10;
              while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
                pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar3 = pwVar2;
              }
              FName::FName(&local_res8,pwVar3 + 2,1);
              FUN_1407260e0(lVar5 + 0x8c8,param_1,&local_78,local_res8);
            }
          }
          else {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            local_38 = local_58;
            FUN_14127eb80(param_1,&local_48);
          }
          *(undefined1 *)(param_1 + 1000) = 1;
        }
      }
      uVar8 = (int)pwVar9 + 1;
      pwVar9 = (wchar_t *)(ulonglong)uVar8;
      pwVar12 = pwVar12 + 4;
    } while ((int)uVar8 < *(int *)(param_1 + 0x350));
  }
  return;
}



// FUNCTION 14125a860 FUN_14125a860 body=603 status=ok
// SIG undefined FUN_14125a860(void)

void FUN_14125a860(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  uint uStack_7c;
  code *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pwVar12 = *(wchar_t **)(param_1 + 0x118);
  pwVar9 = (wchar_t *)0x0;
  if (pwVar12 != (wchar_t *)0x0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14125a8b8;
  }
  pwVar12 = pwVar9;
LAB_14125a8b8:
  if ((((*(char *)(param_1 + 1000) == '\0') && (pwVar12 != (wchar_t *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x10))(pwVar12 + 0x2d0), cVar4 != '\0')
      ) && (pwVar8 = pwVar9, pwVar11 = pwVar9, 0 < *(int *)(param_1 + 0x350))) {
    do {
      lVar5 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
      if (lVar5 != 0) {
        lVar6 = UAESHelper::GetPrivateStaticClass();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (*(char *)(*(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)) + 0x38) !=
            '\0')) {
          (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x20))(pwVar12 + 0x2d0,&local_68);
          cVar4 = FUN_142d52a00(&local_68);
          if (cVar4 == '\0') {
            lVar5 = *(longlong *)(pwVar12 + 800);
            if (lVar5 != 0) {
              lStack_70 = (ulonglong)uStack_7c << 0x20;
              local_78 = FUN_141275fe0;
              pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeAdded",L"::");
              pwVar3 = pwVar9;
              while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
                pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar3 = pwVar2;
              }
              FName::FName(&local_res8,pwVar3 + 2,1);
              FUN_1407260e0(lVar5 + 0x8c8,param_1,&local_78,local_res8);
            }
          }
          else {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            local_38 = local_58;
            FUN_14127eb80(param_1,&local_48);
          }
          *(undefined1 *)(param_1 + 1000) = 1;
        }
      }
      uVar10 = (int)pwVar11 + 1;
      pwVar8 = pwVar8 + 4;
      pwVar11 = (wchar_t *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x350));
  }
  return;
}



// FUNCTION 14125aac0 FUN_14125aac0 body=603 status=ok
// SIG undefined FUN_14125aac0(void)

void FUN_14125aac0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  uint uStack_7c;
  code *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pwVar12 = *(wchar_t **)(param_1 + 0x118);
  pwVar9 = (wchar_t *)0x0;
  if (pwVar12 != (wchar_t *)0x0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14125ab18;
  }
  pwVar12 = pwVar9;
LAB_14125ab18:
  if ((((*(char *)(param_1 + 1000) == '\0') && (pwVar12 != (wchar_t *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x10))(pwVar12 + 0x2d0), cVar4 != '\0')
      ) && (pwVar8 = pwVar9, pwVar11 = pwVar9, 0 < *(int *)(param_1 + 0x350))) {
    do {
      lVar5 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
      if (lVar5 != 0) {
        lVar6 = FUN_1414e12e0();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (*(char *)(*(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)) + 0x39) !=
            '\0')) {
          (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x20))(pwVar12 + 0x2d0,&local_68);
          cVar4 = FUN_142d52a00(&local_68);
          if (cVar4 == '\0') {
            lVar5 = *(longlong *)(pwVar12 + 800);
            if (lVar5 != 0) {
              lStack_70 = (ulonglong)uStack_7c << 0x20;
              local_78 = FUN_141275fe0;
              pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeAdded",L"::");
              pwVar3 = pwVar9;
              while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
                pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar3 = pwVar2;
              }
              FName::FName(&local_res8,pwVar3 + 2,1);
              FUN_1407260e0(lVar5 + 0x8c8,param_1,&local_78,local_res8);
            }
          }
          else {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            local_38 = local_58;
            FUN_14127eb80(param_1,&local_48);
          }
          *(undefined1 *)(param_1 + 1000) = 1;
        }
      }
      uVar10 = (int)pwVar11 + 1;
      pwVar8 = pwVar8 + 4;
      pwVar11 = (wchar_t *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x350));
  }
  return;
}



// FUNCTION 14125ad20 FUN_14125ad20 body=603 status=ok
// SIG undefined FUN_14125ad20(void)

void FUN_14125ad20(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  uint uStack_7c;
  code *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pwVar12 = *(wchar_t **)(param_1 + 0x118);
  pwVar9 = (wchar_t *)0x0;
  if (pwVar12 != (wchar_t *)0x0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14125ad78;
  }
  pwVar12 = pwVar9;
LAB_14125ad78:
  if ((((*(char *)(param_1 + 1000) == '\0') && (pwVar12 != (wchar_t *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x10))(pwVar12 + 0x2d0), cVar4 != '\0')
      ) && (pwVar8 = pwVar9, pwVar11 = pwVar9, 0 < *(int *)(param_1 + 0x350))) {
    do {
      lVar5 = *(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348));
      if (lVar5 != 0) {
        lVar6 = FUN_1414e4a40();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (*(char *)(*(longlong *)((longlong)pwVar8 + *(longlong *)(param_1 + 0x348)) + 0x48) !=
            '\0')) {
          (**(code **)(*(longlong *)(pwVar12 + 0x2d0) + 0x20))(pwVar12 + 0x2d0,&local_68);
          cVar4 = FUN_142d52a00(&local_68);
          if (cVar4 == '\0') {
            lVar5 = *(longlong *)(pwVar12 + 800);
            if (lVar5 != 0) {
              lStack_70 = (ulonglong)uStack_7c << 0x20;
              local_78 = FUN_141275fe0;
              pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthTypeAdded",L"::");
              pwVar3 = pwVar9;
              while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
                pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar3 = pwVar2;
              }
              FName::FName(&local_res8,pwVar3 + 2,1);
              FUN_1407260e0(lVar5 + 0x8c8,param_1,&local_78,local_res8);
            }
          }
          else {
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            local_38 = local_58;
            FUN_14127eb80(param_1,&local_48);
          }
          *(undefined1 *)(param_1 + 1000) = 1;
        }
      }
      uVar10 = (int)pwVar11 + 1;
      pwVar8 = pwVar8 + 4;
      pwVar11 = (wchar_t *)(ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x350));
  }
  return;
}



// FUNCTION 14125af80 FUN_14125af80 body=381 status=ok
// SIG undefined FUN_14125af80(void)

int FUN_14125af80(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  uint local_res8;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = 0;
  local_res8 = 0;
  uVar12 = uVar7;
  if ((*(longlong *)*param_1 == 0) || (lVar3 = FUN_141796df0(), lVar3 != 0)) {
    bVar13 = 0;
    uVar9 = uVar7;
  }
  else {
    bVar13 = 1;
    uVar9 = uVar7;
  }
  do {
    uVar8 = (uint)uVar9;
    uVar12 = uVar12 + 1;
    uVar9 = (ulonglong)(uVar8 + 1);
    uVar5 = (uint)uVar7;
    if ((longlong)uVar12 < lVar11) {
      lVar3 = uVar12 * 0x18;
      do {
        if ((*(longlong *)(lVar3 + *param_1) == 0) ||
           (lVar4 = FUN_141796df0(lVar3 + *param_1), lVar4 != 0)) {
          bVar2 = 0;
        }
        else {
          bVar2 = 1;
        }
        uVar5 = local_res8;
        if (bVar13 != bVar2) break;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar12 = uVar12 + 1;
        lVar3 = lVar3 + 0x18;
      } while ((longlong)uVar12 < lVar11);
    }
    iVar10 = (int)uVar9 - uVar8;
    if (bVar13 == 0) {
      if (iVar10 != 0) {
        plVar6 = (longlong *)(*param_1 + 8 + (longlong)(int)uVar8 * 0x18);
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (uVar5 != uVar8) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)(int)uVar5 * 0x18),
                   (void *)(*param_1 + (longlong)(int)uVar8 * 0x18),(longlong)iVar10 * 0x18);
      }
      local_res8 = uVar5 + iVar10;
    }
    uVar7 = (ulonglong)local_res8;
    bVar13 = bVar13 ^ 1;
    if (lVar11 <= (longlong)uVar12) {
      *(uint *)(param_1 + 1) = local_res8;
      return iVar1 - local_res8;
    }
  } while( true );
}



// FUNCTION 14125b100 FUN_14125b100 body=380 status=ok
// SIG undefined FUN_14125b100(void)

void FUN_14125b100(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  int local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 != 0) {
    puVar7 = (undefined8 *)FGuid::NewGuid(local_58);
    uVar5 = *puVar7;
    uVar6 = puVar7[1];
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_48 = param_1;
    FWeakObjectPtr::operator=(local_30,0);
    local_28 = 0;
    FWeakObjectPtr::operator=(local_20,param_2);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    local_18 = uVar5;
    uStack_10 = uVar6;
    FWeakObjectPtr::operator=(local_30,0);
    local_28 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar8 == (longlong *)0x0) {
      if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x28))(local_40,0);
        if (local_40 != (longlong *)0x0) {
          local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
        }
        local_38 = 0;
      }
    }
    else {
      *plVar8 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar8 + 1,param_2);
      *(undefined4 *)(plVar8 + 2) = uVar1;
      *(undefined4 *)((longlong)plVar8 + 0x14) = uVar2;
      *(undefined4 *)(plVar8 + 3) = uVar3;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_144012f78;
      FUN_14060dec0(plVar8,&local_40);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar9 = FMemory::Realloc(plVar8,0,0);
      if (lVar9 != 0) {
        FMemory::Free(lVar9);
      }
    }
    FUN_140677650(param_2,&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  }
  return;
}



// FUNCTION 14125b280 FUN_14125b280 body=394 status=ok
// SIG undefined FUN_14125b280(void)

undefined8 * FUN_14125b280(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  longlong local_18 [2];
  
  FUN_143066cd0();
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *param_1 = &PTR_FUN_144735cd0;
  param_1[0x8b] = &PTR_LAB_1447363e0;
  param_1[0x8c] = &PTR_LAB_1447363f8;
  param_1[0xd0] = &PTR_LAB_144736420;
  param_1[0xd1] = &PTR_LAB_144736438;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xd3) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd7) = 3;
  param_1[0xd8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c9) = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"BalanceStateComponent",1);
  uVar1 = *puVar3;
  uVar4 = UFGOnlineSessionClient::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0xd6] = lVar5;
  if (lVar5 != 0) {
    FUN_142350b20(lVar5,0);
    *(undefined1 *)(param_1[0xd6] + 0x1d0) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x691) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  if (param_1[2] != 0) {
    local_res8 = *(undefined8 *)(param_1[2] + 0x18);
    FName::ToString(&local_res8,local_18);
    cVar2 = FString::RemoveFromStart(local_18,&DAT_1462a29a0,1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xd9) = 1;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 14125b410 FUN_14125b410 body=440 status=ok
// SIG undefined FUN_14125b410(void)

undefined8 * FUN_14125b410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14125b280();
  *(undefined4 *)(param_1 + 0xdc) = 0x40000000;
  *param_1 = &PTR_FUN_144736508;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0x3e4ccccd;
  param_1[0x8b] = &PTR_LAB_144736c38;
  param_1[0x8c] = &PTR_LAB_144736c50;
  param_1[0xd0] = &PTR_LAB_144736c78;
  param_1[0xd1] = &PTR_LAB_144736c90;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Mesh3P",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xde] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProjectileMovementComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1430a9310();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xdf] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProximityDetector",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a175e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xe0] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MainCollision",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a175e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xe1] = uVar3;
  param_1[0x2d] = param_1[0xde];
  *(undefined1 *)((longlong)param_1 + 0x5ad) = 1;
  return param_1;
}



// FUNCTION 14125b5d0 FUN_14125b5d0 body=213 status=ok
// SIG undefined FUN_14125b5d0(void)

undefined8 * FUN_14125b5d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143066e70();
  *param_1 = &PTR__scalar_deleting_destructor__144732cb8;
  param_1[0x8b] = &PTR_LAB_144733798;
  param_1[0x8c] = &PTR_LAB_144733808;
  param_1[0x8d] = &PTR_LAB_144733828;
  param_1[0x11b] = &PTR_LAB_144733840;
  param_1[0x11c] = &PTR_LAB_144733868;
  param_1[0x11d] = &PTR_LAB_144733880;
  param_1[0x11e] = &PTR_LAB_1447338d8;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 2;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x12a);
  *(undefined1 *)((longlong)param_1 + 0x95c) = 2;
  FUN_14246fd50(param_1 + 0x12a,0);
  uVar1 = UEnvQueryTest_Cover::StaticClass();
  param_1[0xfc] = uVar1;
  return param_1;
}



// FUNCTION 14125b6b0 FUN_14125b6b0 body=375 status=ok
// SIG undefined FUN_14125b6b0(void)

undefined8 * FUN_14125b6b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14125b5d0();
  *param_1 = &PTR_FUN_14473d8f8;
  param_1[0x8b] = &PTR_LAB_14473e3e0;
  param_1[0x8c] = &PTR_LAB_14473e450;
  param_1[0x8d] = &PTR_LAB_14473e470;
  param_1[0x11b] = &PTR_LAB_14473e488;
  param_1[0x11c] = &PTR_LAB_14473e4b0;
  param_1[0x11d] = &PTR_LAB_14473e4c8;
  param_1[0x11e] = &PTR_LAB_14473e520;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 2;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 2;
  *(undefined4 *)(param_1 + 0x135) = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0x3f800000;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0xff;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  *(byte *)(param_1 + 0x143) = *(byte *)(param_1 + 0x143) & 0xc0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar3 = *puVar1;
  uVar2 = AInteractiveFoliageActor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x134] = uVar3;
  FUN_142350b20(uVar3,0);
  return param_1;
}



// FUNCTION 14125b830 FUN_14125b830 body=141 status=ok
// SIG undefined FUN_14125b830(void)

undefined8 * FUN_14125b830(undefined8 *param_1)

{
  FUN_14125b5d0();
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__1447338f0;
  param_1[0x8b] = &PTR_LAB_1447343d8;
  param_1[0x8c] = &PTR_LAB_144734448;
  param_1[0x8d] = &PTR_LAB_144734468;
  param_1[0x11b] = &PTR_LAB_144734480;
  param_1[0x11c] = &PTR_LAB_1447344a8;
  param_1[0x11d] = &PTR_LAB_1447344c0;
  param_1[0x11e] = &PTR_LAB_144734518;
  return param_1;
}



// FUNCTION 14125b8c0 FUN_14125b8c0 body=341 status=ok
// SIG undefined FUN_14125b8c0(void)

undefined8 * FUN_14125b8c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"SeatComponent");
  uVar1 = FUN_1414e0f70();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SeatComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_140e69380(param_1,param_2);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  param_1[0xa3] = param_1[0x9b];
  *param_1 = &PTR_FUN_144738f18;
  param_1[0x8b] = &PTR_LAB_144739778;
  param_1[0x98] = &PTR_LAB_1447397d0;
  param_1[0x99] = &PTR_LAB_1447397f0;
  param_1[0xa0] = &PTR_LAB_1447399c0;
  param_1[0xa1] = &PTR_LAB_144739a10;
  param_1[0xa2] = &PTR_LAB_144739a28;
  *(undefined1 *)((longlong)param_1 + 0x542) = 1;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0xff00;
  param_1[0xaf] = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0xff00;
  param_1[0xab] = DAT_146877938;
  param_1[0xac] = DAT_146877940;
  param_1[0xaa] = DAT_146877948;
  return param_1;
}



// FUNCTION 14125ba20 FUN_14125ba20 body=244 status=ok
// SIG undefined FUN_14125ba20(void)

undefined8 * FUN_14125ba20(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"SeatComponent");
  uVar1 = FUN_1414e0f70();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SeatComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_140e69380(param_1,param_2);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *param_1 = &PTR_FUN_1447383e0;
  param_1[0x8b] = &PTR_LAB_144738c40;
  param_1[0x98] = &PTR_LAB_144738c98;
  param_1[0x99] = &PTR_LAB_144738cb8;
  param_1[0xa0] = &PTR_LAB_144738e88;
  param_1[0xa1] = &PTR_LAB_144738ed8;
  param_1[0xa2] = &PTR_LAB_144738ef0;
  param_1[0xa3] = param_1[0x9b];
  *(undefined1 *)((longlong)param_1 + 0x542) = 1;
  return param_1;
}



// FUNCTION 14125bb20 FUN_14125bb20 body=137 status=ok
// SIG undefined FUN_14125bb20(void)

undefined8 * FUN_14125bb20(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *local_res8;
  
  *param_1 = 0;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x290))(param_2,&local_res8);
  if (plVar1 != plVar3) {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = *plVar3;
    *plVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14125bbb0 FUN_14125bbb0 body=509 status=ok
// SIG undefined FUN_14125bbb0(void)

longlong FUN_14125bbb0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_48 [32];
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 0x10) = param_6;
  FWeakObjectPtr::operator=(param_1 + 0x18,0);
  FWeakObjectPtr::operator=(param_1 + 0x20,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar3 = FUN_1409655a0(param_3);
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = AUGDoor::GetPrivateStaticClass();
  uVar4 = FUN_1417985e0(uVar4,param_2,0,0,0,0,0,0,0);
  FWeakObjectPtr::operator=(param_1,uVar4);
  uVar4 = FWeakObjectPtr::Get(param_1);
  uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  FUN_14234b270(uVar4,uVar5);
  uVar4 = FWeakObjectPtr::Get(param_1);
  FUN_142382f60(uVar4,param_2[0x9a],&DAT_146532184,*(undefined8 *)(lVar3 + 8));
  if (param_4 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1);
    iVar1 = *(int *)(lVar3 + 0x90);
    *(int *)(lVar3 + 0x90) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x94) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x88,iVar1);
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar1 * 8) = param_4;
  }
  FWeakObjectPtr::operator=(param_1 + 0x18,param_3);
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1);
    if (**(longlong **)(param_1 + 8) != 0) {
      FUN_1405a3150(uVar4,local_48,**(longlong **)(param_1 + 8),0);
      FUN_140591060(local_48);
    }
    plVar6 = (longlong *)**(longlong **)(param_1 + 0x10);
    plVar7 = plVar6 + (longlong)(int)(*(longlong **)(param_1 + 0x10))[1] * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      if (*plVar6 != 0) {
        FUN_1405a3150(uVar4,local_48,*plVar6,0);
        FUN_140591060(local_48);
      }
    }
  }
  return param_1;
}



// FUNCTION 14125bdb0 FUN_14125bdb0 body=949 status=ok
// SIG undefined FUN_14125bdb0(void)

undefined8 * FUN_14125bdb0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = FUN_14178c940();
  FUN_142326e40(param_1,uVar3);
  *param_1 = &PTR_FUN_144739a50;
  plVar6 = param_1 + 0x2f;
  param_1[5] = &PTR_LAB_144739ea0;
  plVar1 = param_1 + 0x35;
  *plVar6 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  FUN_140e84320(param_1 + 0x45,4);
  uStack_20 = 0;
  local_28 = FUN_1412805c0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144576620;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144576668;
  }
  if (&local_28 != plVar6) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar6 != 0) {
          lVar5 = FMemory::Realloc(*plVar6,0,0);
          *plVar6 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  local_28 = FUN_141264190;
  uStack_20 = 0;
  FUN_1410ad1b0(param_1 + 0x31,param_1,&local_28);
  local_28 = FUN_1412834f0;
  uStack_20 = 0;
  FUN_1410ad1b0(param_1 + 0x33,param_1,&local_28);
  uStack_20 = 0;
  local_28 = FUN_141280660;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (&local_28 != plVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x36) != 0) &&
         (plVar4 = (longlong *)*plVar1, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x36) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar5 = FMemory::Realloc(plVar6,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return param_1;
}



// FUNCTION 14125c170 FUN_14125c170 body=72 status=ok
// SIG undefined FUN_14125c170(void)

undefined8 * FUN_14125c170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotifyState::UAnimNotifyState(param_1,uVar1);
  *param_1 = &PTR_FUN_14473a2f8;
  FName::FName(param_1 + 6,L"CatchPickup",1);
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14125c1c0 FUN_14125c1c0 body=48 status=ok
// SIG undefined FUN_14125c1c0(void)

undefined8 * FUN_14125c1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 5;
  *param_1 = &PTR_FUN_14473d148;
  return param_1;
}



// FUNCTION 14125c1f0 FUN_14125c1f0 body=48 status=ok
// SIG undefined FUN_14125c1f0(void)

undefined8 * FUN_14125c1f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14473d3d8;
  return param_1;
}



// FUNCTION 14125c220 FUN_14125c220 body=44 status=ok
// SIG undefined FUN_14125c220(void)

undefined8 * FUN_14125c220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_14473d668;
  return param_1;
}



// FUNCTION 14125c250 FUN_14125c250 body=189 status=ok
// SIG undefined FUN_14125c250(void)

undefined8 * FUN_14125c250(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FUN_1409c3560();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__14473f838;
  param_1[5] = &PTR_LAB_14473fae8;
  param_1[0xc] = &PTR_LAB_14473fb30;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x38) <
      DAT_146877a20) {
    _Init_thread_header(&DAT_146877a20);
    if (DAT_146877a20 == -1) {
      FName::FName(&DAT_146877a18,L"TedioreThrow",1);
      _Init_thread_footer(&DAT_146877a20);
    }
  }
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  param_1[0x44] = DAT_146877a18;
  return param_1;
}



// FUNCTION 14125c310 FUN_14125c310 body=182 status=ok
// SIG undefined FUN_14125c310(void)

undefined8 * FUN_14125c310(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FUN_1409c3560();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__14473fb40;
  param_1[5] = &PTR_LAB_14473fdf0;
  param_1[0xc] = &PTR_LAB_14473fe38;
  param_1[0x43] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x38) <
      DAT_146877a50) {
    _Init_thread_header(&DAT_146877a50);
    if (DAT_146877a50 == -1) {
      FName::FName(&DAT_146877a48,L"Mag_01",1);
      _Init_thread_footer(&DAT_146877a50);
    }
  }
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  param_1[0x43] = DAT_146877a48;
  return param_1;
}



// FUNCTION 14125c3d0 FUN_14125c3d0 body=104 status=ok
// SIG undefined FUN_14125c3d0(void)

undefined8 * FUN_14125c3d0(undefined8 *param_1)

{
  FUN_1430398a0();
  *(undefined4 *)(param_1 + 0x8e) = 0xbf800000;
  *param_1 = &PTR_FUN_14473f440;
  param_1[5] = &PTR_LAB_14473f810;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8f) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f800000;
  return param_1;
}



// FUNCTION 14125c440 FUN_14125c440 body=180 status=ok
// SIG undefined FUN_14125c440(void)

undefined8 * FUN_14125c440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143039b30();
  *param_1 = &PTR_FUN_14473ef50;
  uVar1 = FUN_141435010();
  param_1[5] = uVar1;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  *param_1 = &PTR_FUN_14473f1c8;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  FUN_142d2e580(param_1 + 0x6d);
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  param_1[0x91] = 0;
  uVar1 = USoUIDialoguePanel::GetPrivateStaticClass();
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 0x68) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x85) = 10;
  return param_1;
}



// FUNCTION 14125c500 FUN_14125c500 body=146 status=ok
// SIG undefined FUN_14125c500(void)

undefined8 * FUN_14125c500(undefined8 *param_1)

{
  FUN_1430394d0();
  *param_1 = &PTR__scalar_deleting_destructor__14473e538;
  *(undefined4 *)(param_1 + 0xc5) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc6) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc3) = 0xbf800000;
  return param_1;
}



// FUNCTION 14125c5a0 UFGStatHat body=42 status=ok
// SIG undefined UFGStatHat(void)

undefined8 * UFGStatHat::UFGStatHat(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143039720();
  *param_1 = &PTR_FUN_14473e8d0;
  uVar1 = FUN_141432c40();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 14125c5d0 FUN_14125c5d0 body=104 status=ok
// SIG undefined FUN_14125c5d0(void)

undefined8 * FUN_14125c5d0(undefined8 *param_1)

{
  FUN_1430398a0();
  *(undefined4 *)(param_1 + 0x8e) = 0xbf800000;
  *param_1 = &PTR_FUN_14473eb58;
  param_1[5] = &PTR_LAB_14473ef28;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8f) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f800000;
  return param_1;
}



// FUNCTION 14125c640 FUN_14125c640 body=49 status=ok
// SIG undefined FUN_14125c640(void)

undefined8 * FUN_14125c640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143039b30();
  *param_1 = &PTR_FUN_14473ef50;
  uVar1 = FUN_141435010();
  param_1[5] = uVar1;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  return param_1;
}



// FUNCTION 14125c680 FUN_14125c680 body=266 status=ok
// SIG undefined FUN_14125c680(void)

undefined8 * FUN_14125c680(undefined8 *param_1)

{
  FUN_1430c8b30();
  *param_1 = &PTR_FUN_1447324a0;
  param_1[5] = &PTR_LAB_1447329d8;
  param_1[0x2f] = &PTR_LAB_144732a08;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 2;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 2;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 2;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 2;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 2;
  *(undefined2 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ea) = 1;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 14125c790 FUN_14125c790 body=81 status=ok
// SIG undefined FUN_14125c790(void)

undefined8 * FUN_14125c790(undefined8 *param_1)

{
  FUN_140a7b360();
  *param_1 = &PTR_FUN_1447352e0;
  param_1[5] = &PTR_LAB_144735790;
  param_1[0x39] = &PTR_LAB_1447357c0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 14125c7f0 UInterpTrackInstFloatAnimBPParam body=46 status=ok
// SIG undefined UInterpTrackInstFloatAnimBPParam(void)

undefined8 * UInterpTrackInstFloatAnimBPParam::UInterpTrackInstFloatAnimBPParam(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__1447357d8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14125c820 FUN_14125c820 body=330 status=ok
// SIG undefined FUN_14125c820(void)

undefined8 * FUN_14125c820(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *(undefined4 *)(param_1 + 7) = 0x41200000;
  *param_1 = &PTR_FUN_144734fe0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x42c80000;
  param_1[0xe] = 0;
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
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FName::FName(local_res8,L"Engine",1);
  param_1[5] = local_res8[0];
  FName::FName(local_res8,L"Vehicle",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 14125c970 FUN_14125c970 body=147 status=ok
// SIG undefined FUN_14125c970(void)

undefined8 * FUN_14125c970(undefined8 *param_1)

{
  FUN_143068930();
  *param_1 = &PTR__scalar_deleting_destructor__144734530;
  param_1[5] = &PTR_LAB_144734b70;
  param_1[0x2f] = &PTR_LAB_144734ba0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12e] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0x3f266666;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 14125ca10 FUN_14125ca10 body=161 status=ok
// SIG undefined FUN_14125ca10(void)

undefined8 * FUN_14125ca10(undefined8 *param_1)

{
  FUN_143068930();
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0x3f266666;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__144736d60;
  param_1[5] = &PTR_LAB_1447373a0;
  param_1[0x2f] = &PTR_LAB_1447373d0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  return param_1;
}



// FUNCTION 14125cac0 AMurnatanPlayerTargetVote body=49 status=ok
// SIG undefined AMurnatanPlayerTargetVote(void)

undefined8 * AMurnatanPlayerTargetVote::AMurnatanPlayerTargetVote(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR_FUN_144740190;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 14125cb00 FUN_14125cb00 body=446 status=ok
// SIG undefined FUN_14125cb00(void)

undefined8 * FUN_14125cb00(undefined8 *param_1)

{
  FUN_142326e40();
  *(undefined4 *)(param_1 + 0x2f) = 0x457a0000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x44fa0000;
  *param_1 = &PTR_FUN_144734bb8;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[5] = &PTR_LAB_144734fb0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x40400000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xbe4ccccd;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3e800000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x42c80000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 1;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_140590080(param_1 + 0x61);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined1 *)(param_1 + 7) = 4;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  return param_1;
}



// FUNCTION 14125ccc0 FUN_14125ccc0 body=43 status=ok
// SIG undefined FUN_14125ccc0(void)

undefined8 * FUN_14125ccc0(undefined8 *param_1)

{
  UPrimaryAssetLabel::UPrimaryAssetLabel();
  *param_1 = &PTR__scalar_deleting_destructor__144735a58;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return param_1;
}



// FUNCTION 14125ccf0 FUN_14125ccf0 body=67 status=ok
// SIG undefined FUN_14125ccf0(void)

undefined8 * FUN_14125ccf0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__144737910;
  param_1[5] = &PTR_LAB_144737d08;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 14125cd40 FUN_14125cd40 body=266 status=ok
// SIG undefined FUN_14125cd40(void)

undefined8 * FUN_14125cd40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_144738160;
  *(undefined4 *)(param_1 + 6) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x457a0000;
  *(undefined4 *)(param_1 + 7) = 0x458ca000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x447a0000;
  *(undefined4 *)(param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40a00000;
  *(undefined4 *)(param_1 + 9) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f5eb852;
  *(undefined4 *)(param_1 + 10) = 0x3ecccccd;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x3b83126f;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xc) = 0x3b03126f;
  *(undefined4 *)((longlong)param_1 + 100) = 0x453b8000;
  param_1[0xd] = 0x447a0000;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_142de2d20(param_1 + 0x11,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x21) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x40400000;
  *(undefined4 *)(param_1 + 0x22) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f4ccccd;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3dcccccd;
  param_1[0x24] = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x25) = 0x41200000;
  return param_1;
}



// FUNCTION 14125ce50 FUN_14125ce50 body=1059 status=ok
// SIG undefined FUN_14125ce50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14125ce50(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *param_1 = &PTR_FUN_144737d38;
  param_1[5] = &PTR_LAB_144738130;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x43fa0000;
  param_1[0x48] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x49) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x254) = DAT_1468b5d98;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x4b);
  param_1[0x5a] = 0x43fa0000;
  plVar1 = param_1 + 0x6f;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 2;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x6b) = 0x3eb33333;
  *plVar1 = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 2;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 2;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x3e4ccccd;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xbf800000;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf7;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined2 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x41200000;
  *(undefined4 *)(param_1 + 0x6d) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x6e) = 0x42c80000;
  iVar2 = *(int *)(param_1 + 0x70);
  lVar4 = (longlong)iVar2;
  *(int *)(param_1 + 0x70) = iVar2 + 6;
  if (*(int *)((longlong)param_1 + 900) < iVar2 + 6) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x38 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x48 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x58 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x60 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x68 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x70 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x78 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x80 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x88 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x90 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x98 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xa0 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xa8 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xb0 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xb8 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xc0 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 200 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xd0 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xd8 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xe0 + lVar4 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0xe8 + lVar4 * 0x28) = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x3f4ccccd;
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x3f99999a;
  return param_1;
}



// FUNCTION 14125d280 FUN_14125d280 body=315 status=ok
// SIG undefined FUN_14125d280(void)

undefined8 * FUN_14125d280(undefined8 *param_1)

{
  FUN_140a50ba0();
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0x101;
  *param_1 = &PTR_FUN_1447373e8;
  *(undefined2 *)((longlong)param_1 + 0x6ec) = 0x100;
  param_1[5] = &PTR_LAB_1447378e0;
  *(undefined1 *)((longlong)param_1 + 0x6ee) = 0;
  FName::FName(param_1 + 0xde,L"VehicleFlatbed",1);
  *(undefined1 *)(param_1 + 0xdf) = 1;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x712) = 0;
  *(undefined2 *)(param_1 + 0xe2) = 0x100;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71a) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x754) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xea) = 0x42c80000;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xed) = 1;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0xffffffff;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x10;
  param_1[0xd9] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xda) = 1;
  return param_1;
}



// FUNCTION 14125d3c0 FUN_14125d3c0 body=360 status=ok
// SIG undefined FUN_14125d3c0(void)

undefined8 * FUN_14125d3c0(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *param_1 = &PTR_FUN_144739ed0;
  param_1[5] = &PTR_LAB_14473a2c8;
  *(undefined1 *)(param_1 + 0x32) = 4;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x40a00000;
  param_1[0x43] = 0x40000000;
  param_1[0x44] = 0x425c0000;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x46) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x47) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x42480000;
  *(undefined2 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  param_1[0x58] = 0;
  return param_1;
}



// FUNCTION 14125d530 FUN_14125d530 body=182 status=ok
// SIG undefined FUN_14125d530(void)

undefined8 * FUN_14125d530(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_14473a970;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 10;
  param_1[0x13] = 0;
  param_1[0x14] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x15) = DAT_1468b5da8;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xf9 | 9;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  return param_1;
}



// FUNCTION 14125d5f0 FUN_14125d5f0 body=67 status=ok
// SIG undefined FUN_14125d5f0(void)

undefined8 * FUN_14125d5f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14473af40;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14125d640 FUN_14125d640 body=58 status=ok
// SIG undefined FUN_14125d640(void)

undefined8 * FUN_14125d640(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14473b228;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 14125d680 FUN_14125d680 body=43 status=ok
// SIG undefined FUN_14125d680(void)

undefined8 * FUN_14125d680(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14473b4f8;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 14125d6b0 FUN_14125d6b0 body=48 status=ok
// SIG undefined FUN_14125d6b0(void)

undefined8 * FUN_14125d6b0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14473b7c8;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 14125d6e0 UBehaviorTree body=51 status=ok
// SIG undefined UBehaviorTree(void)

undefined8 * UBehaviorTree::UBehaviorTree(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14473a5d0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14125d720 FUN_14125d720 body=113 status=ok
// SIG undefined FUN_14125d720(void)

undefined8 * FUN_14125d720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14473ba98;
  param_1[8] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"FoleAccessoryComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UGCombatTextWidget::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 14125d7a0 FUN_14125d7a0 body=213 status=ok
// SIG undefined FUN_14125d7a0(void)

undefined8 * FUN_14125d7a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_14473bd68;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xe1 | 1;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14125d880 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14473c050;
  return param_1;
}



// FUNCTION 14125d8b0 FUN_14125d8b0 body=63 status=ok
// SIG undefined FUN_14125d8b0(void)

undefined8 * FUN_14125d8b0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14473c320;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) & 0xfe;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14125d8f0 FUN_14125d8f0 body=51 status=ok
// SIG undefined FUN_14125d8f0(void)

undefined8 * FUN_14125d8f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined1 *)(param_1 + 7) = 0xff;
  *param_1 = &PTR_FUN_14473c608;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 14125d930 FUN_14125d930 body=37 status=ok
// SIG undefined FUN_14125d930(void)

undefined8 * FUN_14125d930(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14473c8d8;
  return param_1;
}



// FUNCTION 14125d960 FUN_14125d960 body=37 status=ok
// SIG undefined FUN_14125d960(void)

undefined8 * FUN_14125d960(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14473cba8;
  return param_1;
}



// FUNCTION 14125d990 FUN_14125d990 body=52 status=ok
// SIG undefined FUN_14125d990(void)

undefined8 * FUN_14125d990(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14473ce78;
  param_1[9] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 14125d9d0 FUN_14125d9d0 body=191 status=ok
// SIG undefined FUN_14125d9d0(void)

void FUN_14125d9d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x90);
    do {
      if (plVar3[3] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar3 + -8);
      plVar1 = (longlong *)plVar3[-0xd];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        plVar3[-0xd] = 0;
      }
      if ((longlong *)plVar3[-0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar3[-0xc] + 0x3b0))();
        plVar3[-0xc] = 0;
      }
      plVar3 = plVar3 + 0x17;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14125da90 FUN_14125da90 body=170 status=ok
// SIG undefined FUN_14125da90(void)

void FUN_14125da90(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = plVar3 + 0xb;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(plVar1 + 5);
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(plVar1 + 3);
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar1 + -8);
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x12;
      plVar1 = plVar1 + 0x12;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
    return;
  }
  return;
}



// FUNCTION 14125db40 FUN_14125db40 body=153 status=ok
// SIG undefined FUN_14125db40(void)

void FUN_14125db40(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x18);
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        do {
          FUN_140591060(lVar1);
          lVar1 = lVar1 + 0x18;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      plVar3 = plVar3 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14125dbe0 ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(void)

void TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
     ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FUN_14125da90(plVar1 + 3);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14125dc40 FUN_14125dc40 body=145 status=ok
// SIG undefined FUN_14125dc40(void)

void FUN_14125dc40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      plVar1 = (longlong *)plVar3[-1];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        plVar3[-1] = 0;
      }
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x3b0))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14125dce0 FUN_14125dce0 body=71 status=ok
// SIG undefined FUN_14125dce0(void)

void FUN_14125dce0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14125dd30 FUN_14125dd30 body=271 status=ok
// SIG undefined FUN_14125dd30(void)

void FUN_14125dd30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5f0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x408);
  lVar3 = *(longlong *)(param_1 + 0x400);
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x10;
    do {
      FUN_140591060(lVar3);
      lVar3 = lVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *(longlong *)(param_1 + 0x400);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14125de40 FUN_14125de40 body=251 status=ok
// SIG undefined FUN_14125de40(void)

void FUN_14125de40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x410) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x410) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x340);
  FUN_140591060(param_1 + 800);
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fcb7e0;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14125df40 FUN_14125df40 body=250 status=ok
// SIG undefined FUN_14125df40(void)

void FUN_14125df40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x8e8);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x878) != 0) {
    FMemory::Free();
  }
  FUN_140a7c970(param_1);
  return;
}



// FUNCTION 14125e040 FUN_14125e040 body=131 status=ok
// SIG undefined FUN_14125e040(void)

void FUN_14125e040(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x958) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x90c);
  thunk_FUN_142478640(param_1 + 0x900);
  FUN_14125e270(param_1);
  return;
}



// FUNCTION 14125e0d0 FUN_14125e0d0 body=402 status=ok
// SIG undefined FUN_14125e0d0(void)

void FUN_14125e0d0(longlong param_1)

{
  FUN_140499e30(param_1 + 0x438);
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
  ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(param_1 + 0x378);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f8);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 600);
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_140a29260(param_1 + 0x178);
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14125e270 FUN_14125e270 body=436 status=ok
// SIG undefined FUN_14125e270(void)

void FUN_14125e270(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x8d8);
  iVar3 = *(int *)(param_1 + 0x8e0);
  if (iVar3 != 0) {
    lVar4 = lVar4 + 8;
    do {
      FRichCurve::~FRichCurve(lVar4);
      lVar4 = lVar4 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x8d8);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  plVar2 = *(longlong **)(param_1 + 0x510);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  FRichCurve::~FRichCurve(param_1 + 0x430);
  thunk_FUN_142478640(param_1 + 0x3b8);
  thunk_FUN_142478640(param_1 + 0x368);
  thunk_FUN_142478640(param_1 + 0x318);
  thunk_FUN_142478640(param_1 + 0x308);
  thunk_FUN_142478640(param_1 + 0x2fc);
  thunk_FUN_142478640(param_1 + 0x2f0);
  thunk_FUN_142478640(param_1 + 0x2e0);
  thunk_FUN_142478640(param_1 + 0x2cc);
  thunk_FUN_142478640(param_1 + 0x26c);
  thunk_FUN_142478640(param_1 + 0x260);
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x230);
  thunk_FUN_142478640(param_1 + 0x224);
  thunk_FUN_142478640(param_1 + 0x218);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14125e430 FUN_14125e430 body=221 status=ok
// SIG undefined FUN_14125e430(void)

void FUN_14125e430(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_38 = (undefined4)uVar3;
  uStack_34 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = 0;
  uStack_1c = 0;
  puVar6 = (undefined8 *)FUN_142c901e0(param_2,local_18,uVar3,&local_28,0,param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
  }
  puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
  *puVar7 = *puVar6;
  puVar7[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 14125e510 FUN_14125e510 body=316 status=ok
// SIG undefined FUN_14125e510(void)

void FUN_14125e510(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50 [3];
  undefined1 local_38 [16];
  
  lVar4 = *param_2;
  lVar1 = lVar4 + (longlong)(int)param_2[1] * 0x48;
  if (lVar4 != lVar1) {
    puVar2 = (undefined4 *)(lVar4 + 0x24);
    do {
      iVar3 = puVar2[-5];
      _Src = *(void **)(puVar2 + -7);
      local_78 = (void *)0x0;
      uVar5 = 0;
      pvVar6 = (void *)0x0;
      if (iVar3 != 0) {
        local_70._0_4_ = iVar3;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar3,0);
        pvVar6 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar3 * 2);
        iVar3 = (int)local_70;
        uVar5 = local_70._4_4_;
      }
      local_58 = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_68 = pvVar6;
      local_60 = iVar3;
      local_5c = uVar5;
      FUN_1417978e0(&local_58,&local_68);
      local_50[2] = local_58;
      puVar2[-1] = 0xffffffff;
      *puVar2 = 0;
      FString::FString(local_38,local_50);
      FSoftObjectPath::operator=(puVar2 + 3,local_50 + 2);
      puVar2[1] = 0;
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      lVar4 = lVar4 + 0x48;
      puVar2 = puVar2 + 0x12;
    } while (lVar4 != lVar1);
  }
  return;
}



// FUNCTION 14125e650 FUN_14125e650 body=154 status=ok
// SIG undefined FUN_14125e650(void)

void FUN_14125e650(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)CAkSrcBaseEx::StopStream(param_2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (plVar3[0x8f] == *param_1)) {
      cVar2 = (**(code **)(*plVar3 + 0x858))(plVar3);
      if (cVar2 == '\0') {
        if ((char)plVar3[0x25] != '\x03') {
          (**(code **)(*plVar3 + 0x310))(plVar3,1);
        }
        FUN_142227350(plVar3,0,1);
      }
    }
  }
  return;
}



// FUNCTION 14125e6f0 FUN_14125e6f0 body=285 status=ok
// SIG undefined FUN_14125e6f0(void)

void FUN_14125e6f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_58 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = 0;
  uStack_2c = 0;
  cVar6 = FUN_142ca5390(*param_2,&local_38);
  if (cVar6 != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    local_48 = (undefined4)uVar3;
    uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = 0;
    uStack_1c = 0;
    puVar7 = (undefined8 *)FUN_142c901e0(param_2,local_18,uVar3,&local_28,0,param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 8);
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
    *puVar8 = *puVar7;
    puVar8[1] = puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 14125e810 FUN_14125e810 body=400 status=ok
// SIG undefined FUN_14125e810(void)

undefined8 FUN_14125e810(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)*param_2;
  puVar2 = puVar10 + (longlong)(int)param_2[1] * 9;
  if (puVar10 != puVar2) {
    piVar9 = (int *)(puVar10 + 5);
    do {
      piVar1 = piVar9 + -2;
      lVar6 = FWeakObjectPtr::Get(piVar1);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *piVar9) && (*(longlong *)(piVar9 + 2) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(piVar1,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *piVar9 = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(piVar1);
          if (lVar6 != 0) goto LAB_14125e8cc;
        }
      }
      else {
LAB_14125e8cc:
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar8 = FUN_14149b100();
          lVar7 = lVar6;
          do {
            if (lVar7 == lVar8) {
              lVar7 = *(longlong *)(*param_1 + 0x10);
              if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
                  != lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                cVar3 = *(char *)((longlong)piVar9 + -0xf);
                cVar5 = FUN_14126fbb0(*param_1,(char)piVar9[-4]);
                if ((cVar5 == cVar3) || ((cVar3 == '\0' && (lVar6 != param_1[1])))) {
                  return *puVar10;
                }
              }
              break;
            }
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
      }
      puVar10 = puVar10 + 9;
      piVar9 = piVar9 + 0x12;
    } while (puVar10 != puVar2);
  }
  return 0;
}



// FUNCTION 14125eca0 FUN_14125eca0 body=80 status=ok
// SIG undefined FUN_14125eca0(void)

longlong FUN_14125eca0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x688) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_143fe0658;
  FUN_140b4e670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 14125ecf0 FUN_14125ecf0 body=80 status=ok
// SIG undefined FUN_14125ecf0(void)

longlong FUN_14125ecf0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x688) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_143fe0658;
  FUN_140b4e670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 14125ed40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FNiagaraEmitterInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14500();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x960);
  }
  return param_1;
}



// FUNCTION 14125ed80 FUN_14125ed80 body=79 status=ok
// SIG undefined FUN_14125ed80(void)

longlong FUN_14125ed80(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x980);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x968);
  FUN_140e14500(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa40);
  }
  return param_1;
}



// FUNCTION 14125edd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AUGZombieChickenAIController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14500();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x970);
  }
  return param_1;
}



// FUNCTION 14125ee10 FUN_14125ee10 body=136 status=ok
// SIG undefined FUN_14125ee10(void)

longlong FUN_14125ee10(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x500) = &PTR_FUN_1441b4ba0;
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_144194f88;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 14125eea0 FUN_14125eea0 body=136 status=ok
// SIG undefined FUN_14125eea0(void)

longlong FUN_14125eea0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x500) = &PTR_FUN_1441b4ba0;
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_144194f88;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x548);
  }
  return param_1;
}



// FUNCTION 14125ef30 FUN_14125ef30 body=43 status=ok
// SIG undefined FUN_14125ef30(void)

undefined8 * FUN_14125ef30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14125ef60 FUN_14125ef60 body=201 status=ok
// SIG undefined FUN_14125ef60(void)

longlong FUN_14125ef60(longlong param_1,ulonglong param_2)

{
  FUN_140c30de0(param_1 + 0x228);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f8);
  }
  return param_1;
}



// FUNCTION 14125f030 FUN_14125f030 body=98 status=ok
// SIG undefined FUN_14125f030(void)

longlong FUN_14125f030(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14125f0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGXPBarUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142c63cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 14125f0e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_142c63cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14125f120 FUN_14125f120 body=52 status=ok
// SIG undefined FUN_14125f120(void)

undefined8 FUN_14125f120(undefined8 param_1,ulonglong param_2)

{
  FUN_14125de40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 14125f160 FUN_14125f160 body=136 status=ok
// SIG undefined FUN_14125f160(void)

longlong FUN_14125f160(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 14125f1f0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ADebugCameraController::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FMemory::Free();
  }
  FUN_14125dd30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 14125f240 FUN_14125f240 body=102 status=ok
// SIG undefined FUN_14125f240(void)

longlong FUN_14125f240(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 14125f2b0 FUN_14125f2b0 body=52 status=ok
// SIG undefined FUN_14125f2b0(void)

undefined8 FUN_14125f2b0(undefined8 param_1,ulonglong param_2)

{
  FUN_14125de40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 14125f2f0 FUN_14125f2f0 body=107 status=ok
// SIG undefined FUN_14125f2f0(void)

longlong FUN_14125f2f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 14125f360 FUN_14125f360 body=224 status=ok
// SIG undefined FUN_14125f360(void)

longlong FUN_14125f360(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x400);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3d0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3b8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3a0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x388);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x370);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x358);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  FUN_140aee3c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x408);
  }
  return param_1;
}



// FUNCTION 14125f440 FUN_14125f440 body=67 status=ok
// SIG undefined FUN_14125f440(void)

longlong FUN_14125f440(longlong param_1,ulonglong param_2)

{
  FUN_140a29260(param_1 + 0x9c0);
  FUN_14125df40(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9d0);
  }
  return param_1;
}



// FUNCTION 14125f490 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpCurveEdSetup::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14125f4d0 FUN_14125f4d0 body=316 status=ok
// SIG undefined FUN_14125f4d0(void)

longlong FUN_14125f4d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148);
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x140);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x130);
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x128);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x110);
  plVar1 = *(longlong **)(param_1 + 0x108);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x108);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14125f610 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UPlayerInfoComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14125e040();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9b8);
  }
  return param_1;
}



// FUNCTION 14125f650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FD3D12Adapter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14125e040();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9d0);
  }
  return param_1;
}



// FUNCTION 14125f690 FUN_14125f690 body=73 status=ok
// SIG undefined FUN_14125f690(void)

longlong FUN_14125f690(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_14083eff0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 14125f6e0 FUN_14125f6e0 body=279 status=ok
// SIG undefined FUN_14125f6e0(void)

longlong FUN_14125f6e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x308);
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  FUN_14125db40(param_1 + 0x278);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 14125f800 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f6540();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14125f840 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGQuestRewardRandom::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140a29260(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14125f890 FUN_14125f890 body=52 status=ok
// SIG undefined FUN_14125f890(void)

undefined8 FUN_14125f890(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 14125f8d0 FUN_14125f8d0 body=52 status=ok
// SIG undefined FUN_14125f8d0(void)

undefined8 FUN_14125f8d0(undefined8 param_1,ulonglong param_2)

{
  FUN_14125e0d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 14125f910 FUN_14125f910 body=67 status=ok
// SIG undefined FUN_14125f910(void)

longlong FUN_14125f910(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x690);
  FUN_140a51ae0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x788);
  }
  return param_1;
}



// FUNCTION 14125f960 FUN_14125f960 body=214 status=ok
// SIG undefined FUN_14125f960(void)

longlong FUN_14125f960(longlong param_1,ulonglong param_2)

{
  FUN_14125d9d0(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x248);
  FUN_14125dc40(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_140a29260(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c8);
  }
  return param_1;
}



// FUNCTION 14125fa40 FUN_14125fa40 body=84 status=ok
// SIG undefined FUN_14125fa40(void)

longlong FUN_14125fa40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14125faa0 FUN_14125faa0 body=107 status=ok
// SIG undefined FUN_14125faa0(void)

longlong FUN_14125faa0(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14125fb10 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULastAttackCondition::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14125fb70 FUN_14125fb70 body=84 status=ok
// SIG undefined FUN_14125fb70(void)

longlong FUN_14125fb70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14125fbd0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FGraniteTextureRenderResource::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14125fc30 FUN_14125fc30 body=238 status=ok
// SIG undefined FUN_14125fc30(void)

void FUN_14125fc30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadStarted",1);
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = *puVar1;
    local_28 = local_48;
    local_24 = local_44;
    local_20 = local_40;
    FUN_1430886e0(param_2,&local_28,0);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadEnded",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar1;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_1430886e0(param_2,&local_28,1);
  }
  return;
}



// FUNCTION 14125fd20 FUN_14125fd20 body=98 status=ok
// SIG undefined FUN_14125fd20(void)

void FUN_14125fd20(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    lVar3 = FUN_140e7e760(param_1 + 0x228,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_142d52a20(lVar3);
      uVar1 = FArchive::operator<<(uVar1);
      FUN_142d55510(uVar1,param_3);
    }
  }
  return;
}



// FUNCTION 14125fd90 FUN_14125fd90 body=82 status=ok
// SIG undefined FUN_14125fd90(void)

void FUN_14125fd90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x2a8);
  *(int *)(param_1 + 0x2a8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x2ac) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x2a0),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 14125fdf0 FUN_14125fdf0 body=92 status=ok
// SIG undefined FUN_14125fdf0(void)

void FUN_14125fdf0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x2b8);
  *(int *)(param_1 + 0x2b8) = iVar2 + 1;
  if (*(int *)(param_1 + 700) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(param_1 + 0x2b0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar3);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar3);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 14125fe50 FUN_14125fe50 body=97 status=ok
// SIG undefined FUN_14125fe50(void)

void FUN_14125fe50(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128ed90(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 14125fec0 FUN_14125fec0 body=97 status=ok
// SIG undefined FUN_14125fec0(void)

void FUN_14125fec0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128ede0(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 14125ff30 FUN_14125ff30 body=116 status=ok
// SIG undefined FUN_14125ff30(void)

void FUN_14125ff30(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x78) != 0)) ||
      (*(int *)(param_1 + 0x68) != 0)) && (param_2 != 0)) {
    lVar2 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140b1a2b0(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 14125ffb0 FUN_14125ffb0 body=97 status=ok
// SIG undefined FUN_14125ffb0(void)

void FUN_14125ffb0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128ef00(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 141260020 FUN_141260020 body=97 status=ok
// SIG undefined FUN_141260020(void)

void FUN_141260020(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128f020(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 141260090 FUN_141260090 body=97 status=ok
// SIG undefined FUN_141260090(void)

void FUN_141260090(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128f100(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 141260100 FUN_141260100 body=97 status=ok
// SIG undefined FUN_141260100(void)

void FUN_141260100(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128f1f0(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 141260170 FUN_141260170 body=97 status=ok
// SIG undefined FUN_141260170(void)

void FUN_141260170(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = APlayArea::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14128f870(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 1412601e0 FUN_1412601e0 body=99 status=ok
// SIG undefined FUN_1412601e0(void)

void FUN_1412601e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_14128f8a0(param_2,param_1);
  }
  return;
}



// FUNCTION 141260250 FUN_141260250 body=99 status=ok
// SIG undefined FUN_141260250(void)

void FUN_141260250(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_14128f9a0(param_2,param_1);
  }
  return;
}



// FUNCTION 1412602c0 FUN_1412602c0 body=99 status=ok
// SIG undefined FUN_1412602c0(void)

void FUN_1412602c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_14128fa70(param_2,param_1);
  }
  return;
}



// FUNCTION 141260330 FUN_141260330 body=164 status=ok
// SIG undefined FUN_141260330(void)

void FUN_141260330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) &&
     ((((*(byte *)(param_1 + 0x38) & 1) == 0 || (*(longlong *)(param_1 + 0x40) != 0)) &&
      (*(longlong *)(param_1 + 0x48) != 0)))) {
    lVar4 = FUN_1428e7a40();
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar5 = lVar3;
    if (lVar3 != 0) {
      while (lVar5 != lVar4) {
        plVar1 = (longlong *)(lVar5 + 0x30);
        lVar5 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        FUN_14128fb40(param_2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1412603e0 FUN_1412603e0 body=223 status=ok
// SIG undefined FUN_1412603e0(void)

void FUN_1412603e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffffc8;
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x7e0);
  if (lVar3 != 0) {
    uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      goto LAB_14126044e;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x7e0);
  uVar1 = FUN_1430255d0();
  lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
LAB_14126044e:
  if (lVar3 == 0) {
    FUN_14127dec0(param_1,param_2,param_3,0,in_stack_ffffffffffffffc8 & 0xffffff00);
  }
  else {
    uVar1 = FUN_141270ed0();
    FUN_142fe3d60(lVar3,local_res10,uVar1,param_2,1,0,0,1,0,0);
  }
  return;
}



// FUNCTION 1412604c0 FUN_1412604c0 body=1114 status=ok
// SIG undefined FUN_1412604c0(void)

undefined8 *
FUN_1412604c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  if (0.0001 < param_4) {
    FRotator::Vector(param_2,&local_b8);
    FRotator::Vector(param_3,&local_c8);
    fVar2 = local_c0 * local_b0;
    fVar1 = _guard_xfg_dispatch_icall_nop(param_4 * 0.017453292);
    if (local_c8 * local_b8 + local_c4 * local_b4 + fVar2 < fVar1) {
      fVar7 = local_c0 * local_b4 - local_c4 * local_b0;
      fVar6 = local_c4 * local_b8 - local_c8 * local_b4;
      fVar8 = local_c8 * local_b0 - local_b8 * local_c0;
      fVar3 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
      fVar1 = fVar6;
      fVar2 = fVar7;
      fVar9 = fVar8;
      if ((fVar3 != 1.0) &&
         (fVar1 = DAT_1468b5d98, fVar2 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, 1e-08 <= fVar3)) {
        auVar4 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar9 = auVar4._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar3 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar3 * 0.5 * fVar9 * fVar9);
        fVar1 = fVar6 * fVar9;
        fVar2 = fVar7 * fVar9;
        fVar9 = fVar8 * fVar9;
      }
      param_4 = param_4 * 0.008726646;
      if (param_4 < 0.0) {
        fVar3 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar3 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar3 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (-1.5707964 <= param_4) {
          fVar3 = 1.0;
        }
        else {
          fVar3 = -1.0;
          param_4 = -3.1415927 - param_4;
        }
      }
      else {
        fVar3 = -1.0;
        param_4 = 3.1415927 - param_4;
      }
      fVar6 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar6 * 2.3889859e-08) * fVar6 - 0.00019840874) * fVar6 +
                  0.008333331) * fVar6 - 0.16666667) * fVar6 + 1.0) * param_4;
      fVar9 = fVar9 * param_4;
      fVar1 = fVar1 * param_4;
      fVar2 = fVar2 * param_4;
      fVar8 = fVar9 * local_b0 - fVar1 * local_b4;
      fVar8 = fVar8 + fVar8;
      fVar5 = fVar1 * local_b8 - fVar2 * local_b0;
      fVar7 = fVar2 * local_b4 - fVar9 * local_b8;
      fVar5 = fVar5 + fVar5;
      fVar3 = (((((2.4760495e-05 - fVar6 * 2.6051615e-07) * fVar6 - 0.0013888378) * fVar6 +
                0.041666638) * fVar6 - 0.5) * fVar6 + 1.0) * fVar3;
      fVar7 = fVar7 + fVar7;
      local_a8 = (fVar7 * fVar9 - fVar5 * fVar1) + fVar8 * fVar3 + local_b8;
      local_a4 = (fVar8 * fVar1 - fVar7 * fVar2) + fVar5 * fVar3 + local_b4;
      local_a0 = (fVar5 * fVar2 - fVar8 * fVar9) + fVar7 * fVar3 + local_b0;
      FVector::Rotation(&local_a8,param_1);
    }
    else {
      *param_1 = *param_3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    }
  }
  else {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return param_1;
}



// FUNCTION 141260920 FUN_141260920 body=64 status=ok
// SIG undefined FUN_141260920(void)

void FUN_141260920(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = FUN_1409d7ca0();
  if (lVar1 != 0) {
    local_res10[0] = 0;
    FUN_14308aea0(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),1,local_res10);
  }
  FUN_142c66fe0(param_1);
  return;
}


