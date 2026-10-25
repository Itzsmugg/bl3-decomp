// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141120a20 FUN_141120a20 body=84 status=ok
// SIG undefined FUN_141120a20(void)

void FUN_141120a20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (cVar2 != '\0') {
        FUN_141131d10(param_1,cVar2);
      }
    }
  }
  FUN_141138000(param_1);
  return;
}



// FUNCTION 141120a80 FUN_141120a80 body=199 status=ok
// SIG undefined FUN_141120a80(void)

void FUN_141120a80(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&AMenuMapMenuFlow::OnMenuTransitionOutCompleted",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (param_2 + 0x550,param_1,FUN_1411216c0,local_res10);
    }
  }
  return;
}



// FUNCTION 141120b50 FUN_141120b50 body=668 status=ok
// SIG undefined FUN_141120b50(void)

void FUN_141120b50(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ec8c70();
  lVar6 = *(longlong *)(param_1 + 0x1f0);
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x350) == 0) {
    return;
  }
  FUN_141081640(lVar6,param_2);
  cVar5 = FUN_141087490(*(longlong *)(param_1 + 0x1f0) + 0x170);
  if ((cVar5 == '\0') ||
     (plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x350) + 0x48),
     plVar3 == (longlong *)0x0)) {
LAB_141120c51:
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_1413699d0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (lVar6 = (**(code **)(*plVar3 + 0x2b0))(plVar3), lVar6 == 0))
    goto LAB_141120c51;
    lVar7 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141120c51;
  }
  uVar8 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
  lVar7 = FUN_14110cbc0(uVar8);
  cVar5 = BuildSettings::IsPromotedBuild();
  if (lVar6 == *(longlong *)(param_1 + 0x1f8)) {
    if (lVar6 != 0) goto LAB_141120cc0;
LAB_141120d50:
    if (cVar5 == '\0') {
      return;
    }
  }
  else {
    *(longlong *)(param_1 + 0x1f8) = lVar6;
    *(undefined4 *)(param_1 + 0x200) = 0;
    if (lVar6 == 0) {
      if (lVar7 == 0) goto LAB_141120d50;
      if (cVar5 == '\0') {
        FUN_1411320a0(lVar7,0xffffffff);
        return;
      }
    }
    else {
LAB_141120cc0:
      if (((*(float *)(param_1 + 0x1b8) <= *(float *)(param_1 + 0x200)) ||
          (param_2 = *(float *)(param_1 + 0x200) + param_2, *(float *)(param_1 + 0x200) = param_2,
          param_2 <= *(float *)(param_1 + 0x1b8))) || (lVar7 == 0)) goto LAB_141120d50;
      if (cVar5 == '\0') {
        uVar8 = FUN_141082ec0(lVar6,local_28);
        FUN_141131ed0(lVar7,uVar8);
        if (local_20 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar3 = local_20 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return;
        }
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)(*local_20 + 8))(local_20,1);
        return;
      }
    }
  }
  if (lVar7 == 0) {
    return;
  }
  cVar5 = BuildSettings::IsPromotedBuild();
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x233) == '\x01')) {
    uVar8 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
    lVar6 = FUN_14110cbc0(uVar8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5c0) == '\x04')) goto LAB_141120daf;
  }
  if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x3cd) != '\0')) {
    FUN_1410a8890();
  }
LAB_141120daf:
  if (((*(int *)(lVar7 + 0x5c4) == -1) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x3cd) != '\0')) {
    FUN_1410a8890();
  }
  return;
}



// FUNCTION 141120df0 FUN_141120df0 body=107 status=ok
// SIG undefined FUN_141120df0(void)

void FUN_141120df0(longlong param_1,float param_2)

{
  FUN_142ec8c70();
  if (*(int *)(param_1 + 0x20c) != -1) {
    param_2 = *(float *)(param_1 + 0x208) - param_2;
    *(float *)(param_1 + 0x208) = param_2;
    if (param_2 <= 0.0) {
      FUN_141139c60(param_1 + -0x4d8,*(int *)(param_1 + 0x20c),1);
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 141120e60 FUN_141120e60 body=1531 status=ok
// SIG undefined FUN_141120e60(void)

char FUN_141120e60(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_d8 [3];
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined **local_98 [2];
  longlong *local_88;
  longlong local_80;
  
  LOCK();
  bVar16 = *(char *)(param_1 + 0x660) == '\0';
  if (bVar16) {
    *(char *)(param_1 + 0x660) = '\x01';
  }
  UNLOCK();
  if (bVar16) {
    FUN_142ec8c70();
    lVar8 = FUN_140f9aee0(param_1 + -0x4d8);
    uVar15 = 0;
    cVar7 = '\0';
    if (lVar8 != 0) {
      puVar9 = (ulonglong *)UListView::OnItemSelectionChanged(lVar8);
      plVar13 = (longlong *)*puVar9;
      uVar14 = (longlong)(int)puVar9[1] & 0x1fffffffffffffff;
      if (plVar13 + (int)puVar9[1] < plVar13) {
        uVar14 = uVar15;
      }
      cVar7 = '\0';
      cVar6 = '\0';
      if (uVar14 != 0) {
        do {
          cVar7 = cVar6;
          if (*plVar13 != 0) {
            lVar10 = FUN_142547b50(*plVar13,local_98);
            local_d8[2] = *(undefined8 *)(lVar10 + 8);
            local_c0 = *(longlong **)(lVar10 + 0x10);
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            local_98[0] = &PTR_FUN_143f740c8;
            if (local_80 != 0) {
              FMemory::Free();
            }
            plVar5 = local_88;
            local_98[0] = &PTR_FUN_143f73d18;
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_88 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_88)(local_88);
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
            cVar6 = FUN_140ba7260(lVar8,local_d8 + 2);
            plVar5 = local_c0;
            if (cVar6 != '\0') {
              cVar7 = '\x01';
            }
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_c0 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_c0)(local_c0);
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
          }
          plVar13 = plVar13 + 1;
          uVar15 = uVar15 + 1;
          cVar6 = cVar7;
        } while (uVar15 != uVar14);
      }
    }
    plVar13 = (longlong *)(param_1 + -0x4d8);
    if (cVar7 != *(char *)(param_1 + 0x560)) {
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
      *(char *)(param_1 + 0x560) = cVar7;
    }
    fVar20 = 0.0;
    if ((*(longlong *)(param_1 + 0x500) != 0) &&
       (lVar8 = (**(code **)(*plVar13 + 0x148))(plVar13), lVar8 != 0)) {
      uVar11 = (**(code **)(*plVar13 + 0x148))(plVar13);
      lVar8 = UWorld::GetWorldSettings(uVar11,0,1);
      if (lVar8 != 0) {
        uVar11 = (**(code **)(*plVar13 + 0x148))(plVar13);
        lVar8 = UWorld::GetWorldSettings(uVar11,0,1);
        lVar8 = *(longlong *)(lVar8 + 0x658);
        if (lVar8 != 0) {
          lVar12 = UTextureRenderTargetCube::GetPrivateStaticClass();
          lVar10 = *(longlong *)(lVar8 + 0x10);
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
              lVar12 + 0x88)) {
            bVar16 = false;
          }
          else {
            bVar16 = true;
          }
          if ((bVar16) && (*(longlong *)(lVar8 + 0xd0) != 0)) {
            fVar19 = *(float *)(param_1 + 0x508);
            fVar4 = *(float *)(param_1 + 0x558);
            fVar17 = extraout_XMM0_Da;
            if (fVar19 <= 0.0) {
              *(float *)(param_1 + 0x55c) = fVar4;
              fVar18 = fVar4;
            }
            else {
              fVar18 = *(float *)(param_1 + 0x55c);
              if (fVar4 <= fVar18) {
                if (fVar4 < fVar18) {
                  fVar17 = param_2 / fVar19;
                  fVar19 = fVar18 - fVar17;
                  if (fVar18 - fVar17 <= fVar4) {
                    fVar19 = fVar4;
                  }
                  *(float *)(param_1 + 0x55c) = fVar19;
                  fVar18 = fVar19;
                }
              }
              else {
                fVar18 = param_2 / fVar19 + fVar18;
                if (fVar4 <= fVar18) {
                  fVar18 = fVar4;
                }
                *(float *)(param_1 + 0x55c) = fVar18;
              }
            }
            lVar12 = *(longlong *)(param_1 + 0x500);
            local_b0 = 0;
            if (lVar12 != 0) {
              uVar11 = UBlendableInterface::GetPrivateStaticClass(fVar17,lVar10,fVar18);
              local_b0 = UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar11);
              fVar18 = *(float *)(param_1 + 0x55c);
            }
            if (lVar12 == 0) {
              local_b0 = 0;
            }
            local_b8 = lVar12;
            FUN_1411041a0(*(longlong *)(lVar8 + 0xd0) + 0x4a0,&local_b8,fVar18);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x6c8);
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x3cd) == '\0')) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((((bVar16) && (lVar8 = FUN_14110de20(plVar13), lVar8 != 0)) &&
          (*(int *)(lVar8 + 0x5c4) != -1)) && (lVar8 = FUN_14110e990(lVar8), lVar8 != 0)) {
        *(undefined4 *)(lVar8 + 0x480) = *(undefined4 *)(param_1 + 0x540);
        *(undefined4 *)(lVar8 + 0x484) = *(undefined4 *)(param_1 + 0x548);
        if (((*(longlong *)(param_1 + 0x5c0) != 0) &&
            (cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar7 != '\0')) &&
           (lVar10 = FWeakObjectPtr::Get(param_1 + 0xc4), *(char *)(lVar10 + 0xb8) == '\x02')) {
          fVar19 = 0.0;
          FUN_142ec23c0(*(undefined8 *)(param_1 + 0x5c0),param_2);
          if (*(char *)(*(longlong *)(param_1 + 0x5c0) + 400) == '\0') {
            if (*(char *)(param_1 + 0x54c) == '\0') {
              *(undefined4 *)(lVar8 + 0x480) = *(undefined4 *)(param_1 + 0x540);
              *(undefined1 *)(param_1 + 0x54c) = 1;
            }
          }
          else {
            fVar4 = *(float *)(*(longlong *)(param_1 + 0x5c0) + 0x178);
            fVar19 = -0.1;
            if ((-0.1 <= fVar4) && (fVar19 = fVar4, 0.1 <= fVar4)) {
              fVar19 = 0.1;
            }
            fVar19 = fVar19 * 10.0;
            if (*(char *)(param_1 + 0x54c) != '\0') {
              *(undefined4 *)(lVar8 + 0x480) = *(undefined4 *)(param_1 + 0x544);
              *(undefined1 *)(param_1 + 0x54c) = 0;
            }
          }
          if (0.1 < ABS(fVar19)) {
            fVar20 = -fVar19;
          }
          *(float *)(lVar8 + 0x47c) = fVar20;
          FUN_142dbedb0(lVar8 + 0x478);
        }
      }
    }
    LOCK();
    cVar7 = *(char *)(param_1 + 0x660);
    if (cVar7 == '\x01') {
      *(char *)(param_1 + 0x660) = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    return cVar7;
  }
  LOCK();
  if (*(char *)(param_1 + 0x660) == '\x01') {
    *(char *)(param_1 + 0x660) = '\0';
  }
  UNLOCK();
  plVar13 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
  if (plVar13 != (longlong *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) goto LAB_1411213ce;
  }
  plVar13 = (longlong *)0x0;
LAB_1411213ce:
  cVar7 = FUN_142ebe450(param_1 + -0x4d8);
  if (plVar13 != (longlong *)0x0) {
    local_d8[0] = 0;
    local_d8[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
    FGenericPlatformString::Memcpy(local_d8[0],L"QUIT",10);
    cVar7 = (**(code **)(*plVar13 + 0xd28))(plVar13,local_a8,local_d8,1);
    if (local_a8[0] != 0) {
      cVar7 = FMemory::Free();
    }
    if (local_d8[0] != 0) {
      cVar7 = FMemory::Free();
    }
  }
  return cVar7;
}



// FUNCTION 141121460 FUN_141121460 body=594 status=ok
// SIG undefined FUN_141121460(void)

void FUN_141121460(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  longlong local_78 [2];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ec8c70();
  lVar1 = param_1 + -0x4d8;
  if (((*(char *)(param_1 + 0x5b3) == '\0') && (*(char *)(param_1 + 0x5b1) != '\0')) &&
     (*(char *)(param_1 + 0x5b2) != '\0')) {
    *(undefined1 *)(param_1 + 0x5b3) = 1;
    if (*(longlong *)(param_1 + -0x220) != 0) {
      local_78[0] = 0;
      local_78[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Memcpy(local_78[0],L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + -0x220),local_78);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    FUN_141132530(lVar1,1);
    FUN_14105c120(param_1 + 0x348,0,1,0);
    FUN_14112e220(lVar1);
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_14112e8a0();
    }
    FUN_142ecd4d0(lVar1);
    *(undefined1 *)(param_1 + 0x5b0) = 1;
  }
  if (*(char *)(param_1 + 0x321) != '\0') {
    *(undefined1 *)(param_1 + 0x321) = 0;
    FUN_14112cc30(lVar1,0,1);
    FUN_14112e220(lVar1);
    lVar2 = FUN_140e971d0(lVar1);
    if (lVar2 != 0) {
      FUN_140d1b4d0(lVar2);
    }
    *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x29c);
    *(undefined1 *)(param_1 + 0x32d) = 1;
  }
  if (*(char *)(param_1 + 0x5b0) != '\0') {
    *(undefined1 *)(param_1 + 0x5b0) = 0;
    FUN_14112e380(lVar1);
  }
  fVar4 = *(float *)(param_1 + 0x5bc) - param_2;
  *(float *)(param_1 + 0x5bc) = fVar4;
  if ((*(longlong *)(param_1 + 0x2b8) != 0) && (fVar4 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    FUN_1411fd550(*(longlong *)(param_1 + 0x2b8),param_2);
  }
  FUN_141062eb0(param_1 + 0x348,param_2);
  FUN_141062eb0(param_1 + 0x418,param_2);
  FUN_141062eb0(param_1 + 0x4e8,param_2);
  if ((*(char *)(param_1 + 0x32d) != '\0') &&
     (*(undefined1 *)(param_1 + 0x32d) = 0, *(longlong *)(param_1 + 0x2b8) != 0)) {
    local_38 = 0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = lVar1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_141107320;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x2b8),local_68);
  }
  FUN_140ec3ff0(param_1 + 0x230,param_2);
  return;
}



// FUNCTION 1411216c0 FUN_1411216c0 body=106 status=ok
// SIG undefined FUN_1411216c0(void)

void FUN_1411216c0(longlong param_1,char param_2,longlong param_3)

{
  *(char *)(param_1 + 0x5a0) = param_2;
  *(longlong *)(param_1 + 0x598) = param_3;
  if ((param_2 != '\f') && (param_3 != 0)) {
    switch(param_2) {
    default:
      FUN_1411375e0(param_1,4,0);
      return;
    case '\x02':
      FUN_1411375e0(param_1,0x140000005,0);
      return;
    case '\x03':
      FUN_1411375e0(param_1,0x140000003,0);
      return;
    case '\x04':
      FUN_1411375e0(param_1,0x140000001,0);
      return;
    }
  }
  return;
}



// FUNCTION 141121770 FUN_141121770 body=137 status=ok
// SIG undefined FUN_141121770(void)

void FUN_141121770(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x2d8);
  }
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x6d0))) {
    lVar1 = FUN_140e971d0();
    if (lVar1 != 0) {
      uVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar4 * 0xc);
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x6dc);
      FUN_141460b30(lVar1,uVar3,uVar2);
    }
    FUN_142eb3990(param_1);
  }
  return;
}



// FUNCTION 141121800 FUN_141121800 body=421 status=ok
// SIG undefined FUN_141121800(void)

ulonglong FUN_141121800(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [40];
  
  iVar10 = -1;
  if (param_2 != 0) {
    iVar10 = *(int *)(param_2 + 0x2d8);
  }
  local_88 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_84 = 0;
  local_78 = 0;
  uVar6 = FUN_1404b03b0();
  FText::FText(local_60,uVar6);
  if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x6d0))) {
    lVar8 = (longlong)iVar10 * 0xc;
    cVar5 = FWeakObjectPtr::IsValid(lVar8 + *(longlong *)(param_1 + 0x6c8));
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x6c8) + lVar8);
      local_88 = *(undefined4 *)(lVar7 + 0x60);
      local_84 = *(undefined8 *)(lVar7 + 100);
      local_48 = *(undefined8 *)(lVar7 + 0x70);
      FString::FString(local_40,lVar7 + 0x78);
      FSoftObjectPath::operator=(&local_78,&local_48);
      lVar8 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x6c8) + lVar8);
      FText::operator=(local_60,lVar8 + 0x48);
    }
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    uVar6 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_30,&local_88);
    FUN_141132a20(*(undefined8 *)(param_1 + 0x6a8),uVar6);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6a8) + 0x178);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,local_60,1,0);
    }
  }
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x588);
  *(uint *)(param_1 + 0x588) = 1;
  uVar9 = (ulonglong)uVar3;
  UNLOCK();
  if (local_58 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_58 + 1);
    uVar3 = *puVar1;
    uVar9 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar9 = (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        uVar9 = (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_70 != 0) {
    uVar9 = FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 1411219b0 FUN_1411219b0 body=247 status=ok
// SIG undefined FUN_1411219b0(void)

void FUN_1411219b0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar4 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((byte)(*(char *)(lVar1 + 0x778) - 1U) < 2) &&
         (cVar3 = FUN_141033030(lVar1 + 0x820,param_1), cVar3 != '\0')) {
        FUN_14103c970(lVar1 + 0x820,param_1,param_2);
      }
      else if (((1 < (byte)(*(char *)(lVar1 + 0x778) - 3U)) ||
               (cVar3 = FUN_141033030(lVar1 + 0x8f0,param_1), cVar3 == '\0')) &&
              ((byte)(*(char *)(lVar1 + 0x778) - 3U) < 2)) {
        FUN_141033030(lVar1 + 0x9c0,param_1);
      }
    }
  }
  return;
}



// FUNCTION 141121ab0 FUN_141121ab0 body=115 status=ok
// SIG undefined FUN_141121ab0(void)

void FUN_141121ab0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142ed3610(param_1 + 0x170,1);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_14138d230();
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
      FUN_14110fa10(lVar1,param_1,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
    }
  }
  return;
}



// FUNCTION 141121b30 FUN_141121b30 body=86 status=ok
// SIG undefined FUN_141121b30(void)

void FUN_141121b30(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142ec9bb0();
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    cVar1 = FUN_141087490(*(longlong *)(param_1 + 0x6c8) + 0x170);
    if (cVar1 != '\0') {
      local_18 = 0;
      uStack_10 = 0;
      FUN_142ed36d0(param_1,&local_18,0);
      FUN_142ed1500(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141121b90 FUN_141121b90 body=61 status=ok
// SIG undefined FUN_141121b90(void)

void FUN_141121b90(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_142ec9bb0();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x6d8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x6d8);
    FUN_140aff310(uVar1);
    return;
  }
  return;
}



// FUNCTION 141121bd0 FUN_141121bd0 body=266 status=ok
// SIG undefined FUN_141121bd0(void)

void FUN_141121bd0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ed3610(param_1 + 0x170,0);
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar3 = FUN_14138d230();
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
      if (((byte)(*(char *)(lVar4 + 0x778) - 1U) < 2) &&
         (cVar2 = FUN_141033030(lVar4 + 0x820,param_1), cVar2 != '\0')) {
        lVar4 = lVar4 + 0x820;
      }
      else if (((byte)(*(char *)(lVar4 + 0x778) - 3U) < 2) &&
              (cVar2 = FUN_141033030(lVar4 + 0x8f0,param_1), cVar2 != '\0')) {
        lVar4 = lVar4 + 0x8f0;
      }
      else {
        if (1 < (byte)(*(char *)(lVar4 + 0x778) - 3U)) {
          return;
        }
        cVar2 = FUN_141033030(lVar4 + 0x9c0,param_1);
        if (cVar2 == '\0') {
          return;
        }
        lVar4 = lVar4 + 0x9c0;
      }
      FUN_14103ca50(lVar4,param_1,0);
    }
  }
  return;
}



// FUNCTION 141121ce0 FUN_141121ce0 body=35 status=ok
// SIG undefined FUN_141121ce0(void)

void FUN_141121ce0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x720,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141121d10 FUN_141121d10 body=110 status=ok
// SIG undefined FUN_141121d10(void)

void FUN_141121d10(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x2c8);
      FUN_141132530(uVar1,2);
    }
    else if (*(char *)(param_1 + 0x2d8) == '\x01') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x2c8);
      FUN_141132530(uVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 141121d80 FUN_141121d80 body=66 status=ok
// SIG undefined FUN_141121d80(void)

void FUN_141121d80(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(6);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141121dd0 FUN_141121dd0 body=279 status=ok
// SIG undefined FUN_141121dd0(void)

void FUN_141121dd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res20;
  undefined1 local_28 [8];
  longlong local_20;
  
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxOakMainMenu::OnChoiceMadeSkipPlayableIntro",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res20,pwVar2 + 2,1);
  FWeakObjectPtr::operator=(local_28,param_1);
  local_20 = local_res20;
  if ((local_res20 != 0) && (lVar4 = FWeakObjectPtr::Get(local_28), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_20);
  }
  lVar4 = FUN_14110de20(param_1);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x5b4) = *(undefined4 *)(param_3 + 8);
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  FUN_1410f47a0(uVar5,param_1 + 0x9e8,param_1 + 0xa00,local_28,1,0,0,0,0);
  return;
}



// FUNCTION 141121ef0 FUN_141121ef0 body=329 status=ok
// SIG undefined FUN_141121ef0(void)

void FUN_141121ef0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar3 = FUN_14110de20();
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x5c8) & 2) != 0)) {
    if (*(char *)(lVar3 + 0x5c0) != '\x01') {
      lVar4 = FUN_1422312c0(lVar3);
      if (lVar4 != 0) {
        lVar5 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar4 = FUN_140bb8b20(lVar4);
          if (lVar4 != 0) {
            FUN_140e48890(lVar4);
          }
        }
      }
      *(undefined1 *)(lVar3 + 0x5c0) = 1;
      FUN_1411088c0(lVar3,0);
      local_res8[0] = *(undefined1 *)(lVar3 + 0x5c0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar3 + 0x458,local_res8);
      TBaseMulticastDelegate<void,float>::Broadcast(lVar3 + 0x490,0xbf800000);
    }
    FUN_1411299c0(lVar3);
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140beb060(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
    }
  }
  FUN_1411323d0(param_1,4);
  return;
}



// FUNCTION 141122040 FUN_141122040 body=10 status=ok
// SIG undefined FUN_141122040(void)

void FUN_141122040(undefined8 param_1)

{
  FUN_1411323d0(param_1,1);
  return;
}



// FUNCTION 141122050 FUN_141122050 body=206 status=ok
// SIG undefined FUN_141122050(void)

void FUN_141122050(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x590);
  if (param_2 != lVar2) {
    if (lVar2 != 0) {
      FUN_140d13500(lVar2,0,*(undefined8 *)(param_1 + 0x5a8));
    }
    *(longlong *)(param_1 + 0x590) = param_2;
    if (param_2 != 0) {
      FUN_140d13500(param_2,1,*(undefined8 *)(param_1 + 0x5a8));
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0xfa8))();
      if (lVar2 != 0) {
        uVar3 = FName::FName(local_res8,L"OnMenuStackPush",1);
        FUN_140f13040(lVar2 + 0x118,param_1,uVar3);
      }
      FUN_141137850(param_1);
      cVar1 = FUN_14044af00(param_1 + 0x5b8,0);
      if (cVar1 != '\0') {
        uVar3 = FWeakObjectPtr::Get(param_1 + 0x5b8);
        FUN_1411581f0(uVar3);
      }
    }
  }
  return;
}



// FUNCTION 141122140 FUN_141122140 body=503 status=ok
// SIG undefined FUN_141122140(void)

void FUN_141122140(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    lVar4 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
        (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)) && (param_1[0xf9] != 0)) {
      iVar2 = FUN_142eb7a00();
      lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
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
        if ((bVar1) && (lVar5 = FUN_140cfbfb0(lVar5), lVar5 != 0)) {
          *(int *)(lVar5 + 0x140) = iVar2;
        }
      }
      *(int *)(param_1 + 0xfb) = iVar2 + 1;
      FUN_140ccce90(lVar4);
      iVar2 = 0;
      if (*(longlong *)(param_2 + 0x358) != 0) {
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*param_1 + 0x4e8))(param_1,*(undefined8 *)(param_2 + 0x358),&local_28);
      }
      iVar3 = FUN_142eb7440(param_1[0xf9]);
      if (0 < iVar3) {
        do {
          lVar4 = FUN_142eb6a30(param_1[0xf9],iVar2);
          if (lVar4 != 0) {
            lVar5 = UMobBaseAnim::GetPrivateStaticClass();
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
              FUN_142ed2820(lVar4,lVar4 == param_2,
                            CONCAT71((int7)((ulonglong)(lVar5 + 0x88) >> 8),1));
              FUN_142ed2820(lVar4,lVar4 == param_2,1);
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_142eb7440(param_1[0xf9]);
        } while (iVar2 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 141122340 FUN_141122340 body=252 status=ok
// SIG undefined FUN_141122340(void)

undefined4 FUN_141122340(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_2 != 0) {
    lVar5 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_142ed3eb0(param_2,0);
      lVar5 = FUN_140e971d0(param_1);
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar5 + 0x1958);
        iVar6 = *(int *)(param_2 + 0x350);
        if (*(int *)(param_2 + 0x350) <= iVar2) {
          iVar6 = iVar2;
        }
        if (iVar2 != iVar6) {
          *(int *)(lVar5 + 0x1958) = iVar6;
          lVar5 = FUN_140cfbfb0(lVar5);
          if (lVar5 != 0) {
            *(int *)(lVar5 + 0x2f0) = iVar6;
          }
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x7a0);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2 + 0x310,1,0);
      }
      plVar3 = *(longlong **)(param_1 + 0x798);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2 + 0x328,1,0);
      }
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141122440 FUN_141122440 body=350 status=ok
// SIG undefined FUN_141122440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141122440(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)FName::FName(local_c8,&DAT_1446a58d4,1);
  if (param_3 == *plVar1) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_1411072c0;
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar3);
    if (local_28 != 0) {
      plVar1 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar1 = local_38;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar1 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar1 = local_88;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x718);
    if (plVar1 != local_c8) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x720) = 0;
    }
  }
  return;
}



// FUNCTION 1411225a0 FUN_1411225a0 body=78 status=ok
// SIG undefined FUN_1411225a0(void)

void FUN_1411225a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FName::FName(local_res8,&DAT_1446a5b0c,1);
  if (param_3 == *plVar1) {
    FUN_142ebe4a0(param_1);
    FUN_141129ca0(param_1);
  }
  *(undefined1 *)(param_1 + 0x7c7) = 0;
  return;
}



// FUNCTION 1411225f0 FUN_1411225f0 body=361 status=ok
// SIG undefined FUN_1411225f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1411225f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  longlong *local_18;
  
  lVar2 = DAT_146875028;
  plVar3 = (longlong *)(DAT_1468387a8 ^ (ulonglong)auStack_e8);
  if (param_3 == DAT_146874ff8) {
    plVar3 = (longlong *)0x0;
    LOCK();
    bVar1 = *(byte *)(param_1 + 0xb38);
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0xb38) = 1;
    }
    else {
      plVar3 = (longlong *)(ulonglong)bVar1;
    }
    UNLOCK();
  }
  else if ((param_3 == DAT_146875008) &&
          (local_18 = plVar3, plVar3 = (longlong *)FName::FName(local_c8,&DAT_1446a66d4,1),
          lVar2 == *plVar3)) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_141107530;
    uVar5 = FUN_1420849a0(param_1,local_68,local_b8);
    plVar3 = (longlong *)FUN_14208c260(param_1,uVar5);
    if (local_28 != 0) {
      plVar6 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar6 = local_38;
      }
      if (plVar6 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      plVar3 = (longlong *)FMemory::Free();
    }
    if (local_78 != 0) {
      plVar6 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar6 = local_88;
      }
      if (plVar6 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      plVar3 = (longlong *)FMemory::Free();
    }
  }
  return plVar3;
}



// FUNCTION 141122760 FUN_141122760 body=8 status=ok
// SIG undefined FUN_141122760(void)

void FUN_141122760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141122770(param_1,param_3);
  return;
}



// FUNCTION 141122770 FUN_141122770 body=1861 status=ok
// SIG undefined FUN_141122770(void)

void FUN_141122770(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong local_res18 [2];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [8];
  longlong local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar9 != 0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (cVar7 = FUN_140bc9f60(lVar9), cVar7 == '\0')) &&
       (cVar7 = FUN_140bc2c90(lVar9), cVar7 != '\0')) {
      bVar3 = true;
      goto LAB_1411227f3;
    }
  }
  bVar3 = false;
LAB_1411227f3:
  FText::FText(local_100);
  FText::FText(local_118);
  if (bVar3) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_d0,L"Quit Game and Disband Group?",L"MainMenu",
                        L"QuitGameAndDisbandHeader");
    FText::operator=(local_100,uVar11);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b8,
                        L"Are you sure you want to quit the game? Doing so will disconnect all group members."
                        ,L"MainMenu",L"QuitGameNetworkPlayersMsg");
    FText::operator=(local_118,uVar11);
    local_80 = local_b0;
  }
  else {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a0,L"Quit Game?",L"MainMenu",L"QuitGameHeader");
    FText::operator=(local_100,uVar11);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_88,L"Are you sure you want to quit the game?",L"MainMenu",
                        L"QuitGameMsg");
    FText::operator=(local_118,uVar11);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  FWeakObjectPtr::operator=(local_1b8,0);
  local_1b0 = 0;
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxOakMainMenu::OnQuitChoiceMade",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(local_res18,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(local_1b8,param_1);
  local_1b0 = local_res18[0];
  if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(local_1b8), lVar9 != 0)) {
    UObject::FindFunction(lVar9,local_1b0);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  uVar11 = FUN_1404b03b0();
  FText::FText(local_148,uVar11);
  local_130 = 0;
  local_128 = 0;
  local_120 = 1;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_40,L"Quit to Portal",L"MainMenu",L"DialogChoice_QuitDesktop_Quail");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_e8,L"Quit to Desktop",L"MainMenu",L"DialogChoice_QuitDesktop");
  FText::operator=(local_148,local_e8);
  uVar6 = local_1c0;
  lVar9 = (longlong)(int)local_1c0;
  local_130 = DAT_146874ff8;
  iVar8 = (int)local_1c0 + 1;
  local_1c0 = CONCAT44(local_1c0._4_4_,iVar8);
  if (local_1c0._4_4_ < iVar8) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar6 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x30 + local_1c8;
  FText::FText(lVar9,local_148);
  *(undefined8 *)(lVar9 + 0x18) = local_130;
  *(undefined8 *)(lVar9 + 0x20) = local_128;
  *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_120;
  *(undefined1 *)(lVar9 + 0x29) = local_120._1_1_;
  uVar11 = FUN_1404b03b0();
  FText::FText(local_178,uVar11);
  local_160 = 0;
  local_158 = 0;
  local_150 = 1;
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_70,L"Quit to Title Screen",L"MainMenu",L"DialogChoice_TitleScreen");
  FText::operator=(local_178,uVar11);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  uVar6 = local_1c0;
  lVar9 = (longlong)(int)local_1c0;
  local_160 = DAT_146875008;
  iVar8 = (int)local_1c0 + 1;
  local_1c0 = CONCAT44(local_1c0._4_4_,iVar8);
  if (local_1c0._4_4_ < iVar8) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar6 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x30 + local_1c8;
  FText::FText(lVar9,local_178);
  *(undefined8 *)(lVar9 + 0x18) = local_160;
  *(undefined8 *)(lVar9 + 0x20) = local_158;
  *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_150;
  *(undefined1 *)(lVar9 + 0x29) = local_150._1_1_;
  uVar11 = FUN_1404b03b0();
  FText::FText(local_1a8,uVar11);
  local_190 = 0;
  local_188 = 0;
  local_180 = 1;
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_58,L"Cancel",L"MainMenu",L"DialogChoice_Cancel");
  FText::operator=(local_1a8,uVar11);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  uVar6 = local_1c0;
  lVar9 = (longlong)(int)local_1c0;
  local_190 = DAT_146874fe8;
  local_188 = DAT_146b3e2b8;
  iVar8 = (int)local_1c0 + 1;
  local_1c0 = CONCAT44(local_1c0._4_4_,iVar8);
  if (local_1c0._4_4_ < iVar8) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar6 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x30 + local_1c8;
  FText::FText(lVar9,local_1a8);
  *(undefined8 *)(lVar9 + 0x18) = local_190;
  *(undefined8 *)(lVar9 + 0x20) = local_188;
  *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_180;
  *(undefined1 *)(lVar9 + 0x29) = local_180._1_1_;
  uVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  lVar9 = FUN_1410f2f10(uVar11,local_100,local_118,&local_1c8,local_1b8,0,0,0,2,1);
  if (lVar9 == 0) {
    LOCK();
    if (*(char *)(param_1 + 0xb38) == '\0') {
      *(char *)(param_1 + 0xb38) = '\x01';
    }
    UNLOCK();
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
            (&local_1c8);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return;
}



// FUNCTION 141122ec0 FUN_141122ec0 body=469 status=ok
// SIG undefined FUN_141122ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141122ec0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0 [2];
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = *param_2;
  local_f8 = (longlong *)param_2[1];
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  local_108 = param_1;
  FString::FString(local_f0,param_3);
  local_d8 = param_5;
  local_d0 = param_6;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_e0 = param_4;
  puVar5 = (undefined8 *)FUN_140438ef0(0x48,local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446ba1b0;
    puVar5[1] = local_108;
    puVar5[2] = local_100;
    puVar5[3] = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar5 + 4,local_f0);
    *(undefined1 *)(puVar5 + 6) = local_e0;
    puVar5[7] = local_d8;
    *(undefined4 *)(puVar5 + 8) = local_d0;
  }
  local_c8[0] = &LAB_141107700;
  uVar6 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar6);
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
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return;
}



// FUNCTION 1411230a0 FUN_1411230a0 body=856 status=ok
// SIG undefined FUN_1411230a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411230a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  int *local_90;
  int local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar12 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x0;
  iVar8 = 0;
  local_80 = 0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  puVar11 = puVar12;
  iVar16 = 0;
  if (((lVar4 != 0) &&
      (lVar4 = UWorld::GetWorldSettings(lVar4,0,1), puVar11 = puVar10, iVar16 = iVar8, lVar4 != 0))
     && (lVar4 = *(longlong *)(lVar4 + 0x658), lVar4 != 0)) {
    lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(int *)(lVar4 + 0xc0) == 4)) {
      lVar5 = *(longlong *)(lVar4 + 0xb8);
      local_a0._0_4_ = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      iVar16 = (int)local_a0;
      lVar15 = (longlong)(int)local_a0;
      local_a0._0_4_ = (int)local_a0 + 1;
      *local_a8 = *(undefined8 *)(lVar5 + 0x10);
      lVar5 = *(longlong *)(lVar4 + 0xb8);
      iVar8 = (int)local_a0;
      if (local_a0._4_4_ < (int)local_a0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar16);
        iVar8 = (int)local_a0;
      }
      iVar16 = iVar8 + 1;
      local_a8[lVar15] = *(undefined8 *)(lVar5 + 8);
      lVar4 = *(longlong *)(lVar4 + 0xb8);
      local_a0 = CONCAT44(local_a0._4_4_,iVar16);
      if (local_a0._4_4_ < iVar16) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar8);
        iVar16 = (int)local_a0;
      }
      local_a8[iVar8] = *(undefined8 *)(lVar4 + 0x18);
      puVar11 = local_a8;
    }
  }
  local_58 = 1;
  local_50 = 2;
  local_90 = (int *)0x0;
  local_88 = 3;
  TArray<int,FDefaultAllocator>::ResizeForCopy(&local_90,3);
  iVar8 = local_88;
  *(undefined8 *)local_90 = local_58;
  local_90[2] = local_50;
  piVar9 = local_90;
  puVar10 = puVar12;
  if (0 < local_88) {
    do {
      iVar1 = *piVar9;
      if ((iVar1 < 0) || (iVar16 <= iVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar4 = puVar11[iVar1], lVar4 != 0)) &&
         (cVar3 = FUN_140e53de0(), cVar3 == '\0')) {
        if (*local_98 != 0) {
          cVar3 = FUN_140e53980();
          plVar13 = local_98;
          if (cVar3 == '\0') {
LAB_1411232f5:
            bVar2 = true;
          }
          else {
            puVar12 = (undefined8 *)0x1;
            plVar6 = (longlong *)FUN_140e50580(lVar4,local_68);
            plVar13 = local_98;
            if (*plVar6 != 0) {
              puVar10 = (undefined8 *)*local_98;
              puVar12 = (undefined8 *)0x3;
              puVar7 = (undefined8 *)FUN_140e50580(lVar4,local_78);
              cVar3 = (**(code **)*puVar10)(puVar10,*puVar7);
              if (cVar3 == '\0') goto LAB_1411232f5;
            }
            bVar2 = false;
          }
          if ((((ulonglong)puVar12 & 2) != 0) &&
             (puVar12 = (undefined8 *)(ulonglong)((uint)puVar12 & 0xfffffffd),
             local_70 != (longlong *)0x0)) {
            LOCK();
            plVar6 = local_70 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            puVar11 = local_a8;
            if ((int)lVar5 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar9 = (int *)((longlong)local_70 + 0xc);
              iVar16 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              puVar11 = local_a8;
              if (iVar16 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
                puVar11 = local_a8;
              }
            }
          }
          if ((((ulonglong)puVar12 & 1) != 0) && (local_60 != (longlong *)0x0)) {
            LOCK();
            plVar6 = local_60 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            puVar11 = local_a8;
            if ((int)lVar5 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar9 = (int *)((longlong)local_60 + 0xc);
              iVar16 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              puVar11 = local_a8;
              if (iVar16 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
                puVar11 = local_a8;
              }
            }
          }
          if (bVar2) {
            FUN_140e51ff0(lVar4,plVar13);
          }
          break;
        }
        cVar3 = FUN_140e53980();
        if (cVar3 != '\0') {
          FUN_140e46bf0();
        }
      }
      uVar14 = (int)puVar10 + 1;
      puVar10 = (undefined8 *)(ulonglong)uVar14;
      piVar9 = piVar9 + 1;
    } while ((int)uVar14 < iVar8);
  }
  if (local_90 != (int *)0x0) {
    FMemory::Free(local_90);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  return;
}



// FUNCTION 141123400 FUN_141123400 body=95 status=ok
// SIG undefined FUN_141123400(void)

void FUN_141123400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_3;
    uStack_64 = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack_60 = (undefined4)param_1;
    uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_1411073d0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 141123460 FUN_141123460 body=315 status=ok
// SIG undefined FUN_141123460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141123460(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined6 uStack_66;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pcVar6 = (char *)FUN_140a5dc70(lVar4), uVar3 = _DAT_146297e38, *pcVar6 == '\0'))
    {
      if (*(longlong *)(param_1 + 0xb28) == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(param_3 + 8);
      local_28 = 0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        local_78 = (undefined4)param_1;
        uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = local_78;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_74;
        *(undefined4 *)(puVar7 + 2) = 2;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar1;
        *puVar7 = &PTR_FUN_143f4d0b0;
        puVar7[3] = CONCAT62(uStack_66,uVar3);
      }
      local_58[0] = &LAB_1411076a0;
      FUN_14204c280(local_58);
      return;
    }
  }
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar7 = (undefined8 *)FName::FName(local_res8,L"Roster",1);
  FUN_14112a420(param_1,*puVar7,uVar1);
  return;
}



// FUNCTION 1411235a0 FUN_1411235a0 body=403 status=ok
// SIG undefined FUN_1411235a0(void)

ulonglong FUN_1411235a0(longlong *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28 [4];
  
  if (((int)param_1[0xd6] != 0) || (*(int *)((longlong)param_1 + 0x6b4) != 0)) {
    local_28[2] = 0;
    local_28[3] = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd6],local_28 + 2);
  }
  if (param_1[0xdc] != 0) {
    local_28[0] = 0;
    local_28[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],&DAT_1446b674c,6);
    FUN_142088910(param_1[0xdc],local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (DAT_14686ad35 == '\0') {
    FUN_140bfdec0(&DAT_14686ad34);
    DAT_14686ad35 = '\x01';
  }
  uVar4 = FUN_140c22f50(&DAT_14686ad34,param_1,param_2);
  if ((param_2 != 0) && (param_3 != '\0')) {
    iVar3 = FUN_140e4fee0(param_2);
    if (param_1[0xd9] != 0) {
      FUN_141133250(param_1[0xd9],iVar3,param_2);
    }
    if (param_1[0xd8] != 0) {
      lVar5 = FUN_140e50b20(param_2,iVar3 + 1);
      lVar2 = param_1[0xd8];
      if (lVar5 == 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x1b0) + 0x20))(lVar2 + 0x1b0,1);
      }
      else {
        uVar6 = FUN_140f578e0(param_1);
        FUN_140f817e0(lVar2 + 0x1b0,iVar3 + 1,param_2,uVar6);
        (**(code **)(*(longlong *)(param_1[0xd8] + 0x1b0) + 0x18))
                  ((longlong *)(param_1[0xd8] + 0x1b0),0);
      }
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xb1);
    *(uint *)(param_1 + 0xb1) = 1;
    uVar4 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 141123740 FUN_141123740 body=827 status=ok
// SIG undefined FUN_141123740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141123740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong local_100 [3];
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = URemnantGameInstance::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  cVar5 = FUN_141111820(param_1,param_2);
  if (cVar5 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x788) == 0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *(int *)(param_2 + 0x2d8);
    if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x6d8))) {
      bVar4 = true;
      goto LAB_1411237f4;
    }
  }
  bVar4 = false;
LAB_1411237f4:
  if (bVar4) {
    lVar7 = *(longlong *)(param_1 + 0x6d0);
    iVar6 = FUN_14110cc90(param_1);
    if (*(int *)((longlong)iVar10 * 0x1c8 + 0x20 + lVar7) == iVar6) {
      FUN_14110db70(param_1,&local_118,*(undefined8 *)(param_1 + 0x7b0));
      plVar11 = plStack_110;
      if (local_118 != 0) {
        local_e8 = local_118;
        plStack_e0 = plStack_110;
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
          UNLOCK();
        }
        uVar8 = FUN_14110cc30(param_1);
        FUN_141111cb0(param_1,&local_e8,uVar8);
        plVar3 = plStack_110;
        if (plVar11 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar11 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_110 + 8))(plStack_110,1);
          }
        }
        plVar3 = plStack_110;
        LOCK();
        plVar11 = plVar11 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 != 1) {
          return;
        }
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
        return;
      }
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_110 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_110 + 8))(plStack_110,1);
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x788) != 0) &&
       (lVar7 = FUN_1410f8230(*(longlong *)(param_1 + 0x788),iVar10), lVar7 != 0)) {
      FUN_141132290(lVar7,1);
    }
    local_108 = param_1;
    FString::FString(local_100,*(longlong *)(param_1 + 0x6d0) + (longlong)iVar10 * 0x1c8);
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_CopyToEmptyStorage_144553d08;
      puVar9[1] = local_108;
      FString::FString(puVar9 + 2,local_100);
    }
    local_d8[0] = &LAB_141107310;
    uVar8 = FUN_1420849a0(param_1,local_88,local_d8);
    FUN_14208c260(param_1,uVar8);
    if (local_48 != 0) {
      plVar11 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar11 = local_58;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar11 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar11 = local_a8;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_100[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141123a80 FUN_141123a80 body=72 status=ok
// SIG undefined FUN_141123a80(void)

void FUN_141123a80(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x788) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_142eb7a00();
  }
  FUN_141139440(param_1,uVar1);
  FUN_141139c60(param_1,uVar1,0);
  return;
}



// FUNCTION 141123ad0 FUN_141123ad0 body=191 status=ok
// SIG undefined FUN_141123ad0(void)

undefined4 FUN_141123ad0(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_141133250();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    if (param_3 != 0) {
      lVar2 = FUN_140e50b20(param_3,param_2 + 1);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x6c0);
        uVar3 = FUN_140f578e0(param_1);
        FUN_140f817e0(lVar2 + 0x1b0,param_2 + 1,param_3,uVar3);
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x1b0);
        (**(code **)(*plVar4 + 0x18))(plVar4,0);
        goto LAB_141123b6f;
      }
    }
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x1b0);
    (**(code **)(*plVar4 + 0x20))(plVar4,1);
  }
LAB_141123b6f:
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141123b90 FUN_141123b90 body=65 status=ok
// SIG undefined FUN_141123b90(void)

void FUN_141123b90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined8 *)FName::FName(local_res18,L"Shift",1);
  FUN_14112a420(param_1,*puVar2,uVar1);
  return;
}



// FUNCTION 141123be0 FUN_141123be0 body=285 status=ok
// SIG undefined FUN_141123be0(void)

void FUN_141123be0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((param_2 != 1) && (lVar4 = FUN_140f9aee0(), lVar4 != 0)) {
    FUN_140dbb930(local_38,2);
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Network Error",L"MainMenu",L"NetworkError");
    FUN_1410f3960(uVar5,uVar6,local_38,local_48,1,0,0);
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
  return;
}



// FUNCTION 141123d00 FUN_141123d00 body=38 status=ok
// SIG undefined FUN_141123d00(void)

void FUN_141123d00(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x468) = 0;
  lVar1 = FUN_14110dee0();
  if (lVar1 != 0) {
    FUN_1411581f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141123d30 thunk_FUN_141136f80 body=5 status=ok
// SIG undefined thunk_FUN_141136f80(void)

void thunk_FUN_141136f80(longlong param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Dst;
  int iVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  int aiStackX_8 [2];
  char acStackX_10 [8];
  longlong alStack_98 [2];
  undefined1 auStack_88 [8];
  longlong *plStack_80;
  longlong lStack_70;
  int *piStack_68;
  char *pcStack_60;
  longlong *plStack_58;
  
  if (1e-08 < ABS(*(float *)(param_1 + 0x694) - param_2)) {
    alStack_98[1] = 3;
    acStackX_10[0] = *(float *)(param_1 + 0x694) < param_2;
    alStack_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_98,0);
    FGenericPlatformString::Memcpy(alStack_98[0],&DAT_1446b0404,6);
    param_2 = (float)*(int *)(param_1 + 0x698) * param_2;
    aiStackX_8[0] = (int)ROUND((param_2 + param_2) - 0.5) >> 1;
    piStack_68 = aiStackX_8;
    pcStack_60 = acStackX_10;
    plStack_58 = alStack_98;
    lStack_70 = param_1;
    iVar6 = FUN_141101ce0(&lStack_70);
    uVar11 = (ulonglong)iVar6;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x6a8) <= iVar6)) {
      *(undefined4 *)(param_1 + 0x690) = 0xffffffff;
    }
    else {
      lVar9 = uVar11 * 0x18;
      *(int *)(param_1 + 0x690) = iVar6;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x6a0) + 0x14 + lVar9);
      iVar1 = iVar4 + 8;
      if (*(longlong *)(param_1 + 0x6b0) != 0) {
        if ((acStackX_10[0] == '\0') || (iVar1 <= *(int *)(param_1 + 0x698))) {
          fVar12 = (float)iVar4 / (float)*(int *)(param_1 + 0x698);
        }
        else {
          fVar12 = 1.0;
        }
        *(float *)(param_1 + 0x694) = fVar12;
        FUN_142f0fa70();
      }
      plVar3 = (longlong *)(param_1 + 0x680);
      *(undefined4 *)(param_1 + 0x688) = 0;
      if ((*(int *)(param_1 + 0x68c) < 0) && (*(int *)(param_1 + 0x68c) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar3);
      }
      if ((undefined2 *)*plVar3 != (undefined2 *)0x0) {
        *(undefined2 *)*plVar3 = 0;
      }
      if (iVar6 < *(int *)(param_1 + 0x6a8)) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x6a0);
          if (iVar1 < *(int *)(lVar5 + 0x14 + lVar9)) break;
          iVar4 = *(int *)(lVar5 + 8 + lVar9);
          _Src = *(void **)(lVar5 + lVar9);
          iVar6 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar4 = *(int *)(param_1 + 0x688);
            iVar7 = (uint)(iVar4 == 0) + iVar6 + iVar4;
            *(int *)(param_1 + 0x688) = iVar7;
            if (*(int *)(param_1 + 0x68c) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
            }
            _Dst = (void *)(*plVar3 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          lVar9 = lVar9 + 0x18;
        } while ((int)uVar10 < *(int *)(param_1 + 0x6a8));
      }
      lVar9 = **(longlong **)(param_1 + 0x750);
      uVar8 = FText::FromString(auStack_88,plVar3);
      (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x750),uVar8,1,0);
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plStack_80 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
    }
    if (alStack_98[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141123d40 FUN_141123d40 body=9 status=ok
// SIG undefined FUN_141123d40(void)

void FUN_141123d40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_14110f1a0(param_1,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141123d50 FUN_141123d50 body=95 status=ok
// SIG undefined FUN_141123d50(void)

void FUN_141123d50(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bceb80(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141123db0 FUN_141123db0 body=60 status=ok
// SIG undefined FUN_141123db0(void)

void FUN_141123db0(longlong param_1)

{
  FUN_142ecbc80();
  FUN_14110f3a0(param_1);
  if ((*(longlong *)(param_1 + 0x6b0) != 0) && (0 < *(int *)(param_1 + 0x6d0))) {
    FUN_1411065f0(param_1);
    return;
  }
  return;
}



// FUNCTION 141123df0 FUN_141123df0 body=1351 status=ok
// SIG undefined FUN_141123df0(void)

void FUN_141123df0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong local_res10;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  FUN_142ecbc80();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar4 != 0) {
    FUN_14145f370();
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar4 != 0) {
    FUN_1414d9130();
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  pwVar11 = (wchar_t *)0x0;
  uVar5 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  uVar5 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x950) = uVar5;
  local_48 = (longlong *)0x0;
  local_40 = 0x2d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"crewQuartersWrapper.backpackWrapper.backpack",0x5a);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1410f9390(param_1,param_1 + 0x938,&local_48,0,6,&local_58);
  plVar10 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0x2d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"crewQuartersWrapper.buttonPromptWrapper.hint",0x5a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1410fb4d0(param_1,param_1 + 0x958,&local_58,0,6,&local_48);
  plVar10 = local_48;
  for (iVar12 = (int)local_40; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  pwVar6 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (pwVar6 != (wchar_t *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141124013;
  }
  pwVar6 = pwVar11;
LAB_141124013:
  FWeakObjectPtr::operator=(param_1 + 0x77c,pwVar6);
  FWeakObjectPtr::operator=(param_1 + 0x784,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x78c,*(undefined8 *)(param_1 + 0x938));
  plVar10 = (longlong *)(param_1 + 0x680);
  if ((wchar_t *)*plVar10 != L"backpackGrid") {
    *(undefined4 *)(param_1 + 0x688) = 0;
    pwVar6 = pwVar11;
    if (*(int *)(param_1 + 0x68c) != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar10,0xd);
      pwVar6 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x688);
    }
    iVar12 = (int)pwVar6 + 0xd;
    *(int *)(param_1 + 0x688) = iVar12;
    if (*(int *)(param_1 + 0x68c) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10);
    }
    builtin_wcsncpy((wchar_t *)*plVar10,L"backpackGrid",0xd);
  }
  uVar5 = FUN_1413348a0();
  *(undefined8 *)(param_1 + 0x758) = uVar5;
  cVar3 = FUN_142ebdd70(param_1);
  uVar9 = 8;
  if (cVar3 != '\0') {
    uVar9 = 4;
  }
  *(undefined4 *)(param_1 + 0x72c) = uVar9;
  FUN_140eeb880(param_1 + 0x7a0,plVar10,*(undefined8 *)(param_1 + 0x950));
  if (*(longlong *)(param_1 + 0x950) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    pwVar6 = pwVar11;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar8 = local_res10;
    lVar4 = *(longlong *)(param_1 + 0x950);
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_50);
    }
    FUN_1406a5aa0(lVar4 + 0xe8,&local_58);
  }
  plVar10 = *(longlong **)(param_1 + 0x958);
  if (plVar10 != (longlong *)0x0) {
    local_40 = 0;
    local_48 = plVar10;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_40 = UObjectBaseUtility::GetInterfaceAddress(plVar10,uVar5);
    FUN_142ecff00(param_1,&local_48,DAT_146875268);
  }
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnListItemSelected",L"::");
  pwVar6 = pwVar11;
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar6 = pwVar2;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  lVar4 = local_res10;
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  FWeakObjectPtr::operator=(&local_58,param_1);
  local_50 = lVar4;
  if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_58), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_50);
  }
  FUN_1406a5aa0(param_1 + 0x7a0,&local_58);
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnListItemClicked",L"::");
  while (pwVar7 = pwVar6, pwVar7 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
    pwVar11 = pwVar7;
  }
  FName::FName(&local_res10,pwVar11 + 2,1);
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  FWeakObjectPtr::operator=(&local_58,param_1);
  local_50 = local_res10;
  if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_58), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_50);
  }
  FUN_1406a5aa0(param_1 + 0x7b0,&local_58);
  *(undefined1 *)(param_1 + 0x960) = 1;
  FUN_14110fe90(param_1);
  return;
}



// FUNCTION 141124340 FUN_141124340 body=194 status=ok
// SIG undefined FUN_141124340(void)

void FUN_141124340(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1410e1fa0();
  local_10 = 0x15;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"landingPageContainer",0x2a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410f9970(param_1,param_1 + 0x690,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141124410 FUN_141124410 body=120 status=ok
// SIG undefined FUN_141124410(void)

void FUN_141124410(longlong param_1)

{
  bool bVar1;
  char cVar2;
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
      cVar2 = FUN_140d01b90(lVar3);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 500) = 1;
      }
    }
  }
  FUN_142ecbc80(param_1);
  return;
}



// FUNCTION 141124490 FUN_141124490 body=1750 status=ok
// SIG undefined FUN_141124490(void)

void FUN_141124490(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  longlong local_res10;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146875670) && (_Init_thread_header(&DAT_146875670), DAT_146875670 == -1))
  {
    FName::FName(&DAT_146875668,L"OnEitherAcceptButtonPressed",1);
    _Init_thread_footer(&DAT_146875670);
  }
  FUN_142ecbc80(param_1);
  local_20 = 0xc;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"EULAWrapper",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x748) = uVar5;
  plVar8 = local_38;
  for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x748),&local_28);
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"EULAText",0x12);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x750) = uVar5;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"EULATextMask",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x758) = uVar5;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"acceptButton",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x760) = uVar5;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x760) + 0x170);
    (**(code **)(*plVar8 + 0x38))(plVar8,1);
    lVar1 = *(longlong *)(param_1 + 0x760);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = DAT_146875668;
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"otherAcceptButton",0x24);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x768) = uVar5;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x768) + 0x170);
    (**(code **)(*plVar8 + 0x38))(plVar8,1);
    lVar1 = *(longlong *)(param_1 + 0x768);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = DAT_146875668;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar4 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    cVar4 = FUN_142dd3d20(uVar5);
    uVar5 = 1;
    if (cVar4 != '\0') goto LAB_1411248f1;
  }
  uVar5 = 2;
LAB_1411248f1:
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0xd8))((longlong *)(param_1 + 0x4d8),uVar5);
  FUN_142ecd4d0(param_1);
  if (*(int *)(param_1 + 0x68c) < 0x1c9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x680,0x1c9);
  }
  if (*(int *)(param_1 + 0x6a8) == 0) {
    FUN_141106d60(param_1);
  }
  else if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_141136f80(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x310));
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"EULAWrapper.scrollBar",0x2c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar5 = FUN_140f13f30(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x6b0) = uVar5;
  plVar8 = local_28;
  for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x6b0);
  if ((plVar8 != (longlong *)0x0) &&
     (iVar9 = *(int *)(param_1 + 0x698), (**(code **)(*plVar8 + 0x278))(plVar8,8 < iVar9), 8 < iVar9
     )) {
    FUN_142f10880(*(undefined8 *)(param_1 + 0x6b0),8.0 / (float)*(int *)(param_1 + 0x698));
    fVar10 = 1.0 / (float)*(int *)(param_1 + 0x698);
    FUN_142f10910(*(undefined8 *)(param_1 + 0x6b0),fVar10 + fVar10);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSliderPositionUpdate",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x6b0);
    FWeakObjectPtr::operator=(lVar1 + 0x378,param_1);
    *(longlong *)(lVar1 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar1 + 0x378), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar1 + 0x380));
    }
    FUN_142f0fa70(*(undefined8 *)(param_1 + 0x6b0),0);
  }
  FUN_141136f80(param_1,0);
  return;
}



// FUNCTION 141124b70 FUN_141124b70 body=2482 status=ok
// SIG undefined FUN_141124b70(void)

void FUN_141124b70(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [24];
  
  cVar3 = FUN_141111610();
  *(char *)(param_1 + 500) = cVar3;
  FUN_142ecbc80(param_1);
  local_220 = 10;
  local_228 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"menuTitle",0x14);
  local_238 = (longlong *)0x0;
  local_230 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_228,0,6,&local_238);
  *(undefined8 *)(param_1 + 0x770) = uVar5;
  plVar10 = local_238;
  for (iVar9 = (int)local_230; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_218 = 0;
    local_210 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_218,0x10,"menuDescription",0x10,0x3f);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Select the Character you want to play with",L"LoadGameMenu",
                       L"MenuDescText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x600),&local_218,uVar5);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_98 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if (local_218 != 0) {
      FMemory::Free();
    }
  }
  local_1f8 = 0;
  local_1f0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"loadCharacterPanel",0x26);
  local_208 = (longlong *)0x0;
  local_200 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_1f8,0,6,&local_208);
  *(undefined8 *)(param_1 + 0x780) = uVar5;
  plVar10 = local_208;
  for (iVar9 = (int)local_200; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  bVar2 = true;
  if (*(longlong *)(param_1 + 0x780) != 0) {
    local_1d8 = 0;
    local_1d0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
    FGenericPlatformString::Memcpy(local_1d8,L"loading",0x10);
    local_1e8 = (longlong *)0x0;
    local_1e0 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x780),&local_1d8,0,6,&local_1e8);
    *(undefined8 *)(param_1 + 0x778) = uVar5;
    plVar10 = local_1e8;
    for (iVar9 = (int)local_1e0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free(local_1e8);
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    local_1c8 = 0;
    local_1c0 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"loading.TXT_MatchmakingMode",0x38);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"LOADING",L"LoadGameMenu",L"LoadingText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x780),&local_1c8,uVar5);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_80 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    local_1a8 = 0;
    local_1a0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,L"loadCharacterList",0x24);
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    local_d8 = 0;
    lVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x780),&local_1a8,0,6,&local_1b8);
    plVar10 = local_1b8;
    for (iVar9 = (int)local_1b0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      local_188 = 0;
      local_180 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      FGenericPlatformString::Memcpy(local_188,L"contentPanel",0x1a);
      local_198 = (longlong *)0x0;
      local_190 = 0;
      local_d0 = 0;
      uVar5 = FUN_1410f7e90(lVar6,&local_188,0,6,&local_198);
      *(undefined8 *)(param_1 + 0x788) = uVar5;
      plVar10 = local_198;
      for (iVar9 = (int)local_190; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x788) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x20b) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x20a) = 2;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        FWeakObjectPtr::operator=(&local_f8,0);
        FWeakObjectPtr::operator=(&local_f0,0);
        FWeakObjectPtr::operator=(&local_e8,0);
        FWeakObjectPtr::operator=(&local_e0,0);
        uVar5 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>
                          (local_58,*(undefined8 *)(param_1 + 0x788));
        FUN_142ed5c20(param_1,uVar5,&local_f8);
      }
    }
  }
  local_168 = 0;
  local_160 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"loadCharacterDetails",0x2a);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_c8 = 0;
  uVar5 = FUN_1410f7850(param_1,&local_168,0,6,&local_178);
  *(undefined8 *)(param_1 + 0x790) = uVar5;
  plVar10 = local_178;
  for (iVar9 = (int)local_170; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  local_148 = 0;
  local_140 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"createCharacterButton",0x2c);
  local_158 = (longlong *)0x0;
  local_150 = 0;
  local_c0 = 0;
  uVar5 = FUN_140f9a0c0(param_1,&local_148,0,6,&local_158);
  *(undefined8 *)(param_1 + 0x798) = uVar5;
  plVar10 = local_158;
  for (iVar9 = (int)local_150; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    local_128 = 0;
    local_120 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"characterHint.hint",0x26);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_b8 = 0;
    uVar5 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x798),&local_128,0,6,&local_138);
    *(undefined8 *)(param_1 + 0x7a0) = uVar5;
    plVar10 = local_138;
    for (iVar9 = (int)local_130; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x7a0) != 0) {
      uVar5 = FUN_1404b03b0();
      FUN_142ed5ef0(*(undefined8 *)(param_1 + 0x7a0),&DAT_146875268,uVar5);
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"NEW CHARACTER",L"LoadGameMenu",L"NewCharacterText");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x798),uVar5,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_68 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x278))
              (*(longlong **)(param_1 + 0x798),cVar3 == '\0');
    puVar7 = (undefined8 *)FName::FName(local_b0,L"OnCreateCharacterButtonClicked",1);
    lVar6 = *(longlong *)(param_1 + 0x798);
    FWeakObjectPtr::operator=(lVar6 + 0x1b0,param_1);
    *(undefined8 *)(lVar6 + 0x1b8) = *puVar7;
  }
  local_108 = 0;
  local_100 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"countdown",0x14);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_a8 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_108,0,6,&local_118);
  *(undefined8 *)(param_1 + 0x7a8) = uVar5;
  plVar10 = local_118;
  for (iVar9 = (int)local_110; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a8) == 0) goto LAB_141125500;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 == 0) {
LAB_1411254d5:
    cVar4 = '\0';
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_1411254d5;
    cVar4 = FUN_140bc2c90(lVar6);
  }
  if ((cVar3 == '\0') || (cVar4 == '\0')) {
    uVar5 = 0;
  }
  else {
    FUN_14112ead0(param_1);
    uVar5 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8),uVar5);
LAB_141125500:
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 141125530 FUN_141125530 body=1183 status=ok
// SIG undefined FUN_141125530(void)

void FUN_141125530(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ecbc80();
  local_100 = 10;
  local_108 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"titleText",0x14);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_108,0,6,&local_118);
  *(undefined8 *)(param_1 + 0x680) = uVar3;
  plVar5 = local_118;
  for (iVar4 = (int)local_110; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  local_e8 = 0;
  local_e0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"categoryText",0x1a);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_e8,0,6,&local_f8);
  *(undefined8 *)(param_1 + 0x688) = uVar3;
  plVar5 = local_f8;
  for (iVar4 = (int)local_f0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"tipsLabel",0x14);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x690) = uVar3;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"dlcList",0x10);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  uVar3 = FUN_140ecb410(param_1,&local_a8,0,6,&local_b8);
  *(undefined8 *)(param_1 + 0x6a8) = uVar3;
  plVar5 = local_b8;
  for (iVar4 = (int)local_b0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"startButton",0x18);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_58 = 0;
  uVar3 = FUN_140f9a0c0(param_1,&local_88,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x698) = uVar3;
  plVar5 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    local_68 = 0;
    local_60 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"startHint.hint",0x1e);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_50 = 0;
    uVar3 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x698),&local_68,0,6,&local_78);
    *(undefined8 *)(param_1 + 0x6a0) = uVar3;
    plVar5 = local_78;
    for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6a0) != 0) {
      uVar3 = FUN_1404b03b0();
      FUN_142ed5ef0(*(undefined8 *)(param_1 + 0x6a0),&DAT_146b3e2a0,uVar3);
    }
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"START GAME",L"GFxNewDLCMenu",L"StartGameText");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x698),uVar3,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411259d0 FUN_1411259d0 body=376 status=ok
// SIG undefined FUN_1411259d0(void)

void FUN_1411259d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ecbc80();
  local_10 = 0xb;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"titleTints",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ac4770(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x680) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"bodyText",0x12);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x688) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ecd380(param_1,1);
  return;
}



// FUNCTION 141125b50 FUN_141125b50 body=379 status=ok
// SIG undefined FUN_141125b50(void)

void FUN_141125b50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 500) = 1;
  FUN_142ecbc80();
  local_20 = 0x1b;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CONT_LegalScreen.legalText",0x36);
  FUN_142ed5290(param_1,&local_28,param_1 + 0x6b0);
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"CONT_LegalScreen.logos",0x2e);
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x6c8);
  local_20 = 0;
  FUN_140ecf270(param_1,plVar1,&local_18,0,6,&local_28);
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*plVar1 != 0) {
    local_18 = 0;
    local_10 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"default",0x10);
    FUN_142088cf0(*plVar1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141125cd0 FUN_141125cd0 body=955 status=ok
// SIG undefined FUN_141125cd0(void)

void FUN_141125cd0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ecbc80();
  uVar4 = 0;
  local_b0 = 0x12;
  local_b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,0x12,"mainMenuContainer",0x12,0x3f);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_b8,0,6,&local_c8);
  param_1[0x145] = lVar2;
  plVar6 = local_c8;
  for (iVar5 = (int)local_c0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x145] != 0) {
    local_98 = 0;
    local_90 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_98,9,"menuList",9,0x3f);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    lVar2 = FUN_140ecb6b0(param_1[0x145],&local_98,0,6,&local_a8);
    param_1[0x130] = lVar2;
    plVar6 = local_a8;
    for (iVar5 = (int)local_a0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (param_1[0x130] != 0) {
      *(undefined1 *)(param_1[0x130] + 0x24c) = 0;
      *(undefined1 *)(param_1[0x130] + 0x20a) = 2;
      uVar3 = FUN_142085870(param_1[0x130],local_58,L"chapterText");
      FUN_142ede260(param_1 + 0x14b,uVar3);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      uVar3 = FUN_142085870(param_1[0x130],local_48,L"missionText");
      FUN_142ede260(param_1 + 0x148,uVar3);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_40 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      if ((param_1[0x149] != 0) && (param_1[0x14a] != 0)) {
        piVar1 = (int *)(param_1[0x14a] + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (0 < iVar5) {
          FUN_141138900(param_1);
        }
      }
    }
    local_78 = 0;
    local_70 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"mouseCapture",0x1a);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    lVar2 = FUN_1410f7af0(param_1[0x145],&local_78,0,6,&local_88);
    param_1[0x153] = lVar2;
    plVar6 = local_88;
    for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (param_1[0x153] != 0) {
      *(undefined1 *)(param_1[0x153] + 0x195) = 1;
      *(undefined1 *)(param_1[0x153] + 0x193) = 1;
    }
  }
  lVar2 = param_1[0x130];
  local_68 = lVar2;
  if (lVar2 != 0) {
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
  }
  local_60 = uVar4;
  FUN_142ed36d0(param_1,&local_68,0);
  FUN_1411323d0(param_1,0);
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x634) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141126084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 141126090 FUN_141126090 body=4174 status=ok
// SIG undefined FUN_141126090(void)

void FUN_141126090(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint uVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  int iVar13;
  longlong local_res8;
  longlong local_res10;
  undefined4 in_stack_fffffffffffffef8;
  undefined2 uVar14;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  wchar_t *local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_142ecbc80();
  pwVar5 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  pwVar11 = (wchar_t *)0x0;
  if (pwVar5 == (wchar_t *)0x0) {
LAB_141126108:
    pwVar5 = pwVar11;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141126108;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar6 != 0) {
    FUN_1413f82e0();
  }
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"storageContainer",0x22);
  local_d8 = (longlong *)0x0;
  uVar4 = CONCAT31((int3)((uint)in_stack_fffffffffffffef8 >> 8),6);
  local_d0 = 0;
  FUN_140ecf270(param_1,param_1 + 0x798,&local_c8,0,uVar4,&local_d8);
  plVar12 = local_d8;
  for (iVar13 = (int)local_d0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"compareContainerL",0x24);
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
  FUN_140ecf270(param_1,param_1 + 0x7a0,&local_d8,0,uVar4,&local_c8);
  plVar12 = local_c8;
  for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"compareContainerR",0x24);
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
  FUN_140ecf270(param_1,param_1 + 0x7a8,&local_d8,0,uVar4,&local_c8);
  plVar12 = local_c8;
  for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"listCapacityPanel",0x24);
  local_c8 = (longlong *)0x0;
  uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
  uStack_c0 = 0;
  FUN_1410fa7a0(param_1,param_1 + 0x7b0,&local_d8,0,uVar4,&local_c8);
  plVar12 = local_c8;
  for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"listCapacityPanelLeft",0x2c);
  local_c8 = (longlong *)0x0;
  uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
  uStack_c0 = 0;
  FUN_1410fa7a0(param_1,param_1 + 0x7b8,&local_d8,0,uVar4,&local_c8);
  plVar12 = local_c8;
  for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"navigationWrapper",0x24);
  local_c8 = (longlong *)0x0;
  uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
  uStack_c0 = 0;
  FUN_1410fad80(param_1,param_1 + 0x7c0,&local_d8,0,uVar4,&local_c8);
  plVar12 = local_c8;
  for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar14 = (undefined2)((uint)uVar4 >> 0x10);
  if (*(longlong *)(param_1 + 0x798) != 0) {
    local_d8 = (longlong *)0x0;
    local_d0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"listHeaderFull",0x1e);
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    FUN_1410fa430(*(undefined8 *)(param_1 + 0x798),param_1 + 0x7c8,&local_d8,0,uVar4,&local_c8);
    plVar12 = local_c8;
    for (iVar13 = (int)uStack_c0; uVar14 = (undefined2)((uint)uVar4 >> 0x10), iVar13 != 0;
        iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((pwVar5 == (wchar_t *)0x0) || (cVar3 = FUN_142dcfc60(pwVar5), cVar3 != '\x03')) {
    local_res8 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    uVar4 = CONCAT22(uVar14,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,10,"itemCard1",10,uVar4);
    local_c8 = (longlong *)0x0;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
    uStack_c0 = 0;
    FUN_140e97c70(param_1,&local_res8,&local_d8,0,uVar4,&local_c8);
    uVar14 = (undefined2)((uint)uVar4 >> 0x10);
    plVar12 = local_c8;
    for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      uVar14 = (undefined2)((uint)uVar4 >> 0x10);
      plVar12 = plVar12 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(longlong *)(param_1 + 2000) = local_res8;
    local_res8 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,10,"itemCard2",10,CONCAT22(uVar14,0x3f));
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    FUN_140e97c70(param_1,&local_res8,&local_d8,0,6,&local_c8);
    plVar12 = local_c8;
    for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
  }
  else {
    local_res8 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    uVar4 = CONCAT22(uVar14,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,0x15,"itemCard1Abbreviated",0x15,uVar4);
    local_c8 = (longlong *)0x0;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),6);
    uStack_c0 = 0;
    FUN_1410f9be0(param_1,&local_res8,&local_d8,0,uVar4,&local_c8);
    uVar14 = (undefined2)((uint)uVar4 >> 0x10);
    plVar12 = local_c8;
    for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      uVar14 = (undefined2)((uint)uVar4 >> 0x10);
      plVar12 = plVar12 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(longlong *)(param_1 + 2000) = local_res8;
    local_res8 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_d8,0x15,"itemCard2Abbreviated",0x15,CONCAT22(uVar14,0x3f));
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    FUN_1410f9be0(param_1,&local_res8,&local_d8,0,6,&local_c8);
    plVar12 = local_c8;
    for (iVar13 = (int)uStack_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(longlong *)(param_1 + 0x7d8) = local_res8;
  local_res8 = param_1;
  FUN_141100a00(&local_res8,*(undefined8 *)(param_1 + 2000));
  FUN_141100a00(&local_res8,*(undefined8 *)(param_1 + 0x7d8));
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar7 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  uVar7 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x790) = uVar7;
  if ((pwVar5 != (wchar_t *)0x0) &&
     (pwVar5 = (wchar_t *)(**(code **)(*(longlong *)(pwVar5 + 0x4c0) + 0x10))(),
     pwVar5 != (wchar_t *)0x0)) {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411269a6;
  }
  pwVar5 = pwVar11;
LAB_1411269a6:
  if ((*(longlong *)(param_1 + 0x790) != 0) && (pwVar5 != (wchar_t *)0x0)) {
    uStack_c0 = *(undefined8 *)(pwVar5 + 0x5c0);
    local_b8 = *(undefined8 *)(pwVar5 + 0x5c4);
    local_c8 = (longlong *)CONCAT44(0x1f,(int)*(undefined8 *)(pwVar5 + 0x5bc));
    FUN_1411f9620(*(longlong *)(param_1 + 0x790),&local_c8);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    pwVar5 = pwVar11;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x790);
    FWeakObjectPtr::operator=(&local_d8,0);
    local_d0 = 0;
    FWeakObjectPtr::operator=(&local_d8,param_1);
    local_d0 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_d8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_d0);
    }
    FUN_1406a5aa0(lVar6 + 0xe8,&local_d8);
  }
  local_58 = 0x80;
  uStack_50 = 0x100000001;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_a0 = (wchar_t *)0x0;
  local_98 = 0;
  local_90 = (wchar_t *)0x0;
  local_88 = 0;
  local_80 = (wchar_t *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=(&local_a8,*(undefined8 *)(param_1 + 0x798));
  uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(param_1 + 0x770));
  if (local_a0 != L"listFull.scrollingList") {
    uVar10 = local_98._4_4_;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,0x17);
      pwVar5 = (wchar_t *)(local_98 & 0xffffffff);
      uVar10 = local_98._4_4_;
    }
    iVar13 = (int)pwVar5 + 0x17;
    local_98 = CONCAT44(local_98._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
    }
    builtin_wcsncpy(local_a0,L"listFull.scrollingList",0x17);
  }
  if (local_90 != L"listFull.scrollBar") {
    uVar10 = local_88._4_4_;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,0x13);
      pwVar5 = (wchar_t *)(local_88 & 0xffffffff);
      uVar10 = local_88._4_4_;
    }
    iVar13 = (int)pwVar5 + 0x13;
    local_88 = CONCAT44(local_88._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    }
    builtin_wcsncpy(local_90,L"listFull.scrollBar",0x13);
  }
  if (local_80 != L"entry") {
    uVar10 = local_78._4_4_;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80,6);
      pwVar5 = (wchar_t *)(local_78 & 0xffffffff);
      uVar10 = local_78._4_4_;
    }
    iVar13 = (int)pwVar5 + 6;
    local_78 = CONCAT44(local_78._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
    }
    builtin_wcsncpy(local_80,L"entry",6);
  }
  local_70 = FUN_14138d860();
  if (local_68 != L"GridItemLeft") {
    uVar10 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,0xd);
      pwVar5 = (wchar_t *)(local_60 & 0xffffffff);
      uVar10 = local_60._4_4_;
    }
    iVar13 = (int)pwVar5 + 0xd;
    local_60 = CONCAT44(local_60._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    builtin_wcsncpy(local_68,L"GridItemLeft",0xd);
  }
  cVar3 = FUN_142ebdd70(param_1);
  if (cVar3 == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x760);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x764);
  }
  local_44 = *(undefined4 *)(param_1 + 0x748);
  local_40 = *(undefined4 *)(param_1 + 0x74c);
  local_48 = 1;
  *(undefined1 *)(param_1 + 0x818) = 1;
  uStack_50._4_4_ = uVar4;
  FUN_14103cfc0(param_1 + 0x820,&local_a8);
  FWeakObjectPtr::operator=(&local_a8,*(undefined8 *)(param_1 + 0x7a0));
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  if (local_a0 != L"listShort1.scrollingList") {
    uVar10 = local_98._4_4_;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,0x19);
      pwVar5 = (wchar_t *)(local_98 & 0xffffffff);
      uVar10 = local_98._4_4_;
    }
    iVar13 = (int)pwVar5 + 0x19;
    local_98 = CONCAT44(local_98._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
    }
    builtin_wcsncpy(local_a0,L"listShort1.scrollingList",0x19);
  }
  if (local_90 != L"listShort1.scrollBar") {
    uVar10 = local_88._4_4_;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,0x15);
      pwVar5 = (wchar_t *)(local_88 & 0xffffffff);
      uVar10 = local_88._4_4_;
    }
    iVar13 = (int)pwVar5 + 0x15;
    local_88 = CONCAT44(local_88._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    }
    builtin_wcsncpy(local_90,L"listShort1.scrollBar",0x15);
  }
  if (local_68 != L"GridItemLeft") {
    uVar10 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,0xd);
      pwVar5 = (wchar_t *)(local_60 & 0xffffffff);
      uVar10 = local_60._4_4_;
    }
    iVar13 = (int)pwVar5 + 0xd;
    local_60 = CONCAT44(local_60._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    builtin_wcsncpy(local_68,L"GridItemLeft",0xd);
  }
  cVar3 = FUN_142ebdd70(param_1);
  if (cVar3 == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x768);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x76c);
  }
  local_44 = *(undefined4 *)(param_1 + 0x750);
  local_40 = *(undefined4 *)(param_1 + 0x754);
  local_48 = 1;
  *(undefined1 *)(param_1 + 0x8e8) = 2;
  uStack_50._4_4_ = uVar4;
  FUN_14103cfc0(param_1 + 0x8f0,&local_a8);
  FWeakObjectPtr::operator=(&local_a8,*(undefined8 *)(param_1 + 0x7a8));
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  if (local_a0 != L"listShort2.scrollingList") {
    uVar10 = local_98._4_4_;
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    pwVar5 = pwVar11;
    if (uVar10 != 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,0x19);
      pwVar5 = (wchar_t *)(local_98 & 0xffffffff);
      uVar10 = local_98._4_4_;
    }
    iVar13 = (int)pwVar5 + 0x19;
    local_98 = CONCAT44(local_98._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
    }
    builtin_wcsncpy(local_a0,L"listShort2.scrollingList",0x19);
  }
  if (local_90 != L"listShort2.scrollBar") {
    uVar10 = local_88._4_4_;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    if (uVar10 != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,0x15);
      pwVar11 = (wchar_t *)(local_88 & 0xffffffff);
      uVar10 = local_88._4_4_;
    }
    iVar13 = (int)pwVar11 + 0x15;
    local_88 = CONCAT44(local_88._4_4_,iVar13);
    if ((int)uVar10 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
    }
    builtin_wcsncpy(local_90,L"listShort2.scrollBar",0x15);
  }
  if (local_68 != L"GridItemRight") {
    uVar10 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    iVar13 = 0;
    if (uVar10 != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,0xe);
      uVar10 = local_60._4_4_;
      iVar13 = (int)local_60;
    }
    local_60 = CONCAT44(local_60._4_4_,iVar13 + 0xe);
    if ((int)uVar10 < iVar13 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar13);
    }
    builtin_wcsncpy(local_68,L"GridItemRight",0xe);
  }
  cVar3 = FUN_142ebdd70(param_1);
  if (cVar3 == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x768);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x76c);
  }
  local_44 = *(undefined4 *)(param_1 + 0x750);
  local_40 = *(undefined4 *)(param_1 + 0x754);
  uStack_50 = CONCAT44(uVar4,(undefined4)uStack_50);
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x9b8) = 3;
  FUN_14103cfc0(param_1 + 0x9c0,&local_a8);
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x804) = 1;
  if (*(int *)(param_1 + 0x800) == 0) {
    *(undefined1 *)(param_1 + 0xa89) = 1;
  }
  FUN_14112dfc0(param_1);
  return;
}



// FUNCTION 1411270e0 FUN_1411270e0 body=2364 status=ok
// SIG undefined FUN_1411270e0(void)

undefined4 FUN_1411270e0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_142ecbc80();
  FUN_142ecd4d0(param_1);
  uVar4 = 0;
  local_1f0 = 0x13;
  local_1f8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"panelModeSelection",0x26);
  local_208 = (longlong *)0x0;
  local_200 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_1f8,0,6,&local_208);
  *(undefined8 *)(param_1 + 0x780) = uVar3;
  plVar6 = local_208;
  for (iVar7 = (int)local_200; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    local_1e8 = 0;
    local_1e0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x780),&local_1e8);
    if (local_1e8 != 0) {
      FMemory::Free();
    }
  }
  local_1c8 = 0;
  local_1c0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"paneToolTip",0x18);
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_1c8,0,6,&local_1d8);
  *(undefined8 *)(param_1 + 0x788) = uVar3;
  plVar6 = local_1d8;
  for (iVar7 = (int)local_1d0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    local_1b8 = 0;
    local_1b0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x788),&local_1b8);
    if (local_1b8 != 0) {
      FMemory::Free();
    }
  }
  local_198 = 0;
  local_190 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  FGenericPlatformString::Memcpy(local_198,L"titleText",0x14);
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_198,0,6,&local_1a8);
  *(undefined8 *)(param_1 + 0x790) = uVar3;
  plVar6 = local_1a8;
  for (iVar7 = (int)local_1a0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  local_178 = 0;
  local_170 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"modeDescText",0x1a);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x798) = uVar3;
  plVar6 = local_188;
  for (iVar7 = (int)local_180; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"modeTitleText",0x1c);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_58 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 0x7a0) = uVar3;
  plVar6 = local_168;
  for (iVar7 = (int)local_160; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"ToolTipTitleText",0x22);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_50 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0x7a8) = uVar3;
  plVar6 = local_148;
  for (iVar7 = (int)local_140; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"ToolTipDescText",0x20);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_48 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_118,0,6,&local_128);
  *(undefined8 *)(param_1 + 0x7b0) = uVar3;
  plVar6 = local_128;
  for (iVar7 = (int)local_120; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"modesList",0x14);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_40 = 0;
  uVar3 = FUN_140ecb410(param_1,&local_f8,0,6,&local_108);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  plVar6 = local_108;
  for (iVar7 = (int)local_100; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(&local_a8,0);
  FWeakObjectPtr::operator=(&local_a0,0);
  FWeakObjectPtr::operator=(&local_98,0);
  FWeakObjectPtr::operator=(&local_90,0);
  lVar5 = *(longlong *)(param_1 + 0x7c8);
  local_68 = lVar5;
  if (lVar5 != 0) {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
  }
  local_60 = uVar4;
  FUN_142ecfd10(param_1,&local_68,&local_a8);
  local_d8 = 0;
  local_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"tooltip1",0x12);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_38 = 0;
  uVar3 = FUN_140f139f0(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x7b8) = uVar3;
  plVar6 = local_e8;
  for (iVar7 = (int)local_e0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x7b8);
  if (lVar5 != 0) {
    local_80 = 0;
    local_88 = lVar5;
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_80 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
    FUN_142ecff00(param_1,&local_88,DAT_146b3e2a0);
  }
  local_b8 = 0;
  local_b0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"tooltip2",0x12);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_30 = 0;
  uVar3 = FUN_140f139f0(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x7c0) = uVar3;
  plVar6 = local_c8;
  for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x7c0);
  if (lVar5 != 0) {
    local_70 = 0;
    local_78 = lVar5;
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_70 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
    FUN_142ecff00(param_1,&local_78,DAT_146875268);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar5 = FUN_140ec9a00(uVar3);
    if (lVar5 != 0) {
      FUN_141131d10(lVar5,3);
    }
  }
  FUN_14112d080(param_1);
  plVar6 = *(longlong **)(param_1 + 0x790);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x698,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 0x7a8);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6b0,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 0x7b0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6c8,1,0);
  }
  FUN_142ecd380(param_1,1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141127a20 FUN_141127a20 body=1307 status=ok
// SIG undefined FUN_141127a20(void)

void FUN_141127a20(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ecbc80();
  FUN_142ecd4d0(param_1);
  local_e0 = 0x21;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"sduContainer.itemCardPlaceholder",0x42);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_res18 = 0;
  FUN_140e97c70(param_1,param_1 + 0x6c0,&local_e8,0,6,&local_f8);
  plVar9 = local_f8;
  for (iVar10 = (int)local_f0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"sduContainer.playerInfoContainer",0x42);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_res20 = 0;
  FUN_1410faff0(param_1,param_1 + 0x6c8,&local_c8,0,6,&local_d8);
  plVar9 = local_d8;
  for (iVar10 = (int)local_d0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FUN_142f10940(*(longlong *)(param_1 + 0x6c0),1);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x6c0);
    FWeakObjectPtr::operator=(lVar2 + 0x198,param_1);
    *(longlong *)(lVar2 + 0x1a0) = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar2 + 0x198), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar2 + 0x1a0));
    }
    FUN_140f70290(*(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x680));
  }
  local_a8 = 0;
  local_a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"purchaseClip",0x1a);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_1410fb260(param_1,param_1 + 0x6e0,&local_a8,0,6,&local_b8);
  plVar9 = local_b8;
  for (iVar10 = (int)local_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"insufficientFunds",0x24);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_78 = 0;
  FUN_1410fb260(param_1,param_1 + 0x6e8,&local_88,0,6,&local_98);
  plVar9 = local_98;
  for (iVar10 = (int)local_90; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Purchased!",L"GFxSDUVendorMenu",L"PurchasedText");
    lVar2 = *(longlong *)(param_1 + 0x6e0);
    plVar9 = *(longlong **)(lVar2 + 0x170);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,uVar8,1,0);
    }
    plVar9 = *(longlong **)(lVar2 + 0x178);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,uVar8,1,0);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Insufficient Funds!",L"GFxSDUVendorMenu",L"InsufficientFundsText")
    ;
    lVar2 = *(longlong *)(param_1 + 0x6e8);
    plVar9 = *(longlong **)(lVar2 + 0x170);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,uVar8,1,0);
    }
    plVar9 = *(longlong **)(lVar2 + 0x178);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9,uVar8,1,0);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x6f0) = 1;
  if (((*(char *)(param_1 + 0x6f2) != '\0') && (*(char *)(param_1 + 0x6f1) != '\0')) &&
     (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x6d8), cVar5 != '\0')) {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x6d8);
    FUN_140af3720(uVar8);
  }
  return;
}



// FUNCTION 141127f40 FUN_141127f40 body=35 status=ok
// SIG undefined FUN_141127f40(void)

void FUN_141127f40(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x838,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141127f70 FUN_141127f70 body=374 status=ok
// SIG undefined FUN_141127f70(void)

void FUN_141127f70(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_res20;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res20 = param_1;
  cVar4 = FUN_141101af0(&local_res20);
  if (cVar4 == '\0') {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_20,L"No Space",L"MainMenu",L"TooManySavesTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,
               L"You have too many save games, you must delete one before you can create a new character."
               ,L"MainMenu",L"TooManySavesMessage");
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    FUN_1410f3960(uVar5,local_20,local_38,local_48,0,0,2);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
          return;
        }
      }
    }
  }
  else {
    lVar6 = FUN_14110de20(param_1);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x5b4) = *(undefined4 *)(param_3 + 8);
    }
    local_res8[0] = 3;
    FUN_141136250(param_1,local_res8,param_1 + 0x680,*(undefined4 *)(param_3 + 8));
  }
  return;
}



// FUNCTION 1411280f0 FUN_1411280f0 body=954 status=ok
// SIG undefined FUN_1411280f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411280f0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  ulonglong *puStack_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *plStack_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x7a8) == 0) {
    return;
  }
  FText::FText(local_f0);
  local_100 = 0;
  plStack_f8 = (longlong *)0x0;
  auVar11._0_8_ = (double)param_2 * 10000000.0 + 0.5;
  lVar10 = (longlong)auVar11._0_8_;
  if (0.0 <= auVar11._0_8_) {
    if ((lVar10 == -0x8000000000000000) || ((double)lVar10 == auVar11._0_8_)) goto LAB_1411281bf;
    auVar12._8_8_ = auVar11._0_8_;
    auVar12._0_8_ = auVar11._0_8_;
    uVar6 = movmskpd(0,auVar12);
    uVar7 = -(ulonglong)(uVar6 & 1);
  }
  else {
    if ((lVar10 == -0x8000000000000000) || ((double)lVar10 == auVar11._0_8_)) goto LAB_1411281bf;
    auVar11._8_8_ = auVar11._0_8_;
    uVar6 = movmskpd(0,auVar11);
    uVar7 = (ulonglong)(uVar6 & 1 ^ 1);
  }
  auVar11._0_8_ = (double)(longlong)(lVar10 + uVar7);
LAB_1411281bf:
  local_118 = (longlong)auVar11._0_8_;
  lVar10 = FUN_1415fcfc0(local_70,&local_118,&local_100);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_98,L"Game starts in: {0}",L"LoadGameMenu",L"CountdownText");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar8);
  local_58[0] = 4;
  FText::FText(local_48,lVar10);
  local_110 = *puVar9;
  local_128 = local_58;
  puStack_120 = local_28;
  local_108 = puVar9[1];
  local_30 = '\x01';
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_128);
  uVar8 = FText::Format(local_b0,&local_110,uVar8);
  FText::FText(local_c8,uVar8);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_d8);
  if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar4 = (longlong *)puVar9[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(lVar10 + 8);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FText::operator=(local_f0,local_c8);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar4 = plStack_f8;
  if (plStack_f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_f8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_f8)(plStack_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x2b0))
            (*(longlong **)(param_1 + 0x7a8),local_f0,1,0);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_e8 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  return;
}



// FUNCTION 1411284b0 FUN_1411284b0 body=755 status=ok
// SIG undefined FUN_1411284b0(void)

void FUN_1411284b0(longlong param_1,longlong param_2)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (lVar4 = FUN_140cff230(lVar4), lVar4 != 0)) &&
        (lVar5 = FUN_140f9aee0(param_1), lVar5 != 0)) && (lVar5 = FUN_1424503b0(lVar5), lVar5 != 0))
    {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar6 = FUN_14270bb10(lVar5), lVar6 != 0)) {
        local_res8[0] = 0xd;
        lVar6 = FUN_141136250(param_1,local_res8,param_1 + 0x810,*(undefined4 *)(lVar6 + 0x108));
        if (lVar6 != 0) {
          lVar7 = FUN_14137f1c0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            cVar2 = FUN_141110000(param_1,param_2);
            if (cVar2 == '\0') {
              local_30 = *(int *)(param_2 + 0x38);
              lVar7 = (longlong)local_30;
              _Src = *(void **)(param_2 + 0x30);
              local_38 = (void *)0x0;
              if (local_30 == 0) {
                local_2c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
                _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 * 2);
              }
              FUN_140d281e0(lVar4,&local_38);
              Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar5);
              if (local_38 != (void *)0x0) {
                FMemory::Free();
              }
            }
            *(longlong *)(lVar6 + 0x698) = param_2;
            if (param_2 != 0) {
              iVar3 = FUN_141592950(param_2 + 0x30,L"oakasset.frame.",1,0,0xffffffff);
              lVar4 = *(longlong *)(lVar6 + 0x698) + 0x30;
              if (iVar3 == -1) {
                iVar3 = FUN_141592950(lVar4,L"oakasset.",1,0,0xffffffff);
                if (iVar3 == -1) {
                  return;
                }
                uVar9 = FString::Replace(*(longlong *)(lVar6 + 0x698) + 0x30,&local_38,L"oakasset.",
                                         &DAT_1446a5744,1);
                FString::operator=(*(longlong *)(lVar6 + 0x698) + 0x30,uVar9);
              }
              else {
                plVar8 = (longlong *)
                         FString::Replace(lVar4,&local_38,L"oakasset.frame.",&DAT_1446a56d4,1);
                lVar4 = *(longlong *)(lVar6 + 0x698);
                plVar10 = (longlong *)(lVar4 + 0x30);
                if (plVar10 != plVar8) {
                  if (*plVar10 != 0) {
                    FMemory::Free();
                  }
                  *plVar10 = *plVar8;
                  *plVar8 = 0;
                  *(int *)(lVar4 + 0x38) = (int)plVar8[1];
                  *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)((longlong)plVar8 + 0xc);
                  plVar8[1] = 0;
                }
              }
              if (local_38 != (void *)0x0) {
                FMemory::Free();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411287b0 FUN_1411287b0 body=1214 status=ok
// SIG undefined FUN_1411287b0(void)

void FUN_1411287b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *plStack_e8;
  longlong local_e0 [3];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  plVar11 = (longlong *)0x0;
  uVar5 = thunk_FUN_1422ca050();
  cVar4 = FUN_140a0b280(uVar5);
  if (cVar4 == '\0') {
    FUN_140dbb930(local_70,3);
    FWeakObjectPtr::operator=(local_b8,0);
    local_b0 = 0;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Network Error",L"MainMenu",L"NetworkError");
    FUN_1410f3960(uVar5,uVar8,local_70,local_b8,1,0,0);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_38 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (local_68 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar11 = local_68 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) {
      return;
    }
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_68 + 8))(local_68,1);
    return;
  }
  local_e0[2] = 0;
  plVar6 = (longlong *)FUN_1404b0000(local_e0 + 2);
  bVar12 = plVar6 != (longlong *)0x0;
  if (bVar12) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x80))(plVar6,local_98);
    plVar11 = (longlong *)*puVar7;
  }
  else {
    puVar7 = &local_f0;
    local_f0 = 0;
    plStack_e8 = (longlong *)0x0;
  }
  plVar6 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if ((bVar12) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar10 = plStack_e8;
  if ((!bVar12) && (plStack_e8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_e8 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_e8)(plStack_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
      }
    }
  }
  if ((plVar11 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar4 != '\0')) {
    local_108 = 0;
    FUN_1404cf2e0(&local_100,0);
    plVar11 = local_100;
    if (local_100 != (longlong *)0x0) {
      FUN_14110dcd0(param_1,&local_118,*(undefined4 *)(param_3 + 8));
      plVar10 = plStack_110;
      if (local_118 != 0) {
        local_a8 = local_118;
        plStack_a0 = plStack_110;
        local_e0[0] = 0;
        local_e0[1] = 0;
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
          UNLOCK();
          plVar11 = local_100;
        }
        (**(code **)(*plVar11 + 0x28))(plVar11,&local_a8,0xffffffff,local_e0);
        plVar11 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_a0 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar10 = plStack_110;
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar10 = plStack_110;
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
              plVar10 = plStack_110;
            }
          }
        }
        if (local_e0[0] != 0) {
          FMemory::Free();
        }
      }
      plVar11 = plStack_110;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar10 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_110 + 8))(plStack_110,1);
          }
        }
      }
    }
    plVar11 = local_f8;
    if (local_f8 == (longlong *)0x0) goto LAB_141128b24;
    LOCK();
    plVar10 = local_f8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_141128b24;
    (**(code **)*local_f8)(local_f8);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_141128b24;
    lVar9 = *local_f8;
    local_80 = local_f8;
  }
  else {
    FUN_140dbb930(local_88,1);
    FWeakObjectPtr::operator=(local_c8,0);
    local_c0 = 0;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Network Error",L"MainMenu",L"NetworkError");
    FUN_1410f3960(uVar5,uVar8,local_88,local_c8,1,0,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_80 == (longlong *)0x0) goto LAB_141128b24;
    LOCK();
    plVar11 = local_80 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_141128b24;
    (**(code **)*local_80)(local_80);
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_141128b24;
    lVar9 = *local_80;
  }
  (**(code **)(lVar9 + 8))(local_80,1);
LAB_141128b24:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  }
  return;
}



// FUNCTION 141128c70 FUN_141128c70 body=39 status=ok
// SIG undefined FUN_141128c70(void)

void FUN_141128c70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x568))();
  FUN_141137ed0(param_1);
  FUN_141138900(param_1);
  return;
}



// FUNCTION 141128ca0 FUN_141128ca0 body=98 status=ok
// SIG undefined FUN_141128ca0(void)

void FUN_141128ca0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
    *(undefined4 *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
  }
  local_58[0] = FUN_1411074c0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 141128d10 FUN_141128d10 body=316 status=ok
// SIG undefined FUN_141128d10(void)

void FUN_141128d10(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"ExtMoodPicture",0x1e);
  lVar3 = param_1 + 0x188;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 400)) && (*(longlong *)(param_1 + 0x198) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 400) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_141128dda;
    }
  }
  else {
LAB_141128dda:
    lVar3 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141128e13;
  }
  lVar2 = 0;
LAB_141128e13:
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
            (*(longlong **)(param_1 + 0x38),local_18,lVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141128e70 FUN_141128e70 body=437 status=ok
// SIG undefined FUN_141128e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141128e70(longlong param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_142eccee0();
  FUN_140f0dc50(param_1 + 0x7a0,param_2);
  param_2 = *(float *)(param_1 + 0x970) - param_2;
  *(float *)(param_1 + 0x970) = param_2;
  if ((*(char *)(param_1 + 0x974) != '\0') && (param_2 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x798);
    *(undefined1 *)(param_1 + 0x974) = 0;
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x948);
    if (lVar2 != 0) {
      lVar3 = FUN_1412fc200();
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
        FWeakObjectPtr::operator=(&local_98,param_1);
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_1444f8920;
          puVar4[1] = param_1;
          *(undefined4 *)(puVar4 + 2) = local_98;
          *(undefined4 *)((longlong)puVar4 + 0x14) = local_94;
        }
        local_88[0] = &LAB_1411076c0;
        FUN_14208c260(param_1,local_88);
        if (local_48 != 0) {
          plVar5 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar5 = local_58;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 141129040 FUN_141129040 body=397 status=ok
// SIG undefined FUN_141129040(void)

void FUN_141129040(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  cVar10 = FUN_1411118c0();
  if (cVar10 != '\0') {
    lVar11 = FUN_140f9aee0(param_1);
    if ((lVar11 != 0) && (cVar10 = FUN_140bca890(lVar11), cVar10 != '\0')) {
      uVar12 = FWeakObjectPtr::Get(param_1 + 0x58c);
      FUN_140bed6a0(lVar11,uVar12);
      return;
    }
    plVar7 = (longlong *)param_3[4];
    uVar12 = param_3[2];
    uVar4 = *(undefined1 *)((longlong)param_3 + 0xc);
    uVar8 = param_3[3];
    uVar9 = *param_3;
    uVar6 = *(undefined4 *)(param_3 + 1);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    uVar5 = *(undefined1 *)(param_3 + 5);
    local_48 = 0;
    local_38 = 0;
    puVar13 = (undefined8 *)FUN_140438ef0(0x40,local_68);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &PTR_FUN_14468e9c8;
      puVar13[1] = param_1;
      puVar13[2] = uVar9;
      *(undefined4 *)(puVar13 + 3) = uVar6;
      *(undefined1 *)((longlong)puVar13 + 0x1c) = uVar4;
      puVar13[4] = uVar12;
      puVar13[5] = uVar8;
      puVar13[6] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *(undefined1 *)(puVar13 + 7) = uVar5;
    }
    local_78[0] = FUN_141107540;
    FUN_14204c280(local_78);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411291d0 FUN_1411291d0 body=140 status=ok
// SIG undefined FUN_1411291d0(void)

void FUN_1411291d0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14138d860();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14112922d;
  }
  param_3 = 0;
LAB_14112922d:
  FUN_141136ec0(param_1,param_1 + 0x818,param_2,param_3,param_4);
  return;
}



// FUNCTION 141129260 FUN_141129260 body=140 status=ok
// SIG undefined FUN_141129260(void)

void FUN_141129260(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14138d860();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411292bd;
  }
  param_3 = 0;
LAB_1411292bd:
  FUN_141136ec0(param_1,param_1 + 0x8e8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411292f0 FUN_1411292f0 body=140 status=ok
// SIG undefined FUN_1411292f0(void)

void FUN_1411292f0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14138d860();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14112934d;
  }
  param_3 = 0;
LAB_14112934d:
  FUN_141136ec0(param_1,param_1 + 0x9b8,param_2,param_3,param_4);
  return;
}



// FUNCTION 141129380 FUN_141129380 body=556 status=ok
// SIG undefined FUN_141129380(void)

void FUN_141129380(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_30,L"Please wait while the save uploads...",L"MainMenu",
                         L"CloudSaveUploadingMessage");
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (&local_48,L"Save",L"MainMenu",L"CloudSaveTitle");
      uVar11 = 0;
      uVar7 = FUN_1410f2b30(lVar5,uVar8,uVar7,0,0,0);
      plVar2 = (longlong *)CONCAT44(uStack_3c,uStack_40);
      *(undefined8 *)(param_1 + 0xb50) = uVar7;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      uStack_40 = 0;
      local_48 = FUN_1411295b0;
      plVar2 = (longlong *)(lVar5 + 0x13b8);
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_1446ba1e0;
        FWeakObjectPtr::operator=(plVar9 + 1,param_1);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar9 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_3c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar6;
        *plVar9 = (longlong)&PTR_FUN_1446ba228;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
        iVar3 = *(int *)(lVar5 + 0x13c0);
        uVar11 = *puVar10;
        *(int *)(lVar5 + 0x13c0) = iVar3 + 1;
        if (*(int *)(lVar5 + 0x13c4) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
        }
        puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
        *puVar10 = plVar9;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0xb40) = uVar11;
      FUN_140d0e1d0(lVar5);
    }
  }
  return;
}



// FUNCTION 1411295b0 FUN_1411295b0 body=686 status=ok
// SIG undefined FUN_1411295b0(void)

void FUN_1411295b0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x13b8,*(undefined8 *)(param_1 + 0xb40));
      thunk_FUN_142eb3990(*(undefined8 *)(param_1 + 0xb50));
      *(undefined8 *)(param_1 + 0xb50) = 0;
      goto LAB_141129650;
    }
  }
  lVar5 = 0;
LAB_141129650:
  if (param_3 == '\0') {
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Save game upload failed.",L"MainMenu",
                       L"CloudSaveUploadFailMessage");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Save",L"MainMenu",L"CloudSaveTitle");
    FUN_1410f3960(lVar5,uVar8,uVar7,local_78,0,0,2);
    plVar9 = local_18;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar9 = local_18;
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
          plVar9 = local_18;
        }
      }
    }
  }
  else {
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Upload of the character inventory and bank successful.",
                       L"MainMenu",L"CloudSaveUploadSuccessMessage");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Save",L"MainMenu",L"CloudSaveTitle");
    FUN_1410f3960(lVar5,uVar8,uVar7,local_88,0,0,0);
    plVar9 = local_48;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar9 = local_48;
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
          plVar9 = local_48;
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_2 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 141129860 FUN_141129860 body=340 status=ok
// SIG undefined FUN_141129860(void)

void FUN_141129860(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
  lVar6 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (*(longlong *)(param_1 + 0x660) == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar4 + 0x848);
  if (lVar6 != 0) {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14112990a;
  }
  lVar6 = 0;
LAB_14112990a:
  if (*(longlong *)(*(longlong *)(param_1 + 0x660) + 0x508) != lVar6) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Cannot change someone else\'s room",L"GFxCrewQuartersMenu",
                       L"NotYourRoom");
    FUN_14145da30(lVar4,uVar8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FUN_14145ff60(lVar4,0);
    return;
  }
  FUN_14145e600(lVar4,*(undefined8 *)(param_1 + 0x668));
  return;
}



// FUNCTION 1411299c0 FUN_1411299c0 body=685 status=ok
// SIG undefined FUN_1411299c0(void)

void FUN_1411299c0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong **)(param_1 + 0x590) == (longlong *)0x0) {
    return;
  }
  local_res8 = (**(code **)(**(longlong **)(param_1 + 0x590) + 0xfa8))();
  if (local_res8 == 0) {
    return;
  }
  switch(*(char *)(param_1 + 0x5a0)) {
  default:
    if (1 < (byte)(*(char *)(param_1 + 0x5a0) - 0xcU)) {
      local_10 = &local_res8;
      local_18 = param_1;
      lVar5 = FUN_141101680(&local_18);
      if (lVar5 == 0) {
        FUN_142f001d0(local_res8);
      }
      else {
        FUN_142f005e0(local_res8,lVar5);
      }
    }
    goto LAB_141129c41;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\a':
  case '\b':
  case '\t':
  case '\v':
    break;
  }
  lVar5 = FUN_142f02280(local_res8,*(undefined8 *)(param_1 + 0x598));
  if (lVar5 != 0) {
    lVar3 = FUN_14134c430();
    iVar1 = *(int *)(lVar3 + 0x90);
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined8 *)(lVar5 + 0x680) = *(undefined8 *)(param_1 + 0x468);
      FUN_140f4e790(lVar5,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),0,0);
    }
  }
  if ((*(char *)(param_1 + 0x5a0) == '\x02') && (lVar5 != 0)) {
    lVar3 = FUN_141369570();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar3 = FUN_1422312c0(param_1), lVar3 != 0)) &&
       (lVar3 = UGameInstance::FindLocalPlayerFromControllerId
                          (lVar3,*(undefined4 *)(param_1 + 0x5b0)), lVar3 != 0)) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
LAB_141129b32:
        lVar3 = 0;
      }
      else {
        lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_141129b32;
      }
      FUN_14112d8a0(lVar5,lVar3);
    }
  }
  if ((*(char *)(param_1 + 0x5a0) != '\x03') || (lVar5 == 0)) goto LAB_141129c41;
  lVar3 = ACameraActor::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((!bVar2) || (lVar3 = FUN_1422312c0(param_1), lVar3 == 0)) ||
     (lVar3 = UGameInstance::FindLocalPlayerFromControllerId(lVar3,*(undefined4 *)(param_1 + 0x5b4))
     , lVar3 == 0)) goto LAB_141129c41;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  if (lVar3 == 0) {
LAB_141129bf6:
    lVar3 = 0;
  }
  else {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141129bf6;
  }
  FUN_141171020(lVar5,lVar3);
LAB_141129c41:
  *(undefined4 *)(param_1 + 0x5b0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined1 *)(param_1 + 0x5a0) = 0xc;
  return;
}



// FUNCTION 141129ca0 FUN_141129ca0 body=1384 status=ok
// SIG undefined FUN_141129ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141129ca0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_318 [32];
  undefined2 local_2f8;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  LARGE_INTEGER local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  undefined1 local_298 [80];
  longlong *local_248;
  longlong *local_240;
  undefined1 local_238 [16];
  longlong local_228 [4];
  longlong *local_208;
  int local_1f8;
  undefined1 *local_1e8 [2];
  longlong local_1d8 [4];
  longlong *local_1b8;
  int local_1a8;
  undefined1 *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  plVar10 = (longlong *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1a8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_1d8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_2d0 = 0;
  local_1e8[0] = &LAB_141107680;
  local_2c8 = 0x39;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
  local_2f8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2d0,0x39,"UGFxLoadGameMenu::OpenCreateCharacterMenu:::LoadDataTask");
  uVar5 = FUN_1420849a0(param_1,local_298,local_1e8);
  FUN_140cdf730(local_f8,&local_2d0,uVar5);
  if (local_1a8 != 0) {
    plVar7 = local_1d8;
    if (local_1b8 != (longlong *)0x0) {
      plVar7 = local_1b8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  QueryPerformanceCounter(&local_2b0);
  local_f8[0] = local_2b0;
  plVar6 = (longlong *)operator_new(0x18);
  plVar7 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar6);
    *(undefined1 *)(plVar6 + 2) = 0;
    plVar7 = plVar6;
  }
  plVar6 = (longlong *)operator_new(0x18);
  local_2e0 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar7;
    local_2e0 = plVar6;
  }
  local_2e8 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_2e8,plVar7,plVar7);
  *(undefined1 *)(local_2e8 + 2) = 1;
  local_2b8 = (longlong *)local_2e8[1];
  local_2a8 = *local_2e8;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
    UNLOCK();
  }
  local_2c0 = 0;
  local_2a0 = local_2b8;
  local_38 = local_2a8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_2b8);
  plVar7 = local_2b8;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2b8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
      }
    }
  }
  local_168 = (longlong *)0x0;
  local_158 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_188);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_f8;
  }
  local_198[0] = &LAB_140cee980;
  local_248 = local_2e8;
  local_240 = local_2e0;
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_238,local_198);
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_138);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_248;
    puVar4[3] = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_240 + 1) = (int)local_240[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_238);
  }
  local_148[0] = &LAB_140cee8d0;
  if (local_1f8 != 0) {
    plVar7 = local_228;
    if (local_208 != (longlong *)0x0) {
      plVar7 = local_208;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_240;
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_240 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_158 != 0) {
    plVar7 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar7 = local_168;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_2e0;
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2e0 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2e0)(local_2e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_142084370(param_1,local_148);
  if (local_108 != 0) {
    plVar7 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar7 = local_118;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140d1b3a0(local_f8);
  lVar9 = param_1 + 0x688;
  *(undefined1 *)(param_1 + 0x7c4) = 1;
  plVar7 = (longlong *)FWeakObjectPtr::Get(lVar9);
  if (plVar7 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x690)) &&
       (local_2d8 = 0, *(longlong *)(param_1 + 0x698) != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar9,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x690) = DAT_1464b56f4;
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(lVar9);
      if (plVar7 != (longlong *)0x0) goto LAB_14112a13f;
    }
LAB_14112a175:
    plVar7 = plVar10;
  }
  else {
LAB_14112a13f:
    lVar9 = FUN_142f2cf80();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14112a175;
  }
  lVar9 = FUN_142ebe540(param_1,plVar7);
  if (lVar9 != 0) {
    lVar8 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1410ed9d0(lVar9,*(undefined8 *)(param_1 + 0x7b0));
      goto LAB_14112a1d5;
    }
  }
  *(undefined1 *)(param_1 + 0x7c4) = 0;
LAB_14112a1d5:
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 14112a210 FUN_14112a210 body=518 status=ok
// SIG undefined FUN_14112a210(void)

void FUN_14112a210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  plVar6 = (longlong *)FUN_1411f5e70(local_28,param_1,param_2);
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    lVar7 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(lVar3 + 0x6dc,param_3);
      uVar10 = 0;
      plVar6 = (longlong *)(lVar3 + 0x6c8);
      *(undefined4 *)(lVar3 + 0x6d8) = 0;
      *(undefined4 *)(lVar3 + 0x6d0) = 0;
      if (*(int *)(lVar3 + 0x6d4) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (plVar6,0);
      }
      cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x6dc);
      if (cVar5 != '\0') {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        plVar8 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x6dc);
        (**(code **)(*plVar8 + 0x700))(plVar8,&local_38);
        uVar11 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
        if (local_38 + (int)local_30 < local_38) {
          uVar11 = uVar10;
        }
        puVar9 = local_38;
        if (uVar11 != 0) {
          do {
            local_48 = 0xffffffff;
            local_44 = 0;
            local_40 = 0;
            FWeakObjectPtr::operator=(&local_48,*puVar9);
            *(int *)(lVar3 + 0x6d8) = *(int *)(lVar3 + 0x6d8) + 1;
            iVar2 = *(int *)(lVar3 + 0x6d0);
            local_40 = 0;
            *(int *)(lVar3 + 0x6d0) = iVar2 + 1;
            if (*(int *)(lVar3 + 0x6d4) < iVar2 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
            }
            puVar9 = puVar9 + 1;
            uVar10 = uVar10 + 1;
            puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 0xc);
            *puVar1 = local_48;
            puVar1[1] = local_44;
            *(undefined1 *)(puVar1 + 2) = (undefined1)local_40;
            *(undefined1 *)((longlong)puVar1 + 9) = local_40._1_1_;
          } while (uVar10 != uVar11);
        }
        if (local_38 != (undefined8 *)0x0) {
          FMemory::Free(local_38);
        }
      }
      if (*(longlong *)(lVar3 + 0x6b0) == 0) {
        return;
      }
      if (*(int *)(lVar3 + 0x6d0) < 1) {
        return;
      }
      FUN_1411065f0(lVar3);
      return;
    }
  }
  if (param_1 != 0) {
    FUN_14145ff60(param_1,0);
  }
  return;
}



// FUNCTION 14112a420 FUN_14112a420 body=437 status=ok
// SIG undefined FUN_14112a420(void)

void FUN_14112a420(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1 + 0x798;
  FUN_141111950(param_1,lVar4);
  FUN_140f089c0(param_2);
  lVar3 = FWeakObjectPtr::Get(lVar4);
  lVar5 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x7a0)) && (*(longlong *)(param_1 + 0x7a8) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x7a0) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 != 0) goto LAB_14112a4c3;
    }
  }
  else {
LAB_14112a4c3:
    lVar4 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14112a4fc;
  }
  lVar3 = lVar5;
LAB_14112a4fc:
  lVar4 = FUN_142ebe540(param_1,lVar3);
  if (lVar4 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(longlong *)(param_1 + 0x988) != 0) {
        FUN_141131d10(*(longlong *)(param_1 + 0x988),CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
      }
      lVar3 = FUN_140f9aee0(param_1);
      if (((lVar3 != 0) &&
          (lVar3 = UGameInstance::FindLocalPlayerFromControllerId(lVar3,param_3), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
        lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar5 = 0;
        if (bVar2) {
          lVar5 = lVar3;
        }
      }
      FUN_140f0b3d0(lVar4,lVar5);
    }
  }
  return;
}



// FUNCTION 14112a5e0 FUN_14112a5e0 body=239 status=ok
// SIG undefined FUN_14112a5e0(void)

void FUN_14112a5e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x7c0;
  FUN_141111950(param_1,lVar3);
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x7c8)) && (*(longlong *)(param_1 + 2000) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x7c8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_14112a677;
    }
  }
  else {
LAB_14112a677:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14112a6b0;
  }
  lVar2 = 0;
LAB_14112a6b0:
  FUN_142ebe540(param_1,lVar2);
  return;
}



// FUNCTION 14112a6d0 FUN_14112a6d0 body=371 status=ok
// SIG undefined FUN_14112a6d0(void)

void FUN_14112a6d0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0x768))();
  if (((cVar2 == '\0') || (param_3 == 0)) || (param_4 == 0)) goto LAB_14112a823;
  lVar6 = param_1[0x109];
  if (lVar6 == 0) {
LAB_14112a764:
    lVar6 = 0;
  }
  else {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14112a764;
  }
  if (lVar6 == *(longlong *)(param_3 + 0x508)) {
    plVar4 = (longlong *)FUN_1411f5e70(local_28,param_1,param_2);
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      return;
    }
    lVar3 = AGVersusPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    FWeakObjectPtr::operator=(lVar6 + 0x940,param_3);
    FWeakObjectPtr::operator=(lVar6 + 0x948,param_4);
    *(undefined1 *)(lVar6 + 0x961) = 1;
    FUN_14110fe90(lVar6);
    return;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Cannot place objects in someone else\'s room",
                     L"GFxCrewQuartersPlaceObjectsMenu",L"CannotPlaceMessage");
  FUN_140cf8780(param_1,uVar5);
LAB_14112a823:
  FUN_14145ff60(param_1,0);
  return;
}



// FUNCTION 14112a850 FUN_14112a850 body=53 status=ok
// SIG undefined FUN_14112a850(void)

bool FUN_14112a850(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      return *(int *)(lVar1 + 0x108) == param_2;
    }
  }
  return false;
}



// FUNCTION 14112a890 FUN_14112a890 body=485 status=ok
// SIG undefined FUN_14112a890(void)

void FUN_14112a890(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  if (DAT_146b17150 == 0) {
    return;
  }
  lVar3 = FUN_142874ac0();
  if (lVar3 == 0) {
    return;
  }
  cVar2 = IsRHIDeviceIntel();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146875688) && (_Init_thread_header(&DAT_146875688), DAT_146875688 == -1))
  {
    uVar7 = FCommandLine::Get();
    DAT_146875685 = FParse::Param(uVar7,L"PretendAMD");
    _Init_thread_footer(&DAT_146875688);
  }
  if (DAT_146875685 != '\0') {
    cVar2 = '\x01';
  }
  plVar4 = (longlong *)FUN_142874ac0(DAT_146b17150);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_141424dd0();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if (*(char *)((longlong)plVar4 + 0x224) != '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14112a9a9;
  }
  lVar3 = 0;
LAB_14112a9a9:
  if ((((cVar2 != '\0') && (lVar3 != 0)) &&
      (plVar6 = (longlong *)UUGUserProfile::GetChosenCharacter(plVar4,local_res10),
      *plVar6 == DAT_146af4ac0)) &&
     (cVar2 = FWindowsPlatformMisc::VerifyWindowsVersion(10), cVar2 != '\0')) {
    FWeakObjectPtr::operator=(local_18,0);
    local_10 = 0;
    FUN_1410f3270(lVar3,local_18,0);
    UTimelineComponent::SetDirectionPropertyName(plVar4,DAT_146af4ac8);
  }
  *(undefined1 *)((longlong)plVar4 + 0x224) = 1;
  (**(code **)(*plVar4 + 0x2b0))(plVar4);
  return;
}



// FUNCTION 14112aa80 FUN_14112aa80 body=522 status=ok
// SIG undefined FUN_14112aa80(void)

void FUN_14112aa80(longlong param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 local_38 [32];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x6d8) <= param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar1 = *(longlong **)(lVar3 + 0xab8);
  for (plVar8 = plVar1; plVar8 != plVar1 + *(int *)(lVar3 + 0xac0); plVar8 = plVar8 + 1) {
    if ((*plVar8 == 0) ||
       (*(longlong *)(*plVar8 + 0x88) !=
        *(longlong *)((longlong)param_2 * 0x1c8 + *(longlong *)(param_1 + 0x6d0) + 0x18))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar7 = (int)((longlong)plVar8 - (longlong)plVar1 >> 3);
      goto LAB_14112ab5d;
    }
  }
  iVar7 = -1;
LAB_14112ab5d:
  if (iVar7 == 0) {
    uVar9 = 5;
  }
  else if (iVar7 == 1) {
    uVar9 = 3;
  }
  else if (iVar7 == 2) {
    uVar9 = 4;
  }
  else if (iVar7 == 3) {
    uVar9 = 2;
  }
  else {
    uVar9 = 0xffffffff;
  }
  lVar4 = FUN_140bb5fe0(lVar3);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x7c8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7cc) = 0;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    *(undefined4 *)(param_1 + 0x7e8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x7ec)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7e0,0);
    }
    if (*(undefined2 **)(param_1 + 0x7e0) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x7e0) = 0;
    }
    *(undefined4 *)(param_1 + 2000) = 0;
  }
  else {
    uVar5 = FSoftObjectPath::FSoftObjectPath(local_38,lVar4);
    FSoftObjectPath::operator=(param_1 + 0x7d8,uVar5);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x7c8),lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 2000) = DAT_1464b56f4;
  }
  lVar4 = *(longlong *)(param_1 + 0x7b0);
  if (lVar4 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14112ac69;
  }
  lVar4 = 0;
LAB_14112ac69:
  FUN_140be2320(lVar3,lVar4,uVar9);
  return;
}



// FUNCTION 14112ac90 FUN_14112ac90 body=21 status=ok
// SIG undefined FUN_14112ac90(void)

void FUN_14112ac90(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x468) = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x458,0);
  return;
}



// FUNCTION 14112acb0 FUN_14112acb0 body=532 status=ok
// SIG undefined FUN_14112acb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112acb0(longlong param_1,longlong param_2,char param_3,undefined1 param_4)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined1 local_d0 [8];
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  code *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140ebe6a0(param_2 + 0xb8,0);
  iVar2 = 0;
  lVar4 = 0x784;
  if (param_3 != '\0') {
    lVar4 = 0x77c;
  }
  local_d8 = FWeakObjectPtr::Get(param_1 + lVar4);
  if (local_d8 != 0) {
    FUN_1411f4910(param_2 + 0xb8,local_d8,0);
    iVar2 = *(int *)(param_1 + 0x7fc);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x6e8))) {
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_d0[0] = *(undefined1 *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x6e0));
      if (&local_c8 != (void **)(param_1 + 0x6f0)) {
        uVar1 = *(uint *)(param_1 + 0x6f8);
        _Src = *(void **)(param_1 + 0x6f0);
        local_c0 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_c8,uVar1,0);
          _guard_xfg_dispatch_icall_nop(local_c8,_Src,(longlong)(int)uVar1 * 0x18);
        }
      }
      local_78 = (longlong *)0x0;
      local_a8[0] = FRollingHash::GetWindowSize;
      local_68 = 0;
      FUN_1411fc8c0(param_2 + 0xb8,local_d0,1,local_a8);
      if (local_68 != 0) {
        plVar5 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar5 = local_78;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    iVar2 = FUN_142b47070(local_d8);
    iVar3 = ASwitchActor::GetSelectedOption(local_d8);
    iVar2 = iVar2 - iVar3;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    iVar2 = iVar2 + *(int *)(param_2 + 0xc0);
  }
  *(undefined1 *)(param_1 + 0xa8c) = 1;
  *(int *)(param_2 + 200) = iVar2;
  FUN_141053bb0(param_2 + 8,*(undefined4 *)(param_2 + 0xc0),param_4);
  *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 200) + -1;
  FUN_141062eb0(param_2 + 8,0);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x774);
  *(undefined1 *)(param_1 + 0xa8c) = 0;
  *(undefined1 *)(param_1 + 0x805) = 1;
  return;
}



// FUNCTION 14112aed0 FUN_14112aed0 body=621 status=ok
// SIG undefined FUN_14112aed0(void)

void FUN_14112aed0(longlong *param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  cVar3 = FUN_1410fc850(param_1 + 0x61);
  if (*param_3 != '\0') {
    (**(code **)(*param_1 + 0x330))(param_1,param_2);
  }
  if ((param_3[2] != '\0') || (*param_3 != '\0')) {
    FUN_142ed3540(param_1 + 0x2e,param_3[1],0);
    FUN_142ed3c20(param_1,0,1);
  }
  (**(code **)(param_1[0x2e] + 0x38))(param_1 + 0x2e,*(char *)(param_2 + 0x5a) == '\0');
  plVar1 = (longlong *)param_1[7];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_14138d230();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((cVar3 == '\0') && (*(char *)((longlong)plVar1 + 0xa8c) != '\0')) {
    FUN_140f3bde0(param_1);
  }
  if (*param_3 != '\0') {
    *(undefined1 *)((longlong)plVar1 + 0x805) = 1;
    *(undefined1 *)(plVar1 + 0x151) = 1;
  }
  if (param_3[1] != '\0') {
    FUN_141111a70(plVar1,param_1);
    if (param_3[2] != '\0') {
      lVar6 = *plVar1;
      local_28 = 0;
      local_20 = 0;
      puVar7 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
      (**(code **)(lVar6 + 0x4e8))(plVar1,*puVar7,&local_28);
    }
    LOCK();
    *(undefined4 *)(plVar1 + 0xb1) = 1;
    UNLOCK();
  }
  cVar3 = FWeakObjectPtr::IsValid(plVar1 + 0x101);
  if (cVar3 == '\0') {
LAB_14112b054:
    bVar2 = false;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(plVar1 + 0x101);
    lVar8 = (**(code **)(*param_1 + 0x340))(param_1);
    lVar8 = FWeakObjectPtr::Get(lVar8 + 0xdc);
    if (lVar6 != lVar8) goto LAB_14112b054;
    bVar2 = true;
  }
  if ((bVar2) && ((byte)((char)plVar1[0xef] - 3U) < 2)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  plVar9 = (longlong *)FUN_14110d730(plVar1,param_1);
  if (plVar9 == (longlong *)0x0) goto LAB_14112b11d;
  cVar4 = (**(code **)(*plVar9 + 0x480))(plVar9,param_1 + 0x74);
  lVar6 = FUN_140e97230(plVar1);
  lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x3e4);
  if ((lVar8 == 0) || (lVar6 == 0)) {
LAB_14112b0ff:
    uVar10 = 0;
  }
  else {
    uVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x3e4);
    cVar5 = FUN_140c39630(lVar6,uVar10);
    if (cVar5 != '\0') goto LAB_14112b0ff;
    cVar5 = FUN_14142f600(plVar9,param_1 + 0x7c);
    if ((cVar5 != '\0') || (cVar3 != '\0')) goto LAB_14112b0ff;
    uVar10 = 1;
  }
  FUN_142ed3c20(param_1,uVar10,1);
  FUN_140f4c9a0(param_1,cVar4 == '\0');
LAB_14112b11d:
  FUN_142ed2820(param_1,cVar3,1);
  return;
}



// FUNCTION 14112b140 FUN_14112b140 body=334 status=ok
// SIG undefined FUN_14112b140(void)

void FUN_14112b140(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if ((((*(longlong *)(param_1 + 0x6b0) != 0) && (iVar4 = FUN_142eb7a00(), -1 < iVar4)) &&
        (iVar4 < *(int *)(param_1 + 0x6d0))) &&
       (*(char *)(*(longlong *)(param_1 + 0x6c8) + 8 + (longlong)iVar4 * 0xc) == '\0')) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Apply room mood",L"GFxCrewQuartersMenu",L"ApplyRoomMood");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Back",L"GFxCrewQuartersMenu",L"BackOut");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14112b290 FUN_14112b290 body=334 status=ok
// SIG undefined FUN_14112b290(void)

void FUN_14112b290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [272];
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar4 = FUN_140ee69c0(param_1 + 0x7a0,local_118);
    lVar5 = FUN_14110cd00(param_1,uVar4);
    FUN_140e9c360(local_118);
    if (lVar5 != 0) {
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_148,L"Accept",L"GFxCrewQuartersPlaceObjectsMenu",L"SelectText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar4);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
    }
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,L"Close",L"GFxCrewQuartersPlaceObjectsMenu",L"BackOut");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar4);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14112b3e0 FUN_14112b3e0 body=311 status=ok
// SIG undefined FUN_14112b3e0(void)

void FUN_14112b3e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_1410e5c90();
  if (*(longlong *)(param_1 + 0x690) != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x698);
    lVar5 = FUN_142eb65a0(param_1);
    if ((lVar5 == lVar4) && (*(int *)(*(longlong *)(param_1 + 0x690) + 0x1c0) != 2)) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Select",L"GFxFrontendLandingPage",L"SelectText");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar6,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Back",L"GFxFrontendLandingPage",L"BackText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar6,0);
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



// FUNCTION 14112b520 FUN_14112b520 body=508 status=ok
// SIG undefined FUN_14112b520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14112b520(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar4 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x660);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x660) = 1;
  }
  else {
    uVar4 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    local_f0 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x6f8) != 0) {
      FUN_14170c210(&local_f0);
    }
    local_f4 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      FUN_14170c210(&local_f4);
    }
    local_f8 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      FUN_14170c210(&local_f8);
    }
    FWeakObjectPtr::operator=(&local_ec,param_1);
    uVar8 = local_f0;
    uVar5 = local_f4;
    uVar6 = local_f8;
    local_f8 = 0xffffffff;
    local_f4 = 0xffffffff;
    local_f0 = 0xffffffff;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14461b788;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_ec;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_e8;
      *(undefined4 *)(puVar2 + 3) = uVar6;
      uVar6 = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar5;
      uVar5 = 0xffffffff;
      *(undefined4 *)(puVar2 + 4) = uVar8;
      uVar8 = 0xffffffff;
    }
    local_88[0] = &LAB_141107350;
    uVar3 = FUN_1420849a0(param_1,local_d8,local_88);
    FUN_14208c4f0(param_1,uVar3);
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
    FUN_1416f8340(uVar8);
    FUN_1416f8340(uVar5);
    FUN_1416f8340(uVar6);
    FUN_1416f8340(local_f8);
    FUN_1416f8340(local_f4);
    uVar4 = FUN_1416f8340(local_f0);
  }
  return uVar4;
}



// FUNCTION 14112b720 FUN_14112b720 body=877 status=ok
// SIG undefined FUN_14112b720(void)

void FUN_14112b720(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x710) == 0) {
    if (*(longlong *)(param_1 + 0x788) != 0) {
      iVar5 = FUN_142eb7a00();
      if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x6d8))) &&
          (*(int *)((longlong)iVar5 * 0x1c8 + 0x38 + *(longlong *)(param_1 + 0x6d0)) == 3)) &&
         ((*(char *)(param_1 + 0x6e8) != '\0' && (*(char *)(param_1 + 0x6e9) == '\0')))) {
        cVar4 = FUN_1410cfb00(param_1);
        if (cVar4 == '\0') {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_70,L"Play",L"LoadGameMenu",L"PlayText");
          FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar6,0);
          plVar7 = local_68;
        }
        else {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_88,L"Select",L"LoadGameMenu",L"SelectText");
          FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar6,0);
          plVar7 = local_80;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x710) == 0) {
      if (*(longlong *)(param_1 + 0x788) != 0) {
        iVar5 = FUN_142eb7a00();
        if (((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x6d8))) &&
           (*(int *)((longlong)iVar5 * 0x1c8 + 0x38 + *(longlong *)(param_1 + 0x6d0)) != 1)) {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_58,L"Delete",L"LoadGameMenu",L"DeleteText");
          FUN_142eb01d0(param_1,&DAT_146875310,uVar6,0);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)local_50 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
        }
      }
      if (*(longlong *)(param_1 + 0x710) == 0) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,L"Back",L"LoadGameMenu",L"BackText");
        FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar6,0);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_38 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x798);
  if (plVar7 == (longlong *)0x0) goto LAB_14112b9e6;
  if (*(char *)(param_1 + 0x7c6) == '\0') {
    if (*(longlong *)(param_1 + 0x710) != 0) {
LAB_14112b9d4:
      plVar7 = *(longlong **)(param_1 + 0x798);
      goto LAB_14112b9db;
    }
    cVar4 = FUN_141111610(param_1);
    if ((cVar4 != '\0') || (plVar7 = *(longlong **)(param_1 + 0x798), plVar7 == (longlong *)0x0))
    goto LAB_14112b9d4;
    uVar6 = 1;
  }
  else {
LAB_14112b9db:
    uVar6 = 0;
  }
  (**(code **)(*plVar7 + 0x278))(plVar7,uVar6);
LAB_14112b9e6:
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FUN_142ecfa40();
  }
  cVar4 = FUN_141111610(param_1);
  if (cVar4 != '\0') {
    iVar5 = FUN_14110e720(param_1);
    if (0 < iVar5) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Pause (P1)",L"LoadGameMenu",L"PauseText");
      FUN_142eb01d0(param_1,&DAT_146875430,uVar6,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14112ba90 FUN_14112ba90 body=278 status=ok
// SIG undefined FUN_14112ba90(void)

void FUN_14112ba90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Close",L"GFxNewDLCMenu",L"BackOutHint");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    uVar8 = 0;
    if (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x2b0))();
      if (lVar6 != 0) {
        lVar7 = UMobBaseAnim::GetPrivateStaticClass();
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
          uVar8 = *(undefined1 *)(lVar6 + 0x310);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x698) + 0x278))(*(longlong **)(param_1 + 0x698),uVar8);
  }
  return;
}



// FUNCTION 14112bbb0 FUN_14112bbb0 body=705 status=ok
// SIG undefined FUN_14112bbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112bbb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong lStack_f0;
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,&DAT_1446a7ae0,L"GFxNewsMenu",L"GoToStore");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar6);
    local_58[0] = 0;
    local_30 = '\0';
    local_50 = 0;
    local_e8 = local_58;
    local_f8 = *puVar7;
    puStack_e0 = local_28;
    lStack_f0 = puVar7[1];
    if (lStack_f0 != 0) {
      LOCK();
      *(int *)(lStack_f0 + 8) = *(int *)(lStack_f0 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_e8);
    uVar6 = FText::Format(local_b0,&local_f8,uVar6);
    FText::FText(local_c8,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,local_c8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Close",L"GFxNewsMenu",L"CloseHint");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar6);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14112be80 FUN_14112be80 body=1002 status=ok
// SIG undefined FUN_14112be80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112be80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  FUN_142ecdac0();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 != 0) {
    FUN_14141f270();
  }
  bVar4 = true;
  if (*(longlong *)(param_1 + 0x988) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x988) + 0x6c8);
    if ((lVar6 == 0) || (cVar5 = FUN_141087490(lVar6 + 0x170), cVar5 == '\0')) {
      bVar4 = false;
    }
    if (bVar4) goto LAB_14112c235;
  }
  lVar6 = *(longlong *)(param_1 + 0x988);
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x6c8) != 0)) &&
     (*(char *)(*(longlong *)(lVar6 + 0x6c8) + 0x3cd) != '\0')) goto LAB_14112c235;
  if (lVar6 == 0) {
LAB_14112bf95:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1f8,L"Select",L"MainMenu",L"SelectText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar7,0);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
  }
  else {
    if ((*(longlong *)(lVar6 + 0x6f8) == 0) ||
       (cVar5 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 0x6f8) + 0x170) + 0x48))(),
       cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) ||
       (((*(char *)(*(longlong *)(param_1 + 0x988) + 0x70b) == '\x01' &&
         (*(longlong *)(*(longlong *)(param_1 + 0x988) + 0x6f8) != 0)) &&
        (cVar5 = FUN_1411d56a0(), cVar5 != '\0')))) goto LAB_14112bf95;
  }
  lVar6 = FUN_140f9aee0(param_1);
  if (lVar6 != 0) {
    local_168 = 0;
    local_158 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_188);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = lVar6;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_208 = 0;
    local_198[0] = FUN_1411074f0;
    local_200 = 0x3e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    local_218 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_208,0x3e,"UGFxOakMainMenu::PopulateHintBar::CheckSplitscreenSupportTask");
    FUN_1410b2c00(local_f8,&local_208,local_198);
    uVar7 = FUN_1410ca7e0(local_f8,local_148);
    FUN_142032330(uVar7);
    cVar5 = FUN_1410cab50(local_f8);
    if (cVar5 != '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1e0,L"Add Splitscreen",L"MultiplayerMenu",L"SplitscreenText");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar7,0);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1d8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar2 = (int *)((longlong)local_1d8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
    }
    FUN_140ce1dc0(local_f8);
  }
  if ((*(char *)(param_1 + 0xa38) != '\0') &&
     (*(int *)(param_1 + 0x89c) != 3 && *(int *)(param_1 + 0x89c) != 4)) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c8,L"Play Emote",L"MainMenu",L"PlayEmoteText");
    FUN_142eb01d0(param_1,&DAT_1468755f8,uVar7,0);
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)local_1c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1b0,L"Back",L"MainMenu",L"BackText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar2 = (int *)((longlong)local_1a8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
LAB_14112c235:
  if (*(longlong *)(param_1 + 0x988) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x988) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14112c270 FUN_14112c270 body=1962 status=ok
// SIG undefined FUN_14112c270(void)

void FUN_14112c270(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  byte bVar16;
  bool bVar17;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  uVar8 = FUN_1404b03b0();
  FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875298,uVar8,1);
  uVar8 = FUN_1404b03b0();
  FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875290,uVar8,1);
  if ((byte)(*(char *)(param_1 + 0x778) - 1U) < 2) {
    iVar5 = *(int *)(param_1 + 0x7fc);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x6e8) <= iVar5)) {
      lVar9 = FUN_1404b03b0();
    }
    else {
      lVar9 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x6e0);
    }
    FText::FText(local_130,lVar9);
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875570,local_130,1);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
  }
  if ((byte)(*(char *)(param_1 + 0x778) - 1U) < 2) {
    cVar4 = FUN_141107bc0(param_1);
    if (cVar4 == '\0') {
LAB_14112c3b3:
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x784);
      if (cVar4 != '\0') {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x784);
        cVar4 = FUN_143003580(uVar8);
        if ((cVar4 == '\0') && (*(char *)(param_1 + 0x778) == '\x01')) {
          bVar17 = false;
          cVar4 = '\x01';
          goto LAB_14112c3f4;
        }
      }
    }
    else {
      cVar4 = *(char *)(param_1 + 0x778);
      bVar17 = cVar4 == '\x02';
      if (!bVar17) goto LAB_14112c3b3;
LAB_14112c3f4:
      puVar11 = local_d0;
      pwVar15 = L"DepositHint";
      pwVar14 = L"GFxPlayerStorageMenu";
      if (cVar4 != '\x02') {
        pwVar15 = L"RetrieveHint";
      }
      pwVar12 = L"Deposit";
      if (cVar4 != '\x02') {
        pwVar14 = L"GFxPlayerStorageMenu";
        pwVar12 = L"Retrieve";
        puVar11 = local_e8;
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (puVar11,pwVar12,pwVar14,pwVar15);
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar8);
      if (((!bVar17 + 1U & 2) != 0) && (local_e0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      if ((bVar17) && (local_c8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
    }
  }
  cVar4 = FUN_141107a90(param_1);
  if (cVar4 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Compare",L"GFxPlayerStorageMenu",L"CompareText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146875268,uVar8);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  if ((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Switch Panel",L"GFxPlayerStorageMenu",L"SwitchPanelText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar8);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  cVar4 = FUN_141107d50(param_1);
  if (cVar4 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Inspect",L"GFxPlayerStorageMenu",L"InspectText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146875578,uVar8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  cVar4 = FUN_141107f60(param_1);
  if (cVar4 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Mark as Junk/Favorite",L"GFxPlayerStorageMenu",
                       L"ToggleTrashFavorite");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146875568,uVar8);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  cVar4 = *(char *)(param_1 + 0x778);
  lVar9 = 0x9b8;
  if ((byte)(cVar4 - 1U) < 2) {
    lVar10 = 0x818;
LAB_14112c6ee:
    if (param_1 + lVar10 == 0) goto LAB_14112c70f;
    iVar5 = FUN_14103af20(param_1 + lVar10 + 8);
    cVar4 = *(char *)(param_1 + 0x778);
    bVar17 = 0 < iVar5;
  }
  else {
    if (cVar4 == '\x04') {
      lVar10 = 0x9b8;
      goto LAB_14112c6ee;
    }
    if (cVar4 == '\x03') {
      lVar10 = 0x8e8;
      goto LAB_14112c6ee;
    }
LAB_14112c70f:
    bVar17 = false;
  }
  if ((byte)(cVar4 - 1U) < 2) {
    lVar9 = 0x818;
LAB_14112c72f:
    lVar9 = param_1 + lVar9;
    if (lVar9 == 0) goto LAB_14112c76e;
    iVar5 = *(int *)(lVar9 + 0x5c);
    iVar6 = *(int *)(lVar9 + 0x90);
    if (0 < iVar5) {
      iVar6 = (iVar6 - iVar5) / iVar5;
    }
    iVar5 = FUN_14103af20(lVar9 + 8);
    iVar7 = FUN_1410393f0(lVar9 + 8);
    bVar3 = iVar6 + iVar5 < iVar7;
  }
  else {
    if (cVar4 == '\x04') goto LAB_14112c72f;
    if (cVar4 == '\x03') {
      lVar9 = 0x8e8;
      goto LAB_14112c72f;
    }
LAB_14112c76e:
    bVar3 = false;
  }
  cVar4 = FUN_142eb62a0(param_1);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_148,L"Jump Page",L"GFxPlayerStorageMenu",L"JumpPageHintText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_100,L"Jump Up",L"GFxPlayerStorageMenu",L"JumpPagePrevHintText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_118,L"Jump Down",L"GFxPlayerStorageMenu",L"JumpPageNextHintText");
  if (cVar4 == '\x01') {
    if (!bVar17) {
      if (!bVar3) goto LAB_14112c84c;
      puVar11 = local_148;
      goto LAB_14112c839;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x5b0);
    puVar11 = local_148;
    uVar13 = DAT_1468752a8;
    if (bVar3) {
      uVar13 = DAT_146875338;
    }
  }
  else {
    if (bVar17) {
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_1468752a8,local_100);
    }
    if (!bVar3) goto LAB_14112c84c;
    puVar11 = local_118;
LAB_14112c839:
    uVar8 = *(undefined8 *)(param_1 + 0x5b0);
    uVar13 = DAT_1468752a0;
  }
  FUN_142ee2030(uVar8,uVar13,puVar11);
LAB_14112c84c:
  pwVar12 = L"BackText";
  pwVar15 = L"GFxPlayerStorageMenu";
  pwVar14 = L"Back";
  bVar17 = 1 < (byte)(*(char *)(param_1 + 0x778) - 3U);
  bVar16 = bVar17 * '\x04' + 4;
  puVar11 = local_40;
  if (bVar17) {
    pwVar12 = L"CloseText";
    pwVar15 = L"GFxPlayerStorageMenu";
    pwVar14 = L"Close";
    puVar11 = local_58;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (puVar11,pwVar14,pwVar15,pwVar12);
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar8);
  if (((bVar16 & 8) != 0) && (bVar16 = bVar16 & 0xf7, local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (((bVar16 & 4) != 0) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  return;
}



// FUNCTION 14112ca20 FUN_14112ca20 body=199 status=ok
// SIG undefined FUN_14112ca20(void)

void FUN_14112ca20(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_142ee25d0(*(longlong *)(param_1 + 0x5b0),DAT_146b3e2a0,param_1 + 0x6e0,1);
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,param_1 + 0x6f8);
    if ((((*(longlong *)(param_1 + 0x7c8) != 0) && (iVar2 = FUN_142eb7a00(), 0 < iVar2)) &&
        (lVar4 = FUN_140e971d0(param_1), lVar4 != 0)) && (lVar4 = FUN_140cfbfb0(lVar4), lVar4 != 0))
    {
      uVar3 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x7c8));
      cVar1 = FUN_140c39b30(uVar3,lVar4);
      if (cVar1 != '\0') {
        FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875268,param_1 + 0x710,1);
      }
    }
  }
  return;
}



// FUNCTION 14112caf0 FUN_14112caf0 body=316 status=ok
// SIG undefined FUN_14112caf0(void)

void FUN_14112caf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x6c8);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1b0) != 0)) &&
       (iVar4 = FUN_140e4fee0(), iVar4 != *(int *)(lVar3 + 0x1b8))) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,&DAT_1446b62d0,L"GFxSDUVendorMenu",L"PurchaseHintText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar5);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Close",L"GFxSDUVendorMenu",L"BackOutText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14112cc30 FUN_14112cc30 body=379 status=ok
// SIG undefined FUN_14112cc30(void)

ulonglong FUN_14112cc30(longlong param_1,char param_2,undefined1 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  bVar2 = *(byte *)(param_1 + 0x778);
  if (bVar2 == 1) {
    FUN_141053bb0(param_1 + 0x8f0,0,0);
    FUN_140ebe6a0(param_1 + 0x9a0,0);
    FUN_141053bb0(param_1 + 0x9c0,0,0);
    FUN_140ebe6a0(param_1 + 0xa70,0);
    uVar6 = 1;
  }
  else {
    if (bVar2 != 2) {
      if (1 < (byte)(bVar2 - 3)) {
        return (ulonglong)(bVar2 - 3);
      }
      if ((param_2 == '\0') || (bVar2 == 3)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((param_2 == '\0') || (bVar2 == 4)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      FUN_141053bb0(param_1 + 0x820,0,0);
      uVar5 = FUN_140ebe6a0(param_1 + 0x8d0,0);
      if (bVar3) {
        uVar5 = FUN_14112acb0(param_1,param_1 + 0x8e8,1,param_3);
      }
      if (!bVar4) {
        return uVar5;
      }
      uVar5 = FUN_14112acb0(param_1,param_1 + 0x9b8,0,param_3);
      return uVar5;
    }
    FUN_141053bb0(param_1 + 0x8f0,0,0);
    FUN_140ebe6a0(param_1 + 0x9a0,0);
    FUN_141053bb0(param_1 + 0x9c0,0,0);
    FUN_140ebe6a0(param_1 + 0xa70,0);
    uVar6 = 0;
  }
  FUN_14112acb0(param_1,param_1 + 0x818,uVar6,param_3);
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x588);
  *(uint *)(param_1 + 0x588) = 1;
  UNLOCK();
  return (ulonglong)uVar1;
}



// FUNCTION 14112cdb0 FUN_14112cdb0 body=716 status=ok
// SIG undefined FUN_14112cdb0(void)

ulonglong FUN_14112cdb0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  longlong *local_68;
  int local_60;
  longlong local_58 [10];
  
  FUN_141138520();
  if (*(char *)(param_1 + 0x6e8) == '\0') {
    if ((*(longlong *)(param_1 + 0x778) != 0) && (*(char *)(param_1 + 0x6e9) == '\0')) {
      *(undefined1 *)(param_1 + 0x6e9) = 1;
      local_58[6] = 0;
      local_58[7] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 6,0);
      FGenericPlatformString::Memcpy(local_58[6],L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x778),local_58 + 6);
      if (local_58[6] != 0) {
        FMemory::Free();
      }
    }
    local_58[8] = 0;
    local_58[9] = 0;
    uVar4 = FUN_142ed36d0(param_1,local_58 + 8,0);
  }
  else if ((*(longlong *)(param_1 + 0x778) == 0) || (*(char *)(param_1 + 0x6e9) == '\0')) {
    FUN_14112d5a0(param_1);
    if (*(longlong *)(param_1 + 0x780) != 0) {
      local_58[2] = 0;
      local_58[3] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
      FGenericPlatformString::Memcpy(local_58[2],L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x780),local_58 + 2);
      if (local_58[2] != 0) {
        FMemory::Free();
      }
    }
    if (*(int *)(param_1 + 0x6d8) < 1) {
      if (*(char *)(param_1 + 0x7c7) == '\0') {
        FUN_141134d20(param_1);
      }
    }
    else if (*(longlong *)(param_1 + 0x790) != 0) {
      local_58[4] = 0;
      local_58[5] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 4,0);
      FGenericPlatformString::Memcpy(local_58[4],L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x790),local_58 + 4);
      if (local_58[4] != 0) {
        FMemory::Free();
        LOCK();
        uVar1 = *(uint *)(param_1 + 0x588);
        *(uint *)(param_1 + 0x588) = 1;
        UNLOCK();
        return (ulonglong)uVar1;
      }
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar4 = (ulonglong)uVar1;
    UNLOCK();
  }
  else {
    local_58[0] = 0;
    local_58[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x778),local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    local_res8 = 0;
    local_68 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    local_60 = 2;
    local_68 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      plVar2[1] = param_1;
      *plVar2 = (longlong)&PTR_GetPoolName_1446b9f60;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1446b9fa8;
    }
    uVar4 = FUN_142ee1c00(*(undefined8 *)(param_1 + 0x778),"hideAnimationCompleted",&local_res8,
                          &local_68);
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) {
        return uVar4;
      }
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
    }
    uVar4 = 0;
    if (local_68 != (longlong *)0x0) {
      uVar4 = FMemory::Free(local_68);
    }
  }
  return uVar4;
}



// FUNCTION 14112d080 FUN_14112d080 body=1305 status=ok
// SIG undefined FUN_14112d080(void)

void FUN_14112d080(longlong *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  wchar_t *pwVar13;
  uint local_res8;
  longlong local_res10;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  wchar_t *pwVar12;
  
  if (param_1[0xf9] == 0) {
    return;
  }
  FUN_142ecffe0();
  pwVar8 = (wchar_t *)0x0;
  local_res8 = 0;
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  pwVar13 = pwVar8;
  if (((lVar4 != 0) &&
      (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), pwVar13 = (wchar_t *)0x0, lVar4 != 0)) &&
     (param_1[0xf9] != 0)) {
    iVar3 = FUN_140cb6340(lVar4);
    local_res8 = iVar3 - 1;
    pwVar13 = (wchar_t *)(ulonglong)local_res8;
  }
  iVar3 = (int)pwVar13;
  local_res10 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (local_res10 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14112d151;
  }
  local_res10 = 0;
LAB_14112d151:
  if (0 < (int)param_1[0xd2]) {
    local_88 = 0;
    pwVar12 = pwVar8;
    do {
      lVar9 = param_1[0xd1] + local_88;
      local_70 = 0;
      local_68 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
      FGenericPlatformString::Memcpy(local_70,L"BTN_GameMode",0x1a);
      lVar4 = param_1[0xf9];
      uVar5 = UMobBaseAnim::GetPrivateStaticClass();
      pwVar6 = (wchar_t *)FUN_142ebcee0(lVar4,&local_70,uVar5,0);
      if (pwVar6 == (wchar_t *)0x0) {
LAB_14112d218:
        pwVar6 = pwVar8;
      }
      else {
        lVar4 = UMobBaseAnim::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
             ) != lVar4 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_14112d218;
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_142ed2600(pwVar6,1);
        FText::operator=(pwVar6 + 0x188,lVar9);
        FText::operator=(pwVar6 + 0x194,lVar9 + 0x18);
        FString::operator=(pwVar6 + 0x1a0,lVar9 + 0x30);
        bVar10 = true;
        *(undefined4 *)(pwVar6 + 0x1a8) = *(undefined4 *)(lVar9 + 0x40);
        uVar5 = 0;
        *(undefined8 *)(pwVar6 + 0x1ac) = *(undefined8 *)(lVar9 + 0x48);
        if (((local_res10 != 0) && (lVar4 = FUN_140cfbfb0(local_res10), lVar4 != 0)) &&
           (cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar4), cVar2 == '\0')) {
          iVar3 = *(int *)(pwVar6 + 0x1a8);
          bVar10 = *(int *)(lVar4 + 0x144) < iVar3;
          if ((*(int *)(lVar4 + 0x144) < iVar3) || (iVar3 <= *(int *)(local_res10 + 0x1958))) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
        FUN_142ed3c20(pwVar6,bVar10,1);
        local_60 = 0;
        local_58 = (wchar_t *)0x6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        FGenericPlatformString::Memcpy(local_60,L"label",0xc);
        FUN_142f100e0(pwVar6,&local_60,pwVar6 + 0x188);
        if (local_60 != 0) {
          FMemory::Free();
        }
        FUN_142ed3eb0(pwVar6,uVar5);
        if (*(longlong *)(pwVar6 + 0x184) != 0) {
          FUN_142088cf0(*(longlong *)(pwVar6 + 0x184),pwVar6 + 0x1a0);
        }
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlaythroughModeCellFocused",L"::");
        pwVar13 = pwVar8;
        while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar13 = pwVar1;
        }
        FName::FName(&local_80,pwVar13 + 2,1);
        lVar4 = local_80;
        FWeakObjectPtr::operator=(pwVar6 + 0xe8,param_1);
        *(longlong *)(pwVar6 + 0xec) = lVar4;
        if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(pwVar6 + 0xe8), lVar4 != 0)) {
          UObject::FindFunction(lVar4,*(undefined8 *)(pwVar6 + 0xec));
        }
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlaythroughModeCellClicked",L"::");
        pwVar13 = pwVar8;
        while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar13 = pwVar1;
        }
        FName::FName(&local_78,pwVar13 + 2,1);
        lVar4 = local_78;
        FWeakObjectPtr::operator=(pwVar6 + 0xd8,param_1);
        *(longlong *)(pwVar6 + 0xdc) = lVar4;
        if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(pwVar6 + 0xd8), lVar4 != 0)) {
          UObject::FindFunction(lVar4,*(undefined8 *)(pwVar6 + 0xdc));
        }
        pwVar13 = (wchar_t *)(ulonglong)local_res8;
        FUN_142ed2820(pwVar6,(uint)pwVar12 == local_res8,1);
      }
      iVar3 = (int)pwVar13;
      uVar11 = (uint)pwVar12 + 1;
      pwVar12 = (wchar_t *)(ulonglong)uVar11;
      local_88 = local_88 + 0x50;
    } while ((int)uVar11 < (int)param_1[0xd2]);
  }
  *(int *)(param_1 + 0xfb) = iVar3 + 1;
  (**(code **)(*(longlong *)param_1[0xf9] + 0x2b8))((longlong *)param_1[0xf9],iVar3,0,0);
  lVar4 = param_1[0xf9];
  local_60 = lVar4;
  if (lVar4 != 0) {
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
  }
  local_58 = pwVar8;
  FUN_142ed36d0(param_1,&local_60,0);
  lVar4 = FUN_142eb6a30(param_1[0xf9],iVar3);
  if (lVar4 != 0) {
    lVar9 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      FUN_142ed2820(lVar4,1);
    }
  }
  return;
}



// FUNCTION 14112d5a0 FUN_14112d5a0 body=761 status=ok
// SIG undefined FUN_14112d5a0(void)

void FUN_14112d5a0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_48;
  longlong local_40;
  
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_142ecffe0();
    lVar11 = *(longlong *)(param_1 + 0x6d0);
    lVar7 = 0;
    lVar10 = (longlong)*(int *)(param_1 + 0x6d8) * 0x1c8 + lVar11;
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x1c8) {
      local_48 = 0;
      local_40 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"LoadGameListItem",0x22);
      uVar6 = *(undefined8 *)(param_1 + 0x788);
      uVar2 = UXGameInstance::GetPrivateStaticClass();
      lVar3 = FUN_142ebcee0(uVar6,&local_48,uVar2,0);
      lVar9 = lVar7;
      if (lVar3 != 0) {
        lVar4 = UXGameInstance::GetPrivateStaticClass();
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
          FUN_142ed2600(lVar3);
          lVar9 = lVar3;
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x308) = 0;
        FUN_141110fc0(param_1,lVar9,lVar11);
        puVar5 = (undefined8 *)FName::FName(local_res18,L"OnSaveGameItemClicked",1);
        FWeakObjectPtr::operator=(lVar9 + 0x1b0,param_1);
        *(undefined8 *)(lVar9 + 0x1b8) = *puVar5;
        puVar5 = (undefined8 *)FName::FName(local_res20,L"OnSaveGameItemFocused",1);
        FWeakObjectPtr::operator=(lVar9 + 0x1d0,param_1);
        *(undefined8 *)(lVar9 + 0x1d8) = *puVar5;
        if (*(int *)(param_1 + 0x508) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 0x500);
        }
        FName::FName(&local_res8,puVar8,1);
        *(undefined8 *)(lVar9 + 0x1a8) = local_res8;
        if (*(int *)(param_1 + 0x4f8) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 0x4f0);
        }
        FName::FName(&local_res10,puVar8,1);
        *(undefined8 *)(lVar9 + 0x1a0) = local_res10;
      }
    }
    if (*(int *)(param_1 + 0x6d8) < 1) {
      lVar11 = *(longlong *)(param_1 + 0x790);
      if ((lVar11 != 0) && (*(char *)(lVar11 + 0x198) != '\0')) {
        local_48 = 0;
        local_40 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        FGenericPlatformString::Memcpy(local_48,L"hide",10);
        FUN_142088910(lVar11,&local_48);
        if (local_48 != 0) {
          FMemory::Free();
        }
        *(undefined1 *)(lVar11 + 0x198) = 0;
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x788) + 0x2b8))(*(longlong **)(param_1 + 0x788),0,0,0)
      ;
    }
    lVar11 = *(longlong *)(param_1 + 0x788);
    local_48 = lVar11;
    if (lVar11 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar6);
    }
    local_40 = lVar7;
    FUN_142ed36d0(param_1,&local_48,0);
  }
  return;
}



// FUNCTION 14112d8a0 FUN_14112d8a0 body=311 status=ok
// SIG undefined FUN_14112d8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112d8a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  if (param_2 == 0) {
    param_2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  }
  *(longlong *)(param_1 + 0x7b0) = param_2;
  if (param_2 != 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_141107300;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar3 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar3 = local_88;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14112d9e0 FUN_14112d9e0 body=1373 status=ok
// SIG undefined FUN_14112d9e0(void)

void FUN_14112d9e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong local_res8;
  longlong local_res10;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  code *local_128 [2];
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar9 != 0) {
    FUN_14145f370();
  }
  local_res10 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (local_res10 == 0) {
LAB_14112da67:
    local_res10 = 0;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14112da67;
  }
  uVar13 = 0;
  uVar10 = FUN_1404b03b0();
  FText::FText(local_190,uVar10);
  uVar10 = FUN_1404b03b0();
  FText::FText(local_178,uVar10);
  uVar10 = 0;
  uVar7 = 0;
  if (local_res10 == 0) goto LAB_14112de78;
  local_res8 = FWeakObjectPtr::Get(param_1 + 0x948);
  if (local_res8 == 0) {
LAB_14112db00:
    local_res8 = 0;
  }
  else {
    lVar9 = FUN_1413b9340();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14112db00;
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x948);
  if (lVar9 == 0) {
LAB_14112db58:
    lVar9 = 0;
  }
  else {
    lVar11 = FUN_1412fc200();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14112db58;
  }
  uVar8 = 0;
  if (local_res8 == 0) {
    if (((lVar9 != 0) &&
        (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x940), uVar7 = 0, cVar6 != '\0')) &&
       (lVar11 = FWeakObjectPtr::Get(param_1 + 0x940), *(longlong *)(lVar11 + 0x4f0) != 0)) {
      local_1b8 = 0;
      local_1b0 = 0;
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x940);
      FUN_140a63c70(lVar9,&local_1b8,uVar10);
      uVar7 = (undefined4)local_1b0;
      uStack_1a0 = &local_1b8;
      local_1a8 = param_1;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_148,L"DECORATIONS",L"GFxCrewQuartersPlaceObjectsMenu",
                          L"DecorationsText");
      FText::operator=(local_190,uVar10);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      uVar5 = local_1b0;
      local_58 = 0;
      uVar10 = 0;
      local_48 = 0;
      puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar12 + 1) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)puVar12 + 0xc) = local_1a8._4_4_;
        *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_1a0._4_4_;
      }
      local_88[0] = &LAB_1411073e0;
      FUN_140f03c80(param_1 + 0x7a0,local_88,0,uVar5 & 0xffffffff,CONCAT44(uVar14,0xffffffff));
      FUN_140f0a4b0(param_1 + 0x7a0);
      uVar13 = uVar7;
      if (local_1b8 != 0) {
        FMemory::Free();
      }
    }
    goto LAB_14112de78;
  }
  uStack_1a0 = &local_res10;
  local_198 = &local_res8;
  local_1a8 = param_1;
  lVar9 = (**(code **)(*(longlong *)(local_res10 + 0xd80) + 0x18))();
  local_f8 = 0;
  uVar7 = 0;
  local_e8 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_118);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_a8 = 0;
  local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_98 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = (undefined4)local_1a8;
    *(undefined4 *)((longlong)puVar12 + 0xc) = local_1a8._4_4_;
    *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_1a0._4_4_;
    *puVar12 = &PTR_FUN_143f4d0b0;
    puVar12[3] = local_198;
  }
  local_d8[0] = &LAB_1411076b0;
  FUN_140f04d80(param_1 + 0x7a0,lVar9,0,local_d8,local_128);
  if (lVar9 != 0) {
    uVar7 = ASwitchActor::GetSelectedOption(lVar9);
    uVar8 = FUN_142b47070(lVar9);
  }
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_160,L"WEAPONS",L"GFxCrewQuartersPlaceObjectsMenu",L"WeaponsText");
  FText::operator=(local_190,uVar10);
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  if ((*(longlong *)(local_res8 + 0x750) == 0) ||
     (cVar6 = FText::IsEmpty(*(longlong *)(local_res8 + 0x750) + 0x40), cVar6 != '\0')) {
    if ((*(longlong *)(local_res8 + 0x750) != 0) &&
       (lVar9 = *(longlong *)(*(longlong *)(local_res8 + 0x750) + 0x70), lVar9 != 0))
    goto LAB_14112dd00;
  }
  else {
    lVar9 = *(longlong *)(local_res8 + 0x750);
LAB_14112dd00:
    FText::operator=(local_190,lVar9 + 0x40);
  }
  uVar10 = 1;
  uVar13 = uVar8;
LAB_14112de78:
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FUN_141134070(*(longlong *)(param_1 + 0x938),uVar10,uVar7,uVar13,local_190,local_178);
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar2 = (int *)((longlong)local_188 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  return;
}



// FUNCTION 14112df40 FUN_14112df40 body=119 status=ok
// SIG undefined FUN_14112df40(void)

void FUN_14112df40(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  FUN_140f47510();
  if ((*(longlong *)(param_1 + 0x5d8) != 0) && (*(longlong *)(param_1 + 0x5e0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5e0) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      cVar2 = FText::IsEmpty(param_1 + 0x6c8);
      FUN_142f10d20(param_1 + 0x5d0,cVar2 == '\0');
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x5d0,param_1 + 0x6c8,1,0);
    }
  }
  return;
}



// FUNCTION 14112dfc0 FUN_14112dfc0 body=594 status=ok
// SIG undefined FUN_14112dfc0(void)

void FUN_14112dfc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28;
  
  plVar3 = (longlong *)(param_1 + 0x6e0);
  iVar8 = *(int *)(param_1 + 0x6e8);
  iVar5 = *(int *)(param_1 + 0x6ec);
  if (iVar5 < 0) {
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*plVar3 + 8);
      do {
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar10 = plVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = *(int *)(param_1 + 0x6ec);
    }
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    if (iVar5 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar3,0);
    }
  }
  else {
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*plVar3 + 8);
      do {
        plVar4 = (longlong *)*plVar10;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar10 = plVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x6e8) = 0;
  }
  lVar9 = *(longlong *)(param_1 + 0x6d0);
  lVar11 = (longlong)*(int *)(param_1 + 0x6d8) * 0x20 + lVar9;
  for (; lVar9 != lVar11; lVar9 = lVar9 + 0x20) {
    iVar8 = *(int *)(param_1 + 0x6e8);
    *(int *)(param_1 + 0x6e8) = iVar8 + 1;
    if (*(int *)(param_1 + 0x6ec) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar3,iVar8);
    }
    lVar7 = (longlong)iVar8 * 0x20 + *plVar3;
    FText::FText(lVar7,lVar9);
    *(undefined1 *)(lVar7 + 0x18) = *(undefined1 *)(lVar9 + 0x18);
  }
  uVar6 = FUN_1404b03b0();
  FText::FText(local_40,uVar6);
  local_28 = 0;
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_58,L"By Rarity",L"GFxPlayerStorageMenu",L"FilterByRarityText");
  FText::operator=(local_40,uVar6);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x6e8);
  local_28 = 4;
  *(int *)(param_1 + 0x6e8) = iVar8 + 1;
  if (*(int *)(param_1 + 0x6ec) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar8);
  }
  lVar9 = (longlong)iVar8 * 0x20 + *plVar3;
  FText::FText(lVar9,local_40);
  *(undefined1 *)(lVar9 + 0x18) = local_28;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 14112e220 FUN_14112e220 body=343 status=ok
// SIG undefined FUN_14112e220(void)

void FUN_14112e220(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x77c);
  if (cVar1 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x77c);
    uVar2 = ASwitchActor::GetSelectedOption(uVar6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x77c);
    uVar3 = FUN_142b47070(uVar6);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x784);
  if (cVar1 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x784);
    uVar4 = ASwitchActor::GetSelectedOption(uVar6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x784);
    uVar5 = FUN_142b47070(uVar6);
  }
  cVar1 = *(char *)(param_1 + 0x778);
  uVar8 = 0;
  uVar6 = 0;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar8 = 0;
      uVar6 = 1;
      uVar7 = uVar4;
      uVar10 = uVar2;
      uVar11 = uVar3;
      uVar9 = uVar5;
      goto LAB_14112e300;
    }
    uVar7 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar9 = 0;
    if (1 < (byte)(cVar1 - 3U)) goto LAB_14112e300;
  }
  uVar6 = 0;
  uVar8 = 1;
  uVar7 = uVar2;
  uVar10 = uVar4;
  uVar11 = uVar5;
  uVar9 = uVar3;
LAB_14112e300:
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FUN_141130230(*(longlong *)(param_1 + 0x7b0),uVar6,uVar10,uVar11);
  }
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    FUN_14112f8c0(*(longlong *)(param_1 + 0x7c8),uVar8,uVar7,uVar9);
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FUN_141130230(*(longlong *)(param_1 + 0x7b8),uVar8,uVar7,uVar9);
  }
  return;
}



// FUNCTION 14112e380 FUN_14112e380 body=636 status=ok
// SIG undefined FUN_14112e380(void)

void FUN_14112e380(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_128 [220];
  undefined1 local_4c [52];
  
  cVar2 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar2 - 1U) < 2) {
    iVar1 = *(int *)(param_1 + 0x87c);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x8d8) <= iVar1)) {
      _guard_xfg_dispatch_icall_nop(local_128,0,0x110);
      FUN_140ed0240(local_128);
    }
    else {
      FUN_140e9a4f0(local_128,(longlong)iVar1 * 0x110 + *(longlong *)(param_1 + 0x8d0));
    }
    cVar2 = FWeakObjectPtr::IsValid(local_4c);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      plVar3 = (longlong *)FWeakObjectPtr::Get(local_4c);
      uVar4 = FUN_14301f8f0();
      uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x7e0);
    FUN_141137f50(param_1,uVar4,uVar5,0);
    FUN_140e9c360(local_128);
    return;
  }
  if (1 < (byte)(cVar2 - 3U)) {
    return;
  }
  lVar11 = 0;
  if (cVar2 == '\x04') {
    lVar6 = param_1 + 0x9b8;
LAB_14112e49c:
    iVar1 = *(int *)(lVar6 + 100);
    if (((lVar6 == 0) || (iVar1 < 0)) || (*(int *)(lVar6 + 0xc0) <= iVar1)) goto LAB_14112e4cc;
    FUN_140e9a4f0(local_128,(longlong)iVar1 * 0x110 + *(longlong *)(lVar6 + 0xb8));
  }
  else {
    if (cVar2 == '\x03') {
      lVar6 = param_1 + 0x8e8;
      goto LAB_14112e49c;
    }
LAB_14112e4cc:
    _guard_xfg_dispatch_icall_nop(local_128,0,0x110);
    FUN_140ed0240(local_128);
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get(local_4c);
  FUN_140e9c360(local_128);
  lVar6 = lVar11;
  lVar7 = lVar11;
  if ((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) {
    if (*(char *)(param_1 + 0x810) == '\x02') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x7f0);
      lVar7 = param_1 + 0x7e8;
    }
    else {
      lVar6 = 0;
      lVar7 = 0;
      if (*(char *)(param_1 + 0x810) != '\x01') goto LAB_14112e555;
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x7e8);
      lVar7 = param_1 + 0x7f0;
    }
    lVar7 = FWeakObjectPtr::Get(lVar7);
  }
LAB_14112e555:
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x808);
  lVar9 = lVar11;
  if (cVar2 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x808);
    uVar4 = FUN_14301f8f0();
    lVar9 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
  }
  lVar10 = lVar11;
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_14301f8f0();
    lVar10 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  }
  if (lVar9 != lVar10) {
    lVar11 = lVar10;
  }
  FUN_141137f50(param_1,lVar9,lVar6,lVar11);
  FUN_141137f50(param_1,lVar11,lVar7,lVar9);
  return;
}



// FUNCTION 14112e600 FUN_14112e600 body=259 status=ok
// SIG undefined FUN_14112e600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112e600(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[0] = 0xffffffff;
  uVar2 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_14170c210(local_78);
    uVar2 = local_78[0];
  }
  local_78[0] = 0xffffffff;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8758;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_68[0] = &LAB_1411075e0;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_78[0]);
  return;
}



// FUNCTION 14112e710 FUN_14112e710 body=167 status=ok
// SIG undefined FUN_14112e710(void)

void FUN_14112e710(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_res8[0] = 0xffffffff;
  uVar2 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FUN_14170c210(local_res8);
    uVar2 = local_res8[0];
  }
  local_res8[0] = 0xffffffff;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8758;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_58[0] = &LAB_1411072a0;
  FUN_14208c4f0(param_1,local_58);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 14112e7c0 FUN_14112e7c0 body=217 status=ok
// SIG undefined FUN_14112e7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112e7c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141107410;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14112e8a0 FUN_14112e8a0 body=340 status=ok
// SIG undefined FUN_14112e8a0(void)

void FUN_14112e8a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_142ecf920(*(longlong *)(param_1 + 0x188),0);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_142ecf920(*(longlong *)(param_1 + 400),0);
  }
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x170), cVar4 != '\0')) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,L"DEPOSIT",L"GFxPlayerStorageMenu",L"DepositLabel");
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x170);
    if (*(char *)(lVar5 + 0x778) == '\x01') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"RETRIEVE",L"GFxPlayerStorageMenu",L"RetrieveLabel");
      FText::operator=(local_38,uVar6);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2b0))
              (*(longlong **)(param_1 + 0x198),local_38,1,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 14112ea00 FUN_14112ea00 body=17 status=ok
// SIG undefined FUN_14112ea00(void)

ulonglong FUN_14112ea00(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  if (lVar2 == 0) {
    return in_RAX;
  }
  uVar4 = 0;
  LOCK();
  bVar1 = *(byte *)(lVar2 + 0x361);
  if (bVar1 == 0) {
    *(byte *)(lVar2 + 0x361) = 1;
  }
  else {
    uVar4 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x380) = 0xffffffff;
    FUN_1411e7890(lVar2);
    FWeakObjectPtr::operator=(&uStackX_8,lVar2);
    uStack_28 = 0;
    uStack_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,auStack_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8920;
      puVar3[1] = lVar2;
      *(undefined4 *)(puVar3 + 2) = uStackX_8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStackX_c;
    }
    apuStack_58[0] = &LAB_1411d50e0;
    uVar4 = FUN_14208c5d0(lVar2,apuStack_58);
  }
  return uVar4;
}



// FUNCTION 14112ea20 FUN_14112ea20 body=172 status=ok
// SIG undefined FUN_14112ea20(void)

void FUN_14112ea20(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    lVar3 = FUN_140ec9a00(uVar2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x6c8) != 0)) {
      FUN_1410a29f0();
    }
  }
  if (param_1[0xd8] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0xd8);
      param_1[0xd8] = 0;
    }
  }
  return;
}



// FUNCTION 14112ead0 FUN_14112ead0 body=319 status=ok
// SIG undefined FUN_14112ead0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112ead0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FWeakObjectPtr::operator=(&local_c8,param_1);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_c8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_c4;
  }
  local_b8[0] = &LAB_141107420;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14112ec10 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPluginStatus,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x1c8,0);
  iVar4 = (int)(uVar3 / 0x1c8);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c8,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14112eca0 FUN_14112eca0 body=165 status=ok
// SIG undefined FUN_14112eca0(void)

ulonglong FUN_14112eca0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x1c8) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x1c8,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x8fb823ee08fb823f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x1c8);
      }
      goto LAB_14112ed14;
    }
    if (iVar4 == 0) goto LAB_14112ed14;
  }
  iVar4 = iVar5;
LAB_14112ed14:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c8,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14112ed50 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<456,4>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x1c8,0);
    iVar3 = (int)(uVar1 / 0x1c8);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x1c8,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14112edd0 FUN_14112edd0 body=1675 status=ok
// SIG undefined FUN_14112edd0(void)

void FUN_14112edd0(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined1 local_b8 [176];
  
  if (*(longlong *)(param_1 + 0x498) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x490) == 0) {
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x168);
  if (lVar2 == 0) {
    local_d0 = DAT_1468b5d98;
    local_d8 = DAT_1468b5d90;
    fStack_d4 = DAT_1468b5d94;
  }
  else {
    local_d0 = *(float *)(lVar2 + 0x228);
    local_d8 = *(float *)(lVar2 + 0x220);
    fStack_d4 = *(float *)(lVar2 + 0x224);
  }
  fVar17 = local_d0;
  fVar15 = fStack_d4;
  fVar18 = local_d8;
  local_c0 = local_d0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x168);
  local_c8 = local_d8;
  fStack_c4 = fStack_d4;
  if (lVar3 == 0) {
    local_d0 = DAT_1468b5d98;
    local_d8 = DAT_1468b5d90;
    fStack_d4 = DAT_1468b5d94;
  }
  else {
    local_d0 = *(float *)(lVar3 + 0x228);
    local_d8 = *(float *)(lVar3 + 0x220);
    fStack_d4 = *(float *)(lVar3 + 0x224);
  }
  fVar18 = local_d8 - fVar18;
  fVar17 = local_d0 - fVar17;
  fVar15 = fStack_d4 - fVar15;
  if (((ABS(fVar18) <= 0.0001) && (ABS(fVar15) <= 0.0001)) && (ABS(fVar17) <= 0.0001)) {
    return;
  }
  fVar13 = *(float *)(param_1 + 0x484);
  fVar1 = *(float *)(param_1 + 0x4a4);
  if (lVar2 == 0) {
    local_e0 = (float)DAT_1464aa7a0;
    puVar7 = &local_e8;
    local_e8 = DAT_1464aa798;
  }
  else {
    puVar7 = (undefined8 *)FUN_14238db80(lVar2,&local_e8);
  }
  fVar6 = DAT_1468b5d98;
  fVar5 = DAT_1468b5d94;
  fVar4 = DAT_1468b5d90;
  fVar16 = fVar15 * fVar15 + fVar18 * fVar18 + fVar17 * fVar17;
  fVar9 = fVar17;
  fVar12 = fVar18;
  fVar11 = fVar15;
  if ((fVar16 != 1.0) &&
     (fVar9 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar11 = DAT_1468b5d94, 1e-08 <= fVar16)) {
    auVar14 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar11 = auVar14._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar16 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar16 * 0.5 * fVar11 * fVar11);
    fVar9 = fVar17 * fVar11;
    fVar12 = fVar18 * fVar11;
    fVar11 = fVar15 * fVar11;
  }
  fStack_d4 = (float)((ulonglong)*puVar7 >> 0x20);
  local_d8 = (float)*puVar7;
  fVar10 = fVar11 * *(float *)(puVar7 + 1) - fVar9 * fStack_d4;
  fVar19 = fVar9 * local_d8 - fVar12 * *(float *)(puVar7 + 1);
  local_e0 = fVar12 * fStack_d4 - fVar11 * local_d8;
  fVar9 = fVar19 * fVar19 + fVar10 * fVar10 + local_e0 * local_e0;
  if (fVar9 == 1.0) {
LAB_14112f1bb:
    local_e8 = CONCAT44(fVar19,fVar10);
  }
  else {
    if (1e-08 <= fVar9) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar12 = auVar14._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
      fVar10 = fVar10 * fVar12;
      fVar19 = fVar19 * fVar12;
      local_e0 = local_e0 * fVar12;
      goto LAB_14112f1bb;
    }
    local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_e0 = DAT_1468b5d98;
  }
  if (fVar16 != 1.0) {
    if (fVar16 < 1e-08) {
      _local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_d0 = DAT_1468b5d98;
      goto LAB_14112f27b;
    }
    auVar14 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar9 = auVar14._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar16 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar16 * 0.5 * fVar9 * fVar9);
    fVar18 = fVar18 * fVar9;
    fVar15 = fVar15 * fVar9;
    fVar17 = fVar17 * fVar9;
  }
  _local_d8 = CONCAT44(fVar15,fVar18);
  local_d0 = fVar17;
LAB_14112f27b:
  pfVar8 = (float *)FVector::RotateAngleAxis(&local_d8,local_b8,param_2 * fVar13 * fVar1,&local_e8);
  fVar18 = pfVar8[1];
  fVar15 = *pfVar8;
  local_e0 = pfVar8[2];
  fVar17 = fVar15 * fVar15 + fVar18 * fVar18 + local_e0 * local_e0;
  if (fVar17 == 1.0) {
    local_e8 = *(undefined8 *)pfVar8;
    local_e0 = pfVar8[2];
  }
  else if (1e-08 <= fVar17) {
    auVar14 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar13 = auVar14._0_4_;
    fVar13 = fVar13 + fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13);
    fVar13 = fVar13 + fVar13 * (0.5 - fVar17 * 0.5 * fVar13 * fVar13);
    local_e0 = fVar13 * local_e0;
    local_e8 = CONCAT44(fVar13 * fVar18,fVar13 * fVar15);
  }
  else {
    local_e8 = CONCAT44(fVar5,fVar4);
    local_e0 = fVar6;
  }
  puVar7 = (undefined8 *)FUN_1411081e0(param_1,local_b8,&local_e8);
  fVar16 = SQRT(fVar16);
  local_e0 = *(float *)(puVar7 + 1);
  _local_d8 = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) * fVar16 + fStack_c4,
                       (float)*puVar7 * fVar16 + local_c8);
  local_d0 = local_e0 * fVar16 + local_c0;
  FUN_14223c850(*(undefined8 *)(param_1 + 0x498),&local_d8,0,0,0);
  return;
}



// FUNCTION 14112f460 FUN_14112f460 body=828 status=ok
// SIG undefined FUN_14112f460(void)

void FUN_14112f460(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  if (*(longlong *)(param_1 + 0x498) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x490) == 0) {
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x168);
  if (lVar5 == 0) {
    local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    puVar6 = &local_88;
    local_80 = DAT_1468b5d98;
  }
  else {
    puVar6 = &local_98;
    local_90 = (float)*(undefined4 *)(lVar5 + 0x228);
    local_98 = *(undefined8 *)(lVar5 + 0x220);
  }
  uVar3 = *puVar6;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 0x168);
  local_a0 = *(float *)(puVar6 + 1);
  if (lVar5 == 0) {
    local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    puVar6 = &local_88;
    local_80 = DAT_1468b5d98;
  }
  else {
    puVar6 = &local_98;
    local_90 = (float)*(undefined4 *)(lVar5 + 0x228);
    local_98 = *(undefined8 *)(lVar5 + 0x220);
  }
  uVar4 = *puVar6;
  local_a8._0_4_ = (float)uVar3;
  fVar12 = (float)local_a8 - (float)uVar4;
  local_a8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  local_90 = *(float *)(puVar6 + 1);
  fVar11 = local_a0 - *(float *)(puVar6 + 1);
  local_98 = uVar4;
  uVar4 = local_98;
  local_98._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar10 = local_a8._4_4_ - local_98._4_4_;
  if (((ABS(fVar12) <= 0.0001) && (ABS(fVar10) <= 0.0001)) && (ABS(fVar11) <= 0.0001)) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x484);
  fVar2 = *(float *)(param_1 + 0x4a0);
  local_98 = uVar4;
  if (lVar5 == 0) {
    local_80 = DAT_1464aa7a0;
    puVar6 = &local_88;
    local_88 = DAT_1464aa798;
  }
  else {
    local_a8 = uVar3;
    puVar6 = (undefined8 *)FUN_14238db80(lVar5,&local_88);
  }
  local_78 = *puVar6;
  local_70 = *(undefined4 *)(puVar6 + 1);
  fVar9 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
  if (fVar9 != 1.0) {
    if (fVar9 < 1e-08) {
      local_a0 = DAT_1468b5d98;
      local_a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_14112f6ee;
    }
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar7 = auVar8._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar9 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar9 * 0.5 * fVar7 * fVar7);
    fVar12 = fVar12 * fVar7;
    fVar10 = fVar10 * fVar7;
    fVar11 = fVar11 * fVar7;
  }
  local_a8 = CONCAT44(fVar10,fVar12);
  local_a0 = fVar11;
LAB_14112f6ee:
  FVector::RotateAngleAxis(&local_a8,&local_88,param_2 * fVar1 * fVar2,&local_78);
  fVar9 = SQRT(fVar9);
  local_a8 = CONCAT44(local_88._4_4_ * fVar9 + local_98._4_4_,(float)local_88 * fVar9 + (float)uVar4
                     );
  local_a0 = local_80 * fVar9 + local_90;
  FUN_14223c850(*(undefined8 *)(param_1 + 0x488),&local_a8,0,0,0);
  return;
}



// FUNCTION 14112f7a0 FUN_14112f7a0 body=273 status=ok
// SIG undefined FUN_14112f7a0(void)

void FUN_14112f7a0(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4d4);
  if (param_2 == iVar3) {
    return;
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x4dc);
    *(undefined1 *)(param_1 + 0x4c4) = 1;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    if (-1 < iVar3) {
      if (iVar3 < 2) {
        *(undefined4 *)(param_1 + 0x4dc) = 2;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x4dc) = 1;
      }
    }
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4cc) = 0;
  }
  else if (iVar3 == 2) {
    iVar3 = *(int *)(param_1 + 0x4d8);
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x4d8) = 2;
        goto LAB_14112f842;
      }
      if (iVar3 != 2) goto LAB_14112f842;
    }
    *(undefined4 *)(param_1 + 0x4d8) = 1;
  }
LAB_14112f842:
  *(int *)(param_1 + 0x4d4) = param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x4c4) = 0;
  }
  else if (param_2 == 2) {
    fVar1 = *(float *)(param_1 + 0x4c0);
    fVar2 = *(float *)(param_1 + 0x4bc);
    iVar3 = rand();
    *(float *)(param_1 + 0x4d0) = (float)iVar3 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
    return;
  }
  return;
}



// FUNCTION 14112f8c0 FUN_14112f8c0 body=2408 status=ok
// SIG undefined FUN_14112f8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14112f8c0(longlong param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_368 [32];
  wchar_t *local_348;
  undefined8 local_340;
  longlong local_338;
  undefined4 *local_328;
  undefined4 *puStack_320;
  undefined4 *local_318;
  ulonglong *puStack_310;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined4 local_130 [2];
  longlong local_128;
  longlong *local_118;
  char local_108;
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined1 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined1 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong local_80 [2];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_338 = param_1;
  FText::FText(local_2f0);
  FText::FText(local_308);
  lVar13 = *(longlong *)(param_1 + 0x38);
  local_348 = (wchar_t *)0x0;
  local_340 = 0;
  if (lVar13 != 0) {
    lVar7 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14112f969;
  }
  lVar13 = 0;
LAB_14112f969:
  if (param_2 == '\0') {
    if (lVar13 == 0) {
      lVar13 = FUN_1404b03b0();
    }
    else {
      lVar13 = lVar13 + 0x698;
    }
    FText::operator=(local_2f0,lVar13);
    if (local_348 != L"inventory") {
      iVar12 = local_340._4_4_;
      if (local_340._4_4_ != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_348,10);
        iVar12 = local_340._4_4_;
      }
      iVar6 = (int)local_340 + 10;
      local_340 = CONCAT44(local_340._4_4_,iVar6);
      if (iVar12 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348);
      }
      builtin_wcsncpy(local_348,L"inventory",10);
    }
  }
  else if (param_2 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = FUN_1404b03b0();
    }
    else {
      lVar13 = lVar13 + 0x6b0;
    }
    FText::operator=(local_2f0,lVar13);
    if (local_348 != L"bank") {
      iVar12 = local_340._4_4_;
      if (local_340._4_4_ != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_348,5);
        iVar12 = local_340._4_4_;
      }
      iVar6 = (int)local_340 + 5;
      local_340 = CONCAT44(local_340._4_4_,iVar6);
      if (iVar12 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348);
      }
      builtin_wcsncpy(local_348,L"bank",5);
    }
  }
  lVar13 = 2;
  if (param_4 == 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"({0}/Unlimited)",L"GFxPlayerStorageMenu",
                       L"CapacityUnlimitedFormat");
    plVar9 = (longlong *)FTextFormat::FTextFormat(local_190,uVar8);
    local_130[0] = 0;
    local_2b8 = local_130;
    local_108 = '\0';
    uStack_2b0 = local_100;
    local_328 = (undefined4 *)*plVar9;
    puStack_320 = (undefined4 *)plVar9[1];
    if (puStack_320 != (undefined4 *)0x0) {
      LOCK();
      puStack_320[2] = puStack_320[2] + 1;
      UNLOCK();
    }
    local_128 = (longlong)param_3;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8,&local_2b8);
    uVar8 = FText::Format(local_220,&local_328,uVar8);
    FText::FText(local_268,uVar8);
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_218 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_2a8);
    if ((local_108 != '\0') && (local_108 = '\0', local_118 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_118 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FText::operator=(local_308,local_268);
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_260 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar1 = (int *)((longlong)local_260 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    plVar9 = local_200;
  }
  else {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1d8,L"({0}/{1})",L"GFxPlayerStorageMenu",L"CapacityFormat");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_180,uVar8);
    local_f8[0] = 0;
    local_328 = local_f8;
    local_d0 = 0;
    puStack_320 = local_98;
    local_2d0 = puVar11[1];
    local_2d8 = *puVar11;
    local_c8 = 0;
    local_a0 = 0;
    if (local_2d0 != 0) {
      LOCK();
      *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
      UNLOCK();
    }
    local_f0 = (longlong)param_3;
    local_c0 = (longlong)param_4;
    local_298 = local_328;
    uStack_290 = puStack_320;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
    uVar8 = FText::Format(local_1f0,&local_2d8,uVar8);
    FText::FText(local_250,uVar8);
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1e8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_288);
    lVar7 = 2;
    plVar9 = local_80;
    do {
      lVar7 = lVar7 + -1;
      if ((char)plVar9[-4] != '\0') {
        *(undefined1 *)(plVar9 + -4) = 0;
        plVar3 = (longlong *)plVar9[-6];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      plVar9 = plVar9 + -6;
    } while (lVar7 != 0);
    plVar9 = (longlong *)puVar11[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FText::operator=(local_308,local_250);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_248 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)local_248 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
        }
      }
    }
    plVar9 = local_1d0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (*(longlong *)(local_338 + 0x180) != 0) {
    lVar7 = FText::FText(local_160,local_308);
    lVar10 = FText::FText(local_148,local_2f0);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a8,L"{0} {1}",L"GFxPlayerStorageMenu",L"ItemAndCountHeader");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_170,uVar8);
    local_98[0] = 4;
    FText::FText(local_88,lVar10);
    local_70 = 1;
    local_68 = 4;
    FText::FText(local_58,lVar7);
    local_318 = local_98;
    local_40 = 1;
    puStack_310 = local_38;
    local_2c8 = *puVar11;
    local_2c0 = puVar11[1];
    if (local_2c0 != 0) {
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_318);
    uVar8 = FText::Format(local_1c0,&local_2c8,uVar8);
    FText::FText(local_238,uVar8);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1b8 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_278);
    plVar9 = (longlong *)&stack0xffffffffffffffe0;
    do {
      lVar13 = lVar13 + -1;
      if ((char)plVar9[-4] != '\0') {
        *(undefined1 *)(plVar9 + -4) = 0;
        plVar3 = (longlong *)plVar9[-6];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      plVar9 = plVar9 + -6;
    } while (lVar13 != 0);
    plVar9 = (longlong *)puVar11[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar10 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar7 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar9 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    (**(code **)(**(longlong **)(local_338 + 0x180) + 0x2b0))
              (*(longlong **)(local_338 + 0x180),local_238,1,0);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_230 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1a0 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
  }
  if (*(longlong *)(local_338 + 400) != 0) {
    FUN_142088cf0(*(longlong *)(local_338 + 400),&local_348);
  }
  if (local_348 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_300 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2e8 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_2e8 + 8))(local_2e8,1);
      }
    }
  }
  return;
}



// FUNCTION 141130230 FUN_141130230 body=1921 status=ok
// SIG undefined FUN_141130230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141130230(longlong param_1,char param_2,uint param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  uint local_258;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  int local_d8 [2];
  ulonglong local_d0;
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [2];
  ulonglong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uVar12 = (ulonglong)(int)param_3;
  local_258 = param_3;
  FText::FText(local_220);
  FText::FText(local_238);
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_268 = (undefined8 *)0x0;
  local_260 = 0;
  if (lVar9 == 0) {
LAB_1411302d5:
    lVar9 = 0;
  }
  else {
    lVar6 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411302d5;
  }
  if (param_2 == '\0') {
    if (lVar9 == 0) {
      lVar9 = FUN_1404b03b0();
    }
    else {
      lVar9 = lVar9 + 0x698;
    }
    FText::operator=(local_220,lVar9);
    if (local_268 != (undefined8 *)&DAT_1446b1a58) {
      iVar11 = local_260._4_4_;
      if (local_260._4_4_ != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268,10);
        iVar11 = local_260._4_4_;
      }
      iVar5 = (int)local_260 + 10;
      local_260 = CONCAT44(local_260._4_4_,iVar5);
      if (iVar11 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268);
      }
      *(undefined4 *)local_268 = 0x6e0069;
      *(undefined4 *)((longlong)local_268 + 4) = 0x650076;
      *(undefined4 *)(local_268 + 1) = 0x74006e;
      *(undefined4 *)((longlong)local_268 + 0xc) = 0x72006f;
      *(undefined4 *)(local_268 + 2) = 0x79;
    }
  }
  else if (param_2 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = FUN_1404b03b0();
    }
    else {
      lVar9 = lVar9 + 0x6b0;
    }
    FText::operator=(local_220,lVar9);
    if (local_268 != (undefined8 *)&DAT_1446b1a70) {
      iVar11 = local_260._4_4_;
      if (local_260._4_4_ != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268,5);
        iVar11 = local_260._4_4_;
      }
      iVar5 = (int)local_260 + 5;
      local_260 = CONCAT44(local_260._4_4_,iVar5);
      if (iVar11 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268);
      }
      *local_268 = 0x6b006e00610062;
      *(undefined2 *)(local_268 + 1) = 0;
    }
  }
  if (param_4 == 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,L"({0}/Unlimited)",L"GFxPlayerStorageMenu",
                       L"CapacityUnlimitedFormat");
    plVar8 = (longlong *)FTextFormat::FTextFormat(local_108,uVar7);
    local_1f8 = local_d8;
    local_b0 = '\0';
    uStack_1f0 = local_a8;
    local_248 = (undefined4 *)*plVar8;
    puStack_240 = (ulonglong *)plVar8[1];
    if (puStack_240 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_240 + 1) = (int)puStack_240[1] + 1;
      UNLOCK();
    }
    local_d8[0] = param_4;
    local_d0 = uVar12;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1e8,&local_1f8);
    uVar7 = FText::Format(local_168,&local_248,uVar7);
    FText::FText(local_198,uVar7);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_160 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1e8);
    if (local_b0 != '\0') {
      local_b0 = '\0';
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_c0 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    FText::operator=(local_238,local_198);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_190 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
    uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_148 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
      uStack_1d0 = (ulonglong *)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
      if ((int)lVar9 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,L"({0}/{1})",L"GFxPlayerStorageMenu",L"CapacityFormat");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar7);
    local_a8[0] = 0;
    local_248 = local_a8;
    local_80 = 0;
    puStack_240 = local_48;
    local_200 = puVar10[1];
    local_208 = *puVar10;
    local_78 = 0;
    local_50 = 0;
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    local_a0 = uVar12;
    local_70 = (longlong)param_4;
    local_1d8 = local_248;
    uStack_1d0 = puStack_240;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_1d8);
    uVar7 = FText::Format(local_138,&local_208,uVar7);
    FText::FText(local_180,uVar7);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_130 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1c8);
    lVar9 = 2;
    plVar8 = (longlong *)&stack0xffffffffffffffd0;
    do {
      lVar9 = lVar9 + -1;
      if ((char)plVar8[-4] != '\0') {
        *(undefined1 *)(plVar8 + -4) = 0;
        plVar3 = (longlong *)plVar8[-6];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      plVar8 = plVar8 + -6;
    } while (lVar9 != 0);
    plVar8 = (longlong *)puVar10[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    FText::operator=(local_238,local_180);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_178 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    uVar12 = (ulonglong)local_258;
  }
  lVar9 = *(longlong *)(param_1 + 0x38);
  if (lVar9 != 0) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar9 = FUN_140e97290(lVar9);
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)FUN_1411e0f50(lVar9,local_e8,uVar12 & 0xffffffff,param_4);
        goto LAB_141130895;
      }
    }
  }
  puVar10 = &local_1b8;
  local_1b8 = _DAT_1464aa6c0;
  uStack_1b0 = _DAT_1464aa6c8;
LAB_141130895:
  local_1a8 = *(undefined4 *)puVar10;
  uStack_1a4 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_1a0 = *(undefined4 *)(puVar10 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar10 + 0xc);
  plVar8 = *(longlong **)(param_1 + 0x170);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,local_220,1,0);
  }
  plVar8 = *(longlong **)(param_1 + 0x178);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,local_238,1,0);
    FUN_142f0c220(*(undefined8 *)(param_1 + 0x178),&local_1a8,1);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x180),&local_268);
  }
  if (local_268 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_230 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)local_230 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_230 + 8))(local_230,1);
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_218 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_218 + 8))(local_218,1);
      }
    }
  }
  return;
}



// FUNCTION 1411309c0 FUN_1411309c0 body=194 status=ok
// SIG undefined FUN_1411309c0(void)

void FUN_1411309c0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (*(char *)(param_1 + 0x70d) != param_2)) {
    *(char *)(param_1 + 0x70d) = param_2;
    pwVar3 = L"hideChat";
    if (param_2 != '\0') {
      pwVar3 = L"showChat";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar3 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar3[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141130a90 FUN_141130a90 body=1003 status=ok
// SIG undefined FUN_141130a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141130a90(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong lStack_120;
  longlong local_118 [2];
  longlong *plStack_108;
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar7 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = FUN_140f578e0(lVar8);
      if (lVar8 != 0) {
        local_118[0] = FUN_140c453a0(lVar8);
        if ((local_118[0] != 0) && (param_2 != 0)) {
          FUN_142d61d40(local_100,local_118,lVar8,*(undefined8 *)(param_2 + 0x60));
          cVar6 = FUN_142d52a00(local_100);
          if (cVar6 != '\0') {
            if (*(longlong *)(param_1 + 0x188) != 0) {
              FUN_142088cf0(*(longlong *)(param_1 + 0x188),param_2 + 0x50);
            }
            if (*(longlong *)(param_1 + 400) != 0) {
              uVar9 = FUN_142d52a20(local_100);
              uVar9 = FArchive::operator<<(uVar9);
              fVar11 = (float)FUN_142d5fed0(uVar9);
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_98,L"{0}/",L"GFxSDUVendorMenu",L"OwnedAmmoFormat");
              puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar9);
              local_50 = (longlong)(int)fVar11;
              local_e8 = local_58;
              uStack_e0 = local_28;
              local_128 = *puVar10;
              lStack_120 = puVar10[1];
              local_58[0] = 0;
              local_30 = '\0';
              if (lStack_120 != 0) {
                LOCK();
                *(int *)(lStack_120 + 8) = *(int *)(lStack_120 + 8) + 1;
                UNLOCK();
              }
              uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_e8);
              uVar9 = FText::Format(local_b0,&local_128,uVar9);
              FText::FText(local_c8,uVar9);
              if (local_a8 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_a8 + 1;
                lVar8 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_a8)(local_a8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_a8 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_a8 + 8))(local_a8,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8);
              if (local_30 != '\0') {
                local_30 = '\0';
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_40 + 1;
                  lVar8 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_40)(local_40);
                    LOCK();
                    piVar1 = (int *)((longlong)local_40 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_40 + 8))(local_40,1);
                    }
                  }
                }
              }
              plVar4 = (longlong *)puVar10[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
              (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))
                        (*(longlong **)(param_1 + 400),local_c8,1,0);
              if (local_c0 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_c0 + 1;
                lVar8 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_c0)(local_c0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_c0 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_c0 + 8))(local_c0,1);
                  }
                }
              }
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_90 + 1;
                lVar8 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar1 = (int *)((longlong)local_90 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_90 + 8))(local_90,1);
                  }
                }
              }
            }
            if (*(longlong *)(param_1 + 0x198) != 0) {
              local_118[1] = 0;
              plStack_108 = (longlong *)0x0;
              uVar9 = FUN_142d52a20(local_100);
              lVar7 = FArchive::operator<<(uVar9);
              lVar8 = **(longlong **)(param_1 + 0x198);
              uVar9 = FText::AsNumber(local_80,(int)*(float *)(lVar7 + 0x20),0,local_118 + 1);
              (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x198),uVar9,1,0);
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_78 + 1;
                lVar8 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_78)(local_78);
                  LOCK();
                  piVar1 = (int *)((longlong)local_78 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_78 + 8))(local_78,1);
                  }
                }
              }
              plVar4 = plStack_108;
              if (plStack_108 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_108 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plStack_108)(plStack_108);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
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



// FUNCTION 141130e80 FUN_141130e80 body=1302 status=ok
// SIG undefined FUN_141130e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141130e80(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  if ((((param_2 != 0) &&
       (local_30 = DAT_1468387a8 ^ (ulonglong)auStack_158, *(longlong *)(param_1 + 0x188) != 0)) &&
      (*(longlong *)(param_1 + 0x198) != 0)) &&
     ((*(longlong *)(param_1 + 400) != 0 && (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 != 0)))) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar7 = FUN_140f578e0(lVar7), lVar7 != 0)) {
      local_138 = (wchar_t *)0x0;
      local_130 = 0;
      if (*(char *)(param_2 + 0x30) == '\0') {
        lVar7 = (**(code **)(*(longlong *)(lVar7 + 0xd80) + 0x18))();
        if (local_138 != L"backpack") {
          iVar5 = local_130._4_4_;
          if (local_130._4_4_ != 9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,9);
            iVar5 = local_130._4_4_;
          }
          iVar4 = (int)local_130 + 9;
          local_130 = CONCAT44(local_130._4_4_,iVar4);
          if (iVar5 < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
          }
          builtin_wcsncpy(local_138,L"backpack",9);
        }
      }
      else {
        if (*(char *)(param_2 + 0x30) != '\x01') {
          return;
        }
        lVar7 = FUN_140c41a30(lVar7);
        if (local_138 != L"bank") {
          iVar5 = local_130._4_4_;
          if (local_130._4_4_ != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138,5);
            iVar5 = local_130._4_4_;
          }
          iVar4 = (int)local_130 + 5;
          local_130 = CONCAT44(local_130._4_4_,iVar4);
          if (iVar5 < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
          }
          builtin_wcsncpy(local_138,L"bank",5);
        }
      }
      local_108 = (undefined4 *)CONCAT44(local_108._4_4_,(undefined4)local_108);
      uStack_100 = (ulonglong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      if ((lVar7 != 0) &&
         (local_108 = (undefined4 *)CONCAT44(local_108._4_4_,(undefined4)local_108),
         uStack_100 = (ulonglong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100),
         1 < (int)local_130)) {
        iVar5 = ASwitchActor::GetSelectedOption(lVar7);
        iVar4 = FUN_142b47070(lVar7);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x188),&local_138);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_b8,L"{0}/",L"GFxSDUVendorMenu",L"OwnedAmmoFormat");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar8);
        local_60[0] = 0;
        local_108 = local_60;
        local_38 = '\0';
        uStack_100 = &local_30;
        local_128 = *puVar9;
        lStack_120 = puVar9[1];
        if (lStack_120 != 0) {
          LOCK();
          *(int *)(lStack_120 + 8) = *(int *)(lStack_120 + 8) + 1;
          UNLOCK();
        }
        local_58 = (longlong)iVar5;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8,&local_108);
        uVar8 = FText::Format(local_d0,&local_128,uVar8);
        FText::FText(local_e8,uVar8);
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_c8 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)local_c8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_c8 + 8))(local_c8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8);
        if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_48 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))
                  (*(longlong **)(param_1 + 400),local_e8,1,0);
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_e0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_b0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (iVar4 < 1) {
          lVar7 = **(longlong **)(param_1 + 0x198);
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_88,L"Unlimited",L"GFxSDUVendorMenu",L"BackpackUnlimitedCount");
          (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x198),uVar8,1,0);
          plVar10 = local_80;
        }
        else {
          local_118 = 0;
          plStack_110 = (longlong *)0x0;
          lVar7 = **(longlong **)(param_1 + 0x198);
          uVar8 = FText::AsNumber(local_a0,iVar4,0,&local_118);
          (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x198),uVar8,1,0);
          plVar10 = plStack_110;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_98 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)local_98 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar10 = plStack_110;
              if (iVar5 == 1) {
                (**(code **)(*local_98 + 8))(local_98,1);
                plVar10 = plStack_110;
              }
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      if (local_138 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1411313a0 FUN_1411313a0 body=1071 status=ok
// SIG undefined FUN_1411313a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411313a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  longlong local_118 [3];
  longlong lStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar7 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_141131402;
  }
  lVar8 = 0;
LAB_141131402:
  if ((((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) &&
      (*(longlong *)(param_1 + 400) != 0)) && (lVar8 != 0)) {
    lVar7 = FUN_140f578e0(lVar8);
    lVar8 = FUN_140e971d0(lVar8);
    if ((lVar7 != 0) && (lVar8 != 0)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
         (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x380) != 0)) {
        iVar5 = FUN_140cfc7d0(lVar8);
        uVar6 = FUN_140cfe750(lVar8);
        local_118[0] = 0;
        local_118[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
        FGenericPlatformString::Memcpy(local_118[0],L"lostLoot",0x12);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x188),local_118);
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_98,L"{0}/",L"GFxSDUVendorMenu",L"OwnedAmmoFormat");
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar9);
        local_58[0] = 0;
        local_e8 = local_58;
        local_30 = '\0';
        puStack_e0 = local_28;
        local_118[2] = *puVar10;
        lStack_100 = puVar10[1];
        if (lStack_100 != 0) {
          LOCK();
          *(int *)(lStack_100 + 8) = *(int *)(lStack_100 + 8) + 1;
          UNLOCK();
        }
        local_50 = (longlong)iVar5;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_e8);
        uVar9 = FText::Format(local_b0,local_118 + 2,uVar9);
        FText::FText(local_c8,uVar9);
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a8 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_a8 + 8))(local_a8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8);
        if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_40 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        plVar3 = (longlong *)puVar10[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))
                  (*(longlong **)(param_1 + 400),local_c8,1,0);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_c0 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_90 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        local_f8 = 0;
        plStack_f0 = (longlong *)0x0;
        lVar8 = **(longlong **)(param_1 + 0x198);
        uVar9 = FText::AsNumber(local_80,uVar6,0,&local_f8);
        (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x198),uVar9,1,0);
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_78 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        plVar3 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_f0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411317d0 FUN_1411317d0 body=292 status=ok
// SIG undefined FUN_1411317d0(void)

void FUN_1411317d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  FUN_142ed3af0(param_1,param_2,0);
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"characterLevelLabel",0x28);
  uVar1 = FUN_1404b03b0();
  FUN_142f100e0(param_1,local_18,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"characterLevelNum",0x24);
  uVar1 = FUN_1404b03b0();
  FUN_142f100e0(param_1,local_18,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    local_18[0] = 0;
    local_18[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"empty",0xc);
    FUN_142088910(*(undefined8 *)(param_1 + 0x310),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141131900 FUN_141131900 body=623 status=ok
// SIG undefined FUN_141131900(void)

void FUN_141131900(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  wchar_t *local_18;
  int local_10;
  int iStack_c;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  iStack_c = 0;
  if (param_2 == *(char *)(param_1 + 0x70c)) {
    return;
  }
  if (param_2 == '\0') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,9);
    local_10 = local_10 + 9;
    if (iStack_c < local_10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"standard",9);
    if (*(char *)(param_1 + 0x70c) == '\x01') {
      if (local_18 != L"mainMenuFocusHide") {
        local_10 = 0;
        iVar2 = 0;
        if (iStack_c != 0x12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x12);
          iVar2 = local_10;
        }
        local_10 = iVar2 + 0x12;
        if (iStack_c < local_10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"mainMenuFocusHide",0x12);
      }
    }
    else if ((*(char *)(param_1 + 0x70c) == '\x02') && (local_18 != L"focusedHide")) {
      local_10 = 0;
      iVar2 = 0;
      if (iStack_c != 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0xc);
        iVar2 = local_10;
      }
      local_10 = iVar2 + 0xc;
      if (iStack_c < local_10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
      }
      builtin_wcsncpy(local_18,L"focusedHide",0xc);
    }
  }
  else if (param_2 == '\x01') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0xe);
    local_10 = local_10 + 0xe;
    if (iStack_c < local_10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"mainMenuFocus",0xe);
  }
  else {
    if (param_2 != '\x02') goto LAB_141131b45;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,8);
    local_10 = local_10 + 8;
    if (iStack_c < local_10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    }
    builtin_wcsncpy(local_18,L"focused",8);
  }
  if (((local_10 != 0) && (0 < local_10 + -1)) &&
     (lVar1 = *(longlong *)(param_1 + 0x6b0), lVar1 != 0)) {
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      local_28 = *(undefined4 *)(param_1 + 0x694);
      local_20 = 0x42c80000;
      local_24 = local_28;
      FUN_142f0f050(*(longlong *)(param_1 + 0x6b8),&local_28);
      lVar1 = *(longlong *)(param_1 + 0x6b0);
    }
    FUN_142088910(lVar1,&local_18);
  }
LAB_141131b45:
  *(char *)(param_1 + 0x70c) = param_2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141131b70 FUN_141131b70 body=411 status=ok
// SIG undefined FUN_141131b70(void)

void FUN_141131b70(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  lVar8 = param_1[7];
  lVar11 = 0;
  lVar6 = lVar11;
  if (lVar8 != 0) {
    lVar5 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = FUN_140f9aee0(lVar8);
    }
  }
  if ((char)param_1[0x36] != param_2) {
    *(char *)(param_1 + 0x36) = param_2;
    (**(code **)(*param_1 + 0x278))(param_1,param_2);
    if (lVar6 != 0) {
      uVar4 = 0;
      plVar1 = (longlong *)(lVar6 + 0x9a0);
      if ((char)param_1[0x36] == '\0') {
        TBaseMulticastDelegate<void>::Remove(plVar1,param_1[0x37]);
        param_1[0x37] = 0;
      }
      else {
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          plVar7[2] = (longlong)FUN_141111ee0;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
          iVar2 = *(int *)(lVar6 + 0x9a8);
          lVar11 = *plVar9;
          *(int *)(lVar6 + 0x9a8) = iVar2 + 1;
          if (*(int *)(lVar6 + 0x9ac) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar10 = plVar7;
          *(undefined4 *)(puVar10 + 1) = 3;
        }
        param_1[0x37] = lVar11;
        uVar4 = FUN_140bca8d0(lVar6,0);
      }
      FUN_141133b20(param_1,uVar4);
    }
  }
  return;
}



// FUNCTION 141131d10 FUN_141131d10 body=446 status=ok
// SIG undefined FUN_141131d10(void)

void FUN_141131d10(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *local_18;
  undefined8 local_10;
  
  *(char *)(param_1 + 0x70b) = param_2;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_10 = 5;
    local_18 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    iVar2 = 0;
    FGenericPlatformString::Memcpy(local_18,L"menu",10);
    uVar1 = local_10._4_4_;
    if (param_2 == '\x02') {
      if (local_18 != L"echo") {
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar1 != 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
          uVar1 = local_10._4_4_;
          iVar2 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar2 + 5);
        if ((int)uVar1 < iVar2 + 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"echo",5);
      }
    }
    else if (param_2 == '\x03') {
      if (local_18 != L"settings") {
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar1 != 9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,9);
          uVar1 = local_10._4_4_;
          iVar2 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar2 + 9);
        if ((int)uVar1 < iVar2 + 9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"settings",9);
      }
    }
    else if ((param_2 == '\x04') && (local_18 != L"newGame")) {
      local_10 = (ulonglong)local_10._4_4_ << 0x20;
      if (uVar1 != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,8);
        uVar1 = local_10._4_4_;
        iVar2 = (int)local_10;
      }
      local_10 = CONCAT44(local_10._4_4_,iVar2 + 8);
      if ((int)uVar1 < iVar2 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
      }
      builtin_wcsncpy(local_18,L"newGame",8);
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x600),&local_18);
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141131ed0 FUN_141131ed0 body=464 status=ok
// SIG undefined FUN_141131ed0(void)

void FUN_141131ed0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar13 = 0;
  iVar11 = -1;
  iVar12 = iVar11;
  if ((*param_2 != 0) && (lVar6 = FUN_1422312c0(), lVar6 != 0)) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (plVar8 = (longlong *)FUN_140bb8cd0(lVar6), plVar8 != (longlong *)0x0)) &&
       (uVar15 = uVar13, uVar16 = uVar13, 0 < (int)plVar8[1])) {
      do {
        lVar6 = *(longlong *)(uVar16 + *plVar8);
        if (lVar6 == 0) {
LAB_141131fcc:
          bVar4 = false;
        }
        else {
          uVar13 = (ulonglong)((uint)uVar13 | 1);
          plVar9 = (longlong *)FUN_140e50580(lVar6,local_48);
          if (*plVar9 == 0) goto LAB_141131fcc;
          puVar3 = (undefined8 *)*param_2;
          uVar13 = 3;
          puVar10 = (undefined8 *)FUN_140e50580(lVar6,local_58);
          cVar5 = (**(code **)*puVar3)(puVar3,*puVar10);
          if (cVar5 == '\0') goto LAB_141131fcc;
          bVar4 = true;
        }
        plVar9 = local_50;
        if (((uVar13 & 2) != 0) &&
           (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffd), local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        plVar9 = local_40;
        if (((uVar13 & 1) != 0) &&
           (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffe), local_40 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        iVar12 = (int)uVar15;
        if (bVar4) break;
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        uVar16 = uVar16 + 8;
        iVar12 = iVar11;
      } while ((int)uVar14 < (int)plVar8[1]);
    }
  }
  FUN_1411320a0(param_1,iVar12);
  return;
}



// FUNCTION 1411320a0 FUN_1411320a0 body=486 status=ok
// SIG undefined FUN_1411320a0(void)

void FUN_1411320a0(longlong param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  if (*(int *)(param_1 + 0x5c4) != param_2) {
    if ((*(int *)(param_1 + 0x5c4) != -1) && (lVar4 = FUN_14110e990(), lVar4 != 0)) {
      FUN_140e5dea0(lVar4,0);
    }
    iVar3 = *(int *)(param_1 + 0x5c4);
    *(int *)(param_1 + 0x5c4) = param_2;
    if ((param_2 != -1) && (lVar4 = FUN_14110e990(param_1,param_2), lVar4 != 0)) {
      FUN_140e5dea0(lVar4,1);
    }
    lVar4 = FUN_1422312c0(param_1);
    plVar10 = (longlong *)0x0;
    plVar6 = plVar10;
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
        plVar6 = (longlong *)FUN_140bb8cd0(lVar4);
      }
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((plVar6 != (longlong *)0x0) && (*(longlong *)(DAT_146b33f38 + 0xd0) != 0)) {
      plVar7 = plVar10;
      if ((-1 < iVar3) && ((ulonglong)(longlong)iVar3 < 4)) {
        plVar7 = (longlong *)(*(longlong *)(DAT_146b33f38 + 0xd0) + (longlong)iVar3 * 0x50 + 0x448);
      }
      iVar3 = *(int *)(param_1 + 0x5c4);
      if (*(int *)(param_1 + 0x5c4) < 1) {
        iVar3 = 0;
      }
      plVar11 = plVar10;
      if (((plVar7 != (longlong *)0x0) && (-1 < iVar3)) && ((ulonglong)(longlong)iVar3 < 4)) {
        plVar11 = plVar7 + ((longlong)iVar3 + 1U) * 2;
      }
      plVar7 = plVar10;
      if (0 < (int)plVar6[1]) {
        do {
          uVar12 = 0;
          if (plVar11 != (longlong *)0x0) {
            piVar8 = (int *)*plVar11;
            piVar1 = piVar8 + (int)plVar11[1];
            for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
              if (*piVar8 == (int)plVar10) {
                uVar12 = 1;
                break;
              }
            }
          }
          if (*(longlong *)((longlong)plVar7 + *plVar6) != 0) {
            FUN_140e5dcf0(*(longlong *)((longlong)plVar7 + *plVar6),uVar12,0);
          }
          uVar9 = (int)plVar10 + 1;
          plVar10 = (longlong *)(ulonglong)uVar9;
          plVar7 = plVar7 + 1;
        } while ((int)uVar9 < (int)plVar6[1]);
      }
    }
    if (*(longlong *)(param_1 + 0x4b0) == 0) {
      uVar13 = 0x3f000000;
    }
    else {
      uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x4b0) + 0x1b4);
    }
    TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x490,uVar13);
  }
  return;
}



// FUNCTION 141132290 FUN_141132290 body=181 status=ok
// SIG undefined FUN_141132290(void)

void FUN_141132290(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (1 < *(int *)(param_1 + 800)) {
    if (param_2 == '\0') {
      uVar5 = FText::FromString(local_20,param_1 + 0x318);
      FUN_142ed3af0(param_1,uVar5,0);
      plVar6 = local_18;
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Loading...",L"LoadGameListItem",L"LoadingCharacterStringText");
      FUN_142ed3af0(param_1,uVar5,0);
      plVar6 = local_30;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141132350 FUN_141132350 body=29 status=ok
// SIG undefined FUN_141132350(void)

void FUN_141132350(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x709) = param_2;
  if (*(longlong **)(param_1 + 0x6c8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141132365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x278))();
    return;
  }
  return;
}



// FUNCTION 141132370 FUN_141132370 body=93 status=ok
// SIG undefined FUN_141132370(void)

void FUN_141132370(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FWeakObjectPtr::operator=(param_1 + 0x5b8);
  if (((*(byte *)(param_1 + 0x5c8) & 2) != 0) && (*(longlong *)(param_1 + 0x590) != 0)) {
    cVar2 = FUN_14044af00(param_1 + 0x5b8,0);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x5b8);
      FUN_1411581f0(uVar1);
    }
  }
  return;
}



// FUNCTION 1411323d0 FUN_1411323d0 body=284 status=ok
// SIG undefined FUN_1411323d0(void)

ulonglong FUN_1411323d0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0x89c);
  *(int *)((longlong)param_1 + 0x89c) = param_2;
  (**(code **)(*param_1 + 0x568))();
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xb1);
  *(uint *)(param_1 + 0xb1) = 1;
  uVar3 = (ulonglong)uVar1;
  UNLOCK();
  if ((int)param_1[0x113] == 1) {
    if (iVar4 == 4) {
      if (param_2 == 0) {
        lVar2 = FUN_14110de20(param_1);
        if (lVar2 != 0) {
          FUN_1411375e0(lVar2,4,0);
        }
        lVar2 = FUN_140f9aee0(param_1);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = FUN_140beb060(lVar2,0);
        }
      }
    }
    else if ((iVar4 == 3) && (param_2 == 0)) {
      lVar2 = FUN_14110de20(param_1);
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_1411375e0(lVar2,4,0);
      }
    }
  }
  if (param_1[0x130] == 0) {
    return uVar3;
  }
  uVar3 = FUN_142ebdf20();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  if (*(int *)((longlong)param_1 + 0x89c) == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = (int)param_1[0x116];
      if (iVar4 < 0) {
        return uVar3;
      }
      if ((int)param_1[0x115] <= iVar4) {
        return uVar3;
      }
      break;
    default:
      goto switchD_1411324a3_default;
    }
  }
  else {
    if ((int)param_1[0x115] < 1) {
      return uVar3;
    }
    iVar4 = 0;
  }
  uVar3 = (**(code **)(*(longlong *)param_1[0x130] + 0x2b8))((longlong *)param_1[0x130],iVar4,0,0);
switchD_1411324a3_default:
  return uVar3;
}



// FUNCTION 141132530 FUN_141132530 body=1260 status=ok
// SIG undefined FUN_141132530(void)

void FUN_141132530(longlong param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8 [8];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar1 = *(char *)(param_1 + 0x778);
  bVar2 = 1 < (byte)(cVar1 - 3U);
  if (cVar1 == param_2) goto LAB_1411329f5;
  *(char *)(param_1 + 0x778) = param_2;
  if (*(longlong *)(param_1 + 0x600) == 0) goto LAB_14113298c;
  if (param_2 == '\x01') {
    FUN_14112cc30(param_1,0,0);
    lVar10 = -1;
    if (bVar2) {
      iVar4 = -1;
    }
    else {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x808);
      iVar4 = FUN_14110d690(param_1 + 0x818,uVar5);
    }
    iVar7 = 0;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    FUN_14105c120(param_1 + 0x820,iVar7,1);
    if (!bVar2) {
      FUN_14105c9b0(param_1 + 0x820,*(undefined4 *)(param_1 + 0xa90));
    }
    local_b0 = 0;
    pwVar8 = L"retrieve";
    if (cVar1 == '\0') {
      pwVar8 = L"menuIntro";
    }
    local_b8 = 0;
    if (*pwVar8 != L'\0') {
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar8[lVar10] != L'\0');
      uVar9 = (int)lVar10 + 1;
      local_b0 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      }
      FGenericPlatformString::Memcpy(local_b8,pwVar8,(longlong)(int)uVar9 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_b8);
    lVar10 = local_b8;
LAB_14113297a:
    if (lVar10 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (param_2 == '\x02') {
      FUN_14112cc30(param_1,0,0);
      if (bVar2) {
        iVar4 = -1;
      }
      else {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x808);
        iVar4 = FUN_14110d690(param_1 + 0x818,uVar5);
      }
      iVar7 = 0;
      if (iVar4 != -1) {
        iVar7 = iVar4;
      }
      FUN_14105c120(param_1 + 0x820,iVar7,1);
      if (!bVar2) {
        FUN_14105c9b0(param_1 + 0x820,*(undefined4 *)(param_1 + 0xa90));
      }
      local_a8[6] = 0;
      local_a8[7] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 6,0);
      FGenericPlatformString::Memcpy(local_a8[6],L"deposit",0x10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_a8 + 6);
      lVar10 = local_a8[6];
      goto LAB_14113297a;
    }
    if ((byte)(param_2 - 3U) < 2) {
      if ((byte)(cVar1 - 1U) < 2) {
        FUN_14112cc30(param_1,0,0);
        if (*(char *)(param_1 + 0x778) == '\x03') {
          FUN_14105c120(param_1 + 0x8f0,0,1);
          uVar5 = FWeakObjectPtr::Get(param_1 + 0x808);
          uVar3 = FUN_14110d690(param_1 + 0x9b8,uVar5);
          *(undefined4 *)(param_1 + 0xa68) = uVar3;
          FUN_14105c120(param_1 + 0x9c0,uVar3,1);
          if (*(int *)(param_1 + 0xa1c) != -1) {
            *(int *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa1c);
            lVar10 = param_1 + 0x9c0;
LAB_141132793:
            FUN_14105c120(lVar10,0xffffffffffffffff,0);
          }
        }
        else if (*(char *)(param_1 + 0x778) == '\x04') {
          FUN_14105c120(param_1 + 0x9c0,0,0,0);
          uVar5 = FWeakObjectPtr::Get(param_1 + 0x808);
          uVar3 = FUN_14110d690(param_1 + 0x8e8,uVar5);
          *(undefined4 *)(param_1 + 0x998) = uVar3;
          FUN_14105c120(param_1 + 0x8f0,uVar3,1);
          if (*(int *)(param_1 + 0x94c) != -1) {
            *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x94c);
            lVar10 = param_1 + 0x8f0;
            goto LAB_141132793;
          }
        }
        local_a8[4] = 0;
        local_a8[5] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
        FGenericPlatformString::Memcpy(local_a8[4],L"compareIntro",0x1a);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_a8 + 4);
        lVar10 = local_a8[4];
        goto LAB_14113297a;
      }
      if (param_2 == '\x03') {
        local_a8[0] = 0;
        local_a8[1] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
        FGenericPlatformString::Memcpy(local_a8[0],L"compareFocusList1",0x24);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_a8);
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        if (*(int *)(param_1 + 0xa1c) != -1) {
          *(int *)(param_1 + 0xa68) = *(int *)(param_1 + 0xa1c);
          FUN_14105c120(param_1 + 0x9c0,0xffffffffffffffff,0);
        }
      }
      else if (param_2 == '\x04') {
        local_a8[2] = 0;
        local_a8[3] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
        FGenericPlatformString::Memcpy(local_a8[2],L"compareFocusList2",0x24);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_a8 + 2);
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
        if (*(int *)(param_1 + 0x94c) != -1) {
          *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x94c);
          FUN_14105c120(param_1 + 0x8f0,0xffffffffffffffff,0);
        }
      }
    }
  }
LAB_14113298c:
  local_38 = 0;
  local_28 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141107800;
  FUN_14204c280(local_68);
  FUN_14112e220(param_1);
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FUN_14112e8a0();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
LAB_1411329f5:
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x774);
  *(undefined1 *)(param_1 + 0x805) = 1;
  return;
}



// FUNCTION 141132a20 FUN_141132a20 body=484 status=ok
// SIG undefined FUN_141132a20(void)

void FUN_141132a20(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_68 [3];
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  FUN_1411087c0();
  *(undefined4 *)(param_1 + 0x188) = *param_2;
  *(undefined4 *)(param_1 + 0x18c) = param_2[1];
  *(undefined4 *)(param_1 + 400) = param_2[2];
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 0x198,&local_38);
  if (*(longlong *)(param_2 + 4) != 0) {
    local_68[0] = 0;
    local_68[1] = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"RequestAsyncLoad SingleDelegate",0x40);
    local_68[2] = 0;
    local_50 = 0;
    puVar4 = (undefined8 *)operator_new(0x28,local_68 + 2);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar4 + 1,param_1);
      puVar4[2] = FUN_141128d10;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[4] = uVar5;
      *puVar4 = &PTR_FUN_143f4d1b8;
    }
    lVar6 = FUN_1422ca050();
    puVar4 = (undefined8 *)
             FStreamableManager::RequestAsyncLoad
                       (lVar6 + 0x178,local_48,param_2 + 4,local_68 + 2,0,0,0,local_68);
    if ((undefined8 *)(param_1 + 0x1b0) != puVar4) {
      *(undefined8 *)(param_1 + 0x1b0) = *puVar4;
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b8,puVar4 + 1);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141132c10 FUN_141132c10 body=173 status=ok
// SIG undefined FUN_141132c10(void)

void FUN_141132c10(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  *(char *)(param_1 + 0x2d8) = param_2;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    if (param_2 == '\0') {
      local_18[1] = 10;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 0x14;
      pwVar1 = L"inventory";
    }
    else {
      if (param_2 != '\x01') {
        return;
      }
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 10;
      pwVar1 = L"bank";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,uVar2);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x2d0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141132cc0 FUN_141132cc0 body=1419 status=ok
// SIG undefined FUN_141132cc0(void)

void FUN_141132cc0(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong local_18;
  ulonglong local_10;
  
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
LAB_141132d22:
    lVar7 = 0;
  }
  else {
    lVar3 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141132d22;
  }
  *(int *)(param_1 + 0x1c0) = param_2;
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x208;
      }
      FUN_142ed3af0(*(undefined8 *)(param_1 + 0x198),lVar3,0);
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),1);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x198) + 0x170);
      (**(code **)(*plVar5 + 0x38))(plVar5,1);
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x238;
      }
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                (*(longlong **)(param_1 + 0x178),lVar3,1,0);
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x250;
      }
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
                (*(longlong **)(param_1 + 0x180),lVar3,1,0);
    }
    if (lVar7 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      return;
    }
    cVar2 = FUN_142ebe120(lVar7);
    local_18 = 0;
    local_10 = 0;
    pwVar8 = L"offline";
    if (cVar2 != '\0') {
      pwVar8 = L"offlineSplit";
    }
    if (*pwVar8 == L'\0') goto LAB_141133213;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
  }
  else if (param_2 == 1) {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x220;
      }
      FUN_142ed3af0(*(undefined8 *)(param_1 + 0x198),lVar3,0);
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),1);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x198) + 0x170);
      (**(code **)(*plVar5 + 0x38))(plVar5,1);
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x268;
      }
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                (*(longlong **)(param_1 + 0x178),lVar3,1,0);
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x280;
      }
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
                (*(longlong **)(param_1 + 0x180),lVar3,1,0);
    }
    if (lVar7 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      return;
    }
    cVar2 = FUN_142ebe120(lVar7);
    local_18 = 0;
    local_10 = 0;
    pwVar8 = L"offline";
    if (cVar2 != '\0') {
      pwVar8 = L"offlineSplit";
    }
    if (*pwVar8 == L'\0') goto LAB_141133213;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
  }
  else {
    if (param_2 != 2) {
      return;
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      uVar4 = FUN_1404b03b0();
      FUN_142ed3af0(*(undefined8 *)(param_1 + 0x198),uVar4,0);
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),0);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x198) + 0x170);
      (**(code **)(*plVar5 + 0x38))(plVar5,0);
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x298;
      }
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                (*(longlong **)(param_1 + 0x178),lVar3,1,0);
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        lVar3 = FUN_14106b8d0();
        lVar3 = lVar3 + 0x2b0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
                (*(longlong **)(param_1 + 0x180),lVar3,1,0);
    }
    if (lVar7 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      return;
    }
    cVar2 = FUN_142ebe120(lVar7);
    local_18 = 0;
    local_10 = 0;
    pwVar8 = L"mail";
    if (cVar2 != '\0') {
      pwVar8 = L"mailSplit";
    }
    if (*pwVar8 == L'\0') goto LAB_141133213;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
  }
  local_18 = 0;
  uVar6 = (int)lVar7 + 1;
  local_10 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  }
  FGenericPlatformString::Memcpy(local_18,pwVar8,(longlong)(int)uVar6 * 2);
LAB_141133213:
  FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141133250 FUN_141133250 body=1713 status=ok
// SIG undefined FUN_141133250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141133250(longlong *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  wchar_t *pwVar14;
  undefined1 auStack_198 [32];
  int local_178;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_150 = param_1[0x36];
  param_1[0x36] = param_3;
  pcVar3 = *(code **)(*param_1 + 0x278);
  *(int *)(param_1 + 0x37) = param_2;
  local_178 = param_2;
  local_170 = param_3;
  local_158 = param_3;
  if (param_3 == 0) {
    (*pcVar3)(param_1,0);
    return;
  }
  (*pcVar3)(param_1,1);
  if ((longlong *)param_1[0x34] != (longlong *)0x0) {
    local_138 = 0;
    plStack_130 = (longlong *)0x0;
    lVar11 = *(longlong *)param_1[0x34];
    uVar8 = FText::AsNumber(local_e8,param_2,0,&local_138);
    (**(code **)(lVar11 + 0x2b0))(param_1[0x34],uVar8,1,0);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e0 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    plVar4 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_130 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (param_1[0x35] != 0) {
    iVar6 = FUN_140e4fee0(local_170);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"/{0}",L"GFxSDUVendorMenu",L"TotalAmountFormat");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar8);
    local_78[0] = 0;
    local_148 = local_78;
    local_50 = '\0';
    puStack_140 = local_48;
    local_128 = *puVar9;
    local_120 = puVar9[1];
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
      UNLOCK();
    }
    local_70 = (longlong)iVar6;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_110,&local_148);
    uVar8 = FText::Format(local_d0,&local_128,uVar8);
    FText::FText(local_100,uVar8);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c8 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_110);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    (**(code **)(*(longlong *)param_1[0x35] + 0x2b0))((longlong *)param_1[0x35],local_100,1,0);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f8 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  lVar11 = param_1[7];
  if (lVar11 == 0) {
LAB_1411335b7:
    lVar11 = 0;
  }
  else {
    lVar10 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1411335b7;
  }
  plVar4 = (longlong *)param_1[0x2f];
  local_118 = lVar11;
  if ((plVar4 != (longlong *)0x0) && (lVar11 != 0)) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar11 + 0x698,1,0);
  }
  iVar6 = local_178;
  lVar11 = FUN_140e50b20(local_170,local_178 + 1);
  if (lVar11 == 0) {
    lVar11 = FUN_140e50b20(local_170,local_178);
    if (lVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar11 + 0x10);
    }
  }
  else {
    uVar8 = *(undefined8 *)(lVar11 + 0x10);
  }
  lVar11 = FUN_140e50b20(local_170,iVar6 + 1);
  if (lVar11 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar11 + 8);
  }
  lVar11 = FWeakObjectPtr::Get();
  if (lVar11 == 0) {
LAB_1411336b2:
    iVar7 = 0;
  }
  else {
    lVar10 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (lVar11 = (**(code **)(*(longlong *)(lVar11 + 0xd80) + 0x18))(), lVar11 == 0))
    goto LAB_1411336b2;
    iVar7 = FUN_142ff7c90(lVar11,uVar8);
  }
  if (param_1[0x30] != 0) {
    pwVar14 = L"red";
    if (iVar6 <= iVar7) {
      pwVar14 = L"green";
    }
    local_168 = 0;
    local_160 = 0;
    if (*pwVar14 != L'\0') {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (pwVar14[lVar11] != L'\0');
      uVar13 = (int)lVar11 + 1;
      local_160 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      }
      FGenericPlatformString::Memcpy(local_168,pwVar14,(longlong)(int)uVar13 * 2);
    }
    FUN_142088cf0(param_1[0x30],&local_168);
    if (local_168 != 0) {
      FMemory::Free();
    }
  }
  if (((iVar7 != *(int *)((longlong)param_1 + 0x1bc)) || (local_150 != local_158)) &&
     (param_1[0x30] != 0)) {
    FUN_140f0abd0(param_1[0x30],uVar8,iVar7,local_150 != local_158);
  }
  lVar11 = *(longlong *)(local_170 + 0x58);
  if (lVar11 == 0) {
LAB_1411337da:
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_1430a7cf0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    lVar10 = lVar11;
    if (!bVar5) goto LAB_1411337da;
  }
  if (lVar11 != 0) {
    lVar12 = UAESHelper::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14113381a;
  }
  lVar11 = 0;
LAB_14113381a:
  if (lVar10 == 0) {
    if (lVar11 == 0) {
      if ((longlong *)param_1[0x33] != (longlong *)0x0) {
        lVar11 = *(longlong *)param_1[0x33];
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_a0,L"FIX ME",L"GFxSDUVendorMenu",L"UnknownSDU");
        (**(code **)(lVar11 + 0x2b0))(param_1[0x33],uVar8,1,0);
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_98 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
      }
    }
    else if (*(char *)(lVar11 + 0x30) == '\x02') {
      FUN_1411313a0();
    }
    else {
      FUN_141130e80(param_1,lVar11);
    }
  }
  else {
    FUN_141130a90(param_1,lVar10);
  }
  return;
}



// FUNCTION 141133910 FUN_141133910 body=524 status=ok
// SIG undefined FUN_141133910(void)

void FUN_141133910(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) &&
     (plVar5 = (longlong *)UWorld::GetFirstPlayerController(lVar4), plVar5 != (longlong *)0x0)) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar4 = (**(code **)(*plVar5 + 0xfa8))(plVar5), lVar4 != 0)) &&
       (lVar4 = FUN_142f02280(lVar4,param_1[0x8e]), lVar4 != 0)) {
      lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AMenuMapMenuFlow::OnPlayerControllerLogIn",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res10,pwVar3 + 2,1);
        FWeakObjectPtr::operator=(local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(local_28,param_1);
        local_20 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_20);
        }
        FUN_1406a5aa0(lVar4 + 0x690,local_28);
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&AMenuMapMenuFlow::OnMenuTransitionOutCompleted",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                  (lVar4 + 0x550,param_1,FUN_1411216c0,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 141133b20 FUN_141133b20 body=232 status=ok
// SIG undefined FUN_141133b20(void)

void FUN_141133b20(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong local_18;
  ulonglong local_10;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    pwVar5 = L"transitionOff";
    if (param_2 != '\0') {
      pwVar5 = L"transitionOn";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar5 != L'\0') {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (pwVar5[lVar4] != L'\0');
      uVar3 = (int)lVar4 + 1;
      local_10 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar5,(longlong)(int)uVar3 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x170),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    if ((param_2 == '\0') && (*(int *)(param_1 + 0x1c0) != 2)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x198) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar2);
  }
  return;
}



// FUNCTION 141133c10 FUN_141133c10 body=633 status=ok
// SIG undefined FUN_141133c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141133c10(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong lStack_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [24];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"Unlocked {0}/{1}",L"GFxCrewQuartersMenu",L"NumUnlockedText");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar7);
    local_98[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_40 = 0;
    local_118 = local_98;
    puStack_110 = local_38;
    local_128 = *puVar8;
    lStack_120 = puVar8[1];
    if (lStack_120 != 0) {
      LOCK();
      *(int *)(lStack_120 + 8) = *(int *)(lStack_120 + 8) + 1;
      UNLOCK();
    }
    local_90 = (longlong)param_2;
    local_60 = (longlong)param_3;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
    uVar7 = FText::Format(local_e0,&local_128,uVar7);
    FText::FText(local_f8,uVar7);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_d8 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_108);
    lVar10 = 2;
    pcVar9 = &stack0xfffffffffffffff0;
    do {
      lVar10 = lVar10 + -1;
      pcVar2 = pcVar9 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar9 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      pcVar9 = pcVar2;
    } while (lVar10 != 0);
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x2b0))
              (*(longlong **)(param_1 + 0x6c0),local_f8,1,0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141133e90 FUN_141133e90 body=469 status=ok
// SIG undefined FUN_141133e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141133e90(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float fStack_24;
  undefined8 local_18;
  float local_10;
  
  *(longlong *)(param_1 + 0x488) = param_2;
  *(longlong *)(param_1 + 0x490) = param_3;
  *(longlong *)(param_1 + 0x498) = param_4;
  if (((param_4 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_4 + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(float *)(lVar1 + 0x228);
    }
    fVar5 = local_10;
    uVar2 = local_18;
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(float *)(lVar1 + 0x228);
    }
    fVar3 = *(float *)(param_1 + 0x458);
    local_28 = (float)uVar2;
    local_28 = (float)local_18 - local_28;
    fVar6 = *(float *)(param_1 + 0x45c) - fVar3;
    fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_24 = (float)((ulonglong)local_18 >> 0x20) - fStack_24;
    fVar4 = (SQRT(local_28 * local_28 + fStack_24 * fStack_24 +
                  (local_10 - fVar5) * (local_10 - fVar5)) - fVar3) / fVar6;
    fVar5 = 0.0;
    if ((0.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
      fVar5 = 1.0;
    }
    fVar3 = fVar5 * fVar6 + fVar3;
  }
  *(float *)(param_1 + 0x4ac) = fVar3;
  FUN_1411380d0(param_1);
  FUN_1411372a0(param_1);
  FUN_141104060(param_1,*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490));
  FUN_141104060(param_1,*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x488));
  if ((*(longlong *)(param_1 + 0x498) != 0) && (*(longlong *)(param_1 + 0x488) != 0)) {
    FUN_142223280(*(longlong *)(param_1 + 0x498),*(longlong *)(param_1 + 0x488),&DAT_146532180,0);
  }
  FUN_1411374e0(param_1);
  return;
}



// FUNCTION 141134070 FUN_141134070 body=826 status=ok
// SIG undefined FUN_141134070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141134070(longlong param_1,char param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_148 = param_5;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    if (param_2 == '\0') {
      lVar10 = **(longlong **)(param_1 + 0x170);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"UNLOCKED",L"GFxCrewQuartersPlaceObjectsMenu",L"CountsText");
      (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar7,1,0);
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_d8,L"BACKPACK ({0}/{1})",L"GFxCrewQuartersPlaceObjectsMenu",
                         L"GunsCountText");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar7);
      local_98[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_40 = 0;
      local_128 = local_98;
      uStack_120 = local_38;
      local_138 = *puVar8;
      lStack_130 = puVar8[1];
      if (lStack_130 != 0) {
        LOCK();
        *(int *)(lStack_130 + 8) = *(int *)(lStack_130 + 8) + 1;
        UNLOCK();
      }
      local_90 = (longlong)param_3;
      local_60 = (longlong)param_4;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_128);
      uVar7 = FText::Format(local_f0,&local_138,uVar7);
      FText::FText(local_108,uVar7);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_e8 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
      lVar10 = 2;
      pcVar9 = &stack0xfffffffffffffff0;
      do {
        lVar10 = lVar10 + -1;
        pcVar2 = pcVar9 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar9 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar6 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        pcVar9 = pcVar2;
      } while (lVar10 != 0);
      plVar5 = (longlong *)puVar8[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
                (*(longlong **)(param_1 + 0x170),local_108,1,0);
      local_b8 = local_d0;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_100 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_b8 = local_d0;
          if (iVar4 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
            local_b8 = local_d0;
          }
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b8 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x178);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_148,1,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x180);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,param_6,1,0);
  }
  return;
}



// FUNCTION 1411343b0 FUN_1411343b0 body=133 status=ok
// SIG undefined FUN_1411343b0(void)

bool FUN_1411343b0(longlong param_1)

{
  bool bVar1;
  char cVar2;
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
      lVar3 = FUN_140cfbfb0(lVar3);
      if (lVar3 != 0) {
        cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar3);
        if (cVar2 == '\0') {
          return *(int *)(lVar3 + 0x2f0) < *(int *)(lVar3 + 0x144);
        }
      }
    }
  }
  return false;
}



// FUNCTION 141134440 FUN_141134440 body=1795 status=ok
// SIG undefined FUN_141134440(void)

void FUN_141134440(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_298;
  undefined4 local_294;
  longlong local_290;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined8 local_258;
  longlong *plStack_250;
  undefined8 local_248;
  longlong *plStack_240;
  longlong local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  longlong local_218 [2];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  longlong local_158;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  undefined1 local_126;
  undefined2 local_105;
  undefined8 local_100;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  
  if (*(longlong *)(param_1 + 0x788) == 0) {
    iVar6 = -1;
LAB_141134487:
    bVar3 = false;
  }
  else {
    iVar6 = FUN_142eb7a00();
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x6d8) <= iVar6)) goto LAB_141134487;
    bVar3 = true;
  }
  if (!bVar3) goto LAB_141134b26;
  FWeakObjectPtr::operator=(&local_298,0);
  local_290 = 0;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxLoadGameMenu::OnDeleteCharacterChoiceMade",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(&local_298,param_1);
  local_290 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_298), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_290);
  }
  lVar8 = (longlong)iVar6 * 0x1c8 + *(longlong *)(param_1 + 0x6d0);
  plVar9 = (longlong *)
           UKismetStringLibrary::Conv_IntToString(local_218,*(undefined4 *)(lVar8 + 0x20));
  plVar2 = (longlong *)(param_1 + 0x718);
  if (plVar2 != plVar9) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar9;
    *plVar9 = 0;
    *(int *)(param_1 + 0x720) = (int)plVar9[1];
    *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)((longlong)plVar9 + 0xc);
    plVar9[1] = 0;
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  FText::FromString(local_1a8,lVar8 + 0x40);
  local_258 = 0;
  plStack_250 = (longlong *)0x0;
  FText::AsNumber(local_68,*(undefined4 *)(lVar8 + 0x20),0,&local_258);
  plVar2 = plStack_250;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_250 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  local_248 = 0;
  plStack_240 = (longlong *)0x0;
  FText::AsNumber(local_1c0,*(undefined4 *)(lVar8 + 0x10),0,&local_248);
  plVar2 = plStack_240;
  if (plStack_240 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_240 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_240)(plStack_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  lVar10 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar10 == 0) {
LAB_1411346cf:
    lVar10 = FUN_1404b03b0();
  }
  else {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (lVar10 = FUN_140bbb0e0(lVar10,lVar8 + 0x18), lVar10 == 0)) goto LAB_1411346cf;
    lVar10 = lVar10 + 0x90;
  }
  FText::FText(local_1d8,lVar10);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_1f0,L"Delete Character?",L"LoadGameMenu",L"DeleteCharacterMessageHeaderText");
  local_230 = local_1a8;
  local_228 = local_1d8;
  local_220 = local_1c0;
  local_238 = lVar8;
  FUN_1410fcb70(&local_238,local_208);
  FUN_140b99f70(local_188);
  FText::operator=(local_170,local_208);
  FText::operator=(local_188,local_1f0);
  local_148 = local_298;
  local_144 = local_294;
  local_140 = local_290;
  local_f0 = *(undefined8 *)(param_1 + 0x7b0);
  local_105 = 0x100;
  local_126 = 1;
  local_f4 = 1;
  puVar12 = (undefined8 *)FName::FName(&local_res8,&DAT_1446a5944,1);
  local_100 = *puVar12;
  uVar13 = FUN_1404b03b0();
  FText::FText(local_288,uVar13);
  local_270 = 0;
  local_268 = 0;
  local_260 = 1;
  uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_98,&DAT_1446a83ac,L"LoadGameMenu",L"DialogChoice_NoText");
  FText::operator=(local_288,uVar13);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  puVar12 = (undefined8 *)FName::FName(local_res18,&DAT_1446a599c,1);
  iVar6 = local_150;
  lVar8 = (longlong)local_150;
  local_270 = *puVar12;
  local_268 = DAT_146b3e2b8;
  local_150 = local_150 + 1;
  local_260 = local_260 & 0xff;
  if (local_14c < local_150) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_158,iVar6);
  }
  lVar8 = lVar8 * 0x30 + local_158;
  FText::FText(lVar8,local_288);
  *(undefined8 *)(lVar8 + 0x18) = local_270;
  *(undefined8 *)(lVar8 + 0x20) = local_268;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_260;
  *(undefined1 *)(lVar8 + 0x29) = local_260._1_1_;
  uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_80,&DAT_1446a8408,L"LoadGameMenu",L"DialogChoice_YesText");
  FText::operator=(local_288,uVar13);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_78 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  puVar12 = (undefined8 *)FName::FName(local_res20,&DAT_1446a59d4,1);
  iVar6 = local_150;
  lVar8 = (longlong)local_150;
  local_270 = *puVar12;
  local_268 = DAT_146b3e2b0;
  local_150 = local_150 + 1;
  local_260._1_1_ = 1;
  if (local_14c < local_150) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_158,iVar6);
  }
  lVar8 = lVar8 * 0x30 + local_158;
  FText::FText(lVar8,local_288);
  *(undefined8 *)(lVar8 + 0x18) = local_270;
  *(undefined8 *)(lVar8 + 0x20) = local_268;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_260;
  *(undefined1 *)(lVar8 + 0x29) = local_260._1_1_;
  uVar13 = FWeakObjectPtr::Get(param_1 + 0x58c);
  FUN_1410f3080(uVar13,local_188);
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_280 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar1 = (int *)((longlong)local_280 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_280 + 8))(local_280,1);
      }
    }
  }
  FUN_140b9d1a0(local_188);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_200 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1e8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1d0 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1b8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1a0 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
LAB_141134b26:
  *(undefined1 *)(param_1 + 0x7c6) = 1;
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 141134b50 FUN_141134b50 body=450 status=ok
// SIG undefined FUN_141134b50(void)

void FUN_141134b50(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  if (((DAT_1462a0878 != '\0') && (lVar2 = FUN_14110cfa0(), lVar2 != 0)) &&
     (lVar2 = FUN_142f02280(lVar2,*(undefined8 *)(param_1 + 0x478)), lVar2 != 0)) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
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
      uVar4 = FName::FName(local_res10,L"OnLegalScreenCompleted",1);
      plVar6 = (longlong *)(lVar2 + 0x680);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        FUN_140f168d0(plVar5,param_1,uVar4);
      }
      if (local_18 != plVar6) {
        if (plVar5 == (longlong *)0x0) {
          if (*(int *)(lVar2 + 0x688) == 0) {
            return;
          }
          plVar5 = (longlong *)*plVar6;
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*plVar6 != 0) {
            lVar3 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar3;
          }
          *(undefined4 *)(lVar2 + 0x688) = 0;
          return;
        }
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar6);
      }
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar2 = FMemory::Realloc(plVar5,0,0);
      if (lVar2 == 0) {
        return;
      }
      FMemory::Free(lVar2);
      return;
    }
  }
  lVar2 = FUN_14110cfa0(param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_1410f7670(lVar2);
  if (lVar2 != 0) {
    FUN_1407665e0(lVar2 + 0x550,param_1);
  }
  lVar2 = FUN_14110cfa0(param_1);
  if (lVar2 != 0) {
    FUN_142ee3cb0(lVar2);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x480,0);
  DAT_1462a0878 = 0;
  return;
}



// FUNCTION 141134d20 FUN_141134d20 body=1407 status=ok
// SIG undefined FUN_141134d20(void)

void FUN_141134d20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined4 local_228;
  undefined4 local_224;
  longlong local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  longlong local_148;
  int local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  undefined2 local_f5;
  undefined8 local_e0;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar6 = FUN_141111610();
  if (cVar6 == '\0') {
    FWeakObjectPtr::operator=(&local_228,0);
    local_220 = 0;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxLoadGameMenu::OnPromptNoSaveGame",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res18,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(&local_228,param_1);
    local_220 = local_res18;
    local_res10 = 0;
    if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_228), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_220);
    }
    FUN_140b99f70(local_178);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,
                       L"You currently have no character. Would you like to create one now?",
                       L"LoadGameMenu",L"NoSaveGameBodyText");
    FText::operator=(local_160,uVar9);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Load Character",L"LoadGameMenu",L"NoSaveGameHeaderText");
    FText::operator=(local_178,uVar9);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    local_138 = local_228;
    local_134 = local_224;
    local_130 = local_220;
    local_e0 = *(undefined8 *)(param_1 + 0x7b0);
    local_f5 = 0;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_218,uVar9);
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 1;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,&DAT_1446a84c8,L"LoadGameMenu",L"DialogChoice_YesText");
    FText::operator=(local_218,uVar9);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    puVar10 = (undefined8 *)FName::FName(&local_res10,&DAT_1446a5a0c,1);
    iVar3 = local_140;
    lVar8 = (longlong)local_140;
    local_200 = *puVar10;
    local_1f8 = DAT_146b3e2a0;
    local_140 = local_140 + 1;
    local_1f0 = local_1f0 & 0xff00;
    if (local_13c < local_140) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_148,iVar3);
    }
    lVar8 = lVar8 * 0x30 + local_148;
    FText::FText(lVar8,local_218);
    *(undefined8 *)(lVar8 + 0x18) = local_200;
    *(undefined8 *)(lVar8 + 0x20) = local_1f8;
    *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_1f0;
    *(undefined1 *)(lVar8 + 0x29) = local_1f0._1_1_;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_1e8,uVar9);
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 1;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,&DAT_1446a863c,L"LoadGameMenu",L"DialogChoice_NoText");
    FText::operator=(local_1e8,uVar9);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    puVar10 = (undefined8 *)FName::FName(local_res20,&DAT_1446a5a1c,1);
    iVar3 = local_140;
    lVar8 = (longlong)local_140;
    local_1d0 = *puVar10;
    local_1c8 = DAT_146b3e2b8;
    local_140 = local_140 + 1;
    if (local_13c < local_140) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_148,iVar3);
    }
    lVar8 = lVar8 * 0x30 + local_148;
    FText::FText(lVar8,local_1e8);
    *(undefined8 *)(lVar8 + 0x18) = local_1d0;
    *(undefined8 *)(lVar8 + 0x20) = local_1c8;
    *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_1c0;
    *(undefined1 *)(lVar8 + 0x29) = local_1c0._1_1_;
    *(undefined1 *)(param_1 + 0x7c7) = 1;
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
    FUN_1410f3080(uVar9,local_178);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_210 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar2 = (int *)((longlong)local_210 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    FUN_140b9d1a0(local_178);
    return;
  }
  FWeakObjectPtr::operator=(local_1b8,0);
  local_1b0 = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_190,L"Load Character",L"LoadGameMenu",L"NoSaveGameHeaderText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_1a8,L"You currently have no character.",L"LoadGameMenu",
             L"NoCharacterGameBodyText");
  uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  FUN_1410f3960(uVar9,local_190,local_1a8,local_1b8,0,*(undefined8 *)(param_1 + 0x7b0),0);
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar2 = (int *)((longlong)local_188 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  return;
}



// FUNCTION 1411352a0 FUN_1411352a0 body=1311 status=ok
// SIG undefined FUN_1411352a0(void)

/* WARNING: Removing unreachable block (ram,0x000141135560) */
/* WARNING: Removing unreachable block (ram,0x00014113556e) */
/* WARNING: Removing unreachable block (ram,0x00014113557d) */
/* WARNING: Removing unreachable block (ram,0x000141135594) */

void FUN_1411352a0(ulonglong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong local_res8;
  ulonglong *local_res18;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  if (param_1 != 0) {
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    iVar8 = 0;
    local_res8 = param_1;
    if ((int)param_2[1] != 0) {
      FUN_14067e080(&local_b8,(int)param_2[1]);
      iVar8 = (int)param_2[1];
    }
    puVar14 = (undefined8 *)*param_2;
    puVar15 = puVar14 + (longlong)iVar8 * 2;
    for (; puVar14 != puVar15; puVar14 = puVar14 + 2) {
      local_a0 = (longlong *)puVar14[1];
      local_a8 = (longlong *)*puVar14;
      plVar12 = local_a8;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
        plVar12 = (longlong *)*puVar14;
      }
      local_88 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_80 = 0;
      uVar9 = (**(code **)(*plVar12 + 8))(0,local_58);
      uVar10 = FUN_140bb7440(local_res8);
      puVar11 = (undefined8 *)FUN_140d80bd0(uVar10,local_68,uVar9);
      if (&local_98 != puVar11) {
        local_98 = *puVar11;
        *puVar11 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_90,puVar11 + 1);
      }
      plVar12 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      uVar9 = *(undefined8 *)(local_res8 + 0x478);
      uVar10 = (**(code **)(*(longlong *)*puVar14 + 8))((longlong *)*puVar14,local_48);
      cVar7 = FUN_140d79f00(uVar9,uVar10,1,0,&local_88);
      plVar12 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (cVar7 == '\0') {
        local_78 = 0;
        local_70 = 0;
        plVar12 = (longlong *)
                  (**(code **)(*(longlong *)*puVar14 + 0x18))
                            ((longlong *)*puVar14,local_38,&local_78);
        if (&local_88 != plVar12) {
          if (local_88 != 0) {
            FMemory::Free();
          }
          local_88 = *plVar12;
          *plVar12 = 0;
          local_80 = plVar12[1];
          plVar12[1] = 0;
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
      uVar6 = local_b0;
      lVar13 = (longlong)(int)local_b0;
      iVar8 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar8);
      if (local_b0._4_4_ < iVar8) {
        FUN_14067df60(&local_b8,uVar6 & 0xffffffff);
      }
      plVar12 = local_a0;
      puVar11 = local_b8 + lVar13 * 6;
      *puVar11 = local_a8;
      puVar11[1] = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      puVar11[2] = local_98;
      puVar11[3] = uStack_90;
      puVar11[4] = 0;
      puVar11[4] = local_88;
      *(undefined4 *)(puVar11 + 5) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = local_80._4_4_;
      local_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    lVar13 = (longlong)(int)local_b0;
    local_res18 = &local_res8;
    FUN_1410f8fc0(local_b8,lVar13,local_res8 & 0xff,&local_res18);
    iVar8 = (int)param_2[1];
    if (iVar8 != 0) {
      plVar12 = (longlong *)(*param_2 + 8);
      do {
        plVar4 = (longlong *)*plVar12;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar12 = plVar12 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != (int)local_b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
    }
    puVar15 = local_b8 + lVar13 * 6;
    for (puVar14 = local_b8; puVar14 != puVar15; puVar14 = puVar14 + 6) {
      iVar8 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar8);
      }
      puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
      *puVar11 = *puVar14;
      lVar13 = puVar14[1];
      puVar11[1] = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
    }
    if ((int)local_b0 != 0) {
      plVar12 = local_b8 + 3;
      iVar8 = (int)local_b0;
      do {
        if (plVar12[1] != 0) {
          FMemory::Free();
        }
        plVar4 = (longlong *)*plVar12;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = (longlong *)plVar12[-2];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar12 = plVar12 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (local_b8 != (undefined8 *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 1411357c0 FUN_1411357c0 body=1686 status=ok
// SIG undefined FUN_1411357c0(void)

void FUN_1411357c0(ulonglong param_1,longlong *param_2)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  void *pvVar16;
  int iVar17;
  longlong *plVar18;
  undefined4 uVar19;
  void *pvVar20;
  char cVar21;
  longlong lVar22;
  ulonglong local_res8;
  longlong *local_res10;
  char local_res18;
  undefined4 local_res20 [2];
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  ulonglong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  
  plVar10 = (longlong *)0x0;
  plVar18 = (longlong *)*param_2;
  local_88 = plVar18 + (longlong)(int)param_2[1] * 2;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (plVar18 != local_88) {
    do {
      cVar21 = '\0';
      local_res18 = '\0';
      plVar14 = plVar10 + (longlong)(int)local_100 * 6;
      if (plVar10 != plVar14) {
        plVar11 = plVar10 + 1;
        do {
          puVar15 = (undefined2 *)0x0;
          local_98 = (undefined2 *)0x0;
          local_90 = *(int *)(*plVar18 + 0x60);
          lVar22 = (longlong)local_90;
          pvVar20 = *(void **)(*plVar18 + 0x58);
          if (local_90 == 0) {
            local_8c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
            puVar15 = local_98;
            _guard_xfg_dispatch_icall_nop(local_98,pvVar20,lVar22 * 2);
          }
          puVar13 = &DAT_143f3eda8;
          if (local_90 != 0) {
            puVar13 = puVar15;
          }
          if ((int)*plVar11 == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)plVar11[-1];
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
          cVar21 = local_res18;
          if (iVar6 == 0) {
            local_res18 = '\x01';
            if ((int)*plVar11 < 2) {
              pvVar16 = (void *)0x0;
              local_f0 = (void *)0x0;
              iVar6 = *(int *)(*plVar18 + 0x60);
              pvVar20 = *(void **)(*plVar18 + 0x58);
              local_e8 = CONCAT44(local_e8._4_4_,iVar6);
              if (iVar6 == 0) {
                local_e8 = 0;
                iVar6 = 0;
                iVar17 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,iVar6,0);
                pvVar16 = local_f0;
                _guard_xfg_dispatch_icall_nop(local_f0,pvVar20,(longlong)iVar6 * 2);
                iVar6 = local_e8._4_4_;
                iVar17 = (int)local_e8;
              }
              ppvVar1 = (void **)(plVar11 + -1);
              if (ppvVar1 == &local_f0) {
                if (pvVar16 != (void *)0x0) {
                  FMemory::Free(pvVar16);
                }
              }
              else {
                if (*ppvVar1 != (void *)0x0) {
                  FMemory::Free();
                }
                *ppvVar1 = pvVar16;
                local_f0 = (void *)0x0;
                local_e8 = 0;
                *(int *)plVar11 = iVar17;
                *(int *)((longlong)plVar11 + 4) = iVar6;
              }
            }
            cVar21 = local_res18;
            if ((int)plVar11[1] == 0) {
              *(int *)(plVar11 + 1) = *(int *)(*plVar18 + 0x70);
            }
            iVar6 = *(int *)((longlong)plVar11 + 0xc);
            if (*(int *)((longlong)plVar11 + 0xc) <= *(int *)(*plVar18 + 0x68)) {
              iVar6 = *(int *)(*plVar18 + 0x68);
            }
            *(int *)((longlong)plVar11 + 0xc) = iVar6;
            if (*(char *)(*plVar18 + 0x81) != '\0') {
              *(undefined1 *)(plVar11 + 2) = 1;
            }
            iVar6 = (int)plVar11[4];
            *(int *)(plVar11 + 4) = iVar6 + 1;
            if (*(int *)((longlong)plVar11 + 0x24) < iVar6 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11 + 3,iVar6);
            }
            plVar10 = (longlong *)((longlong)iVar6 * 0x10 + plVar11[3]);
            *plVar10 = *plVar18;
            lVar22 = plVar18[1];
            plVar10[1] = lVar22;
            if (lVar22 != 0) {
              LOCK();
              *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
              UNLOCK();
            }
          }
          plVar2 = plVar11 + 5;
          plVar11 = plVar11 + 6;
          plVar10 = local_108;
        } while (plVar2 != plVar14);
      }
      pvVar20 = (void *)0x0;
      if (cVar21 == '\0') {
        lVar22 = *plVar18;
        local_a8 = (longlong *)0x0;
        uVar19 = 0;
        local_9c = 0;
        local_e0 = (void *)0x0;
        iVar6 = *(int *)(lVar22 + 0x60);
        pvVar16 = *(void **)(lVar22 + 0x58);
        if (iVar6 != 0) {
          local_d8._0_4_ = iVar6;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,iVar6,0);
          pvVar20 = local_e0;
          _guard_xfg_dispatch_icall_nop(local_e0,pvVar16,(longlong)iVar6 * 2);
          lVar22 = *plVar18;
          uVar19 = local_d8._4_4_;
          iVar6 = (int)local_d8;
        }
        if (local_b4 <= *(int *)(lVar22 + 0x68)) {
          local_b4 = *(int *)(lVar22 + 0x68);
        }
        local_b8 = *(int *)(lVar22 + 0x70);
        local_b0 = *(char *)(lVar22 + 0x81) != '\0';
        local_e0 = (void *)0x0;
        local_d8 = 0;
        local_a0 = 1;
        local_c8 = pvVar20;
        local_c0 = iVar6;
        local_bc = uVar19;
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a8,0);
        uVar5 = local_100;
        *local_a8 = *plVar18;
        lVar22 = plVar18[1];
        local_a8[1] = lVar22;
        if (lVar22 != 0) {
          LOCK();
          *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
          UNLOCK();
          plVar10 = local_108;
        }
        lVar22 = (longlong)(int)local_100;
        iVar6 = (int)local_100 + 1;
        local_100 = CONCAT44(local_100._4_4_,iVar6);
        if (local_100._4_4_ < iVar6) {
          FUN_14067df60(&local_108,uVar5 & 0xffffffff);
          plVar10 = local_108;
        }
        plVar11 = plVar10 + lVar22 * 6;
        FString::FString(plVar11,&local_c8);
        iVar6 = local_a0;
        plVar14 = plVar11 + 4;
        *(int *)(plVar11 + 2) = local_b8;
        *(int *)((longlong)plVar11 + 0x14) = local_b4;
        *(undefined1 *)(plVar11 + 3) = local_b0;
        *plVar14 = 0;
        *(int *)(plVar11 + 5) = local_a0;
        if (local_a0 == 0) {
          *(int *)((longlong)plVar11 + 0x2c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar14,local_a0,0);
          plVar14 = (longlong *)*plVar14;
          plVar11 = local_a8;
          do {
            *plVar14 = *plVar11;
            lVar22 = plVar11[1];
            plVar14[1] = lVar22;
            if (lVar22 != 0) {
              LOCK();
              *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
              UNLOCK();
            }
            plVar14 = plVar14 + 2;
            plVar11 = plVar11 + 2;
            iVar6 = iVar6 + -1;
            plVar10 = local_108;
          } while (iVar6 != 0);
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
        if (local_c8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      plVar18 = plVar18 + 2;
    } while (plVar18 != local_88);
  }
  plVar18 = local_res10;
  if (local_res8 != 0) {
    local_80 = &local_res8;
    local_res20[0] = 1;
    local_f8[0] = 0;
    local_d0 = FUN_140cfd6b0();
    uVar7 = FUN_1422312c0(local_res8);
    local_cc = FUN_14046e5c0(uVar7);
    FUN_141100330(&local_80,local_res20,local_f8);
    puVar8 = (undefined8 *)FDateTime::Now(local_50);
    uVar7 = *puVar8;
    local_60 = FUN_140cff230(local_res8);
    lVar22 = (longlong)(int)local_100;
    local_78 = local_res20[0];
    local_74 = local_f8[0];
    local_70 = &local_d0;
    local_68 = &local_cc;
    local_58 = uVar7;
    FUN_1410f8bf0(plVar10,lVar22,local_res8 & 0xff,&local_78);
    iVar6 = *(int *)((longlong)plVar18 + 0xc);
    iVar17 = (int)plVar18[1];
    plVar14 = plVar10;
    if (iVar6 < 0) {
      if (iVar17 != 0) {
        plVar10 = (longlong *)(*plVar18 + 8);
        do {
          plVar14 = (longlong *)*plVar10;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar14 + 1;
            lVar4 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar3 = (int *)((longlong)plVar14 + 0xc);
              iVar6 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        iVar6 = *(int *)((longlong)plVar18 + 0xc);
        plVar14 = local_108;
      }
      *(undefined4 *)(plVar18 + 1) = 0;
      if (iVar6 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar18,0);
      }
    }
    else {
      if (iVar17 != 0) {
        plVar10 = (longlong *)(*plVar18 + 8);
        do {
          plVar14 = (longlong *)*plVar10;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar14 + 1;
            lVar4 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar3 = (int *)((longlong)plVar14 + 0xc);
              iVar6 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar17 = iVar17 + -1;
          plVar14 = local_108;
        } while (iVar17 != 0);
      }
      *(undefined4 *)(plVar18 + 1) = 0;
    }
    plVar10 = plVar14;
    if (plVar14 != plVar14 + lVar22 * 6) {
      plVar11 = plVar14 + 4;
      do {
        iVar6 = (int)plVar11[1];
        if (iVar6 != 0) {
          iVar17 = (int)plVar18[1];
          if (*(int *)((longlong)plVar18 + 0xc) < iVar6 + iVar17) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar18);
            iVar17 = (int)plVar18[1];
          }
          puVar8 = (undefined8 *)*plVar11;
          puVar12 = (undefined8 *)((longlong)iVar17 * 0x10 + *plVar18);
          iVar17 = iVar6;
          do {
            *puVar12 = *puVar8;
            lVar4 = puVar8[1];
            puVar12[1] = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            puVar12 = puVar12 + 2;
            puVar8 = puVar8 + 2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          *(int *)(plVar18 + 1) = (int)plVar18[1] + iVar6;
        }
        plVar2 = plVar11 + 2;
        plVar10 = local_108;
        plVar11 = plVar11 + 6;
      } while (plVar2 != plVar14 + lVar22 * 6);
    }
  }
  plVar18 = plVar10;
  for (iVar6 = (int)local_100; iVar6 != 0; iVar6 = iVar6 + -1) {
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar18 + 4);
    if (*plVar18 != 0) {
      FMemory::Free();
    }
    plVar18 = plVar18 + 6;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 141135e60 FUN_141135e60 body=1007 status=ok
// SIG undefined FUN_141135e60(void)

void FUN_141135e60(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar4 + 400);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 2;
  FUN_141137850(param_1);
  plVar6 = (longlong *)FUN_140ac3b30(lVar7 + 0xbc8,local_res8,param_1,FUN_141115960);
  plVar10 = (longlong *)0x0;
  param_1[0xba] = *plVar6;
  if (*(char *)(lVar7 + 0xba8) == '\0') {
    plVar6 = (longlong *)FUN_140ac3b30(lVar7 + 0xbb0,local_res8,param_1,&LAB_141129030);
    param_1[0xbb] = *plVar6;
    FUN_141133910(param_1);
    *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 4;
    *param_2 = 0;
    if ((*(byte *)(param_1 + 0xb9) & 2) == 0) goto LAB_141136146;
    if ((char)param_1[0xb8] != '\0') {
      lVar7 = FUN_1422312c0(param_1);
      if (lVar7 != 0) {
        lVar5 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar7 = FUN_140bb8b20(lVar7), lVar7 != 0)) {
          FUN_140e48890(lVar7);
        }
      }
      *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_141136109:
      FUN_1411088c0(param_1,1);
      local_res8[0] = (undefined1)param_1[0xb8];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x8b,local_res8);
      TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x92,0);
    }
  }
  else {
    plVar6 = (longlong *)FUN_1424503b0(lVar7);
    if (plVar6 == (longlong *)0x0) {
LAB_14113600c:
      plVar6 = plVar10;
    }
    else {
      lVar7 = FUN_14145f370();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14113600c;
    }
    param_1[0xb2] = (longlong)plVar6;
    if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0xfa8))(plVar6), lVar7 != 0))
    {
      uVar8 = FName::FName(local_res8,L"OnMenuStackPush",1);
      FUN_140f13040(lVar7 + 0x118,param_1,uVar8);
      FUN_142f02280(lVar7,param_1[0x8d]);
      cVar3 = FUN_14044af00(param_1 + 0xb7,0);
      if (cVar3 != '\0') {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0xb7);
        FUN_1411581f0(uVar8);
      }
    }
    *param_2 = 1;
    if ((*(byte *)(param_1 + 0xb9) & 2) == 0) goto LAB_141136146;
    if ((char)param_1[0xb8] != '\x04') {
      lVar7 = FUN_1422312c0(param_1);
      if (lVar7 != 0) {
        lVar5 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar7 = FUN_140bb8b20(lVar7), lVar7 != 0)) {
          FUN_140e48890(lVar7);
        }
      }
      *(undefined1 *)(param_1 + 0xb8) = 4;
      goto LAB_141136109;
    }
  }
  FUN_1411299c0(param_1);
LAB_141136146:
  lVar7 = FUN_140d3a420(lVar4);
  if (lVar7 != 0) {
    plVar6 = (longlong *)(lVar7 + 0xf8);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_1441c0108;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)&LAB_141112f30;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar5;
      *plVar9 = (longlong)&PTR_FUN_1441c0150;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
      iVar1 = *(int *)(lVar7 + 0x100);
      plVar10 = (longlong *)*plVar10;
      *(int *)(lVar7 + 0x100) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x104) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
    param_1[0xbc] = (longlong)plVar10;
  }
  lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
  if (lVar4 != 0) {
    plVar10 = (longlong *)FUN_1410f6d70(lVar4 + 0x640,local_res8,param_1,FUN_141113530);
    param_1[0xbd] = *plVar10;
  }
  return;
}



// FUNCTION 141136250 FUN_141136250 body=635 status=ok
// SIG undefined FUN_141136250(void)

longlong FUN_141136250(longlong param_1,char *param_2,longlong param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if ((*(int *)(param_1 + 0x89c) == 4) && (*(longlong *)(param_1 + 0x988) != 0)) {
    FUN_141131d10(*(longlong *)(param_1 + 0x988),3);
  }
  *(char *)(param_1 + 0x990) = *param_2;
  if ((*(char *)(param_1 + 0x991) != '\0') && (*param_2 != '\r')) {
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_1;
      uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_70 = (undefined4)param_3;
      uStack_6c = (undefined4)((ulonglong)param_3 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_141107690;
    FUN_142edaae0(param_1,local_68);
    return 0;
  }
  lVar3 = FUN_140f9aee0(param_1);
  if (((lVar3 == 0) ||
      (lVar3 = UGameInstance::FindLocalPlayerFromControllerId(lVar3,param_4), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 == 0)) {
LAB_14113635e:
    lVar3 = *(longlong *)(param_1 + 0x430);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1411363a3;
    }
    lVar3 = 0;
  }
  else {
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
    if (!bVar1) goto LAB_14113635e;
  }
LAB_1411363a3:
  FUN_141111950(param_1,param_3);
  lVar4 = FWeakObjectPtr::Get(param_3);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_3,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_3 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_3);
      if (lVar4 != 0) goto LAB_141136423;
    }
  }
  else {
LAB_141136423:
    lVar5 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14113645c;
  }
  lVar4 = 0;
LAB_14113645c:
  lVar4 = FUN_142ebe540(param_1,lVar4);
  if (lVar4 != 0) {
    lVar5 = AUGWeapon_Hook::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1411b8310(lVar4,lVar3);
    }
  }
  return lVar4;
}



// FUNCTION 1411364d0 FUN_1411364d0 body=512 status=ok
// SIG undefined FUN_1411364d0(void)

void FUN_1411364d0(longlong param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  FUN_1422406d0();
  iVar1 = *(int *)(param_1 + 0x4d4);
  if (iVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x498) == 0) ||
       (fVar3 = param_2 + *(float *)(param_1 + 0x4c8), *(float *)(param_1 + 0x4c8) = fVar3,
       fVar3 < *(float *)(param_1 + 0x4b4))) goto LAB_14113656e;
LAB_141136561:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if ((iVar1 != 2) ||
         (fVar3 = *(float *)(param_1 + 0x4d0) - param_2, *(float *)(param_1 + 0x4d0) = fVar3,
         0.0 < fVar3)) goto LAB_14113656e;
      goto LAB_141136561;
    }
    fVar3 = param_2 + *(float *)(param_1 + 0x4cc);
    *(float *)(param_1 + 0x4cc) = fVar3;
    if (fVar3 < *(float *)(param_1 + 0x4b8)) goto LAB_14113656e;
    uVar2 = 2;
  }
  FUN_14112f7a0(param_1,uVar2);
LAB_14113656e:
  if (*(char *)(param_1 + 0x4c4) != '\0') {
    if (*(int *)(param_1 + 0x4dc) == 1) {
      *(undefined4 *)(param_1 + 0x4a0) = 0x3dcccccd;
    }
    else if (*(int *)(param_1 + 0x4dc) == 2) {
      *(undefined4 *)(param_1 + 0x4a0) = 0xbdcccccd;
    }
    if (*(int *)(param_1 + 0x4d4) == 1) {
      if (*(int *)(param_1 + 0x4d8) == 1) {
        *(undefined1 *)(param_1 + 0x4b0) = 1;
        *(undefined4 *)(param_1 + 0x4a8) = 0x3dcccccd;
      }
      else if (*(int *)(param_1 + 0x4d8) == 2) {
        *(undefined1 *)(param_1 + 0x4b1) = 1;
        *(undefined4 *)(param_1 + 0x4a8) = 0xbdcccccd;
      }
    }
  }
  if ((1e-08 < ABS(*(float *)(param_1 + 0x4a0))) || (1e-08 < ABS(*(float *)(param_1 + 0x4a4)))) {
    FUN_14112f460(param_1,param_2);
    FUN_14112edd0(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x4b1) != *(char *)(param_1 + 0x4b0)) {
    fVar4 = *(float *)(param_1 + 0x4ac) -
            param_2 * *(float *)(param_1 + 0x460) * *(float *)(param_1 + 0x4a8);
    fVar3 = *(float *)(param_1 + 0x458);
    if ((*(float *)(param_1 + 0x458) <= fVar4) &&
       (fVar3 = *(float *)(param_1 + 0x45c), fVar4 <= *(float *)(param_1 + 0x45c))) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x4ac) = fVar3;
    FUN_1411380d0(param_1);
    FUN_1411372a0(param_1);
    FUN_1411374e0(param_1);
  }
  FUN_141104060(param_1,*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490));
  FUN_141104060(param_1,*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x488));
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined2 *)(param_1 + 0x4b0) = 0;
  return;
}



// FUNCTION 1411366d0 FUN_1411366d0 body=117 status=ok
// SIG undefined FUN_1411366d0(void)

void FUN_1411366d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1422406d0();
  if (*(int *)(param_1 + 0x5c4) != -1) {
    lVar2 = FUN_14110e990(param_1);
    if (lVar2 != 0) {
      cVar1 = FUN_140e53de0(lVar2);
      if (cVar1 != '\0') goto LAB_14113670f;
    }
    FUN_1411320a0(param_1,0xffffffff);
  }
LAB_14113670f:
  if ((*(byte *)(param_1 + 0x5c8) & 8) != 0) {
    cVar1 = FUN_141111770(param_1);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x5c8) = *(byte *)(param_1 + 0x5c8) & 0xf7;
      FUN_1411375e0(param_1,4,0);
    }
  }
  FUN_14110c240(param_1);
  return;
}



// FUNCTION 141136750 FUN_141136750 body=685 status=ok
// SIG undefined FUN_141136750(void)

void FUN_141136750(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [220];
  undefined1 local_6c [52];
  
  cVar3 = (char)param_1[0xef];
  if ((byte)(cVar3 - 1U) < 2) {
    plVar9 = param_1 + 0x103;
LAB_1411367a8:
    cVar2 = (char)*plVar9;
    iVar10 = *(int *)((longlong)plVar9 + 100);
  }
  else {
    if (cVar3 == '\x04') {
      plVar9 = param_1 + 0x137;
      goto LAB_1411367a8;
    }
    if (cVar3 == '\x03') {
      plVar9 = param_1 + 0x11d;
      goto LAB_1411367a8;
    }
    cVar2 = '\0';
    iVar10 = -1;
    plVar9 = (longlong *)0x0;
  }
  if (cVar2 == '\x01') {
    if (cVar3 != '\x02') {
      if (cVar3 != '\x01') goto LAB_141136805;
      goto LAB_1411367f4;
    }
    lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x784);
  }
  else if (cVar2 == '\x02') {
LAB_1411367f4:
    lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x77c);
  }
  else if (cVar2 == '\x03') {
    lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x784);
  }
  else {
LAB_141136805:
    lVar4 = 0;
  }
  if (plVar9 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
LAB_14113689c:
    _guard_xfg_dispatch_icall_nop(local_148,0,0x110);
    FUN_140ed0240(local_148);
  }
  else {
    plVar5 = (longlong *)FUN_141039030(plVar9 + 1);
    if (plVar5 == (longlong *)0x0) {
LAB_14113685e:
      plVar5 = (longlong *)0x0;
    }
    else {
      lVar6 = FUN_14138d860();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_14113685e;
    }
    if ((iVar10 < 0) || ((int)plVar9[0x18] <= iVar10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14113689c;
    FUN_140e9a4f0();
  }
  cVar3 = FWeakObjectPtr::IsValid(local_6c);
  if ((cVar3 == '\0') || (lVar4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_140e9c360(local_148);
  if (!bVar1) {
    return;
  }
  local_res10[0] = 0;
  local_res8[0] = 0;
  if (plVar9 != (longlong *)0x0) {
    if ((iVar10 < 0) || ((int)plVar9[0x18] <= iVar10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140e9a4f0(local_148,(longlong)iVar10 * 0x110 + plVar9[0x17]);
      goto LAB_14113694a;
    }
  }
  _guard_xfg_dispatch_icall_nop(local_148,0,0x110);
  FUN_140ed0240(local_148);
LAB_14113694a:
  uVar7 = FWeakObjectPtr::Get(local_6c);
  FUN_1411fda30(uVar7,lVar4,local_res10,local_res8);
  FUN_140e9c360(local_148);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x380))(plVar5,local_res10[0],local_res8[0]);
  }
  FUN_140ebb9a0(param_1 + 0xe1);
  lVar4 = *param_1;
  local_158 = 0;
  local_150 = 0;
  puVar8 = (undefined8 *)FName::FName(local_res18,"Confirm",1);
  (**(code **)(lVar4 + 0x4e8))(param_1,*puVar8,&local_158);
  return;
}



// FUNCTION 141136a00 FUN_141136a00 body=559 status=ok
// SIG undefined FUN_141136a00(void)

void FUN_141136a00(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_res8;
  longlong local_18 [2];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(char *)(lVar3 + 0xbad) == '\0')) {
      iVar2 = *(int *)(param_1 + 0xa90);
      bVar6 = false;
      if (iVar2 == 0) {
        FUN_14110e140(param_1);
        iVar2 = *(int *)(param_1 + 0xa90);
        bVar6 = iVar2 == 0;
      }
      if (!bVar6 && -1 < iVar2) {
        puVar1 = (undefined8 *)(param_1 + 0xa88);
        if ((*(longlong *)*puVar1 != 0) && (lVar4 = FUN_1424503b0(lVar3), lVar4 != 0)) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (lVar4 = FUN_14270bb10(lVar4), lVar4 != 0)) {
            local_res8 = CONCAT71(local_res8._1_7_,0xd);
            lVar4 = FUN_141136250(param_1,&local_res8,param_1 + 0x810,*(undefined4 *)(lVar4 + 0x108)
                                 );
            if (lVar4 != 0) {
              lVar5 = FUN_14137f1c0();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((bVar6) &&
                 (*(undefined8 *)(lVar4 + 0x690) = *(undefined8 *)*puVar1,
                 *(char *)(lVar4 + 0x63c) != '\0')) {
                FUN_141104db0(lVar4);
              }
            }
            lVar4 = FUN_140e971d0(param_1);
            if ((lVar4 != 0) && (lVar4 = FUN_140cff230(lVar4), lVar4 != 0)) {
              local_18[0] = 0;
              local_18[1] = 0;
              local_res8 = *(undefined8 *)(*(longlong *)*puVar1 + 0x18);
              FName::ToString(&local_res8,local_18);
              FUN_140d281e0(lVar4,local_18);
              if (local_18[0] != 0) {
                FMemory::Free();
              }
            }
          }
        }
        iVar2 = *(int *)(param_1 + 0xa90);
        if (iVar2 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)*puVar1,(void *)((longlong)*puVar1 + 8),(longlong)(iVar2 + -1) << 3);
          iVar2 = *(int *)(param_1 + 0xa90);
        }
        *(int *)(param_1 + 0xa90) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar1);
        iVar2 = *(int *)(param_1 + 0xa90);
      }
      if (iVar2 < 1) {
        *(undefined1 *)(lVar3 + 0xbad) = 1;
      }
    }
  }
  return;
}



// FUNCTION 141136c30 FUN_141136c30 body=279 status=ok
// SIG undefined FUN_141136c30(void)

undefined8 FUN_141136c30(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') {
        local_res8 = param_1;
        if ((param_2 == '\0') && (*(char *)(param_1 + 0x621) != '\0')) {
          local_28 = 0;
          local_18 = 0;
          puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = param_1;
            *puVar5 = &PTR_FUN_143f77b70;
          }
          local_58[0] = &LAB_141107670;
          FUN_142edaae0(param_1,local_58);
          return 1;
        }
        FUN_141101220(&local_res8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141136d50 FUN_141136d50 body=365 status=ok
// SIG undefined FUN_141136d50(void)

undefined8 FUN_141136d50(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
      FUN_140d065c0(lVar3,*(int *)(param_1 + 0x7d8) + -1);
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') {
        local_res8 = param_1;
        if ((param_2 == '\0') && (*(char *)(param_1 + 0x621) != '\0')) {
          local_28 = 0;
          local_18 = 0;
          puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = param_1;
            *puVar5 = &PTR_FUN_143f77b70;
          }
          local_58[0] = &LAB_141107570;
          FUN_142edaae0(param_1,local_58);
          return 1;
        }
        FUN_141100770(&local_res8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141136ec0 FUN_141136ec0 body=187 status=ok
// SIG undefined FUN_141136ec0(void)

void FUN_141136ec0(longlong param_1,longlong param_2,int param_3,longlong param_4,char *param_5)

{
  undefined1 local_118 [90];
  undefined1 local_be;
  
  if (param_4 != 0) {
    FUN_140ed0240(local_118);
    if ((param_3 < 0) || (*(int *)(param_2 + 0xc0) <= param_3)) {
      local_be = *(int *)(param_2 + 200) <= param_3;
    }
    else {
      FUN_140e9cc60(local_118,(longlong)param_3 * 0x110 + *(longlong *)(param_2 + 0xb8));
    }
    FUN_14112aed0(param_4,local_118,param_5);
    FUN_140e9c360(local_118);
  }
  if ((*param_5 != '\0') || (param_5[2] != '\0')) {
    *(undefined1 *)(param_1 + 0xa88) = 1;
  }
  return;
}



// FUNCTION 141136f80 FUN_141136f80 body=786 status=ok
// SIG undefined FUN_141136f80(void)

void FUN_141136f80(longlong param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Dst;
  int iVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  int local_res8 [2];
  char local_res10 [8];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_70;
  int *local_68;
  char *local_60;
  longlong *local_58;
  
  if (1e-08 < ABS(*(float *)(param_1 + 0x694) - param_2)) {
    local_98[1] = 3;
    local_res10[0] = *(float *)(param_1 + 0x694) < param_2;
    local_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],&DAT_1446b0404,6);
    param_2 = (float)*(int *)(param_1 + 0x698) * param_2;
    local_res8[0] = (int)ROUND((param_2 + param_2) - 0.5) >> 1;
    local_68 = local_res8;
    local_60 = local_res10;
    local_58 = local_98;
    local_70 = param_1;
    iVar6 = FUN_141101ce0(&local_70);
    uVar11 = (ulonglong)iVar6;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x6a8) <= iVar6)) {
      *(undefined4 *)(param_1 + 0x690) = 0xffffffff;
    }
    else {
      lVar9 = uVar11 * 0x18;
      *(int *)(param_1 + 0x690) = iVar6;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x6a0) + 0x14 + lVar9);
      iVar1 = iVar4 + 8;
      if (*(longlong *)(param_1 + 0x6b0) != 0) {
        if ((local_res10[0] == '\0') || (iVar1 <= *(int *)(param_1 + 0x698))) {
          fVar12 = (float)iVar4 / (float)*(int *)(param_1 + 0x698);
        }
        else {
          fVar12 = 1.0;
        }
        *(float *)(param_1 + 0x694) = fVar12;
        FUN_142f0fa70();
      }
      plVar3 = (longlong *)(param_1 + 0x680);
      *(undefined4 *)(param_1 + 0x688) = 0;
      if ((*(int *)(param_1 + 0x68c) < 0) && (*(int *)(param_1 + 0x68c) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar3);
      }
      if ((undefined2 *)*plVar3 != (undefined2 *)0x0) {
        *(undefined2 *)*plVar3 = 0;
      }
      if (iVar6 < *(int *)(param_1 + 0x6a8)) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x6a0);
          if (iVar1 < *(int *)(lVar5 + 0x14 + lVar9)) break;
          iVar4 = *(int *)(lVar5 + 8 + lVar9);
          _Src = *(void **)(lVar5 + lVar9);
          iVar6 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar4 = *(int *)(param_1 + 0x688);
            iVar7 = (uint)(iVar4 == 0) + iVar6 + iVar4;
            *(int *)(param_1 + 0x688) = iVar7;
            if (*(int *)(param_1 + 0x68c) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
            }
            _Dst = (void *)(*plVar3 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          lVar9 = lVar9 + 0x18;
        } while ((int)uVar10 < *(int *)(param_1 + 0x6a8));
      }
      lVar9 = **(longlong **)(param_1 + 0x750);
      uVar8 = FText::FromString(local_88,plVar3);
      (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x750),uVar8,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411372a0 FUN_1411372a0 body=567 status=ok
// SIG undefined FUN_1411372a0(void)

void FUN_1411372a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x488) != 0)) &&
     (*(longlong *)(param_1 + 0x490) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      local_60 = DAT_1468b5d98;
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
    }
    else {
      local_60 = *(float *)(lVar2 + 0x228);
      local_68 = *(float *)(lVar2 + 0x220);
      fStack_64 = *(float *)(lVar2 + 0x224);
    }
    fVar10 = local_60;
    fVar8 = fStack_64;
    fVar6 = local_68;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 0x168);
    if (lVar2 == 0) {
      local_60 = DAT_1468b5d98;
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
    }
    else {
      local_60 = *(float *)(lVar2 + 0x228);
      local_68 = *(float *)(lVar2 + 0x220);
      fStack_64 = *(float *)(lVar2 + 0x224);
    }
    fVar6 = fVar6 - local_68;
    fVar8 = fVar8 - fStack_64;
    fVar10 = fVar10 - local_60;
    fVar3 = fVar8 * fVar8 + fVar6 * fVar6 + fVar10 * fVar10;
    fVar7 = fVar6;
    fVar9 = fVar8;
    fVar4 = fVar10;
    if ((fVar3 != 1.0) &&
       (fVar7 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, fVar4 = DAT_1468b5d98, 1e-08 <= fVar3)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar6 * fVar4;
      fVar9 = fVar8 * fVar4;
      fVar4 = fVar10 * fVar4;
    }
    fVar6 = *(float *)(param_1 + 0x4ac);
    local_50 = fVar4 * fVar6 + local_60;
    _local_58 = CONCAT44(fVar9 * fVar6 + fStack_64,fVar7 * fVar6 + local_68);
    FUN_14223c850(lVar1,&local_58,0,0,0);
  }
  return;
}



// FUNCTION 1411374e0 FUN_1411374e0 body=251 status=ok
// SIG undefined FUN_1411374e0(void)

void FUN_1411374e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x498);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14216efa0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      fVar4 = (*(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x458)) /
              (*(float *)(param_1 + 0x45c) - *(float *)(param_1 + 0x458));
      if (0.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
      }
      *(float *)(lVar3 + 0x98c) =
           fVar4 * (*(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x46c)) +
           *(float *)(param_1 + 0x46c);
      fVar5 = (*(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x458)) /
              (*(float *)(param_1 + 0x45c) - *(float *)(param_1 + 0x458));
      fVar4 = 0.0;
      if ((0.0 <= fVar5) && (fVar4 = fVar5, 1.0 <= fVar5)) {
        fVar4 = 1.0;
      }
      *(float *)(lVar3 + 0x9c0) =
           fVar4 * (*(float *)(param_1 + 0x478) - *(float *)(param_1 + 0x474)) +
           *(float *)(param_1 + 0x474);
    }
  }
  return;
}



// FUNCTION 1411375e0 FUN_1411375e0 body=424 status=ok
// SIG undefined FUN_1411375e0(void)

void FUN_1411375e0(longlong param_1,char param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x5c8) & 2) != 0) {
    if (((param_3 == '\0') && (*(char *)(param_1 + 0x5c0) == '\0')) && (param_2 == '\x04')) {
      lVar3 = FUN_14110e990(param_1,0);
      if (((lVar3 != 0) &&
          ((lVar4 = USkeletalMeshComponent::GetPostProcessInstance(lVar3), lVar4 == 0 ||
           (cVar2 = FUN_140e53cb0(lVar3), cVar2 == '\0')))) &&
         (lVar3 = FUN_1422312c0(param_1), lVar3 != 0)) {
        lVar4 = FUN_14141f270();
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
          FUN_140bf5100(lVar3);
        }
      }
      cVar2 = FUN_141111770(param_1);
      if (cVar2 == '\0') {
        *(byte *)(param_1 + 0x5c8) = *(byte *)(param_1 + 0x5c8) | 8;
        return;
      }
    }
    if (*(char *)(param_1 + 0x5c0) != param_2) {
      if ((param_2 != '\x05') && (lVar3 = FUN_1422312c0(param_1), lVar3 != 0)) {
        lVar4 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = FUN_140bb8b20(lVar3), lVar3 != 0)) {
          FUN_140e48890(lVar3);
        }
      }
      *(char *)(param_1 + 0x5c0) = param_2;
      FUN_1411088c0(param_1,param_3);
      local_res8[0] = *(undefined1 *)(param_1 + 0x5c0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x458,local_res8);
      if (param_3 == '\0') {
        uVar5 = 0xbf800000;
      }
      else {
        uVar5 = 0;
      }
      TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x490,uVar5);
    }
    FUN_1411299c0(param_1);
  }
  return;
}



// FUNCTION 141137790 FUN_141137790 body=191 status=ok
// SIG undefined FUN_141137790(void)

void FUN_141137790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_3,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_4,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_5,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_6,1,0);
  }
  return;
}



// FUNCTION 141137850 FUN_141137850 body=243 status=ok
// SIG undefined FUN_141137850(void)

void FUN_141137850(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar5 = 0;
  lVar4 = lVar5;
  lVar3 = lVar5;
  if (lVar2 != 0) {
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar2);
    lVar4 = *(longlong *)(lVar2 + 400);
  }
  if ((lVar4 != 0) && (lVar4 = FUN_1424503b0(), lVar4 != 0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_140cfbfb0(lVar4);
    }
  }
  if ((lVar3 != 0) && (lVar5 != 0)) {
    FUN_140d28af0(lVar5);
    FUN_140ccce90(lVar3,*(int *)(lVar5 + 0x140) + 1);
    FUN_140cd09a0(lVar3,*(undefined1 *)(lVar5 + 0x310));
    if (*(longlong *)(lVar3 + 0x598) != 0) {
      FUN_141138800(param_1,lVar3,lVar5);
    }
  }
  return;
}



// FUNCTION 141137950 FUN_141137950 body=1406 status=ok
// SIG undefined FUN_141137950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141137950(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_208 [32];
  undefined4 local_1e8 [2];
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined4 *local_1c8;
  undefined1 *puStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined4 local_b0 [4];
  undefined1 local_a0 [8];
  longlong *local_98;
  char local_88;
  undefined1 local_80 [8];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar6 = FUN_1404b03b0();
  FText::operator=(param_1 + 0xa70,uVar6);
  cVar5 = FUN_141111180(param_1);
  if (cVar5 == '\0') {
    uVar6 = FUN_1404b03b0();
    FText::operator=(param_1 + 0xa70,uVar6);
    goto LAB_141137dcb;
  }
  FText::FText(local_1e0);
  if (param_2 == '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"{0} is navigating menus.",L"MainMenu",L"InTheMenusText");
    FText::operator=(local_1e0,uVar6);
LAB_141137ad4:
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_100 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  else {
    if (param_2 == '\x01') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"{0} is looking for players.",L"MainMenu",
                         L"LookingForPlayersText");
      FText::operator=(local_1e0,uVar6);
      local_100 = local_118;
      goto LAB_141137ad4;
    }
    if (param_2 == '\x02') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"{0} is changing their options.",L"MainMenu",
                         L"ChangingOptionsText");
      FText::operator=(local_1e0,uVar6);
      local_100 = local_130;
      goto LAB_141137ad4;
    }
    if (param_2 == '\x03') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"{0} is setting up the game.",L"MainMenu",
                         L"SettingUpTheGameText");
      FText::operator=(local_1e0,uVar6);
      local_100 = local_148;
      goto LAB_141137ad4;
    }
    if (param_2 == '\x04') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_168,L"{0} is picking a character.",L"MainMenu",
                         L"PickingACharacterText");
      FText::operator=(local_1e0,uVar6);
      local_100 = local_160;
      goto LAB_141137ad4;
    }
  }
  FUN_14110d290(param_1,local_1a8);
  cVar5 = FText::IsEmpty(local_1a8);
  if (cVar5 == '\0') {
    lVar7 = FText::FText(local_c8,local_1a8);
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_d8,local_1e0);
    local_b0[0] = 4;
    FText::FText(local_a0,lVar7);
    local_1b8 = *puVar8;
    local_1c8 = local_b0;
    puStack_1c0 = local_80;
    local_1b0 = puVar8[1];
    local_88 = '\x01';
    if (local_1b0 != 0) {
      LOCK();
      *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_190,&local_1c8);
    uVar6 = FText::Format(local_f0,&local_1b8,uVar6);
    FText::FText(local_180,uVar6);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e8 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_190);
    if (local_88 != '\0') {
      local_88 = '\0';
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_98 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    plVar10 = (longlong *)puVar8[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = *(longlong **)(lVar7 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FText::operator=(param_1 + 0xa70,local_180);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_178 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1a0 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1d8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
LAB_141137dcb:
  lVar7 = *(longlong *)(param_1 + 0x988);
  if (lVar7 != 0) {
    local_1e8[0] = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(lVar7 + 0x6c8) != 0) {
      FUN_14170c210(local_1e8);
      uVar9 = local_1e8[0];
    }
    local_1e8[0] = 0xffffffff;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar8 + 1) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_78[0] = &LAB_1411075e0;
    FUN_14208c260(lVar7,local_78);
    if (local_38 != 0) {
      plVar10 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar10 = local_48;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_1e8[0]);
  }
  return;
}



// FUNCTION 141137ed0 FUN_141137ed0 body=113 status=ok
// SIG undefined FUN_141137ed0(void)

void FUN_141137ed0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      uVar2 = FUN_140bb7f90(lVar3);
      FUN_141137950(param_1,uVar2);
    }
  }
  return;
}



// FUNCTION 141137f50 FUN_141137f50 body=168 status=ok
// SIG undefined FUN_141137f50(void)

void FUN_141137f50(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  
  if (param_3 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
    if (param_2 == 0) {
      (**(code **)(*plVar1 + 8))(plVar1,0,0,0);
      (**(code **)(*plVar1 + 0x20))(plVar1,1);
    }
    else if (plVar1[0x28] != param_2) {
      (**(code **)(*plVar1 + 0x20))(plVar1,1);
      (**(code **)(*plVar1 + 8))(plVar1,param_2,0,0);
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
    if (plVar1[0x2a] != param_4) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_4);
    }
  }
  return;
}



// FUNCTION 141138000 FUN_141138000 body=206 status=ok
// SIG undefined FUN_141138000(void)

void FUN_141138000(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_1 + 0x6b0) == 0) {
    return;
  }
  uVar6 = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (((cVar3 == '\0') || (lVar4 = FWeakObjectPtr::Get(param_1 + 0x59c), *(int *)(lVar4 + 0x48) < 1)
      ) || (plVar1 = *(longlong **)
                      (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8),
           plVar1 == (longlong *)0x0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x278))();
  }
  if (*(char *)(param_1 + 0x708) != '\0') {
    if (lVar4 != 0) {
      lVar5 = FUN_14137f3f0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar6 = 1;
      if (bVar2) goto LAB_1411380b2;
    }
    uVar6 = 2;
  }
LAB_1411380b2:
  FUN_141131900(param_1,uVar6);
  return;
}



// FUNCTION 1411380d0 FUN_1411380d0 body=642 status=ok
// SIG undefined FUN_1411380d0(void)

void FUN_1411380d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  
  if (((*(longlong *)(param_1 + 0x498) != 0) && (lVar1 = *(longlong *)(param_1 + 0x488), lVar1 != 0)
      ) && (*(longlong *)(param_1 + 0x490) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      local_60 = DAT_1468b5d98;
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
    }
    else {
      local_60 = *(float *)(lVar2 + 0x228);
      local_68 = *(float *)(lVar2 + 0x220);
      fStack_64 = *(float *)(lVar2 + 0x224);
    }
    fVar10 = local_60;
    fVar8 = fStack_64;
    fVar6 = local_68;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 0x168);
    if (lVar2 == 0) {
      local_60 = DAT_1468b5d98;
      local_68 = DAT_1468b5d90;
      fStack_64 = DAT_1468b5d94;
    }
    else {
      local_60 = *(float *)(lVar2 + 0x228);
      local_68 = *(float *)(lVar2 + 0x220);
      fStack_64 = *(float *)(lVar2 + 0x224);
    }
    fVar6 = fVar6 - local_68;
    fVar8 = fVar8 - fStack_64;
    fVar10 = fVar10 - local_60;
    fVar3 = fVar8 * fVar8 + fVar6 * fVar6 + fVar10 * fVar10;
    fVar7 = fVar6;
    fVar9 = fVar8;
    fVar4 = fVar10;
    if ((fVar3 != 1.0) &&
       (fVar7 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, fVar4 = DAT_1468b5d98, 1e-08 <= fVar3)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar6 * fVar4;
      fVar9 = fVar8 * fVar4;
      fVar4 = fVar10 * fVar4;
    }
    fVar8 = (*(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x458)) /
            (*(float *)(param_1 + 0x45c) - *(float *)(param_1 + 0x458));
    fVar6 = 0.0;
    if ((0.0 <= fVar8) && (fVar6 = fVar8, 1.0 <= fVar8)) {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 * (*(float *)(param_1 + 0x468) - *(float *)(param_1 + 0x464)) +
            *(float *)(param_1 + 0x464);
    local_50 = fVar4 * fVar6 + local_60;
    _local_58 = CONCAT44(fVar9 * fVar6 + fStack_64,fVar7 * fVar6 + local_68);
    FUN_14223c850(lVar1,&local_58,0,0,0);
  }
  return;
}



// FUNCTION 141138360 FUN_141138360 body=435 status=ok
// SIG undefined FUN_141138360(void)

void FUN_141138360(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x59c);
      cVar3 = *(char *)(lVar5 + 0xb8);
      if (((*(longlong *)(param_1 + 0x988) == 0) ||
          (*(longlong *)(*(longlong *)(param_1 + 0x988) + 0x6c8) == 0)) ||
         (cVar4 = FUN_141087490(), cVar4 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((*(longlong *)(param_1 + 0x988) == 0) ||
          (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x988) + 0x6c8), lVar5 == 0)) ||
         (*(char *)(lVar5 + 0x3cd) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar1) && (cVar3 == '\x01')) || (bVar2)) {
        if (*(char *)(param_1 + 0xa3a) == '\0') {
          *(undefined1 *)(param_1 + 0xa3a) = 1;
          local_18[0] = 0;
          local_18[1] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"transparentOn",0xe,0x3f);
          FUN_142088910(*(undefined8 *)(param_1 + 0xa28),local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          *(undefined4 *)(param_1 + 0xa30) = 0x3f800000;
          return;
        }
      }
      else if (*(char *)(param_1 + 0xa3a) != '\0') {
        *(undefined1 *)(param_1 + 0xa3a) = 0;
        local_18[0] = 0;
        local_18[1] = 0xf;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xf,"transparentOff",0xf,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0xa28),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(param_1 + 0xa30) = 0;
      }
    }
  }
  return;
}



// FUNCTION 141138520 FUN_141138520 body=728 status=ok
// SIG undefined FUN_141138520(void)

void FUN_141138520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  int local_res8 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x770) != 0) {
    cVar5 = FUN_1411101f0();
    if ((cVar5 == '\0') || (cVar5 = FUN_142ebe120(param_1), cVar5 != '\0')) {
      lVar4 = **(longlong **)(param_1 + 0x770);
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Select Character",L"LoadGameMenu",L"MenuTitleText");
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            return;
          }
        }
      }
    }
    else {
      local_res8[0] = -1;
      if ((*(longlong *)(param_1 + 0x7b0) == 0) ||
         (cVar5 = FUN_142710360(*(longlong *)(param_1 + 0x7b0),local_res8), cVar5 == '\0')) {
        lVar4 = **(longlong **)(param_1 + 0x770);
        uVar6 = FUN_1404b03b0();
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
        return;
      }
      lVar4 = **(longlong **)(param_1 + 0x770);
      if (local_res8[0] == 0) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,L"P1 Select Character",L"LoadGameMenu",L"MenuTitleP1Text");
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
      }
      else if (local_res8[0] == 1) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_58,L"P2 Select Character",L"LoadGameMenu",L"MenuTitleP2Text");
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
        local_38 = local_50;
      }
      else if (local_res8[0] == 2) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_70,L"P3 Select Character",L"LoadGameMenu",L"MenuTitleP3Text");
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
        local_38 = local_68;
      }
      else {
        if (local_res8[0] != 3) {
          uVar6 = FUN_1404b03b0();
          (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
          return;
        }
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_88,L"P4 Select Character",L"LoadGameMenu",L"MenuTitleP4Text");
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar6,1,0);
        local_38 = local_80;
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141138800 FUN_141138800 body=256 status=ok
// SIG undefined FUN_141138800(void)

void FUN_141138800(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_res10 [24];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x598) != 0)) && (param_3 != 0)) {
    iVar4 = *(int *)(param_3 + 0x140);
    if ((-1 < iVar4) && (iVar4 < *(int *)(param_3 + 0x158))) {
      lVar2 = (longlong)iVar4 * 0x38 + *(longlong *)(param_3 + 0x150);
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      FUN_140c598a0(lVar2,&local_28);
      puVar1 = (undefined8 *)FUN_140d3bd80(lVar2,local_res10);
      FUN_142f62640(*(undefined8 *)(param_2 + 0x598),&local_28,*puVar1);
      TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
      ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(&local_28);
      return;
    }
    local_28 = 0;
    local_20 = 0;
    FUN_142f62640(*(longlong *)(param_2 + 0x598),&local_28);
    if ((int)local_20 != 0) {
      plVar3 = (longlong *)(local_28 + 0x10);
      iVar4 = (int)local_20;
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141138900 FUN_141138900 body=2873 status=ok
// SIG undefined FUN_141138900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141138900(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_468 [32];
  undefined2 local_448;
  undefined4 local_438;
  int local_434;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  longlong *local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined4 *local_3e8;
  undefined1 *puStack_3e0;
  LARGE_INTEGER local_3d8 [2];
  longlong local_3c8;
  longlong *plStack_3c0;
  undefined1 local_3b8 [8];
  longlong *local_3b0;
  longlong local_398;
  longlong *plStack_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  longlong *plStack_370;
  longlong *local_368;
  undefined1 *puStack_360;
  undefined4 *local_358;
  int *piStack_350;
  longlong local_348;
  undefined1 local_338 [16];
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [24];
  undefined1 *local_298 [2];
  undefined1 local_288 [32];
  undefined8 local_268;
  undefined4 local_258;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 local_1f8 [24];
  undefined4 local_1e0 [4];
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  char local_1b8;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8 [2];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  if (param_1[0x149] == 0) {
    return;
  }
  if (param_1[0x14a] == 0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  piVar1 = (int *)(param_1[0x14a] + 8);
  LOCK();
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (iVar5 < 1) {
    return;
  }
  if (param_1[0x14c] == 0) {
    return;
  }
  if (param_1[0x14d] == 0) {
    return;
  }
  piVar1 = (int *)(param_1[0x14d] + 8);
  LOCK();
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (iVar5 < 1) {
    return;
  }
  FText::FText(local_3b8);
  local_434 = 0;
  local_430 = FUN_140f9aee0(param_1);
  if (local_430 == 0) goto LAB_141139032;
  local_438 = 0;
  cVar4 = FUN_141111180(param_1);
  if (cVar4 == '\0') {
    uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_142f6caf0(uVar13);
    if (lVar6 != 0) {
      lVar7 = FUN_142f59790(lVar6);
      if (lVar7 == 0) {
        iVar5 = FUN_142f5a870(lVar6);
        if (-1 < iVar5) {
          local_428 = 0;
          local_420 = 0;
          FUN_142f5dfe0(lVar6,&local_428,0);
          lVar6 = local_428;
          if ((iVar5 < (int)local_420) &&
             (lVar7 = (longlong)iVar5 * 8, *(longlong *)(local_428 + lVar7) != 0)) {
            lVar8 = FUN_142f71d80();
            lVar3 = local_428;
            lVar6 = *(longlong *)(lVar6 + lVar7);
            lVar14 = lVar6;
            if (lVar6 != 0) {
LAB_141138b40:
              if (lVar14 != lVar8) goto code_r0x000141138b45;
              if (lVar6 != 0) {
                plVar15 = plVar12;
                if (*(longlong *)(local_428 + lVar7) != 0) {
                  plVar9 = (longlong *)FUN_142f71d80();
                  for (plVar11 = *(longlong **)(lVar3 + lVar7);
                      (plVar15 = plVar12, plVar11 != (longlong *)0x0 &&
                      (plVar15 = *(longlong **)(lVar3 + lVar7), plVar11 != plVar9));
                      plVar11 = (longlong *)plVar11[6]) {
                  }
                }
                lVar6 = plVar15[0x1f];
                if (lVar6 == 0) {
                  (**(code **)(*plVar15 + 0x368))(plVar15);
                  lVar6 = plVar15[0x1f];
                  if (lVar6 != 0) goto LAB_141138bad;
                }
                else {
LAB_141138bad:
                  lVar7 = FUN_141437870();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    local_438 = FUN_1409ac010(lVar6);
                  }
                }
              }
            }
          }
LAB_141138bef:
          if (local_428 != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        plVar15 = *(longlong **)(lVar7 + 0x10);
        if (plVar15 != (longlong *)0x0) {
          lVar6 = plVar15[0x1f];
          if (lVar6 == 0) {
            (**(code **)(*plVar15 + 0x368))(plVar15);
            lVar6 = plVar15[0x1f];
            if (lVar6 == 0) goto LAB_141138c6f;
          }
          lVar7 = FUN_141437870();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_438 = FUN_1409ac010(lVar6);
          }
        }
      }
    }
  }
  else {
    FUN_140bba620(local_430,&local_3c8,0);
    if (local_3c8 != 0) {
      local_398 = local_3c8;
      plStack_390 = plStack_3c0;
      if (plStack_3c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_3c0 + 1) = (int)plStack_3c0[1] + 1;
        UNLOCK();
      }
      lVar6 = FUN_140bb7f10(local_430,&local_398);
      plVar15 = plStack_390;
      if (plStack_390 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_390 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_390)(plStack_390);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if (lVar6 != 0) {
        local_438 = *(undefined4 *)(lVar6 + 0x58);
      }
    }
    if (plStack_3c0 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_3c0 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_3c0)(plStack_3c0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_3c0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_3c0 + 8))(plStack_3c0,1);
        }
      }
    }
  }
LAB_141138c6f:
  local_368 = &local_430;
  local_268 = 0;
  puStack_360 = local_3b8;
  local_258 = 0;
  local_358 = &local_438;
  piStack_350 = &local_434;
  puVar10 = (undefined8 *)FUN_140438ef0(0x28,local_288);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_143ff7760;
    puVar10[1] = local_368;
    puVar10[2] = puStack_360;
    puVar10[3] = local_358;
    puVar10[4] = piStack_350;
  }
  local_408 = 0;
  local_298[0] = &LAB_1411076e0;
  local_400 = 0x3a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
  local_448 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_408,0x3a,"UGFxOakMainMenu::UpdatePlotMissionName::ChapterNumberTask");
  FUN_140cdf730(local_f8,&local_408,local_298);
  QueryPerformanceCounter(local_3d8);
  local_f8[0] = local_3d8[0];
  plVar11 = (longlong *)operator_new(0x18);
  plVar15 = plVar12;
  if (plVar11 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar11);
    *(undefined1 *)(plVar11 + 2) = 0;
    plVar15 = plVar11;
  }
  plVar11 = (longlong *)operator_new(0x18);
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *plVar11 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    plVar11[2] = (longlong)plVar15;
    plVar12 = plVar11;
  }
  local_418 = plVar15;
  local_410 = plVar12;
  SharedPointerInternals::EnableSharedFromThis(&local_418,plVar15,plVar15);
  *(undefined1 *)(local_418 + 2) = 1;
  local_3f0 = (longlong *)local_418[1];
  local_348 = *local_418;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
    UNLOCK();
  }
  local_3f8 = 0;
  local_38 = local_348;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_3f0);
  plVar12 = local_3f0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_3f0 + 1;
    lVar6 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  local_178 = (longlong *)0x0;
  local_168 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_198);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_1444f8620;
    puVar10[1] = local_f8;
  }
  local_1a8[0] = &LAB_140cee980;
  local_158 = local_418;
  local_150 = local_410;
  if (local_410 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_410 + 1) = (int)local_410[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_148,local_1a8);
  local_218 = 0;
  local_208 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x70,local_238);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar10[2] = local_158;
    puVar10[3] = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar10 + 4,local_148);
  }
  local_248[0] = &LAB_140cee8d0;
  if (local_108 != 0) {
    plVar12 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar12 = local_118;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar12 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_150 + 1;
    lVar6 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_168 != 0) {
    plVar12 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar12 = local_178;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar12 = local_410;
  if (local_410 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_410 + 1;
    lVar6 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_410)(local_410);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FUN_142032330(local_248);
  FUN_140d1b3a0(local_f8);
  FUN_140ce1dc0(local_f8);
LAB_141139032:
  if ((local_434 < 1) || (cVar4 = FText::IsEmpty(local_3b8), cVar4 != '\0')) {
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_2e0,&DAT_1446b5d78,L"MainMenu",L"DefaultChapterTitleText");
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x14b,uVar13,1,0);
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2d8 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2d8)(local_2d8);
        LOCK();
        piVar1 = (int *)((longlong)local_2d8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2d8 + 8))(local_2d8,1);
        }
      }
    }
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_2c8,L"You want to hear a story?",L"MainMenu",L"DefaultChapterBodyText"
                       );
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x148,uVar13,1,0);
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2c0 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
  }
  else {
    local_378 = 0;
    plStack_370 = (longlong *)0x0;
    lVar6 = FText::AsNumber(local_1f8,local_434,0,&local_378);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_2f8,L"Chapter {0}",L"MainMenu",L"ChapterNumberText");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_2b0,uVar13);
    local_1e0[0] = 4;
    FText::FText(local_1d0,lVar6);
    local_388 = *puVar10;
    local_3e8 = local_1e0;
    puStack_3e0 = local_1b0;
    local_380 = puVar10[1];
    local_1b8 = '\x01';
    if (local_380 != 0) {
      LOCK();
      *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
      UNLOCK();
    }
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_338,&local_3e8);
    uVar13 = FText::Format(local_310,&local_388,uVar13);
    FText::FText(local_328,uVar13);
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_308 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar1 = (int *)((longlong)local_308 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_338);
    if ((local_1b8 != '\0') && (local_1b8 = '\0', local_1c8 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_1c8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar12 = (longlong *)puVar10[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x14b,local_328,1,0);
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_320 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)local_320 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_320 + 8))(local_320,1);
        }
      }
    }
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2f0 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    plVar12 = plStack_370;
    if (plStack_370 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_370 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_370)(plStack_370);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x148,local_3b8,1,0);
  }
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_3b0 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar1 = (int *)((longlong)local_3b0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  return;
code_r0x000141138b45:
  lVar14 = *(longlong *)(lVar14 + 0x30);
  if (lVar14 == 0) goto LAB_141138bef;
  goto LAB_141138b40;
}



// FUNCTION 141139440 FUN_141139440 body=1915 status=ok
// SIG undefined FUN_141139440(void)

void FUN_141139440(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_res8 [2];
  longlong local_1c8 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x788) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x790) == 0) {
    return;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x6d8) <= param_2)) goto LAB_14113983f;
  lVar11 = (longlong)param_2 * 0x1c8 + *(longlong *)(param_1 + 0x6d0);
  if (*(int *)(lVar11 + 0x38) != 3) {
    if (*(int *)(lVar11 + 0x38) - 1U < 2) {
      local_1c8[0xc] = 0;
      local_1c8[0xd] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 0xc,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8[0xc],3,&DAT_1446a5d1c,3,0x3f);
      local_1c8[10] = 0;
      local_1c8[0xb] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 10,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8[10],3,&DAT_1446a5d34,3,0x3f);
      local_1c8[8] = 0;
      local_1c8[9] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 8,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8[8],3,&DAT_1446a5db4,3,0x3f);
      local_1c8[6] = 0;
      local_1c8[7] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 6,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8[6],3,&DAT_1446a5dcc,3,0x3f);
      local_1c8[4] = 0;
      local_1c8[5] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 4,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_1c8[4],3,&DAT_1446a5df4,3,0x3f);
      uVar5 = FText::FromString(local_40,local_1c8 + 0xc);
      uVar6 = FText::FromString(local_58,local_1c8 + 10);
      uVar7 = FText::FromString(local_70,local_1c8 + 8);
      uVar8 = FText::FromString(local_88,local_1c8 + 6);
      uVar9 = FText::FromString(local_a0,local_1c8 + 4);
      FUN_141137790(*(undefined8 *)(param_1 + 0x790),uVar9,uVar8,uVar7,uVar6,uVar5);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      if (local_1c8[4] != 0) {
        FMemory::Free();
      }
      if (local_1c8[6] != 0) {
        FMemory::Free();
      }
      if (local_1c8[8] != 0) {
        FMemory::Free();
      }
      if (local_1c8[10] != 0) {
        FMemory::Free();
      }
      if (local_1c8[0xc] != 0) {
        FMemory::Free();
      }
    }
    goto LAB_14113983f;
  }
  cVar4 = FText::IsEmpty(lVar11 + 0x78);
  bVar14 = cVar4 != '\0';
  if (bVar14) {
    local_1c8[2] = 0;
    local_1c8[3] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_1c8[2],3,&DAT_1446a5c5c,3,0x3f);
    uVar5 = FText::FromString(local_d0,local_1c8 + 2);
  }
  else {
    uVar5 = FText::FText(local_b8,lVar11 + 0x78);
  }
  cVar4 = FText::IsEmpty(lVar11 + 0x90);
  bVar15 = cVar4 != '\0';
  if (bVar15) {
    local_1c8[0] = 0;
    local_1c8[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_1c8[0],3,&DAT_1446a5cdc,3,0x3f);
    uVar6 = FText::FromString(local_100,local_1c8);
  }
  else {
    uVar6 = FText::FText(local_e8,lVar11 + 0x90);
  }
  if (*(int *)(lVar11 + 0x70) == 0) {
    pwVar13 = L"VaultHunterText";
    pwVar12 = L"LoadGameMenu";
    pwVar10 = L"Vault Hunter";
LAB_1411395fc:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_148,pwVar10,pwVar12,pwVar13);
  }
  else {
    if (*(int *)(lVar11 + 0x70) == 1) {
      pwVar13 = L"TrueVaultHunterText";
      pwVar12 = L"LoadGameMenu";
      pwVar10 = L"True Vault Hunter";
      goto LAB_1411395fc;
    }
    uVar7 = FUN_1404b03b0();
    FText::FText(local_148,uVar7);
  }
  uVar7 = FUN_141102000(local_res8,local_118,lVar11 + 0x68);
  uVar8 = FText::FromString(local_130,lVar11 + 0x40);
  FUN_141137790(*(undefined8 *)(param_1 + 0x790),uVar8,uVar6,uVar5,local_148,uVar7);
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if ((bVar15) && (local_f8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  if ((bVar15) && (local_1c8[0] != 0)) {
    FMemory::Free();
  }
  if ((!bVar15) && (local_e0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if ((bVar14) && (local_c8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if ((bVar14) && (local_1c8[2] != 0)) {
    FMemory::Free();
  }
  if ((!bVar14) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
LAB_14113983f:
  lVar11 = *(longlong *)(param_1 + 0x790);
  if (*(char *)(lVar11 + 0x198) == '\0') {
    local_1c8[0xe] = 0;
    local_1c8[0xf] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 0xe,0);
    FGenericPlatformString::Memcpy(local_1c8[0xe],L"show",10);
    FUN_142088910(lVar11,local_1c8 + 0xe);
    if (local_1c8[0xe] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(lVar11 + 0x198) = 1;
  }
  return;
}



// FUNCTION 141139bc0 FUN_141139bc0 body=151 status=ok
// SIG undefined FUN_141139bc0(void)

void FUN_141139bc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong local_res10 [3];
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != 0) {
    local_10 = local_res10;
    local_res10[0] = param_2;
    local_18 = param_3;
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x77c);
    bVar2 = local_res10[0] == lVar1;
    if (((bVar2) && (*(char *)(param_1 + 0x778) == '\x01')) ||
       ((!bVar2 && (*(char *)(param_1 + 0x778) == '\x02')))) {
      FUN_141102f40(&local_18,param_1 + 0x818);
      return;
    }
    if ((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) {
      lVar1 = param_1 + 0x8e8;
      if (!bVar2) {
        lVar1 = param_1 + 0x9b8;
      }
      FUN_141102f40(&local_18,lVar1);
    }
  }
  return;
}



// FUNCTION 141139c60 FUN_141139c60 body=310 status=ok
// SIG undefined FUN_141139c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141139c60(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x7c4) == '\0') {
    uStack_bc = CONCAT31(uStack_bc._1_3_,param_3);
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_c8 = param_1;
    uStack_c0 = param_2;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(puVar1 + 2) = uStack_c0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
    }
    local_b8[0] = &LAB_141107430;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar3 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar3 = local_88;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141139da0 _Copy body=67 status=ok
// SIG undefined _Copy(void)

void std::
     _Func_impl_no_alloc<`UCG2BackendController_OutpostCreation::GeneratePathsFromEntity'::`46'::<lambda_1>,void,FGuid_const_&,UCG2BackendController_OutpostCreation::FCG2BackendController_EntitiesInPath_&,int>
     ::_Copy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  *puVar2 = &PTR__Copy_1446ba048;
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



// FUNCTION 141139df0 FUN_141139df0 body=15 status=ok
// SIG undefined FUN_141139df0(void)

void FUN_141139df0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x48);
    return;
  }
  return;
}



// FUNCTION 141139e00 FUN_141139e00 body=9 status=ok
// SIG undefined FUN_141139e00(void)

void FUN_141139e00(longlong param_1)

{
  FUN_1410fda80(param_1 + 8);
  return;
}



// FUNCTION 141139e50 thunk_FUN_142ebe4a0 body=5 status=ok
// SIG undefined thunk_FUN_142ebe4a0(void)

void thunk_FUN_142ebe4a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStackX_8 [32];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,auStackX_8);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    FUN_142f001d0(uVar2);
    return;
  }
  return;
}



// FUNCTION 141139e60 FUN_141139e60 body=194 status=ok
// SIG undefined FUN_141139e60(void)

void FUN_141139e60(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  if (((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) && (*(longlong *)(param_1 + 0x600) != 0)) {
    pwVar3 = L"compareFocusList2";
    if (*(char *)(param_1 + 0x778) == '\x03') {
      pwVar3 = L"compareFocusList1";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar3 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar3[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141139f70 FUN_141139f70 body=218 status=ok
// SIG undefined FUN_141139f70(void)

undefined8 *
FUN_141139f70(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_14428aed0;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 14113a050 FUN_14113a050 body=237 status=ok
// SIG undefined FUN_14113a050(void)

void FUN_14113a050(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x18;
    do {
      FText::FText(lVar2,param_2 + -0x18);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar2 + 0x18,param_2);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      iVar1 = *(int *)(param_2 + 0x30);
      _Src = *(void **)(param_2 + 0x28);
      *(int *)(lVar2 + 0x48) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar2 + 0x4c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(lVar2 + 0x40,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar2 + 0x40),_Src,(longlong)iVar1 << 3);
      }
      lVar2 = lVar2 + 0x50;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14113a140 FUN_14113a140 body=666 status=ok
// SIG undefined FUN_14113a140(void)

int * FUN_14113a140(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
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
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_48 = 0;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  local_40 = 0;
  puVar11 = (uint *)((longlong)plVar3 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_48);
  puVar11[6] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar5 != -1) {
        do {
          iVar6 = iVar5;
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar11) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
          iVar6 = iVar7;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar3 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar3 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_14113a3b6;
    }
  }
  cVar2 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar9;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_14113a3b6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14113a3e0 FUN_14113a3e0 body=917 status=ok
// SIG undefined FUN_14113a3e0(void)

longlong FUN_14113a3e0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14113a48f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_14113a48f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_14113a4a4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_14113a4a4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_14113a62d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413787a0();
LAB_14113a62d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413787a0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14113a6aa;
  }
  lVar12 = 0;
LAB_14113a6aa:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 14113a780 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x00014113a7c6:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_141141720(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_141141720(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014113a7c6;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
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
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_141141720(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_141141720(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14113a940 FUN_14113a940 body=1653 status=ok
// SIG undefined FUN_14113a940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113a940(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  
  iVar26 = (param_2 + -2) / 2;
  if (-1 < iVar26) {
    iVar28 = iVar26 * 2 + 1;
    iVar2 = iVar28;
    iVar29 = iVar26;
joined_r0x00014113a986:
    do {
      if (iVar28 < param_2) {
        iVar28 = iVar26 * 2;
        iVar27 = iVar28 + 1;
        if (iVar28 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar27 * 0x17 + 0xf] <
              (longlong)param_1[(longlong)iVar28 * 0x17 + 0x3d]) {
            iVar27 = iVar28;
          }
          iVar27 = iVar27 + 1;
        }
        puVar30 = param_1 + (longlong)iVar27 * 0x17;
        puVar31 = param_1 + (longlong)iVar26 * 0x17;
        if ((longlong)puVar30[0xf] < (longlong)puVar31[0xf]) {
          if (puVar31 != puVar30) {
            uVar3 = *puVar31;
            uVar4 = puVar31[1];
            uVar1 = puVar31[0x16];
            uVar5 = puVar31[2];
            uVar6 = puVar31[3];
            uVar7 = puVar31[4];
            uVar8 = puVar31[5];
            uVar9 = puVar31[6];
            uVar10 = puVar31[7];
            uVar11 = puVar31[8];
            uVar12 = puVar31[9];
            uVar13 = puVar31[10];
            uVar14 = puVar31[0xb];
            uVar15 = puVar31[0xc];
            uVar16 = puVar31[0xd];
            uVar17 = puVar31[0xe];
            uVar18 = puVar31[0xf];
            uVar19 = puVar31[0x10];
            uVar20 = puVar31[0x11];
            uVar21 = puVar31[0x12];
            uVar22 = puVar31[0x13];
            uVar23 = puVar31[0x14];
            uVar24 = puVar31[0x15];
            uVar25 = puVar30[1];
            *puVar31 = *puVar30;
            puVar31[1] = uVar25;
            uVar25 = puVar30[3];
            puVar31[2] = puVar30[2];
            puVar31[3] = uVar25;
            uVar25 = puVar30[5];
            puVar31[4] = puVar30[4];
            puVar31[5] = uVar25;
            uVar25 = puVar30[7];
            puVar31[6] = puVar30[6];
            puVar31[7] = uVar25;
            uVar25 = puVar30[9];
            puVar31[8] = puVar30[8];
            puVar31[9] = uVar25;
            uVar25 = puVar30[0xb];
            puVar31[10] = puVar30[10];
            puVar31[0xb] = uVar25;
            uVar25 = puVar30[0xd];
            puVar31[0xc] = puVar30[0xc];
            puVar31[0xd] = uVar25;
            uVar25 = puVar30[0xf];
            puVar31[0xe] = puVar30[0xe];
            puVar31[0xf] = uVar25;
            uVar25 = puVar30[0x11];
            puVar31[0x10] = puVar30[0x10];
            puVar31[0x11] = uVar25;
            uVar25 = puVar30[0x13];
            puVar31[0x12] = puVar30[0x12];
            puVar31[0x13] = uVar25;
            uVar25 = puVar30[0x15];
            puVar31[0x14] = puVar30[0x14];
            puVar31[0x15] = uVar25;
            puVar31[0x16] = puVar30[0x16];
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            puVar30[4] = uVar7;
            puVar30[5] = uVar8;
            puVar30[6] = uVar9;
            puVar30[7] = uVar10;
            puVar30[8] = uVar11;
            puVar30[9] = uVar12;
            puVar30[10] = uVar13;
            puVar30[0xb] = uVar14;
            puVar30[0xc] = uVar15;
            puVar30[0xd] = uVar16;
            puVar30[0xe] = uVar17;
            puVar30[0xf] = uVar18;
            puVar30[0x10] = uVar19;
            puVar30[0x11] = uVar20;
            puVar30[0x12] = uVar21;
            puVar30[0x13] = uVar22;
            puVar30[0x14] = uVar23;
            puVar30[0x15] = uVar24;
            puVar30[0x16] = uVar1;
          }
          iVar28 = iVar27 * 2 + 1;
          iVar26 = iVar27;
          goto joined_r0x00014113a986;
        }
      }
      iVar28 = iVar2 + -2;
      iVar26 = iVar29 + -1;
      iVar2 = iVar28;
      iVar29 = iVar26;
    } while (-1 < iVar26);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar30 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar30) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x16];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = param_1[0x14];
        uVar24 = param_1[0x15];
        uVar25 = puVar30[1];
        *param_1 = *puVar30;
        param_1[1] = uVar25;
        uVar25 = puVar30[3];
        param_1[2] = puVar30[2];
        param_1[3] = uVar25;
        uVar25 = puVar30[5];
        param_1[4] = puVar30[4];
        param_1[5] = uVar25;
        uVar25 = puVar30[7];
        param_1[6] = puVar30[6];
        param_1[7] = uVar25;
        uVar25 = puVar30[9];
        param_1[8] = puVar30[8];
        param_1[9] = uVar25;
        uVar25 = puVar30[0xb];
        param_1[10] = puVar30[10];
        param_1[0xb] = uVar25;
        uVar25 = puVar30[0xd];
        param_1[0xc] = puVar30[0xc];
        param_1[0xd] = uVar25;
        uVar25 = puVar30[0xf];
        param_1[0xe] = puVar30[0xe];
        param_1[0xf] = uVar25;
        uVar25 = puVar30[0x11];
        param_1[0x10] = puVar30[0x10];
        param_1[0x11] = uVar25;
        uVar25 = puVar30[0x13];
        param_1[0x12] = puVar30[0x12];
        param_1[0x13] = uVar25;
        uVar25 = puVar30[0x15];
        param_1[0x14] = puVar30[0x14];
        param_1[0x15] = uVar25;
        param_1[0x16] = puVar30[0x16];
        *puVar30 = uVar3;
        puVar30[1] = uVar4;
        puVar30[2] = uVar5;
        puVar30[3] = uVar6;
        puVar30[4] = uVar7;
        puVar30[5] = uVar8;
        puVar30[6] = uVar9;
        puVar30[7] = uVar10;
        puVar30[8] = uVar11;
        puVar30[9] = uVar12;
        puVar30[10] = uVar13;
        puVar30[0xb] = uVar14;
        puVar30[0xc] = uVar15;
        puVar30[0xd] = uVar16;
        puVar30[0xe] = uVar17;
        puVar30[0xf] = uVar18;
        puVar30[0x10] = uVar19;
        puVar30[0x11] = uVar20;
        puVar30[0x12] = uVar21;
        puVar30[0x13] = uVar22;
        puVar30[0x14] = uVar23;
        puVar30[0x15] = uVar24;
        puVar30[0x16] = uVar1;
      }
      iVar26 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar26 * 2;
          iVar28 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if ((longlong)param_1[(longlong)iVar28 * 0x17 + 0xf] <
                (longlong)param_1[(longlong)iVar2 * 0x17 + 0x3d]) {
              iVar28 = iVar2;
            }
            iVar28 = iVar28 + 1;
          }
          puVar31 = param_1 + (longlong)iVar28 * 0x17;
          puVar32 = param_1 + (longlong)iVar26 * 0x17;
          if ((longlong)puVar32[0xf] <= (longlong)puVar31[0xf]) break;
          if (puVar32 != puVar31) {
            uVar3 = *puVar32;
            uVar4 = puVar32[1];
            uVar1 = puVar32[0x16];
            uVar5 = puVar32[2];
            uVar6 = puVar32[3];
            uVar7 = puVar32[4];
            uVar8 = puVar32[5];
            uVar9 = puVar32[6];
            uVar10 = puVar32[7];
            uVar11 = puVar32[8];
            uVar12 = puVar32[9];
            uVar13 = puVar32[10];
            uVar14 = puVar32[0xb];
            uVar15 = puVar32[0xc];
            uVar16 = puVar32[0xd];
            uVar17 = puVar32[0xe];
            uVar18 = puVar32[0xf];
            uVar19 = puVar32[0x10];
            uVar20 = puVar32[0x11];
            uVar21 = puVar32[0x12];
            uVar22 = puVar32[0x13];
            uVar23 = puVar32[0x14];
            uVar24 = puVar32[0x15];
            uVar25 = puVar31[1];
            *puVar32 = *puVar31;
            puVar32[1] = uVar25;
            uVar25 = puVar31[3];
            puVar32[2] = puVar31[2];
            puVar32[3] = uVar25;
            uVar25 = puVar31[5];
            puVar32[4] = puVar31[4];
            puVar32[5] = uVar25;
            uVar25 = puVar31[7];
            puVar32[6] = puVar31[6];
            puVar32[7] = uVar25;
            uVar25 = puVar31[9];
            puVar32[8] = puVar31[8];
            puVar32[9] = uVar25;
            uVar25 = puVar31[0xb];
            puVar32[10] = puVar31[10];
            puVar32[0xb] = uVar25;
            uVar25 = puVar31[0xd];
            puVar32[0xc] = puVar31[0xc];
            puVar32[0xd] = uVar25;
            uVar25 = puVar31[0xf];
            puVar32[0xe] = puVar31[0xe];
            puVar32[0xf] = uVar25;
            uVar25 = puVar31[0x11];
            puVar32[0x10] = puVar31[0x10];
            puVar32[0x11] = uVar25;
            uVar25 = puVar31[0x13];
            puVar32[0x12] = puVar31[0x12];
            puVar32[0x13] = uVar25;
            uVar25 = puVar31[0x15];
            puVar32[0x14] = puVar31[0x14];
            puVar32[0x15] = uVar25;
            puVar32[0x16] = puVar31[0x16];
            *puVar31 = uVar3;
            puVar31[1] = uVar4;
            puVar31[2] = uVar5;
            puVar31[3] = uVar6;
            puVar31[4] = uVar7;
            puVar31[5] = uVar8;
            puVar31[6] = uVar9;
            puVar31[7] = uVar10;
            puVar31[8] = uVar11;
            puVar31[9] = uVar12;
            puVar31[10] = uVar13;
            puVar31[0xb] = uVar14;
            puVar31[0xc] = uVar15;
            puVar31[0xd] = uVar16;
            puVar31[0xe] = uVar17;
            puVar31[0xf] = uVar18;
            puVar31[0x10] = uVar19;
            puVar31[0x11] = uVar20;
            puVar31[0x12] = uVar21;
            puVar31[0x13] = uVar22;
            puVar31[0x14] = uVar23;
            puVar31[0x15] = uVar24;
            puVar31[0x16] = uVar1;
          }
          iVar26 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar30 = puVar30 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14113afc0 FUN_14113afc0 body=1786 status=ok
// SIG undefined FUN_14113afc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113afc0(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined8 *puVar33;
  char *pcVar34;
  
  iVar29 = (param_2 + -2) / 2;
  if (-1 < iVar29) {
    iVar31 = iVar29 * 2 + 1;
    iVar5 = iVar31;
    iVar32 = iVar29;
    do {
      while (iVar31 < param_2) {
        iVar31 = iVar29 * 2;
        iVar30 = iVar31 + 1;
        if (iVar31 + 2 < param_2) {
          cVar2 = *(char *)(param_1 + (longlong)iVar30 * 0x17);
          if (*(char *)(param_1 + ((longlong)iVar31 + 2) * 0x17) == cVar2) {
LAB_14113b05a:
            bVar4 = *(longlong *)((longlong)(param_1 + (longlong)iVar30 * 0x17) + 0x78) <
                    (longlong)param_1[((longlong)iVar31 + 2) * 0x17 + 0xf];
          }
          else if (*(char *)(param_1 + ((longlong)iVar31 + 2) * 0x17) == '\x02') {
            bVar4 = true;
          }
          else {
            if (cVar2 != '\x02') goto LAB_14113b05a;
            bVar4 = false;
          }
          if (bVar4) {
            iVar30 = iVar31;
          }
          iVar30 = iVar30 + 1;
        }
        pcVar34 = (char *)(param_1 + (longlong)iVar29 * 0x17);
        pcVar1 = (char *)(param_1 + (longlong)iVar30 * 0x17);
        if (*pcVar34 == *(char *)(param_1 + (longlong)iVar30 * 0x17)) {
LAB_14113b0a3:
          if (*(longlong *)(pcVar34 + 0x78) <= *(longlong *)(pcVar1 + 0x78)) break;
        }
        else if (*pcVar34 != '\x02') {
          if (*(char *)(param_1 + (longlong)iVar30 * 0x17) == '\x02') break;
          goto LAB_14113b0a3;
        }
        if (pcVar34 != pcVar1) {
          uVar6 = *(undefined8 *)pcVar34;
          uVar7 = *(undefined8 *)(pcVar34 + 8);
          uVar3 = *(undefined8 *)(pcVar34 + 0xb0);
          uVar8 = *(undefined8 *)(pcVar34 + 0x10);
          uVar9 = *(undefined8 *)(pcVar34 + 0x18);
          uVar10 = *(undefined8 *)(pcVar34 + 0x20);
          uVar11 = *(undefined8 *)(pcVar34 + 0x28);
          uVar12 = *(undefined8 *)(pcVar34 + 0x30);
          uVar13 = *(undefined8 *)(pcVar34 + 0x38);
          uVar14 = *(undefined8 *)(pcVar34 + 0x40);
          uVar15 = *(undefined8 *)(pcVar34 + 0x48);
          uVar16 = *(undefined8 *)(pcVar34 + 0x50);
          uVar17 = *(undefined8 *)(pcVar34 + 0x58);
          uVar18 = *(undefined8 *)(pcVar34 + 0x60);
          uVar19 = *(undefined8 *)(pcVar34 + 0x68);
          uVar20 = *(undefined8 *)(pcVar34 + 0x70);
          uVar21 = *(undefined8 *)(pcVar34 + 0x78);
          uVar22 = *(undefined8 *)(pcVar34 + 0x80);
          uVar23 = *(undefined8 *)(pcVar34 + 0x88);
          uVar24 = *(undefined8 *)(pcVar34 + 0x90);
          uVar25 = *(undefined8 *)(pcVar34 + 0x98);
          uVar26 = *(undefined8 *)(pcVar34 + 0xa0);
          uVar27 = *(undefined8 *)(pcVar34 + 0xa8);
          uVar28 = *(undefined8 *)(pcVar1 + 8);
          *(undefined8 *)pcVar34 = *(undefined8 *)pcVar1;
          *(undefined8 *)(pcVar34 + 8) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x18);
          *(undefined8 *)(pcVar34 + 0x10) = *(undefined8 *)(pcVar1 + 0x10);
          *(undefined8 *)(pcVar34 + 0x18) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x28);
          *(undefined8 *)(pcVar34 + 0x20) = *(undefined8 *)(pcVar1 + 0x20);
          *(undefined8 *)(pcVar34 + 0x28) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x38);
          *(undefined8 *)(pcVar34 + 0x30) = *(undefined8 *)(pcVar1 + 0x30);
          *(undefined8 *)(pcVar34 + 0x38) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x48);
          *(undefined8 *)(pcVar34 + 0x40) = *(undefined8 *)(pcVar1 + 0x40);
          *(undefined8 *)(pcVar34 + 0x48) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x58);
          *(undefined8 *)(pcVar34 + 0x50) = *(undefined8 *)(pcVar1 + 0x50);
          *(undefined8 *)(pcVar34 + 0x58) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x68);
          *(undefined8 *)(pcVar34 + 0x60) = *(undefined8 *)(pcVar1 + 0x60);
          *(undefined8 *)(pcVar34 + 0x68) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x78);
          *(undefined8 *)(pcVar34 + 0x70) = *(undefined8 *)(pcVar1 + 0x70);
          *(undefined8 *)(pcVar34 + 0x78) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x88);
          *(undefined8 *)(pcVar34 + 0x80) = *(undefined8 *)(pcVar1 + 0x80);
          *(undefined8 *)(pcVar34 + 0x88) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0x98);
          *(undefined8 *)(pcVar34 + 0x90) = *(undefined8 *)(pcVar1 + 0x90);
          *(undefined8 *)(pcVar34 + 0x98) = uVar28;
          uVar28 = *(undefined8 *)(pcVar1 + 0xa8);
          *(undefined8 *)(pcVar34 + 0xa0) = *(undefined8 *)(pcVar1 + 0xa0);
          *(undefined8 *)(pcVar34 + 0xa8) = uVar28;
          *(undefined8 *)(pcVar34 + 0xb0) = *(undefined8 *)(pcVar1 + 0xb0);
          *(undefined8 *)pcVar1 = uVar6;
          *(undefined8 *)(pcVar1 + 8) = uVar7;
          *(undefined8 *)(pcVar1 + 0x10) = uVar8;
          *(undefined8 *)(pcVar1 + 0x18) = uVar9;
          *(undefined8 *)(pcVar1 + 0x20) = uVar10;
          *(undefined8 *)(pcVar1 + 0x28) = uVar11;
          *(undefined8 *)(pcVar1 + 0x30) = uVar12;
          *(undefined8 *)(pcVar1 + 0x38) = uVar13;
          *(undefined8 *)(pcVar1 + 0x40) = uVar14;
          *(undefined8 *)(pcVar1 + 0x48) = uVar15;
          *(undefined8 *)(pcVar1 + 0x50) = uVar16;
          *(undefined8 *)(pcVar1 + 0x58) = uVar17;
          *(undefined8 *)(pcVar1 + 0x60) = uVar18;
          *(undefined8 *)(pcVar1 + 0x68) = uVar19;
          *(undefined8 *)(pcVar1 + 0x70) = uVar20;
          *(undefined8 *)(pcVar1 + 0x78) = uVar21;
          *(undefined8 *)(pcVar1 + 0x80) = uVar22;
          *(undefined8 *)(pcVar1 + 0x88) = uVar23;
          *(undefined8 *)(pcVar1 + 0x90) = uVar24;
          *(undefined8 *)(pcVar1 + 0x98) = uVar25;
          *(undefined8 *)(pcVar1 + 0xa0) = uVar26;
          *(undefined8 *)(pcVar1 + 0xa8) = uVar27;
          *(undefined8 *)(pcVar1 + 0xb0) = uVar3;
        }
        iVar29 = iVar30;
        iVar31 = iVar30 * 2 + 1;
      }
      iVar31 = iVar5 + -2;
      iVar29 = iVar32 + -1;
      iVar5 = iVar31;
      iVar32 = iVar29;
    } while (-1 < iVar29);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar33 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar33) {
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[0x16];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        uVar14 = param_1[8];
        uVar15 = param_1[9];
        uVar16 = param_1[10];
        uVar17 = param_1[0xb];
        uVar18 = param_1[0xc];
        uVar19 = param_1[0xd];
        uVar20 = param_1[0xe];
        uVar21 = param_1[0xf];
        uVar22 = param_1[0x10];
        uVar23 = param_1[0x11];
        uVar24 = param_1[0x12];
        uVar25 = param_1[0x13];
        uVar26 = param_1[0x14];
        uVar27 = param_1[0x15];
        uVar28 = puVar33[1];
        *param_1 = *puVar33;
        param_1[1] = uVar28;
        uVar28 = puVar33[3];
        param_1[2] = puVar33[2];
        param_1[3] = uVar28;
        uVar28 = puVar33[5];
        param_1[4] = puVar33[4];
        param_1[5] = uVar28;
        uVar28 = puVar33[7];
        param_1[6] = puVar33[6];
        param_1[7] = uVar28;
        uVar28 = puVar33[9];
        param_1[8] = puVar33[8];
        param_1[9] = uVar28;
        uVar28 = puVar33[0xb];
        param_1[10] = puVar33[10];
        param_1[0xb] = uVar28;
        uVar28 = puVar33[0xd];
        param_1[0xc] = puVar33[0xc];
        param_1[0xd] = uVar28;
        uVar28 = puVar33[0xf];
        param_1[0xe] = puVar33[0xe];
        param_1[0xf] = uVar28;
        uVar28 = puVar33[0x11];
        param_1[0x10] = puVar33[0x10];
        param_1[0x11] = uVar28;
        uVar28 = puVar33[0x13];
        param_1[0x12] = puVar33[0x12];
        param_1[0x13] = uVar28;
        uVar28 = puVar33[0x15];
        param_1[0x14] = puVar33[0x14];
        param_1[0x15] = uVar28;
        param_1[0x16] = puVar33[0x16];
        *puVar33 = uVar6;
        puVar33[1] = uVar7;
        puVar33[2] = uVar8;
        puVar33[3] = uVar9;
        puVar33[4] = uVar10;
        puVar33[5] = uVar11;
        puVar33[6] = uVar12;
        puVar33[7] = uVar13;
        puVar33[8] = uVar14;
        puVar33[9] = uVar15;
        puVar33[10] = uVar16;
        puVar33[0xb] = uVar17;
        puVar33[0xc] = uVar18;
        puVar33[0xd] = uVar19;
        puVar33[0xe] = uVar20;
        puVar33[0xf] = uVar21;
        puVar33[0x10] = uVar22;
        puVar33[0x11] = uVar23;
        puVar33[0x12] = uVar24;
        puVar33[0x13] = uVar25;
        puVar33[0x14] = uVar26;
        puVar33[0x15] = uVar27;
        puVar33[0x16] = uVar3;
      }
      iVar29 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar29 * 2;
          iVar31 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            cVar2 = *(char *)(param_1 + (longlong)iVar31 * 0x17);
            if (*(char *)(param_1 + ((longlong)iVar5 + 2) * 0x17) == cVar2) {
LAB_14113b47b:
              bVar4 = *(longlong *)((longlong)(param_1 + (longlong)iVar31 * 0x17) + 0x78) <
                      (longlong)param_1[((longlong)iVar5 + 2) * 0x17 + 0xf];
            }
            else if (*(char *)(param_1 + ((longlong)iVar5 + 2) * 0x17) == '\x02') {
              bVar4 = true;
            }
            else {
              if (cVar2 != '\x02') goto LAB_14113b47b;
              bVar4 = false;
            }
            if (bVar4) {
              iVar31 = iVar5;
            }
            iVar31 = iVar31 + 1;
          }
          pcVar34 = (char *)(param_1 + (longlong)iVar29 * 0x17);
          pcVar1 = (char *)(param_1 + (longlong)iVar31 * 0x17);
          if (*pcVar34 == *(char *)(param_1 + (longlong)iVar31 * 0x17)) {
LAB_14113b4c4:
            if (*(longlong *)(pcVar34 + 0x78) <= *(longlong *)(pcVar1 + 0x78)) break;
          }
          else if (*pcVar34 != '\x02') {
            if (*(char *)(param_1 + (longlong)iVar31 * 0x17) != '\x02') goto LAB_14113b4c4;
            break;
          }
          if (pcVar34 != pcVar1) {
            uVar6 = *(undefined8 *)pcVar34;
            uVar7 = *(undefined8 *)(pcVar34 + 8);
            uVar3 = *(undefined8 *)(pcVar34 + 0xb0);
            uVar8 = *(undefined8 *)(pcVar34 + 0x10);
            uVar9 = *(undefined8 *)(pcVar34 + 0x18);
            uVar10 = *(undefined8 *)(pcVar34 + 0x20);
            uVar11 = *(undefined8 *)(pcVar34 + 0x28);
            uVar12 = *(undefined8 *)(pcVar34 + 0x30);
            uVar13 = *(undefined8 *)(pcVar34 + 0x38);
            uVar14 = *(undefined8 *)(pcVar34 + 0x40);
            uVar15 = *(undefined8 *)(pcVar34 + 0x48);
            uVar16 = *(undefined8 *)(pcVar34 + 0x50);
            uVar17 = *(undefined8 *)(pcVar34 + 0x58);
            uVar18 = *(undefined8 *)(pcVar34 + 0x60);
            uVar19 = *(undefined8 *)(pcVar34 + 0x68);
            uVar20 = *(undefined8 *)(pcVar34 + 0x70);
            uVar21 = *(undefined8 *)(pcVar34 + 0x78);
            uVar22 = *(undefined8 *)(pcVar34 + 0x80);
            uVar23 = *(undefined8 *)(pcVar34 + 0x88);
            uVar24 = *(undefined8 *)(pcVar34 + 0x90);
            uVar25 = *(undefined8 *)(pcVar34 + 0x98);
            uVar26 = *(undefined8 *)(pcVar34 + 0xa0);
            uVar27 = *(undefined8 *)(pcVar34 + 0xa8);
            uVar28 = *(undefined8 *)(pcVar1 + 8);
            *(undefined8 *)pcVar34 = *(undefined8 *)pcVar1;
            *(undefined8 *)(pcVar34 + 8) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x18);
            *(undefined8 *)(pcVar34 + 0x10) = *(undefined8 *)(pcVar1 + 0x10);
            *(undefined8 *)(pcVar34 + 0x18) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x28);
            *(undefined8 *)(pcVar34 + 0x20) = *(undefined8 *)(pcVar1 + 0x20);
            *(undefined8 *)(pcVar34 + 0x28) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x38);
            *(undefined8 *)(pcVar34 + 0x30) = *(undefined8 *)(pcVar1 + 0x30);
            *(undefined8 *)(pcVar34 + 0x38) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x48);
            *(undefined8 *)(pcVar34 + 0x40) = *(undefined8 *)(pcVar1 + 0x40);
            *(undefined8 *)(pcVar34 + 0x48) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x58);
            *(undefined8 *)(pcVar34 + 0x50) = *(undefined8 *)(pcVar1 + 0x50);
            *(undefined8 *)(pcVar34 + 0x58) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x68);
            *(undefined8 *)(pcVar34 + 0x60) = *(undefined8 *)(pcVar1 + 0x60);
            *(undefined8 *)(pcVar34 + 0x68) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x78);
            *(undefined8 *)(pcVar34 + 0x70) = *(undefined8 *)(pcVar1 + 0x70);
            *(undefined8 *)(pcVar34 + 0x78) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x88);
            *(undefined8 *)(pcVar34 + 0x80) = *(undefined8 *)(pcVar1 + 0x80);
            *(undefined8 *)(pcVar34 + 0x88) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x98);
            *(undefined8 *)(pcVar34 + 0x90) = *(undefined8 *)(pcVar1 + 0x90);
            *(undefined8 *)(pcVar34 + 0x98) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0xa8);
            *(undefined8 *)(pcVar34 + 0xa0) = *(undefined8 *)(pcVar1 + 0xa0);
            *(undefined8 *)(pcVar34 + 0xa8) = uVar28;
            *(undefined8 *)(pcVar34 + 0xb0) = *(undefined8 *)(pcVar1 + 0xb0);
            *(undefined8 *)pcVar1 = uVar6;
            *(undefined8 *)(pcVar1 + 8) = uVar7;
            *(undefined8 *)(pcVar1 + 0x10) = uVar8;
            *(undefined8 *)(pcVar1 + 0x18) = uVar9;
            *(undefined8 *)(pcVar1 + 0x20) = uVar10;
            *(undefined8 *)(pcVar1 + 0x28) = uVar11;
            *(undefined8 *)(pcVar1 + 0x30) = uVar12;
            *(undefined8 *)(pcVar1 + 0x38) = uVar13;
            *(undefined8 *)(pcVar1 + 0x40) = uVar14;
            *(undefined8 *)(pcVar1 + 0x48) = uVar15;
            *(undefined8 *)(pcVar1 + 0x50) = uVar16;
            *(undefined8 *)(pcVar1 + 0x58) = uVar17;
            *(undefined8 *)(pcVar1 + 0x60) = uVar18;
            *(undefined8 *)(pcVar1 + 0x68) = uVar19;
            *(undefined8 *)(pcVar1 + 0x70) = uVar20;
            *(undefined8 *)(pcVar1 + 0x78) = uVar21;
            *(undefined8 *)(pcVar1 + 0x80) = uVar22;
            *(undefined8 *)(pcVar1 + 0x88) = uVar23;
            *(undefined8 *)(pcVar1 + 0x90) = uVar24;
            *(undefined8 *)(pcVar1 + 0x98) = uVar25;
            *(undefined8 *)(pcVar1 + 0xa0) = uVar26;
            *(undefined8 *)(pcVar1 + 0xa8) = uVar27;
            *(undefined8 *)(pcVar1 + 0xb0) = uVar3;
          }
          iVar29 = iVar31;
        } while (iVar31 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar33 = puVar33 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14113b6c0 FUN_14113b6c0 body=1786 status=ok
// SIG undefined FUN_14113b6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113b6c0(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined8 *puVar33;
  char *pcVar34;
  
  iVar29 = (param_2 + -2) / 2;
  if (-1 < iVar29) {
    iVar31 = iVar29 * 2 + 1;
    iVar5 = iVar31;
    iVar32 = iVar29;
joined_r0x00014113b707:
    do {
      if (iVar31 < param_2) {
        iVar31 = iVar29 * 2;
        iVar30 = iVar31 + 1;
        if (iVar31 + 2 < param_2) {
          cVar2 = *(char *)(param_1 + (longlong)iVar30 * 0x17);
          if (*(char *)(param_1 + ((longlong)iVar31 + 2) * 0x17) == cVar2) {
LAB_14113b75a:
            bVar4 = *(longlong *)((longlong)(param_1 + (longlong)iVar30 * 0x17) + 0x78) <
                    (longlong)param_1[((longlong)iVar31 + 2) * 0x17 + 0xf];
          }
          else if (*(char *)(param_1 + ((longlong)iVar31 + 2) * 0x17) == '\x02') {
            bVar4 = false;
          }
          else {
            if (cVar2 != '\x02') goto LAB_14113b75a;
            bVar4 = true;
          }
          if (bVar4) {
            iVar30 = iVar31;
          }
          iVar30 = iVar30 + 1;
        }
        pcVar34 = (char *)(param_1 + (longlong)iVar29 * 0x17);
        pcVar1 = (char *)(param_1 + (longlong)iVar30 * 0x17);
        if (*pcVar34 == *(char *)(param_1 + (longlong)iVar30 * 0x17)) {
LAB_14113b7a3:
          if (*(longlong *)(pcVar1 + 0x78) < *(longlong *)(pcVar34 + 0x78)) {
LAB_14113b7b1:
            if (pcVar34 != pcVar1) {
              uVar6 = *(undefined8 *)pcVar34;
              uVar7 = *(undefined8 *)(pcVar34 + 8);
              uVar3 = *(undefined8 *)(pcVar34 + 0xb0);
              uVar8 = *(undefined8 *)(pcVar34 + 0x10);
              uVar9 = *(undefined8 *)(pcVar34 + 0x18);
              uVar10 = *(undefined8 *)(pcVar34 + 0x20);
              uVar11 = *(undefined8 *)(pcVar34 + 0x28);
              uVar12 = *(undefined8 *)(pcVar34 + 0x30);
              uVar13 = *(undefined8 *)(pcVar34 + 0x38);
              uVar14 = *(undefined8 *)(pcVar34 + 0x40);
              uVar15 = *(undefined8 *)(pcVar34 + 0x48);
              uVar16 = *(undefined8 *)(pcVar34 + 0x50);
              uVar17 = *(undefined8 *)(pcVar34 + 0x58);
              uVar18 = *(undefined8 *)(pcVar34 + 0x60);
              uVar19 = *(undefined8 *)(pcVar34 + 0x68);
              uVar20 = *(undefined8 *)(pcVar34 + 0x70);
              uVar21 = *(undefined8 *)(pcVar34 + 0x78);
              uVar22 = *(undefined8 *)(pcVar34 + 0x80);
              uVar23 = *(undefined8 *)(pcVar34 + 0x88);
              uVar24 = *(undefined8 *)(pcVar34 + 0x90);
              uVar25 = *(undefined8 *)(pcVar34 + 0x98);
              uVar26 = *(undefined8 *)(pcVar34 + 0xa0);
              uVar27 = *(undefined8 *)(pcVar34 + 0xa8);
              uVar28 = *(undefined8 *)(pcVar1 + 8);
              *(undefined8 *)pcVar34 = *(undefined8 *)pcVar1;
              *(undefined8 *)(pcVar34 + 8) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x18);
              *(undefined8 *)(pcVar34 + 0x10) = *(undefined8 *)(pcVar1 + 0x10);
              *(undefined8 *)(pcVar34 + 0x18) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x28);
              *(undefined8 *)(pcVar34 + 0x20) = *(undefined8 *)(pcVar1 + 0x20);
              *(undefined8 *)(pcVar34 + 0x28) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x38);
              *(undefined8 *)(pcVar34 + 0x30) = *(undefined8 *)(pcVar1 + 0x30);
              *(undefined8 *)(pcVar34 + 0x38) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x48);
              *(undefined8 *)(pcVar34 + 0x40) = *(undefined8 *)(pcVar1 + 0x40);
              *(undefined8 *)(pcVar34 + 0x48) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x58);
              *(undefined8 *)(pcVar34 + 0x50) = *(undefined8 *)(pcVar1 + 0x50);
              *(undefined8 *)(pcVar34 + 0x58) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x68);
              *(undefined8 *)(pcVar34 + 0x60) = *(undefined8 *)(pcVar1 + 0x60);
              *(undefined8 *)(pcVar34 + 0x68) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x78);
              *(undefined8 *)(pcVar34 + 0x70) = *(undefined8 *)(pcVar1 + 0x70);
              *(undefined8 *)(pcVar34 + 0x78) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x88);
              *(undefined8 *)(pcVar34 + 0x80) = *(undefined8 *)(pcVar1 + 0x80);
              *(undefined8 *)(pcVar34 + 0x88) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0x98);
              *(undefined8 *)(pcVar34 + 0x90) = *(undefined8 *)(pcVar1 + 0x90);
              *(undefined8 *)(pcVar34 + 0x98) = uVar28;
              uVar28 = *(undefined8 *)(pcVar1 + 0xa8);
              *(undefined8 *)(pcVar34 + 0xa0) = *(undefined8 *)(pcVar1 + 0xa0);
              *(undefined8 *)(pcVar34 + 0xa8) = uVar28;
              *(undefined8 *)(pcVar34 + 0xb0) = *(undefined8 *)(pcVar1 + 0xb0);
              *(undefined8 *)pcVar1 = uVar6;
              *(undefined8 *)(pcVar1 + 8) = uVar7;
              *(undefined8 *)(pcVar1 + 0x10) = uVar8;
              *(undefined8 *)(pcVar1 + 0x18) = uVar9;
              *(undefined8 *)(pcVar1 + 0x20) = uVar10;
              *(undefined8 *)(pcVar1 + 0x28) = uVar11;
              *(undefined8 *)(pcVar1 + 0x30) = uVar12;
              *(undefined8 *)(pcVar1 + 0x38) = uVar13;
              *(undefined8 *)(pcVar1 + 0x40) = uVar14;
              *(undefined8 *)(pcVar1 + 0x48) = uVar15;
              *(undefined8 *)(pcVar1 + 0x50) = uVar16;
              *(undefined8 *)(pcVar1 + 0x58) = uVar17;
              *(undefined8 *)(pcVar1 + 0x60) = uVar18;
              *(undefined8 *)(pcVar1 + 0x68) = uVar19;
              *(undefined8 *)(pcVar1 + 0x70) = uVar20;
              *(undefined8 *)(pcVar1 + 0x78) = uVar21;
              *(undefined8 *)(pcVar1 + 0x80) = uVar22;
              *(undefined8 *)(pcVar1 + 0x88) = uVar23;
              *(undefined8 *)(pcVar1 + 0x90) = uVar24;
              *(undefined8 *)(pcVar1 + 0x98) = uVar25;
              *(undefined8 *)(pcVar1 + 0xa0) = uVar26;
              *(undefined8 *)(pcVar1 + 0xa8) = uVar27;
              *(undefined8 *)(pcVar1 + 0xb0) = uVar3;
            }
            iVar31 = iVar30 * 2 + 1;
            iVar29 = iVar30;
            goto joined_r0x00014113b707;
          }
        }
        else if (*pcVar34 != '\x02') {
          if (*(char *)(param_1 + (longlong)iVar30 * 0x17) != '\x02') goto LAB_14113b7a3;
          goto LAB_14113b7b1;
        }
      }
      iVar31 = iVar5 + -2;
      iVar29 = iVar32 + -1;
      iVar5 = iVar31;
      iVar32 = iVar29;
    } while (-1 < iVar29);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar33 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar33) {
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[0x16];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        uVar14 = param_1[8];
        uVar15 = param_1[9];
        uVar16 = param_1[10];
        uVar17 = param_1[0xb];
        uVar18 = param_1[0xc];
        uVar19 = param_1[0xd];
        uVar20 = param_1[0xe];
        uVar21 = param_1[0xf];
        uVar22 = param_1[0x10];
        uVar23 = param_1[0x11];
        uVar24 = param_1[0x12];
        uVar25 = param_1[0x13];
        uVar26 = param_1[0x14];
        uVar27 = param_1[0x15];
        uVar28 = puVar33[1];
        *param_1 = *puVar33;
        param_1[1] = uVar28;
        uVar28 = puVar33[3];
        param_1[2] = puVar33[2];
        param_1[3] = uVar28;
        uVar28 = puVar33[5];
        param_1[4] = puVar33[4];
        param_1[5] = uVar28;
        uVar28 = puVar33[7];
        param_1[6] = puVar33[6];
        param_1[7] = uVar28;
        uVar28 = puVar33[9];
        param_1[8] = puVar33[8];
        param_1[9] = uVar28;
        uVar28 = puVar33[0xb];
        param_1[10] = puVar33[10];
        param_1[0xb] = uVar28;
        uVar28 = puVar33[0xd];
        param_1[0xc] = puVar33[0xc];
        param_1[0xd] = uVar28;
        uVar28 = puVar33[0xf];
        param_1[0xe] = puVar33[0xe];
        param_1[0xf] = uVar28;
        uVar28 = puVar33[0x11];
        param_1[0x10] = puVar33[0x10];
        param_1[0x11] = uVar28;
        uVar28 = puVar33[0x13];
        param_1[0x12] = puVar33[0x12];
        param_1[0x13] = uVar28;
        uVar28 = puVar33[0x15];
        param_1[0x14] = puVar33[0x14];
        param_1[0x15] = uVar28;
        param_1[0x16] = puVar33[0x16];
        *puVar33 = uVar6;
        puVar33[1] = uVar7;
        puVar33[2] = uVar8;
        puVar33[3] = uVar9;
        puVar33[4] = uVar10;
        puVar33[5] = uVar11;
        puVar33[6] = uVar12;
        puVar33[7] = uVar13;
        puVar33[8] = uVar14;
        puVar33[9] = uVar15;
        puVar33[10] = uVar16;
        puVar33[0xb] = uVar17;
        puVar33[0xc] = uVar18;
        puVar33[0xd] = uVar19;
        puVar33[0xe] = uVar20;
        puVar33[0xf] = uVar21;
        puVar33[0x10] = uVar22;
        puVar33[0x11] = uVar23;
        puVar33[0x12] = uVar24;
        puVar33[0x13] = uVar25;
        puVar33[0x14] = uVar26;
        puVar33[0x15] = uVar27;
        puVar33[0x16] = uVar3;
      }
      iVar29 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar29 * 2;
          iVar31 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            cVar2 = *(char *)(param_1 + (longlong)iVar31 * 0x17);
            if (*(char *)(param_1 + ((longlong)iVar5 + 2) * 0x17) == cVar2) {
LAB_14113bb7b:
              bVar4 = *(longlong *)((longlong)(param_1 + (longlong)iVar31 * 0x17) + 0x78) <
                      (longlong)param_1[((longlong)iVar5 + 2) * 0x17 + 0xf];
            }
            else if (*(char *)(param_1 + ((longlong)iVar5 + 2) * 0x17) == '\x02') {
              bVar4 = false;
            }
            else {
              if (cVar2 != '\x02') goto LAB_14113bb7b;
              bVar4 = true;
            }
            if (bVar4) {
              iVar31 = iVar5;
            }
            iVar31 = iVar31 + 1;
          }
          pcVar34 = (char *)(param_1 + (longlong)iVar29 * 0x17);
          pcVar1 = (char *)(param_1 + (longlong)iVar31 * 0x17);
          if (*pcVar34 == *(char *)(param_1 + (longlong)iVar31 * 0x17)) {
LAB_14113bbc4:
            if (*(longlong *)(pcVar34 + 0x78) <= *(longlong *)(pcVar1 + 0x78)) break;
          }
          else {
            if (*pcVar34 == '\x02') break;
            if (*(char *)(param_1 + (longlong)iVar31 * 0x17) != '\x02') goto LAB_14113bbc4;
          }
          if (pcVar34 != pcVar1) {
            uVar6 = *(undefined8 *)pcVar34;
            uVar7 = *(undefined8 *)(pcVar34 + 8);
            uVar3 = *(undefined8 *)(pcVar34 + 0xb0);
            uVar8 = *(undefined8 *)(pcVar34 + 0x10);
            uVar9 = *(undefined8 *)(pcVar34 + 0x18);
            uVar10 = *(undefined8 *)(pcVar34 + 0x20);
            uVar11 = *(undefined8 *)(pcVar34 + 0x28);
            uVar12 = *(undefined8 *)(pcVar34 + 0x30);
            uVar13 = *(undefined8 *)(pcVar34 + 0x38);
            uVar14 = *(undefined8 *)(pcVar34 + 0x40);
            uVar15 = *(undefined8 *)(pcVar34 + 0x48);
            uVar16 = *(undefined8 *)(pcVar34 + 0x50);
            uVar17 = *(undefined8 *)(pcVar34 + 0x58);
            uVar18 = *(undefined8 *)(pcVar34 + 0x60);
            uVar19 = *(undefined8 *)(pcVar34 + 0x68);
            uVar20 = *(undefined8 *)(pcVar34 + 0x70);
            uVar21 = *(undefined8 *)(pcVar34 + 0x78);
            uVar22 = *(undefined8 *)(pcVar34 + 0x80);
            uVar23 = *(undefined8 *)(pcVar34 + 0x88);
            uVar24 = *(undefined8 *)(pcVar34 + 0x90);
            uVar25 = *(undefined8 *)(pcVar34 + 0x98);
            uVar26 = *(undefined8 *)(pcVar34 + 0xa0);
            uVar27 = *(undefined8 *)(pcVar34 + 0xa8);
            uVar28 = *(undefined8 *)(pcVar1 + 8);
            *(undefined8 *)pcVar34 = *(undefined8 *)pcVar1;
            *(undefined8 *)(pcVar34 + 8) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x18);
            *(undefined8 *)(pcVar34 + 0x10) = *(undefined8 *)(pcVar1 + 0x10);
            *(undefined8 *)(pcVar34 + 0x18) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x28);
            *(undefined8 *)(pcVar34 + 0x20) = *(undefined8 *)(pcVar1 + 0x20);
            *(undefined8 *)(pcVar34 + 0x28) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x38);
            *(undefined8 *)(pcVar34 + 0x30) = *(undefined8 *)(pcVar1 + 0x30);
            *(undefined8 *)(pcVar34 + 0x38) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x48);
            *(undefined8 *)(pcVar34 + 0x40) = *(undefined8 *)(pcVar1 + 0x40);
            *(undefined8 *)(pcVar34 + 0x48) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x58);
            *(undefined8 *)(pcVar34 + 0x50) = *(undefined8 *)(pcVar1 + 0x50);
            *(undefined8 *)(pcVar34 + 0x58) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x68);
            *(undefined8 *)(pcVar34 + 0x60) = *(undefined8 *)(pcVar1 + 0x60);
            *(undefined8 *)(pcVar34 + 0x68) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x78);
            *(undefined8 *)(pcVar34 + 0x70) = *(undefined8 *)(pcVar1 + 0x70);
            *(undefined8 *)(pcVar34 + 0x78) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x88);
            *(undefined8 *)(pcVar34 + 0x80) = *(undefined8 *)(pcVar1 + 0x80);
            *(undefined8 *)(pcVar34 + 0x88) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0x98);
            *(undefined8 *)(pcVar34 + 0x90) = *(undefined8 *)(pcVar1 + 0x90);
            *(undefined8 *)(pcVar34 + 0x98) = uVar28;
            uVar28 = *(undefined8 *)(pcVar1 + 0xa8);
            *(undefined8 *)(pcVar34 + 0xa0) = *(undefined8 *)(pcVar1 + 0xa0);
            *(undefined8 *)(pcVar34 + 0xa8) = uVar28;
            *(undefined8 *)(pcVar34 + 0xb0) = *(undefined8 *)(pcVar1 + 0xb0);
            *(undefined8 *)pcVar1 = uVar6;
            *(undefined8 *)(pcVar1 + 8) = uVar7;
            *(undefined8 *)(pcVar1 + 0x10) = uVar8;
            *(undefined8 *)(pcVar1 + 0x18) = uVar9;
            *(undefined8 *)(pcVar1 + 0x20) = uVar10;
            *(undefined8 *)(pcVar1 + 0x28) = uVar11;
            *(undefined8 *)(pcVar1 + 0x30) = uVar12;
            *(undefined8 *)(pcVar1 + 0x38) = uVar13;
            *(undefined8 *)(pcVar1 + 0x40) = uVar14;
            *(undefined8 *)(pcVar1 + 0x48) = uVar15;
            *(undefined8 *)(pcVar1 + 0x50) = uVar16;
            *(undefined8 *)(pcVar1 + 0x58) = uVar17;
            *(undefined8 *)(pcVar1 + 0x60) = uVar18;
            *(undefined8 *)(pcVar1 + 0x68) = uVar19;
            *(undefined8 *)(pcVar1 + 0x70) = uVar20;
            *(undefined8 *)(pcVar1 + 0x78) = uVar21;
            *(undefined8 *)(pcVar1 + 0x80) = uVar22;
            *(undefined8 *)(pcVar1 + 0x88) = uVar23;
            *(undefined8 *)(pcVar1 + 0x90) = uVar24;
            *(undefined8 *)(pcVar1 + 0x98) = uVar25;
            *(undefined8 *)(pcVar1 + 0xa0) = uVar26;
            *(undefined8 *)(pcVar1 + 0xa8) = uVar27;
            *(undefined8 *)(pcVar1 + 0xb0) = uVar3;
          }
          iVar29 = iVar31;
        } while (iVar31 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar33 = puVar33 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14113bdc0 FUN_14113bdc0 body=1722 status=ok
// SIG undefined FUN_14113bdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113bdc0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  char cVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  
  iVar26 = (param_2 + -2) / 2;
  if (-1 < iVar26) {
    iVar28 = iVar26 * 2 + 1;
    iVar2 = iVar28;
    iVar29 = iVar26;
joined_r0x00014113be06:
    do {
      if (iVar28 < param_2) {
        iVar28 = iVar26 * 2;
        iVar27 = iVar28 + 1;
        if (iVar28 + 2 < param_2) {
          cVar31 = *(char *)(param_1 + (longlong)iVar27 * 0x17 + 0x16);
          if (*(char *)(param_1 + ((longlong)iVar28 + 2) * 0x17 + 0x16) == cVar31) {
            cVar31 = (longlong)param_1[(longlong)iVar27 * 0x17 + 0xf] <
                     (longlong)param_1[((longlong)iVar28 + 2) * 0x17 + 0xf];
          }
          if (cVar31 != '\0') {
            iVar27 = iVar28;
          }
          iVar27 = iVar27 + 1;
        }
        puVar32 = param_1 + (longlong)iVar26 * 0x17;
        puVar30 = param_1 + (longlong)iVar27 * 0x17;
        cVar31 = *(char *)(puVar30 + 0x16);
        if (*(char *)(puVar32 + 0x16) == cVar31) {
          cVar31 = (longlong)puVar30[0xf] < (longlong)puVar32[0xf];
        }
        if (cVar31 != '\0') {
          if (puVar32 != puVar30) {
            uVar3 = *puVar32;
            uVar4 = puVar32[1];
            uVar1 = puVar32[0x16];
            uVar5 = puVar32[2];
            uVar6 = puVar32[3];
            uVar7 = puVar32[4];
            uVar8 = puVar32[5];
            uVar9 = puVar32[6];
            uVar10 = puVar32[7];
            uVar11 = puVar32[8];
            uVar12 = puVar32[9];
            uVar13 = puVar32[10];
            uVar14 = puVar32[0xb];
            uVar15 = puVar32[0xc];
            uVar16 = puVar32[0xd];
            uVar17 = puVar32[0xe];
            uVar18 = puVar32[0xf];
            uVar19 = puVar32[0x10];
            uVar20 = puVar32[0x11];
            uVar21 = puVar32[0x12];
            uVar22 = puVar32[0x13];
            uVar23 = puVar32[0x14];
            uVar24 = puVar32[0x15];
            uVar25 = puVar30[1];
            *puVar32 = *puVar30;
            puVar32[1] = uVar25;
            uVar25 = puVar30[3];
            puVar32[2] = puVar30[2];
            puVar32[3] = uVar25;
            uVar25 = puVar30[5];
            puVar32[4] = puVar30[4];
            puVar32[5] = uVar25;
            uVar25 = puVar30[7];
            puVar32[6] = puVar30[6];
            puVar32[7] = uVar25;
            uVar25 = puVar30[9];
            puVar32[8] = puVar30[8];
            puVar32[9] = uVar25;
            uVar25 = puVar30[0xb];
            puVar32[10] = puVar30[10];
            puVar32[0xb] = uVar25;
            uVar25 = puVar30[0xd];
            puVar32[0xc] = puVar30[0xc];
            puVar32[0xd] = uVar25;
            uVar25 = puVar30[0xf];
            puVar32[0xe] = puVar30[0xe];
            puVar32[0xf] = uVar25;
            uVar25 = puVar30[0x11];
            puVar32[0x10] = puVar30[0x10];
            puVar32[0x11] = uVar25;
            uVar25 = puVar30[0x13];
            puVar32[0x12] = puVar30[0x12];
            puVar32[0x13] = uVar25;
            uVar25 = puVar30[0x15];
            puVar32[0x14] = puVar30[0x14];
            puVar32[0x15] = uVar25;
            puVar32[0x16] = puVar30[0x16];
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            puVar30[4] = uVar7;
            puVar30[5] = uVar8;
            puVar30[6] = uVar9;
            puVar30[7] = uVar10;
            puVar30[8] = uVar11;
            puVar30[9] = uVar12;
            puVar30[10] = uVar13;
            puVar30[0xb] = uVar14;
            puVar30[0xc] = uVar15;
            puVar30[0xd] = uVar16;
            puVar30[0xe] = uVar17;
            puVar30[0xf] = uVar18;
            puVar30[0x10] = uVar19;
            puVar30[0x11] = uVar20;
            puVar30[0x12] = uVar21;
            puVar30[0x13] = uVar22;
            puVar30[0x14] = uVar23;
            puVar30[0x15] = uVar24;
            puVar30[0x16] = uVar1;
          }
          iVar28 = iVar27 * 2 + 1;
          iVar26 = iVar27;
          goto joined_r0x00014113be06;
        }
      }
      iVar28 = iVar2 + -2;
      iVar26 = iVar29 + -1;
      iVar2 = iVar28;
      iVar29 = iVar26;
    } while (-1 < iVar26);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar30 = param_1 + (longlong)param_2 * 0x17;
    do {
      if (param_1 != puVar30) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x16];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = param_1[0x14];
        uVar24 = param_1[0x15];
        uVar25 = puVar30[1];
        *param_1 = *puVar30;
        param_1[1] = uVar25;
        uVar25 = puVar30[3];
        param_1[2] = puVar30[2];
        param_1[3] = uVar25;
        uVar25 = puVar30[5];
        param_1[4] = puVar30[4];
        param_1[5] = uVar25;
        uVar25 = puVar30[7];
        param_1[6] = puVar30[6];
        param_1[7] = uVar25;
        uVar25 = puVar30[9];
        param_1[8] = puVar30[8];
        param_1[9] = uVar25;
        uVar25 = puVar30[0xb];
        param_1[10] = puVar30[10];
        param_1[0xb] = uVar25;
        uVar25 = puVar30[0xd];
        param_1[0xc] = puVar30[0xc];
        param_1[0xd] = uVar25;
        uVar25 = puVar30[0xf];
        param_1[0xe] = puVar30[0xe];
        param_1[0xf] = uVar25;
        uVar25 = puVar30[0x11];
        param_1[0x10] = puVar30[0x10];
        param_1[0x11] = uVar25;
        uVar25 = puVar30[0x13];
        param_1[0x12] = puVar30[0x12];
        param_1[0x13] = uVar25;
        uVar25 = puVar30[0x15];
        param_1[0x14] = puVar30[0x14];
        param_1[0x15] = uVar25;
        param_1[0x16] = puVar30[0x16];
        *puVar30 = uVar3;
        puVar30[1] = uVar4;
        puVar30[2] = uVar5;
        puVar30[3] = uVar6;
        puVar30[4] = uVar7;
        puVar30[5] = uVar8;
        puVar30[6] = uVar9;
        puVar30[7] = uVar10;
        puVar30[8] = uVar11;
        puVar30[9] = uVar12;
        puVar30[10] = uVar13;
        puVar30[0xb] = uVar14;
        puVar30[0xc] = uVar15;
        puVar30[0xd] = uVar16;
        puVar30[0xe] = uVar17;
        puVar30[0xf] = uVar18;
        puVar30[0x10] = uVar19;
        puVar30[0x11] = uVar20;
        puVar30[0x12] = uVar21;
        puVar30[0x13] = uVar22;
        puVar30[0x14] = uVar23;
        puVar30[0x15] = uVar24;
        puVar30[0x16] = uVar1;
      }
      iVar26 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar26 * 2;
          iVar28 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar31 = *(char *)(param_1 + (longlong)iVar28 * 0x17 + 0x16);
            if (*(char *)(param_1 + ((longlong)iVar2 + 2) * 0x17 + 0x16) == cVar31) {
              cVar31 = (longlong)param_1[(longlong)iVar28 * 0x17 + 0xf] <
                       (longlong)param_1[((longlong)iVar2 + 2) * 0x17 + 0xf];
            }
            if (cVar31 != '\0') {
              iVar28 = iVar2;
            }
            iVar28 = iVar28 + 1;
          }
          puVar33 = param_1 + (longlong)iVar26 * 0x17;
          puVar32 = param_1 + (longlong)iVar28 * 0x17;
          cVar31 = *(char *)(puVar32 + 0x16);
          if (*(char *)(puVar33 + 0x16) == cVar31) {
            cVar31 = (longlong)puVar32[0xf] < (longlong)puVar33[0xf];
          }
          if (cVar31 == '\0') break;
          if (puVar33 != puVar32) {
            uVar3 = *puVar33;
            uVar4 = puVar33[1];
            uVar1 = puVar33[0x16];
            uVar5 = puVar33[2];
            uVar6 = puVar33[3];
            uVar7 = puVar33[4];
            uVar8 = puVar33[5];
            uVar9 = puVar33[6];
            uVar10 = puVar33[7];
            uVar11 = puVar33[8];
            uVar12 = puVar33[9];
            uVar13 = puVar33[10];
            uVar14 = puVar33[0xb];
            uVar15 = puVar33[0xc];
            uVar16 = puVar33[0xd];
            uVar17 = puVar33[0xe];
            uVar18 = puVar33[0xf];
            uVar19 = puVar33[0x10];
            uVar20 = puVar33[0x11];
            uVar21 = puVar33[0x12];
            uVar22 = puVar33[0x13];
            uVar23 = puVar33[0x14];
            uVar24 = puVar33[0x15];
            uVar25 = puVar32[1];
            *puVar33 = *puVar32;
            puVar33[1] = uVar25;
            uVar25 = puVar32[3];
            puVar33[2] = puVar32[2];
            puVar33[3] = uVar25;
            uVar25 = puVar32[5];
            puVar33[4] = puVar32[4];
            puVar33[5] = uVar25;
            uVar25 = puVar32[7];
            puVar33[6] = puVar32[6];
            puVar33[7] = uVar25;
            uVar25 = puVar32[9];
            puVar33[8] = puVar32[8];
            puVar33[9] = uVar25;
            uVar25 = puVar32[0xb];
            puVar33[10] = puVar32[10];
            puVar33[0xb] = uVar25;
            uVar25 = puVar32[0xd];
            puVar33[0xc] = puVar32[0xc];
            puVar33[0xd] = uVar25;
            uVar25 = puVar32[0xf];
            puVar33[0xe] = puVar32[0xe];
            puVar33[0xf] = uVar25;
            uVar25 = puVar32[0x11];
            puVar33[0x10] = puVar32[0x10];
            puVar33[0x11] = uVar25;
            uVar25 = puVar32[0x13];
            puVar33[0x12] = puVar32[0x12];
            puVar33[0x13] = uVar25;
            uVar25 = puVar32[0x15];
            puVar33[0x14] = puVar32[0x14];
            puVar33[0x15] = uVar25;
            puVar33[0x16] = puVar32[0x16];
            *puVar32 = uVar3;
            puVar32[1] = uVar4;
            puVar32[2] = uVar5;
            puVar32[3] = uVar6;
            puVar32[4] = uVar7;
            puVar32[5] = uVar8;
            puVar32[6] = uVar9;
            puVar32[7] = uVar10;
            puVar32[8] = uVar11;
            puVar32[9] = uVar12;
            puVar32[10] = uVar13;
            puVar32[0xb] = uVar14;
            puVar32[0xc] = uVar15;
            puVar32[0xd] = uVar16;
            puVar32[0xe] = uVar17;
            puVar32[0xf] = uVar18;
            puVar32[0x10] = uVar19;
            puVar32[0x11] = uVar20;
            puVar32[0x12] = uVar21;
            puVar32[0x13] = uVar22;
            puVar32[0x14] = uVar23;
            puVar32[0x15] = uVar24;
            puVar32[0x16] = uVar1;
          }
          iVar26 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar30 = puVar30 + -0x17;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14113c480 FUN_14113c480 body=143 status=ok
// SIG undefined FUN_14113c480(void)

longlong FUN_14113c480(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = UMobBaseAnim::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = UMobBaseAnim::GetPrivateStaticClass();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14113c510 FUN_14113c510 body=143 status=ok
// SIG undefined FUN_14113c510(void)

longlong FUN_14113c510(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = URemnantGameInstance::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = URemnantGameInstance::GetPrivateStaticClass();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14113c5a0 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14113c680:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_14113c6b7:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x00014113c6c0;
          goto LAB_14113c6d2;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_141141720(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_14113c7af;
      }
LAB_14113c7a0:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_14113c7af:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x00014113c6c0:
  cVar2 = FUN_141141720(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_14113c6b7;
LAB_14113c6d2:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_141141720(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_14113c6b7;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_14113c7af;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_14113c7af;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_14113c7a0;
  goto LAB_14113c680;
}



// FUNCTION 14113c870 FUN_14113c870 body=2372 status=ok
// SIG undefined FUN_14113c870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113c870(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar14 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_328 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      puVar12 = (undefined8 *)*plVar13;
      puVar7 = (undefined8 *)plVar13[1];
      lVar1 = plVar13[2];
      local_628._0_4_ = (int)lVar1;
      lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8)
              + ((longlong)puVar7 - (longlong)puVar12);
      lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
      puVar11 = puVar12;
      if ((int)local_628 != 0) {
LAB_14113c970:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 0x17;
          if (puVar12 != puVar11) {
            local_620 = *puVar12;
            uStack_618 = puVar12[1];
            local_570 = puVar12[0x16];
            local_610 = puVar12[2];
            uStack_608 = puVar12[3];
            local_600 = puVar12[4];
            uStack_5f8 = puVar12[5];
            local_5f0 = puVar12[6];
            uStack_5e8 = puVar12[7];
            local_5e0 = puVar12[8];
            uStack_5d8 = puVar12[9];
            local_5d0 = puVar12[10];
            uStack_5c8 = puVar12[0xb];
            local_5c0 = puVar12[0xc];
            uStack_5b8 = puVar12[0xd];
            local_5b0 = puVar12[0xe];
            uStack_5a8 = puVar12[0xf];
            local_5a0 = puVar12[0x10];
            uStack_598 = puVar12[0x11];
            local_590 = puVar12[0x12];
            uStack_588 = puVar12[0x13];
            uVar2 = puVar12[0x14];
            uVar3 = puVar12[0x15];
            uVar4 = puVar11[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar4;
            uVar4 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar4;
            uVar4 = puVar11[5];
            puVar12[4] = puVar11[4];
            puVar12[5] = uVar4;
            uVar4 = puVar11[7];
            puVar12[6] = puVar11[6];
            puVar12[7] = uVar4;
            uVar4 = puVar11[9];
            puVar12[8] = puVar11[8];
            puVar12[9] = uVar4;
            uVar4 = puVar11[0xb];
            puVar12[10] = puVar11[10];
            puVar12[0xb] = uVar4;
            uVar4 = puVar11[0xd];
            puVar12[0xc] = puVar11[0xc];
            puVar12[0xd] = uVar4;
            uVar4 = puVar11[0xf];
            puVar12[0xe] = puVar11[0xe];
            puVar12[0xf] = uVar4;
            uVar4 = puVar11[0x11];
            puVar12[0x10] = puVar11[0x10];
            puVar12[0x11] = uVar4;
            uVar4 = puVar11[0x13];
            puVar12[0x12] = puVar11[0x12];
            puVar12[0x13] = uVar4;
            uVar4 = puVar11[0x15];
            puVar12[0x14] = puVar11[0x14];
            puVar12[0x15] = uVar4;
            puVar12[0x16] = puVar11[0x16];
            *puVar11 = local_620;
            puVar11[1] = uStack_618;
            puVar11[2] = local_610;
            puVar11[3] = uStack_608;
            puVar11[4] = local_600;
            puVar11[5] = uStack_5f8;
            puVar11[6] = local_5f0;
            puVar11[7] = uStack_5e8;
            puVar11[8] = local_5e0;
            puVar11[9] = uStack_5d8;
            puVar11[10] = local_5d0;
            puVar11[0xb] = uStack_5c8;
            puVar11[0xc] = local_5c0;
            puVar11[0xd] = uStack_5b8;
            puVar11[0xe] = local_5b0;
            puVar11[0xf] = uStack_5a8;
            puVar11[0x10] = local_5a0;
            puVar11[0x11] = uStack_598;
            local_580._0_4_ = (undefined4)uVar2;
            local_580._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_578._0_4_ = (undefined4)uVar3;
            uStack_578._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar11[0x12] = local_590;
            puVar11[0x13] = uStack_588;
            *(undefined4 *)(puVar11 + 0x14) = (undefined4)local_580;
            *(undefined4 *)((longlong)puVar11 + 0xa4) = local_580._4_4_;
            *(undefined4 *)(puVar11 + 0x15) = (undefined4)uStack_578;
            *(undefined4 *)((longlong)puVar11 + 0xac) = uStack_578._4_4_;
            puVar11[0x16] = local_570;
            local_580 = uVar2;
            uStack_578 = uVar3;
          }
          puVar9 = puVar7 + 0x17;
          puVar12 = puVar11;
LAB_14113cb24:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x17;
          if (puVar12 <= puVar7) goto code_r0x00014113cb30;
          goto LAB_14113cb40;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x17) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x17, puVar12 <= puVar7) {
            puVar9 = puVar12;
            if ((longlong)puVar8[0xf] <= (longlong)puVar12[0xf]) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_3f8 = *puVar8;
            uStack_3f0 = puVar8[1];
            local_348 = puVar8[0x16];
            local_3e8 = puVar8[2];
            uStack_3e0 = puVar8[3];
            local_3d8 = puVar8[4];
            uStack_3d0 = puVar8[5];
            local_3c8 = puVar8[6];
            uStack_3c0 = puVar8[7];
            local_3b8 = puVar8[8];
            uStack_3b0 = puVar8[9];
            local_3a8 = puVar8[10];
            uStack_3a0 = puVar8[0xb];
            local_398 = puVar8[0xc];
            uStack_390 = puVar8[0xd];
            local_388 = puVar8[0xe];
            uStack_380 = puVar8[0xf];
            local_378 = puVar8[0x10];
            uStack_370 = puVar8[0x11];
            local_368 = puVar8[0x12];
            uStack_360 = puVar8[0x13];
            local_358 = puVar8[0x14];
            uStack_350 = puVar8[0x15];
            uVar2 = puVar7[1];
            *puVar8 = *puVar7;
            puVar8[1] = uVar2;
            uVar2 = puVar7[3];
            puVar8[2] = puVar7[2];
            puVar8[3] = uVar2;
            uVar2 = puVar7[5];
            puVar8[4] = puVar7[4];
            puVar8[5] = uVar2;
            uVar2 = puVar7[7];
            puVar8[6] = puVar7[6];
            puVar8[7] = uVar2;
            uVar2 = puVar7[9];
            puVar8[8] = puVar7[8];
            puVar8[9] = uVar2;
            uVar2 = puVar7[0xb];
            puVar8[10] = puVar7[10];
            puVar8[0xb] = uVar2;
            uVar2 = puVar7[0xd];
            puVar8[0xc] = puVar7[0xc];
            puVar8[0xd] = uVar2;
            uVar2 = puVar7[0xf];
            puVar8[0xe] = puVar7[0xe];
            puVar8[0xf] = uVar2;
            uVar2 = puVar7[0x11];
            puVar8[0x10] = puVar7[0x10];
            puVar8[0x11] = uVar2;
            uVar2 = puVar7[0x13];
            puVar8[0x12] = puVar7[0x12];
            puVar8[0x13] = uVar2;
            uVar2 = puVar7[0x15];
            puVar8[0x14] = puVar7[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = puVar7[0x16];
            *puVar7 = local_3f8;
            puVar7[1] = uStack_3f0;
            puVar7[2] = local_3e8;
            puVar7[3] = uStack_3e0;
            puVar7[4] = local_3d8;
            puVar7[5] = uStack_3d0;
            puVar7[6] = local_3c8;
            puVar7[7] = uStack_3c0;
            puVar7[8] = local_3b8;
            puVar7[9] = uStack_3b0;
            puVar7[10] = local_3a8;
            puVar7[0xb] = uStack_3a0;
            puVar7[0xc] = local_398;
            puVar7[0xd] = uStack_390;
            puVar7[0xe] = local_388;
            puVar7[0xf] = uStack_380;
            puVar7[0x10] = local_378;
            puVar7[0x11] = uStack_370;
            puVar7[0x12] = local_368;
            puVar7[0x13] = uStack_360;
            puVar7[0x14] = local_358;
            puVar7[0x15] = uStack_350;
            puVar7[0x16] = local_348;
          }
        }
        goto LAB_14113cf7e;
      }
LAB_14113cf6f:
      local_628 = lVar1;
      FUN_14113a940(puVar12,lVar5,param_3,param_4);
LAB_14113cf7e:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x00014113cb30:
  if ((longlong)puVar11[0xf] <= (longlong)puVar8[0x26]) goto LAB_14113cb24;
LAB_14113cb40:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x17;
    if (puVar9 <= puVar11) break;
  } while ((longlong)puVar10[-8] <= (longlong)puVar11[0xf]);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_568 = *puVar12;
      uStack_560 = puVar8[0x18];
      local_4b8 = puVar8[0x2d];
      local_558 = puVar8[0x19];
      uStack_550 = puVar8[0x1a];
      local_548 = puVar8[0x1b];
      uStack_540 = puVar8[0x1c];
      local_538 = puVar8[0x1d];
      uStack_530 = puVar8[0x1e];
      local_528 = puVar8[0x1f];
      uStack_520 = puVar8[0x20];
      local_518 = puVar8[0x21];
      uStack_510 = puVar8[0x22];
      local_508 = puVar8[0x23];
      uStack_500 = puVar8[0x24];
      local_4f8 = puVar8[0x25];
      uStack_4f0 = puVar8[0x26];
      local_4e8 = puVar8[0x27];
      uStack_4e0 = puVar8[0x28];
      local_4d8 = puVar8[0x29];
      uStack_4d0 = puVar8[0x2a];
      uVar2 = puVar8[0x2b];
      uVar3 = puVar8[0x2c];
      uVar4 = puVar10[-0x16];
      *puVar12 = *puVar9;
      puVar8[0x18] = uVar4;
      uVar4 = puVar10[-0x14];
      puVar8[0x19] = puVar10[-0x15];
      puVar8[0x1a] = uVar4;
      uVar4 = puVar10[-0x12];
      puVar8[0x1b] = puVar10[-0x13];
      puVar8[0x1c] = uVar4;
      uVar4 = puVar10[-0x10];
      puVar8[0x1d] = puVar10[-0x11];
      puVar8[0x1e] = uVar4;
      uVar4 = puVar10[-0xe];
      puVar8[0x1f] = puVar10[-0xf];
      puVar8[0x20] = uVar4;
      uVar4 = puVar10[-0xc];
      puVar8[0x21] = puVar10[-0xd];
      puVar8[0x22] = uVar4;
      uVar4 = puVar10[-10];
      puVar8[0x23] = puVar10[-0xb];
      puVar8[0x24] = uVar4;
      uVar4 = puVar10[-8];
      puVar8[0x25] = puVar10[-9];
      puVar8[0x26] = uVar4;
      uVar4 = puVar10[-6];
      puVar8[0x27] = puVar10[-7];
      puVar8[0x28] = uVar4;
      uVar4 = puVar10[-4];
      puVar8[0x29] = puVar10[-5];
      puVar8[0x2a] = uVar4;
      uVar4 = puVar10[-2];
      puVar8[0x2b] = puVar10[-3];
      puVar8[0x2c] = uVar4;
      puVar8[0x2d] = puVar10[-1];
      *puVar9 = local_568;
      puVar10[-0x16] = uStack_560;
      puVar10[-0x15] = local_558;
      puVar10[-0x14] = uStack_550;
      puVar10[-0x13] = local_548;
      puVar10[-0x12] = uStack_540;
      puVar10[-0x11] = local_538;
      puVar10[-0x10] = uStack_530;
      puVar10[-0xf] = local_528;
      puVar10[-0xe] = uStack_520;
      puVar10[-0xd] = local_518;
      puVar10[-0xc] = uStack_510;
      puVar10[-0xb] = local_508;
      puVar10[-10] = uStack_500;
      puVar10[-9] = local_4f8;
      puVar10[-8] = uStack_4f0;
      puVar10[-7] = local_4e8;
      puVar10[-6] = uStack_4e0;
      local_4c8._0_4_ = (undefined4)uVar2;
      local_4c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4c0._0_4_ = (undefined4)uVar3;
      uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10[-5] = local_4d8;
      puVar10[-4] = uStack_4d0;
      *(undefined4 *)(puVar10 + -3) = (undefined4)local_4c8;
      *(undefined4 *)((longlong)puVar10 + -0x14) = local_4c8._4_4_;
      *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_4c0;
      *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_4c0._4_4_;
      puVar10[-1] = local_4b8;
      local_4c8 = uVar2;
      uStack_4c0 = uVar3;
    }
    goto LAB_14113cb24;
  }
  if (puVar11 != puVar9) {
    local_4b0 = *puVar11;
    uStack_4a8 = puVar11[1];
    local_400 = puVar11[0x16];
    local_4a0 = puVar11[2];
    uStack_498 = puVar11[3];
    local_490 = puVar11[4];
    uStack_488 = puVar11[5];
    local_480 = puVar11[6];
    uStack_478 = puVar11[7];
    local_470 = puVar11[8];
    uStack_468 = puVar11[9];
    local_460 = puVar11[10];
    uStack_458 = puVar11[0xb];
    local_450 = puVar11[0xc];
    uStack_448 = puVar11[0xd];
    local_440 = puVar11[0xe];
    uStack_438 = puVar11[0xf];
    local_430 = puVar11[0x10];
    uStack_428 = puVar11[0x11];
    local_420 = puVar11[0x12];
    uStack_418 = puVar11[0x13];
    uVar2 = puVar11[0x14];
    uVar3 = puVar11[0x15];
    uVar4 = puVar10[-0x16];
    *puVar11 = *puVar9;
    puVar11[1] = uVar4;
    uVar4 = puVar10[-0x14];
    puVar11[2] = puVar10[-0x15];
    puVar11[3] = uVar4;
    uVar4 = puVar10[-0x12];
    puVar11[4] = puVar10[-0x13];
    puVar11[5] = uVar4;
    uVar4 = puVar10[-0x10];
    puVar11[6] = puVar10[-0x11];
    puVar11[7] = uVar4;
    uVar4 = puVar10[-0xe];
    puVar11[8] = puVar10[-0xf];
    puVar11[9] = uVar4;
    uVar4 = puVar10[-0xc];
    puVar11[10] = puVar10[-0xd];
    puVar11[0xb] = uVar4;
    uVar4 = puVar10[-10];
    puVar11[0xc] = puVar10[-0xb];
    puVar11[0xd] = uVar4;
    uVar4 = puVar10[-8];
    puVar11[0xe] = puVar10[-9];
    puVar11[0xf] = uVar4;
    uVar4 = puVar10[-6];
    puVar11[0x10] = puVar10[-7];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[-4];
    puVar11[0x12] = puVar10[-5];
    puVar11[0x13] = uVar4;
    uVar4 = puVar10[-2];
    puVar11[0x14] = puVar10[-3];
    puVar11[0x15] = uVar4;
    puVar11[0x16] = puVar10[-1];
    *puVar9 = local_4b0;
    puVar10[-0x16] = uStack_4a8;
    puVar10[-0x15] = local_4a0;
    puVar10[-0x14] = uStack_498;
    puVar10[-0x13] = local_490;
    puVar10[-0x12] = uStack_488;
    puVar10[-0x11] = local_480;
    puVar10[-0x10] = uStack_478;
    puVar10[-0xf] = local_470;
    puVar10[-0xe] = uStack_468;
    puVar10[-0xd] = local_460;
    puVar10[-0xc] = uStack_458;
    puVar10[-0xb] = local_450;
    puVar10[-10] = uStack_448;
    puVar10[-9] = local_440;
    puVar10[-8] = uStack_438;
    puVar10[-7] = local_430;
    puVar10[-6] = uStack_428;
    local_410._0_4_ = (undefined4)uVar2;
    local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar3;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar10[-5] = local_420;
    puVar10[-4] = uStack_418;
    *(undefined4 *)(puVar10 + -3) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar10 + -0x14) = local_410._4_4_;
    *(undefined4 *)(puVar10 + -2) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar10 + -0xc) = uStack_408._4_4_;
    puVar10[-1] = local_400;
    local_410 = uVar2;
    uStack_408 = uVar3;
  }
  local_628._0_4_ = (int)local_628 + -1;
  lVar5 = (longlong)puVar9 + (-0xb8 - (longlong)puVar11);
  lVar5 = lVar5 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar5),8);
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  if ((lVar5 >> 7) - (lVar5 >> 0x3f) < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
    if (puVar12 < puVar7) {
      *plVar13 = (longlong)puVar12;
      plVar13[1] = (longlong)puVar7;
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (puVar9 <= puVar11 + 0x17) goto LAB_14113cf7e;
    puVar7 = puVar10 + -0x2e;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x17 < puVar9) {
      *plVar13 = (longlong)puVar11;
      plVar13[1] = (longlong)(puVar10 + -0x2e);
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (puVar7 <= puVar12) goto LAB_14113cf7e;
  }
  lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
  puVar11 = puVar12;
  if ((int)local_628 == 0) goto LAB_14113cf6f;
  goto LAB_14113c970;
}



// FUNCTION 14113d1c0 FUN_14113d1c0 body=2405 status=ok
// SIG undefined FUN_14113d1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113d1c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  fVar14 = (float)(longlong)param_2;
  lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
  if ((longlong)param_2 < 0) {
    fVar14 = fVar14 + 1.8446744e+19;
  }
  local_338 = param_1;
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
  local_328 = (undefined4)(longlong)(fVar14 + fVar14);
  _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
  plVar13 = &local_338;
LAB_14113d270:
  pcVar10 = (char *)plVar13[1];
  local_628 = plVar13[2];
  lVar6 = (longlong)pcVar10 - *plVar13;
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar6),8) + lVar6;
  lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
  pcVar5 = (char *)*plVar13;
  iVar9 = (int)local_628;
  while (iVar9 != 0) {
    if (lVar6 < 9) goto joined_r0x00014113d93b;
    pcVar8 = pcVar5 + (lVar6 / 2) * 0xb8;
    if (pcVar8 != pcVar5) {
      local_620 = *(undefined8 *)pcVar8;
      uStack_618 = *(undefined8 *)(pcVar8 + 8);
      local_570 = *(undefined8 *)(pcVar8 + 0xb0);
      local_610 = *(undefined8 *)(pcVar8 + 0x10);
      uStack_608 = *(undefined8 *)(pcVar8 + 0x18);
      local_600 = *(undefined8 *)(pcVar8 + 0x20);
      uStack_5f8 = *(undefined8 *)(pcVar8 + 0x28);
      local_5f0 = *(undefined8 *)(pcVar8 + 0x30);
      uStack_5e8 = *(undefined8 *)(pcVar8 + 0x38);
      local_5e0 = *(undefined8 *)(pcVar8 + 0x40);
      uStack_5d8 = *(undefined8 *)(pcVar8 + 0x48);
      local_5d0 = *(undefined8 *)(pcVar8 + 0x50);
      uStack_5c8 = *(undefined8 *)(pcVar8 + 0x58);
      local_5c0 = *(undefined8 *)(pcVar8 + 0x60);
      uStack_5b8 = *(undefined8 *)(pcVar8 + 0x68);
      local_5b0 = *(undefined8 *)(pcVar8 + 0x70);
      uStack_5a8 = *(undefined8 *)(pcVar8 + 0x78);
      local_5a0 = *(undefined8 *)(pcVar8 + 0x80);
      uStack_598 = *(undefined8 *)(pcVar8 + 0x88);
      local_590 = *(undefined8 *)(pcVar8 + 0x90);
      uStack_588 = *(undefined8 *)(pcVar8 + 0x98);
      uVar2 = *(undefined8 *)(pcVar8 + 0xa0);
      uVar3 = *(undefined8 *)(pcVar8 + 0xa8);
      uVar4 = *(undefined8 *)(pcVar5 + 8);
      *(undefined8 *)pcVar8 = *(undefined8 *)pcVar5;
      *(undefined8 *)(pcVar8 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x18);
      *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
      *(undefined8 *)(pcVar8 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x28);
      *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(pcVar5 + 0x20);
      *(undefined8 *)(pcVar8 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x38);
      *(undefined8 *)(pcVar8 + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
      *(undefined8 *)(pcVar8 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x48);
      *(undefined8 *)(pcVar8 + 0x40) = *(undefined8 *)(pcVar5 + 0x40);
      *(undefined8 *)(pcVar8 + 0x48) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x58);
      *(undefined8 *)(pcVar8 + 0x50) = *(undefined8 *)(pcVar5 + 0x50);
      *(undefined8 *)(pcVar8 + 0x58) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x68);
      *(undefined8 *)(pcVar8 + 0x60) = *(undefined8 *)(pcVar5 + 0x60);
      *(undefined8 *)(pcVar8 + 0x68) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x78);
      *(undefined8 *)(pcVar8 + 0x70) = *(undefined8 *)(pcVar5 + 0x70);
      *(undefined8 *)(pcVar8 + 0x78) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x88);
      *(undefined8 *)(pcVar8 + 0x80) = *(undefined8 *)(pcVar5 + 0x80);
      *(undefined8 *)(pcVar8 + 0x88) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0x98);
      *(undefined8 *)(pcVar8 + 0x90) = *(undefined8 *)(pcVar5 + 0x90);
      *(undefined8 *)(pcVar8 + 0x98) = uVar4;
      uVar4 = *(undefined8 *)(pcVar5 + 0xa8);
      *(undefined8 *)(pcVar8 + 0xa0) = *(undefined8 *)(pcVar5 + 0xa0);
      *(undefined8 *)(pcVar8 + 0xa8) = uVar4;
      *(undefined8 *)(pcVar8 + 0xb0) = *(undefined8 *)(pcVar5 + 0xb0);
      *(undefined8 *)pcVar5 = local_620;
      *(undefined8 *)(pcVar5 + 8) = uStack_618;
      *(undefined8 *)(pcVar5 + 0x10) = local_610;
      *(undefined8 *)(pcVar5 + 0x18) = uStack_608;
      *(undefined8 *)(pcVar5 + 0x20) = local_600;
      *(undefined8 *)(pcVar5 + 0x28) = uStack_5f8;
      *(undefined8 *)(pcVar5 + 0x30) = local_5f0;
      *(undefined8 *)(pcVar5 + 0x38) = uStack_5e8;
      *(undefined8 *)(pcVar5 + 0x40) = local_5e0;
      *(undefined8 *)(pcVar5 + 0x48) = uStack_5d8;
      *(undefined8 *)(pcVar5 + 0x50) = local_5d0;
      *(undefined8 *)(pcVar5 + 0x58) = uStack_5c8;
      *(undefined8 *)(pcVar5 + 0x60) = local_5c0;
      *(undefined8 *)(pcVar5 + 0x68) = uStack_5b8;
      *(undefined8 *)(pcVar5 + 0x70) = local_5b0;
      *(undefined8 *)(pcVar5 + 0x78) = uStack_5a8;
      *(undefined8 *)(pcVar5 + 0x80) = local_5a0;
      *(undefined8 *)(pcVar5 + 0x88) = uStack_598;
      local_580._0_4_ = (undefined4)uVar2;
      local_580._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_578._0_4_ = (undefined4)uVar3;
      uStack_578._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)(pcVar5 + 0x90) = local_590;
      *(undefined8 *)(pcVar5 + 0x98) = uStack_588;
      *(undefined4 *)(pcVar5 + 0xa0) = (undefined4)local_580;
      *(undefined4 *)(pcVar5 + 0xa4) = local_580._4_4_;
      *(undefined4 *)(pcVar5 + 0xa8) = (undefined4)uStack_578;
      *(undefined4 *)(pcVar5 + 0xac) = uStack_578._4_4_;
      *(undefined8 *)(pcVar5 + 0xb0) = local_570;
      local_580 = uVar2;
      uStack_578 = uVar3;
    }
    pcVar8 = pcVar10 + 0xb8;
    pcVar12 = pcVar5;
LAB_14113d470:
    do {
      do {
        pcVar7 = pcVar12;
        pcVar12 = pcVar7 + 0xb8;
        if (pcVar10 < pcVar12) goto LAB_14113d4a0;
        if (*pcVar5 == *pcVar12) break;
        if (*pcVar5 == '\x02') goto LAB_14113d4a0;
      } while (*pcVar12 == '\x02');
    } while (*(longlong *)(pcVar5 + 0x78) <= *(longlong *)(pcVar7 + 0x130));
LAB_14113d4a0:
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + -0xb8;
      if (pcVar8 <= pcVar5) break;
      if (*pcVar8 != *pcVar5) {
        if (*pcVar8 == '\x02') break;
        if (*pcVar5 == '\x02') goto LAB_14113d4a0;
      }
    } while (*(longlong *)(pcVar11 + -0x40) <= *(longlong *)(pcVar5 + 0x78));
    if (pcVar12 <= pcVar8) {
      if (pcVar12 != pcVar8) {
        local_568 = *(undefined8 *)pcVar12;
        uStack_560 = *(undefined8 *)(pcVar7 + 0xc0);
        local_4b8 = *(undefined8 *)(pcVar7 + 0x168);
        local_558 = *(undefined8 *)(pcVar7 + 200);
        uStack_550 = *(undefined8 *)(pcVar7 + 0xd0);
        local_548 = *(undefined8 *)(pcVar7 + 0xd8);
        uStack_540 = *(undefined8 *)(pcVar7 + 0xe0);
        local_538 = *(undefined8 *)(pcVar7 + 0xe8);
        uStack_530 = *(undefined8 *)(pcVar7 + 0xf0);
        local_528 = *(undefined8 *)(pcVar7 + 0xf8);
        uStack_520 = *(undefined8 *)(pcVar7 + 0x100);
        local_518 = *(undefined8 *)(pcVar7 + 0x108);
        uStack_510 = *(undefined8 *)(pcVar7 + 0x110);
        local_508 = *(undefined8 *)(pcVar7 + 0x118);
        uStack_500 = *(undefined8 *)(pcVar7 + 0x120);
        local_4f8 = *(undefined8 *)(pcVar7 + 0x128);
        uStack_4f0 = *(undefined8 *)(pcVar7 + 0x130);
        local_4e8 = *(undefined8 *)(pcVar7 + 0x138);
        uStack_4e0 = *(undefined8 *)(pcVar7 + 0x140);
        local_4d8 = *(undefined8 *)(pcVar7 + 0x148);
        uStack_4d0 = *(undefined8 *)(pcVar7 + 0x150);
        uVar2 = *(undefined8 *)(pcVar7 + 0x158);
        uVar3 = *(undefined8 *)(pcVar7 + 0x160);
        uVar4 = *(undefined8 *)(pcVar11 + -0xb0);
        *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
        *(undefined8 *)(pcVar7 + 0xc0) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0xa0);
        *(undefined8 *)(pcVar7 + 200) = *(undefined8 *)(pcVar11 + -0xa8);
        *(undefined8 *)(pcVar7 + 0xd0) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x90);
        *(undefined8 *)(pcVar7 + 0xd8) = *(undefined8 *)(pcVar11 + -0x98);
        *(undefined8 *)(pcVar7 + 0xe0) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x80);
        *(undefined8 *)(pcVar7 + 0xe8) = *(undefined8 *)(pcVar11 + -0x88);
        *(undefined8 *)(pcVar7 + 0xf0) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x70);
        *(undefined8 *)(pcVar7 + 0xf8) = *(undefined8 *)(pcVar11 + -0x78);
        *(undefined8 *)(pcVar7 + 0x100) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x60);
        *(undefined8 *)(pcVar7 + 0x108) = *(undefined8 *)(pcVar11 + -0x68);
        *(undefined8 *)(pcVar7 + 0x110) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x50);
        *(undefined8 *)(pcVar7 + 0x118) = *(undefined8 *)(pcVar11 + -0x58);
        *(undefined8 *)(pcVar7 + 0x120) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x40);
        *(undefined8 *)(pcVar7 + 0x128) = *(undefined8 *)(pcVar11 + -0x48);
        *(undefined8 *)(pcVar7 + 0x130) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x30);
        *(undefined8 *)(pcVar7 + 0x138) = *(undefined8 *)(pcVar11 + -0x38);
        *(undefined8 *)(pcVar7 + 0x140) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x20);
        *(undefined8 *)(pcVar7 + 0x148) = *(undefined8 *)(pcVar11 + -0x28);
        *(undefined8 *)(pcVar7 + 0x150) = uVar4;
        uVar4 = *(undefined8 *)(pcVar11 + -0x10);
        *(undefined8 *)(pcVar7 + 0x158) = *(undefined8 *)(pcVar11 + -0x18);
        *(undefined8 *)(pcVar7 + 0x160) = uVar4;
        *(undefined8 *)(pcVar7 + 0x168) = *(undefined8 *)(pcVar11 + -8);
        *(undefined8 *)pcVar8 = local_568;
        *(undefined8 *)(pcVar11 + -0xb0) = uStack_560;
        *(undefined8 *)(pcVar11 + -0xa8) = local_558;
        *(undefined8 *)(pcVar11 + -0xa0) = uStack_550;
        *(undefined8 *)(pcVar11 + -0x98) = local_548;
        *(undefined8 *)(pcVar11 + -0x90) = uStack_540;
        *(undefined8 *)(pcVar11 + -0x88) = local_538;
        *(undefined8 *)(pcVar11 + -0x80) = uStack_530;
        *(undefined8 *)(pcVar11 + -0x78) = local_528;
        *(undefined8 *)(pcVar11 + -0x70) = uStack_520;
        *(undefined8 *)(pcVar11 + -0x68) = local_518;
        *(undefined8 *)(pcVar11 + -0x60) = uStack_510;
        *(undefined8 *)(pcVar11 + -0x58) = local_508;
        *(undefined8 *)(pcVar11 + -0x50) = uStack_500;
        *(undefined8 *)(pcVar11 + -0x48) = local_4f8;
        *(undefined8 *)(pcVar11 + -0x40) = uStack_4f0;
        *(undefined8 *)(pcVar11 + -0x38) = local_4e8;
        *(undefined8 *)(pcVar11 + -0x30) = uStack_4e0;
        local_4c8._0_4_ = (undefined4)uVar2;
        local_4c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_4c0._0_4_ = (undefined4)uVar3;
        uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        *(undefined8 *)(pcVar11 + -0x28) = local_4d8;
        *(undefined8 *)(pcVar11 + -0x20) = uStack_4d0;
        *(undefined4 *)(pcVar11 + -0x18) = (undefined4)local_4c8;
        *(undefined4 *)(pcVar11 + -0x14) = local_4c8._4_4_;
        *(undefined4 *)(pcVar11 + -0x10) = (undefined4)uStack_4c0;
        *(undefined4 *)(pcVar11 + -0xc) = uStack_4c0._4_4_;
        *(undefined8 *)(pcVar11 + -8) = local_4b8;
        local_4c8 = uVar2;
        uStack_4c0 = uVar3;
      }
      goto LAB_14113d470;
    }
    if (pcVar5 != pcVar8) {
      local_4b0 = *(undefined8 *)pcVar5;
      uStack_4a8 = *(undefined8 *)(pcVar5 + 8);
      local_400 = *(undefined8 *)(pcVar5 + 0xb0);
      local_4a0 = *(undefined8 *)(pcVar5 + 0x10);
      uStack_498 = *(undefined8 *)(pcVar5 + 0x18);
      local_490 = *(undefined8 *)(pcVar5 + 0x20);
      uStack_488 = *(undefined8 *)(pcVar5 + 0x28);
      local_480 = *(undefined8 *)(pcVar5 + 0x30);
      uStack_478 = *(undefined8 *)(pcVar5 + 0x38);
      local_470 = *(undefined8 *)(pcVar5 + 0x40);
      uStack_468 = *(undefined8 *)(pcVar5 + 0x48);
      local_460 = *(undefined8 *)(pcVar5 + 0x50);
      uStack_458 = *(undefined8 *)(pcVar5 + 0x58);
      local_450 = *(undefined8 *)(pcVar5 + 0x60);
      uStack_448 = *(undefined8 *)(pcVar5 + 0x68);
      local_440 = *(undefined8 *)(pcVar5 + 0x70);
      uStack_438 = *(undefined8 *)(pcVar5 + 0x78);
      local_430 = *(undefined8 *)(pcVar5 + 0x80);
      uStack_428 = *(undefined8 *)(pcVar5 + 0x88);
      local_420 = *(undefined8 *)(pcVar5 + 0x90);
      uStack_418 = *(undefined8 *)(pcVar5 + 0x98);
      uVar2 = *(undefined8 *)(pcVar5 + 0xa0);
      uVar3 = *(undefined8 *)(pcVar5 + 0xa8);
      uVar4 = *(undefined8 *)(pcVar11 + -0xb0);
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar8;
      *(undefined8 *)(pcVar5 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0xa0);
      *(undefined8 *)(pcVar5 + 0x10) = *(undefined8 *)(pcVar11 + -0xa8);
      *(undefined8 *)(pcVar5 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x90);
      *(undefined8 *)(pcVar5 + 0x20) = *(undefined8 *)(pcVar11 + -0x98);
      *(undefined8 *)(pcVar5 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x80);
      *(undefined8 *)(pcVar5 + 0x30) = *(undefined8 *)(pcVar11 + -0x88);
      *(undefined8 *)(pcVar5 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x70);
      *(undefined8 *)(pcVar5 + 0x40) = *(undefined8 *)(pcVar11 + -0x78);
      *(undefined8 *)(pcVar5 + 0x48) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x60);
      *(undefined8 *)(pcVar5 + 0x50) = *(undefined8 *)(pcVar11 + -0x68);
      *(undefined8 *)(pcVar5 + 0x58) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x50);
      *(undefined8 *)(pcVar5 + 0x60) = *(undefined8 *)(pcVar11 + -0x58);
      *(undefined8 *)(pcVar5 + 0x68) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x40);
      *(undefined8 *)(pcVar5 + 0x70) = *(undefined8 *)(pcVar11 + -0x48);
      *(undefined8 *)(pcVar5 + 0x78) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x30);
      *(undefined8 *)(pcVar5 + 0x80) = *(undefined8 *)(pcVar11 + -0x38);
      *(undefined8 *)(pcVar5 + 0x88) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x20);
      *(undefined8 *)(pcVar5 + 0x90) = *(undefined8 *)(pcVar11 + -0x28);
      *(undefined8 *)(pcVar5 + 0x98) = uVar4;
      uVar4 = *(undefined8 *)(pcVar11 + -0x10);
      *(undefined8 *)(pcVar5 + 0xa0) = *(undefined8 *)(pcVar11 + -0x18);
      *(undefined8 *)(pcVar5 + 0xa8) = uVar4;
      *(undefined8 *)(pcVar5 + 0xb0) = *(undefined8 *)(pcVar11 + -8);
      *(undefined8 *)pcVar8 = local_4b0;
      *(undefined8 *)(pcVar11 + -0xb0) = uStack_4a8;
      *(undefined8 *)(pcVar11 + -0xa8) = local_4a0;
      *(undefined8 *)(pcVar11 + -0xa0) = uStack_498;
      *(undefined8 *)(pcVar11 + -0x98) = local_490;
      *(undefined8 *)(pcVar11 + -0x90) = uStack_488;
      *(undefined8 *)(pcVar11 + -0x88) = local_480;
      *(undefined8 *)(pcVar11 + -0x80) = uStack_478;
      *(undefined8 *)(pcVar11 + -0x78) = local_470;
      *(undefined8 *)(pcVar11 + -0x70) = uStack_468;
      *(undefined8 *)(pcVar11 + -0x68) = local_460;
      *(undefined8 *)(pcVar11 + -0x60) = uStack_458;
      *(undefined8 *)(pcVar11 + -0x58) = local_450;
      *(undefined8 *)(pcVar11 + -0x50) = uStack_448;
      *(undefined8 *)(pcVar11 + -0x48) = local_440;
      *(undefined8 *)(pcVar11 + -0x40) = uStack_438;
      *(undefined8 *)(pcVar11 + -0x38) = local_430;
      *(undefined8 *)(pcVar11 + -0x30) = uStack_428;
      local_410._0_4_ = (undefined4)uVar2;
      local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_408._0_4_ = (undefined4)uVar3;
      uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)(pcVar11 + -0x28) = local_420;
      *(undefined8 *)(pcVar11 + -0x20) = uStack_418;
      *(undefined4 *)(pcVar11 + -0x18) = (undefined4)local_410;
      *(undefined4 *)(pcVar11 + -0x14) = local_410._4_4_;
      *(undefined4 *)(pcVar11 + -0x10) = (undefined4)uStack_408;
      *(undefined4 *)(pcVar11 + -0xc) = uStack_408._4_4_;
      *(undefined8 *)(pcVar11 + -8) = local_400;
      local_410 = uVar2;
      uStack_408 = uVar3;
    }
    iVar9 = iVar9 + -1;
    pcVar7 = pcVar8 + (-0xb8 - (longlong)pcVar5);
    lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar10 - (longlong)pcVar12),8)
            + ((longlong)pcVar10 - (longlong)pcVar12);
    if (((longlong)(pcVar7 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar7),8)) >>
        7) - ((longlong)
              (pcVar7 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar7),8)) >> 0x3f)
        < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
      if (pcVar12 < pcVar10) {
        *plVar13 = (longlong)pcVar12;
        plVar13[1] = (longlong)pcVar10;
        *(int *)(plVar13 + 2) = iVar9;
        plVar13 = plVar13 + 3;
      }
      if (pcVar8 <= pcVar5 + 0xb8) goto LAB_14113d8e9;
      pcVar10 = pcVar11 + -0x170;
      pcVar12 = pcVar5;
    }
    else {
      if (pcVar5 + 0xb8 < pcVar8) {
        *plVar13 = (longlong)pcVar5;
        plVar13[1] = (longlong)(pcVar11 + -0x170);
        *(int *)(plVar13 + 2) = iVar9;
        plVar13 = plVar13 + 3;
      }
      if (pcVar10 <= pcVar12) goto LAB_14113d8e9;
    }
    lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar10 - (longlong)pcVar12),8)
            + ((longlong)pcVar10 - (longlong)pcVar12);
    lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
    pcVar5 = pcVar12;
  }
  FUN_14113afc0(pcVar5,lVar6,param_3,param_4);
  goto LAB_14113d8e9;
joined_r0x00014113d93b:
  for (; pcVar8 = pcVar5, pcVar12 = pcVar5, pcVar5 < pcVar10; pcVar10 = pcVar10 + -0xb8) {
    while (pcVar7 = pcVar8, pcVar8 = pcVar12 + 0xb8, pcVar8 <= pcVar10) {
      if (*pcVar7 == *pcVar8) {
LAB_14113d970:
        bVar1 = *(longlong *)(pcVar12 + 0x130) < *(longlong *)(pcVar7 + 0x78);
      }
      else if (*pcVar7 == '\x02') {
        bVar1 = true;
      }
      else {
        if (*pcVar8 != '\x02') goto LAB_14113d970;
        bVar1 = false;
      }
      pcVar12 = pcVar8;
      if (!bVar1) {
        pcVar8 = pcVar7;
      }
    }
    if (pcVar7 != pcVar10) {
      local_3f8 = *(undefined8 *)pcVar7;
      uStack_3f0 = *(undefined8 *)(pcVar7 + 8);
      local_348 = *(undefined8 *)(pcVar7 + 0xb0);
      local_3e8 = *(undefined8 *)(pcVar7 + 0x10);
      uStack_3e0 = *(undefined8 *)(pcVar7 + 0x18);
      local_3d8 = *(undefined8 *)(pcVar7 + 0x20);
      uStack_3d0 = *(undefined8 *)(pcVar7 + 0x28);
      local_3c8 = *(undefined8 *)(pcVar7 + 0x30);
      uStack_3c0 = *(undefined8 *)(pcVar7 + 0x38);
      local_3b8 = *(undefined8 *)(pcVar7 + 0x40);
      uStack_3b0 = *(undefined8 *)(pcVar7 + 0x48);
      local_3a8 = *(undefined8 *)(pcVar7 + 0x50);
      uStack_3a0 = *(undefined8 *)(pcVar7 + 0x58);
      local_398 = *(undefined8 *)(pcVar7 + 0x60);
      uStack_390 = *(undefined8 *)(pcVar7 + 0x68);
      local_388 = *(undefined8 *)(pcVar7 + 0x70);
      uStack_380 = *(undefined8 *)(pcVar7 + 0x78);
      local_378 = *(undefined8 *)(pcVar7 + 0x80);
      uStack_370 = *(undefined8 *)(pcVar7 + 0x88);
      local_368 = *(undefined8 *)(pcVar7 + 0x90);
      uStack_360 = *(undefined8 *)(pcVar7 + 0x98);
      local_358 = *(undefined8 *)(pcVar7 + 0xa0);
      uStack_350 = *(undefined8 *)(pcVar7 + 0xa8);
      uVar2 = *(undefined8 *)(pcVar10 + 8);
      *(undefined8 *)pcVar7 = *(undefined8 *)pcVar10;
      *(undefined8 *)(pcVar7 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x18);
      *(undefined8 *)(pcVar7 + 0x10) = *(undefined8 *)(pcVar10 + 0x10);
      *(undefined8 *)(pcVar7 + 0x18) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x28);
      *(undefined8 *)(pcVar7 + 0x20) = *(undefined8 *)(pcVar10 + 0x20);
      *(undefined8 *)(pcVar7 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x38);
      *(undefined8 *)(pcVar7 + 0x30) = *(undefined8 *)(pcVar10 + 0x30);
      *(undefined8 *)(pcVar7 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x48);
      *(undefined8 *)(pcVar7 + 0x40) = *(undefined8 *)(pcVar10 + 0x40);
      *(undefined8 *)(pcVar7 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x58);
      *(undefined8 *)(pcVar7 + 0x50) = *(undefined8 *)(pcVar10 + 0x50);
      *(undefined8 *)(pcVar7 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x68);
      *(undefined8 *)(pcVar7 + 0x60) = *(undefined8 *)(pcVar10 + 0x60);
      *(undefined8 *)(pcVar7 + 0x68) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x78);
      *(undefined8 *)(pcVar7 + 0x70) = *(undefined8 *)(pcVar10 + 0x70);
      *(undefined8 *)(pcVar7 + 0x78) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x88);
      *(undefined8 *)(pcVar7 + 0x80) = *(undefined8 *)(pcVar10 + 0x80);
      *(undefined8 *)(pcVar7 + 0x88) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0x98);
      *(undefined8 *)(pcVar7 + 0x90) = *(undefined8 *)(pcVar10 + 0x90);
      *(undefined8 *)(pcVar7 + 0x98) = uVar2;
      uVar2 = *(undefined8 *)(pcVar10 + 0xa8);
      *(undefined8 *)(pcVar7 + 0xa0) = *(undefined8 *)(pcVar10 + 0xa0);
      *(undefined8 *)(pcVar7 + 0xa8) = uVar2;
      *(undefined8 *)(pcVar7 + 0xb0) = *(undefined8 *)(pcVar10 + 0xb0);
      *(undefined8 *)pcVar10 = local_3f8;
      *(undefined8 *)(pcVar10 + 8) = uStack_3f0;
      *(undefined8 *)(pcVar10 + 0x10) = local_3e8;
      *(undefined8 *)(pcVar10 + 0x18) = uStack_3e0;
      *(undefined8 *)(pcVar10 + 0x20) = local_3d8;
      *(undefined8 *)(pcVar10 + 0x28) = uStack_3d0;
      *(undefined8 *)(pcVar10 + 0x30) = local_3c8;
      *(undefined8 *)(pcVar10 + 0x38) = uStack_3c0;
      *(undefined8 *)(pcVar10 + 0x40) = local_3b8;
      *(undefined8 *)(pcVar10 + 0x48) = uStack_3b0;
      *(undefined8 *)(pcVar10 + 0x50) = local_3a8;
      *(undefined8 *)(pcVar10 + 0x58) = uStack_3a0;
      *(undefined8 *)(pcVar10 + 0x60) = local_398;
      *(undefined8 *)(pcVar10 + 0x68) = uStack_390;
      *(undefined8 *)(pcVar10 + 0x70) = local_388;
      *(undefined8 *)(pcVar10 + 0x78) = uStack_380;
      *(undefined8 *)(pcVar10 + 0x80) = local_378;
      *(undefined8 *)(pcVar10 + 0x88) = uStack_370;
      *(undefined8 *)(pcVar10 + 0x90) = local_368;
      *(undefined8 *)(pcVar10 + 0x98) = uStack_360;
      *(undefined8 *)(pcVar10 + 0xa0) = local_358;
      *(undefined8 *)(pcVar10 + 0xa8) = uStack_350;
      *(undefined8 *)(pcVar10 + 0xb0) = local_348;
    }
  }
LAB_14113d8e9:
  plVar13 = plVar13 + -3;
  if (plVar13 < &local_338) {
    return;
  }
  goto LAB_14113d270;
}



// FUNCTION 14113db30 FUN_14113db30 body=2405 status=ok
// SIG undefined FUN_14113db30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113db30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  char *pcVar11;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar14 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_328 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      pcVar8 = (char *)*plVar13;
      pcVar9 = (char *)plVar13[1];
      lVar1 = plVar13[2];
      local_628._0_4_ = (int)lVar1;
      lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar9 - (longlong)pcVar8),8)
              + ((longlong)pcVar9 - (longlong)pcVar8);
      lVar7 = ((lVar7 >> 7) + 1) - (lVar7 >> 0x3f);
      pcVar12 = pcVar8;
      if ((int)local_628 != 0) {
LAB_14113dc30:
        if (8 < lVar7) {
          pcVar8 = pcVar12 + (lVar7 / 2) * 0xb8;
          if (pcVar8 != pcVar12) {
            local_620 = *(undefined8 *)pcVar8;
            uStack_618 = *(undefined8 *)(pcVar8 + 8);
            local_570 = *(undefined8 *)(pcVar8 + 0xb0);
            local_610 = *(undefined8 *)(pcVar8 + 0x10);
            uStack_608 = *(undefined8 *)(pcVar8 + 0x18);
            local_600 = *(undefined8 *)(pcVar8 + 0x20);
            uStack_5f8 = *(undefined8 *)(pcVar8 + 0x28);
            local_5f0 = *(undefined8 *)(pcVar8 + 0x30);
            uStack_5e8 = *(undefined8 *)(pcVar8 + 0x38);
            local_5e0 = *(undefined8 *)(pcVar8 + 0x40);
            uStack_5d8 = *(undefined8 *)(pcVar8 + 0x48);
            local_5d0 = *(undefined8 *)(pcVar8 + 0x50);
            uStack_5c8 = *(undefined8 *)(pcVar8 + 0x58);
            local_5c0 = *(undefined8 *)(pcVar8 + 0x60);
            uStack_5b8 = *(undefined8 *)(pcVar8 + 0x68);
            local_5b0 = *(undefined8 *)(pcVar8 + 0x70);
            uStack_5a8 = *(undefined8 *)(pcVar8 + 0x78);
            local_5a0 = *(undefined8 *)(pcVar8 + 0x80);
            uStack_598 = *(undefined8 *)(pcVar8 + 0x88);
            local_590 = *(undefined8 *)(pcVar8 + 0x90);
            uStack_588 = *(undefined8 *)(pcVar8 + 0x98);
            uVar3 = *(undefined8 *)(pcVar8 + 0xa0);
            uVar4 = *(undefined8 *)(pcVar8 + 0xa8);
            uVar5 = *(undefined8 *)(pcVar12 + 8);
            *(undefined8 *)pcVar8 = *(undefined8 *)pcVar12;
            *(undefined8 *)(pcVar8 + 8) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x18);
            *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(pcVar12 + 0x10);
            *(undefined8 *)(pcVar8 + 0x18) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x28);
            *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(pcVar12 + 0x20);
            *(undefined8 *)(pcVar8 + 0x28) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x38);
            *(undefined8 *)(pcVar8 + 0x30) = *(undefined8 *)(pcVar12 + 0x30);
            *(undefined8 *)(pcVar8 + 0x38) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x48);
            *(undefined8 *)(pcVar8 + 0x40) = *(undefined8 *)(pcVar12 + 0x40);
            *(undefined8 *)(pcVar8 + 0x48) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x58);
            *(undefined8 *)(pcVar8 + 0x50) = *(undefined8 *)(pcVar12 + 0x50);
            *(undefined8 *)(pcVar8 + 0x58) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x68);
            *(undefined8 *)(pcVar8 + 0x60) = *(undefined8 *)(pcVar12 + 0x60);
            *(undefined8 *)(pcVar8 + 0x68) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x78);
            *(undefined8 *)(pcVar8 + 0x70) = *(undefined8 *)(pcVar12 + 0x70);
            *(undefined8 *)(pcVar8 + 0x78) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x88);
            *(undefined8 *)(pcVar8 + 0x80) = *(undefined8 *)(pcVar12 + 0x80);
            *(undefined8 *)(pcVar8 + 0x88) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0x98);
            *(undefined8 *)(pcVar8 + 0x90) = *(undefined8 *)(pcVar12 + 0x90);
            *(undefined8 *)(pcVar8 + 0x98) = uVar5;
            uVar5 = *(undefined8 *)(pcVar12 + 0xa8);
            *(undefined8 *)(pcVar8 + 0xa0) = *(undefined8 *)(pcVar12 + 0xa0);
            *(undefined8 *)(pcVar8 + 0xa8) = uVar5;
            *(undefined8 *)(pcVar8 + 0xb0) = *(undefined8 *)(pcVar12 + 0xb0);
            *(undefined8 *)pcVar12 = local_620;
            *(undefined8 *)(pcVar12 + 8) = uStack_618;
            *(undefined8 *)(pcVar12 + 0x10) = local_610;
            *(undefined8 *)(pcVar12 + 0x18) = uStack_608;
            *(undefined8 *)(pcVar12 + 0x20) = local_600;
            *(undefined8 *)(pcVar12 + 0x28) = uStack_5f8;
            *(undefined8 *)(pcVar12 + 0x30) = local_5f0;
            *(undefined8 *)(pcVar12 + 0x38) = uStack_5e8;
            *(undefined8 *)(pcVar12 + 0x40) = local_5e0;
            *(undefined8 *)(pcVar12 + 0x48) = uStack_5d8;
            *(undefined8 *)(pcVar12 + 0x50) = local_5d0;
            *(undefined8 *)(pcVar12 + 0x58) = uStack_5c8;
            *(undefined8 *)(pcVar12 + 0x60) = local_5c0;
            *(undefined8 *)(pcVar12 + 0x68) = uStack_5b8;
            *(undefined8 *)(pcVar12 + 0x70) = local_5b0;
            *(undefined8 *)(pcVar12 + 0x78) = uStack_5a8;
            *(undefined8 *)(pcVar12 + 0x80) = local_5a0;
            *(undefined8 *)(pcVar12 + 0x88) = uStack_598;
            local_580._0_4_ = (undefined4)uVar3;
            local_580._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_578._0_4_ = (undefined4)uVar4;
            uStack_578._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            *(undefined8 *)(pcVar12 + 0x90) = local_590;
            *(undefined8 *)(pcVar12 + 0x98) = uStack_588;
            *(undefined4 *)(pcVar12 + 0xa0) = (undefined4)local_580;
            *(undefined4 *)(pcVar12 + 0xa4) = local_580._4_4_;
            *(undefined4 *)(pcVar12 + 0xa8) = (undefined4)uStack_578;
            *(undefined4 *)(pcVar12 + 0xac) = uStack_578._4_4_;
            *(undefined8 *)(pcVar12 + 0xb0) = local_570;
            local_580 = uVar3;
            uStack_578 = uVar4;
          }
          pcVar10 = pcVar9 + 0xb8;
          pcVar8 = pcVar12;
LAB_14113dde0:
          pcVar6 = pcVar8;
          pcVar8 = pcVar6 + 0xb8;
          if (pcVar8 <= pcVar9) {
            if (*pcVar12 != *pcVar8) goto code_r0x00014113ddf8;
            goto LAB_14113de01;
          }
          goto LAB_14113de10;
        }
        for (; pcVar8 = pcVar12, pcVar10 = pcVar12, pcVar12 < pcVar9; pcVar9 = pcVar9 + -0xb8) {
          while (pcVar6 = pcVar8, pcVar8 = pcVar10 + 0xb8, pcVar8 <= pcVar9) {
            if (*pcVar6 == *pcVar8) {
LAB_14113e2e0:
              bVar2 = *(longlong *)(pcVar10 + 0x130) < *(longlong *)(pcVar6 + 0x78);
            }
            else if (*pcVar6 == '\x02') {
              bVar2 = false;
            }
            else {
              if (*pcVar8 != '\x02') goto LAB_14113e2e0;
              bVar2 = true;
            }
            pcVar10 = pcVar8;
            if (!bVar2) {
              pcVar8 = pcVar6;
            }
          }
          if (pcVar6 != pcVar9) {
            local_3f8 = *(undefined8 *)pcVar6;
            uStack_3f0 = *(undefined8 *)(pcVar6 + 8);
            local_348 = *(undefined8 *)(pcVar6 + 0xb0);
            local_3e8 = *(undefined8 *)(pcVar6 + 0x10);
            uStack_3e0 = *(undefined8 *)(pcVar6 + 0x18);
            local_3d8 = *(undefined8 *)(pcVar6 + 0x20);
            uStack_3d0 = *(undefined8 *)(pcVar6 + 0x28);
            local_3c8 = *(undefined8 *)(pcVar6 + 0x30);
            uStack_3c0 = *(undefined8 *)(pcVar6 + 0x38);
            local_3b8 = *(undefined8 *)(pcVar6 + 0x40);
            uStack_3b0 = *(undefined8 *)(pcVar6 + 0x48);
            local_3a8 = *(undefined8 *)(pcVar6 + 0x50);
            uStack_3a0 = *(undefined8 *)(pcVar6 + 0x58);
            local_398 = *(undefined8 *)(pcVar6 + 0x60);
            uStack_390 = *(undefined8 *)(pcVar6 + 0x68);
            local_388 = *(undefined8 *)(pcVar6 + 0x70);
            uStack_380 = *(undefined8 *)(pcVar6 + 0x78);
            local_378 = *(undefined8 *)(pcVar6 + 0x80);
            uStack_370 = *(undefined8 *)(pcVar6 + 0x88);
            local_368 = *(undefined8 *)(pcVar6 + 0x90);
            uStack_360 = *(undefined8 *)(pcVar6 + 0x98);
            local_358 = *(undefined8 *)(pcVar6 + 0xa0);
            uStack_350 = *(undefined8 *)(pcVar6 + 0xa8);
            uVar3 = *(undefined8 *)(pcVar9 + 8);
            *(undefined8 *)pcVar6 = *(undefined8 *)pcVar9;
            *(undefined8 *)(pcVar6 + 8) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x18);
            *(undefined8 *)(pcVar6 + 0x10) = *(undefined8 *)(pcVar9 + 0x10);
            *(undefined8 *)(pcVar6 + 0x18) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x28);
            *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar9 + 0x20);
            *(undefined8 *)(pcVar6 + 0x28) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x38);
            *(undefined8 *)(pcVar6 + 0x30) = *(undefined8 *)(pcVar9 + 0x30);
            *(undefined8 *)(pcVar6 + 0x38) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x48);
            *(undefined8 *)(pcVar6 + 0x40) = *(undefined8 *)(pcVar9 + 0x40);
            *(undefined8 *)(pcVar6 + 0x48) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x58);
            *(undefined8 *)(pcVar6 + 0x50) = *(undefined8 *)(pcVar9 + 0x50);
            *(undefined8 *)(pcVar6 + 0x58) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x68);
            *(undefined8 *)(pcVar6 + 0x60) = *(undefined8 *)(pcVar9 + 0x60);
            *(undefined8 *)(pcVar6 + 0x68) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x78);
            *(undefined8 *)(pcVar6 + 0x70) = *(undefined8 *)(pcVar9 + 0x70);
            *(undefined8 *)(pcVar6 + 0x78) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x88);
            *(undefined8 *)(pcVar6 + 0x80) = *(undefined8 *)(pcVar9 + 0x80);
            *(undefined8 *)(pcVar6 + 0x88) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0x98);
            *(undefined8 *)(pcVar6 + 0x90) = *(undefined8 *)(pcVar9 + 0x90);
            *(undefined8 *)(pcVar6 + 0x98) = uVar3;
            uVar3 = *(undefined8 *)(pcVar9 + 0xa8);
            *(undefined8 *)(pcVar6 + 0xa0) = *(undefined8 *)(pcVar9 + 0xa0);
            *(undefined8 *)(pcVar6 + 0xa8) = uVar3;
            *(undefined8 *)(pcVar6 + 0xb0) = *(undefined8 *)(pcVar9 + 0xb0);
            *(undefined8 *)pcVar9 = local_3f8;
            *(undefined8 *)(pcVar9 + 8) = uStack_3f0;
            *(undefined8 *)(pcVar9 + 0x10) = local_3e8;
            *(undefined8 *)(pcVar9 + 0x18) = uStack_3e0;
            *(undefined8 *)(pcVar9 + 0x20) = local_3d8;
            *(undefined8 *)(pcVar9 + 0x28) = uStack_3d0;
            *(undefined8 *)(pcVar9 + 0x30) = local_3c8;
            *(undefined8 *)(pcVar9 + 0x38) = uStack_3c0;
            *(undefined8 *)(pcVar9 + 0x40) = local_3b8;
            *(undefined8 *)(pcVar9 + 0x48) = uStack_3b0;
            *(undefined8 *)(pcVar9 + 0x50) = local_3a8;
            *(undefined8 *)(pcVar9 + 0x58) = uStack_3a0;
            *(undefined8 *)(pcVar9 + 0x60) = local_398;
            *(undefined8 *)(pcVar9 + 0x68) = uStack_390;
            *(undefined8 *)(pcVar9 + 0x70) = local_388;
            *(undefined8 *)(pcVar9 + 0x78) = uStack_380;
            *(undefined8 *)(pcVar9 + 0x80) = local_378;
            *(undefined8 *)(pcVar9 + 0x88) = uStack_370;
            *(undefined8 *)(pcVar9 + 0x90) = local_368;
            *(undefined8 *)(pcVar9 + 0x98) = uStack_360;
            *(undefined8 *)(pcVar9 + 0xa0) = local_358;
            *(undefined8 *)(pcVar9 + 0xa8) = uStack_350;
            *(undefined8 *)(pcVar9 + 0xb0) = local_348;
          }
        }
        goto LAB_14113e259;
      }
LAB_14113e24a:
      local_628 = lVar1;
      FUN_14113b6c0(pcVar8,lVar7,param_3,param_4);
LAB_14113e259:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x00014113ddf8:
  if (*pcVar12 == '\x02') goto LAB_14113dde0;
  if (*pcVar8 != '\x02') {
LAB_14113de01:
    if (*(longlong *)(pcVar12 + 0x78) <= *(longlong *)(pcVar6 + 0x130)) goto LAB_14113dde0;
  }
LAB_14113de10:
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + -0xb8;
    if (pcVar10 <= pcVar12) break;
    if (*pcVar10 != *pcVar12) {
      if (*pcVar10 == '\x02') goto LAB_14113de10;
      if (*pcVar12 == '\x02') break;
    }
  } while (*(longlong *)(pcVar11 + -0x40) <= *(longlong *)(pcVar12 + 0x78));
  if (pcVar8 <= pcVar10) {
    if (pcVar8 != pcVar10) {
      local_568 = *(undefined8 *)pcVar8;
      uStack_560 = *(undefined8 *)(pcVar6 + 0xc0);
      local_4b8 = *(undefined8 *)(pcVar6 + 0x168);
      local_558 = *(undefined8 *)(pcVar6 + 200);
      uStack_550 = *(undefined8 *)(pcVar6 + 0xd0);
      local_548 = *(undefined8 *)(pcVar6 + 0xd8);
      uStack_540 = *(undefined8 *)(pcVar6 + 0xe0);
      local_538 = *(undefined8 *)(pcVar6 + 0xe8);
      uStack_530 = *(undefined8 *)(pcVar6 + 0xf0);
      local_528 = *(undefined8 *)(pcVar6 + 0xf8);
      uStack_520 = *(undefined8 *)(pcVar6 + 0x100);
      local_518 = *(undefined8 *)(pcVar6 + 0x108);
      uStack_510 = *(undefined8 *)(pcVar6 + 0x110);
      local_508 = *(undefined8 *)(pcVar6 + 0x118);
      uStack_500 = *(undefined8 *)(pcVar6 + 0x120);
      local_4f8 = *(undefined8 *)(pcVar6 + 0x128);
      uStack_4f0 = *(undefined8 *)(pcVar6 + 0x130);
      local_4e8 = *(undefined8 *)(pcVar6 + 0x138);
      uStack_4e0 = *(undefined8 *)(pcVar6 + 0x140);
      local_4d8 = *(undefined8 *)(pcVar6 + 0x148);
      uStack_4d0 = *(undefined8 *)(pcVar6 + 0x150);
      uVar3 = *(undefined8 *)(pcVar6 + 0x158);
      uVar4 = *(undefined8 *)(pcVar6 + 0x160);
      uVar5 = *(undefined8 *)(pcVar11 + -0xb0);
      *(undefined8 *)pcVar8 = *(undefined8 *)pcVar10;
      *(undefined8 *)(pcVar6 + 0xc0) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0xa0);
      *(undefined8 *)(pcVar6 + 200) = *(undefined8 *)(pcVar11 + -0xa8);
      *(undefined8 *)(pcVar6 + 0xd0) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x90);
      *(undefined8 *)(pcVar6 + 0xd8) = *(undefined8 *)(pcVar11 + -0x98);
      *(undefined8 *)(pcVar6 + 0xe0) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x80);
      *(undefined8 *)(pcVar6 + 0xe8) = *(undefined8 *)(pcVar11 + -0x88);
      *(undefined8 *)(pcVar6 + 0xf0) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x70);
      *(undefined8 *)(pcVar6 + 0xf8) = *(undefined8 *)(pcVar11 + -0x78);
      *(undefined8 *)(pcVar6 + 0x100) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x60);
      *(undefined8 *)(pcVar6 + 0x108) = *(undefined8 *)(pcVar11 + -0x68);
      *(undefined8 *)(pcVar6 + 0x110) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x50);
      *(undefined8 *)(pcVar6 + 0x118) = *(undefined8 *)(pcVar11 + -0x58);
      *(undefined8 *)(pcVar6 + 0x120) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x40);
      *(undefined8 *)(pcVar6 + 0x128) = *(undefined8 *)(pcVar11 + -0x48);
      *(undefined8 *)(pcVar6 + 0x130) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x30);
      *(undefined8 *)(pcVar6 + 0x138) = *(undefined8 *)(pcVar11 + -0x38);
      *(undefined8 *)(pcVar6 + 0x140) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x20);
      *(undefined8 *)(pcVar6 + 0x148) = *(undefined8 *)(pcVar11 + -0x28);
      *(undefined8 *)(pcVar6 + 0x150) = uVar5;
      uVar5 = *(undefined8 *)(pcVar11 + -0x10);
      *(undefined8 *)(pcVar6 + 0x158) = *(undefined8 *)(pcVar11 + -0x18);
      *(undefined8 *)(pcVar6 + 0x160) = uVar5;
      *(undefined8 *)(pcVar6 + 0x168) = *(undefined8 *)(pcVar11 + -8);
      *(undefined8 *)pcVar10 = local_568;
      *(undefined8 *)(pcVar11 + -0xb0) = uStack_560;
      *(undefined8 *)(pcVar11 + -0xa8) = local_558;
      *(undefined8 *)(pcVar11 + -0xa0) = uStack_550;
      *(undefined8 *)(pcVar11 + -0x98) = local_548;
      *(undefined8 *)(pcVar11 + -0x90) = uStack_540;
      *(undefined8 *)(pcVar11 + -0x88) = local_538;
      *(undefined8 *)(pcVar11 + -0x80) = uStack_530;
      *(undefined8 *)(pcVar11 + -0x78) = local_528;
      *(undefined8 *)(pcVar11 + -0x70) = uStack_520;
      *(undefined8 *)(pcVar11 + -0x68) = local_518;
      *(undefined8 *)(pcVar11 + -0x60) = uStack_510;
      *(undefined8 *)(pcVar11 + -0x58) = local_508;
      *(undefined8 *)(pcVar11 + -0x50) = uStack_500;
      *(undefined8 *)(pcVar11 + -0x48) = local_4f8;
      *(undefined8 *)(pcVar11 + -0x40) = uStack_4f0;
      *(undefined8 *)(pcVar11 + -0x38) = local_4e8;
      *(undefined8 *)(pcVar11 + -0x30) = uStack_4e0;
      local_4c8._0_4_ = (undefined4)uVar3;
      local_4c8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_4c0._0_4_ = (undefined4)uVar4;
      uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)(pcVar11 + -0x28) = local_4d8;
      *(undefined8 *)(pcVar11 + -0x20) = uStack_4d0;
      *(undefined4 *)(pcVar11 + -0x18) = (undefined4)local_4c8;
      *(undefined4 *)(pcVar11 + -0x14) = local_4c8._4_4_;
      *(undefined4 *)(pcVar11 + -0x10) = (undefined4)uStack_4c0;
      *(undefined4 *)(pcVar11 + -0xc) = uStack_4c0._4_4_;
      *(undefined8 *)(pcVar11 + -8) = local_4b8;
      local_4c8 = uVar3;
      uStack_4c0 = uVar4;
    }
    goto LAB_14113dde0;
  }
  if (pcVar12 != pcVar10) {
    local_4b0 = *(undefined8 *)pcVar12;
    uStack_4a8 = *(undefined8 *)(pcVar12 + 8);
    local_400 = *(undefined8 *)(pcVar12 + 0xb0);
    local_4a0 = *(undefined8 *)(pcVar12 + 0x10);
    uStack_498 = *(undefined8 *)(pcVar12 + 0x18);
    local_490 = *(undefined8 *)(pcVar12 + 0x20);
    uStack_488 = *(undefined8 *)(pcVar12 + 0x28);
    local_480 = *(undefined8 *)(pcVar12 + 0x30);
    uStack_478 = *(undefined8 *)(pcVar12 + 0x38);
    local_470 = *(undefined8 *)(pcVar12 + 0x40);
    uStack_468 = *(undefined8 *)(pcVar12 + 0x48);
    local_460 = *(undefined8 *)(pcVar12 + 0x50);
    uStack_458 = *(undefined8 *)(pcVar12 + 0x58);
    local_450 = *(undefined8 *)(pcVar12 + 0x60);
    uStack_448 = *(undefined8 *)(pcVar12 + 0x68);
    local_440 = *(undefined8 *)(pcVar12 + 0x70);
    uStack_438 = *(undefined8 *)(pcVar12 + 0x78);
    local_430 = *(undefined8 *)(pcVar12 + 0x80);
    uStack_428 = *(undefined8 *)(pcVar12 + 0x88);
    local_420 = *(undefined8 *)(pcVar12 + 0x90);
    uStack_418 = *(undefined8 *)(pcVar12 + 0x98);
    uVar3 = *(undefined8 *)(pcVar12 + 0xa0);
    uVar4 = *(undefined8 *)(pcVar12 + 0xa8);
    uVar5 = *(undefined8 *)(pcVar11 + -0xb0);
    *(undefined8 *)pcVar12 = *(undefined8 *)pcVar10;
    *(undefined8 *)(pcVar12 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0xa0);
    *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)(pcVar11 + -0xa8);
    *(undefined8 *)(pcVar12 + 0x18) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x90);
    *(undefined8 *)(pcVar12 + 0x20) = *(undefined8 *)(pcVar11 + -0x98);
    *(undefined8 *)(pcVar12 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x80);
    *(undefined8 *)(pcVar12 + 0x30) = *(undefined8 *)(pcVar11 + -0x88);
    *(undefined8 *)(pcVar12 + 0x38) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x70);
    *(undefined8 *)(pcVar12 + 0x40) = *(undefined8 *)(pcVar11 + -0x78);
    *(undefined8 *)(pcVar12 + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x60);
    *(undefined8 *)(pcVar12 + 0x50) = *(undefined8 *)(pcVar11 + -0x68);
    *(undefined8 *)(pcVar12 + 0x58) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x50);
    *(undefined8 *)(pcVar12 + 0x60) = *(undefined8 *)(pcVar11 + -0x58);
    *(undefined8 *)(pcVar12 + 0x68) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x40);
    *(undefined8 *)(pcVar12 + 0x70) = *(undefined8 *)(pcVar11 + -0x48);
    *(undefined8 *)(pcVar12 + 0x78) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x30);
    *(undefined8 *)(pcVar12 + 0x80) = *(undefined8 *)(pcVar11 + -0x38);
    *(undefined8 *)(pcVar12 + 0x88) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x20);
    *(undefined8 *)(pcVar12 + 0x90) = *(undefined8 *)(pcVar11 + -0x28);
    *(undefined8 *)(pcVar12 + 0x98) = uVar5;
    uVar5 = *(undefined8 *)(pcVar11 + -0x10);
    *(undefined8 *)(pcVar12 + 0xa0) = *(undefined8 *)(pcVar11 + -0x18);
    *(undefined8 *)(pcVar12 + 0xa8) = uVar5;
    *(undefined8 *)(pcVar12 + 0xb0) = *(undefined8 *)(pcVar11 + -8);
    *(undefined8 *)pcVar10 = local_4b0;
    *(undefined8 *)(pcVar11 + -0xb0) = uStack_4a8;
    *(undefined8 *)(pcVar11 + -0xa8) = local_4a0;
    *(undefined8 *)(pcVar11 + -0xa0) = uStack_498;
    *(undefined8 *)(pcVar11 + -0x98) = local_490;
    *(undefined8 *)(pcVar11 + -0x90) = uStack_488;
    *(undefined8 *)(pcVar11 + -0x88) = local_480;
    *(undefined8 *)(pcVar11 + -0x80) = uStack_478;
    *(undefined8 *)(pcVar11 + -0x78) = local_470;
    *(undefined8 *)(pcVar11 + -0x70) = uStack_468;
    *(undefined8 *)(pcVar11 + -0x68) = local_460;
    *(undefined8 *)(pcVar11 + -0x60) = uStack_458;
    *(undefined8 *)(pcVar11 + -0x58) = local_450;
    *(undefined8 *)(pcVar11 + -0x50) = uStack_448;
    *(undefined8 *)(pcVar11 + -0x48) = local_440;
    *(undefined8 *)(pcVar11 + -0x40) = uStack_438;
    *(undefined8 *)(pcVar11 + -0x38) = local_430;
    *(undefined8 *)(pcVar11 + -0x30) = uStack_428;
    local_410._0_4_ = (undefined4)uVar3;
    local_410._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar4;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)(pcVar11 + -0x28) = local_420;
    *(undefined8 *)(pcVar11 + -0x20) = uStack_418;
    *(undefined4 *)(pcVar11 + -0x18) = (undefined4)local_410;
    *(undefined4 *)(pcVar11 + -0x14) = local_410._4_4_;
    *(undefined4 *)(pcVar11 + -0x10) = (undefined4)uStack_408;
    *(undefined4 *)(pcVar11 + -0xc) = uStack_408._4_4_;
    *(undefined8 *)(pcVar11 + -8) = local_400;
    local_410 = uVar3;
    uStack_408 = uVar4;
  }
  local_628._0_4_ = (int)local_628 + -1;
  pcVar6 = pcVar10 + (-0xb8 - (longlong)pcVar12);
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar9 - (longlong)pcVar8),8) +
          ((longlong)pcVar9 - (longlong)pcVar8);
  if (((longlong)(pcVar6 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar6),8)) >> 7)
      - ((longlong)(pcVar6 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar6),8)) >>
        0x3f) < (lVar7 >> 7) - (lVar7 >> 0x3f)) {
    if (pcVar8 < pcVar9) {
      *plVar13 = (longlong)pcVar8;
      plVar13[1] = (longlong)pcVar9;
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (pcVar10 <= pcVar12 + 0xb8) goto LAB_14113e259;
    pcVar9 = pcVar11 + -0x170;
    pcVar8 = pcVar12;
  }
  else {
    if (pcVar12 + 0xb8 < pcVar10) {
      *plVar13 = (longlong)pcVar12;
      plVar13[1] = (longlong)(pcVar11 + -0x170);
      *(int *)(plVar13 + 2) = (int)local_628;
      plVar13 = plVar13 + 3;
    }
    if (pcVar9 <= pcVar8) goto LAB_14113e259;
  }
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pcVar9 - (longlong)pcVar8),8) +
          ((longlong)pcVar9 - (longlong)pcVar8);
  lVar7 = ((lVar7 >> 7) + 1) - (lVar7 >> 0x3f);
  pcVar12 = pcVar8;
  if ((int)local_628 == 0) goto LAB_14113e24a;
  goto LAB_14113dc30;
}



// FUNCTION 14113e4a0 FUN_14113e4a0 body=2406 status=ok
// SIG undefined FUN_14113e4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14113e4a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_658 [48];
  longlong local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_658;
    fVar15 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0xb8 + param_2 * 0xb8;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_328 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar14 = &local_338;
    do {
      puVar13 = (undefined8 *)*plVar14;
      puVar8 = (undefined8 *)plVar14[1];
      lVar1 = plVar14[2];
      local_628._0_4_ = (int)lVar1;
      lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8)
              + ((longlong)puVar8 - (longlong)puVar13);
      lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
      puVar12 = puVar13;
      if ((int)local_628 != 0) {
LAB_14113e5a0:
        if (8 < lVar6) {
          puVar13 = puVar12 + (lVar6 / 2) * 0x17;
          if (puVar13 != puVar12) {
            local_620 = *puVar13;
            uStack_618 = puVar13[1];
            local_570 = puVar13[0x16];
            local_610 = puVar13[2];
            uStack_608 = puVar13[3];
            local_600 = puVar13[4];
            uStack_5f8 = puVar13[5];
            local_5f0 = puVar13[6];
            uStack_5e8 = puVar13[7];
            local_5e0 = puVar13[8];
            uStack_5d8 = puVar13[9];
            local_5d0 = puVar13[10];
            uStack_5c8 = puVar13[0xb];
            local_5c0 = puVar13[0xc];
            uStack_5b8 = puVar13[0xd];
            local_5b0 = puVar13[0xe];
            uStack_5a8 = puVar13[0xf];
            local_5a0 = puVar13[0x10];
            uStack_598 = puVar13[0x11];
            local_590 = puVar13[0x12];
            uStack_588 = puVar13[0x13];
            uVar2 = puVar13[0x14];
            uVar3 = puVar13[0x15];
            uVar4 = puVar12[1];
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            uVar4 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar4;
            uVar4 = puVar12[5];
            puVar13[4] = puVar12[4];
            puVar13[5] = uVar4;
            uVar4 = puVar12[7];
            puVar13[6] = puVar12[6];
            puVar13[7] = uVar4;
            uVar4 = puVar12[9];
            puVar13[8] = puVar12[8];
            puVar13[9] = uVar4;
            uVar4 = puVar12[0xb];
            puVar13[10] = puVar12[10];
            puVar13[0xb] = uVar4;
            uVar4 = puVar12[0xd];
            puVar13[0xc] = puVar12[0xc];
            puVar13[0xd] = uVar4;
            uVar4 = puVar12[0xf];
            puVar13[0xe] = puVar12[0xe];
            puVar13[0xf] = uVar4;
            uVar4 = puVar12[0x11];
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar4;
            uVar4 = puVar12[0x13];
            puVar13[0x12] = puVar12[0x12];
            puVar13[0x13] = uVar4;
            uVar4 = puVar12[0x15];
            puVar13[0x14] = puVar12[0x14];
            puVar13[0x15] = uVar4;
            puVar13[0x16] = puVar12[0x16];
            *puVar12 = local_620;
            puVar12[1] = uStack_618;
            puVar12[2] = local_610;
            puVar12[3] = uStack_608;
            puVar12[4] = local_600;
            puVar12[5] = uStack_5f8;
            puVar12[6] = local_5f0;
            puVar12[7] = uStack_5e8;
            puVar12[8] = local_5e0;
            puVar12[9] = uStack_5d8;
            puVar12[10] = local_5d0;
            puVar12[0xb] = uStack_5c8;
            puVar12[0xc] = local_5c0;
            puVar12[0xd] = uStack_5b8;
            puVar12[0xe] = local_5b0;
            puVar12[0xf] = uStack_5a8;
            puVar12[0x10] = local_5a0;
            puVar12[0x11] = uStack_598;
            local_580._0_4_ = (undefined4)uVar2;
            local_580._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_578._0_4_ = (undefined4)uVar3;
            uStack_578._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar12[0x12] = local_590;
            puVar12[0x13] = uStack_588;
            *(undefined4 *)(puVar12 + 0x14) = (undefined4)local_580;
            *(undefined4 *)((longlong)puVar12 + 0xa4) = local_580._4_4_;
            *(undefined4 *)(puVar12 + 0x15) = (undefined4)uStack_578;
            *(undefined4 *)((longlong)puVar12 + 0xac) = uStack_578._4_4_;
            puVar12[0x16] = local_570;
            local_580 = uVar2;
            uStack_578 = uVar3;
          }
          puVar10 = puVar8 + 0x17;
          puVar13 = puVar12;
LAB_14113e754:
          puVar9 = puVar13;
          puVar13 = puVar9 + 0x17;
          if (puVar13 <= puVar8) goto code_r0x00014113e760;
          goto LAB_14113e780;
        }
        for (; puVar10 = puVar12, puVar13 = puVar12, puVar12 < puVar8; puVar8 = puVar8 + -0x17) {
          while (puVar9 = puVar10, puVar13 = puVar13 + 0x17, puVar13 <= puVar8) {
            cVar5 = *(char *)(puVar13 + 0x16);
            if (*(char *)(puVar9 + 0x16) == cVar5) {
              cVar5 = (longlong)puVar13[0xf] < (longlong)puVar9[0xf];
            }
            puVar10 = puVar13;
            if (cVar5 == '\0') {
              puVar10 = puVar9;
            }
          }
          if (puVar9 != puVar8) {
            local_3f8 = *puVar9;
            uStack_3f0 = puVar9[1];
            local_348 = puVar9[0x16];
            local_3e8 = puVar9[2];
            uStack_3e0 = puVar9[3];
            local_3d8 = puVar9[4];
            uStack_3d0 = puVar9[5];
            local_3c8 = puVar9[6];
            uStack_3c0 = puVar9[7];
            local_3b8 = puVar9[8];
            uStack_3b0 = puVar9[9];
            local_3a8 = puVar9[10];
            uStack_3a0 = puVar9[0xb];
            local_398 = puVar9[0xc];
            uStack_390 = puVar9[0xd];
            local_388 = puVar9[0xe];
            uStack_380 = puVar9[0xf];
            local_378 = puVar9[0x10];
            uStack_370 = puVar9[0x11];
            local_368 = puVar9[0x12];
            uStack_360 = puVar9[0x13];
            local_358 = puVar9[0x14];
            uStack_350 = puVar9[0x15];
            uVar2 = puVar8[1];
            *puVar9 = *puVar8;
            puVar9[1] = uVar2;
            uVar2 = puVar8[3];
            puVar9[2] = puVar8[2];
            puVar9[3] = uVar2;
            uVar2 = puVar8[5];
            puVar9[4] = puVar8[4];
            puVar9[5] = uVar2;
            uVar2 = puVar8[7];
            puVar9[6] = puVar8[6];
            puVar9[7] = uVar2;
            uVar2 = puVar8[9];
            puVar9[8] = puVar8[8];
            puVar9[9] = uVar2;
            uVar2 = puVar8[0xb];
            puVar9[10] = puVar8[10];
            puVar9[0xb] = uVar2;
            uVar2 = puVar8[0xd];
            puVar9[0xc] = puVar8[0xc];
            puVar9[0xd] = uVar2;
            uVar2 = puVar8[0xf];
            puVar9[0xe] = puVar8[0xe];
            puVar9[0xf] = uVar2;
            uVar2 = puVar8[0x11];
            puVar9[0x10] = puVar8[0x10];
            puVar9[0x11] = uVar2;
            uVar2 = puVar8[0x13];
            puVar9[0x12] = puVar8[0x12];
            puVar9[0x13] = uVar2;
            uVar2 = puVar8[0x15];
            puVar9[0x14] = puVar8[0x14];
            puVar9[0x15] = uVar2;
            puVar9[0x16] = puVar8[0x16];
            *puVar8 = local_3f8;
            puVar8[1] = uStack_3f0;
            puVar8[2] = local_3e8;
            puVar8[3] = uStack_3e0;
            puVar8[4] = local_3d8;
            puVar8[5] = uStack_3d0;
            puVar8[6] = local_3c8;
            puVar8[7] = uStack_3c0;
            puVar8[8] = local_3b8;
            puVar8[9] = uStack_3b0;
            puVar8[10] = local_3a8;
            puVar8[0xb] = uStack_3a0;
            puVar8[0xc] = local_398;
            puVar8[0xd] = uStack_390;
            puVar8[0xe] = local_388;
            puVar8[0xf] = uStack_380;
            puVar8[0x10] = local_378;
            puVar8[0x11] = uStack_370;
            puVar8[0x12] = local_368;
            puVar8[0x13] = uStack_360;
            puVar8[0x14] = local_358;
            puVar8[0x15] = uStack_350;
            puVar8[0x16] = local_348;
          }
        }
        goto LAB_14113ebd4;
      }
LAB_14113ebc5:
      local_628 = lVar1;
      FUN_14113bdc0(puVar13,lVar6,param_3,param_4);
LAB_14113ebd4:
      plVar14 = plVar14 + -3;
    } while (&local_338 <= plVar14);
  }
  return;
code_r0x00014113e760:
  cVar5 = *(char *)(puVar9 + 0x2d);
  if (*(char *)(puVar12 + 0x16) == cVar5) {
    cVar5 = (longlong)puVar9[0x26] < (longlong)puVar12[0xf];
  }
  if (cVar5 == '\0') goto LAB_14113e754;
LAB_14113e780:
  do {
    puVar11 = puVar10;
    puVar10 = puVar11 + -0x17;
    if (puVar10 <= puVar12) break;
    cVar5 = *(char *)(puVar12 + 0x16);
    if (*(char *)(puVar11 + -1) == cVar5) {
      cVar5 = (longlong)puVar12[0xf] < (longlong)puVar11[-8];
    }
  } while (cVar5 == '\0');
  if (puVar13 <= puVar10) {
    if (puVar13 != puVar10) {
      local_568 = *puVar13;
      uStack_560 = puVar9[0x18];
      local_4b8 = puVar9[0x2d];
      local_558 = puVar9[0x19];
      uStack_550 = puVar9[0x1a];
      local_548 = puVar9[0x1b];
      uStack_540 = puVar9[0x1c];
      local_538 = puVar9[0x1d];
      uStack_530 = puVar9[0x1e];
      local_528 = puVar9[0x1f];
      uStack_520 = puVar9[0x20];
      local_518 = puVar9[0x21];
      uStack_510 = puVar9[0x22];
      local_508 = puVar9[0x23];
      uStack_500 = puVar9[0x24];
      local_4f8 = puVar9[0x25];
      uStack_4f0 = puVar9[0x26];
      local_4e8 = puVar9[0x27];
      uStack_4e0 = puVar9[0x28];
      local_4d8 = puVar9[0x29];
      uStack_4d0 = puVar9[0x2a];
      uVar2 = puVar9[0x2b];
      uVar3 = puVar9[0x2c];
      uVar4 = puVar11[-0x16];
      *puVar13 = *puVar10;
      puVar9[0x18] = uVar4;
      uVar4 = puVar11[-0x14];
      puVar9[0x19] = puVar11[-0x15];
      puVar9[0x1a] = uVar4;
      uVar4 = puVar11[-0x12];
      puVar9[0x1b] = puVar11[-0x13];
      puVar9[0x1c] = uVar4;
      uVar4 = puVar11[-0x10];
      puVar9[0x1d] = puVar11[-0x11];
      puVar9[0x1e] = uVar4;
      uVar4 = puVar11[-0xe];
      puVar9[0x1f] = puVar11[-0xf];
      puVar9[0x20] = uVar4;
      uVar4 = puVar11[-0xc];
      puVar9[0x21] = puVar11[-0xd];
      puVar9[0x22] = uVar4;
      uVar4 = puVar11[-10];
      puVar9[0x23] = puVar11[-0xb];
      puVar9[0x24] = uVar4;
      uVar4 = puVar11[-8];
      puVar9[0x25] = puVar11[-9];
      puVar9[0x26] = uVar4;
      uVar4 = puVar11[-6];
      puVar9[0x27] = puVar11[-7];
      puVar9[0x28] = uVar4;
      uVar4 = puVar11[-4];
      puVar9[0x29] = puVar11[-5];
      puVar9[0x2a] = uVar4;
      uVar4 = puVar11[-2];
      puVar9[0x2b] = puVar11[-3];
      puVar9[0x2c] = uVar4;
      puVar9[0x2d] = puVar11[-1];
      *puVar10 = local_568;
      puVar11[-0x16] = uStack_560;
      puVar11[-0x15] = local_558;
      puVar11[-0x14] = uStack_550;
      puVar11[-0x13] = local_548;
      puVar11[-0x12] = uStack_540;
      puVar11[-0x11] = local_538;
      puVar11[-0x10] = uStack_530;
      puVar11[-0xf] = local_528;
      puVar11[-0xe] = uStack_520;
      puVar11[-0xd] = local_518;
      puVar11[-0xc] = uStack_510;
      puVar11[-0xb] = local_508;
      puVar11[-10] = uStack_500;
      puVar11[-9] = local_4f8;
      puVar11[-8] = uStack_4f0;
      puVar11[-7] = local_4e8;
      puVar11[-6] = uStack_4e0;
      local_4c8._0_4_ = (undefined4)uVar2;
      local_4c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_4c0._0_4_ = (undefined4)uVar3;
      uStack_4c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar11[-5] = local_4d8;
      puVar11[-4] = uStack_4d0;
      *(undefined4 *)(puVar11 + -3) = (undefined4)local_4c8;
      *(undefined4 *)((longlong)puVar11 + -0x14) = local_4c8._4_4_;
      *(undefined4 *)(puVar11 + -2) = (undefined4)uStack_4c0;
      *(undefined4 *)((longlong)puVar11 + -0xc) = uStack_4c0._4_4_;
      puVar11[-1] = local_4b8;
      local_4c8 = uVar2;
      uStack_4c0 = uVar3;
    }
    goto LAB_14113e754;
  }
  if (puVar12 != puVar10) {
    local_4b0 = *puVar12;
    uStack_4a8 = puVar12[1];
    local_400 = puVar12[0x16];
    local_4a0 = puVar12[2];
    uStack_498 = puVar12[3];
    local_490 = puVar12[4];
    uStack_488 = puVar12[5];
    local_480 = puVar12[6];
    uStack_478 = puVar12[7];
    local_470 = puVar12[8];
    uStack_468 = puVar12[9];
    local_460 = puVar12[10];
    uStack_458 = puVar12[0xb];
    local_450 = puVar12[0xc];
    uStack_448 = puVar12[0xd];
    local_440 = puVar12[0xe];
    uStack_438 = puVar12[0xf];
    local_430 = puVar12[0x10];
    uStack_428 = puVar12[0x11];
    local_420 = puVar12[0x12];
    uStack_418 = puVar12[0x13];
    uVar2 = puVar12[0x14];
    uVar3 = puVar12[0x15];
    uVar4 = puVar11[-0x16];
    *puVar12 = *puVar10;
    puVar12[1] = uVar4;
    uVar4 = puVar11[-0x14];
    puVar12[2] = puVar11[-0x15];
    puVar12[3] = uVar4;
    uVar4 = puVar11[-0x12];
    puVar12[4] = puVar11[-0x13];
    puVar12[5] = uVar4;
    uVar4 = puVar11[-0x10];
    puVar12[6] = puVar11[-0x11];
    puVar12[7] = uVar4;
    uVar4 = puVar11[-0xe];
    puVar12[8] = puVar11[-0xf];
    puVar12[9] = uVar4;
    uVar4 = puVar11[-0xc];
    puVar12[10] = puVar11[-0xd];
    puVar12[0xb] = uVar4;
    uVar4 = puVar11[-10];
    puVar12[0xc] = puVar11[-0xb];
    puVar12[0xd] = uVar4;
    uVar4 = puVar11[-8];
    puVar12[0xe] = puVar11[-9];
    puVar12[0xf] = uVar4;
    uVar4 = puVar11[-6];
    puVar12[0x10] = puVar11[-7];
    puVar12[0x11] = uVar4;
    uVar4 = puVar11[-4];
    puVar12[0x12] = puVar11[-5];
    puVar12[0x13] = uVar4;
    uVar4 = puVar11[-2];
    puVar12[0x14] = puVar11[-3];
    puVar12[0x15] = uVar4;
    puVar12[0x16] = puVar11[-1];
    *puVar10 = local_4b0;
    puVar11[-0x16] = uStack_4a8;
    puVar11[-0x15] = local_4a0;
    puVar11[-0x14] = uStack_498;
    puVar11[-0x13] = local_490;
    puVar11[-0x12] = uStack_488;
    puVar11[-0x11] = local_480;
    puVar11[-0x10] = uStack_478;
    puVar11[-0xf] = local_470;
    puVar11[-0xe] = uStack_468;
    puVar11[-0xd] = local_460;
    puVar11[-0xc] = uStack_458;
    puVar11[-0xb] = local_450;
    puVar11[-10] = uStack_448;
    puVar11[-9] = local_440;
    puVar11[-8] = uStack_438;
    puVar11[-7] = local_430;
    puVar11[-6] = uStack_428;
    local_410._0_4_ = (undefined4)uVar2;
    local_410._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_408._0_4_ = (undefined4)uVar3;
    uStack_408._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    puVar11[-5] = local_420;
    puVar11[-4] = uStack_418;
    *(undefined4 *)(puVar11 + -3) = (undefined4)local_410;
    *(undefined4 *)((longlong)puVar11 + -0x14) = local_410._4_4_;
    *(undefined4 *)(puVar11 + -2) = (undefined4)uStack_408;
    *(undefined4 *)((longlong)puVar11 + -0xc) = uStack_408._4_4_;
    puVar11[-1] = local_400;
    local_410 = uVar2;
    uStack_408 = uVar3;
  }
  local_628._0_4_ = (int)local_628 + -1;
  lVar6 = (longlong)puVar10 + (-0xb8 - (longlong)puVar12);
  lVar6 = lVar6 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar6),8);
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8) +
          ((longlong)puVar8 - (longlong)puVar13);
  if ((lVar6 >> 7) - (lVar6 >> 0x3f) < (lVar7 >> 7) - (lVar7 >> 0x3f)) {
    if (puVar13 < puVar8) {
      *plVar14 = (longlong)puVar13;
      plVar14[1] = (longlong)puVar8;
      *(int *)(plVar14 + 2) = (int)local_628;
      plVar14 = plVar14 + 3;
    }
    if (puVar10 <= puVar12 + 0x17) goto LAB_14113ebd4;
    puVar8 = puVar11 + -0x2e;
    puVar13 = puVar12;
  }
  else {
    if (puVar12 + 0x17 < puVar10) {
      *plVar14 = (longlong)puVar12;
      plVar14[1] = (longlong)(puVar11 + -0x2e);
      *(int *)(plVar14 + 2) = (int)local_628;
      plVar14 = plVar14 + 3;
    }
    if (puVar8 <= puVar13) goto LAB_14113ebd4;
  }
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)puVar8 - (longlong)puVar13),8) +
          ((longlong)puVar8 - (longlong)puVar13);
  lVar6 = ((lVar6 >> 7) + 1) - (lVar6 >> 0x3f);
  puVar12 = puVar13;
  if ((int)local_628 == 0) goto LAB_14113ebc5;
  goto LAB_14113e5a0;
}



// FUNCTION 14113ee10 FUN_14113ee10 body=617 status=ok
// SIG undefined FUN_14113ee10(void)

bool FUN_14113ee10(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
  if (lVar9 == 0) goto LAB_14113f024;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14113ef67;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14133ae80();
LAB_14113ef67:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14113efdb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_14133ae80();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14113efdb;
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
LAB_14113f024:
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



// FUNCTION 14113f080 FUN_14113f080 body=617 status=ok
// SIG undefined FUN_14113f080(void)

bool FUN_14113f080(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
  if (lVar9 == 0) goto LAB_14113f294;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14113f1d7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_14113f1d7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14113f24b:
    lVar9 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14113f24b;
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
LAB_14113f294:
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



// FUNCTION 14113f2f0 FUN_14113f2f0 body=879 status=ok
// SIG undefined FUN_14113f2f0(void)

bool FUN_14113f2f0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_14113f3af:
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
      if (iVar8 < 1) goto LAB_14113f3af;
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
            goto LAB_14113f3c4;
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
LAB_14113f3c4:
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
  if (local_68 == 0) goto LAB_14113f5ff;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14113f54d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14133b2a0();
LAB_14113f54d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_14113f5c6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_14133b2a0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14113f5c6;
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
LAB_14113f5ff:
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



// FUNCTION 14113f660 FUN_14113f660 body=617 status=ok
// SIG undefined FUN_14113f660(void)

bool FUN_14113f660(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
  if (lVar9 == 0) goto LAB_14113f874;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_14113f7b7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14133b090();
LAB_14113f7b7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14113f82b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_14133b090();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14113f82b;
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
LAB_14113f874:
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



// FUNCTION 14113f8d0 FUN_14113f8d0 body=879 status=ok
// SIG undefined FUN_14113f8d0(void)

bool FUN_14113f8d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_14113f98f:
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
      if (iVar8 < 1) goto LAB_14113f98f;
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
            goto LAB_14113f9a4;
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
LAB_14113f9a4:
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
  if (local_68 == 0) goto LAB_14113fbdf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14113fb2d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UUGGameViewportClient::StaticClass();
LAB_14113fb2d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_14113fba6:
    lVar11 = 0;
  }
  else {
    lVar10 = UUGGameViewportClient::StaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14113fba6;
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
LAB_14113fbdf:
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



// FUNCTION 14113fc40 FUN_14113fc40 body=879 status=ok
// SIG undefined FUN_14113fc40(void)

bool FUN_14113fc40(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_14113fcff:
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
      if (iVar8 < 1) goto LAB_14113fcff;
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
            goto LAB_14113fd14;
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
LAB_14113fd14:
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
  if (local_68 == 0) goto LAB_14113ff4f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14113fe9d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a61e0();
LAB_14113fe9d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_14113ff16:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a61e0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_14113ff16;
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
LAB_14113ff4f:
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



// FUNCTION 14113ffb0 FUN_14113ffb0 body=617 status=ok
// SIG undefined FUN_14113ffb0(void)

bool FUN_14113ffb0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
  if (lVar9 == 0) goto LAB_1411401c4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_141140107;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_141140107:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_14114017b:
    lVar9 = 0;
  }
  else {
    lVar10 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14114017b;
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
LAB_1411401c4:
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



// FUNCTION 141140220 FUN_141140220 body=823 status=ok
// SIG undefined FUN_141140220(void)

int FUN_141140220(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  bool bVar19;
  int local_res20;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar2 = (int)param_1[1];
  bVar18 = false;
  if (iVar2 == 0) {
    return 0;
  }
  plVar17 = (longlong *)((undefined8 *)*param_1)[1];
  local_58 = *(undefined8 *)*param_1;
  local_res20 = 0;
  plVar11 = plVar17 + 1;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar11 = (int)*plVar11 + 1;
    UNLOCK();
  }
  local_50 = plVar17;
  cVar7 = FUN_141144280(param_2,&local_58);
  bVar19 = cVar7 == '\0';
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  lVar12 = 0;
  plVar11 = param_1;
  iVar14 = 0;
LAB_14114031d:
  lVar12 = lVar12 + 1;
  lVar16 = lVar12 * 0x10;
  iVar15 = iVar14;
  do {
    iVar15 = iVar15 + 1;
    if (lVar12 < iVar2) {
      plVar11 = *(longlong **)(lVar16 + 8 + *param_1);
      plVar17 = *(longlong **)(lVar16 + *param_1);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      bVar18 = true;
      puVar8 = (undefined8 *)(**(code **)(*plVar17 + 8))(plVar17,local_48);
      plVar17 = (longlong *)*puVar8;
      plVar9 = (longlong *)FName::FName(local_68,L"SPARK",1);
      plVar10 = (longlong *)(**(code **)(*plVar17 + 8))(plVar17,local_60);
      plVar17 = local_40;
      lVar3 = *plVar9;
      lVar4 = *plVar10;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (bVar19 != (lVar4 == lVar3)) goto LAB_1411403e8;
      bVar5 = true;
    }
    else {
LAB_1411403e8:
      bVar5 = false;
    }
    if ((bVar18) && (bVar18 = false, plVar11 != (longlong *)0x0)) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar3 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (!bVar5) break;
    lVar12 = lVar12 + 1;
    lVar16 = lVar16 + 0x10;
  } while( true );
  iVar13 = iVar15 - iVar14;
  if (bVar19 == false) {
    if (iVar13 != 0) {
      plVar17 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *param_1);
      do {
        plVar9 = (longlong *)*plVar17;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar9 + 1;
          lVar16 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        plVar17 = plVar17 + 2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  else {
    if (local_res20 != iVar14) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res20 * 0x10 + *param_1),
                 (void *)((longlong)iVar14 * 0x10 + *param_1),(longlong)iVar13 << 4);
    }
    local_res20 = local_res20 + iVar13;
  }
  bVar19 = (bool)(bVar19 ^ 1);
  iVar14 = iVar15;
  if (iVar2 <= lVar12) {
    *(int *)(param_1 + 1) = local_res20;
    return iVar2 - local_res20;
  }
  goto LAB_14114031d;
}



// FUNCTION 141140560 FUN_141140560 body=538 status=ok
// SIG undefined FUN_141140560(void)

int FUN_141140560(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar7 = FUN_140b17750(*param_1,*param_2);
  bVar12 = cVar7 == '\0';
  iVar9 = 0;
  do {
    iVar5 = iVar9;
    do {
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) break;
      cVar7 = FUN_140b17750((longlong)iVar5 * 0xb8 + *param_1,*param_2);
    } while (bVar12 == (cVar7 == '\0'));
    iVar8 = iVar5 - iVar9;
    if (bVar12 == false) {
      if (iVar8 != 0) {
        plVar10 = (longlong *)((longlong)iVar9 * 0xb8 + 0x68 + *param_1);
        do {
          FUN_1404bf980(plVar10 + 4);
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          if (plVar10[-3] != 0) {
            FMemory::Free();
          }
          plVar4 = (longlong *)plVar10[-5];
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
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = (longlong *)plVar10[-8];
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
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = (longlong *)plVar10[-0xb];
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
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar10 = plVar10 + 0x17;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0xb8 + *param_1),
                   (void *)((longlong)iVar9 * 0xb8 + *param_1),(longlong)iVar8 * 0xb8);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar9 = iVar5;
    if (iVar3 <= iVar5) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 141140780 FUN_141140780 body=216 status=ok
// SIG undefined FUN_141140780(void)

longlong FUN_141140780(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  FString::FString();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  FText::FText(param_1 + 0x18,param_2 + 0x18);
  FText::FText(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar4 = *(int *)(param_2 + 0x50);
  lVar2 = *(longlong *)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1 + 0x48,iVar4,0);
    puVar5 = *(undefined1 **)(param_1 + 0x48);
    puVar3 = (undefined4 *)(lVar2 + 4);
    do {
      *puVar5 = *(undefined1 *)(puVar3 + -1);
      puVar5[1] = *(undefined1 *)((longlong)puVar3 + -3);
      *(undefined4 *)(puVar5 + 4) = *puVar3;
      FString::FString(puVar5 + 8,puVar3 + 1);
      FText::FText(puVar5 + 0x18,puVar3 + 5);
      puVar1 = puVar3 + 0xb;
      puVar3 = puVar3 + 0xe;
      puVar5[0x30] = *(undefined1 *)puVar1;
      puVar5 = puVar5 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 141140860 FUN_141140860 body=102 status=ok
// SIG undefined FUN_141140860(void)

void FUN_141140860(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined ***)(param_1 + 0x38) = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x48);
    *(undefined ***)(param_1 + 0x38) = &PTR_FUN_1440385e0;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined ***)(param_1 + 8) = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x18);
    *(undefined ***)(param_1 + 8) = &PTR_FUN_1440385e0;
  }
  return;
}



// FUNCTION 1411408d0 ~<lambda_d8e34ae39ecb18b94489326e440868a5> body=142 status=ok
// SIG undefined ~<lambda_d8e34ae39ecb18b94489326e440868a5>(void)

void <lambda_d8e34ae39ecb18b94489326e440868a5>::~<lambda_d8e34ae39ecb18b94489326e440868a5>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 141140960 FUN_141140960 body=104 status=ok
// SIG undefined FUN_141140960(void)

void FUN_141140960(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140ce29d0(param_1 + 10);
  plVar4 = *(longlong **)(param_1 + 4);
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
  FUN_1416f8340(*param_1);
  return;
}



// FUNCTION 1411409d0 FUN_1411409d0 body=187 status=ok
// SIG undefined FUN_1411409d0(void)

void FUN_1411409d0(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x30);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-5];
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
      plVar7 = plVar7 + 10;
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



// FUNCTION 141140a90 FUN_141140a90 body=146 status=ok
// SIG undefined FUN_141140a90(void)

void FUN_141140a90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = IDelegateInstance::vftable;
    return;
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 141140b30 FUN_141140b30 body=203 status=ok
// SIG undefined FUN_141140b30(void)

void FUN_141140b30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_1[10];
  lVar4 = param_1[9];
  if (iVar5 != 0) {
    do {
      FUN_140da9460(lVar4);
      lVar4 = lVar4 + 0x38;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = param_1[9];
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
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
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141140c00 FUN_141140c00 body=108 status=ok
// SIG undefined FUN_141140c00(void)

void FUN_141140c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
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



// FUNCTION 141140c70 FUN_141140c70 body=198 status=ok
// SIG undefined FUN_141140c70(void)

longlong * FUN_141140c70(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_1411409d0(lVar4);
      lVar4 = lVar4 + 0x10;
    }
    iVar2 = (int)param_2[1];
    puVar1 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar2);
      puVar3 = (undefined8 *)*param_1;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        FUN_14113a050(puVar3,*puVar1,*(undefined4 *)(puVar1 + 1),0,0);
        puVar3 = puVar3 + 2;
        puVar1 = puVar1 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 141140d40 FUN_141140d40 body=371 status=ok
// SIG undefined FUN_141140d40(void)

longlong * FUN_141140d40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    lVar5 = *param_1;
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(lVar5 + 0x68);
      do {
        FUN_1404bf980(plVar7 + 4);
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        if (plVar7[-3] != 0) {
          FMemory::Free();
        }
        plVar4 = (longlong *)plVar7[-5];
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
        plVar4 = (longlong *)plVar7[-8];
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
        plVar4 = (longlong *)plVar7[-0xb];
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
        plVar7 = plVar7 + 0x17;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 141140ec0 FUN_141140ec0 body=173 status=ok
// SIG undefined FUN_141140ec0(void)

undefined1 * FUN_141140ec0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FText::operator=(param_1 + 8,param_2 + 8);
  FText::operator=(param_1 + 0x20,param_2 + 0x20);
  FText::operator=(param_1 + 0x38,param_2 + 0x38);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FString::operator=(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_1404c0940(param_1 + 0x88,param_2 + 0x88);
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  return param_1;
}



// FUNCTION 141140f70 FUN_141140f70 body=724 status=ok
// SIG undefined FUN_141140f70(void)

void FUN_141140f70(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_48 [4];
  undefined1 local_28 [16];
  
  local_48[1] = 10;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],10,"mail_type",10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_48,*(undefined1 *)(*param_1 + 0xf18));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(*param_1 + 0xb30) != 0) {
    local_48[0] = 0;
    local_48[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[0],10,"player_id",10,0x3f);
    (**(code **)*param_3)(param_3,local_48,param_1 + 1);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_48[0] = 0;
    local_48[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_48[0],0x16,"player_character_guid",0x16,0x3f);
    uVar4 = FUN_140cfc220(*(undefined8 *)(*param_1 + 0xb30),local_28);
    FUN_141682af0(uVar4,local_48 + 2,0);
    (**(code **)(*param_3 + 8))(param_3,local_48,local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  local_48[0] = 0;
  local_48[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x13,"item_serial_number",0x13,0x3f);
  (**(code **)(*param_3 + 8))(param_3,local_48,*param_1 + 0xf68);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(*param_1 + 0xfa8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(*param_1 + 0xfa8) + 0x20))();
    if (cVar3 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x11,"source_player_id",0x11,0x3f);
      (**(code **)*param_3)(param_3,local_48,*param_1 + 0xfa8);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  lVar1 = *param_1;
  plVar5 = (longlong *)FDateTime::UtcNow(local_res8);
  local_48[0] = 0;
  local_48[1] = 0x24;
  lVar2 = *plVar5;
  lVar1 = *(longlong *)(lVar1 + 0xf90);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_48[0],0x24,"elapsed_time_before_read_in_seconds",0x24,0x3f);
  (**(code **)(*param_3 + 0x28))(param_3,local_48,(longlong)((double)(lVar2 - lVar1) * 1e-07));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141141250 FUN_141141250 body=185 status=ok
// SIG undefined FUN_141141250(void)

void FUN_141141250(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1413565b0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
      uVar5 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar3 = (**(code **)(*param_3 + 0x340))(param_3);
        lVar2 = FUN_1411e3830(uVar3);
        if (lVar2 == *(longlong *)(param_1 + 8)) {
          uVar4 = 1;
        }
        else {
          uVar5 = 1;
        }
      }
      FUN_140f4c9a0(param_3,uVar5);
      FUN_142ed2820(param_3,uVar4,1);
    }
  }
  return;
}



// FUNCTION 141141310 FUN_141141310 body=1030 status=ok
// SIG undefined FUN_141141310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141141310(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined4 local_1b0;
  longlong local_1a8 [7];
  longlong *plStack_170;
  longlong local_168;
  longlong *plStack_160;
  undefined4 local_158 [2];
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [184];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1b4 = (undefined4)param_1[1];
  local_1b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_1b8);
  FUN_14172a400(local_1b8);
  cVar4 = FWeakObjectPtr::IsValid(&local_1b4);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_1b4);
    lVar7 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar10 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((((*(uint *)(lVar7 + 8) & 0x30000000) == 0) && ((char)param_1[3] != '\0')) &&
       (lVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c)), lVar7 != 0)) {
      local_1a8[4] = 0;
      local_1a8[5] = 0;
      cVar4 = FUN_1416791b0(param_1[2] + 0x50,0,local_1a8 + 4);
      if (cVar4 != '\0') {
        uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c));
        FUN_142dcf3a0(uVar8,local_1a8 + 6);
        if (local_1a8[6] != 0) {
          lVar7 = param_1[2];
          local_158[0] = 0xffffffff;
          uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c));
          FUN_14170c210(local_158,uVar8);
          local_150 = local_1a8[6];
          local_148 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
          }
          local_140 = local_1a8[4];
          uStack_138 = local_1a8[5];
          FUN_140ce1220(local_130,lVar7);
          local_48 = (longlong *)0x0;
          local_38 = 0;
          puVar9 = (undefined8 *)FUN_140438ef0(0xe8,local_68);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_FUN_1446d0340;
            *(undefined4 *)(puVar9 + 1) = local_158[0];
            local_158[0] = 0xffffffff;
            puVar9[2] = local_150;
            puVar9[3] = local_148;
            local_148 = (longlong *)0x0;
            local_150 = 0;
            puVar9[4] = local_140;
            puVar9[5] = uStack_138;
            FUN_140ce1220(puVar9 + 6,local_130);
          }
          local_1a8[2] = 0;
          local_78[0] = &LAB_14114ba60;
          local_1a8[3] = 0x1a;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8 + 2,0);
          local_1c8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>
                    (local_1a8[2],0x1a,"mailsystem_mail_processed");
          local_1a8[0] = 0;
          local_1a8[1] = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
          FGenericPlatformString::Memcpy(local_1a8[0],L"gbxtelemetry",0x1a);
          local_168 = local_1a8[6];
          plStack_160 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
          }
          FUN_142b62c30(&local_168,local_1a8,local_1a8 + 2,local_78);
          plVar11 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_160 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
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
          if (local_1a8[0] != 0) {
            FMemory::Free();
          }
          if (local_1a8[2] != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            plVar11 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar11 = local_48;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          FUN_140ce29d0(local_130);
          plVar11 = local_148;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_148 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_148)(local_148);
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
          FUN_1416f8340(local_158[0]);
        }
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_170 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar2 = (int *)((longlong)plStack_170 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_170 + 8))(plStack_170,1);
            }
          }
        }
        uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x1c));
        FUN_140aa34d0(uVar8,local_1a8 + 4,1);
        LOCK();
        *(undefined4 *)(*param_1 + 0xff0) = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)(*param_1 + 0xff8) = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 141141720 FUN_141141720 body=108 status=ok
// SIG undefined FUN_141141720(void)

bool FUN_141141720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_2);
  uVar4 = 0;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar1 = FWeakObjectPtr::Get(param_2);
    uVar3 = FUN_1404cfc20(uVar1);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_3);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_3);
    uVar4 = FUN_1404cfc20(uVar1);
  }
  return uVar3 < uVar4;
}



// FUNCTION 141141790 FUN_141141790 body=1817 status=ok
// SIG undefined FUN_141141790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141141790(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  undefined4 *puStack_2a0;
  undefined4 *local_298;
  undefined4 *puStack_290;
  undefined4 *local_288;
  ulonglong *puStack_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8 [2];
  undefined8 local_e0;
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  ulonglong uVar9;
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  lVar7 = *param_1;
  plVar4 = *(longlong **)(lVar7 + 0x820);
  if (plVar4 != (longlong *)0x0) {
    uVar8 = (uint)param_2;
    if (uVar8 == 1) {
      lVar7 = lVar7 + 0x770;
      uVar9 = 0;
    }
    else if (uVar8 == 2) {
      lVar7 = lVar7 + 0x7a0;
      uVar9 = 0;
    }
    else {
      uVar8 = uVar8 - 3;
      uVar9 = (ulonglong)uVar8;
      if (uVar8 == 0) {
        lVar7 = lVar7 + 0x710;
      }
      else {
        if (uVar8 != 1) goto LAB_141141817;
        lVar7 = lVar7 + 0x728;
      }
    }
    (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar7,CONCAT71((int7)(uVar9 >> 8),1),0);
  }
LAB_141141817:
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x828) != 0) {
    if (param_2 == 1) {
      puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_f8,lVar7 + 0x788);
      local_288 = local_58;
      local_58[0] = 0;
      local_30 = '\0';
      local_50 = 0;
      local_278 = *puVar6;
      puStack_280 = local_28;
      local_270 = puVar6[1];
      if (local_270 != 0) {
        LOCK();
        *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
        UNLOCK();
      }
      local_208 = local_288;
      uStack_200 = puStack_280;
      uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
      uVar5 = FText::Format(local_140,&local_278,uVar5);
      FText::FText(local_1a0,uVar5);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_138 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8);
      if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      (**(code **)(**(longlong **)(*param_1 + 0x828) + 0x2b0))
                (*(longlong **)(*param_1 + 0x828),local_1a0,1,0);
    }
    else if (param_2 == 2) {
      plVar4 = (longlong *)FTextFormat::FTextFormat(local_108,lVar7 + 0x7b8);
      local_298 = local_88;
      local_88[0] = 0;
      local_60 = '\0';
      local_80 = 0;
      local_288 = (undefined4 *)*plVar4;
      puStack_290 = local_58;
      puStack_280 = (ulonglong *)plVar4[1];
      if (puStack_280 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puStack_280 + 1) = (int)puStack_280[1] + 1;
        UNLOCK();
      }
      local_228 = local_298;
      uStack_220 = puStack_290;
      uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_228);
      uVar5 = FText::Format(local_158,&local_288,uVar5);
      FText::FText(local_1b8,uVar5);
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)local_150 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_218);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar4 = (longlong *)plVar4[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      (**(code **)(**(longlong **)(*param_1 + 0x828) + 0x2b0))
                (*(longlong **)(*param_1 + 0x828),local_1b8,1,0);
      local_198 = local_1b0;
    }
    else if (param_2 == 3) {
      plVar4 = (longlong *)FTextFormat::FTextFormat(local_118,lVar7 + 0x740);
      local_2a8 = local_b8;
      local_b8[0] = 0;
      local_90 = '\0';
      local_b0 = 0;
      local_298 = (undefined4 *)*plVar4;
      puStack_2a0 = local_88;
      puStack_290 = (undefined4 *)plVar4[1];
      if (puStack_290 != (undefined4 *)0x0) {
        LOCK();
        puStack_290[2] = puStack_290[2] + 1;
        UNLOCK();
      }
      local_248 = local_2a8;
      uStack_240 = puStack_2a0;
      uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
      uVar5 = FText::Format(local_170,&local_298,uVar5);
      FText::FText(local_1d0,uVar5);
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_168 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar2 = (int *)((longlong)local_168 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_238);
      if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      plVar4 = (longlong *)plVar4[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      (**(code **)(**(longlong **)(*param_1 + 0x828) + 0x2b0))
                (*(longlong **)(*param_1 + 0x828),local_1d0,1,0);
      local_198 = local_1c8;
    }
    else {
      if (param_2 != 4) {
        return;
      }
      plVar4 = (longlong *)FTextFormat::FTextFormat(local_128,lVar7 + 0x758);
      local_268 = local_e8;
      local_e8[0] = 0;
      uStack_260 = local_b8;
      local_c0 = '\0';
      local_e0 = 0;
      local_2a8 = (undefined4 *)*plVar4;
      puStack_2a0 = (undefined4 *)plVar4[1];
      if (puStack_2a0 != (undefined4 *)0x0) {
        LOCK();
        puStack_2a0[2] = puStack_2a0[2] + 1;
        UNLOCK();
      }
      uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_258,&local_268);
      uVar5 = FText::Format(local_188,&local_2a8,uVar5);
      FText::FText(local_1e8,uVar5);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_180 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar2 = (int *)((longlong)local_180 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_258);
      if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_d0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      plVar4 = (longlong *)plVar4[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      (**(code **)(**(longlong **)(*param_1 + 0x828) + 0x2b0))
                (*(longlong **)(*param_1 + 0x828),local_1e8,1,0);
      local_198 = local_1e0;
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_198 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar2 = (int *)((longlong)local_198 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141141eb0 FUN_141141eb0 body=518 status=ok
// SIG undefined FUN_141141eb0(void)

void FUN_141141eb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  int local_38;
  
  if (*(longlong *)(*param_1 + 0x318) != 0) {
    plVar5 = (longlong *)param_1[2];
    plVar6 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_1[4];
    lVar8 = param_1[3];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    FString::PrintfImpl(local_a8,L"PlayerProfileImage_%02d_nopack",*(undefined4 *)(*param_1 + 0x34c)
                       );
    iVar4 = *(int *)(*param_1 + 0x34c);
    puVar10 = (undefined8 *)(**(code **)(*plVar6 + 8))(plVar6,local_98);
    local_88 = *puVar10;
    local_80 = puVar10[1];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_68 = plVar6;
    local_60 = plVar5;
    local_58 = lVar8;
    local_50 = plVar7;
    FString::FString(local_48,local_a8);
    local_38 = iVar4 + 2;
    FUN_1411f82f0(*(undefined8 *)(*param_1 + 0x318),&local_88);
    FUN_14106efa0(&local_88);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411420c0 FUN_1411420c0 body=279 status=ok
// SIG undefined FUN_1411420c0(void)

void FUN_1411420c0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x7f8) != 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x7f8) + 0x170);
        (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined1 *)((longlong)param_1 + 0x14));
        lVar4 = *param_1;
      }
      if (*(longlong *)(lVar4 + 0x800) != 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x800) + 0x170);
        (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined1 *)((longlong)param_1 + 0x14));
        lVar4 = *param_1;
      }
      if (*(longlong *)(lVar4 + 0x810) != 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x810) + 0x170);
        (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined1 *)((longlong)param_1 + 0x14));
        lVar4 = *param_1;
      }
      if (*(longlong *)(lVar4 + 0x830) != 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x830) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x0001411421cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined1 *)((longlong)param_1 + 0x14));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411421e0 FUN_1411421e0 body=154 status=ok
// SIG undefined FUN_1411421e0(void)

void FUN_1411421e0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_1411563e0(*param_1,param_1 + 2);
      return;
    }
  }
  return;
}



// FUNCTION 141142280 FUN_141142280 body=786 status=ok
// SIG undefined FUN_141142280(void)

void FUN_141142280(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong **pplVar12;
  bool bVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar11 = (longlong *)0x0;
  bVar5 = false;
  plVar6 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1411422fa;
  }
  plVar6 = plVar11;
LAB_1411422fa:
  bVar13 = *(longlong *)(*param_1 + 0x828) == 0;
  if (bVar13) {
    puVar8 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    plVar9 = plVar11;
  }
  else {
    puVar8 = (undefined8 *)FUN_142dcf3a0(*(longlong *)(*param_1 + 0x828),local_38);
    plVar9 = (longlong *)*puVar8;
  }
  plVar4 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  *puVar8 = 0;
  plVar10 = plStack_50;
  if ((bVar13) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  if ((!bVar13) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (((plVar6 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) &&
     (*(longlong *)(*param_1 + 0x948) == 0)) {
    lVar7 = operator_new(0x30);
    plVar10 = plVar11;
    if (lVar7 != 0) {
      local_78 = SUB84(plVar9,0);
      uStack_74 = (undefined4)((ulonglong)plVar9 >> 0x20);
      uStack_70 = SUB84(plVar4,0);
      uStack_6c = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar10 = (longlong *)FUN_140d646b0(lVar7,plVar6,&local_48);
      bVar5 = true;
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_1446487c8;
      plVar6[2] = (longlong)plVar10;
      plVar11 = plVar6;
    }
    lVar7 = *param_1;
    pplVar12 = (longlong **)(lVar7 + 0x948);
    local_68 = plVar10;
    local_60 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar10,plVar10);
    if (pplVar12 != &local_68) {
      *pplVar12 = plVar10;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x950,&local_60);
      plVar11 = local_60;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar11 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if ((bVar5) && (plVar11 = (longlong *)CONCAT44(uStack_3c,uStack_40), plVar11 != (longlong *)0x0)
       ) {
      LOCK();
      plVar6 = plVar11 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
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
  return;
}



// FUNCTION 1411425a0 FUN_1411425a0 body=1229 status=ok
// SIG undefined FUN_1411425a0(void)

void FUN_1411425a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  undefined8 *local_130;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong *plStack_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  puVar15 = (undefined8 *)0x0;
  local_res8[0] = 0;
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar11 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar11 != '\0') {
    lVar13 = FWeakObjectPtr::Get(&local_res10);
    iVar18 = *(int *)(lVar13 + 0xc);
    puVar14 = puVar15;
    if (iVar18 < (int)DAT_1469e91c4) {
      uVar17 = iVar18 >> 0x1f & 0xffff;
      uVar12 = iVar18 + uVar17;
      puVar14 = (undefined8 *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
                (longlong)(int)((uVar12 & 0xffff) - uVar17) * 0x18);
    }
    if ((*(uint *)(puVar14 + 1) & 0x30000000) == 0) {
      lVar13 = FUN_140f9aee0(*param_1);
      bVar20 = *(longlong *)(*param_1 + 0x828) == 0;
      local_res18 = lVar13;
      if (bVar20) {
        puVar14 = &local_110;
        local_110 = 0;
        plStack_108 = (longlong *)0x0;
      }
      else {
        puVar14 = (undefined8 *)FUN_142dcf3a0(*(longlong *)(*param_1 + 0x828),local_100);
        puVar15 = (undefined8 *)*puVar14;
      }
      plVar4 = (longlong *)puVar14[1];
      puVar14[1] = 0;
      *puVar14 = 0;
      plVar6 = plStack_108;
      if ((bVar20) && (plStack_108 != (longlong *)0x0)) {
        LOCK();
        plVar19 = plStack_108 + 1;
        lVar10 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_108)(plStack_108);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plStack_108 + 8))(plStack_108,1);
          }
        }
      }
      if ((!bVar20) && (local_f8 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_f8 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      if ((((*(longlong *)(*param_1 + 0x718) != 0) && (lVar13 != 0)) &&
          (puVar15 != (undefined8 *)0x0)) &&
         (cVar11 = (**(code **)*puVar15)(puVar15,param_1[2]), cVar11 != '\0')) {
        lVar10 = *param_1;
        lVar5 = param_1[2];
        plVar6 = (longlong *)param_1[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        iVar18 = (int)param_1[5];
        lVar7 = param_1[4];
        local_130 = (undefined8 *)0x0;
        local_128 = iVar18;
        if (iVar18 == 0) {
          local_124 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_130,iVar18,0);
          puVar15 = local_130;
          do {
            *puVar15 = *(undefined8 *)((lVar7 - (longlong)local_130) + (longlong)puVar15);
            lVar8 = *(longlong *)((lVar7 - (longlong)local_130) + 8 + (longlong)puVar15);
            puVar15[1] = lVar8;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            puVar15 = puVar15 + 2;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        iVar18 = local_128;
        local_120 = (undefined4)param_1[1];
        local_11c = *(undefined4 *)((longlong)param_1 + 0xc);
        local_118 = lVar13;
        puVar15 = (undefined8 *)FUN_140ad4c90(*param_1,local_f0);
        uVar9 = *puVar15;
        plVar19 = (longlong *)puVar15[1];
        puVar15[1] = 0;
        *puVar15 = 0;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_e8 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          iVar18 = local_128;
          if ((int)lVar13 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            iVar18 = local_128;
            if (iVar3 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
              iVar18 = local_128;
            }
          }
        }
        local_a8 = 0;
        local_98 = 0;
        puVar15 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &PTR_FUN_14461b758;
          puVar15[1] = uVar9;
          puVar15[2] = plVar19;
          plVar19 = (longlong *)0x0;
        }
        local_58 = 0;
        local_d8[0] = &LAB_14107d320;
        local_48 = 0;
        puVar15 = (undefined8 *)FUN_140438ef0(0x40,local_78);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = &PTR_FUN_1446d0508;
          puVar15[1] = lVar10;
          puVar15[2] = lVar5;
          puVar15[3] = plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            iVar18 = local_128;
          }
          puVar15[4] = 0;
          *(int *)(puVar15 + 5) = iVar18;
          if (iVar18 == 0) {
            *(undefined4 *)((longlong)puVar15 + 0x2c) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar15 + 4,iVar18,0);
            puVar14 = (undefined8 *)puVar15[4];
            puVar16 = local_130;
            do {
              *puVar14 = *puVar16;
              lVar13 = puVar16[1];
              puVar14[1] = lVar13;
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                UNLOCK();
              }
              puVar14 = puVar14 + 2;
              puVar16 = puVar16 + 2;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          *(undefined4 *)(puVar15 + 6) = local_120;
          *(undefined4 *)((longlong)puVar15 + 0x34) = local_11c;
          puVar15[7] = local_res18;
        }
        local_88[0] = &LAB_14114ba90;
        FUN_14208c800(*param_1,local_88,local_d8);
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar19 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19,1);
            }
          }
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_130);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar6 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        lVar13 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141142a70 FUN_141142a70 body=836 status=ok
// SIG undefined FUN_141142a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141142a70(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FText::FText(local_f8);
  iVar6 = FUN_140bb9430(*(undefined8 *)*param_1);
  if ((-1 < iVar6) && (iVar6 < *(int *)(*(longlong *)*param_1 + 0x1208))) {
    FText::operator=(local_f8,*(longlong *)(*(longlong *)*param_1 + 0x1200) +
                              ((longlong)iVar6 * 5 + 2) * 8);
  }
  cVar5 = FText::IsEmpty(local_f8);
  if (cVar5 == '\0') {
    lVar7 = FText::FText(local_80,local_f8);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"Auto ({0})",L"GFxEchoNetMatchmakingMenu",L"RegionAutomaticFormat")
    ;
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar8);
    local_68[0] = 4;
    FText::FText(local_58,lVar7);
    local_e0 = *puVar9;
    local_108 = local_68;
    puStack_100 = local_38;
    local_d8 = puVar9[1];
    local_40 = '\x01';
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d0,&local_108);
    uVar8 = FText::Format(local_c0,&local_e0,uVar8);
    FText::FText(param_2,uVar8);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d0);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar3 = (longlong *)puVar9[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = *(longlong **)(lVar7 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"Automatic",L"GFxEchoNetMatchmakingMenu",L"RegionAutomatic");
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141142dc0 FUN_141142dc0 body=207 status=ok
// SIG undefined FUN_141142dc0(void)

undefined1 FUN_141142dc0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_48 [64];
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xdc);
  if (plVar5 != (longlong *)0x0) {
    if ((param_1[1] != 0) && (cVar4 = FUN_140c48e60(param_1[1],plVar5), cVar4 != '\0')) {
      return 0;
    }
    uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    lVar2 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar1);
    if (lVar2 != 0) {
      return 0;
    }
    cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x1270);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x1270);
      uVar1 = FWeakObjectPtr::Get(*param_1 + 0x1270);
      lVar2 = *plVar3;
      uVar1 = FUN_142ffbee0(uVar1,local_48,plVar5);
      cVar4 = (**(code **)(lVar2 + 0x478))(plVar3,uVar1);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141142e90 FUN_141142e90 body=714 status=ok
// SIG undefined FUN_141142e90(void)

void FUN_141142e90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_141142f00;
  }
  lVar7 = lVar11;
LAB_141142f00:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140be79e0(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141143160 FUN_141143160 body=1060 status=ok
// SIG undefined FUN_141143160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141143160(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar9 = (longlong *)0x0;
  local_c8 = 0;
  plVar4 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1411431e7;
  }
  plVar4 = plVar9;
LAB_1411431e7:
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x828);
  if (lVar6 == 0) {
    lVar6 = FUN_140f141d0(lVar5);
    lVar5 = *param_1;
  }
  local_118 = *(longlong *)(lVar5 + 0x790);
  plStack_110 = *(longlong **)(lVar5 + 0x798);
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  bVar10 = lVar6 == 0;
  if (bVar10) {
    plVar7 = local_f8 + 2;
    local_f8[2] = 0;
    plStack_e0 = (longlong *)0x0;
    local_108 = plVar9;
  }
  else {
    plVar7 = (longlong *)FUN_142dcf3a0(lVar6,local_98);
    local_108 = (longlong *)*plVar7;
  }
  uStack_100 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_e0;
  if (bVar10) {
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  if ((!bVar10) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (((plVar4 != (longlong *)0x0) && (local_108 != (longlong *)0x0)) && (local_118 != 0)) {
    local_a8 = local_118;
    plStack_a0 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    local_b8 = (undefined4)local_108;
    uStack_b4 = local_108._4_4_;
    uStack_b0 = (undefined4)uStack_100;
    uStack_ac = uStack_100._4_4_;
    if (uStack_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
      UNLOCK();
    }
    FUN_140bc9a00(plVar4,&local_b8,&local_a8);
    plVar4 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar4 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_a0 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  }
  plVar4 = plStack_110;
  local_d0 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_14461b758;
    puVar8[1] = local_118;
    puVar8[2] = plStack_110;
    local_d0 = (longlong *)0x0;
    plVar4 = plVar9;
  }
  local_f8[0] = 0;
  local_88[0] = &LAB_14114b8f0;
  local_f8[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
  FGenericPlatformString::Memcpy(local_f8[0],L"send_invite",0x18);
  FUN_141170d80(*param_1,local_f8,local_88);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = local_d0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  plVar4 = uStack_100;
  if (uStack_100 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_100 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_100)(uStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_100 + 8))(uStack_100,1);
      }
    }
  }
  plVar4 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_110 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  return;
}



// FUNCTION 141143590 FUN_141143590 body=714 status=ok
// SIG undefined FUN_141143590(void)

void FUN_141143590(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_141143600;
  }
  lVar7 = lVar11;
LAB_141143600:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140ba4e10(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141143860 FUN_141143860 body=714 status=ok
// SIG undefined FUN_141143860(void)

void FUN_141143860(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1411438d0;
  }
  lVar7 = lVar11;
LAB_1411438d0:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140be8230(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141143b30 FUN_141143b30 body=514 status=ok
// SIG undefined FUN_141143b30(void)

void FUN_141143b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  cVar4 = FUN_141155c80(param_1[7],param_3);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = param_1[7];
  if (*(longlong *)(lVar6 + 0xf8) != 0) {
    if (param_1[2] != DAT_1469e97d8) {
      cVar4 = FUN_14067f1d0(*(longlong *)(lVar6 + 0xf8),param_1 + 2,*param_1);
      if (cVar4 == '\0') goto LAB_141143bac;
      lVar6 = param_1[7];
    }
    FUN_14067f270(*(undefined8 *)(lVar6 + 0xf8),param_3);
    FUN_140677d80(*(undefined8 *)(param_1[7] + 0xf8),param_3,*param_1);
  }
LAB_141143bac:
  lVar6 = param_1[7];
  if ((*(longlong *)(lVar6 + 0xe8) == 0) || (*(char *)(param_1 + 5) != '\0')) {
LAB_141143c01:
    lVar6 = param_1[7];
    if ((*(longlong *)(lVar6 + 0xf0) == 0) || (*(char *)(param_1 + 5) != '\x02'))
    goto LAB_141143c5f;
    if (param_1[2] != DAT_1469e97d8) {
      cVar4 = FUN_14067f1d0(*(longlong *)(lVar6 + 0xf0),param_1 + 2,*param_1);
      if (cVar4 == '\0') goto LAB_141143c5f;
      lVar6 = param_1[7];
    }
    FUN_14067f270(*(undefined8 *)(lVar6 + 0xf0),param_3);
    uVar8 = *(undefined8 *)(param_1[7] + 0xf0);
  }
  else {
    if (param_1[2] != DAT_1469e97d8) {
      cVar4 = FUN_14067f1d0(*(longlong *)(lVar6 + 0xe8),param_1 + 2,*param_1);
      if (cVar4 == '\0') goto LAB_141143c01;
      lVar6 = param_1[7];
    }
    FUN_14067f270(*(undefined8 *)(lVar6 + 0xe8),param_3);
    uVar8 = *(undefined8 *)(param_1[7] + 0xe8);
  }
  FUN_140677d80(uVar8,param_3,*param_1);
LAB_141143c5f:
  FUN_141171a30(param_1[7],1);
  if ((param_1[6] != 0) && (lVar6 = FUN_140cff1b0(), lVar6 != 0)) {
    bVar3 = false;
    *(int *)(lVar6 + 0x7dc) = *(int *)(lVar6 + 0x7dc) + 1;
    iVar7 = *(int *)(lVar6 + 0x7dc);
    iVar5 = *(int *)(lVar6 + 2000) + -1;
    lVar9 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar10 = lVar9 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(lVar6 + 0x7c8);
        if (((*(int *)(lVar10 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar10 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar7 = *(int *)(lVar6 + 0x7dc);
    }
    *(int *)(lVar6 + 0x7dc) = iVar7 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x7c8),0);
    }
  }
  if (*(longlong *)(param_1[7] + 0x70) != 0) {
    FUN_14172cc40(*(longlong *)(param_1[7] + 0x70),1);
  }
  return;
}



// FUNCTION 141143d40 FUN_141143d40 body=517 status=ok
// SIG undefined FUN_141143d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141143d40(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = *param_1;
  lVar4 = lVar3 + 0x6a0;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x6a8)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x6b0) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x6a8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_141143de7;
    }
LAB_141143e1d:
    FUN_14282a800(local_f8);
    FUN_14283c290(local_f8,*param_1 + 0x6b0,1,0);
    FUN_14282cc40(local_f8);
  }
  else {
LAB_141143de7:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141143e1d;
  }
  lVar3 = *param_1;
  lVar2 = lVar3 + 0x6a0;
  local_108 = FWeakObjectPtr::Get(lVar2);
  if (local_108 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x6a8)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x6b0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x6a8) = DAT_1464b56f4;
      }
      local_108 = FWeakObjectPtr::Get(lVar2);
      if (local_108 != 0) goto LAB_141143ec5;
    }
  }
  else {
LAB_141143ec5:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(local_108 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_108 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141143efe;
  }
  local_108 = 0;
LAB_141143efe:
  local_110[0] = 5;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x550,local_110);
  return;
}



// FUNCTION 141143f50 FUN_141143f50 body=562 status=ok
// SIG undefined FUN_141143f50(void)

void FUN_141143f50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(*param_1 + 0x828) != 0) {
    FUN_142dcf3a0(*(longlong *)(*param_1 + 0x828),&local_78);
    if ((local_78 != 0) && (lVar6 = FUN_140f9aee0(*param_1), lVar6 != 0)) {
      local_68 = local_78;
      plStack_60 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      uVar7 = FUN_140bb74b0(lVar6);
      FUN_141170f70(*param_1,uVar7,&local_68);
      plVar3 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_60)(plStack_60);
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
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                (*param_1 + 0x930,0);
      lVar5 = *param_1;
      uVar7 = FUN_140bb7440(lVar6);
      FUN_140d80c90(uVar7,lVar5 + 0x930);
    }
    iVar4 = *(int *)(*param_1 + 0x818);
    if ((((iVar4 == 0) || (iVar4 == 3)) || (iVar4 == 4)) || (iVar4 == 5)) {
      FUN_14116d520(*param_1,6);
      lVar6 = *param_1;
      puVar8 = (undefined8 *)(lVar6 + 0x948);
      local_80 = (longlong *)0x0;
      if (puVar8 != &local_88) {
        *puVar8 = 0;
        local_88 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x950,&local_80);
        plVar3 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
      lVar6 = *param_1;
      local_28 = 0;
      local_18 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = lVar6;
        *puVar8 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_14114b780;
      FUN_14204c280(local_58);
      FUN_141172620(*param_1);
    }
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plStack_70 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141144190 FUN_141144190 body=238 status=ok
// SIG undefined FUN_141144190(void)

ulonglong FUN_141144190(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_res18;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      uVar3 = 0;
    }
    if ((*(uint *)(uVar3 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xcc));
      uVar3 = 0;
      if (lVar4 != 0) {
        if ((char)param_1[0x19] != '\0') {
          FUN_14114aa80(*param_1,param_1 + 2);
        }
        lVar4 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xcc));
        local_res18 = param_1 + 2;
        FUN_141140560(lVar4 + 0xe58,&local_res18);
        LOCK();
        uVar2 = *(uint *)(*param_1 + 0xff8);
        *(uint *)(*param_1 + 0xff8) = 1;
        uVar3 = (ulonglong)uVar2;
        UNLOCK();
      }
    }
  }
  return uVar3;
}



// FUNCTION 141144280 FUN_141144280 body=161 status=ok
// SIG undefined FUN_141144280(void)

bool FUN_141144280(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_18);
  plVar8 = (longlong *)*puVar6;
  plVar7 = (longlong *)FName::FName(local_res10,L"SPARK",1);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_res18);
  lVar3 = *plVar7;
  lVar4 = *plVar8;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar4 != lVar3;
}



// FUNCTION 141144330 FUN_141144330 body=1900 status=ok
// SIG undefined FUN_141144330(void)

void FUN_141144330(longlong *param_1,char param_2,undefined8 *param_3,longlong *param_4)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  short *psVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  void **ppvVar19;
  longlong lVar20;
  undefined2 *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  short *local_1b8;
  int local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  uint3 local_198;
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined8 local_160;
  undefined8 local_158;
  undefined2 *local_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong *local_d8;
  void **local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  ppvVar19 = (void **)*param_3;
  local_d0 = ppvVar19 + (longlong)*(int *)(param_3 + 1) * 2;
  if (ppvVar19 != local_d0) {
    local_d8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      plVar11 = (longlong *)param_1[1];
      FUN_140dbc740(&local_1b8,ppvVar19);
      lVar16 = *plVar11;
      iVar18 = 0;
      lVar17 = 0;
      if (0 < *(int *)(lVar16 + 0x788)) {
        lVar20 = 0;
        do {
          puVar14 = (undefined2 *)0x0;
          local_1c8 = (undefined2 *)0x0;
          local_1c0 = *(int *)(lVar20 + 8 + *(longlong *)(lVar16 + 0x780));
          lVar13 = (longlong)local_1c0;
          pvVar6 = *(void **)(lVar20 + *(longlong *)(lVar16 + 0x780));
          if (local_1c0 == 0) {
            local_1bc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1c0,0);
            puVar14 = local_1c8;
            _guard_xfg_dispatch_icall_nop(local_1c8,pvVar6,lVar13 * 2);
          }
          puVar15 = &DAT_143f3eda8;
          if (local_1c0 != 0) {
            puVar15 = puVar14;
          }
          psVar10 = &DAT_143f3eda8;
          if (local_1b0 != 0) {
            psVar10 = local_1b8;
          }
          lVar16 = (longlong)puVar15 - (longlong)psVar10;
          do {
            sVar4 = *psVar10;
            sVar5 = *(short *)((longlong)psVar10 + lVar16);
            if (sVar4 != sVar5) break;
            psVar10 = psVar10 + 1;
          } while (sVar5 != 0);
          if (sVar4 == sVar5) {
            if (puVar14 != (undefined2 *)0x0) {
              FMemory::Free(puVar14);
            }
            if (local_1b8 != (short *)0x0) {
              FMemory::Free();
            }
            if ((lVar17 < 0) || (*(int *)(*param_1 + 0x788) <= iVar18)) goto LAB_1411444a7;
            bVar7 = true;
            goto LAB_1411444a9;
          }
          if (puVar14 != (undefined2 *)0x0) {
            FMemory::Free(puVar14);
          }
          lVar16 = *plVar11;
          iVar18 = iVar18 + 1;
          lVar17 = lVar17 + 1;
          lVar20 = lVar20 + 200;
        } while (iVar18 < *(int *)(lVar16 + 0x788));
      }
      if (local_1b8 != (short *)0x0) {
        FMemory::Free();
      }
      lVar17 = -1;
LAB_1411444a7:
      bVar7 = false;
LAB_1411444a9:
      if (bVar7) {
        lVar16 = lVar17 * 200 + *(longlong *)(*param_1 + 0x780);
        ppvVar1 = (void **)(lVar16 + 0x58);
        if (ppvVar1 != ppvVar19) {
          iVar18 = *(int *)(ppvVar19 + 1);
          pvVar6 = *ppvVar19;
          *(int *)(lVar16 + 0x60) = iVar18;
          if ((iVar18 == 0) && (*(int *)(lVar16 + 100) == 0)) {
            *(undefined4 *)(lVar16 + 100) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar18);
            _guard_xfg_dispatch_icall_nop(*ppvVar1,pvVar6,(longlong)iVar18 * 2);
          }
        }
        *(undefined2 *)(lVar16 + 0x69) = 0x100;
        uVar9 = FUN_140dbd1c0(local_a8,ppvVar19);
        FText::operator=(lVar16 + 0x70,uVar9);
        plVar11 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          lVar17 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar18 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        uVar9 = FUN_140dbb8d0(local_90,ppvVar19);
        FText::operator=(lVar16 + 0x88,uVar9);
        plVar11 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_88 + 1;
          lVar17 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar18 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        lVar17 = *param_1;
        if (*(int *)(lVar17 + 0x798) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(lVar17 + 0x790);
        }
        if (*(int *)(ppvVar19 + 1) == 0) {
          psVar10 = &DAT_143f3eda8;
        }
        else {
          psVar10 = *ppvVar19;
        }
        lVar20 = (longlong)puVar14 - (longlong)psVar10;
        do {
          sVar4 = *psVar10;
          sVar5 = *(short *)((longlong)psVar10 + lVar20);
          if (sVar4 != sVar5) break;
          psVar10 = psVar10 + 1;
        } while (sVar5 != 0);
        if (sVar4 != sVar5) {
          if (*(int *)(lVar17 + 0x7a8) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = *(undefined2 **)(lVar17 + 0x7a0);
          }
          if (*(int *)(ppvVar19 + 1) == 0) {
            psVar10 = &DAT_143f3eda8;
          }
          else {
            psVar10 = *ppvVar19;
          }
          lVar17 = (longlong)puVar14 - (longlong)psVar10;
          do {
            sVar4 = *psVar10;
            sVar5 = *(short *)((longlong)psVar10 + lVar17);
            if (sVar4 != sVar5) break;
            psVar10 = psVar10 + 1;
          } while (sVar5 != 0);
          if (sVar4 != sVar5) goto LAB_141144a0f;
        }
        *(undefined1 *)(lVar16 + 0xc0) = 1;
      }
      else {
        FUN_140dbc740(&local_c8,ppvVar19);
        if ((param_2 == '\0') && (1 < local_c0)) {
          iVar18 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar18 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar18 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar18);
          }
          FString::FString((longlong)iVar18 * 0x10 + *param_4,ppvVar19);
        }
        else {
          local_1a8 = (void *)0x0;
          local_1a0 = 0;
          local_198 = 0;
          FText::FText(local_190);
          FText::FText(local_178);
          local_160 = 0;
          local_158 = 0;
          local_150 = (undefined2 *)0x0;
          local_148 = 0;
          local_140._0_3_ = 0;
          FText::FText(local_138);
          FText::FText(local_120);
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          if (&local_1a8 != ppvVar19) {
            iVar18 = *(int *)(ppvVar19 + 1);
            pvVar6 = *ppvVar19;
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar18);
            if ((iVar18 == 0) && (local_1a0._4_4_ == 0)) {
              local_1a0 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,iVar18);
              _guard_xfg_dispatch_icall_nop(local_1a8,pvVar6,(longlong)iVar18 * 2);
            }
          }
          local_198 = local_198 & 0xff;
          uVar9 = FUN_140dbd1c0(local_78,ppvVar19);
          FText::operator=(local_190,uVar9);
          plVar11 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_70 + 1;
            lVar16 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar3 = (int *)((longlong)plVar11 + 0xc);
              iVar18 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          uVar9 = FUN_140dbb8d0(local_60,ppvVar19);
          FText::operator=(local_178,uVar9);
          plVar11 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            lVar16 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar3 = (int *)((longlong)plVar11 + 0xc);
              iVar18 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          if (local_150 != &DAT_143f3eda8) {
            uVar8 = local_148._4_4_;
            local_148 = (ulonglong)local_148._4_4_ << 0x20;
            uVar12 = 0;
            iVar18 = 0;
            if (uVar8 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_150);
              uVar12 = local_148 & 0xffffffff;
              iVar18 = local_148._4_4_;
            }
            if (iVar18 < (int)uVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150);
            }
          }
          local_140._1_2_ = 0x100;
          if ((*(int *)(*local_d8 + 0x38) < DAT_146852c50) &&
             (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
            FText::FText(&DAT_146852c38,0);
            atexit(FUN_143e3e8f0);
            _Init_thread_footer(&DAT_146852c50);
          }
          FText::operator=(local_120,&DAT_146852c38);
          plVar11 = (longlong *)FUN_140dbbdb0(local_b8,ppvVar19);
          if (&local_f8 != plVar11) {
            if (local_f8 != 0) {
              FMemory::Free();
            }
            local_f8 = *plVar11;
            *plVar11 = 0;
            local_f0 = plVar11[1];
            plVar11[1] = 0;
          }
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          uVar12 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
          if (uVar12 == 0) {
LAB_141144959:
            uVar12 = 0;
          }
          else {
            lVar16 = FUN_14141f270();
            if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_141144959;
          }
          FUN_141150ba0(&local_1a8,uVar12);
          FUN_141150ba0(&local_150,uVar12);
          lVar16 = *param_1;
          iVar18 = *(int *)(lVar16 + 0x788);
          *(int *)(lVar16 + 0x788) = iVar18 + 1;
          if (*(int *)(lVar16 + 0x78c) < iVar18 + 1) {
            FUN_140ae1ad0(lVar16 + 0x780,iVar18);
          }
          lVar16 = (longlong)iVar18 * 200 + *(longlong *)(lVar16 + 0x780);
          FUN_141140780(lVar16,&local_1a8);
          FUN_141140780(lVar16 + 0x58,&local_150);
          FString::FString(lVar16 + 0xb0,&local_f8);
          *(undefined1 *)(lVar16 + 0xc0) = local_e8;
          if (local_f8 != 0) {
            FMemory::Free();
          }
          FUN_141140b30(&local_150);
          FUN_141140b30(&local_1a8);
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
      }
LAB_141144a0f:
      ppvVar19 = ppvVar19 + 2;
    } while (ppvVar19 != local_d0);
  }
  return;
}



// FUNCTION 141144aa0 FUN_141144aa0 body=218 status=ok
// SIG undefined FUN_141144aa0(void)

void FUN_141144aa0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    local_10 = 1;
    local_18 = (undefined4 *)0x0;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar1 = local_10;
    *local_18 = 0;
    if ((param_3 != -1) && ((char)param_3 != '\0')) {
      lVar3 = (longlong)(int)local_10;
      iVar2 = (int)local_10 + 1;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if (local_10._4_4_ < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,uVar1 & 0xffffffff);
      }
      local_18[lVar3] = param_3;
    }
    uVar1 = local_10;
    if ((param_4 != -1) && ((char)param_4 != '\0')) {
      lVar3 = (longlong)(int)local_10;
      iVar2 = (int)local_10 + 1;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if (local_10._4_4_ < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,uVar1 & 0xffffffff);
      }
      local_18[lVar3] = param_4;
    }
    FUN_142ed5670(param_2,&local_18);
    if (local_18 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141144b80 FUN_141144b80 body=229 status=ok
// SIG undefined FUN_141144b80(void)

void FUN_141144b80(longlong *param_1)

{
  longlong local_78 [2];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  int local_18;
  
  if (*(longlong *)(*param_1 + 0x318) != 0) {
    FString::PrintfImpl(local_78,L"PlayerProfileImage_%02d_nopack",*(undefined4 *)(*param_1 + 0x34c)
                       );
    local_68 = param_1[1];
    local_18 = *(int *)(*param_1 + 0x34c) + 2;
    local_60 = param_1[2];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_58 = param_1[3];
    local_50 = param_1[4];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FString::FString(local_28,local_78);
    FUN_1411f82f0(*(undefined8 *)(*param_1 + 0x318),&local_68);
    FUN_14106efa0(&local_68);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141144c70 FUN_141144c70 body=145 status=ok
// SIG undefined FUN_141144c70(void)

void FUN_141144c70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_141172b20(*param_1);
  lVar1 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = (undefined4)lVar1;
    uStack_64 = (undefined4)((ulonglong)lVar1 >> 0x20);
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
    *(undefined4 *)(puVar2 + 2) = 6;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_14114ba70;
  FUN_14204c280(local_58);
  LOCK();
  *(undefined4 *)(lVar1 + 0x588) = 1;
  UNLOCK();
  FUN_141172620(*param_1);
  return;
}



// FUNCTION 141144d10 FUN_141144d10 body=301 status=ok
// SIG undefined FUN_141144d10(void)

void FUN_141144d10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_141144d6c;
  }
  lVar7 = 0;
LAB_141144d6c:
  plVar4 = *(longlong **)(*param_1 + 0x798);
  lVar8 = *(longlong *)(*param_1 + 0x790);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar7 != 0) && (lVar8 != 0)) {
    local_28 = (undefined4)lVar8;
    uStack_24 = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_20 = SUB84(plVar4,0);
    uStack_1c = (undefined4)((ulonglong)plVar4 >> 0x20);
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_140bcbd60(lVar7,&local_18);
    plVar5 = (longlong *)CONCAT44(uStack_c,uStack_10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
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
  return;
}



// FUNCTION 141144e40 FUN_141144e40 body=367 status=ok
// SIG undefined FUN_141144e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141144e40(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  void *local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined8 local_88;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0xfe8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x7c8))) {
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a8[0] = *(undefined1 *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)(lVar3 + 0x7c0));
    if (&local_a0 != (void **)(lVar3 + 2000)) {
      uVar2 = *(uint *)(lVar3 + 0x7d8);
      _Src = *(void **)(lVar3 + 2000);
      local_98 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_a0,uVar2,0);
        _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)(int)uVar2 * 0x18);
      }
    }
    local_48 = (longlong *)0x0;
    local_78[0] = FRollingHash::GetWindowSize;
    local_38 = 0;
    FUN_1411fc8c0(param_2,local_a8,0,local_78);
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
    if (local_a0 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141144fb0 FUN_141144fb0 body=323 status=ok
// SIG undefined FUN_141144fb0(void)

void FUN_141144fb0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18;
  longlong lStack_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(&local_res10);
  lVar7 = 0;
  iVar2 = *(int *)(lVar5 + 0xc);
  lVar5 = lVar7;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar8 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar8;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar5 = *param_1;
  bVar1 = *(byte *)(lVar5 + 0x869);
  if (bVar1 == 0) {
LAB_141145098:
    lVar9 = 0;
  }
  else {
    if (bVar1 < 3) {
      lVar9 = *(longlong *)(lVar5 + 0x830);
      goto LAB_14114509b;
    }
    if (bVar1 == 3) {
      if (*(char *)(lVar5 + 0x86a) == '\x01') {
        lVar9 = *(longlong *)(lVar5 + 0x7f8);
        goto LAB_14114509b;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_141145098;
      if (*(char *)(lVar5 + 0x86b) == '\x01') {
        lVar9 = *(longlong *)(lVar5 + 0x7f8);
        goto LAB_14114509b;
      }
    }
    lVar9 = *(longlong *)(lVar5 + 0x800);
  }
LAB_14114509b:
  local_18 = 0;
  lStack_10 = 0;
  FUN_142ed36d0(lVar5,&local_18,0);
  local_18 = lVar9;
  if (lVar9 != 0) {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar6);
  }
  lStack_10 = lVar7;
  FUN_142ed36d0(*param_1,&local_18,0);
  return;
}



// FUNCTION 141145100 FUN_141145100 body=348 status=ok
// SIG undefined FUN_141145100(void)

void FUN_141145100(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  local_30 = 0x13;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"selected_player_id",0x26);
  (**(code **)*param_3)(param_3,&local_38,param_1);
  if (local_38 != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)*param_1;
  plVar1 = (longlong *)FName::FName(local_res8,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_res18);
  pwVar5 = L"first_party";
  local_38 = 0;
  if (*plVar2 == *plVar1) {
    pwVar5 = L"shift";
  }
  local_30 = 0;
  if (*pwVar5 != L'\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar5[lVar4] != L'\0');
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,pwVar5,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"invite_type",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141145260 FUN_141145260 body=714 status=ok
// SIG undefined FUN_141145260(void)

void FUN_141145260(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1411452d0;
  }
  lVar7 = lVar11;
LAB_1411452d0:
  lVar8 = *param_1;
  lVar9 = *(longlong *)(lVar8 + 0x828);
  if (lVar9 == 0) {
    lVar9 = FUN_140f141d0(lVar8);
    lVar8 = *param_1;
  }
  lVar4 = *(longlong *)(lVar8 + 0x790);
  plVar5 = *(longlong **)(lVar8 + 0x798);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar12 = lVar9 == 0;
  if (bVar12) {
    plVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_142dcf3a0(lVar9,local_28);
    lVar11 = *plVar10;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_50;
  if (bVar12) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar12) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (((lVar7 != 0) && (lVar11 != 0)) && (lVar4 != 0)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined4)lVar11;
    uStack_74 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_70 = SUB84(plVar6,0);
    uStack_6c = (undefined4)((ulonglong)plVar6 >> 0x20);
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    plStack_30 = plVar5;
    FUN_140ba33a0(lVar7,&local_48,&local_38);
    plVar10 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 141145530 FUN_141145530 body=237 status=ok
// SIG undefined FUN_141145530(void)

void FUN_141145530(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90(*param_1 + 0xe8);
  lVar3 = *param_1;
  if (cVar1 != '\0') {
    if (*(longlong *)(lVar3 + 0x100) == 0) {
      FUN_1405ac8f0((undefined8 *)(lVar3 + 0xe8),100,4);
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(*(undefined8 *)(lVar3 + 0xe8),local_28,*(longlong *)(lVar3 + 0x100),0,0,local_38
                   );
      FUN_140591060(local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    lVar2 = FUN_140590080(local_28);
    lVar3 = *param_1;
    FUN_1405913a0(lVar3 + 0xe8,lVar2);
    *(undefined4 *)(lVar3 + 0xf8) = *(undefined4 *)(lVar2 + 0x10);
    FUN_140591060(local_28);
    lVar3 = *param_1;
  }
  *(undefined8 *)(lVar3 + 0x100) = 0;
  return;
}



// FUNCTION 141145620 FUN_141145620 body=221 status=ok
// SIG undefined FUN_141145620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141145620(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_1464aa6c8;
  switch(param_3) {
  case 0:
  case 1:
    *(undefined4 *)param_2 = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  case 2:
    *(undefined4 *)param_2 = 0x3eb33333;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3ee66666;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  case 3:
    *(undefined4 *)param_2 = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3dcccccd;
    *(undefined4 *)(param_2 + 1) = 0x3dcccccd;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  case 4:
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f333333;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  case 5:
    *(undefined4 *)param_2 = 0x3f800000;
    *(undefined8 *)((longlong)param_2 + 4) = 0x3f333333;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  case 6:
    *param_2 = 0x3f333333;
    *(undefined4 *)(param_2 + 1) = 0x3f59999a;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
    return param_2;
  default:
    *param_2 = _DAT_1464aa6c0;
    param_2[1] = uVar1;
    return param_2;
  }
}



// FUNCTION 141145720 FUN_141145720 body=3092 status=ok
// SIG undefined FUN_141145720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141145720(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined8 local_380;
  undefined1 local_378;
  undefined1 local_368 [16];
  code *local_358;
  ulonglong *puStack_350;
  undefined4 local_348;
  undefined4 local_344;
  longlong local_340;
  longlong *local_338;
  longlong local_330;
  undefined8 local_328;
  longlong local_320 [2];
  longlong *plStack_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  longlong *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_128 [32];
  longlong local_108;
  longlong local_f8;
  longlong local_e8;
  longlong local_d8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_80;
  char local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  plVar12 = (longlong *)0x0;
  local_348 = (undefined4)param_1[1];
  local_344 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_368);
  FUN_14172a400(local_368);
  cVar4 = FWeakObjectPtr::IsValid(&local_348);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(&local_348);
  iVar13 = *(int *)(lVar6 + 0xc);
  plVar8 = plVar12;
  if (iVar13 < (int)DAT_1469e91c4) {
    uVar10 = iVar13 >> 0x1f & 0xffff;
    uVar5 = iVar13 + uVar10;
    plVar8 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18);
  }
  if ((*(uint *)(plVar8 + 1) & 0x30000000) != 0) {
    return;
  }
  local_330 = 0;
  local_328 = 0;
  lVar6 = FUN_1416f8720((int)param_1[2]);
  if (lVar6 == 0) goto LAB_14114630a;
  lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  if (lVar6 == 0) goto LAB_14114630a;
  _guard_xfg_dispatch_icall_nop(local_128,0,0x68);
  uVar7 = FUN_1416f8720((int)param_1[2]);
  FUN_142ff3000(uVar7,local_128);
  FUN_142ff5c90(local_128,&local_330,1);
  if (1 < (int)local_328) {
    lVar6 = FUN_142b45e90();
    local_358 = *(code **)(lVar6 + 0x18);
    FUN_140d3ccb0(local_358,&local_340);
    bVar15 = *(longlong *)(*param_1 + 0xb30) == 0;
    if (bVar15) {
      plVar8 = local_320 + 1;
      local_320[1] = 0;
      plStack_310 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)FUN_142dcf3a0(*(longlong *)(*param_1 + 0xb30),local_268);
      plVar12 = (longlong *)*plVar8;
    }
    plVar3 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8 = plStack_310;
    if ((bVar15) && (plStack_310 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_310 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_310)(plStack_310);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_310 + 8))(plStack_310,1);
        }
      }
    }
    if ((!bVar15) && (local_260 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_260 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    local_238 = (code *)CONCAT44(local_238._4_4_,(undefined4)local_238);
    uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230);
    local_218 = (code *)CONCAT44(local_218._4_4_,(undefined4)local_218);
    uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    if ((local_340 != 0) &&
       (local_238 = (code *)CONCAT44(local_238._4_4_,(undefined4)local_238),
       uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230),
       local_218 = (code *)CONCAT44(local_218._4_4_,(undefined4)local_218),
       uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210),
       *(longlong *)(*param_1 + 0x1260) == 0)) {
      cVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (cVar4 != '\0') {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_308 = plVar12;
        local_300 = plVar3;
        cVar4 = FUN_142b41020(local_340,&local_308);
        plVar8 = local_300;
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_300 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        if (cVar4 == '\0') {
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_2d8 = plVar12;
          local_2d0 = plVar3;
          FUN_142b4b380(local_340,local_320,&local_2d8);
          plVar8 = local_2d0;
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2d0 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_2d0)(local_2d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar8 = (longlong *)FDateTime::UtcNow(local_270);
          lVar6 = local_320[0] - *plVar8;
          FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_2a8,L"You have sent too much mail. Please wait and try again later.",
                     L"EchoNetMailboxMenu",L"CantSendMailBodyDefault");
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_2c8 = plVar12;
          local_2c0 = plVar3;
          plVar8 = (longlong *)FUN_142b4a990(local_358,local_248,&local_2c8);
          lVar14 = *plVar8;
          plVar12 = (longlong *)plVar8[1];
          plVar8[1] = 0;
          *plVar8 = 0;
          if (local_240 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_240 + 1;
            lVar11 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_240)(local_240);
              LOCK();
              piVar2 = (int *)((longlong)local_240 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*local_240 + 8))(local_240,1);
              }
            }
          }
          plVar8 = local_2c0;
          if (local_2c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2c0 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_2c0)(local_2c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if ((lVar14 == 0) || (*(char *)(lVar14 + 0x18) == '\0')) {
            uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_1c0,
                               L"There seems to be a problem with the mail service. Please try again later."
                               ,L"EchoNetMailboxMenu",L"CantSendMailBodySpark");
            FText::operator=(local_2a8,uVar7);
            if (local_1b8 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_1b8 + 1;
              lVar14 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1b8)(local_1b8);
                LOCK();
                piVar2 = (int *)((longlong)local_1b8 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_1b8 + 8))(local_1b8,1);
                }
              }
            }
          }
          local_238 = (code *)CONCAT44(local_238._4_4_,(undefined4)local_238);
          uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230);
          local_218 = (code *)CONCAT44(local_218._4_4_,(undefined4)local_218);
          uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          if ((0 < local_320[0]) &&
             (local_238 = (code *)CONCAT44(local_238._4_4_,(undefined4)local_238),
             uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230),
             local_218 = (code *)CONCAT44(local_218._4_4_,(undefined4)local_218),
             uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210), 0 < lVar6)
             ) {
            lVar14 = lVar6 / 600000000;
            lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar14),8) + lVar14;
            iVar13 = (int)lVar14 + ((int)(lVar11 >> 5) - (int)(lVar11 >> 0x3f)) * -0x3c;
            if (iVar13 == 0) {
              lVar6 = lVar6 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8);
              lVar14 = (lVar6 >> 0x17) - (lVar6 >> 0x3f);
              lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar14),8) + lVar14;
              iVar13 = (int)lVar14 + ((int)(lVar6 >> 5) - (int)(lVar6 >> 0x3f)) * -0x3c;
              local_238 = (code *)CONCAT44(local_238._4_4_,(undefined4)local_238);
              uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230);
              local_218 = (code *)CONCAT44(local_218._4_4_,(undefined4)local_218);
              uStack_210 = (ulonglong *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
              if (iVar13 == 0) goto LAB_14114610b;
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_160,
                                 L"You have sent too much mail. Please wait {0} seconds and try again."
                                 ,L"EchoNetMailboxMenu",L"CantSendMailBodySeconds");
              puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_b8,uVar7);
              local_60 = (longlong)iVar13;
              local_358 = (code *)&local_68;
              puStack_350 = local_38;
              local_280 = *puVar9;
              local_278 = puVar9[1];
              local_68._0_4_ = 0;
              local_40 = '\0';
              if (local_278 != 0) {
                LOCK();
                *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
                UNLOCK();
              }
              local_218 = local_358;
              uStack_210 = puStack_350;
              uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_208,&local_218);
              uVar7 = FText::Format(local_178,&local_280,uVar7);
              FText::FText(local_1d8,uVar7);
              if (local_170 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_170 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_170)(local_170);
                  LOCK();
                  piVar2 = (int *)((longlong)local_170 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_170 + 8))(local_170,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_208);
              if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
                LOCK();
                plVar8 = local_50 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)local_50 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_50 + 8))(local_50,1);
                  }
                }
              }
              plVar8 = (longlong *)puVar9[1];
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar8 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              FText::operator=(local_2a8,local_1d8);
              if (local_1d0 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_1d0 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_1d0)(local_1d0);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1d0 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_1d0 + 8))(local_1d0,1);
                  }
                }
              }
              plVar8 = local_158;
            }
            else {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_190,
                                 L"You have sent too much mail. Please wait {0} minutes and try again."
                                 ,L"EchoNetMailboxMenu",L"CantSendMailBodyMinutes");
              puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar7);
              local_90 = (longlong)iVar13;
              local_358 = (code *)local_98;
              puStack_350 = &local_68;
              local_290 = *puVar9;
              local_288 = puVar9[1];
              local_98[0] = 0;
              local_70 = '\0';
              if (local_288 != 0) {
                LOCK();
                *(int *)(local_288 + 8) = *(int *)(local_288 + 8) + 1;
                UNLOCK();
              }
              local_238 = local_358;
              uStack_230 = puStack_350;
              uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_228,&local_238);
              uVar7 = FText::Format(local_1a8,&local_290,uVar7);
              FText::FText(local_1f0,uVar7);
              if (local_1a0 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_1a0 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_1a0)(local_1a0);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1a0 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_1a0 + 8))(local_1a0,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_228);
              if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
                LOCK();
                plVar8 = local_80 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar2 = (int *)((longlong)local_80 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_80 + 8))(local_80,1);
                  }
                }
              }
              plVar8 = (longlong *)puVar9[1];
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar8 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              FText::operator=(local_2a8,local_1f0);
              if (local_1e8 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_1e8 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_1e8)(local_1e8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1e8 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*local_1e8 + 8))(local_1e8,1);
                  }
                }
              }
              plVar8 = local_188;
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar8 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
          }
LAB_14114610b:
          FWeakObjectPtr::operator=(local_2b8,0);
          lVar6 = *param_1;
          local_2b0 = 0;
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_148,L"Cannot Send Mail",L"EchoNetMailboxMenu",
                             L"CantSendMailHeader");
          local_378 = 2;
          local_380 = *(undefined8 *)(lVar6 + 0xb30);
          local_388 = 1;
          FUN_1410f3960(*(undefined8 *)(*param_1 + 0xb30),uVar7,local_2a8,local_2b8);
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_140 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_140)(local_140);
              LOCK();
              piVar2 = (int *)((longlong)local_140 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*local_140 + 8))(local_140,1);
              }
            }
          }
          *(undefined8 *)(*param_1 + 0xfd8) = 0;
          *(undefined8 *)(*param_1 + 0xfe0) = 0;
          FUN_141178a60(*param_1,2);
          plVar8 = local_2a0;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar8 = local_2a0;
              if (iVar13 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
                plVar8 = local_2a0;
              }
            }
          }
        }
        else {
          lVar6 = *param_1;
          LOCK();
          *(undefined4 *)(lVar6 + 0xff0) = 1;
          UNLOCK();
          lVar6 = *(longlong *)(lVar6 + 0x5b0);
          if (lVar6 != 0) {
            FUN_142f11000(lVar6,0);
          }
          local_358 = FUN_1411644f0;
          uStack_24c = (undefined4)((ulonglong)puStack_350 >> 0x20);
          puStack_350 = (ulonglong *)((ulonglong)puStack_350 & 0xffffffff00000000);
          local_258 = 0x411644f0;
          uStack_254 = 1;
          uStack_250 = 0;
          puVar9 = (undefined8 *)FUN_141139f70(local_340 + 0x58,local_1f8,*param_1,&local_258);
          *(undefined8 *)(*param_1 + 0x1260) = *puVar9;
          lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
          local_2e8 = *(undefined8 *)(lVar6 + 0x3f8);
          local_2e0 = *(longlong **)(lVar6 + 0x400);
          if (local_2e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
            UNLOCK();
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_2f8 = plVar12;
          local_2f0 = plVar3;
          FUN_142b6a2b0(local_340,&local_2f8,&local_2e8,&local_330);
          plVar12 = local_2f0;
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2f0 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_2f0)(local_2f0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          plVar8 = local_2e0;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          lVar6 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_338 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar2 = (int *)((longlong)local_338 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
LAB_14114630a:
  if (local_330 != 0) {
    FMemory::Free();
  }
  return;
}


