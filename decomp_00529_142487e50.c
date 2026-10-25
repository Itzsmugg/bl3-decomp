// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142487e50 FUN_142487e50 body=335 status=ok
// SIG undefined FUN_142487e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142487e50(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_268 [32];
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  cVar1 = FUN_1415ad5c0();
  if (cVar1 != '\0') {
    FUN_1415a9f00(local_248);
    cVar1 = FUN_1415ad5c0();
    uVar4 = 0;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x68);
      if (*(int *)(param_1 + 0x78) <= iVar2) {
        lVar3 = operator_new(0x220);
        if (lVar3 != 0) {
          uVar4 = FUN_14159fa40(lVar3);
        }
        iVar2 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar2 + 1;
        if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8) = uVar4;
        iVar2 = *(int *)(param_1 + 0x68);
      }
      FUN_1415a4ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8),local_248);
      **(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x68) * 8) =
           (longlong)*(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    lVar3 = 4;
    plVar5 = (longlong *)&stack0x00000038;
    do {
      lVar3 = lVar3 + -1;
      *(undefined4 *)(plVar5 + -0xe) = 0;
      if (plVar5[-0xf] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar5 + -0x17);
      plVar5 = plVar5 + -0xf;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142487fb0 FUN_142487fb0 body=147 status=ok
// SIG undefined FUN_142487fb0(void)

void FUN_142487fb0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xa4];
  if ((lVar1 == DAT_146af3980) || (param_1[0xa5] == DAT_146af3918)) {
    (**(code **)(*param_1 + 0x788))(param_1);
    lVar1 = param_1[0xa4];
  }
  if (lVar1 == DAT_146af3988) {
    (**(code **)(*param_1 + 0x790))(param_1);
  }
  else if (lVar1 == DAT_146af3990) {
    (**(code **)(*param_1 + 0x798))(param_1);
  }
  else if (lVar1 == DAT_146af3998) {
    (**(code **)(*param_1 + 0x7a0))(param_1);
  }
  param_1[0xa5] = param_1[0xa4];
  return;
}



// FUNCTION 142488050 FUN_142488050 body=76 status=ok
// SIG undefined FUN_142488050(void)

void FUN_142488050(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x480) != '\0') && (*(char *)(param_1 + 0x128) != '\x03')) {
    plVar1 = (longlong *)AActor::GetWorldSettings();
    (**(code **)(*plVar1 + 0x708))(plVar1);
    plVar1 = (longlong *)AActor::GetWorldSettings(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014248808f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x710))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1424880a0 FUN_1424880a0 body=53 status=ok
// SIG undefined FUN_1424880a0(void)

void FUN_1424880a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    *(float *)(param_1 + 0x91) = *(float *)((longlong)param_1 + 0x484) - *(float *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 1424880f0 FUN_1424880f0 body=204 status=ok
// SIG undefined FUN_1424880f0(void)

undefined8 FUN_1424880f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar4 < 0) || (*(int *)(param_1 + 0x10) <= iVar4)) {
    iVar4 = iVar4 - *(int *)(param_1 + 0x10);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x20) <= iVar4)) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10);
    cVar3 = FWeakObjectPtr::IsValid(lVar2);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar2);
      if (*(longlong *)(lVar5 + 0x178) != 0) {
        plVar7 = (longlong *)FWeakObjectPtr::Get(lVar2);
        (**(code **)(*plVar7 + 0x590))(plVar7,*(undefined4 *)(lVar2 + 8));
      }
    }
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x10);
    cVar3 = FWeakObjectPtr::IsValid(lVar2);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar2);
      if (*(longlong *)(lVar5 + 0x178) != 0) {
        uVar6 = FWeakObjectPtr::Get(lVar2);
        FUN_142358060(uVar6,*(undefined4 *)(lVar2 + 8),lVar2 + 0xc);
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 1424881c0 FUN_1424881c0 body=207 status=ok
// SIG undefined FUN_1424881c0(void)

void FUN_1424881c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if ((cVar1 != '\0') && (lVar2 = FWeakObjectPtr::Get(param_1), *(longlong *)(lVar2 + 0x178) != 0))
  {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar3 + 0xab0))(plVar3,*(undefined4 *)(param_1 + 8));
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (*(longlong *)(lVar2 + 0x220) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1);
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x220) + 0x4d8);
    }
    if (((plVar3 != (longlong *)0x0) && (cVar1 = FUN_142314560(plVar3), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*plVar3 + 0x400))(plVar3,0), cVar1 == '\0')) {
      lVar2 = FWeakObjectPtr::Get(param_1);
      uVar4 = FUN_1424a1490();
      FUN_14249e6d0(uVar4,*(undefined8 *)(lVar2 + 0x178));
    }
  }
  return;
}



// FUNCTION 142488290 FUN_142488290 body=79 status=ok
// SIG undefined FUN_142488290(void)

void FUN_142488290(longlong param_1)

{
  FUN_1417931d0();
  *(undefined8 *)(param_1 + 0xa0) = 0xf9ffffffffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  return;
}



// FUNCTION 1424882e0 FUN_1424882e0 body=463 status=ok
// SIG undefined FUN_1424882e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424882e0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_1424884b0();
  uVar5 = AActor::GetWorldTimerManager(param_1);
  lVar6 = AActor::GetWorldSettings(param_1);
  fVar1 = *(float *)(lVar6 + 0x5e4);
  fVar2 = *(float *)(lVar6 + 0x5e0);
  fVar3 = *(float *)(lVar6 + 0x5e8);
  lVar6 = AActor::GetWorldSettings(param_1);
  fVar4 = *(float *)(lVar6 + 0x5e8);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)&LAB_1424704b4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 1;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,param_1 + 0x538,&local_98,(fVar1 * fVar2 * fVar3) / fVar4);
  if (local_38 != 0) {
    plVar8 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar8 = local_48;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar6 = FMemory::Realloc(plVar7,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return;
}



// FUNCTION 1424884b0 FUN_1424884b0 body=1203 status=ok
// SIG undefined FUN_1424884b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424884b0(longlong *param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  longlong *local_68;
  char local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c8 = param_1;
  FUN_142238430();
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428d79e0(uVar8,param_1);
  uVar9 = AActor::GetWorldTimerManager(param_1);
  cVar6 = UWorld::IsGameWorld(uVar8);
  if ((cVar6 != '\0') && ((char)param_1[0x25] == '\x03')) {
    (**(code **)(*param_1 + 0x760))(param_1);
    fVar1 = *(float *)((longlong)param_1 + 0x48c);
    if (0.0 < fVar1) {
      plVar10 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        plVar10[2] = (longlong)&LAB_1424704c0;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_b8);
      }
      FWeakObjectPtr::operator=(&local_a8,0);
      local_e0 = 0xbf800000;
      local_e8 = 1;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar9,param_1 + 0x92,&local_b8,fVar1);
      if (local_58 != 0) {
        plVar19 = &local_88;
        if (local_68 != (longlong *)0x0) {
          plVar19 = local_68;
        }
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x10))(plVar19,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        lVar11 = FMemory::Realloc(plVar10,0,0);
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
      }
    }
  }
  lVar11 = AFGRailroadVehicle::GetPrivateStaticClass();
  local_d8 = 0;
  if (lVar11 != 0) {
    lVar12 = AFGRailroadVehicle::GetPrivateStaticClass();
    lVar20 = lVar11;
    do {
      local_d8 = lVar11;
      if (lVar20 == lVar12) break;
      lVar20 = *(longlong *)(lVar20 + 0x30);
      local_d8 = 0;
    } while (lVar20 != 0);
  }
  local_b8 = CONCAT44(local_b8._4_4_,5);
  local_60 = '\0';
  local_d0 = uVar8;
  FUN_14044bc80(&local_b0,&local_d0,&local_d8);
  FUN_14045a130(&local_b8);
  cVar6 = local_98._4_1_;
joined_r0x0001424886d2:
  if (cVar6 == '\0') {
    (**(code **)(*param_1 + 0x730))(param_1,local_88);
    uVar16 = local_a0 & 0xffffffff;
    lVar11 = CONCAT44(uStack_ac,local_b0);
    iVar21 = (int)local_98 + 1;
    if (iVar21 < local_78 + (int)local_a0) {
      lVar20 = (longlong)iVar21 * 8;
      iVar18 = local_78;
      do {
        lVar12 = 0;
        if (iVar21 < (int)uVar16) {
          lVar17 = *(longlong *)(lVar20 + local_a8);
        }
        else {
          lVar17 = *(longlong *)(local_80 + (longlong)(iVar21 - (int)uVar16) * 8);
        }
        local_90 = local_90 + 1;
        if (lVar17 != 0) {
          lVar13 = AActor::GetLevel(lVar17);
          if (lVar13 != 0) {
            if ((local_b8 & 1) != 0) {
              iVar18 = *(int *)(lVar17 + 0xc);
              if (iVar18 < (int)DAT_1469e91c4) {
                uVar15 = iVar18 >> 0x1f & 0xffff;
                uVar7 = iVar18 + uVar15;
                lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1424888a2;
            }
            if (((uint)local_b8 >> 1 & 1) != 0) {
              cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar17);
              if (cVar6 == '\0') goto LAB_1424888a2;
            }
            if (((uint)local_b8 >> 2 & 1) != 0) {
              if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar13 + 600);
              if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                  (piVar14 = (int *)UWorld::GetActiveLevelCollection(), piVar14 == (int *)0x0)) ||
                 (piVar2 == piVar14)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              if ((!bVar5) || (!bVar3)) goto LAB_1424888a2;
            }
            lVar12 = ULevel::GetWorld(lVar13);
            if (lVar12 == lVar11) {
              lVar12 = AActor::GetLevel(lVar17);
              if (lVar12 == *(longlong *)(lVar11 + 0x30)) goto LAB_142488948;
              lVar12 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_142488948;
            }
          }
LAB_1424888a2:
          uVar16 = local_a0 & 0xffffffff;
          iVar18 = local_78;
        }
        iVar21 = iVar21 + 1;
        lVar20 = lVar20 + 8;
        if (iVar18 + (int)uVar16 <= iVar21) break;
      } while( true );
    }
    local_88 = 0;
    local_98._0_5_ = CONCAT14(1,(int)local_98);
  }
  if (local_60 != '\0') {
    local_60 = 0;
    UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_ac,local_b0),local_68);
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  return;
LAB_142488948:
  cVar6 = local_98._4_1_;
  local_98 = (code *)CONCAT44(local_98._4_4_,iVar21);
  param_1 = local_c8;
  local_88 = lVar17;
  goto joined_r0x0001424886d2;
}



// FUNCTION 142488970 FUN_142488970 body=524 status=ok
// SIG undefined FUN_142488970(void)

void FUN_142488970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1422384a0();
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    FUN_142477aa0(param_1);
    lVar3 = *(longlong *)(param_1 + 0x458);
  }
  lVar3 = *(longlong *)(lVar3 + 0x6f0);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x470);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar3 + 0x2c);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar3 + 0x34);
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
    *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar3 + 0x40);
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar3 + 0x60);
    *(undefined8 *)(lVar1 + 0x68) = uVar2;
    *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(lVar3 + 0x70);
    uVar2 = *(undefined8 *)(lVar3 + 0xa8);
    *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar3 + 0xa0);
    *(undefined8 *)(lVar1 + 0xa8) = uVar2;
    *(undefined4 *)(lVar1 + 0xb0) = *(undefined4 *)(lVar3 + 0xb0);
    *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(lVar3 + 0x74);
    *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar3 + 0x78);
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(lVar3 + 0x7c);
    *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(lVar3 + 0x80);
    *(undefined4 *)(lVar1 + 0x84) = *(undefined4 *)(lVar3 + 0x84);
    *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar3 + 0x88);
    *(undefined4 *)(lVar1 + 0x8c) = *(undefined4 *)(lVar3 + 0x8c);
    *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(lVar3 + 0x90);
    *(undefined4 *)(lVar1 + 0x94) = *(undefined4 *)(lVar3 + 0x94);
    *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(lVar3 + 0x98);
    uVar2 = *(undefined8 *)(lVar3 + 0xbc);
    *(undefined8 *)(lVar1 + 0xb4) = *(undefined8 *)(lVar3 + 0xb4);
    *(undefined8 *)(lVar1 + 0xbc) = uVar2;
    *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(lVar3 + 0xc4);
    uVar2 = *(undefined8 *)(lVar3 + 0xd0);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(lVar3 + 200);
    *(undefined8 *)(lVar1 + 0xd0) = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x4c);
    *(undefined8 *)(lVar1 + 0x44) = *(undefined8 *)(lVar3 + 0x44);
    *(undefined8 *)(lVar1 + 0x4c) = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0xe0);
    *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar3 + 0xd8);
    *(undefined8 *)(lVar1 + 0xe0) = uVar2;
    *(undefined4 *)(lVar1 + 0xe8) = *(undefined4 *)(lVar3 + 0xe8);
    *(undefined4 *)(lVar1 + 0xf0) = *(undefined4 *)(lVar3 + 0xf0);
    *(undefined4 *)(lVar1 + 0xf4) = *(undefined4 *)(lVar3 + 0xf4);
    *(undefined4 *)(lVar1 + 0xf8) = *(undefined4 *)(lVar3 + 0xf8);
    *(undefined4 *)(lVar1 + 0xec) = *(undefined4 *)(lVar3 + 0xec);
    *(undefined4 *)(lVar1 + 0xfc) = *(undefined4 *)(lVar3 + 0xfc);
    *(undefined4 *)(lVar1 + 0x100) = *(undefined4 *)(lVar3 + 0x100);
    *(undefined4 *)(lVar1 + 0x104) = *(undefined4 *)(lVar3 + 0x104);
    *(undefined4 *)(lVar1 + 0x108) = *(undefined4 *)(lVar3 + 0x108);
    uVar2 = *(undefined8 *)(lVar3 + 0x118);
    *(undefined8 *)(lVar1 + 0x110) = *(undefined8 *)(lVar3 + 0x110);
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x128);
    *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)(lVar3 + 0x120);
    *(undefined8 *)(lVar1 + 0x128) = uVar2;
    *(undefined4 *)(lVar1 + 0x130) = *(undefined4 *)(lVar3 + 0x130);
    *(undefined4 *)(lVar1 + 0x134) = *(undefined4 *)(lVar3 + 0x134);
    *(undefined4 *)(lVar1 + 0x138) = *(undefined4 *)(lVar3 + 0x138);
    *(undefined4 *)(lVar1 + 0x13c) = *(undefined4 *)(lVar3 + 0x13c);
    *(undefined4 *)(lVar1 + 0x140) = *(undefined4 *)(lVar3 + 0x140);
    *(undefined4 *)(lVar1 + 0x144) = *(undefined4 *)(lVar3 + 0x144);
  }
  return;
}



// FUNCTION 142488b80 PostLoad body=27 status=ok
// SIG undefined PostLoad(void)

void UNavArea::PostLoad(undefined8 param_1)

{
  UObject::PostLoad();
  FUN_14247e190(param_1);
  return;
}



// FUNCTION 142488ba0 FUN_142488ba0 body=215 status=ok
// SIG undefined FUN_142488ba0(void)

void FUN_142488ba0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x460) == 0) {
    return;
  }
  lVar1 = FUN_14270bb10(param_2);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x508);
    if (lVar1 == 0) {
      return;
    }
    lVar3 = UIpConnection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    lVar3 = *(longlong *)(lVar1 + 0x1970);
    bVar4 = lVar3 == 0;
  }
  else {
    uVar2 = FUN_1422312c0(param_1);
    lVar3 = UGameInstance::GetFirstGamePlayer(uVar2);
    bVar4 = lVar1 == lVar3;
  }
  if (((!bVar4) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x460), lVar1 != 0)) {
    *(undefined4 *)(*(longlong *)(param_2 + 0x460) + 0x51c) = *(undefined4 *)(lVar1 + 0x480);
  }
  return;
}



// FUNCTION 142488ca0 Precache body=260 status=ok
// SIG undefined Precache(void)

void UGameViewportClient::Precache(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  plVar2 = (longlong *)UWorld::GetAudioDevice(uVar1);
  if (plVar2 == (longlong *)0x0) {
    DAT_146532860 = 0;
    return;
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  uVar4 = 0;
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  uVar3 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar3 <= local_18)) {
      if (local_28 == 0) {
        DAT_146532860 = 0;
        return;
      }
      FMemory::Free(local_28);
      DAT_146532860 = 0;
      return;
    }
    uVar4 = uVar4 & 0xffffff00;
    (**(code **)(*plVar2 + 0x30))
              (plVar2,*(undefined8 *)(local_28 + (longlong)local_18 * 8),0,1,uVar4);
    uVar3 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  } while( true );
}



// FUNCTION 142488db0 FUN_142488db0 body=2208 status=ok
// SIG undefined FUN_142488db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142488db0(void)

{
  void *_Src;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 **ppuVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint unaff_R15D;
  uint uVar19;
  ulonglong uVar20;
  uint local_res8 [2];
  char local_res10 [8];
  char local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1a8;
  int local_1a4;
  uint local_1a0;
  uint local_198 [2];
  undefined2 *local_190;
  undefined8 local_188;
  int local_180 [2];
  int local_178;
  uint local_174;
  int local_170 [2];
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined2 *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined2 *local_140;
  undefined8 local_138;
  longlong local_130;
  uint local_128;
  int local_124;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8 [2];
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58 [3];
  
  uVar17 = 0;
  local_1a0 = 0;
  FUN_142486f40(0);
  local_140 = (undefined2 *)0x0;
  local_138 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
  puVar16 = local_140;
  FGenericPlatformString::Memcpy(local_140,L"/Script/Engine.Engine",0x2c);
  local_190 = (undefined2 *)0x0;
  local_188 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
  FGenericPlatformString::Memcpy(local_190,L"/Script/Engine.GameUserSettings",0x40);
  uVar19 = 0;
  puVar11 = &DAT_143f3eda8;
  if ((int)local_138 != 0) {
    puVar11 = puVar16;
  }
  FConfigCacheIni::GetString
            (DAT_1468b6148,puVar11,L"GameUserSettingsClassName",&local_190,&DAT_1468e2360);
  local_1a8 = (uint)_DAT_1468b5ca0;
  uVar13 = 1;
  local_1a4 = (int)((ulonglong)_DAT_1468b5ca0 >> 0x20);
  local_res10[0] = '\0';
  local_120 = 0;
  local_118 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_174 = unaff_R15D & 0xffffff00;
  FDisplayMetrics::RebuildDisplayMetrics(&local_128);
  if (0 < (int)local_118) {
    pcVar5 = (char *)(local_120 + 0x58);
    uVar10 = uVar17;
    do {
      if (*pcVar5 != '\0') {
        FUN_142480c60(&local_158);
        goto LAB_142488eeb;
      }
      uVar10 = uVar10 + 1;
      pcVar5 = pcVar5 + 0x70;
    } while ((int)uVar10 < (int)local_118);
  }
  local_158 = (undefined2 *)0x0;
  local_150 = 0;
LAB_142488eeb:
  FUN_141189610(&local_120);
  local_res18[0] = '\0';
  puVar11 = &DAT_143f3eda8;
  if ((int)local_188 != 0) {
    puVar11 = local_190;
  }
  local_170[0] = 0;
  local_res20[0] = 0;
  cVar1 = FConfigCacheIni::GetInt(DAT_1468b6148,puVar11,L"Version",local_170,&DAT_1468e2420);
  local_198[0] = uVar13;
  if ((cVar1 != '\0') && (local_170[0] == 7)) {
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    FConfigCacheIni::GetBool
              (DAT_1468b6148,puVar16,L"bUseDesktopResolution",local_res10,&DAT_1468e2420);
    local_180[0] = 1;
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    FConfigCacheIni::GetInt(DAT_1468b6148,puVar16,L"FullscreenMode",local_180,&DAT_1468e2420);
    if ((local_180[0] != 0) && (uVar19 = uVar13, local_180[0] != 1)) {
      uVar19 = 2;
    }
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    local_198[0] = uVar19;
    FConfigCacheIni::GetInt(DAT_1468b6148,puVar16,L"ResolutionSizeX",&local_1a8,&DAT_1468e2420);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    FConfigCacheIni::GetInt(DAT_1468b6148,puVar16,L"ResolutionSizeY",&local_1a4,&DAT_1468e2420);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    FConfigCacheIni::GetString(DAT_1468b6148,puVar16,L"PreferredMonitor",&local_158,&DAT_1468e2420);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    FConfigCacheIni::GetBool
              (DAT_1468b6148,puVar16,L"bPrimaryIsPreferredMonitor",local_res18,&DAT_1468e2420);
    local_120 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_118 = 0;
    FDisplayMetrics::RebuildDisplayMetrics(&local_128);
    if ((((local_res10[0] != '\0') && (local_1a8 == 0)) && (local_1a4 == 0)) && (uVar19 != 2)) {
      local_1a8 = local_128;
      local_1a4 = local_124;
    }
    uVar8 = (ulonglong)(int)local_118;
    local_148 = local_120;
    local_130 = uVar8 * 0x70 + local_120;
    uVar19 = unaff_R15D & 0xffffff00;
    if (local_120 != local_130) {
      piVar15 = (int *)(local_120 + 0x18);
      do {
        uVar18 = 0;
        local_178 = 0;
        local_res8[0] = local_res8[0] & 0xffffff00;
        uVar20 = uVar18;
        if ((int)uVar8 < 1) {
LAB_142489288:
          iVar4 = *piVar15;
          uVar17 = uVar17 | 2;
          _Src = *(void **)(piVar15 + -2);
          local_168 = (undefined2 *)0x0;
          local_160 = iVar4;
          local_1a0 = uVar17;
          if (iVar4 == 0) {
            local_15c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,iVar4,0);
            _guard_xfg_dispatch_icall_nop(local_168,_Src,(longlong)iVar4 * 2);
          }
          ppuVar6 = &local_168;
        }
        else {
          do {
            lVar14 = local_120 + uVar18;
            FString::FString(local_b8,lVar14);
            FString::FString(&local_a8,lVar14 + 0x10);
            FString::FString(&local_98,lVar14 + 0x20);
            local_88 = *(undefined4 *)(lVar14 + 0x30);
            local_80 = *(undefined4 *)(lVar14 + 0x38);
            uStack_7c = *(undefined4 *)(lVar14 + 0x3c);
            uStack_78 = *(undefined4 *)(lVar14 + 0x40);
            uStack_74 = *(undefined4 *)(lVar14 + 0x44);
            local_84 = *(undefined4 *)(lVar14 + 0x34);
            local_70 = *(undefined4 *)(lVar14 + 0x48);
            uStack_6c = *(undefined4 *)(lVar14 + 0x4c);
            uStack_68 = *(undefined4 *)(lVar14 + 0x50);
            uStack_64 = *(undefined4 *)(lVar14 + 0x54);
            local_60 = *(undefined1 *)(lVar14 + 0x58);
            FString::FString(local_58,lVar14 + 0x60);
            iVar4 = local_90;
            puVar16 = local_98;
            if (piVar15[4] == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(piVar15 + 2);
            }
            puVar12 = &DAT_143f3eda8;
            if (local_90 != 0) {
              puVar12 = local_98;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar11);
            puVar11 = local_a8;
            if (iVar3 == 0) {
LAB_1424891f1:
              cVar1 = (char)local_res8[0];
            }
            else {
              puVar12 = &DAT_143f3eda8;
              if (local_a0 != 0) {
                puVar12 = local_a8;
              }
              if (*piVar15 == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = *(undefined2 **)(piVar15 + -2);
              }
              iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar12);
              if (iVar3 != 0) goto LAB_1424891f1;
              if (piVar15[4] == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(piVar15 + 2);
              }
              puVar9 = &DAT_143f3eda8;
              if (iVar4 != 0) {
                puVar9 = puVar16;
              }
              iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar12);
              if (iVar4 < 0) {
                local_178 = local_178 + 1;
              }
              local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
              cVar1 = '\x01';
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (puVar16 != (undefined2 *)0x0) {
              FMemory::Free(puVar16);
            }
            if (puVar11 != (undefined2 *)0x0) {
              FMemory::Free(puVar11);
            }
            if (local_b8[0] != 0) {
              FMemory::Free();
            }
            uVar19 = (int)uVar20 + 1;
            uVar18 = uVar18 + 0x70;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)local_118);
          uVar17 = local_1a0;
          if (cVar1 == '\0') goto LAB_142489288;
          uVar17 = local_1a0 | 1;
          if (*piVar15 == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = *(undefined2 **)(piVar15 + -2);
          }
          local_1a0 = uVar17;
          FString::PrintfImpl(local_c8,L"%s (%d)",puVar16,local_178 + 1);
          ppuVar6 = local_c8;
        }
        puVar16 = *ppuVar6;
        *ppuVar6 = (undefined2 *)0x0;
        iVar4 = *(int *)(ppuVar6 + 1);
        ppuVar6[1] = (undefined2 *)0x0;
        if (((uVar17 & 2) != 0) &&
           (uVar17 = uVar17 & 0xfffffffd, local_1a0 = uVar17, local_168 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if (((uVar17 & 1) != 0) &&
           (uVar17 = uVar17 & 0xfffffffe, local_1a0 = uVar17, local_c8[0] != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        puVar11 = &DAT_143f3eda8;
        if ((int)local_150 != 0) {
          puVar11 = local_158;
        }
        puVar12 = &DAT_143f3eda8;
        if (iVar4 != 0) {
          puVar12 = puVar16;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar11);
        if (iVar4 == 0) {
          FUN_14248ee80(*(undefined4 *)(local_148 + 0x38),*(undefined4 *)(local_148 + 0x3c));
          uVar19 = local_174;
          if (puVar16 != (undefined2 *)0x0) {
            FMemory::Free(puVar16);
            uVar19 = local_174;
          }
          break;
        }
        if (puVar16 != (undefined2 *)0x0) {
          FMemory::Free(puVar16);
        }
        piVar15 = piVar15 + 0x1c;
        local_148 = local_148 + 0x70;
        uVar19 = local_174;
        if (local_148 == local_130) break;
        uVar8 = local_118 & 0xffffffff;
      } while( true );
    }
    cVar1 = (char)uVar19;
    if (local_res18[0] == '\0') {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PreferredMonitor")
      ;
      if (plVar7 != (longlong *)0x0) {
        puVar16 = &DAT_143f3eda8;
        if ((int)local_150 != 0) {
          puVar16 = local_158;
        }
        uVar19 = (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x60))(plVar7,puVar16,uVar19 & 0xff000000);
      }
    }
    cVar2 = FUN_142486850();
    if (cVar2 != '\0') {
      local_res8[0] = local_res8[0] & 0xffffff00;
      puVar16 = &DAT_143f3eda8;
      if ((int)local_188 != 0) {
        puVar16 = local_190;
      }
      cVar2 = FConfigCacheIni::GetBool
                        (DAT_1468b6148,puVar16,L"bUseHDRDisplayOutput",local_res8,&DAT_1468e2420);
      if (cVar2 != '\0') {
        cVar1 = (char)local_res8[0];
      }
      if (DAT_146af4a68 != '\0') {
        cVar1 = '\x01';
      }
    }
    puVar16 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar16 = local_190;
    }
    cVar2 = FConfigCacheIni::GetBool
                      (DAT_1468b6148,puVar16,L"bUsePerformanceMode",local_res20,&DAT_1468e2420);
    if (cVar2 != '\0') {
      if ((uint)_DAT_1468b5ca0 != 0) {
        local_1a8 = (uint)_DAT_1468b5ca0;
      }
      iVar4 = (int)((ulonglong)_DAT_1468b5ca0 >> 0x20);
      if (iVar4 != 0) {
        local_1a4 = iVar4;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af4fc8) &&
       (_Init_thread_header(&DAT_146af4fc8), DAT_146af4fc8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af4fc0 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.EnableHDROutput");
      _Init_thread_footer(&DAT_146af4fc8);
    }
    plVar7 = DAT_146af4fc0;
    if (DAT_146af4fc0 != (longlong *)0x0) {
      FString::PrintfImpl(&local_168,&DAT_143f3edc0,cVar1 != '\0');
      puVar16 = &DAT_143f3eda8;
      if (local_160 != 0) {
        puVar16 = local_168;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,puVar16,0x2000000);
      if (local_168 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_141189610(&local_120);
    puVar16 = local_140;
  }
  if ((uint)_DAT_1468b5ca0 != 0) {
    local_1a8 = (uint)_DAT_1468b5ca0;
  }
  iVar4 = (int)((ulonglong)_DAT_1468b5ca0 >> 0x20);
  if (iVar4 != 0) {
    local_1a4 = iVar4;
  }
  local_res8[0] = local_198[0];
  local_198[0] = local_1a8;
  local_180[0] = local_1a4;
  FUN_142445e10(local_198,local_180,local_res8);
  FSystemResolution::RequestResolutionChange(local_198[0],local_180[0],local_res8[0]);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  if (local_158 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_190 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  return;
}



// FUNCTION 142489650 FUN_142489650 body=260 status=ok
// SIG undefined FUN_142489650(void)

bool FUN_142489650(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1450bcbf8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)&LAB_14125e9b8;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1450bcc40;
  }
  plVar3 = (longlong *)UOnlineEngineInterface::Get();
  cVar1 = (**(code **)(*plVar3 + 0x2d8))(plVar3,uVar2,0,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return cVar1 != '\0';
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return cVar1 != '\0';
}



// FUNCTION 142489760 FUN_142489760 body=2080 status=ok
// SIG undefined FUN_142489760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142489760(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined2 **ppuVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  void *pvVar23;
  uint uVar24;
  bool bVar25;
  undefined2 *local_118;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  void *local_f8;
  ulonglong local_f0;
  void *local_e8;
  ulonglong local_e0;
  void *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0 [3];
  void *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  longlong *local_90;
  void *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (((DAT_1468c2180 != 0) || (DAT_146b1716d != '\0')) || (DAT_1468c2184 != '\0')) {
    local_c8 = *(longlong **)(param_1 + 0xa0);
    uVar14 = 0;
    uVar20 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    uVar18 = uVar14;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      iVar13 = (int)local_c8[1];
      bVar25 = iVar13 == 0;
      if (bVar25) {
        *(int *)(local_c8 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (uVar18 = 0, !bVar25) {
        LOCK();
        bVar25 = iVar13 == (int)local_c8[1];
        if (bVar25) {
          *(int *)(local_c8 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar25) {
          if (local_c8 != (longlong *)0x0) {
            uVar18 = *(ulonglong *)(param_1 + 0x98);
          }
          goto LAB_142489818;
        }
        LOCK();
        iVar13 = (int)local_c8[1];
        bVar25 = iVar13 == 0;
        if (bVar25) {
          *(int *)(local_c8 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
      local_c8 = (longlong *)0x0;
    }
LAB_142489818:
    plVar17 = local_c8;
    bVar25 = false;
    if ((DAT_1468c2180 == 0) && (DAT_146b1716e != '\0')) {
      bVar25 = false;
      if (uVar18 != 0) {
        bVar25 = true;
      }
    }
    lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_78);
    uVar12 = *(uint *)(lVar6 + 4);
    puVar7 = (uint *)(**(code **)(*param_2 + 0x20))(param_2,local_70);
    local_108 = *puVar7;
    local_100 = 0;
    local_104 = uVar12;
    if ((bVar25) && (DAT_1469f4590 != 0)) {
      local_98 = uVar18;
      local_90 = plVar17;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar17 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar17)(plVar17);
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
      cVar5 = FSlateApplication::TakeScreenshot(DAT_1469f4590,&local_98,&local_f8,&local_108);
      plVar8 = local_90;
      DAT_1468c2188 = local_108;
      DAT_1468c218c = local_104;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_90 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
      cVar5 = FUN_142876040(param_2,&local_f8,&local_68);
    }
    uVar21 = local_104;
    uVar12 = local_108;
    pvVar23 = DAT_146b17548;
    if (cVar5 != '\0') {
      plVar8 = DAT_146532720;
      if (DAT_146532720 != DAT_146532720 + (longlong)DAT_146532728 * 2) {
LAB_142489980:
        if (((int)plVar8[1] == 0) || (*plVar8 == 0)) goto LAB_14248998a;
        if (*DAT_146af4b60 != 0) {
          for (pvVar23 = local_f8;
              pvVar23 != (void *)((longlong)local_f8 + (longlong)(int)local_f0 * 4);
              pvVar23 = (void *)((longlong)pvVar23 + 4)) {
            *(undefined1 *)((longlong)pvVar23 + 3) = 0xff;
          }
          DAT_146532734 = DAT_146532734 + 1;
          bVar25 = false;
          lVar6 = (longlong)(DAT_146532728 + -1);
          if (-1 < DAT_146532728 + -1) {
            lVar22 = lVar6 << 4;
            bVar25 = false;
            do {
              if (((*(int *)(lVar22 + 8 + (longlong)DAT_146532720) == 0) ||
                  (plVar8 = *(longlong **)(lVar22 + (longlong)DAT_146532720),
                  plVar8 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar12,uVar21,&local_f8),
                 cVar5 == '\0')) {
                bVar25 = true;
              }
              lVar22 = lVar22 + -0x10;
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
          }
          iVar13 = DAT_146532728;
          DAT_146532734 = DAT_146532734 + -1;
          if ((bVar25) && (DAT_146532734 < 1)) {
            uVar18 = uVar14;
            if (0 < DAT_146532728) {
              do {
                if (((*(int *)(uVar14 + 8 + (longlong)DAT_146532720) == 0) ||
                    (*(longlong **)(uVar14 + (longlong)DAT_146532720) == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(**(longlong **)(uVar14 + (longlong)DAT_146532720) + 0x10))
                                      (), cVar5 != '\0')) {
                  TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146532720,uVar18,1,1);
                }
                else {
                  uVar18 = (ulonglong)((int)uVar18 + 1);
                  uVar14 = uVar14 + 0x10;
                }
              } while ((int)uVar18 < DAT_146532728);
            }
            _DAT_146532730 = DAT_146532728 * 2;
            if (_DAT_146532730 < 3) {
              _DAT_146532730 = 2;
            }
            if ((_DAT_146532730 < iVar13) && (DAT_14653272c != DAT_146532728)) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146532720);
            }
          }
          goto LAB_142489ee5;
        }
      }
LAB_142489993:
      local_118 = (undefined2 *)0x0;
      iVar13 = (int)DAT_146b17550;
      local_110 = iVar13;
      if (iVar13 == 0) {
        local_10c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,DAT_146b17550 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_118,pvVar23,(longlong)iVar13 * 2);
      }
      if ((DAT_1468c2180 != 0) && (local_110 < 2)) {
        local_c0[0] = 0;
        local_c0[1] = 0;
        FScreenshotRequest::RequestScreenshot(local_c0,0,1);
        if (local_c0[0] != 0) {
          FMemory::Free();
        }
        pvVar23 = DAT_146b17548;
        iVar13 = (int)DAT_146b17550;
        local_110 = iVar13;
        if ((iVar13 == 0) && (local_10c == 0)) {
          local_10c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,DAT_146b17550 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(local_118,pvVar23,(longlong)iVar13 * 2);
        }
      }
      uVar9 = FUN_1424f49c0();
      FHighResScreenshotConfig::MergeMaskIntoAlpha(uVar9,&local_f8);
      uVar21 = DAT_1468c2188;
      uVar24 = DAT_1468c218c;
      uVar12 = uVar20;
      if (DAT_1468c2184 != '\0') {
        lVar6 = FUN_1424f49c0();
        uVar20 = *(uint *)(lVar6 + 0x10);
        uVar12 = *(uint *)(lVar6 + 0x14);
        uVar21 = *(uint *)(lVar6 + 0x18);
        uVar24 = *(uint *)(lVar6 + 0x1c);
      }
      uVar4 = local_104;
      uVar3 = local_108;
      if ((uVar21 != uVar20) || (uVar24 != uVar12)) {
        lVar6 = (longlong)(int)local_108;
        if (((int)local_108 < (int)uVar21) || ((int)local_104 < (int)uVar24)) {
          uVar12 = 0;
          uVar21 = local_108;
          uVar24 = local_104;
          uVar20 = uVar12;
        }
        uVar21 = uVar21 - uVar20;
        uVar24 = uVar24 - uVar12;
        if (0 < (int)uVar24) {
          uVar18 = (ulonglong)uVar24;
          pvVar23 = (void *)((longlong)local_f8 +
                            ((longlong)(int)(uVar12 * local_108) + (longlong)(int)uVar20) * 4);
          pvVar15 = local_f8;
          local_a8 = (void *)(lVar6 * 4);
          do {
            _guard_xfg_dispatch_icall_nop(pvVar15,pvVar23,(longlong)(int)uVar21 * 4);
            pvVar23 = (void *)((longlong)pvVar23 + lVar6 * 4);
            pvVar15 = (void *)((longlong)pvVar15 + (longlong)(int)uVar21 * 4);
            uVar18 = uVar18 - 1;
            plVar17 = local_c8;
          } while (uVar18 != 0);
        }
        iVar19 = uVar24 * uVar21;
        iVar13 = uVar4 * uVar3 - iVar19;
        if (iVar13 != 0) {
          iVar11 = ((int)local_f0 - iVar19) - iVar13;
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)local_f8 + (longlong)iVar19 * 4),
                       (void *)((longlong)local_f8 + (longlong)(int)(uVar4 * uVar3) * 4),
                       (longlong)iVar11 << 2);
          }
          local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 - iVar13);
        }
        local_100 = 0;
        local_108 = uVar21;
        local_104 = uVar24;
      }
      pvVar23 = (void *)0x0;
      lVar6 = FUN_141672300(local_58,&local_118,0);
      iVar13 = *(int *)(lVar6 + 8);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (1 < iVar13) {
        ppuVar10 = (undefined2 **)FUN_141671940(local_48,&local_118,0);
        if (&local_118 != ppuVar10) {
          if (local_118 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_118 = *ppuVar10;
          *ppuVar10 = (undefined2 *)0x0;
          local_110 = *(int *)(ppuVar10 + 1);
          local_10c = *(int *)((longlong)ppuVar10 + 0xc);
          ppuVar10[1] = (undefined2 *)0x0;
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        iVar13 = local_110;
        lVar6 = (longlong)local_110;
        local_110 = (5 - (uint)(local_110 != 0)) + local_110;
        if (local_10c < local_110) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar13);
        }
        lVar6 = lVar6 - (ulonglong)(iVar13 != 0);
        *(undefined8 *)(local_118 + lVar6) = 0x67006e0070002e;
        local_118[lVar6 + 4] = 0;
      }
      pvVar15 = local_f8;
      local_e0 = 0;
      local_e8 = pvVar23;
      if ((DAT_1468c2198 == 0) || (DAT_1468c219c == 0)) {
        lVar6 = (longlong)(int)local_f0;
        local_e0 = local_f0 & 0xffffffff;
        if ((int)local_f0 != 0) {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_e8,local_f0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_e8,pvVar15,lVar6 << 2);
        }
      }
      else {
        FUN_1424ea510(local_108,local_104,DAT_1468c2198,DAT_1468c219c,&local_f8,&local_e8);
        local_108 = DAT_1468c2198;
        local_104 = DAT_1468c219c;
      }
      local_d0 = 0;
      local_d8 = pvVar23;
      FImageUtils::CompressImageArray(local_108,local_104,&local_e8,&local_d8);
      local_88 = local_d8;
      puVar16 = &DAT_143f3eda8;
      if (local_110 != 0) {
        puVar16 = local_118;
      }
      uStack_80 = (undefined4)local_d0;
      local_a8 = local_d8;
      uStack_a0 = (undefined4)local_d0;
      uStack_9c = uStack_7c;
      uVar9 = FUN_1415c3d50();
      FUN_14167ef40(&local_a8,puVar16,uVar9,0);
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
LAB_142489ee5:
    FScreenshotRequest::Reset();
    TBaseMulticastDelegate<void>::Broadcast(&DAT_146535190);
    DAT_1464aaa48 = DAT_1468c217f;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar17 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar17)(plVar17);
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
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
LAB_14248998a:
  plVar8 = plVar8 + 2;
  if (plVar8 == DAT_146532720 + (longlong)DAT_146532728 * 2) goto LAB_142489993;
  goto LAB_142489980;
}



// FUNCTION 142489f80 QueryShowFocus body=137 status=ok
// SIG undefined QueryShowFocus(void)

undefined2 *
UGameViewportClient::QueryShowFocus(undefined8 param_1,undefined2 *param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  cVar1 = *(char *)(lVar3 + 0x38);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x01') {
      if (param_3 != '\0') {
LAB_142489ff1:
        *param_2 = 0x101;
        return param_2;
      }
    }
    else if ((cVar1 != '\x02') || (param_3 == '\x01')) goto LAB_142489ff1;
  }
  *param_2 = 0x100;
  return param_2;
}



// FUNCTION 14248a010 FUN_14248a010 body=245 status=ok
// SIG undefined FUN_14248a010(void)

void FUN_14248a010(longlong param_1)

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
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_14248a05f;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_14248a092;
    }
LAB_14248a05f:
    FBaseGraphTask::GetSmallTaskAllocator();
    plVar9 = *(longlong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))();
    }
    FUN_1424719e0(param_1,&DAT_146ab6e78,0);
    return;
  }
LAB_14248a092:
  plVar9 = (longlong *)FUN_1424781a0(local_28,0,0xff);
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
  return;
}



// FUNCTION 14248a110 FUN_14248a110 body=190 status=ok
// SIG undefined FUN_14248a110(void)

void FUN_14248a110(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
  }
  if ((*(byte *)(lVar4 + 0x38) & 4) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    lVar2 = lVar4 + -8;
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    if (lVar2 != 0) {
      pcVar3 = (char *)(lVar4 + 0x308);
      if (lVar4 == 0) {
        pcVar3 = &DAT_00000310;
      }
      if (*pcVar3 == '\0') {
        FSlateApplication::SetGameIsFakingTouchEvents(DAT_1469f4590,0x301,0);
      }
    }
  }
  if (DAT_146b17150 != 0) {
    lVar4 = FUN_1428742d0();
    if (lVar4 != 0) {
      uVar5 = FUN_1428742d0(DAT_146b17150);
      FUN_1422f97f0(uVar5,*(undefined4 *)(param_1 + 0x2e8));
      *(undefined1 *)(param_1 + 0x2ec) = 1;
    }
  }
  return;
}



// FUNCTION 14248a1d0 FUN_14248a1d0 body=180 status=ok
// SIG undefined FUN_14248a1d0(void)

void FUN_14248a1d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  int local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar1,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xdf0))(plVar2,param_1[0x8b]);
    }
  }
  if (param_1[0x8b] != 0) {
    lVar3 = UFadeInOutViewportClient::GetPrivateStaticClass();
    lVar5 = param_1[0x8b];
    for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) goto LAB_14248a263;
    }
  }
  lVar5 = 0;
LAB_14248a263:
  lVar4 = FUN_14293bdd0();
  for (; (lVar5 != 0 && (lVar5 != lVar4)); lVar5 = *(longlong *)(lVar5 + 0x30)) {
  }
  return;
}



// FUNCTION 14248a290 FUN_14248a290 body=107 status=ok
// SIG undefined FUN_14248a290(void)

void FUN_14248a290(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar1,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xdf0))(plVar2,param_1[0x8b]);
    }
  }
  return;
}



// FUNCTION 14248a300 FUN_14248a300 body=135 status=ok
// SIG undefined FUN_14248a300(void)

void FUN_14248a300(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar2,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x768))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0xe38))(plVar3,param_1[0x8d]);
      }
    }
  }
  return;
}



// FUNCTION 14248a390 FUN_14248a390 body=112 status=ok
// SIG undefined FUN_14248a390(void)

undefined8
FUN_14248a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424811e0();
  FUN_14248a470(uVar1,param_2,param_3,param_4,param_5,param_6);
  FUN_14246d090(param_1,1);
  return param_2;
}



// FUNCTION 14248a400 FUN_14248a400 body=112 status=ok
// SIG undefined FUN_14248a400(void)

undefined8
FUN_14248a400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424811e0();
  FUN_14248a470(uVar1,param_2,param_3,param_4,param_5,param_6);
  FUN_14246d150(param_1,1);
  return param_2;
}



// FUNCTION 14248a470 FUN_14248a470 body=308 status=ok
// SIG undefined FUN_14248a470(void)

undefined8 *
FUN_14248a470(longlong *param_1,undefined8 *param_2,char *param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*param_3 != '\0') {
    lVar2 = *param_1;
    lVar1 = lVar2 + (longlong)(int)param_1[1] * 0x18;
    if (lVar2 != lVar1) {
      piVar5 = (int *)(lVar2 + 0x10);
      lVar6 = lVar2;
      do {
        if (((piVar5[-2] == *(int *)(param_3 + 4) && piVar5[-1] == *(int *)(param_3 + 8)) &&
            piVar5[1] == *(int *)(param_3 + 0x10)) && *piVar5 == *(int *)(param_3 + 0xc)) {
          iVar3 = (int)((lVar6 - lVar2) / 0x18);
          if ((-1 < iVar3) && (iVar3 < (int)param_1[1])) {
            *(undefined1 *)(lVar2 + (longlong)iVar3 * 0x18) = param_4;
            *(undefined4 *)(*param_1 + 4 + (longlong)iVar3 * 0x18) = param_5;
            uVar4 = *(undefined8 *)(param_3 + 8);
            *param_2 = *(undefined8 *)param_3;
            param_2[1] = uVar4;
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0x10);
            return param_2;
          }
          break;
        }
        lVar6 = lVar6 + 0x18;
        piVar5 = piVar5 + 6;
      } while (lVar6 != lVar1);
    }
  }
  FUN_142470e80(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 14248a5b0 FUN_14248a5b0 body=513 status=ok
// SIG undefined FUN_14248a5b0(void)

undefined8 * FUN_14248a5b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  longlong *local_res20;
  
  if (((param_1 != 0) &&
      (((lVar4 = *(longlong *)(param_1 + 0x120), lVar4 != 0 || (lVar4 = FUN_1423407b0(), lVar4 != 0)
        ) && (cVar3 = UWorld::IsGameWorld(lVar4), cVar3 != '\0')))) &&
     (cVar3 = UActorComponent::IsComponentTickEnabled(param_1), cVar3 != '\0')) {
    FUN_142492120();
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    lVar4 = FUN_142481dd0(lVar4);
    if ((*(longlong *)(param_1 + 0x118) == 0) ||
       (local_res18 = *(longlong *)(param_1 + 0x118), (*(byte *)(param_1 + 0x881) & 0x20) != 0)) {
      local_res18 = param_1;
    }
    plVar5 = (longlong *)(lVar4 + 8);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8);
    plVar7 = (longlong *)0x0;
    plVar6 = plVar7;
    if (local_res8[0] != -1) {
      plVar6 = (longlong *)(*plVar5 + (longlong)local_res8[0] * 0x18);
    }
    plVar9 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    if (plVar9 == (longlong *)0x0) {
      local_res20 = &local_res18;
      FUN_14239e870(plVar5,local_res8,&local_res20,0);
      plVar9 = (longlong *)(*plVar5 + ((longlong)local_res8[0] * 3 + 1) * 8);
      plVar5 = (longlong *)operator_new(0x90);
      if (plVar5 != (longlong *)0x0) {
        *(undefined1 *)((longlong)plVar5 + 0x13) = 0;
        _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar5 + 0x24),0,0x6c);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined2 *)(plVar5 + 2) = 1;
        *(undefined1 *)((longlong)plVar5 + 0x12) = 0;
        *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
        *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
        FUN_14246d790(plVar5 + 5);
        plVar5[0x10] = 0;
        plVar5[0x11] = 0;
        plVar7 = plVar5;
      }
      *plVar9 = (longlong)plVar7;
      lVar4 = DAT_146af4a78;
      *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(DAT_146af4a78 + 0x38);
      *(undefined4 *)((longlong)plVar7 + 0x2c) = *(undefined4 *)(lVar4 + 0x3c);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(plVar7 + 6,lVar4 + 0x40);
    }
    puVar2 = (undefined8 *)*plVar9;
    FWeakObjectPtr::operator=(&local_res10,param_1);
    iVar1 = *(int *)(puVar2 + 0x11);
    *(int *)(puVar2 + 0x11) = iVar1 + 1;
    if (*(int *)((longlong)puVar2 + 0x8c) < iVar1 + 1) {
      TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(puVar2 + 8,iVar1);
    }
    puVar8 = (undefined8 *)puVar2[0x10];
    if ((undefined8 *)puVar2[0x10] == (undefined8 *)0x0) {
      puVar8 = puVar2 + 8;
    }
    *(undefined4 *)(puVar8 + iVar1) = local_res10;
    *(undefined4 *)((longlong)puVar8 + (longlong)iVar1 * 8 + 4) = local_res14;
    *puVar2 = *(undefined8 *)(local_res18 + 0x18);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14248a7c0 FUN_14248a7c0 body=65 status=ok
// SIG undefined FUN_14248a7c0(void)

void FUN_14248a7c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x708) - 1U < 3)) {
    FUN_14247e190();
    (**(code **)(*param_3 + 0x308))(param_3,param_1);
  }
  return;
}



// FUNCTION 14248a810 FUN_14248a810 body=100 status=ok
// SIG undefined FUN_14248a810(void)

void FUN_14248a810(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = DAT_146532808 + 1;
    *(int *)(*(longlong *)(param_2 + 0x460) + 0x480) = DAT_146532808;
    DAT_146532808 = iVar1;
    (**(code **)(**(longlong **)(param_2 + 0x460) + 0x758))(*(longlong **)(param_2 + 0x460),param_3)
    ;
    (**(code **)(**(longlong **)(param_2 + 0x460) + 0x760))(*(longlong **)(param_2 + 0x460),param_4)
    ;
  }
  return;
}



// FUNCTION 14248a880 FUN_14248a880 body=255 status=ok
// SIG undefined FUN_14248a880(void)

undefined8 FUN_14248a880(char *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28;
  undefined8 *local_20;
  
  if (*param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = operator_new(0x18);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FWeakObjectPtr::operator=(lVar3,param_2);
      *(undefined4 *)(lVar3 + 8) = param_3;
      *(undefined8 *)(lVar3 + 0xc) = *param_4;
      *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(param_4 + 1);
    }
    local_20 = (undefined8 *)operator_new(0x18);
    if (local_20 != (undefined8 *)0x0) {
      *(undefined4 *)(local_20 + 1) = 1;
      *local_20 = &PTR_FUN_1450bcdd0;
      *(undefined4 *)((longlong)local_20 + 0xc) = 1;
      local_20[2] = lVar3;
    }
    local_28 = lVar3;
    SharedPointerInternals::EnableSharedFromThis(&local_28,lVar3,lVar3);
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
    }
    plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
    *plVar4 = local_28;
    plVar4[1] = (longlong)local_20;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14248a980 FUN_14248a980 body=238 status=ok
// SIG undefined FUN_14248a980(void)

undefined8 FUN_14248a980(char *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_28;
  undefined8 *local_20;
  
  if (*param_1 == '\0') {
    return 0;
  }
  lVar2 = operator_new(0xc);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FWeakObjectPtr::operator=(lVar2,param_2);
    *(undefined4 *)(lVar2 + 8) = param_3;
  }
  local_20 = (undefined8 *)operator_new(0x18);
  if (local_20 != (undefined8 *)0x0) {
    *(undefined4 *)(local_20 + 1) = 1;
    *local_20 = &PTR_LAB_1450bcdc0;
    *(undefined4 *)((longlong)local_20 + 0xc) = 1;
    local_20[2] = lVar2;
  }
  local_28 = lVar2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,lVar2,lVar2);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  *plVar3 = local_28;
  plVar3[1] = (longlong)local_20;
  return 1;
}



// FUNCTION 14248aa70 FUN_14248aa70 body=522 status=ok
// SIG undefined FUN_14248aa70(void)

void FUN_14248aa70(longlong *param_1)

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
        if (bVar4) goto LAB_14248abaf;
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
LAB_14248abaf:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x68 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x19] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x18] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 14248ac80 FUN_14248ac80 body=280 status=ok
// SIG undefined FUN_14248ac80(void)

void FUN_14248ac80(longlong param_1)

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
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 1;
    if (((DAT_146ac3ac6 != '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) ||
       ((DAT_146ac3ac5 == '\0' &&
        (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
         (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      if (*(longlong *)(param_1 + 0x618) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x608) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(param_1,0x630);
      return;
    }
    plVar9 = (longlong *)FUN_142477b10(local_28,0,0xff);
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
  }
  return;
}



// FUNCTION 14248ada0 FUN_14248ada0 body=567 status=ok
// SIG undefined FUN_14248ada0(void)

void FUN_14248ada0(ulonglong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 local_58 [32];
  ulonglong uVar14;
  
  if (*(char *)((longlong)param_1 + 0x54) == '\0') {
    if (param_2 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
    }
    lVar8 = (longlong)DAT_146af4d38;
    uVar15 = 0;
    if (DAT_146af4d38 != 0) {
      bVar18 = (ulonglong *)*DAT_146af4d30 != param_1;
      uVar11 = uVar15;
      uVar14 = uVar15;
      plVar10 = DAT_146af4d30;
      uVar17 = uVar15;
      do {
        uVar12 = (uint)uVar14;
        uVar13 = uVar12;
        do {
          uVar11 = uVar11 + 1;
          uVar13 = uVar13 + 1;
          uVar14 = (ulonglong)uVar13;
          if (lVar8 <= (longlong)uVar11) break;
        } while (bVar18 == ((ulonglong *)plVar10[uVar11] != param_1));
        if (bVar18 != false) {
          uVar16 = (uint)uVar17;
          if (uVar16 != uVar12) {
            _guard_xfg_dispatch_icall_nop
                      (plVar10 + (int)uVar16,plVar10 + (int)uVar12,
                       (longlong)(int)(uVar13 - uVar12) << 3);
            plVar10 = DAT_146af4d30;
          }
          uVar17 = (ulonglong)(uVar16 + (uVar13 - uVar12));
        }
        bVar18 = (bool)(bVar18 ^ 1);
      } while ((longlong)uVar11 < lVar8);
      DAT_146af4d38 = (int)uVar17;
    }
    uVar9 = FUN_14164ab60();
    FUN_141597530(uVar9,param_1[5]);
    plVar10 = (longlong *)*param_1;
    uVar11 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_1[1] < plVar10) {
      uVar11 = uVar15;
    }
    if (uVar11 != 0) {
      do {
        if (*plVar10 != 0) {
          FUN_14248ac80();
        }
        plVar10 = plVar10 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar11);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))))) {
      plVar10 = (longlong *)FUN_1424782f0(local_58,0,0xff);
      *(ulonglong **)(*plVar10 + 0x10) = param_1;
      lVar8 = *plVar10;
      lVar5 = plVar10[2];
      lVar3 = plVar10[1];
      lVar4 = *(longlong *)(lVar8 + 0x20);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_140445100(lVar8,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      plVar10 = (longlong *)param_1[2];
      param_1[2] = 0;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x30))();
      }
    }
  }
  return;
}



// FUNCTION 14248afe0 FUN_14248afe0 body=272 status=ok
// SIG undefined FUN_14248afe0(void)

int FUN_14248afe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = 0;
  cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>();
  bVar7 = cVar3 == '\0';
  iVar5 = 0;
  do {
    iVar2 = iVar5;
    do {
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1;
      }
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (lVar4 + (longlong)iVar2 * 8,param_2);
    } while (bVar7 == (cVar3 == '\0'));
    if (bVar7 != false) {
      if (iVar6 != iVar5) {
        lVar4 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar4 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar4 + (longlong)iVar6 * 8),(void *)(lVar4 + (longlong)iVar5 * 8),
                   (longlong)(iVar2 - iVar5) << 3);
      }
      iVar6 = iVar6 + (iVar2 - iVar5);
    }
    bVar7 = (bool)(bVar7 ^ 1);
    iVar5 = iVar2;
    if (iVar1 <= iVar2) {
      *(int *)(param_1 + 0x48) = iVar6;
      return iVar1 - iVar6;
    }
  } while( true );
}



// FUNCTION 14248b0f0 FUN_14248b0f0 body=398 status=ok
// SIG undefined FUN_14248b0f0(void)

undefined8 FUN_14248b0f0(longlong *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar6 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == -1) {
    return 0;
  }
  while( true ) {
    local_res8 = *param_2;
    puVar8 = (undefined4 *)((longlong)iVar3 * 0x68 + *param_1);
    local_resc = param_2[1];
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar2 != '\0') break;
    iVar3 = puVar8[0x18];
    piVar7 = puVar8 + 0x18;
    if (iVar3 == -1) {
      return 0;
    }
  }
  iVar3 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar3 * 0x68;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 100 + lVar6));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar7 = *(int *)(lVar9 + 0x60 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x60 + (longlong)iVar1 * 0x68);
      iVar1 = *piVar7;
    }
  }
  lVar6 = (longlong)iVar3 * 0x68 + *param_1;
  *(undefined4 *)(lVar6 + 0x58) = 0;
  if (*(longlong *)(lVar6 + 0x50) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (lVar6 + 0x10);
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 14248b280 FUN_14248b280 body=114 status=ok
// SIG undefined FUN_14248b280(void)

void FUN_14248b280(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = param_1[2];
    lVar1 = DAT_146532760 + -0x20 + (longlong)*param_1 * 0x20;
    *(undefined4 *)(lVar1 + 8) = 0;
    if (*(int *)(lVar1 + 0xc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (lVar1,0);
    }
    if (*param_1 != 0) {
      lVar1 = (longlong)*param_1 * 0x20;
      if ((*(int *)(lVar1 + -0x18 + DAT_146532760) == 0) &&
         (*(int *)(lVar1 + -8 + DAT_146532760) < 1)) {
        FUN_142478640(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14248b300 FUN_14248b300 body=300 status=ok
// SIG undefined FUN_14248b300(void)

void FUN_14248b300(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x1a8,0);
  plVar3 = *(longlong **)(param_1 + 0xd8);
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
          FUN_141804f50();
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x48))();
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
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 14248b430 FUN_14248b430 body=1000 status=ok
// SIG undefined FUN_14248b430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14248b430(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_178 [32];
  uint local_158;
  int local_154;
  uint local_150;
  uint uStack_14c;
  uint *puStack_148;
  undefined4 local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 *local_108;
  longlong *local_100;
  ulonglong local_f8;
  longlong *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puVar10 = (undefined1 *)0x0;
  uStack_14c = 1;
  plVar16 = (longlong *)(param_1 + 8);
  local_48 = (undefined1 *)0x0;
  puVar14 = (uint *)(param_1 + 0x18);
  local_40 = 0;
  uVar7 = *(uint *)(param_1 + 0x30);
  local_150 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  if (uVar7 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar14;
    }
    uVar1 = *puVar13;
    puVar5 = puVar10;
    puVar11 = puVar10;
    while (uVar1 == 0) {
      iVar4 = (int)puVar5;
      uStack_138 = (int)puVar11 + 0x20;
      puVar11 = (undefined1 *)(ulonglong)uStack_138;
      local_150 = iVar4 + 1;
      puVar5 = (undefined1 *)(ulonglong)local_150;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14248b520;
      uVar1 = puVar13[(longlong)iVar4 + 1];
    }
    uStack_14c = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_14c != 0) {
      for (; uStack_14c >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_14c == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_13c = (uStack_138 - iVar4) + 0x1f;
    if ((int)uVar7 < (int)uStack_13c) {
LAB_14248b520:
      uStack_13c = uVar7;
    }
  }
  local_140 = 0xffffffff;
  uVar1 = *(uint *)(param_1 + 0x30);
  uStack_128 = CONCAT44(uStack_14c,local_150);
  uStack_d8 = 0xffffffff;
  uStack_d4 = uStack_13c;
  uStack_110 = CONCAT44(uStack_134,uStack_138);
  uVar18 = -1 << ((byte)uVar1 & 0x1f);
  uVar12 = uVar1 & 0xffffffe0;
  uStack_120 = CONCAT44(uVar1,uVar18);
  uStack_e8 = local_150;
  uStack_e4 = uStack_14c;
  if (uVar1 != uVar7) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar14;
    }
    uVar18 = puVar13[(int)uVar1 >> 5] & uVar18;
    iVar4 = (int)uVar1 >> 5;
    while (uVar18 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14248b5f2;
      uVar18 = puVar13[(longlong)iVar4 + 1];
      uStack_120 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar18 = -uVar18 & uVar18;
    iVar4 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iVar4 = (uVar12 - iVar4) + 0x1f;
    uStack_120 = CONCAT44(iVar4,(undefined4)uStack_120);
    if ((int)uVar7 < iVar4) {
LAB_14248b5f2:
      uStack_120 = CONCAT44(uVar7,(undefined4)uStack_120);
    }
  }
  local_f8 = uStack_120 >> 0x20;
  puStack_148 = puVar14;
  local_130 = plVar16;
  local_100 = plVar16;
  local_e0 = puVar14;
  local_d0 = uStack_110;
  local_f0 = plVar16;
  uStack_118 = uStack_d8;
  uStack_114 = uStack_d4;
  while (((uStack_d4 != (uint)local_f8 || (local_e0 != puVar14)) || (local_f0 != plVar16))) {
    lVar8 = *(longlong *)(*local_f0 + 8 + (longlong)(int)uStack_d4 * 0x18);
    local_108 = (undefined8 *)(*local_f0 + (longlong)(int)uStack_d4 * 0x18);
    iVar4 = *(int *)(lVar8 + 0x88);
    if (iVar4 != 0) {
      local_158 = 0;
      lVar6 = *(longlong *)(lVar8 + 0x80);
      if (*(longlong *)(lVar8 + 0x80) == 0) {
        lVar6 = lVar8 + 0x40;
      }
      cVar3 = FWeakObjectPtr::IsValid(lVar6);
      bVar19 = cVar3 != '\0';
      puVar5 = puVar10;
      puVar11 = puVar10;
      do {
        local_154 = (int)puVar5;
        puVar5 = (undefined1 *)(ulonglong)(local_154 + 1U);
        if ((int)(local_154 + 1U) < iVar4) {
          do {
            lVar6 = *(longlong *)(lVar8 + 0x80);
            if (*(longlong *)(lVar8 + 0x80) == 0) {
              lVar6 = lVar8 + 0x40;
            }
            cVar3 = FWeakObjectPtr::IsValid(lVar6 + (longlong)(int)puVar5 * 8);
          } while ((bVar19 == (cVar3 != '\0')) &&
                  (uVar7 = (int)puVar5 + 1, puVar5 = (undefined1 *)(ulonglong)uVar7,
                  (int)uVar7 < iVar4));
          puVar11 = (undefined1 *)(ulonglong)local_158;
        }
        iVar17 = (int)puVar5 - local_154;
        if (bVar19 != false) {
          iVar15 = (int)puVar11;
          if (iVar15 != local_154) {
            lVar6 = *(longlong *)(lVar8 + 0x80);
            if (*(longlong *)(lVar8 + 0x80) == 0) {
              lVar6 = lVar8 + 0x40;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 + (longlong)iVar15 * 8),
                       (void *)(lVar6 + (longlong)local_154 * 8),(longlong)iVar17 << 3);
          }
          local_158 = iVar15 + iVar17;
          puVar11 = (undefined1 *)(ulonglong)local_158;
        }
        bVar19 = (bool)(bVar19 ^ 1);
      } while ((int)puVar5 < iVar4);
      *(int *)(lVar8 + 0x88) = (int)puVar11;
      puVar14 = puStack_148;
      plVar16 = local_100;
    }
    uVar2 = local_40;
    puVar9 = local_108;
    if (*(int *)(lVar8 + 0x88) == 0) {
      lVar8 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (local_40._4_4_ < iVar4) {
        TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                  (local_c8,uVar2 & 0xffffffff);
      }
      puVar5 = local_c8;
      if (local_48 != (undefined1 *)0x0) {
        puVar5 = local_48;
      }
      *(undefined8 *)(puVar5 + lVar8 * 8) = *puVar9;
    }
    uStack_d8 = uStack_d8 & ~uStack_e4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
  }
  puVar5 = local_c8;
  if (local_48 != (undefined1 *)0x0) {
    puVar5 = puVar10;
  }
  puVar9 = (undefined8 *)((ulonglong)puVar5 | (ulonglong)local_48);
  puVar5 = (undefined1 *)((longlong)(int)local_40 & 0x1fffffffffffffff);
  if (puVar9 + (int)local_40 < puVar9) {
    puVar5 = puVar10;
  }
  if (puVar5 != (undefined1 *)0x0) {
    do {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(plVar16,*puVar9);
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar10 != puVar5);
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 14248b820 FUN_14248b820 body=574 status=ok
// SIG undefined FUN_14248b820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14248b820(void)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint uStack_c4;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined *local_90;
  uint uStack_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar12 = (undefined1 *)0x0;
  uStack_c4 = 1;
  local_30 = (undefined1 *)0x0;
  local_c8 = 0;
  local_28 = 0;
  puStack_c0 = &DAT_1465327b0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  iVar6 = (int)DAT_1465327c8;
  if (iVar6 != 0) {
    puVar11 = DAT_1465327c0;
    if (DAT_1465327c0 == (uint *)0x0) {
      puVar11 = (uint *)&DAT_1465327b0;
    }
    uVar1 = *puVar11;
    puVar5 = puVar12;
    puVar10 = puVar12;
    while (uVar1 == 0) {
      iVar4 = (int)puVar5;
      uStack_b0 = (int)puVar10 + 0x20;
      puVar10 = (undefined1 *)(ulonglong)uStack_b0;
      local_c8 = iVar4 + 1;
      puVar5 = (undefined1 *)(ulonglong)local_c8;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14248b90b;
      uVar1 = puVar11[(longlong)iVar4 + 1];
    }
    uStack_c4 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_b4 = (uStack_b0 - iVar4) + 0x1f;
    if (iVar6 < iStack_b4) {
LAB_14248b90b:
      iStack_b4 = iVar6;
    }
  }
  uStack_88 = 0xffffffff;
  iStack_84 = iStack_b4;
  local_80 = CONCAT44(uStack_ac,uStack_b0);
  uStack_70 = CONCAT44(uStack_c4,local_c8);
  local_78 = &DAT_1465327a0;
  local_b8 = -1 << ((byte)DAT_1465327c8 & 0x1f);
  puStack_68 = &DAT_1465327b0;
  local_a0 = 0x465327a0;
  uStack_9c = 1;
  uStack_98 = local_c8;
  uStack_94 = uStack_c4;
  local_90 = &DAT_1465327b0;
  iStack_b4 = iVar6;
  uStack_58 = local_80;
  uStack_60 = uStack_88;
  iStack_5c = iStack_84;
  while( true ) {
    if (((iStack_84 == iVar6) && (local_90 == &DAT_1465327b0)) &&
       ((longlong *)CONCAT44(uStack_9c,local_a0) == &DAT_1465327a0)) break;
    puVar7 = (undefined4 *)((longlong)iStack_84 * 0x68 + *(longlong *)CONCAT44(uStack_9c,local_a0));
    cVar3 = FWeakObjectPtr::IsValid(puVar7);
    uVar2 = local_28;
    if (cVar3 == '\0') {
      lVar9 = (longlong)(int)local_28;
      iVar4 = (int)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,iVar4);
      if (local_28._4_4_ < iVar4) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_50,uVar2 & 0xffffffff);
      }
      puVar5 = local_50;
      if (local_30 != (undefined1 *)0x0) {
        puVar5 = local_30;
      }
      *(undefined4 *)(puVar5 + lVar9 * 8) = *puVar7;
      *(undefined4 *)((longlong)(puVar5 + lVar9 * 8) + 4) = puVar7[1];
    }
    uStack_88 = uStack_88 & ~uStack_94;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
  }
  puVar5 = local_50;
  if (local_30 != (undefined1 *)0x0) {
    puVar5 = puVar12;
  }
  puVar8 = (undefined4 *)((ulonglong)puVar5 | (ulonglong)local_30);
  puVar7 = puVar8 + (longlong)(int)local_28 * 2;
  for (; puVar8 != puVar7; puVar8 = puVar8 + 2) {
    local_a4 = puVar8[1];
    local_a8 = *puVar8;
    FUN_14248b0f0(&DAT_1465327a0,&local_a8);
  }
  if (local_30 != (undefined1 *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}



// FUNCTION 14248ba60 FUN_14248ba60 body=265 status=ok
// SIG undefined FUN_14248ba60(void)

undefined8 FUN_14248ba60(int *param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float local_res8;
  float local_resc;
  
  if (*param_1 + -1 != -1) {
    cVar3 = FUN_14248bc80((longlong)(*param_1 + -1) * 0x20 + DAT_146532760);
    if (cVar3 != '\0') {
      fVar5 = (float)param_1[2];
      iVar4 = *param_1;
      fVar2 = (float)param_1[1];
      iVar1 = iVar4 + -1;
      if (iVar1 != -1) {
        FUN_142477410((longlong)iVar1 * 0x20 + DAT_146532760);
        fVar5 = extraout_XMM0_Da;
      }
      param_1[1] = (int)fVar5;
      if ((iVar1 != -1) && (1e-08 < ABS(fVar2 - fVar5))) {
        local_res8 = fVar2;
        local_resc = fVar5;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (DAT_146532760 + 0x10 + (longlong)iVar1 * 0x20,&local_res8);
        iVar4 = *param_1;
      }
      if (iVar4 != 0) {
        if ((*(int *)((longlong)iVar4 * 0x20 + -0x18 + DAT_146532760) == 0) &&
           (*(int *)((longlong)iVar4 * 0x20 + -8 + DAT_146532760) < 1)) {
          FUN_142478640(param_1);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14248bb70 FUN_14248bb70 body=266 status=ok
// SIG undefined FUN_14248bb70(void)

undefined8 FUN_14248bb70(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  
  if (*param_1 + -1 != -1) {
    cVar3 = FUN_14248bc80((longlong)(*param_1 + -1) * 0x20 + DAT_146532760);
    if (cVar3 != '\0') {
      iVar5 = *param_1;
      iVar2 = param_1[1];
      iVar1 = iVar5 + -1;
      fVar6 = (float)param_1[2];
      if (iVar1 != -1) {
        fVar6 = (float)FUN_142477410((longlong)iVar1 * 0x20 + DAT_146532760);
      }
      iVar4 = (int)fVar6;
      param_1[1] = iVar4;
      if ((iVar1 != -1) && (iVar2 != iVar4)) {
        local_res8 = (float)iVar2;
        local_resc = (float)iVar4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (DAT_146532760 + 0x10 + (longlong)iVar1 * 0x20,&local_res8);
        iVar5 = *param_1;
      }
      if (iVar5 != 0) {
        if ((*(int *)((longlong)iVar5 * 0x20 + -0x18 + DAT_146532760) == 0) &&
           (*(int *)((longlong)iVar5 * 0x20 + -8 + DAT_146532760) < 1)) {
          FUN_142478640(param_1);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14248bc80 FUN_14248bc80 body=298 status=ok
// SIG undefined FUN_14248bc80(void)

undefined8 FUN_14248bc80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *param_1;
  iVar7 = (int)param_1[1];
  lVar4 = lVar1 + (longlong)iVar7 * 0x18;
  if (lVar1 != lVar4) {
    piVar3 = (int *)(lVar1 + 0x14);
    lVar5 = lVar1;
    do {
      if (((piVar3[-3] == *(int *)(param_2 + 4) && piVar3[-2] == *(int *)(param_2 + 8)) &&
          piVar3[-1] == *(int *)(param_2 + 0xc)) && *piVar3 == *(int *)(param_2 + 0x10)) {
        lVar4 = (lVar5 - lVar1) / 6 + (lVar5 - lVar1 >> 0x3f);
        iVar6 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
        if (iVar6 < 0) {
          return 0;
        }
        if (iVar7 <= iVar6) {
          return 0;
        }
        iVar2 = (iVar7 - iVar6) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar6 * 0x18),
                     (void *)(lVar1 + (longlong)(iVar7 - iVar2) * 0x18),(longlong)iVar2 * 0x18);
          iVar7 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar7 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
        return 1;
      }
      lVar5 = lVar5 + 0x18;
      piVar3 = piVar3 + 6;
    } while (lVar5 != lVar4);
  }
  return 0;
}



// FUNCTION 14248bdb0 FUN_14248bdb0 body=140 status=ok
// SIG undefined FUN_14248bdb0(void)

void FUN_14248bdb0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x478) < 1) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x470);
  uVar6 = uVar4;
  do {
    iVar5 = (int)uVar6;
    if (*(longlong *)(lVar2 + uVar4 * 8) == param_2) {
      iVar1 = *(int *)(param_1 + 0x478);
      iVar3 = (iVar1 - iVar5) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar2 + (longlong)iVar5 * 8),(void *)(lVar2 + (longlong)(iVar5 + 1) * 8)
                   ,(longlong)iVar3 << 3);
        iVar1 = *(int *)(param_1 + 0x478);
      }
      *(int *)(param_1 + 0x478) = iVar1 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x470));
      return;
    }
    uVar6 = (ulonglong)(iVar5 + 1);
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x478));
  return;
}



// FUNCTION 14248be50 FUN_14248be50 body=298 status=ok
// SIG undefined FUN_14248be50(void)

void FUN_14248be50(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  iVar10 = 0;
  do {
    if (((iVar10 == param_2) || (param_2 == 2)) &&
       (*(longlong *)(*param_1 + (longlong)param_2 * 8) != 0)) {
      FUN_14248ac80();
      *(undefined8 *)(*param_1 + (longlong)param_2 * 8) = 0;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))))) {
    plVar9 = (longlong *)FUN_142477db0(local_38,0,0xff);
    local_48 = SUB84(param_1,0);
    uStack_44 = (undefined4)((ulonglong)param_1 >> 0x20);
    lVar2 = *plVar9;
    *(undefined4 *)(lVar2 + 0x10) = local_48;
    *(undefined4 *)(lVar2 + 0x14) = uStack_44;
    *(int *)(lVar2 + 0x18) = param_2;
    *(undefined4 *)(lVar2 + 0x1c) = uStack_3c;
    lVar2 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar2 + 0x28);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar2,lVar3,(int)lVar5,1);
    if (lVar4 == 0) {
      return;
    }
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 != 1) {
      return;
    }
    FGraphEvent::Recycle(lVar4);
    return;
  }
  uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14247de90(param_1,uVar8,param_2);
  return;
}



// FUNCTION 14248bf80 FUN_14248bf80 body=251 status=ok
// SIG undefined FUN_14248bf80(void)

void FUN_14248bf80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_18;
  longlong local_10;
  
  plVar3 = *(longlong **)(param_1 + 0xd8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          lVar4 = *(longlong *)(param_1 + 0xd0);
          if (lVar4 != 0) {
            local_18 = *param_2;
            local_10 = param_2[1];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            FUN_1418560f0(lVar4,&local_18);
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
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 14248c080 FUN_14248c080 body=252 status=ok
// SIG undefined FUN_14248c080(void)

void FUN_14248c080(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_18;
  longlong local_10;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar2 != (longlong *)0x0) {
          plVar3 = *(longlong **)(param_1 + 0xe0);
          if (plVar3 != (longlong *)0x0) {
            local_18 = *param_3;
            local_10 = param_3[1];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2,&local_18);
          }
          LOCK();
          plVar3 = plVar2 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 14248c180 FUN_14248c180 body=685 status=ok
// SIG undefined FUN_14248c180(void)

undefined8 FUN_14248c180(longlong *param_1,short *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_58 = (wchar_t *)0x0;
  local_4c = 0;
  local_50 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_50 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    FGenericPlatformString::Memcpy(local_58,param_2,(longlong)iVar5 * 2);
    if ((local_50 != 0) && (local_50 != 1)) goto LAB_14248c26f;
  }
  if (local_58 != L"BugScreenShot.png") {
    local_50 = 0;
    iVar5 = 0;
    if (local_4c != 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0x12);
      iVar5 = local_50;
    }
    local_50 = iVar5 + 0x12;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
    }
    builtin_wcsncpy(local_58,L"BugScreenShot.png",0x12);
  }
LAB_14248c26f:
  iVar5 = FUN_141592950(&local_58,&DAT_1450ae4d4,1,0,0xffffffff);
  if (iVar5 == -1) {
    puVar1 = (undefined8 *)FUN_141671940(local_28,&local_58,1);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)FPaths::BugItDir(&local_48);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_38,L"%s%s_",puVar7,puVar8);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    local_48 = (longlong *)0x0;
    local_40 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,&DAT_1450b6690,8);
    uVar2 = FUN_1415c3d50();
    FFileHelper::GenerateNextBitmapFilename(local_38,&local_48,&local_58,uVar2);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x16] != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((param_3 != '\0') && (lVar6 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar6,&local_48);
      iVar5 = (int)local_40;
      while ((-1 < iVar5 && (iVar5 < (int)local_48[1]))) {
        lVar6 = FWeakObjectPtr::Get(*local_48 + (longlong)iVar5 * 8);
        if ((lVar6 != 0) && (lVar3 = UWidgetComponent::GetRenderTarget(lVar6), lVar3 != 0)) {
          plVar4 = (longlong *)UWidgetComponent::GetRenderTarget(lVar6);
          (**(code **)(*plVar4 + 0x790))(plVar4);
        }
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
      }
    }
    FScreenshotRequest::RequestScreenshot(&local_58,1,0);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14248c430 FUN_14248c430 body=119 status=ok
// SIG undefined FUN_14248c430(void)

undefined8 FUN_14248c430(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))();
    if (cVar1 != '\0') {
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x348))();
        if (cVar1 != '\0') {
          return 1;
        }
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar2 = FUN_14244f490(*(longlong *)(param_1 + 0x68),0);
        if (lVar2 != 0) {
          plVar3 = (longlong *)FUN_14244f490(*(undefined8 *)(param_1 + 0x68),0);
                    /* WARNING: Could not recover jumptable at 0x00014248c498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar3 + 0xe28))(plVar3);
          return uVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14248c4b0 FUN_14248c4b0 body=32 status=ok
// SIG undefined FUN_14248c4b0(void)

void FUN_14248c4b0(undefined4 *param_1)

{
  FUN_1406c5d90(param_1 + 2,0);
  *param_1 = 0;
  return;
}



// FUNCTION 14248c4d0 FUN_14248c4d0 body=686 status=ok
// SIG undefined FUN_14248c4d0(void)

void FUN_14248c4d0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_94;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar5 = *(longlong **)(DAT_1469eaf48 + 0x10);
  plVar6 = *(longlong **)(DAT_1469eaf48 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x158);
    uVar4 = *(uint *)(param_1 + 0x180);
    puVar1 = (uint *)(param_1 + 0x168);
    uStack_c4 = 1;
    local_c8 = 0;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar4 != 0) {
      puVar12 = *(uint **)(param_1 + 0x178);
      if (*(uint **)(param_1 + 0x178) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = *puVar12;
      iStack_b0 = 0;
      local_c8 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar8 = local_c8 + 1;
        bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar8;
        if (bVar7) goto LAB_14248c5e0;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_c4 = -uVar11 & uVar11;
      iVar8 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_b4 = (iStack_b0 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_b4) {
LAB_14248c5e0:
        uStack_b4 = uVar4;
      }
    }
    uStack_94 = *(uint *)(param_1 + 0x180);
    uStack_58 = CONCAT44(uStack_c4,local_c8);
    uStack_70 = CONCAT44(uStack_b4,0xffffffff);
    local_68 = CONCAT44(uStack_ac,iStack_b0);
    uVar11 = uStack_94 & 0xffffffe0;
    iStack_80 = local_c8;
    uStack_7c = uStack_c4;
    local_78 = puVar1;
    local_60 = plVar3;
    puStack_50 = puVar1;
    uStack_48 = uStack_70;
    uStack_40 = local_68;
    if (uStack_94 != uVar4) {
      puVar12 = *(uint **)(param_1 + 0x178);
      if (*(uint **)(param_1 + 0x178) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uStack_94 >> 5] & -1 << ((byte)uStack_94 & 0x1f);
      iVar8 = (int)uStack_94 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_14248c6be;
        uVar9 = puVar12[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (uVar11 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_94) {
LAB_14248c6be:
        uStack_94 = uVar4;
      }
    }
    while( true ) {
      if ((uStack_70._4_4_ == uStack_94) && (local_78 == puVar1)) break;
      (**(code **)(*plVar6 + 0x38))
                (plVar6,*(undefined4 *)((longlong)(int)uStack_70._4_4_ * 0x20 + *plVar3),0);
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 14248c780 FUN_14248c780 body=782 status=ok
// SIG undefined FUN_14248c780(void)

void FUN_14248c780(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  uint uStackX_14;
  undefined1 local_68 [40];
  longlong local_40;
  longlong local_30;
  
  plVar11 = (longlong *)0x0;
  if ((DAT_146b17150 == 0) || (lVar4 = *(longlong *)(DAT_146b17150 + 0x7b0), lVar4 == 0)) {
    plVar10 = (longlong *)((ulonglong)uStackX_14 << 0x20);
    plVar8 = plVar11;
  }
  else {
    plVar8 = *(longlong **)(lVar4 + 200);
    plVar10 = plVar8;
    plVar12 = plVar11;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      uVar2 = *(uint *)(plVar8 + 1);
      bVar13 = uVar2 == 0;
      if (bVar13) {
        *(uint *)(plVar8 + 1) = 0;
        plVar7 = plVar11;
      }
      else {
        plVar7 = (longlong *)(ulonglong)uVar2;
      }
      UNLOCK();
      while (plVar10 = plVar11, plVar12 = (longlong *)0x0, !bVar13) {
        iVar6 = (int)plVar7;
        LOCK();
        bVar13 = iVar6 == (int)plVar8[1];
        if (bVar13) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar13) {
          plVar10 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            plVar12 = *(longlong **)(lVar4 + 0xc0);
          }
          break;
        }
        plVar7 = (longlong *)0x0;
        LOCK();
        uVar2 = *(uint *)(plVar8 + 1);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(plVar8 + 1) = 0;
        }
        else {
          plVar7 = (longlong *)(ulonglong)uVar2;
        }
        UNLOCK();
      }
    }
    plVar8 = (longlong *)0x1;
    if (plVar12 != (longlong *)0x0) {
      bVar13 = true;
      goto LAB_14248c80f;
    }
  }
  bVar13 = false;
LAB_14248c80f:
  if ((plVar8 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (bVar13) {
    lVar4 = *(longlong *)(DAT_146b17150 + 0x7b0);
    plVar10 = *(longlong **)(lVar4 + 200);
    plVar8 = plVar10;
    plVar12 = plVar11;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(plVar10 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar11, !bVar13) {
        LOCK();
        bVar13 = iVar6 == (int)plVar10[1];
        if (bVar13) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar13) {
          plVar8 = plVar10;
          plVar12 = (longlong *)0x0;
          if (plVar10 != (longlong *)0x0) {
            plVar12 = *(longlong **)(lVar4 + 0xc0);
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar13 = iVar6 == 0;
        if (bVar13) {
          *(int *)(plVar10 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    uVar5 = (**(code **)(*(longlong *)plVar12[0x93] + 0x68))();
    iVar6 = FUN_142452330(uVar5);
    if (*(int *)(param_1 + 0x98) != iVar6) {
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      else if (iVar6 == 1) {
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x98) = 2;
      }
      FUN_142491fa0(param_1);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    iVar6 = DAT_1465351f4;
    if ((*(int *)(param_1 + 0x80) != DAT_1465351f0) || (*(int *)(param_1 + 0x84) != DAT_1465351f4))
    {
      *(int *)(param_1 + 0x80) = DAT_1465351f0;
      *(int *)(param_1 + 0x84) = iVar6;
      FUN_142491fa0(param_1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af4fd8) &&
       (_Init_thread_header(&DAT_146af4fd8), DAT_146af4fd8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
      if (plVar10 != (longlong *)0x0) {
        plVar11 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10);
      }
      DAT_146af4fd0 = plVar11;
      _Init_thread_footer(&DAT_146af4fd8);
    }
    FUN_14248f680(param_1,(int)*DAT_146af4fd0 != 0);
    uVar3 = *(undefined1 *)(DAT_146b17150 + 0xa51);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0x29) = uVar3;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xc4);
    uVar9 = Scalability::GetQualityLevels(local_68);
    FUN_14246fdf0(param_1 + 0x30,uVar9);
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    FUN_142491fa0(param_1);
  }
  return;
}



// FUNCTION 14248ca90 FUN_14248ca90 body=161 status=ok
// SIG undefined FUN_14248ca90(void)

void FUN_14248ca90(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 800);
  if (param_3 < 0x65) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 800);
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
        *(void **)((longlong)param_1 + 800) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 800) = uVar2;
  return;
}



// FUNCTION 14248cb40 FUN_14248cb40 body=261 status=ok
// SIG undefined FUN_14248cb40(void)

void FUN_14248cb40(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x198);
  if (uVar1 < 0x65) {
    uVar2 = 100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x19c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x19c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 400);
  if (uVar2 < 0x65) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 400);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 400) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 400) = uVar5;
  return;
}



// FUNCTION 14248cc50 FUN_14248cc50 body=141 status=ok
// SIG undefined FUN_14248cc50(void)

void FUN_14248cc50(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x328);
  if (uVar1 < 0x65) {
    iVar2 = 100;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x32c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x32c) = iVar2;
  FUN_14248ca90(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 14248cce0 FUN_14248cce0 body=291 status=ok
// SIG undefined FUN_14248cce0(void)

void FUN_14248cce0(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xfa8);
  if (uVar1 < 0x65) {
    uVar5 = 100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xfac) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x28,0);
    uVar5 = (uint)(uVar2 / 0x28);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xfac) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 4000);
  if (uVar5 < 0x65) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x28);
    pvVar3 = *(void **)((longlong)param_1 + 4000);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x28,0);
        *(void **)((longlong)param_1 + 4000) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x28);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x28;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 4000) = uVar4;
  return;
}



// FUNCTION 14248ce10 ResizeGrow body=262 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FUnversionedPropertySerializer,TInlineAllocator<256,TSizedDefaultAllocator<32>_>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x1008);
  if (uVar1 < 0x101) {
    uVar2 = 0x100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x100c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x100c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x1000);
  if (uVar2 < 0x101) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x1000);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x1000) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x1000) = uVar5;
  return;
}



// FUNCTION 14248cf20 FUN_14248cf20 body=110 status=ok
// SIG undefined FUN_14248cf20(void)

void FUN_14248cf20(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x65) {
      iVar1 = 100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x32c)) {
    *(int *)(param_1 + 0x32c) = iVar1;
    FUN_14248ca90(param_1,*(undefined4 *)(param_1 + 0x328),iVar1,8);
  }
  return;
}



// FUNCTION 14248cf90 FUN_14248cf90 body=103 status=ok
// SIG undefined FUN_14248cf90(void)

void FUN_14248cf90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c8);
    *(int *)(param_1 + 0x3c8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3cc) < iVar1 + 1) {
      FUN_14248cc50(param_1 + 0xa0,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x3c0);
    if (*(longlong *)(param_1 + 0x3c0) == 0) {
      lVar2 = param_1 + 0xa0;
    }
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14248d000 FUN_14248d000 body=432 status=ok
// SIG undefined FUN_14248d000(void)

void FUN_14248d000(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_20,L"Host has left the game.",L"NetworkErrors",L"HostHasLeft");
  uVar5 = FUN_1404b03b0();
  FText::FText(local_38,uVar5);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar5,&local_48);
  for (; (-1 < local_40 && (local_40 < (int)local_48[1])); local_40 = local_40 + 1) {
    plVar6 = (longlong *)FWeakObjectPtr::Get(*local_48 + (longlong)local_40 * 8);
    if (plVar6 != (longlong *)0x0) {
      if ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0) {
        cVar4 = (**(code **)(*plVar6 + 0x768))(plVar6);
        if (cVar4 != '\0') goto LAB_14248d0be;
      }
      cVar4 = APlayerController::IsPrimaryPlayer(plVar6);
      if (cVar4 != '\0') {
        (**(code **)(*plVar6 + 0xb58))(plVar6,local_20);
      }
    }
LAB_14248d0be:
  }
  local_40 = 0;
  do {
    if ((local_40 < 0) || ((int)local_48[1] <= local_40)) goto LAB_14248d137;
    plVar6 = (longlong *)FWeakObjectPtr::Get(*local_48 + (longlong)local_40 * 8);
    if ((plVar6 != (longlong *)0x0) && ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)) {
      cVar4 = (**(code **)(*plVar6 + 0x768))(plVar6);
      if (cVar4 != '\0') {
        cVar4 = APlayerController::IsPrimaryPlayer(plVar6);
        if (cVar4 != '\0') {
          (**(code **)(*plVar6 + 0xb58))(plVar6,local_38);
LAB_14248d137:
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_30 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          if (local_18 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_18 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_18)(local_18);
              LOCK();
              piVar1 = (int *)((longlong)local_18 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
          return;
        }
      }
    }
    local_40 = local_40 + 1;
  } while( true );
}



// FUNCTION 14248d1e0 FUN_14248d1e0 body=333 status=ok
// SIG undefined FUN_14248d1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14248d1e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong local_78 [2];
  undefined1 local_68 [40];
  longlong local_40;
  longlong local_30;
  
  uVar3 = FUN_1427234f0(local_68);
  FUN_14246fdf0(param_1 + 0x30,uVar3);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x54);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x100,param_1 + 0x58);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x110,param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x120) = param_4;
  plVar4 = (longlong *)FUN_14169d9a0(local_78);
  plVar1 = (longlong *)(param_1 + 0x128);
  if (plVar1 != plVar4) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_1 + 0x130) = (int)plVar4[1];
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  uVar2 = _DAT_146ab6af0;
  _Src = DAT_146ab6ae8;
  puVar5 = (undefined8 *)(param_1 + 0x138);
  if ((void **)puVar5 != &DAT_146ab6ae8) {
    iVar6 = (int)_DAT_146ab6af0;
    *(int *)(param_1 + 0x140) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x144) == 0)) {
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,uVar2 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar6 * 2);
    }
  }
  return;
}



// FUNCTION 14248d330 SaveSettings body=68 status=ok
// SIG undefined SaveSettings(void)

void UGameUserSettings::SaveSettings(undefined8 param_1)

{
  undefined2 *puVar1;
  
  Scalability::SaveState(&DAT_1468e2420);
  puVar1 = &DAT_143f3eda8;
  if (DAT_1468e2428 != 0) {
    puVar1 = DAT_1468e2420;
  }
  FUN_141761740(param_1,0x4000,puVar1,DAT_1468b6148);
  return;
}



// FUNCTION 14248d380 FUN_14248d380 body=52 status=ok
// SIG undefined FUN_14248d380(void)

void FUN_14248d380(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    lVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      puVar1 = (uint *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x470)) + 0x484);
      *puVar1 = *puVar1 | 0x20;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x478));
  }
  return;
}



// FUNCTION 14248d3c0 FUN_14248d3c0 body=186 status=ok
// SIG undefined FUN_14248d3c0(void)

undefined1 FUN_14248d3c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14246fee0(param_2,param_1 + 0xa0);
  FUN_1424700a0(param_2,param_1);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x40),0,0);
      *(undefined8 *)(param_1 + 0x40) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1,*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34),0);
  }
  FUN_1424700a0(param_2,param_1 + 0x50);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x90),0,0);
      *(undefined8 *)(param_1 + 0x90) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 0x50,*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84),0);
  }
  return 1;
}



// FUNCTION 14248d480 FUN_14248d480 body=313 status=ok
// SIG undefined FUN_14248d480(void)

void FUN_14248d480(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x630);
    if (0 < (longlong)iVar2) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x628) + lVar6 * 8);
        if (lVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x620);
          *(int *)(param_1 + 0x620) = iVar3 + 1;
          if (*(int *)(param_1 + 0x624) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x618,iVar3);
          }
          uStack_10 = (undefined4)lVar4;
          uStack_c = (undefined4)((ulonglong)lVar4 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x618) + (longlong)iVar3 * 0x10);
          *puVar1 = 0x3f800000;
          puVar1[1] = uStack_14;
          puVar1[2] = uStack_10;
          puVar1[3] = uStack_c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    *(undefined4 *)(param_1 + 0x630) = 0;
    if (*(int *)(param_1 + 0x634) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x628,0);
    }
    uVar5 = *(uint *)(param_1 + 0x48) & 0x10;
    if (uVar5 != 0) {
      uVar5 = uVar5 * 2 | *(uint *)(param_1 + 0x48) & 0xffffffdf;
      uVar5 = (uVar5 * 4 ^ uVar5) & 0x40 ^ uVar5;
      *(uint *)(param_1 + 0x48) = (uVar5 * 8 ^ uVar5) & 0x80 ^ uVar5;
    }
    if (-1.0 < *(float *)(param_1 + 0x304)) {
      *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x308);
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x30c);
      *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x304);
    }
  }
  return;
}



// FUNCTION 14248d5c0 FUN_14248d5c0 body=247 status=ok
// SIG undefined FUN_14248d5c0(void)

void FUN_14248d5c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146532750);
  iVar1 = FArchive::CustomVer(param_2,&DAT_146532750);
  if ((iVar1 < 1) && (*DAT_146af4c08 == 1)) {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x124);
    *(float *)(param_1 + 0xf0) = (float)*(int *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(float *)(param_1 + 0xf4) = (float)*(int *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}



// FUNCTION 14248d6c0 FUN_14248d6c0 body=141 status=ok
// SIG undefined FUN_14248d6c0(void)

undefined8 FUN_14248d6c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 4) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  puVar2 = *(undefined4 **)param_3[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
    *puVar1 = *puVar2;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    return 1;
  }
  (**(code **)(*param_3 + 0x50))(param_3,puVar1,4);
  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_3,puVar1,4);
  }
  return 1;
}



// FUNCTION 14248d750 FUN_14248d750 body=390 status=ok
// SIG undefined FUN_14248d750(void)

undefined8 FUN_14248d750(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong local_res10 [3];
  
  lVar2 = *param_2;
  local_res10[0] = 2;
  if (lVar2 == 2) {
    puVar3 = *(undefined4 **)param_3[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
      *(undefined4 *)(param_1 + 8) = *puVar3;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,param_1 + 8,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,param_1 + 8,4);
      return 1;
    }
  }
  else {
    local_res10[0] = 1;
    if (lVar2 == 1) {
      plVar4 = (longlong *)param_3[1];
      if ((byte *)*plVar4 + 1 <= (byte *)plVar4[1]) {
        bVar1 = *(byte *)*plVar4;
        *plVar4 = *plVar4 + 1;
        *(uint *)(param_1 + 8) = (uint)bVar1;
        return 1;
      }
      (**(code **)(*param_3 + 0x50))(param_3,local_res10,1);
      *(uint *)(param_1 + 8) = (uint)(byte)local_res10[0];
      return 1;
    }
    local_res10[0] = 4;
    if (lVar2 != 4) {
      return 0;
    }
    plVar4 = (longlong *)param_3[1];
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,local_res10,4);
      }
    }
    else {
      local_res10[0] = (ulonglong)*(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    *(int *)(param_1 + 8) = (int)ROUND((float)local_res10[0] * 2.0 - 0.5) >> 1;
  }
  return 1;
}



// FUNCTION 14248d8e0 SetAudioQualityLevel body=22 status=ok
// SIG undefined SetAudioQualityLevel(void)

void UGameUserSettings::SetAudioQualityLevel(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xa8) != param_2) {
    *(int *)(param_1 + 0xa8) = param_2;
    FUN_142810e20(param_2);
    return;
  }
  return;
}



// FUNCTION 14248d910 FUN_14248d910 body=1087 status=ok
// SIG undefined FUN_14248d910(void)

void FUN_14248d910(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  LARGE_INTEGER local_res8;
  ulonglong uVar9;
  
  if (*(uint *)(param_1 + 0x34) < DAT_1464aaa94) {
    uVar9 = (ulonglong)_tls_index;
    *(uint *)(param_1 + 0x34) = DAT_1464aaa94;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
    if ((*(int *)(lVar2 + 0x38) < DAT_146af5078) &&
       (_Init_thread_header(&DAT_146af5078), DAT_146af5078 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af5070 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.CubeMapResolution");
      _Init_thread_footer(&DAT_146af5078);
    }
    if (DAT_146af5070 == (longlong *)0x0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = (**(code **)(*DAT_146af5070 + 0x68))();
    }
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    if ((*(int *)(lVar2 + 0x38) < DAT_146af5088) &&
       (_Init_thread_header(&DAT_146af5088), DAT_146af5088 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af5080 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.UpdateDistribution");
      _Init_thread_footer(&DAT_146af5088);
    }
    if (DAT_146af5080 == (longlong *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*DAT_146af5080 + 0x68))();
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    if ((*(int *)(lVar2 + 0x38) < DAT_146af5098) &&
       (_Init_thread_header(&DAT_146af5098), DAT_146af5098 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af5090 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.ZKillThresholdOverride");
      _Init_thread_footer(&DAT_146af5098);
    }
    if (DAT_146af5090 == (longlong *)0x0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = (float)(**(code **)(*DAT_146af5090 + 0x70))();
    }
    if (ABS(fVar12) <= 1e-08) {
      fVar12 = *(float *)(param_1 + 0x200);
    }
    iVar5 = *(int *)(param_1 + 0x9c);
    uVar9 = 0;
    iVar6 = 0;
    *(float *)(param_1 + 0x200) = fVar12;
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      if ((*(int *)(param_1 + 0xa0) != iVar5) || (*(int *)(param_1 + 0xb0) == 0)) {
        plVar1 = (longlong *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xa0) = iVar5;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        iVar8 = iVar6;
        if (*(int *)(param_1 + 0xb4) != iVar5) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
          iVar8 = *(int *)(param_1 + 0xb0);
        }
        iVar5 = *(int *)(param_1 + 0x9c);
        iVar4 = iVar8 + iVar5;
        *(int *)(param_1 + 0xb0) = iVar4;
        if (*(int *)(param_1 + 0xb4) < iVar4) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar8 * 4),0,(longlong)iVar5 << 2);
        uVar10 = uVar9;
        if (0 < *(int *)(param_1 + 0x9c)) {
          do {
            *(int *)(uVar10 + *plVar1) = (int)uVar9;
            uVar7 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar7;
            uVar10 = uVar10 + 4;
          } while ((int)uVar7 < *(int *)(param_1 + 0x9c));
        }
      }
      if (*(int *)(param_1 + 0xb0) == 1) {
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1 + 0xa8) + -4 + (longlong)*(int *)(param_1 + 0xb0) * 4);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        *(undefined4 *)(param_1 + 0xa4) = uVar3;
      }
      else {
        if ((*(int *)(lVar2 + 0x38) < DAT_146af50a8) &&
           (_Init_thread_header(&DAT_146af50a8), DAT_146af50a8 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_146af50a0 =
               (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"GbxSky.RandomUpdateDistribution");
          _Init_thread_footer(&DAT_146af50a8);
        }
        if (DAT_146af50a0 == (longlong *)0x0) {
          bVar11 = false;
        }
        else {
          iVar5 = (**(code **)(*DAT_146af50a0 + 0x68))();
          bVar11 = iVar5 == 1;
        }
        if (bVar11) {
          uVar3 = FUN_1415aad80();
          QueryPerformanceCounter(&local_res8);
          FUN_1415b61a0(local_res8.s.LowPart);
          iVar5 = *(int *)(param_1 + 0xb0);
          iVar6 = 0;
          if (0 < iVar5) {
            iVar6 = rand();
            iVar8 = (int)((float)iVar6 * 3.051851e-05 * (float)iVar5);
            iVar6 = iVar5 + -1;
            if (iVar8 <= iVar5 + -1) {
              iVar6 = iVar8;
            }
          }
          FUN_1415b61a0(uVar3);
        }
        lVar2 = *(longlong *)(param_1 + 0xa8);
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar2 + (longlong)iVar6 * 4);
        iVar5 = *(int *)(param_1 + 0xb0);
        iVar8 = (iVar5 - iVar6) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar6 * 4),
                     (void *)(lVar2 + (longlong)(iVar6 + 1) * 4),(longlong)iVar8 << 2);
          iVar5 = *(int *)(param_1 + 0xb0);
        }
        *(int *)(param_1 + 0xb0) = iVar5 + -1;
      }
    }
  }
  return;
}



// FUNCTION 14248dd50 FUN_14248dd50 body=463 status=ok
// SIG undefined FUN_14248dd50(void)

void FUN_14248dd50(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_28;
  ulonglong local_20;
  int local_18;
  
  if (((param_2 == 0) && ((char)param_1[0x8d] != '\0')) &&
     (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) {
    local_18 = -1;
    local_28 = param_2;
    local_20 = param_2;
    uVar4 = UAtmosphericFogComponent::GetPrivateStaticClass();
    FUN_1417a5560(uVar4,&local_28,1,0x10,0);
    uVar6 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      uVar8 = local_28;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
    do {
      if ((local_18 < 0) || ((int)uVar6 <= local_18)) goto LAB_14248ded0;
      uVar1 = *(ulonglong *)(uVar8 + (longlong)local_18 * 8);
      uVar7 = param_2;
      if (uVar1 != 0) {
        cVar2 = UObjectBaseUtility::IsTemplate(uVar1,0x30);
        if ((cVar2 == '\0') &&
           ((*(longlong *)(uVar1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(uVar1), lVar5 != 0)))) {
          lVar5 = *(longlong *)(uVar1 + 0x120);
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(uVar1);
          }
          if (((lVar5 == lVar3) && ((*(byte *)(uVar1 + 0x2ec) & 1) != 0)) &&
             ((*(byte *)(uVar1 + 0x24c) & 0x20) != 0)) {
            uVar6 = local_20 & 0xffffffff;
            uVar7 = uVar1;
            uVar8 = local_28;
            if ((param_2 != 0) &&
               (uVar7 = param_2, *(float *)(param_2 + 0x2e4) < *(float *)(uVar1 + 0x2e4))) {
              uVar7 = uVar1;
            }
            goto LAB_14248de9e;
          }
        }
        uVar6 = local_20 & 0xffffffff;
        uVar8 = local_28;
      }
LAB_14248de9e:
      do {
        local_18 = local_18 + 1;
        param_2 = uVar7;
        if ((int)uVar6 <= local_18) break;
      } while (*(longlong *)(uVar8 + (longlong)local_18 * 8) == 0);
    } while( true );
  }
LAB_14248dee7:
  lVar3 = param_1[0x8c];
  if (((param_1[0x8b] != 0) && (param_1[0x8c] = param_2, lVar3 == 0)) &&
     ((*(byte *)(param_1[0x8b] + 0xb8) & 1) != 0)) {
    FUN_14234cb00();
  }
  return;
LAB_14248ded0:
  if (uVar8 != 0) {
    FMemory::Free(uVar8);
  }
  goto LAB_14248dee7;
}



// FUNCTION 14248df20 FUN_14248df20 body=23 status=ok
// SIG undefined FUN_14248df20(void)

void FUN_14248df20(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x304) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014248df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))();
  return;
}



// FUNCTION 14248df40 FUN_14248df40 body=330 status=ok
// SIG undefined FUN_14248df40(void)

void FUN_14248df40(longlong *param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_146b17150 != 0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    fVar6 = 0.0;
    if (0.0 < param_2) {
      fVar6 = 1.0 / param_2;
    }
    if (((DAT_1468b5a25 == '\0') && (DAT_1468b5a26 == '\0')) &&
       ((*(byte *)(DAT_146b17150 + 0x7e0) & 0x40) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    fVar4 = *(float *)(DAT_146b17150 + 0x900);
    if (1.0 <= fVar4) {
      if (100.0 <= fVar4) {
        fVar4 = 100.0;
      }
    }
    else {
      fVar4 = 1.0;
    }
    if ((fVar4 <= fVar6) || (uVar3 = 1, bVar1)) {
      uVar3 = 0;
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    *(uint *)(lVar2 + 0x830) = *(uint *)(lVar2 + 0x830) & 0xfffffffe;
    *(uint *)(lVar2 + 0x830) = *(uint *)(lVar2 + 0x830) | uVar3;
    fVar5 = *(float *)(DAT_146b17150 + 0x900) - 5.0;
    fVar4 = 1.0;
    if ((1.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
      fVar4 = 100.0;
    }
    uVar3 = 0;
    if ((fVar6 < fVar4) && (uVar3 = 0, !bVar1)) {
      uVar3 = 2;
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    *(uint *)(lVar2 + 0x830) = *(uint *)(lVar2 + 0x830) & 0xfffffffd;
    *(uint *)(lVar2 + 0x830) = *(uint *)(lVar2 + 0x830) | uVar3;
  }
  return;
}



// FUNCTION 14248e090 SetDynamicResolutionEnabled body=4 status=ok
// SIG undefined SetDynamicResolutionEnabled(void)

void UGameUserSettings::SetDynamicResolutionEnabled(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x29) = param_2;
  return;
}



// FUNCTION 14248e0a0 SetEnabledStats body=273 status=ok
// SIG undefined SetEnabledStats(void)

void UGameViewportClient::SetEnabledStats(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  cVar2 = FUN_1415bac00();
  if ((cVar2 != '\0') &&
     (plVar3 = DAT_146af4b28, iVar4 = DAT_146af4b30, (longlong **)param_2 != &DAT_146af4b28)) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    iVar4 = *(int *)(param_2 + 1);
    param_2 = (undefined8 *)*param_2;
    DAT_146af4b30 = iVar4;
    if ((iVar4 == 0) && (DAT_146af4b34 == 0)) {
      DAT_146af4b34 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&DAT_146af4b28,iVar4);
      plVar3 = DAT_146af4b28;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *plVar3 = 0;
        iVar1 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(plVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar3,iVar1,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar1 * 2);
        }
        plVar3 = plVar3 + 2;
        param_2 = param_2 + 2;
      }
    }
  }
  return;
}



// FUNCTION 14248e1c0 SetFoliageQuality body=26 status=ok
// SIG undefined SetFoliageQuality(void)

void UGameUserSettings::SetFoliageQuality(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return;
  }
  iVar1 = 3;
  if (param_2 < 3) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}



// FUNCTION 14248e1e0 SetFrameRateLimit body=9 status=ok
// SIG undefined SetFrameRateLimit(void)

void UGameUserSettings::SetFrameRateLimit(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}



// FUNCTION 14248e1f0 FUN_14248e1f0 body=748 status=ok
// SIG undefined FUN_14248e1f0(void)

void FUN_14248e1f0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float *pfVar8;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [32];
  
  *(float *)(param_1 + 0xf4) = *(float *)(param_2 + 0x28) * 100000.0;
  *(float *)(param_1 + 0xf8) = *(float *)(param_2 + 0x2c) * 100000.0;
  *(float *)(param_1 + 0xfc) = *(float *)(param_2 + 0x30) * 100000.0;
  *(float *)(param_1 + 0x100) = *(float *)(param_2 + 0x34) * 100000.0;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x38);
  *(float *)(param_1 + 0x108) = *(float *)(param_2 + 0x3c) * 100000.0;
  *(float *)(param_1 + 0x10c) = *(float *)(param_2 + 0x40) * 100000.0;
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x78);
  *(float *)(param_1 + 0x14c) = *(float *)(param_2 + 0x7c) * 100000.0;
  *(float *)(param_1 + 0x150) = *(float *)(param_2 + 0x80) * 100000.0;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x8c);
  *(float *)(param_1 + 0x160) = *(float *)(param_2 + 0x90) * 100000.0;
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x94);
  *(float *)(param_1 + 0x168) = *(float *)(param_2 + 0x98) * 100000.0;
  uVar7 = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)(param_1 + 0x174) = uVar7;
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0xc4);
  uVar7 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0x188) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x198) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar7;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0xe8);
  local_38 = *(float *)(param_2 + 0xec);
  if (local_38 <= 0.0) {
    local_38 = 0.0;
  }
  local_34 = local_38;
  local_30 = local_38;
  pfVar8 = (float *)FLinearColor::FLinearColor(local_28,&local_38);
  fVar1 = pfVar8[1];
  fVar2 = *(float *)(param_2 + 0xdc);
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[3];
  fVar5 = *(float *)(param_2 + 0xe0);
  fVar6 = *(float *)(param_2 + 0xe4);
  *(float *)(param_1 + 0x1b0) = *pfVar8 / *(float *)(param_2 + 0xd8);
  *(float *)(param_1 + 0x1b4) = fVar1 / fVar2;
  *(float *)(param_1 + 0x1b8) = fVar3 / fVar5;
  *(float *)(param_1 + 0x1bc) = fVar4 / fVar6;
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x108);
  *(float *)(param_1 + 0x204) = *(float *)(param_2 + 0x104) * 100000.0;
  uVar7 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x218) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x228) = uVar7;
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x144);
  return;
}



// FUNCTION 14248e4e0 SetFullscreenMode body=63 status=ok
// SIG undefined SetFullscreenMode(void)

void UGameUserSettings::SetFullscreenMode(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) == param_2) {
    return;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_142491fa0();
      return;
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    FUN_142491fa0();
    return;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_142491fa0();
  return;
}



// FUNCTION 14248e520 FUN_14248e520 body=962 status=ok
// SIG undefined FUN_14248e520(void)

undefined8 FUN_14248e520(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong **local_88;
  undefined4 *local_80;
  longlong **local_78;
  longlong local_70 [2];
  longlong local_60 [5];
  
  plVar9 = (longlong *)0x0;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar5 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar5 = param_1 + 0x140;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x150) - 1U) * 4);
    if (iVar2 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x108);
      do {
        lVar8 = (longlong)iVar2 * 0x20;
        if (*(longlong *)(lVar8 + lVar5) == param_3) {
          if ((iVar2 != -1) && (lVar5 = (longlong)iVar2 * 0x20 + lVar5, lVar5 != 0)) {
            local_d8 = *(longlong **)(lVar5 + 8);
            local_d0 = *(longlong **)(lVar5 + 0x10);
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
              UNLOCK();
            }
            if (local_d8 != (longlong *)0x0) goto LAB_14248e7e3;
            local_d8 = (longlong *)0x0;
            goto LAB_14248e5c1;
          }
          break;
        }
        iVar2 = *(int *)(lVar8 + 0x18 + lVar5);
      } while (iVar2 != -1);
    }
  }
  local_d0 = (longlong *)0x0;
LAB_14248e5c1:
  puVar3 = (undefined8 *)FName::ToString(local_res18,local_60);
  plVar4 = (longlong *)FPaths::ProjectContentDir(local_70);
  iVar2 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar2 = 0;
  }
  if (((int)plVar4[1] != 0) || (iVar7 = 2, iVar2 == -1)) {
    iVar7 = 1;
  }
  local_c8 = *plVar4;
  *plVar4 = 0;
  local_c0 = (int)plVar4[1];
  local_bc = *(int *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if (local_bc < local_c0 + iVar2 + iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
  }
  FString::PathAppend(&local_c8,*puVar3,iVar2);
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_1450bcc88;
    FHardwareCursor::FHardwareCursor(plVar4 + 2,&local_c8,param_4);
    plVar9 = plVar4;
  }
  local_a8 = plVar9 + 2;
  plStack_a0 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
  plStack_b0 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  local_d8 = local_a8;
  local_b8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&plStack_b0);
  plVar9 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_b0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_a0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  lVar5 = FHardwareCursor::GetHandle(local_d8);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    local_90 = local_res18;
    local_88 = &local_d8;
    FUN_1416871a0((longlong *)(param_1 + 0x108),local_res8,&local_90,0);
LAB_14248e7e3:
    local_80 = local_res10;
    local_78 = &local_d8;
    FUN_142466d80(param_1 + 0x158,local_98,&local_80,0);
    if (*(char *)(param_1 + 0x315) != '\0') {
      plVar9 = *(longlong **)(DAT_1469eaf48 + 0x10);
      plVar4 = *(longlong **)(DAT_1469eaf48 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *plVar4;
        uVar6 = FHardwareCursor::GetHandle(local_d8);
        (**(code **)(lVar5 + 0x38))(plVar4,local_res10[0],uVar6);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    uVar6 = 1;
  }
  plVar9 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14248e8f0 FUN_14248e8f0 body=188 status=ok
// SIG undefined FUN_14248e8f0(void)

void FUN_14248e8f0(longlong param_1,int param_2,int param_3,longlong param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_4 + 0x78);
  if (*(longlong *)(param_4 + 0x78) == 0) {
    lVar6 = param_4;
  }
  lVar5 = *(longlong *)(**(longlong **)(param_1 + 0x3b0) + (longlong)param_2 * 8);
  lVar2 = *(longlong *)(lVar5 + 0x478);
  *(uint *)(param_4 + 0x8c) = *(uint *)(param_4 + 0x8c) & 0xfffc0fff;
  lVar4 = 0x270;
  if (param_5 == '\0') {
    lVar4 = 0x208;
  }
  *(longlong *)(lVar6 + 0x10) = lVar4 + lVar5;
  iVar1 = *(int *)(lVar6 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + (longlong)param_3 * 0x18 + 4);
  *(int *)(lVar6 + 0x38) = iVar1 + 1;
  if (*(int *)(lVar6 + 0x3c) < iVar1 + 1) {
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(lVar6 + 0x28,iVar1);
  }
  lVar5 = *(longlong *)(lVar6 + 0x30);
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    lVar5 = lVar6 + 0x28;
  }
  *(undefined8 *)(lVar5 + (longlong)iVar1 * 8) = uVar3;
  return;
}



// FUNCTION 14248e9b0 FUN_14248e9b0 body=227 status=ok
// SIG undefined FUN_14248e9b0(void)

void FUN_14248e9b0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if ((*(byte *)(lVar2 + 0x38) & 4) != 0) {
    FSlateApplication::SetGameIsFakingTouchEvents(DAT_1469f4590,param_2 ^ 1,0);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  if ((*(uint *)(param_1 + -0x20) >> 4 & 1) == 0) {
    uVar4 = *(ulonglong *)(param_1 + -8);
  }
  puVar3 = (ulonglong *)FUN_142874a50(uVar4,param_1 + -0x28);
  plVar1 = (longlong *)*puVar3;
  uVar4 = (longlong)(int)puVar3[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)puVar3[1] < plVar1) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      if (*(longlong **)(*plVar1 + 0x30) != (longlong *)0x0) {
        lVar2 = **(longlong **)(*plVar1 + 0x30);
        if (param_2 == 0) {
          (**(code **)(lVar2 + 0xda8))();
        }
        else {
          (**(code **)(lVar2 + 0xdb0))();
        }
      }
      plVar1 = plVar1 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 14248eaa0 FUN_14248eaa0 body=34 status=ok
// SIG undefined FUN_14248eaa0(void)

void FUN_14248eaa0(longlong *param_1,longlong param_2)

{
  if ((char)param_1[0x25] == '\x03') {
    param_1[0xa4] = param_2;
    (**(code **)(*param_1 + 0x7a8))();
  }
  return;
}



// FUNCTION 14248eae0 SetDirectionPropertyName body=8 status=ok
// SIG undefined SetDirectionPropertyName(void)

void UTimelineComponent::SetDirectionPropertyName(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}



// FUNCTION 14248eaf0 FUN_14248eaf0 body=898 status=ok
// SIG undefined FUN_14248eaf0(void)

void FUN_14248eaf0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong local_108;
  undefined8 uStack_100;
  void *local_f8;
  int local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
    lVar9 = *param_2;
  }
  else {
    FString::operator=(param_1 + 0xd0);
    puVar5 = (undefined8 *)FUN_14247fbb0(&local_108);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    if (*(int *)(param_1 + 0xd8) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0xd0);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    *(bool *)(param_1 + 0xf0) = iVar3 == 0;
    if (local_108 != 0) {
      FMemory::Free();
    }
    iVar3 = 0;
    local_80 = 0;
    local_78 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FDisplayMetrics::RebuildDisplayMetrics(local_88);
    iVar11 = 0;
    if (0 < (int)local_78) {
      do {
        puVar5 = (undefined8 *)FUN_142480c60(&local_108,iVar3);
        if (*(int *)(param_1 + 0xd8) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(param_1 + 0xd0);
        }
        if (*(int *)(puVar5 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar5;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (iVar4 == 0) {
          lVar9 = (longlong)iVar3 * 0x70 + local_80;
          FString::FString(&local_f8,lVar9);
          FString::FString(local_e8,lVar9 + 0x10);
          FString::FString(local_d8,lVar9 + 0x20);
          local_c8 = *(undefined4 *)(lVar9 + 0x30);
          local_c0 = *(undefined8 *)(lVar9 + 0x38);
          uStack_b8 = *(undefined8 *)(lVar9 + 0x40);
          local_c4 = *(undefined4 *)(lVar9 + 0x34);
          local_b0 = *(ulonglong *)(lVar9 + 0x48);
          uStack_a8 = *(undefined8 *)(lVar9 + 0x50);
          local_a0 = *(undefined1 *)(lVar9 + 0x58);
          FString::FString(local_98,lVar9 + 0x60);
          ppvVar2 = (void **)(param_1 + 0xe0);
          if (ppvVar2 != &local_f8) {
            *(int *)(param_1 + 0xe8) = local_f0;
            if ((local_f0 == 0) && (*(int *)(param_1 + 0xec) == 0)) {
              *(undefined4 *)(param_1 + 0xec) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_f0);
              _guard_xfg_dispatch_icall_nop(*ppvVar2,local_f8,(longlong)local_f0 * 2);
            }
          }
          local_108 = local_b0;
          uStack_100 = uStack_a8;
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          if (local_f8 != (void *)0x0) {
            FMemory::Free(local_f8);
          }
          goto LAB_14248ec5e;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_78);
    }
    puVar1 = (ulonglong *)(param_1 + 0xe0);
    if (puVar1 != &local_108) {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    local_108 = local_70;
    uStack_100 = uStack_68;
LAB_14248ec5e:
    iVar3 = *(int *)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0x84);
    if ((*(int *)(param_1 + 0x98) != 0) && (iVar11 = 2, *(int *)(param_1 + 0x98) == 1)) {
      iVar11 = 1;
    }
    iVar10 = (int)local_108;
    *(int *)(param_1 + 0x90) = iVar10;
    iVar8 = (int)(local_108 >> 0x20);
    *(int *)(param_1 + 0x94) = iVar8;
    FUN_14248ee80(local_108 & 0xffffffff,local_108 >> 0x20);
    if (iVar11 == 2) {
      fVar12 = (float)(((int)uStack_100 - iVar3) - iVar10) * 0.5;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      *(int *)(param_1 + 0x90) = (int)(fVar12 + (float)*(int *)(param_1 + 0x90));
      fVar12 = (float)((uStack_100._4_4_ - iVar4) - iVar8) * 0.5;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      *(int *)(param_1 + 0x94) = (int)(fVar12 + (float)*(int *)(param_1 + 0x94));
    }
    FUN_141189610(&local_80);
    lVar9 = *param_2;
  }
  if (lVar9 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14248ee80 FUN_14248ee80 body=151 status=ok
// SIG undefined FUN_14248ee80(void)

void FUN_14248ee80(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.X");
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar2 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.Y");
  IConsoleVariable::SetWithCurrentPriority(uVar1,param_1);
  IConsoleVariable::SetWithCurrentPriority(uVar2,param_2);
  return;
}



// FUNCTION 14248ef20 FUN_14248ef20 body=7 status=ok
// SIG undefined FUN_14248ef20(void)

void FUN_14248ef20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x160) = param_2;
  return;
}



// FUNCTION 14248ef30 FUN_14248ef30 body=157 status=ok
// SIG undefined FUN_14248ef30(void)

void FUN_14248ef30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    if (*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x5c)) {
      lVar2 = *(longlong *)(param_2 + 0x68);
      if (*(longlong *)(param_2 + 0x68) == 0) {
        lVar2 = param_2 + 0x60;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_2 + 0x70) - 1U & uVar4 & 0xff) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x28) + (longlong)iVar1 * 0x18;
          if (*(char *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar1 * 0x18) == (char)uVar4) {
            if (iVar1 != -1) goto LAB_14248efa2;
            break;
          }
          iVar1 = *(int *)(lVar2 + 0x10);
        } while (iVar1 != -1);
      }
    }
    lVar2 = 0;
LAB_14248efa2:
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x310))
              (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar2 + 8),uVar4);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    if (1 < (int)uVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 14248efd0 FUN_14248efd0 body=36 status=ok
// SIG undefined FUN_14248efd0(void)

void FUN_14248efd0(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xb0);
  FUN_14248f010(fVar1,(100.0 - fVar1) * param_2 + fVar1);
  return;
}



// FUNCTION 14248f000 FUN_14248f000 body=12 status=ok
// SIG undefined FUN_14248f000(void)

void FUN_14248f000(void)

{
  FUN_14248f010();
  return;
}



// FUNCTION 14248f010 FUN_14248f010 body=179 status=ok
// SIG undefined FUN_14248f010(void)

void FUN_14248f010(longlong param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  fVar5 = *(float *)(param_1 + 0xb0);
  if ((*(float *)(param_1 + 0xb0) <= param_2) && (fVar5 = param_2, 100.0 <= param_2)) {
    fVar5 = 100.0;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(float *)(param_1 + 0x30) = fVar5;
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_14247fd10(param_1,local_res8);
    iVar4 = *piVar2;
    iVar1 = *(int *)(param_1 + 0x98);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x80);
  }
  if (iVar1 == 1) {
    lVar3 = FUN_14247fd10(param_1,local_res8);
    iVar1 = *(int *)(lVar3 + 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  *(int *)(param_1 + 0xb4) = (int)((float)iVar4 * *(float *)(param_1 + 0x30) * 0.01);
  *(int *)(param_1 + 0xbc) = (int)((float)iVar1 * *(float *)(param_1 + 0x30) * 0.01);
  return;
}



// FUNCTION 14248f0d0 SetScreenResolution body=45 status=ok
// SIG undefined SetScreenResolution(void)

void UGameUserSettings::SetScreenResolution(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)((ulonglong)param_2 >> 0x20);
  if ((*(int *)(param_1 + 0x80) == (int)param_2) && (*(int *)(param_1 + 0x84) == iVar1)) {
    return;
  }
  *(int *)(param_1 + 0x80) = (int)param_2;
  *(int *)(param_1 + 0x84) = iVar1;
  FUN_142491fa0();
  return;
}



// FUNCTION 14248f100 SetShadowQuality body=4 status=ok
// SIG undefined SetShadowQuality(void)

void UGameUserSettings::SetShadowQuality(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// FUNCTION 14248f110 SetStatEnabled body=577 status=ok
// SIG undefined SetStatEnabled(void)

int UGameViewportClient::SetStatEnabled(undefined8 param_1,short *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 **local_38;
  undefined2 *local_30;
  undefined8 local_28;
  
  if (param_3 == '\0') {
    iVar2 = DAT_146af4b30;
    plVar8 = DAT_146af4b28;
    if (param_4 != '\0') {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      DAT_146af4b30 = 0;
      if (DAT_146af4b34 == 0) {
        return 0;
      }
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146af4b28,0);
      return DAT_146af4b30;
    }
    local_30 = (undefined2 *)0x0;
    local_28 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_28 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30,0);
      }
      FGenericPlatformString::Memcpy(local_30,param_2,(longlong)(int)uVar6 * 2);
    }
    local_38 = &local_30;
    TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
              (&DAT_146af4b28,&local_38);
    if (local_30 != (undefined2 *)0x0) {
      FMemory::Free();
      return DAT_146af4b30;
    }
  }
  else {
    puVar11 = (undefined2 *)0x0;
    uVar10 = 0;
    local_30 = (undefined2 *)0x0;
    local_28 = (ulonglong)(uint)local_28;
    uVar6 = uVar10;
    if ((param_2 != (short *)0x0) && (uVar6 = 0, *param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar5 = (int)lVar7 + 1;
      local_28 = (ulonglong)uVar5;
      uVar10 = uVar5;
      uVar6 = 0;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30,0);
        uVar10 = (uint)local_28;
        uVar6 = local_28._4_4_;
      }
      puVar11 = local_30;
      FGenericPlatformString::Memcpy(local_30,param_2,(longlong)(int)uVar5 * 2);
    }
    plVar1 = DAT_146af4b28;
    plVar9 = DAT_146af4b28 + (longlong)DAT_146af4b30 * 2;
    for (plVar8 = DAT_146af4b28; plVar8 != plVar9; plVar8 = plVar8 + 2) {
      puVar4 = &DAT_143f3eda8;
      if (uVar10 != 0) {
        puVar4 = puVar11;
      }
      if ((int)plVar8[1] == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*plVar8;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        if ((int)((longlong)plVar8 - (longlong)plVar1 >> 4) != -1) {
          if (puVar11 == (undefined2 *)0x0) {
            return DAT_146af4b30;
          }
          FMemory::Free(puVar11);
          return DAT_146af4b30;
        }
        break;
      }
    }
    iVar2 = DAT_146af4b30;
    lVar7 = (longlong)DAT_146af4b30;
    DAT_146af4b30 = DAT_146af4b30 + 1;
    if (DAT_146af4b34 < DAT_146af4b30) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146af4b28,iVar2);
    }
    plVar8 = DAT_146af4b28 + lVar7 * 2;
    *plVar8 = (longlong)puVar11;
    *(uint *)(plVar8 + 1) = uVar10;
    *(uint *)((longlong)plVar8 + 0xc) = uVar6;
  }
  return DAT_146af4b30;
}



// FUNCTION 14248f360 FUN_14248f360 body=788 status=ok
// SIG undefined FUN_14248f360(void)

void FUN_14248f360(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined4 *puVar10;
  
  puVar7 = (undefined4 *)0x0;
  *(undefined4 *)(param_1 + 0x88) = DAT_1468b5ca0;
  *(undefined4 *)(param_1 + 0x80) = DAT_1468b5ca0;
  uVar2 = DAT_1468b5ca4;
  *(undefined4 *)(param_1 + 0x8c) = DAT_1468b5ca4;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x41200000;
  *(undefined4 *)(param_1 + 0xb4) = 0x500;
  *(undefined4 *)(param_1 + 0xbc) = 0x2d0;
  *(undefined4 *)(param_1 + 0xc0) = 0x500;
  *(undefined4 *)(param_1 + 0xc4) = 0x2d0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(local_68);
  if (0 < (int)local_58) {
    pcVar4 = (char *)(local_60 + 0x58);
    puVar10 = puVar7;
    do {
      if (*pcVar4 != '\0') {
        FUN_142480c60(&local_78);
        goto LAB_14248f449;
      }
      uVar9 = (int)puVar10 + 1;
      puVar10 = (undefined4 *)(ulonglong)uVar9;
      pcVar4 = pcVar4 + 0x70;
    } while ((int)uVar9 < (int)local_58);
  }
  local_78 = 0;
  local_70 = 0;
LAB_14248f449:
  FUN_141189610(&local_60);
  plVar6 = (longlong *)(param_1 + 0xd0);
  if (plVar6 == &local_78) {
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = local_78;
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_70;
    *(undefined4 *)(param_1 + 0xdc) = local_70._4_4_;
    local_70 = 0;
    local_78 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x110,0);
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xcc) = 0xbf800000;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar8 * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146af4f98) &&
     (_Init_thread_header(&DAT_146af4f98), DAT_146af4f98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FullScreenMode");
    if (plVar6 != (longlong *)0x0) {
      puVar7 = (undefined4 *)(**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146af4f90 = puVar7;
    _Init_thread_footer(&DAT_146af4f98);
  }
  *(undefined4 *)(param_1 + 0xa0) = *DAT_146af4f90;
  Scalability::FQualityLevels::SetDefaults(param_1 + 0x30);
  if ((*(int *)(lVar1 + 0x38) < DAT_1468509e4) &&
     (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar5 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar5,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_142491fa0(param_1);
  }
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x14c) = 1000;
  uVar5 = DAT_146af4ac0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar5;
  return;
}



// FUNCTION 14248f680 FUN_14248f680 body=227 status=ok
// SIG undefined FUN_14248f680(void)

void FUN_14248f680(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  int local_10;
  
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined1 *)(param_1 + 0x28) = param_2;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146af4f78)
  {
    _Init_thread_header(&DAT_146af4f78);
    if (DAT_146af4f78 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146af4f70 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
      _Init_thread_footer(&DAT_146af4f78);
    }
  }
  plVar1 = DAT_146af4f70;
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,*(undefined1 *)(param_1 + 0x28));
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar3,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14248f770 FUN_14248f770 body=62 status=ok
// SIG undefined FUN_14248f770(void)

void FUN_14248f770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x16];
  param_1[0x16] = param_2;
  if ((lVar1 == 0) && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x300))();
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af130,param_2);
  return;
}



// FUNCTION 14248f7b0 FUN_14248f7b0 body=68 status=ok
// SIG undefined FUN_14248f7b0(void)

void FUN_14248f7b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[0x17] = (longlong)param_2;
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014248f7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2d8))(param_1,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014248f7ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1);
  return;
}



// FUNCTION 14248f810 FUN_14248f810 body=2215 status=ok
// SIG undefined FUN_14248f810(void)

void FUN_14248f810(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined1 local_res20 [8];
  longlong local_78 [2];
  longlong *local_68;
  longlong **local_60;
  longlong *local_58;
  longlong **local_50;
  longlong *local_48;
  longlong **local_40;
  longlong local_38 [2];
  
  local_60 = (longlong **)0xc;
  uVar3 = 0;
  local_68 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  plVar1 = local_68;
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xc,"EWindowMode",0xc,0x3f);
  local_78[0] = 0;
  local_78[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"FullscreenMode",0x1e);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    if (*(int *)(param_1 + 0x98) == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
  }
  puVar2 = (undefined8 *)FUN_142467090(&local_48,&local_68,uVar3);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_58,&DAT_1450b0154,puVar4);
  local_68 = local_78;
  local_60 = &local_58;
  FUN_140497620(param_2,local_res20,&local_68,0);
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  local_78[0] = 0;
  local_78[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"UseVSync",0x12);
  FString::PrintfImpl(&local_68,&DAT_1450b08f4,*(undefined1 *)(param_1 + 0x28));
  local_58 = local_78;
  local_50 = &local_68;
  FUN_140497620(param_2,local_res20,&local_58,0);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_78[0] = 0;
  local_78[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"PreferredMonitor",0x22);
  if (*(int *)(param_1 + 0xd8) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0xd0);
  }
  FString::PrintfImpl(&local_68,&DAT_1450b09f4,puVar4);
  local_58 = local_78;
  local_50 = &local_68;
  FUN_140497620(param_2,local_res20,&local_58,0);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_78[0] = 0;
  local_78[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"bPrimaryIsPreferredMonitor",0x36);
  FString::PrintfImpl(&local_68,&DAT_1450b1364,*(undefined1 *)(param_1 + 0xf0));
  local_58 = local_78;
  local_50 = &local_68;
  FUN_140497620(param_2,local_res20,&local_58,0);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_78[0] = 0;
  local_78[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"PreferredRefreshRate",0x2a);
  FString::PrintfImpl(&local_68,&DAT_1450b2ae4,*(undefined4 *)(param_1 + 0x160));
  local_58 = local_78;
  local_50 = &local_68;
  FUN_140497620(param_2,local_res20,&local_58,0);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (0 < param_4) {
    local_68 = (longlong *)0x0;
    local_60 = (longlong **)0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    plVar1 = local_68;
    FGenericPlatformString::Convert<char,wchar_t>(local_68,0xc,"EWindowMode",0xc,0x3f);
    local_78[0] = 0;
    local_78[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"LC_FullscreenMode",0x24);
    if ((*(int *)(param_1 + 0x9c) != 0) && (uVar6 = 2, *(int *)(param_1 + 0x9c) == 1)) {
      uVar6 = 1;
    }
    puVar2 = (undefined8 *)FUN_142467090(local_38,&local_68,uVar6);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(&local_48,&DAT_1450b2bd4,puVar5);
    local_58 = local_78;
    local_50 = &local_48;
    FUN_140497620(param_2,local_res20,&local_58,0);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    local_78[0] = 0;
    local_78[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"ResolutionSizeX",0x20);
    FString::PrintfImpl(&local_58,&DAT_1450b3774,*(undefined4 *)(param_1 + 0x80));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"ResolutionSizeY",0x20);
    FString::PrintfImpl(&local_58,&DAT_1450b3894,*(undefined4 *)(param_1 + 0x84));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"LC_ResolutionSizeX",0x26);
    FString::PrintfImpl(&local_58,&DAT_1450b3fa4,*(undefined4 *)(param_1 + 0x88));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"LC_ResolutionSizeY",0x26);
    FString::PrintfImpl(&local_58,&DAT_1450b4b54,*(undefined4 *)(param_1 + 0x8c));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"DesiredScreenWidth",0x26);
    FString::PrintfImpl(&local_58,&DAT_1450b4bf4,*(undefined4 *)(param_1 + 0xb4));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"DesiredScreenHeight",0x28);
    FString::PrintfImpl(&local_58,&DAT_1450b5184,*(undefined4 *)(param_1 + 0xbc));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"WindowPosX",0x16);
    FString::PrintfImpl(&local_58,&DAT_1450b5324,*(undefined4 *)(param_1 + 0x90));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"WindowPosY",0x16);
    FString::PrintfImpl(&local_58,&DAT_1450b5584,*(undefined4 *)(param_1 + 0x94));
    local_48 = local_78;
    local_40 = &local_58;
    FUN_140497620(param_2,local_res20,&local_48,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424900c0 FUN_1424900c0 body=474 status=ok
// SIG undefined FUN_1424900c0(void)

undefined8 FUN_1424900c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  lVar5 = DAT_146b17150;
  plVar7 = (longlong *)(DAT_146b17150 + 0x9d0);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1443190e0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = 0x424704cc;
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144319128;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = *(int *)(lVar5 + 0x9d8);
    *(int *)(lVar5 + 0x9d8) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x9dc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  lVar5 = DAT_146b17150;
  plVar7 = (longlong *)(DAT_146b17150 + 0x9e8);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77f28;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = 0x424704d8;
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77f70;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = *(int *)(lVar5 + 0x9f0);
    *(int *)(lVar5 + 0x9f0) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x9f4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  lVar5 = FUN_1428760b0(DAT_146b17150,param_1);
  plVar2 = *(longlong **)(lVar5 + 0x240);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142490293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2);
  return uVar6;
}



// FUNCTION 1424902a0 FUN_1424902a0 body=611 status=ok
// SIG undefined FUN_1424902a0(void)

void FUN_1424902a0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x280) = 1;
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
          goto LAB_142490457;
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
LAB_142490457:
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



// FUNCTION 142490530 FUN_142490530 body=113 status=ok
// SIG undefined FUN_142490530(void)

void FUN_142490530(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = param_3;
    *(undefined4 *)(param_1 + 0x44) = param_4;
    *(undefined1 *)(param_1 + 0x38) = 1;
    QueryPerformanceCounter(local_res8);
    dVar1 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(double *)(param_1 + 0x48) = dVar1 + 16777216.0;
    if (param_5 == 0) {
      param_5 = *(int *)(param_1 + 0xf0);
    }
    *(int *)(param_1 + 0xec) = param_5;
  }
  return;
}



// FUNCTION 1424905c0 FUN_1424905c0 body=771 status=ok
// SIG undefined FUN_1424905c0(void)

void FUN_1424905c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_a8 [2];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [2];
  
  cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  if (cVar3 == '\0') {
    local_70 = param_1 + 0x14;
    uVar12 = 0;
    plVar14 = (longlong *)param_1[0x78];
    if ((longlong *)param_1[0x78] == (longlong *)0x0) {
      plVar14 = local_70;
    }
    uVar13 = (longlong)(int)param_1[0x79] & 0x1fffffffffffffff;
    if (plVar14 + (int)param_1[0x79] < plVar14) {
      uVar13 = uVar12;
    }
    if (uVar13 != 0) {
      do {
        plVar11 = (longlong *)0x0;
        plVar2 = (longlong *)*plVar14;
        if (plVar2 != (longlong *)0x0) {
          uVar4 = *(uint *)((longlong)plVar2 + 0xc);
          plVar10 = plVar11;
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar8 = uVar4 & 0xffff;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0xffff;
              uVar8 = uVar8 - 0x10000;
            }
            plVar10 = (longlong *)
                      (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18);
          }
          if (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) &&
             (lVar5 = FUN_14178ca30(plVar2), lVar5 != 0)) {
            local_78 = plVar2[3];
            UObject::ConditionalBeginDestroy(plVar2);
            puVar6 = (undefined8 *)FName::ToString(&local_78,local_48);
            if (*(int *)(puVar6 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar6;
            }
            (**(code **)(*plVar2 + 0x138))(plVar2,puVar9,0,0);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
            if ((*(uint *)(lVar5 + 8) >> 4 & 1) == 0) {
              local_a0 = lVar5;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 10,local_res20);
              if (local_res20[0] == -1) {
                lVar5 = 0;
              }
              else {
                lVar5 = (longlong)local_res20[0] * 0x20 + param_1[10];
              }
              plVar10 = (longlong *)(lVar5 + 8);
              if (lVar5 == 0) {
                plVar10 = (longlong *)0x0;
              }
              if (plVar10 == (longlong *)0x0) {
                local_88 = 0;
                local_58 = &local_a0;
                local_50 = &local_88;
                local_80 = plVar10;
                FUN_142466880(param_1 + 10,local_a8);
                plVar10 = (longlong *)(param_1[10] + (longlong)local_a8[0] * 0x20 + 8);
                lVar5 = local_88;
                goto LAB_142490832;
              }
            }
            else {
              local_a0 = plVar2[2];
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(param_1,local_res10);
              plVar7 = plVar11;
              if (local_res10[0] != -1) {
                plVar7 = (longlong *)((longlong)local_res10[0] * 0x20 + *param_1);
              }
              plVar10 = plVar7 + 1;
              if (plVar7 == (longlong *)0x0) {
                plVar10 = plVar11;
              }
              if (plVar10 == (longlong *)0x0) {
                local_68 = &local_a0;
                local_98 = 0;
                local_60 = &local_98;
                local_90 = plVar10;
                FUN_142466880(param_1,local_res18);
                plVar10 = (longlong *)(*param_1 + (longlong)local_res18[0] * 0x20 + 8);
                lVar5 = local_98;
LAB_142490832:
                if (lVar5 != 0) {
                  FMemory::Free();
                }
              }
            }
            iVar1 = (int)plVar10[1];
            *(int *)(plVar10 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar1);
            }
            *(longlong **)(*plVar10 + (longlong)iVar1 * 8) = plVar2;
          }
        }
        plVar14 = plVar14 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar13);
    }
    *(undefined4 *)(local_70 + 0x65) = 0;
    if (*(int *)((longlong)local_70 + 0x32c) != 0) {
      FUN_14248cf20(local_70,0);
    }
  }
  return;
}



// FUNCTION 1424908d0 FUN_1424908d0 body=697 status=ok
// SIG undefined FUN_1424908d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424908d0(longlong param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined1 auStack_1058 [32];
  undefined1 local_1038;
  float local_1030 [1024];
  float *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1058;
  FUN_14248b820();
  plVar4 = (longlong *)FUN_142481dd0(param_1);
  if (*plVar4 != DAT_1468c21b0) {
    FUN_14248b430(plVar4);
    lVar1 = DAT_146af4a78;
    if (DAT_146af4a78 == 0) {
      plVar5 = (longlong *)UShaderPlatformQualitySettings::GetPrivateStaticClass();
      lVar1 = plVar5[0x1f];
      if (plVar5[0x1f] == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar1 = plVar5[0x1f];
      }
    }
    DAT_146af4a78 = lVar1;
    *plVar4 = DAT_1468c21b0;
    if ((param_1 == 0) || ((*(byte *)(param_1 + 0x830) & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    FUN_142481660(local_1030,plVar4);
    iVar7 = 0;
    pfVar6 = local_1030;
    if (local_30 != (float *)0x0) {
      pfVar6 = local_30;
    }
    FUN_142467bd0(pfVar6,(longlong)local_28,local_1038);
    bVar3 = false;
    pfVar6 = local_1030;
    if (local_30 != (float *)0x0) {
      pfVar6 = local_30;
    }
    pfVar8 = pfVar6 + (longlong)local_28 * 4;
    for (; pfVar6 != pfVar8; pfVar6 = pfVar6 + 4) {
      if (*pfVar6 == 3.4028235e+38) {
        *(undefined1 *)(*(longlong *)(pfVar6 + 2) + 0x10) = 1;
LAB_142490a5b:
        iVar7 = iVar7 + 1;
      }
      else if (*pfVar6 != -3.4028235e+38) {
        if (((bVar2) && (DAT_146532704 <= iVar7)) && (bVar3)) {
          *(undefined1 *)(*(longlong *)(pfVar6 + 2) + 0x12) = 1;
        }
        else {
          lVar1 = *(longlong *)(pfVar6 + 2);
          if (*(int *)(lVar1 + 0x14) + -1 <= *(int *)(lVar1 + 8)) {
            *(undefined1 *)(lVar1 + 0x10) = 1;
            bVar3 = true;
            goto LAB_142490a5b;
          }
        }
      }
    }
    pfVar6 = local_1030;
    if (local_30 != (float *)0x0) {
      pfVar6 = local_30;
    }
    pfVar8 = pfVar6 + (longlong)local_28 * 4;
    for (; pfVar6 != pfVar8; pfVar6 = pfVar6 + 4) {
      lVar1 = *(longlong *)(pfVar6 + 2);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        iVar7 = *(int *)(lVar1 + 8) + 1;
      }
      else {
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 8);
        iVar7 = 0;
      }
      *(int *)(lVar1 + 8) = iVar7;
    }
    pfVar6 = local_1030;
    if (local_30 != (float *)0x0) {
      pfVar6 = local_30;
    }
    pfVar8 = pfVar6 + (longlong)local_28 * 4;
    for (; pfVar6 != pfVar8; pfVar6 = pfVar6 + 4) {
      lVar1 = *(longlong *)(pfVar6 + 2);
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      if (*(char *)(lVar1 + 0x10) == '\0') {
        *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) - param_2;
      }
      else {
        if (((*(int *)(lVar1 + 8) < 0x1f) && (*(int *)(lVar1 + 0x14) != 0)) &&
           (*pfVar6 != 3.4028235e+38)) {
          if (0.0 <= *(float *)(lVar1 + 0x20)) goto LAB_142490b42;
          *(float *)(lVar1 + 0x1c) = -*(float *)(lVar1 + 0x20);
        }
        *(undefined4 *)(lVar1 + 0x20) = 0;
      }
LAB_142490b42:
    }
    if (local_30 != (float *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}



// FUNCTION 142490b90 FUN_142490b90 body=718 status=ok
// SIG undefined FUN_142490b90(void)

undefined8 FUN_142490b90(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [24];
  
  lVar9 = DAT_146af4d68;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  uVar16 = 0;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    uVar12 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_142490be7;
  }
  uVar12 = uVar16;
LAB_142490be7:
  if (*(int *)((longlong)param_1 + 0x34) != *(int *)(uVar12 + lVar9)) {
    FUN_14248a010(param_1);
  }
  puVar17 = (undefined8 *)*param_1;
  iVar13 = 0;
  puVar8 = puVar17 + *(int *)(param_1 + 1);
  do {
    if (puVar17 == puVar8) {
      uVar10 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
      if (0 < iVar13) {
        *(undefined4 *)(param_1 + 10) = 0;
        return uVar10;
      }
      *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
      return uVar10;
    }
    uVar12 = 0;
    piVar2 = (int *)*puVar17;
    if (piVar2 != (int *)0x0) {
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
      if (piVar2[1] == 2) {
        local_68 = 0;
        cVar6 = FWeakObjectPtr::IsValid(piVar2 + 2);
        if ((((cVar6 == '\0') || (lVar9 = FWeakObjectPtr::Get(piVar2 + 2), lVar9 == 0)) ||
            (*(longlong *)(lVar9 + 0x30) == 0)) ||
           (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x60), lVar9 == 0)) {
          local_78 = 0;
        }
        else {
          local_78 = *(longlong *)(lVar9 + 0x30);
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
        }
        lVar9 = local_78;
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_68);
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_78);
        if (lVar9 == 0) goto LAB_142490e09;
      }
      if ((char)piVar2[8] != '\0') {
        puVar15 = (undefined8 *)*param_1;
        iVar13 = *piVar2;
        uVar16 = (longlong)*(int *)(param_1 + 1) & 0x1fffffffffffffff;
        if (puVar15 + *(int *)(param_1 + 1) < puVar15) {
          uVar16 = 0;
        }
        if (uVar16 != 0) {
          do {
            piVar2 = (int *)*puVar15;
            if ((piVar2 != (int *)0x0) && ((*piVar2 == iVar13 || (iVar13 == 2)))) {
              local_60 = param_1;
              uStack_58 = piVar2;
              if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
                 ((DAT_146ac3ac5 != '\0' ||
                  (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')
                    ) && (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))))) {
                plVar11 = (longlong *)FUN_142477f00(local_50,0,0xff);
                lVar9 = *plVar11;
                *(undefined4 *)(lVar9 + 0x10) = (undefined4)local_60;
                *(undefined4 *)(lVar9 + 0x14) = local_60._4_4_;
                *(undefined4 *)(lVar9 + 0x18) = (undefined4)uStack_58;
                *(undefined4 *)(lVar9 + 0x1c) = uStack_58._4_4_;
                lVar9 = *plVar11;
                lVar5 = plVar11[2];
                lVar3 = plVar11[1];
                lVar4 = *(longlong *)(lVar9 + 0x28);
                piVar2 = (int *)(lVar4 + 0x48);
                if (lVar4 != 0) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                }
                local_70 = lVar4;
                FUN_1409421c0(lVar9,lVar3,(int)lVar5,1);
                if (lVar4 != 0) {
                  LOCK();
                  iVar1 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar1 == 1) {
                    FGraphEvent::Recycle(local_70);
                  }
                }
              }
              else {
                uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
                FUN_142479720(param_1,uVar10,piVar2);
              }
            }
            puVar15 = puVar15 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar16);
        }
        uVar16 = (ulonglong)uVar14;
      }
    }
LAB_142490e09:
    iVar13 = (int)uVar16;
    puVar17 = puVar17 + 1;
  } while( true );
}



// FUNCTION 142490e60 FUN_142490e60 body=216 status=ok
// SIG undefined FUN_142490e60(void)

undefined8 FUN_142490e60(longlong param_1)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  if (DAT_146b17150 == 0) {
    **(undefined4 **)(param_1 + 0x10) = 1;
  }
  else {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    FUN_142874670(DAT_146b17150,*(undefined8 *)(param_1 + 0x10));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      FUN_142475650(param_1);
    }
  }
  else {
    *(int *)(param_1 + 100) = iVar1 + -1;
  }
  cVar2 = FUN_1415ad5c0();
  if (cVar2 != '\0') {
    QueryPerformanceCounter(&local_res8);
    dVar4 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0x40)
    ;
    *(double *)(param_1 + 0x48) = dVar4;
    if ((0.0 < *(float *)(param_1 + 0x60)) && ((double)*(float *)(param_1 + 0x60) < dVar4)) {
      FUN_142472a90(param_1,0);
    }
  }
  FUN_1415ad5c0();
  return 1;
}



// FUNCTION 142490f40 FUN_142490f40 body=458 status=ok
// SIG undefined FUN_142490f40(void)

void FUN_142490f40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  LARGE_INTEGER local_res8;
  longlong local_38 [6];
  ulonglong uVar5;
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x58) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x54) = 1;
      return;
    }
    if (iVar1 < 5) {
      *(int *)(param_1 + 0x54) = iVar1 + 1;
      return;
    }
    if (iVar1 == 5) {
      QueryPerformanceCounter(&local_res8);
      *(double *)(param_1 + 0x48) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
    QueryPerformanceCounter(&local_res8);
    if ((double)*(float *)(param_1 + 0x40) <=
        ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0x48)) {
      uVar3 = 0;
      uVar5 = uVar3;
      do {
        if (*(char *)(uVar3 + *(longlong *)(param_1 + 0x20)) != '\0') {
          FUN_14247ffa0(local_38 + 2,uVar5);
          if ((int)uVar5 == 1) {
            FString::PrintfImpl(local_38,L"TexelCost: %6.2f ns",
                                (double)((((float)*(int *)(param_1 + 0x9c) *
                                          *(float *)(*(longlong *)(param_1 + 0x10) + uVar3 * 4)) /
                                         (float)(*(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x80)
                                                * 6)) * 1e+06));
            lVar2 = local_38[0];
            local_38[0] = 0;
            local_38[1] = 0;
            if (lVar2 != 0) {
              FMemory::Free();
            }
          }
          if (local_38[2] != 0) {
            FMemory::Free();
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = uVar3 + 1;
      } while ((int)uVar4 < 7);
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0xbff0000000000000;
      *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
      *(undefined8 *)(param_1 + 0x50) = 0xffffffffbf800000;
      return;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}



// FUNCTION 142491110 FUN_142491110 body=48 status=ok
// SIG undefined FUN_142491110(void)

void FUN_142491110(longlong param_1,undefined4 param_2)

{
  TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x2a0);
  TBaseMulticastDelegate<void,float>::Broadcast(&DAT_1464af118,param_2);
  return;
}



// FUNCTION 142491140 FUN_142491140 body=1675 status=ok
// SIG undefined FUN_142491140(void)

/* WARNING: Removing unreachable block (ram,0x00014249162d) */
/* WARNING: Removing unreachable block (ram,0x000142491639) */
/* WARNING: Removing unreachable block (ram,0x000142491645) */
/* WARNING: Removing unreachable block (ram,0x000142491659) */
/* WARNING: Removing unreachable block (ram,0x000142491665) */

void FUN_142491140(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 *local_568;
  undefined8 local_560;
  void *local_558;
  undefined8 local_550;
  undefined8 local_548;
  longlong local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  longlong local_520 [2];
  undefined1 local_510 [8];
  undefined8 local_508;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [49];
  undefined1 local_4b7;
  float local_48c;
  float fStack_488;
  float fStack_484;
  undefined4 uStack_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined8 *local_430;
  uint local_428;
  int local_424;
  void *local_420;
  int local_418;
  int local_414;
  void *local_410;
  int local_408;
  int local_404;
  undefined8 local_288 [2];
  undefined1 local_278 [608];
  
  puVar10 = (undefined8 *)0x0;
  FUN_1422409a0();
  if (((*(longlong *)(param_1 + 0x458) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x458) + 0x6f0) != 0)) &&
     (cVar4 = FUN_142371b60(), cVar4 != '\0')) {
    if (*(char *)(param_1 + 0x468) != '\0') {
      FUN_14248dd50(param_1,0);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x458) + 0xb8) & 1) == 0) {
      FUN_14234b150();
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0x458) + 0x640) == 0) {
      FUN_14234cb00();
    }
    else {
      FUN_14246e670(local_4e8);
      local_4b7 = 1;
      FUN_14248e1f0(local_4e8,*(undefined8 *)(param_1 + 0x470));
      local_48c = 1.0;
      fStack_488 = 1.0;
      fStack_484 = 1.0;
      local_578 = 0x3f8000003f800000;
      uStack_570 = 0x3f8000003f800000;
      if (*(longlong *)(param_1 + 0x460) != 0) {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x460) + 0x2e8);
        local_48c = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        fStack_488 = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        fStack_484 = (float)(uVar2 & 0xff) * 0.003921569;
        local_578 = CONCAT44(fStack_488,local_48c);
        uStack_570 = CONCAT44(0x3f800000,fStack_484);
      }
      uStack_480 = 0x3f800000;
      puVar7 = (undefined8 *)FUN_142481ad0(param_1,local_4f8);
      local_47c = *puVar7;
      local_474 = *(undefined4 *)(puVar7 + 1);
      local_46c = FUN_142481e60(param_1);
      local_470 = *(undefined4 *)(*(longlong *)(param_1 + 0x458) + 0x6f8);
      if (*(longlong *)(param_1 + 0x460) == 0) {
        if (local_430 != (undefined8 *)&DAT_1450ad130) {
          local_428 = 0;
          puVar7 = puVar10;
          if (local_424 != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_430,5);
            puVar7 = (undefined8 *)(ulonglong)local_428;
          }
          local_428 = (int)puVar7 + 5;
          if (local_424 < (int)local_428) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_430);
          }
          *local_430 = 0x45004e004f004e;
          *(undefined2 *)(local_430 + 1) = 0;
        }
        uVar2 = local_428;
        puVar7 = local_430;
        local_418 = local_428;
        if ((local_428 == 0) && (local_414 == 0)) {
          local_414 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_420,local_428);
          _guard_xfg_dispatch_icall_nop(local_420,puVar7,(longlong)(int)uVar2 * 2);
        }
        uVar2 = local_428;
        puVar7 = local_430;
        local_408 = local_428;
        if ((local_428 == 0) && (local_404 == 0)) {
          local_404 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_410,local_428);
          _guard_xfg_dispatch_icall_nop(local_410,puVar7,(longlong)(int)uVar2 * 2);
        }
      }
      else {
        local_538 = *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x18);
        FName::ToString(&local_538,&local_568);
        if (local_430 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        local_430 = local_568;
        local_428 = (int)local_560;
        local_424 = local_560._4_4_;
        local_560 = 0;
        local_568 = (undefined8 *)0x0;
        lVar8 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x460));
        local_530 = *(undefined8 *)(lVar8 + 0x18);
        FName::ToString(&local_530,&local_558);
        if (local_420 != (void *)0x0) {
          FMemory::Free();
        }
        local_420 = local_558;
        local_418 = (int)local_550;
        local_414 = local_550._4_4_;
        local_558 = (void *)0x0;
        local_550 = 0;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x460) + 0x118);
        bVar11 = lVar8 == 0;
        if (bVar11) {
          local_578 = 0;
          uStack_570 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
          FGenericPlatformString::Memcpy(local_578,L"NONE",10);
          plVar9 = &local_578;
        }
        else {
          local_528 = *(undefined8 *)(lVar8 + 0x18);
          FName::ToString(&local_528,local_520);
          plVar9 = local_520;
        }
        if (local_410 != (void *)0x0) {
          FMemory::Free();
        }
        local_410 = (void *)*plVar9;
        *plVar9 = 0;
        local_408 = (int)plVar9[1];
        local_404 = *(int *)((longlong)plVar9 + 0xc);
        plVar9[1] = 0;
        if ((bVar11) && (local_578 != 0)) {
          FMemory::Free();
        }
        if ((!bVar11) && (local_520[0] != 0)) {
          FMemory::Free();
        }
      }
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        local_288[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x640);
        FUN_14246e150(local_278,local_4e8);
        FUN_142479a30(local_288,2,local_510);
        FUN_14246f830(local_278);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x640);
        puVar7 = (undefined8 *)operator_new(0x290);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar7 + 1) = 0xff;
          *puVar7 = &PTR_FUN_143f3edd8;
          local_508 = 0;
          local_548 = 0;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
          *puVar7 = &PTR_FUN_1450bb660;
          *(undefined1 *)(puVar7 + 0x50) = 0;
          puVar7[0x51] = 0;
          puVar10 = puVar7;
        }
        puVar10[2] = uVar3;
        FUN_14246e150(puVar10 + 4,local_4e8);
        lVar8 = puVar10[0x51];
        piVar1 = (int *)(lVar8 + 0x48);
        if (lVar8 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_540 = lVar8;
        FUN_1424902a0(puVar10,0,0xff,1);
        if (lVar8 != 0) {
          LOCK();
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            FGraphEvent::Recycle(local_540);
          }
        }
      }
      FUN_14246f830(local_4e8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af5048) && (_Init_thread_header(&DAT_146af5048), DAT_146af5048 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146af5040 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.ClearCubeMapMode");
    _Init_thread_footer(&DAT_146af5048);
  }
  if ((DAT_146af5040 != (longlong *)0x0) &&
     (iVar6 = (**(code **)(*DAT_146af5040 + 0x68))(), iVar6 == 2)) {
    if (DAT_146af503c == '\0') {
      DAT_146af503c = 1;
      return;
    }
    DAT_146af503c = '\0';
    IConsoleVariable::SetWithCurrentPriority(DAT_146af5040,0);
  }
  return;
}



// FUNCTION 1424917d0 FUN_1424917d0 body=95 status=ok
// SIG undefined FUN_1424917d0(void)

undefined8 FUN_1424917d0(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((longlong)*param_1 * 0x20 + -0x18 + DAT_146532760);
  }
  FString::PrintfImpl(param_2,L"BaseValue=%f, Value=%f, NumModifiers=%d",(double)(float)param_1[2],
                      (double)(float)param_1[1],uVar1);
  return param_2;
}



// FUNCTION 142491830 FUN_142491830 body=77 status=ok
// SIG undefined FUN_142491830(void)

undefined8 FUN_142491830(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((longlong)*param_1 * 0x20 + -0x18 + DAT_146532760);
  }
  FString::PrintfImpl(param_2,L"BaseValue=%d, Value=%d, NumModifiers=%d",param_1[2],param_1[1],uVar1
                     );
  return param_2;
}



// FUNCTION 142491880 FUN_142491880 body=111 status=ok
// SIG undefined FUN_142491880(void)

void FUN_142491880(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = DAT_146532760 + -0x10 + (longlong)*param_1 * 0x20;
    *(undefined4 *)(lVar1 + 8) = 0;
    if (*(int *)(lVar1 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1,0);
    }
    if (*param_1 != 0) {
      lVar1 = (longlong)*param_1 * 0x20;
      if ((*(int *)(lVar1 + -0x18 + DAT_146532760) == 0) &&
         (*(int *)(lVar1 + -8 + DAT_146532760) < 1)) {
        FUN_142478640(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1424918f0 FUN_1424918f0 body=114 status=ok
// SIG undefined FUN_1424918f0(void)

void FUN_1424918f0(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 + -1 != -1) {
    lVar1 = (longlong)(*param_1 + -1) * 0x20 + DAT_146532760;
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x10);
    if (*param_1 != 0) {
      lVar1 = (longlong)*param_1 * 0x20;
      if ((*(int *)(lVar1 + -0x18 + DAT_146532760) == 0) &&
         (*(int *)(lVar1 + -8 + DAT_146532760) < 1)) {
        FUN_142478640(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142491970 FUN_142491970 body=306 status=ok
// SIG undefined FUN_142491970(void)

void FUN_142491970(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  if ((param_1 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0))
      && (cVar2 = UWorld::IsGameWorld(lVar3), cVar2 != '\0')))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_142481dd0(lVar3);
    if ((*(longlong *)(param_1 + 0x118) == 0) ||
       (lVar5 = *(longlong *)(param_1 + 0x118), (*(byte *)(param_1 + 0x881) & 0x20) != 0)) {
      lVar5 = param_1;
    }
    plVar1 = (longlong *)(lVar3 + 8);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar4 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar4 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x18);
    }
    plVar6 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *plVar6;
      FWeakObjectPtr::operator=(local_res10,param_1);
      FUN_14248afe0(lVar3 + 0x40,local_res10);
      if (*(int *)(lVar3 + 0x88) == 0) {
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(plVar1,lVar5);
        if (*(longlong *)(lVar3 + 0x80) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar3,0x90);
      }
    }
  }
  return;
}



// FUNCTION 142491ab0 FUN_142491ab0 body=287 status=ok
// SIG undefined FUN_142491ab0(void)

void FUN_142491ab0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined1 local_res18 [16];
  
  if ((param_1 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0))
      && (cVar2 = UWorld::IsGameWorld(lVar3), cVar2 != '\0')))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar5 = param_1;
    if (param_2 != 0) {
      lVar5 = param_2;
    }
    lVar3 = FUN_142481dd0(lVar3);
    plVar1 = (longlong *)(lVar3 + 8);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8);
    plVar4 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar4 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x18);
    }
    plVar6 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *plVar6;
      FWeakObjectPtr::operator=(local_res18,param_1);
      FUN_14248afe0(lVar3 + 0x40,local_res18);
      if (*(int *)(lVar3 + 0x88) == 0) {
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(plVar1,lVar5);
        if (*(longlong *)(lVar3 + 0x80) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar3,0x90);
      }
    }
  }
  return;
}



// FUNCTION 142491bd0 FUN_142491bd0 body=108 status=ok
// SIG undefined FUN_142491bd0(void)

void FUN_142491bd0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_142235230();
  if ((((iVar3 != 0) && (param_2 != 0)) && (*(longlong *)(param_2 + 0x460) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x460) + 0x4b8), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x738))
                (param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x460) + 0x4d8),
                 *(longlong *)(param_2 + 0x460) + 0x4b0);
    }
  }
  return;
}



// FUNCTION 142491c40 FUN_142491c40 body=135 status=ok
// SIG undefined FUN_142491c40(void)

void FUN_142491c40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  iVar2 = FUN_142235230(param_1);
  if ((iVar2 != 0) && (*(longlong **)(param_3 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
      if (cVar1 != '\0') {
        plVar4 = (longlong *)UOnlineEngineInterface::Get();
        (**(code **)(*plVar4 + 0x318))(plVar4,uVar3,param_2,*(undefined8 *)(param_3 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142491cd0 FUN_142491cd0 body=107 status=ok
// SIG undefined FUN_142491cd0(void)

void FUN_142491cd0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  iVar1 = FUN_142235230(param_1);
  if ((iVar1 != 0) && (0 < *(int *)(param_3 + 8))) {
    plVar3 = (longlong *)UOnlineEngineInterface::Get();
    (**(code **)(*plVar3 + 800))(plVar3,uVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 142491d40 FUN_142491d40 body=328 status=ok
// SIG undefined FUN_142491d40(void)

void FUN_142491d40(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar2 = (**(code **)(*param_1 + 0x148))();
  iVar1 = UEngine::GetNumGamePlayers(DAT_146b17150,uVar2);
  plVar3 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  if ((*(char *)(lVar4 + 0x68) == '\0') || ((char)param_1[0x60] != '\0'))
  goto switchD_142491df3_default;
  if (-1 < iVar1) {
    if (iVar1 < 2) goto switchD_142491df3_default;
    if (iVar1 == 2) {
      if (*(char *)(lVar4 + 0x69) == '\0') {
        cVar5 = '\x01';
      }
      else if (*(char *)(lVar4 + 0x69) == '\x01') {
        cVar5 = '\x02';
      }
      goto switchD_142491df3_default;
    }
    if (iVar1 == 3) {
      switch(*(undefined1 *)(lVar4 + 0x6a)) {
      case 0:
        cVar5 = '\x03';
        break;
      case 1:
        cVar5 = '\x04';
        break;
      case 2:
        cVar5 = '\x05';
        if (*(char *)(lVar4 + 0x69) == '\0') {
          cVar5 = '\x03';
        }
        break;
      case 3:
        cVar5 = '\x06';
        if (*(char *)(lVar4 + 0x69) == '\0') {
          cVar5 = '\x03';
        }
        break;
      case 4:
        cVar5 = (*(char *)(lVar4 + 0x69) != '\0') + '\x04';
        break;
      case 5:
        cVar5 = '\x06';
        if (*(char *)(lVar4 + 0x69) == '\0') {
          cVar5 = '\x04';
        }
      }
      goto switchD_142491df3_default;
    }
  }
  cVar5 = '\a';
switchD_142491df3_default:
  *(char *)(param_1 + 0x10) = cVar5;
  return;
}



// FUNCTION 142491ea0 FUN_142491ea0 body=244 status=ok
// SIG undefined FUN_142491ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142491ea0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x718) == 0) {
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    return;
  }
  if (((*(byte *)(param_1 + 0x700) & 8) != 0) && (*(longlong *)(param_1 + 0x6f8) == 0)) {
    plVar7 = (longlong *)FUN_14178ca30();
    uVar8 = (**(code **)(*plVar7 + 0x6b8))(plVar7);
    *(undefined8 *)(param_1 + 0x6f8) = uVar8;
  }
  FUN_14239e020(param_1);
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x9a);
  *pbVar1 = *pbVar1 & 0xfb;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x58);
  cVar6 = FUN_140618120(&DAT_1468b5b70);
  if (cVar6 == '\0') {
    cVar6 = FUN_140618120(&DAT_1468b5b80);
    if (cVar6 == '\0') {
      FUN_140618120(&DAT_1468b5b90);
    }
  }
  uVar8 = uRam00000001468b5b78;
  *(undefined8 *)(lVar2 + 0x90) = _DAT_1468b5b70;
  *(undefined8 *)(lVar2 + 0x98) = uVar8;
  uVar5 = uRam00000001468b5b8c;
  uVar4 = uRam00000001468b5b88;
  uVar3 = uRam00000001468b5b84;
  *(undefined4 *)(lVar2 + 0xa0) = _DAT_1468b5b80;
  *(undefined4 *)(lVar2 + 0xa4) = uVar3;
  *(undefined4 *)(lVar2 + 0xa8) = uVar4;
  *(undefined4 *)(lVar2 + 0xac) = uVar5;
  uVar5 = uRam00000001468b5b9c;
  uVar4 = uRam00000001468b5b98;
  uVar3 = uRam00000001468b5b94;
  *(undefined4 *)(lVar2 + 0xb0) = _DAT_1468b5b90;
  *(undefined4 *)(lVar2 + 0xb4) = uVar3;
  *(undefined4 *)(lVar2 + 0xb8) = uVar4;
  *(undefined4 *)(lVar2 + 0xbc) = uVar5;
  FUN_14231b190(lVar2);
  TArray<FVector,FDefaultAllocator>::operator=(lVar2 + 0x60,param_1 + 0x710);
  FUN_142321610(lVar2);
  return;
}



// FUNCTION 142491fa0 FUN_142491fa0 body=183 status=ok
// SIG undefined FUN_142491fa0(void)

void FUN_142491fa0(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  iVar2 = FUN_142527910();
  if ((int)param_1[0x13] == 1) {
    FUN_14247fd10(param_1,local_res8);
    if ((int)param_1[0x13] == 1) {
      lVar3 = FUN_14247fd10(param_1,local_res8);
      iVar4 = *(int *)(lVar3 + 4);
      goto LAB_142491fef;
    }
  }
  iVar4 = *(int *)((longlong)param_1 + 0x84);
LAB_142491fef:
  fVar6 = ((float)iVar2 / (float)iVar4) * 100.0;
  if (fVar6 <= 10.0) {
    fVar6 = 10.0;
  }
  *(float *)(param_1 + 0x16) = fVar6;
  if ((char)param_1[0x17] != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x2d8))(param_1);
    *(undefined4 *)(param_1 + 6) = uVar5;
    return;
  }
  fVar1 = *(float *)(param_1 + 6);
  if (*(float *)(param_1 + 6) <= fVar6) {
    fVar1 = fVar6;
  }
  *(float *)(param_1 + 6) = fVar1;
  return;
}



// FUNCTION 142492060 FUN_142492060 body=41 status=ok
// SIG undefined FUN_142492060(void)

void FUN_142492060(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 142492090 FUN_142492090 body=143 status=ok
// SIG undefined FUN_142492090(void)

void FUN_142492090(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = FUN_142235230();
  if (iVar3 != 0) {
    plVar4 = (longlong *)UOnlineEngineInterface::Get();
    lVar1 = *plVar4;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    (**(code **)(lVar1 + 0x308))(plVar4,uVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 142492120 FUN_142492120 body=75 status=ok
// SIG undefined FUN_142492120(void)

void FUN_142492120(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_146af4a78;
  if (DAT_146af4a78 == 0) {
    plVar2 = (longlong *)UShaderPlatformQualitySettings::GetPrivateStaticClass();
    lVar1 = plVar2[0x1f];
    if (plVar2[0x1f] == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar1 = plVar2[0x1f];
    }
  }
  DAT_146af4a78 = lVar1;
  return;
}



// FUNCTION 142492180 FUN_142492180 body=385 status=ok
// SIG undefined FUN_142492180(void)

undefined8 FUN_142492180(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar4 = *(longlong **)(param_1 + 0xa0);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar4;
  plVar8 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar4[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar4 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, plVar8 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar4[1];
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x98);
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar10 = 0x3f800000;
  if (plVar8 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14183ac60(plVar8,local_48);
    plVar6 = (longlong *)0x1;
    if (*plVar4 != 0) {
      bVar9 = true;
      goto LAB_142492211;
    }
  }
  bVar9 = false;
LAB_142492211:
  if ((plVar6 != (longlong *)0x0) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  if (bVar9) {
    puVar5 = (undefined8 *)FUN_14183ac60(plVar8,local_38);
    uVar10 = (**(code **)(*(longlong *)*puVar5 + 0xf0))();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return uVar10;
}



// FUNCTION 142492310 FUN_142492310 body=1052 status=ok
// SIG undefined FUN_142492310(void)

void FUN_142492310(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_res8 [2];
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  piVar12 = (int *)0x0;
  local_res8[0] = 0;
  cVar2 = (**(code **)(*param_1 + 0x300))();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x2a8))(param_1,1);
    cVar2 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146af4fa8) &&
         (_Init_thread_header(&DAT_146af4fa8), DAT_146af4fa8 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
        piVar7 = piVar12;
        if (plVar4 != (longlong *)0x0) {
          piVar7 = (int *)(**(code **)(*plVar4 + 0x38))(plVar4);
        }
        DAT_146af4fa0 = piVar7;
        _Init_thread_footer(&DAT_146af4fa8);
      }
      FUN_14248f680(param_1,*DAT_146af4fa0 != 0);
      if (DAT_146b17150 != 0) {
        *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(DAT_146b17150 + 0xa51);
      }
      plVar4 = (longlong *)FUN_1415c3d50();
      puVar11 = &DAT_143f3eda8;
      if (DAT_1468e2428 != 0) {
        puVar11 = DAT_1468e2420;
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,puVar11,0,0,0);
      (**(code **)(*param_1 + 0x2a8))(param_1,1);
    }
  }
  iVar8 = DAT_1465351f0;
  iVar3 = (int)param_1[0x10];
  if ((iVar3 == 0) || (*(int *)((longlong)param_1 + 0x84) == 0)) {
    if ((iVar3 != DAT_1465351f0) || (*(int *)((longlong)param_1 + 0x84) != DAT_1465351f4)) {
      *(int *)((longlong)param_1 + 0x84) = DAT_1465351f4;
      *(int *)(param_1 + 0x10) = iVar8;
      FUN_142491fa0(param_1);
      iVar3 = (int)param_1[0x10];
    }
    iVar8 = (int)param_1[0x13];
    *(int *)(param_1 + 0x11) = iVar3;
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x84);
    *(int *)((longlong)param_1 + 0x9c) = iVar8;
  }
  else {
    iVar8 = (int)param_1[0x13];
  }
  if ((iVar8 == 1) && (FUN_14247fd10(param_1,local_res8), (int)param_1[0x13] == 1)) {
    FUN_14247fd10(param_1,local_res8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + 0xb4);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_1 + 0xbc);
  local_e0 = 0;
  local_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(local_e8);
  piVar7 = piVar12;
  piVar14 = piVar12;
  if (0 < (int)local_d8) {
    do {
      puVar5 = (undefined8 *)FUN_142480c60(&local_f8,piVar7);
      if ((int)param_1[0x1b] == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)param_1[0x1a];
      }
      if (*(int *)(puVar5 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar5;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
      if ((iVar3 == 0) &&
         ((*(char *)((longlong)piVar14 + local_e0 + 0x58) != '\0' || ((char)param_1[0x1e] == '\0')))
         ) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (bVar1) {
        uVar10 = *(undefined1 *)((longlong)(int)piVar7 * 0x70 + 0x58 + local_e0);
        goto LAB_142492648;
      }
      uVar13 = (int)piVar7 + 1;
      piVar7 = (int *)(ulonglong)uVar13;
      piVar14 = piVar14 + 0x1c;
    } while ((int)uVar13 < (int)local_d8);
  }
  local_80 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_78 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(local_88);
  if (0 < (int)local_78) {
    pcVar6 = (char *)(local_80 + 0x58);
    do {
      if (*pcVar6 != '\0') {
        FUN_142480c60(&local_f8);
        goto LAB_1424925d9;
      }
      uVar13 = (int)piVar12 + 1;
      piVar12 = (int *)(ulonglong)uVar13;
      pcVar6 = pcVar6 + 0x70;
    } while ((int)uVar13 < (int)local_78);
  }
  local_f8 = 0;
  local_f0 = 0;
LAB_1424925d9:
  FUN_141189610(&local_80);
  plVar4 = param_1 + 0x1a;
  if (plVar4 == &local_f8) {
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    *plVar4 = local_f8;
    *(undefined4 *)(param_1 + 0x1b) = (undefined4)local_f0;
    *(undefined4 *)((longlong)param_1 + 0xdc) = local_f0._4_4_;
  }
  uVar10 = 1;
LAB_142492648:
  *(undefined1 *)(param_1 + 0x1e) = uVar10;
  if (((DAT_146af4a68 != '\0') || ((char)param_1[0x29] != '\0')) &&
     (cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  (**(code **)(*param_1 + 0x308))(param_1);
  FUN_141189610(&local_e0);
  return;
}



// FUNCTION 142492730 VerifyPathRenderingComponents body=37 status=ok
// SIG undefined VerifyPathRenderingComponents(void)

void UGameViewportClient::VerifyPathRenderingComponents(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FUN_142252eb0(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 142492760 FUN_142492760 body=84 status=ok
// SIG undefined FUN_142492760(void)

undefined1 FUN_142492760(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x1f8) != 0) && (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1f8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x1f0);
      }
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1424927c0 FUN_1424927c0 body=67 status=ok
// SIG undefined FUN_1424927c0(void)

longlong FUN_1424927c0(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd0);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142492810 FUN_142492810 body=194 status=ok
// SIG undefined FUN_142492810(void)

undefined1 FUN_142492810(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0a40(param_2,param_1 + 0xf2);
  FUN_1419e0a40(param_2,param_1 + 0xec);
  FUN_1419e0a40(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  return 0;
}



// FUNCTION 1424928e0 FUN_1424928e0 body=89 status=ok
// SIG undefined FUN_1424928e0(void)

undefined1 FUN_1424928e0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  return 0;
}



// FUNCTION 142492940 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AnalogInputCondition::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd0);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142492990 FUN_142492990 body=209 status=ok
// SIG undefined FUN_142492990(void)

undefined1 FUN_142492990(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  FUN_1419e0b60(param_2,param_1 + 0xee);
  FUN_1419e0b60(param_2,param_1 + 0xf2);
  FUN_1419e0b60(param_2,param_1 + 0xf6);
  FUN_1419e0b60(param_2,param_1 + 0xfa);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  return 0;
}



// FUNCTION 142492a70 FUN_142492a70 body=474 status=ok
// SIG undefined FUN_142492a70(void)

int * FUN_142492a70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x14);
  puVar3 = (uint *)*param_3;
  bVar9 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142492c28;
    }
  }
  cVar4 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar8 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[4] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_142492c28:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142492c50 FUN_142492c50 body=485 status=ok
// SIG undefined FUN_142492c50(void)

int * FUN_142492c50(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_res8;
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  local_res8 = (uint)local_res8._2_2_ << 0x10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x14);
  puVar3 = (uint *)*param_3;
  bVar9 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8,&local_res10);
    iVar7 = local_res8;
    bVar9 = local_res8 != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_142492e13;
    }
  }
  cVar4 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar8 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[4] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_142492e13:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142492e40 FUN_142492e40 body=384 status=ok
// SIG undefined FUN_142492e40(void)

void FUN_142492e40(ulonglong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong local_98 [2];
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar5 = 0;
  plVar6 = (longlong *)*param_1;
  uVar7 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_1[1] < plVar6) {
    uVar7 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        uVar2 = uVar5;
        local_98[0] = lVar1;
        if (*(int *)(param_2 + 8) != 0) {
          plVar3 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar3 = param_2 + 2;
          }
          if (plVar3 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar3 + 8))();
          }
        }
        (*(code *)*param_2)(uVar2,local_98);
        local_58 = 0;
        local_48 = 0;
        if (*(int *)(param_2 + 8) == 0) {
LAB_142492f20:
          local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          plVar3 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar3 = param_2 + 2;
          }
          if (plVar3 == (longlong *)0x0) goto LAB_142492f20;
          plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,local_78);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_88[0] = (code *)*param_2;
        }
        FUN_142492e40(lVar1 + 0x1a0,local_88);
      }
      plVar6 = plVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142492fc0 FUN_142492fc0 body=387 status=ok
// SIG undefined FUN_142492fc0(void)

int FUN_142492fc0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar2 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  bVar10 = *(int *)(*param_1 + 0x27c) == 0;
  lVar8 = 0;
  iVar5 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar6 = iVar5 + 1;
    if (lVar8 < lVar2) {
      piVar3 = (int *)(*param_1 + 0x27c + lVar8 * 0x280);
      do {
        if (bVar10 != (*piVar3 == 0)) break;
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        piVar3 = piVar3 + 0xa0;
      } while (lVar8 < lVar2);
    }
    iVar7 = iVar6 - iVar5;
    if (bVar10 == false) {
      if (iVar7 != 0) {
        lVar4 = (longlong)iVar5 * 0x280 + 0xe8 + *param_1;
        do {
          if (*(longlong *)(lVar4 + 0x130) != 0) {
            FMemory::Free();
          }
          FUN_1409f5970(lVar4);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + -0x10);
          if (*(longlong *)(lVar4 + -0x90) != 0) {
            FMemory::Free();
          }
          lVar4 = lVar4 + 0x280;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar9 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x280 + *param_1),
                   (void *)((longlong)iVar5 * 0x280 + *param_1),(longlong)iVar7 * 0x280);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar5 = iVar6;
    if (lVar2 <= lVar8) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}



// FUNCTION 142493150 FUN_142493150 body=393 status=ok
// SIG undefined FUN_142493150(void)

int FUN_142493150(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar2 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  bVar10 = *(int *)(*param_1 + 0x228) != *param_2;
  lVar8 = 0;
  iVar5 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar6 = iVar5 + 1;
    if (lVar8 < lVar2) {
      piVar3 = (int *)(*param_1 + 0x228 + lVar8 * 0x280);
      do {
        if (bVar10 != (*piVar3 != *param_2)) break;
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        piVar3 = piVar3 + 0xa0;
      } while (lVar8 < lVar2);
    }
    iVar7 = iVar6 - iVar5;
    if (bVar10 == false) {
      if (iVar7 != 0) {
        lVar4 = (longlong)iVar5 * 0x280 + 0xe8 + *param_1;
        do {
          if (*(longlong *)(lVar4 + 0x130) != 0) {
            FMemory::Free();
          }
          FUN_1409f5970(lVar4);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4 + -0x10);
          if (*(longlong *)(lVar4 + -0x90) != 0) {
            FMemory::Free();
          }
          lVar4 = lVar4 + 0x280;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar9 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x280 + *param_1),
                   (void *)((longlong)iVar5 * 0x280 + *param_1),(longlong)iVar7 * 0x280);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar5 = iVar6;
    if (lVar2 <= lVar8) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}



// FUNCTION 1424932e0 FUN_1424932e0 body=520 status=ok
// SIG undefined FUN_1424932e0(void)

undefined8 * FUN_1424932e0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450c5520;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapValidTexelsUAV",0
            );
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapAccumulatedDiscoveryUAV",0);
  FShaderParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODClearColor",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"FODFillTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODFillTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfa,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 1424934f0 FUN_1424934f0 body=484 status=ok
// SIG undefined FUN_1424934f0(void)

undefined8 * FUN_1424934f0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450bce60;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapAccumulatedDiscoveryUAV",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"NumFODUncoverPositions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODUncoverWorldPositions",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"RadiusPair",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 1424936e0 FUN_1424936e0 body=484 status=ok
// SIG undefined FUN_1424936e0(void)

undefined8 * FUN_1424936e0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450bce60;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapAccumulatedDiscoveryUAV",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"NumFODUncoverPositions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODUncoverWorldPositions",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"RadiusPair",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 1424938d0 FUN_1424938d0 body=484 status=ok
// SIG undefined FUN_1424938d0(void)

undefined8 * FUN_1424938d0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450bce60;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 4;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapAccumulatedDiscoveryUAV",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"NumFODUncoverPositions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODUncoverWorldPositions",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"RadiusPair",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 142493ac0 FUN_142493ac0 body=484 status=ok
// SIG undefined FUN_142493ac0(void)

undefined8 * FUN_142493ac0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450bce60;
  *(undefined4 *)(param_1 + 0x18) = 8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 8;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapAccumulatedDiscoveryUAV",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"NumFODUncoverPositions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODUncoverWorldPositions",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"RadiusPair",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 142493cb0 FUN_142493cb0 body=484 status=ok
// SIG undefined FUN_142493cb0(void)

undefined8 * FUN_142493cb0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_1450bce60;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x10;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FODTextureUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),
             L"FODChunkMapDiscoveredTexelsUAV",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapAccumulatedDiscoveryUAV",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"FODWorldPosTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"NumFODUncoverPositions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"FODUncoverWorldPositions",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"RadiusPair",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"FODTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"FODChunkMapTextureSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"FODTexelsPerChunk",0);
  return param_1;
}



// FUNCTION 142493ea0 FUN_142493ea0 body=339 status=ok
// SIG undefined FUN_142493ea0(void)

undefined8 * FUN_142493ea0(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_GetPoolName_1450c7058;
  *(undefined1 *)(param_1 + 1) = *param_2;
  *(undefined1 *)((longlong)param_1 + 9) = param_2[1];
  *(undefined1 *)((longlong)param_1 + 10) = param_2[2];
  param_1[2] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_1 + 4) = param_2[0x18];
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x24);
  param_1[6] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 10) = param_2[0x48];
  *(undefined1 *)((longlong)param_1 + 0x51) = param_2[0x49];
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xe) = param_2[0x68];
  uVar4 = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  uVar2 = *(undefined4 *)(param_2 + 0x84);
  uVar3 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x94);
  param_1[0x14] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xa8);
  uVar4 = FDelegateHandle::GenerateNewID();
  param_1[0x18] = uVar4;
  *param_1 = &PTR_GetPoolName_1450c70a0;
  return param_1;
}



// FUNCTION 142494000 FUN_142494000 body=33 status=ok
// SIG undefined FUN_142494000(void)

undefined8 * FUN_142494000(undefined8 *param_1)

{
  FUN_1428c1da0();
  *param_1 = &PTR_FUN_1450c60c0;
  return param_1;
}



// FUNCTION 142494030 FUN_142494030 body=487 status=ok
// SIG undefined FUN_142494030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142494030(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_1409f3990(param_1,param_3);
  *(undefined4 *)(param_1 + 0x22c) = param_5;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x228) = param_4;
  *(undefined4 *)(param_1 + 0x234) = 0x7f7fffff;
  uVar6 = uRam0000000146af575c;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(uint *)(param_1 + 0x24c) = uVar6;
  uVar6 = uRam0000000146af5754 & uRam0000000146af5764;
  uVar7 = uRam0000000146af5758 & uRam0000000146af5768;
  uVar8 = uRam0000000146af575c & uRam0000000146af576c;
  *(uint *)(param_1 + 0x260) = _DAT_146af5750 & _DAT_146af5760;
  *(uint *)(param_1 + 0x264) = uVar6;
  *(uint *)(param_1 + 0x268) = uVar7;
  *(uint *)(param_1 + 0x26c) = uVar8;
  *(undefined2 *)(param_1 + 0x270) = 0;
  *(bool *)(param_1 + 0x272) = *(longlong *)(param_1 + 0x40) != 0;
  *(bool *)(param_1 + 0x273) = *(longlong *)(param_1 + 0x70) != 0;
  *(bool *)(param_1 + 0x274) = *(longlong *)(param_1 + 0x78) != 0;
  *(bool *)(param_1 + 0x275) = *(longlong *)(param_1 + 0x80) != 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
LAB_142494124:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xb8);
    if (lVar3 == 0) goto LAB_142494124;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0xc0));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x276) = bVar4;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
LAB_142494165:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 200);
    if (lVar3 == 0) goto LAB_142494165;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0xd0));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x277) = bVar4;
  if ((*(int *)(param_1 + 0xe0) != 0) && (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_142494191;
    }
  }
  uVar2 = 0;
LAB_142494191:
  *(undefined1 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_142498970(param_1);
    FUN_1424982f0(param_1,param_2);
  }
  if (0.0 < *(float *)(param_1 + 0x88)) {
    *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x88) + *(float *)(param_2 + 0x8c8);
  }
  if (0.0 < *(float *)(param_1 + 0x8c)) {
    fVar5 = *(float *)(param_2 + 0x8c8);
    if (*(float *)(param_2 + 0x8c8) <= *(float *)(param_1 + 0x230)) {
      fVar5 = *(float *)(param_1 + 0x230);
    }
    *(float *)(param_1 + 0x234) = fVar5 + *(float *)(param_1 + 0x8c);
  }
  return param_1;
}



// FUNCTION 142494220 FUN_142494220 body=487 status=ok
// SIG undefined FUN_142494220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142494220(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_140a7a570(param_1,param_3);
  *(undefined4 *)(param_1 + 0x22c) = param_5;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x228) = param_4;
  *(undefined4 *)(param_1 + 0x234) = 0x7f7fffff;
  uVar6 = uRam0000000146af575c;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(uint *)(param_1 + 0x24c) = uVar6;
  uVar6 = uRam0000000146af5754 & uRam0000000146af5764;
  uVar7 = uRam0000000146af5758 & uRam0000000146af5768;
  uVar8 = uRam0000000146af575c & uRam0000000146af576c;
  *(uint *)(param_1 + 0x260) = _DAT_146af5750 & _DAT_146af5760;
  *(uint *)(param_1 + 0x264) = uVar6;
  *(uint *)(param_1 + 0x268) = uVar7;
  *(uint *)(param_1 + 0x26c) = uVar8;
  *(undefined2 *)(param_1 + 0x270) = 0;
  *(bool *)(param_1 + 0x272) = *(longlong *)(param_1 + 0x40) != 0;
  *(bool *)(param_1 + 0x273) = *(longlong *)(param_1 + 0x70) != 0;
  *(bool *)(param_1 + 0x274) = *(longlong *)(param_1 + 0x78) != 0;
  *(bool *)(param_1 + 0x275) = *(longlong *)(param_1 + 0x80) != 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
LAB_142494314:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xb8);
    if (lVar3 == 0) goto LAB_142494314;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0xc0));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x276) = bVar4;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
LAB_142494355:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 200);
    if (lVar3 == 0) goto LAB_142494355;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0xd0));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x277) = bVar4;
  if ((*(int *)(param_1 + 0xe0) != 0) && (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_142494381;
    }
  }
  uVar2 = 0;
LAB_142494381:
  *(undefined1 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_142498970(param_1);
    FUN_1424982f0(param_1,param_2);
  }
  if (0.0 < *(float *)(param_1 + 0x88)) {
    *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x88) + *(float *)(param_2 + 0x8c8);
  }
  if (0.0 < *(float *)(param_1 + 0x8c)) {
    fVar5 = *(float *)(param_2 + 0x8c8);
    if (*(float *)(param_2 + 0x8c8) <= *(float *)(param_1 + 0x230)) {
      fVar5 = *(float *)(param_1 + 0x230);
    }
    *(float *)(param_1 + 0x234) = fVar5 + *(float *)(param_1 + 0x8c);
  }
  return param_1;
}



// FUNCTION 142494410 FUN_142494410 body=392 status=ok
// SIG undefined FUN_142494410(void)

undefined1 * FUN_142494410(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1);
  }
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar2 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x50,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x50),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  param_1[0x68] = param_2[0x68];
  uVar3 = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x74) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1424945a0 FUN_1424945a0 body=696 status=ok
// SIG undefined FUN_1424945a0(void)

undefined8 * FUN_1424945a0(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 **ppuVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *local_38;
  ulonglong local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  *param_1 = 0;
  ppuVar1 = (undefined2 **)(param_1 + 0x19);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *ppuVar1 = (undefined2 *)0x0;
  param_1[0x1a] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 2;
  *(undefined4 *)(param_1 + 0x1b) = 0xd;
  fVar2 = *DAT_146af58f0;
  uVar3 = *DAT_146af58d8;
  *(uint *)(param_1 + 0x1e) = uVar3 & 0x7fffffff;
  *(float *)((longlong)param_1 + 0xf4) = ABS(fVar2);
  if (ABS(fVar2) <= 0.0) {
    *(uint *)((longlong)param_1 + 0xf4) = uVar3 & 0x7fffffff;
  }
  FUN_1424a8ea0();
  puVar5 = (undefined8 *)FUN_14167d0d0(local_18);
  if (*(int *)(puVar5 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar5;
  }
  local_38 = (undefined2 *)0x0;
  local_20 = L"GbxZoneMap/";
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (*(int *)(param_1 + 0x1a) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *ppuVar1;
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar8 = local_38;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar6);
  puVar6 = local_38;
  if ((iVar4 != 0) && (ppuVar1 != &local_38)) {
    lVar7 = (longlong)(int)local_30;
    *(int *)(param_1 + 0x1a) = (int)local_30;
    if (((int)local_30 == 0) && (*(int *)((longlong)param_1 + 0xd4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar1,local_30 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppuVar1,puVar6,lVar7 * 2);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  iVar4 = DAT_146af5878;
  lVar7 = (longlong)DAT_146af5878;
  DAT_146af5878 = DAT_146af5878 + 1;
  if (DAT_146af587c < DAT_146af5878) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af5870,iVar4);
  }
  *(undefined8 **)(DAT_146af5870 + lVar7 * 8) = param_1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 142494860 FUN_142494860 body=116 status=ok
// SIG undefined FUN_142494860(void)

undefined8 *
FUN_142494860(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5,longlong *param_6,undefined4 param_7)

{
  longlong lVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = param_4;
  lVar1 = *param_5;
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *param_6;
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_6);
  return param_1;
}



// FUNCTION 1424948e0 FUN_1424948e0 body=31 status=ok
// SIG undefined FUN_1424948e0(void)

undefined8 * FUN_1424948e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142494900 FUN_142494900 body=103 status=ok
// SIG undefined FUN_142494900(void)

char * FUN_142494900(char *param_1)

{
  char cVar1;
  
  *param_1 = '\0';
  cVar1 = *param_1;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  if (cVar1 == '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '>';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = -0x80;
    param_1[0xb] = '<';
  }
  else {
    if (cVar1 == '\x01') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = -0x40;
      param_1[7] = '>';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '=';
      return param_1;
    }
    if (cVar1 == '\x02') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '?';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '@';
      param_1[0xb] = '=';
      return param_1;
    }
    if (cVar1 == '\x03') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = -0x80;
      param_1[7] = '?';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '>';
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142494970 FUN_142494970 body=134 status=ok
// SIG undefined FUN_142494970(void)

undefined8 * FUN_142494970(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  FUN_14284de20();
  *param_1 = &PTR_FUN_1450c5588;
  param_1[5] = &PTR_LAB_1450c5860;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)((longlong)param_1 + 0xc4) = *puVar4;
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  uVar5 = (**(code **)(**(longlong **)(DAT_146ac3e00 + 0x30) + 8))();
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1b,uVar5);
  return param_1;
}



// FUNCTION 142494a00 FUN_142494a00 body=189 status=ok
// SIG undefined FUN_142494a00(void)

undefined8 * FUN_142494a00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_1450c6a38;
  *puVar1 = &PTR_FUN_1450c6cb0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f4ccccd;
  param_1[7] = 0x41700000;
  return param_1;
}



// FUNCTION 142494ac0 FUN_142494ac0 body=158 status=ok
// SIG undefined FUN_142494ac0(void)

undefined8 * FUN_142494ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_1450c5930;
  *puVar1 = &PTR_FUN_1450c5ba8;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) < 0x40) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<640,16>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 6,0x40);
  }
  return param_1;
}



// FUNCTION 142494b60 UBehaviorTree body=51 status=ok
// SIG undefined UBehaviorTree(void)

undefined8 * UBehaviorTree::UBehaviorTree(undefined8 *param_1)

{
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR__scalar_deleting_destructor__1450c5e28;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 142494ba0 FUN_142494ba0 body=68 status=ok
// SIG undefined FUN_142494ba0(void)

undefined8 * FUN_142494ba0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450c67c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 142494bf0 UMaterialExpressionShadingModel body=37 status=ok
// SIG undefined UMaterialExpressionShadingModel(void)

undefined8 * UMaterialExpressionShadingModel::UMaterialExpressionShadingModel(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_1450c6cf8;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 142494c20 UAtomProfileData body=44 status=ok
// SIG undefined UAtomProfileData(void)

undefined8 * UAtomProfileData::UAtomProfileData(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UMaterialExpression::UMaterialExpression(param_1,uVar1);
  *param_1 = &PTR_FUN_14413f3e0;
  return param_1;
}



// FUNCTION 142494c50 FUN_142494c50 body=33 status=ok
// SIG undefined FUN_142494c50(void)

undefined8 * FUN_142494c50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_14413f3e0;
  return param_1;
}



// FUNCTION 142494c80 FUN_142494c80 body=148 status=ok
// SIG undefined FUN_142494c80(void)

void FUN_142494c80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0xe8;
    do {
      if (*(longlong *)(lVar1 + 0x130) != 0) {
        FMemory::Free();
      }
      FUN_1409f5970(lVar1);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + -0x10);
      if (*(longlong *)(lVar1 + -0x90) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0x280;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142494d20 FUN_142494d20 body=487 status=ok
// SIG undefined FUN_142494d20(void)

void FUN_142494d20(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_1 + 0x48);
  uVar4 = 0;
  uVar3 = uVar4;
  plVar5 = plVar6;
  if (plVar6 <= (longlong *)(param_1 + 0x88)) {
    do {
      puVar1 = (undefined8 *)*plVar5;
      if (puVar1 != (undefined8 *)0x0) {
        FTickFunction::UnRegisterTickFunction(puVar1);
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 8);
  }
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  TlsFree(*(DWORD *)(param_1 + 8));
  plVar6 = *(longlong **)(param_1 + 0x38);
  uVar3 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x40) < plVar6) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
        ::
        ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
                  (lVar2);
        FMemory::operator_delete(lVar2,0x20);
      }
      plVar6 = plVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1c0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x148);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x000142494f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 142494f10 FUN_142494f10 body=375 status=ok
// SIG undefined FUN_142494f10(void)

void FUN_142494f10(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x9c) != '\0') {
    FUN_1424a9930();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d8);
  puVar1 = *(undefined8 **)(param_1 + 0x198);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 400);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x50);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1);
  return;
}



// FUNCTION 142495090 FUN_142495090 body=470 status=ok
// SIG undefined FUN_142495090(void)

void FUN_142495090(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  plVar2 = (longlong *)param_1[0xc];
  uVar7 = 0;
  *param_1 = &PTR_FUN_1450c6a38;
  param_1[5] = &PTR_FUN_1450c6cb0;
  for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
    lVar3 = *plVar2;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    if (0x7fffffff < *(uint *)(lVar3 + 0x14)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(lVar3 + 8,0);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    iVar4 = iVar1 + 1;
    *(int *)(param_1 + 0x10) = iVar4;
    if (*(int *)((longlong)param_1 + 0x84) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xf);
    }
    *(longlong *)(param_1[0xf] + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = param_1[0xc];
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(param_1[0xc] + 8);
    FMemory::operator_delete(param_1[0xc],0x18);
    param_1[0xc] = lVar3;
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  (**(code **)(param_1[0xb] + 8))(param_1 + 0xb,0);
  uVar8 = uVar7;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      lVar3 = *(longlong *)(uVar8 + param_1[0xf]);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 8) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar3,0x18);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  ppuVar5 = &PTR__scalar_deleting_destructor__143fc4528;
  param_1[0xb] = &PTR__scalar_deleting_destructor__143fc4528;
  if (param_1[0xc] != 0) {
    do {
      lVar3 = *(longlong *)(param_1[0xc] + 8);
      FMemory::operator_delete(param_1[0xc],0x18);
      param_1[0xc] = lVar3;
    } while (lVar3 != 0);
    ppuVar5 = (undefined **)param_1[0xb];
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  (*(code *)ppuVar5[1])(param_1 + 0xb,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 5);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142495270 FUN_142495270 body=399 status=ok
// SIG undefined FUN_142495270(void)

longlong * FUN_142495270(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x28) << 3,(longlong)*(int *)(param_2 + 0x2c) << 3
            );
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x28);
  }
  else {
    local_res8[0] = 0;
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (*(int *)(param_2 + 0x2c) != local_res8[0]) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                  (param_2,local_res8[0]);
      }
      iVar5 = 0;
      if (0 < local_res8[0]) {
        do {
          iVar2 = *(int *)(param_2 + 0x28);
          *(int *)(param_2 + 0x28) = iVar2 + 1;
          if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
            TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
            ResizeGrow(param_2,iVar2);
          }
          lVar4 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar4 = param_2;
          }
          (**(code **)(*param_1 + 0x30))(param_1,lVar4 + (longlong)iVar2 * 8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_res8[0]);
      }
      return param_1;
    }
    iVar5 = 0;
    *(int *)(param_2 + 0x28) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        (**(code **)(*param_1 + 0x30))(param_1,lVar4 + (longlong)iVar5 * 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x28));
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 142495400 FUN_142495400 body=37 status=ok
// SIG undefined FUN_142495400(void)

longlong FUN_142495400(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))(*(longlong **)(param_1 + 0x90),param_2,0,0);
  return param_1;
}



// FUNCTION 142495430 FUN_142495430 body=443 status=ok
// SIG undefined FUN_142495430(void)

void FUN_142495430(int *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  short *psVar11;
  short *local_28;
  int local_20;
  
  if (*param_1 == 2) {
    FUN_141ec6070(0);
  }
  else if (*param_1 == 1) {
    FRHICommandListExecutor::LatchBypass(&DAT_146ab6e68);
  }
  DAT_1464aaa90 = DAT_1464aaa90 + 1;
  FString::PrintfImpl(&local_28,L"Frame %d");
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa744);
  uVar4 = DAT_1464aa73c;
  lVar5 = -1;
  psVar11 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar11 = local_28;
  }
  do {
    lVar3 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (psVar11[lVar3] != 0);
  iVar2 = (int)lVar5 * 2;
  lVar5 = (longlong)(iVar2 + 2);
  uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar6 = lVar5 + uVar10;
  if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar2 + 4);
    uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar6 = lVar5 + uVar10;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar6;
  lVar5 = uVar10 - (longlong)psVar11;
  do {
    sVar1 = *psVar11;
    *(short *)(lVar5 + (longlong)psVar11) = sVar1;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f3ede8;
  puVar9[2] = uVar10;
  *(undefined4 *)(puVar9 + 3) = uVar4;
  uVar8 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::BeginFrame(uVar8,param_2);
  FRHICommandList::BeginFrame(param_2);
  if (*param_1 == 1) {
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af220);
  }
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424955f0 FUN_1424955f0 body=219 status=ok
// SIG undefined FUN_1424955f0(void)

void FUN_1424955f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  uVar5 = 0;
  lVar7 = *(longlong *)(*param_1 + 0x800);
  if (lVar7 == 0) {
    lVar7 = *param_1;
  }
  piVar3 = (int *)((longlong)param_2 * 0x20 + lVar7);
  piVar6 = *(int **)(piVar3 + 4);
  if (*(int **)(piVar3 + 4) == (int *)0x0) {
    piVar6 = piVar3;
  }
  uVar4 = (longlong)piVar3[6] & 0x3fffffffffffffff;
  if (piVar6 + piVar3[6] < piVar6) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[1] + 0x108) + (longlong)*piVar6 * 0x14;
      lVar1 = FWeakObjectPtr::Get(lVar7);
      LOCK();
      *(undefined4 *)(lVar1 + 0x2c8) = 0xffffffff;
      UNLOCK();
      uVar2 = FWeakObjectPtr::Get(lVar7);
      FUN_14239b420(uVar2,*(undefined4 *)(lVar7 + 8),*(undefined1 *)(lVar7 + 0xc),0);
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 1424956d0 FUN_1424956d0 body=679 status=ok
// SIG undefined FUN_1424956d0(void)

void FUN_1424956d0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  if (param_2 != 0) {
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *param_1;
      uVar1 = *(undefined1 *)(lVar5 + 0xd9);
      *(undefined1 *)(lVar5 + 0xd9) = 0;
      lVar7 = *param_1;
      LOCK();
      iVar4 = *(int *)(param_2 + 0x2c8);
      if (iVar4 == 0) {
        *(int *)(param_2 + 0x2c8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if ((iVar4 < 0) || (*(int *)(lVar7 + 0x110) <= iVar4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        cVar2 = *(char *)(lVar7 + 0x119);
        if (cVar2 == '\0') {
          *(undefined1 *)(lVar7 + 0x119) = 1;
        }
        FUN_1424a7060(lVar7,iVar4);
        *(char *)(lVar7 + 0x119) = cVar2;
      }
      *(undefined1 *)(lVar5 + 0xd9) = uVar1;
      lVar5 = *param_1;
      uVar1 = *(undefined1 *)(lVar5 + 0x119);
      *(undefined1 *)(lVar5 + 0x119) = 0;
      FWeakObjectPtr::operator=(&local_res20,param_2);
      lVar7 = *param_1;
      local_78 = local_res20;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(lVar7 + 0x148,local_res10,&local_78);
      if (((local_res10[0] != -1) &&
          (lVar7 = *(longlong *)(lVar7 + 0x148) + (longlong)local_res10[0] * 0x14, lVar7 != 0)) &&
         (puVar6 = (undefined1 *)(lVar7 + 8), puVar6 != (undefined1 *)0x0)) {
        if ((*(byte *)(param_2 + 0xb8) & 4) != 0) {
          FUN_142396370(param_2,*puVar6);
        }
        FWeakObjectPtr::operator=(&local_70,param_2);
        local_68 = local_70;
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::Remove(*param_1 + 0x148,&local_68);
      }
      lVar7 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FWeakObjectPtr::operator=(&local_60,param_2);
        lVar7 = *param_1;
        local_58 = local_60;
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::FindId(lVar7 + 0x1c0,local_res18,&local_58);
        if (((local_res18[0] != -1) &&
            (lVar7 = *(longlong *)(lVar7 + 0x1c0) + (longlong)local_res18[0] * 0x14, lVar7 != 0)) &&
           ((undefined1 *)(lVar7 + 8) != (undefined1 *)0x0)) {
          FUN_1426ce440(param_2,param_2 + 0x728 + (longlong)*(int *)(param_2 + 0x770) * 0x10,
                        *(undefined1 *)(lVar7 + 8),*(undefined1 *)(lVar7 + 9),0);
          FWeakObjectPtr::operator=(&local_50,param_2);
          local_48[0] = local_50;
          TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::Remove(*param_1 + 0x1c0,local_48);
        }
      }
      *(undefined1 *)(lVar5 + 0x119) = uVar1;
    }
  }
  return;
}



// FUNCTION 142495980 FUN_142495980 body=205 status=ok
// SIG undefined FUN_142495980(void)

void FUN_142495980(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *local_res8;
  
  lVar1 = *param_1;
  iVar4 = 0;
  if (0 < *(int *)(lVar1 + 0x90)) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + *(longlong *)(lVar1 + 0x88));
      if (*(int *)((longlong)plVar2 + 0xc) == 3) {
        FUN_14249cc90(plVar2,param_2);
      }
      else {
        if ((DAT_146ab62f7 == '\0') && (*(int *)((longlong)plVar2 + 0xc) != 5)) {
          if (DAT_1464aaa90 - *(int *)((longlong)plVar2 + 0x3c) < *(int *)(DAT_146af5920 + 4))
          goto LAB_142495a28;
          local_res8 = plVar2;
          TArray<FName,FDefaultAllocator>::Remove(*plVar2 + 0x88,&local_res8);
          LOCK();
          *(int *)(*plVar2 + 0x98) = *(int *)(*plVar2 + 0x98) + -1;
          UNLOCK();
          *(undefined4 *)((longlong)plVar2 + 0xc) = 5;
        }
        FUN_1424a8f40(plVar2,param_2);
      }
LAB_142495a28:
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(lVar1 + 0x90));
  }
  return;
}



// FUNCTION 142495a50 FUN_142495a50 body=237 status=ok
// SIG undefined FUN_142495a50(void)

void FUN_142495a50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x9d) != '\0') {
    *(undefined4 *)(lVar1 + 0x90) = 0;
    if (*(int *)(lVar1 + 0x94) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x88,0);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1,0);
    TRefCountPtr<FRHITexture>::operator=(lVar1 + 0x10,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 8,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x18,0);
    TRefCountPtr<FRHITexture>::operator=(lVar1 + 0x28,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x20,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x30,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x38,0);
    TRefCountPtr<FRHITexture>::operator=(lVar1 + 0x40,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x48,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x50,0);
    TRefCountPtr<FRHITexture>::operator=(lVar1 + 0x58,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x60,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x68,0);
    TRefCountPtr<FRHITexture>::operator=(lVar1 + 0x70,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x78,0);
    *(undefined1 *)(lVar1 + 0x9d) = 0;
  }
  return;
}



// FUNCTION 142495b40 FUN_142495b40 body=485 status=ok
// SIG undefined FUN_142495b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142495b40(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  undefined1 local_28 [16];
  
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x14);
  local_28._0_12_ = *(undefined1 (*) [12])(param_1 + 1);
  if ((DAT_146ab62f7 == '\0') && (plVar1 = (longlong *)*param_1, *plVar1 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af6350) &&
       (_Init_thread_header(&DAT_146af6350), DAT_146af6350 == -1)) {
      DAT_146af6340 = (undefined1 (*) [16])0x0;
      _DAT_146af6348 = 0;
      atexit((_func_5014 *)&LAB_143eae8f0);
      _Init_thread_footer(&DAT_146af6350);
    }
    if (DAT_146af6348 == 0) {
      _DAT_146af6348 = CONCAT44(DAT_146af634c,0x40);
      if (DAT_146af634c < 0x40) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146af6340);
      }
      _guard_xfg_dispatch_icall_nop(DAT_146af6340,0,0x400);
    }
    auVar2._12_4_ = 0;
    auVar2._0_12_ = local_28._0_12_;
    *DAT_146af6340 = auVar2;
    local_28._0_12_ = ZEXT812(0x146af6360);
    local_28._12_4_ = 0;
    lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,local_res8,local_28);
    puVar6 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar6 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    puVar5 = puVar6 + 2;
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    FUN_14249b6f0(*puVar5,param_2,plVar1,uVar3,DAT_146af6348,DAT_146af6340);
  }
  return;
}



// FUNCTION 142495d30 FUN_142495d30 body=160 status=ok
// SIG undefined FUN_142495d30(void)

void FUN_142495d30(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 1) {
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af238);
  }
  FRHICommandList::EndFrame(param_2);
  uVar1 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::EndFrame(uVar1,param_2);
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f3edf8;
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar3);
  return;
}



// FUNCTION 142495dd0 FUN_142495dd0 body=362 status=ok
// SIG undefined FUN_142495dd0(void)

void FUN_142495dd0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  float local_38 [4];
  
  cVar1 = *(char *)(param_1 + 1);
  plVar2 = (longlong *)*param_1;
  if (DAT_146ab62f7 == '\0') {
    local_38[0] = 22445.656;
    local_38[1] = 1.4013e-45;
    local_38[2] = 0.0;
    lVar6 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,&local_res8,local_38);
    plVar7 = (longlong *)0x0;
    if ((int)local_res8 != -1) {
      plVar7 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar6 + 0x38));
    }
    local_res18[0] = 0;
    local_res8 = 0;
    plVar8 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar6 = *plVar8;
    lVar3 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x60);
    FUN_1424accd0(lVar6,param_2,plVar2);
    local_38[1] = 0.0;
    local_38[2] = 0.0;
    local_38[3] = 0.0;
    iVar5 = 0xff;
    if (cVar1 != '\0') {
      iVar5 = 0;
    }
    local_38[0] = (float)iVar5 * 0.003921569;
    FUN_141a120e0(param_2,uVar4,lVar6 + 0xe8,local_38,0);
    DispatchComputeShader
              (param_2,lVar6,*(undefined4 *)(*plVar2 + 0x60),*(undefined4 *)(*plVar2 + 100),1);
    FUN_1424af8a0(lVar6,param_2,plVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 142495f40 FUN_142495f40 body=1524 status=ok
// SIG undefined FUN_142495f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142495f40(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
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
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c [20];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
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
  
  lVar11 = *param_1;
  puVar12 = (undefined8 *)register0x00000020;
  if (*(char *)(lVar11 + 0x68) != '\0') {
    local_108 = *(undefined8 *)param_2;
    uStack_100 = *(undefined8 *)(param_2 + 2);
    lVar11 = FQuat::Euler(&local_108,local_11c);
    local_120 = *(undefined4 *)(lVar11 + 8);
    local_128 = 0;
    puVar12 = (undefined8 *)FQuat::MakeFromEuler(local_f8,&local_128);
    uVar9 = puVar12[1];
    *(undefined8 *)param_2 = *puVar12;
    *(undefined8 *)(param_2 + 2) = uVar9;
    lVar11 = *param_1;
  }
  fVar32 = fRam0000000146af5848;
  fVar31 = fRam0000000146af5844;
  fVar23 = _DAT_146af5840;
  fVar53 = fRam0000000146af5758;
  fVar52 = fRam0000000146af5754;
  fVar51 = _DAT_146af5750;
  auVar13 = *(undefined1 (*) [16])(lVar11 + 0x30);
  fVar20 = auVar13._0_4_;
  fVar22 = auVar13._4_4_;
  fVar1 = auVar13._8_4_;
  fVar3 = auVar13._12_4_;
  auVar14 = *(undefined1 (*) [16])(param_2 + 8);
  fVar21 = auVar14._0_4_;
  fVar24 = auVar14._4_4_;
  fVar2 = auVar14._8_4_;
  fVar4 = auVar14._12_4_;
  auVar13 = minps(auVar13,auVar14);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146af5844);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146af5840);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146af5848);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146af584c);
  iVar10 = movmskps((int)puVar12,auVar14);
  if (iVar10 == 0) {
    fVar51 = *param_2;
    fVar52 = param_2[1];
    fVar53 = param_2[2];
    fVar23 = param_2[3];
    fVar31 = *(float *)(lVar11 + 0x10);
    fVar32 = *(float *)(lVar11 + 0x14);
    fVar33 = *(float *)(lVar11 + 0x18);
    fVar34 = *(float *)(lVar11 + 0x1c);
    fVar6 = param_2[4];
    fVar16 = param_2[5];
    fVar7 = param_2[6];
    fVar8 = param_2[7];
    fVar19 = fVar33 * fVar51 * fRam0000000146af5804;
    fVar28 = fVar32 * fVar51 * fRam0000000146af5808;
    fVar30 = fVar31 * fVar51 * fRam0000000146af580c;
    fVar25 = fVar52 * fVar34 * fRam0000000146af57f4;
    fVar18 = fVar52 * fVar31 * fRam0000000146af57f8;
    fVar29 = fVar52 * fVar32 * fRam0000000146af57fc;
    fVar15 = fVar53 * fVar31 * fRam0000000146af57e4;
    fVar26 = fVar53 * fVar34 * fRam0000000146af57e8;
    fVar27 = fVar53 * fVar33 * fRam0000000146af57ec;
    *(float *)(lVar11 + 0x240) =
         fVar34 * fVar51 * _DAT_146af5800 + fVar23 * fVar31 + fVar52 * fVar33 * _DAT_146af57f0 +
         fVar53 * fVar32 * _DAT_146af57e0;
    *(float *)(lVar11 + 0x244) = fVar19 + fVar23 * fVar32 + fVar25 + fVar15;
    *(float *)(lVar11 + 0x248) = fVar28 + fVar23 * fVar33 + fVar18 + fVar26;
    *(float *)(lVar11 + 0x24c) = fVar30 + fVar23 * fVar34 + fVar29 + fVar27;
    fVar31 = fVar21 * *(float *)(lVar11 + 0x20);
    fVar32 = fVar24 * *(float *)(lVar11 + 0x24);
    fVar33 = fVar2 * *(float *)(lVar11 + 0x28);
    fVar34 = fVar4 * *(float *)(lVar11 + 0x2c);
    *(float *)(lVar11 + 0x260) = fVar20 * fVar21;
    *(float *)(lVar11 + 0x264) = fVar22 * fVar24;
    *(float *)(lVar11 + 0x268) = fVar1 * fVar2;
    *(float *)(lVar11 + 0x26c) = fVar3 * fVar4;
    fVar20 = fVar33 * fVar52 - fVar32 * fVar53;
    fVar21 = fVar31 * fVar53 - fVar33 * fVar51;
    fVar22 = fVar32 * fVar51 - fVar31 * fVar52;
    fVar24 = fVar34 * fVar23 - fVar34 * fVar23;
    fVar20 = fVar20 + fVar20;
    fVar21 = fVar21 + fVar21;
    fVar22 = fVar22 + fVar22;
    fVar24 = fVar24 + fVar24;
    *(float *)(lVar11 + 0x250) =
         (fVar22 * fVar52 - fVar21 * fVar53) + fVar23 * fVar20 + fVar31 + fVar6;
    *(float *)(lVar11 + 0x254) =
         (fVar20 * fVar53 - fVar22 * fVar51) + fVar23 * fVar21 + fVar32 + fVar16;
    *(float *)(lVar11 + 600) =
         (fVar21 * fVar51 - fVar20 * fVar52) + fVar23 * fVar22 + fVar33 + fVar7;
    *(float *)(lVar11 + 0x25c) =
         (fVar24 * fVar23 - fVar24 * fVar23) + fVar23 * fVar24 + fVar34 + fVar8;
  }
  else {
    fVar33 = *param_2;
    fVar34 = param_2[1];
    fVar6 = param_2[2];
    fVar16 = param_2[3];
    fVar25 = fVar34 + fVar34;
    fVar27 = fVar6 + fVar6;
    fVar7 = param_2[4];
    fVar8 = param_2[5];
    fVar15 = param_2[6];
    fVar29 = fVar33 * (fVar33 + fVar33);
    fVar26 = (fVar33 + fVar33) * fVar16;
    fVar48 = (fVar27 * fVar16 + fVar25 * fVar33) * fVar21;
    fVar49 = (fVar26 + fVar27 * fVar34) * fVar24;
    fVar50 = (fVar25 * fVar16 + fVar27 * fVar33) * fVar2;
    fVar35 = fVar24 * (fVar25 * fVar33 - fVar27 * fVar16);
    fVar38 = fVar2 * (fVar27 * fVar34 - fVar26);
    fVar41 = fVar21 * (fVar27 * fVar33 - fVar25 * fVar16);
    fVar26 = (float)((uint)((_DAT_146af5750 - (fVar6 * fVar27 + fVar34 * fVar25)) * fVar21) &
                    _DAT_146af5760);
    fVar27 = (float)((uint)((fRam0000000146af5754 - (fVar6 * fVar27 + fVar29)) * fVar24) &
                    uRam0000000146af5764);
    fVar18 = (float)((uint)((fRam0000000146af5758 - (fVar34 * fVar25 + fVar29)) * fVar2) &
                    uRam0000000146af5768);
    fVar19 = (float)((uint)((fRam0000000146af575c - (fVar29 + fVar29)) * fVar4) &
                    uRam0000000146af576c);
    fVar33 = *(float *)(lVar11 + 0x10);
    fVar34 = *(float *)(lVar11 + 0x14);
    fVar6 = *(float *)(lVar11 + 0x18);
    fVar16 = *(float *)(lVar11 + 0x1c);
    fVar29 = fVar34 + fVar34;
    fVar28 = fVar6 + fVar6;
    fVar30 = fVar33 * (fVar33 + fVar33);
    fVar25 = (fVar33 + fVar33) * fVar16;
    fVar45 = (fVar28 * fVar16 + fVar29 * fVar33) * fVar20;
    fVar46 = (fVar25 + fVar28 * fVar34) * fVar22;
    fVar47 = (fVar29 * fVar16 + fVar28 * fVar33) * fVar1;
    fVar36 = fVar22 * (fVar29 * fVar33 - fVar28 * fVar16);
    fVar39 = fVar1 * (fVar28 * fVar34 - fVar25);
    fVar42 = fVar20 * (fVar28 * fVar33 - fVar29 * fVar16);
    fVar16 = (float)((uint)((_DAT_146af5750 - (fVar6 * fVar28 + fVar34 * fVar29)) * fVar20) &
                    _DAT_146af5760);
    fVar25 = (float)((uint)((fRam0000000146af5754 - (fVar6 * fVar28 + fVar30)) * fVar22) &
                    uRam0000000146af5764);
    fVar29 = (float)((uint)((fRam0000000146af5758 - (fVar34 * fVar29 + fVar30)) * fVar1) &
                    uRam0000000146af5768);
    fVar28 = (float)((uint)((fRam0000000146af575c - (fVar30 + fVar30)) * fVar3) &
                    uRam0000000146af576c);
    fVar33 = *(float *)(lVar11 + 0x20);
    fVar34 = *(float *)(lVar11 + 0x24);
    fVar6 = *(float *)(lVar11 + 0x28);
    local_e8 = fVar45 * fVar35 + fVar16 * fVar26 + fVar42 * fVar50 + fVar28 * fVar7;
    fStack_e4 = fVar45 * fVar27 + fVar16 * fVar48 + fVar42 * fVar38 + fVar28 * fVar8;
    fStack_e0 = fVar45 * fVar49 + fVar16 * fVar41 + fVar42 * fVar18 + fVar28 * fVar15;
    fStack_dc = fVar45 * fVar19 + fVar16 * fVar19 + fVar42 * fVar19 + fVar28 * fRam0000000146af575c;
    local_d8 = fVar25 * fVar35 + fVar36 * fVar26 + fVar46 * fVar50 + fVar28 * fVar7;
    fStack_d4 = fVar25 * fVar27 + fVar36 * fVar48 + fVar46 * fVar38 + fVar28 * fVar8;
    fStack_d0 = fVar25 * fVar49 + fVar36 * fVar41 + fVar46 * fVar18 + fVar28 * fVar15;
    fStack_cc = fVar25 * fVar19 + fVar36 * fVar19 + fVar46 * fVar19 + fVar28 * fRam0000000146af575c;
    local_c8 = fVar39 * fVar35 + fVar47 * fVar26 + fVar29 * fVar50 + fVar28 * fVar7;
    fStack_c4 = fVar39 * fVar27 + fVar47 * fVar48 + fVar29 * fVar38 + fVar28 * fVar8;
    fStack_c0 = fVar39 * fVar49 + fVar47 * fVar41 + fVar29 * fVar18 + fVar28 * fVar15;
    fStack_bc = fVar39 * fVar19 + fVar47 * fVar19 + fVar29 * fVar19 + fVar28 * fRam0000000146af575c;
    local_b8 = fVar34 * fVar35 + fVar33 * fVar26 + fVar6 * fVar50 + fRam0000000146af575c * fVar7;
    fStack_b4 = fVar34 * fVar27 + fVar33 * fVar48 + fVar6 * fVar38 + fRam0000000146af575c * fVar8;
    fStack_b0 = fVar34 * fVar49 + fVar33 * fVar41 + fVar6 * fVar18 + fRam0000000146af575c * fVar15;
    fStack_ac = fVar34 * fVar19 + fVar33 * fVar19 + fVar6 * fVar19 +
                fRam0000000146af575c * fRam0000000146af575c;
    FMatrix::RemoveScaling(&local_e8);
    fVar51 = (float)(-(uint)(fVar23 <= fVar21 * fVar20) & (_DAT_146af5830 ^ (uint)fVar51) ^
                    _DAT_146af5830);
    fVar52 = (float)(-(uint)(fVar31 <= fVar24 * fVar22) & (uRam0000000146af5834 ^ (uint)fVar52) ^
                    uRam0000000146af5834);
    fVar53 = (float)(-(uint)(fVar32 <= fVar2 * fVar1) & (uRam0000000146af5838 ^ (uint)fVar53) ^
                    uRam0000000146af5838);
    local_e8 = local_e8 * fVar51;
    fStack_e4 = fStack_e4 * fVar51;
    fStack_e0 = fStack_e0 * fVar51;
    fStack_d4 = fStack_d4 * fVar52;
    fStack_d0 = fStack_d0 * fVar52;
    local_d8 = local_d8 * fVar52;
    fStack_c4 = fStack_c4 * fVar53;
    fStack_c0 = fStack_c0 * fVar53;
    local_c8 = local_c8 * fVar53;
    FQuat::FQuat(&local_108,&local_e8);
    auVar17._0_4_ = (float)local_108 * (float)local_108 + (float)uStack_100 * (float)uStack_100;
    auVar17._4_4_ = local_108._4_4_ * local_108._4_4_ + uStack_100._4_4_ * uStack_100._4_4_;
    auVar17._8_4_ = (float)uStack_100 * (float)uStack_100 + (float)local_108 * (float)local_108;
    auVar17._12_4_ = uStack_100._4_4_ * uStack_100._4_4_ + local_108._4_4_ * local_108._4_4_;
    fVar31 = auVar17._4_4_ + auVar17._0_4_;
    fVar32 = auVar17._8_4_ + auVar17._4_4_;
    fVar33 = auVar17._12_4_ + auVar17._8_4_;
    fVar34 = auVar17._0_4_ + auVar17._12_4_;
    auVar5._4_4_ = fVar32;
    auVar5._0_4_ = fVar31;
    auVar5._8_4_ = fVar33;
    auVar5._12_4_ = fVar34;
    auVar13 = rsqrtps(auVar17,auVar5);
    fVar51 = auVar13._0_4_;
    fVar52 = auVar13._4_4_;
    fVar53 = auVar13._8_4_;
    fVar23 = auVar13._12_4_;
    fVar51 = (_DAT_146af5820 - fVar51 * fVar51 * fVar31 * _DAT_146af5820) * fVar51 + fVar51;
    fVar52 = (fRam0000000146af5824 - fVar52 * fVar52 * fVar32 * fRam0000000146af5824) * fVar52 +
             fVar52;
    fVar53 = (fRam0000000146af5828 - fVar53 * fVar53 * fVar33 * fRam0000000146af5828) * fVar53 +
             fVar53;
    fVar23 = (fRam0000000146af582c - fVar23 * fVar23 * fVar34 * fRam0000000146af582c) * fVar23 +
             fVar23;
    auVar13._4_4_ = fStack_b4;
    auVar13._0_4_ = local_b8;
    auVar13._8_4_ = fStack_b0;
    uVar37 = ((uint)(((_DAT_146af5820 - fVar51 * fVar51 * fVar31 * _DAT_146af5820) * fVar51 + fVar51
                     ) * (float)local_108) ^ _DAT_146af5810) & -(uint)(1e-08 <= fVar31) ^
             _DAT_146af5810;
    uVar40 = ((uint)(((fRam0000000146af5824 - fVar52 * fVar52 * fVar32 * fRam0000000146af5824) *
                      fVar52 + fVar52) * local_108._4_4_) ^ uRam0000000146af5814) &
             -(uint)(1e-08 <= fVar32) ^ uRam0000000146af5814;
    uVar43 = ((uint)(((fRam0000000146af5828 - fVar53 * fVar53 * fVar33 * fRam0000000146af5828) *
                      fVar53 + fVar53) * (float)uStack_100) ^ uRam0000000146af5818) &
             -(uint)(1e-08 <= fVar33) ^ uRam0000000146af5818;
    uVar44 = ((uint)(((fRam0000000146af582c - fVar23 * fVar23 * fVar34 * fRam0000000146af582c) *
                      fVar23 + fVar23) * uStack_100._4_4_) ^ uRam0000000146af581c) &
             -(uint)(1e-08 <= fVar34) ^ uRam0000000146af581c;
    *(float *)(lVar11 + 0x260) = fVar21 * fVar20;
    *(float *)(lVar11 + 0x264) = fVar24 * fVar22;
    *(float *)(lVar11 + 0x268) = fVar2 * fVar1;
    *(float *)(lVar11 + 0x26c) = fVar4 * fVar3;
    auVar13._12_4_ = 0;
    *(undefined1 (*) [16])(lVar11 + 0x250) = auVar13;
    *(uint *)(lVar11 + 0x240) = uVar37;
    *(uint *)(lVar11 + 0x244) = uVar40;
    *(uint *)(lVar11 + 0x248) = uVar43;
    *(uint *)(lVar11 + 0x24c) = uVar44;
  }
  *(undefined1 *)(*param_1 + 0x270) = 1;
  return;
}



// FUNCTION 142496540 FUN_142496540 body=1333 status=ok
// SIG undefined FUN_142496540(void)

void FUN_142496540(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  uint local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  uint local_res20;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  uint *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *(undefined4 *)(param_1 + 1) = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (param_1 + 2 != param_1 + 0x12) {
    piVar7 = (int *)((longlong)param_1 + 0x1c);
    do {
      piVar7[-1] = 0;
      if ((*piVar7 < 0) && (*piVar7 != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar7 + -3,0);
      }
      plVar16 = (longlong *)(piVar7 + 1);
      piVar7 = piVar7 + 4;
    } while (plVar16 != param_1 + 0x12);
  }
  uVar9 = *(uint *)(param_2 + 5);
  local_a8 = (uint *)(param_2 + 2);
  local_f0 = 0;
  uStack_ec = 1;
  local_e0._4_4_ = 0;
  uStack_d8 = 0;
  if (uVar9 != 0) {
    puVar17 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar17 = local_a8;
    }
    uVar12 = *puVar17;
    uStack_d8 = 0;
    local_f0 = 0;
    while (uVar12 == 0) {
      lVar13 = (longlong)local_f0;
      uStack_d8 = uStack_d8 + 0x20;
      iVar8 = local_f0 + 1;
      bVar3 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f0;
      local_f0 = iVar8;
      if (bVar3) goto LAB_14249666f;
      uVar12 = puVar17[lVar13 + 1];
    }
    uStack_ec = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_e0._4_4_ = (uStack_d8 - iVar8) + 0x1f;
    if ((int)uVar9 < (int)local_e0._4_4_) {
LAB_14249666f:
      local_e0._4_4_ = uVar9;
    }
  }
  uStack_90 = CONCAT44(uStack_ec,local_f0);
  uVar12 = *(uint *)(param_2 + 5);
  uStack_80 = 0xffffffff;
  uStack_7c = local_e0._4_4_;
  local_78 = CONCAT44(uStack_d4,uStack_d8);
  uStack_ec = 1 << ((byte)uVar12 & 0x1f);
  local_f0 = (int)uVar12 >> 5;
  local_e0._0_4_ = -1 << ((byte)uVar12 & 0x1f);
  uStack_d8 = uVar12 & 0xffffffe0;
  local_e0._4_4_ = uVar12;
  if (uVar12 != uVar9) {
    puVar17 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar17 = local_a8;
    }
    uVar12 = puVar17[local_f0] & (uint)local_e0;
    while (uVar12 == 0) {
      lVar13 = (longlong)local_f0;
      uStack_d8 = uStack_d8 + 0x20;
      iVar8 = local_f0 + 1;
      bVar3 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f0;
      local_f0 = iVar8;
      if (bVar3) goto LAB_14249675f;
      uVar12 = puVar17[lVar13 + 1];
      local_e0._0_4_ = 0xffffffff;
    }
    uStack_ec = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_e0._4_4_ = (uStack_d8 - iVar8) + 0x1f;
    if ((int)uVar9 < (int)local_e0._4_4_) {
LAB_14249675f:
      local_e0._4_4_ = uVar9;
    }
  }
  uVar9 = uStack_ec;
  iVar8 = local_f0;
  uStack_68 = CONCAT44(uStack_ec,local_f0);
  uStack_58 = CONCAT44(local_e0._4_4_,(uint)local_e0);
  uStack_50 = CONCAT44(uStack_d4,uStack_d8);
  local_70._0_4_ = SUB84(param_2,0);
  local_70._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_f0 = (undefined4)local_70;
  uStack_ec = local_70._4_4_;
  uStack_e8 = CONCAT44(uVar9,iVar8);
  uStack_d8 = (uint)local_e0;
  uStack_d4 = local_e0._4_4_;
  local_res20 = local_e0._4_4_;
  local_a0 = param_2;
  local_98 = param_2;
  local_88 = local_a8;
  local_70 = param_2;
  puStack_60 = local_a8;
  local_e0 = local_a8;
  do {
    if (((uStack_7c == local_res20) && (local_88 == local_a8)) && (local_98 == local_a0)) {
      return;
    }
    puVar10 = (undefined4 *)((longlong)(int)uStack_7c * 0x10 + *local_98);
    local_f8 = *puVar10;
    local_f4 = puVar10[1];
    cVar4 = FWeakObjectPtr::IsValid(&local_f8);
    if (cVar4 != '\0') {
      lVar13 = FWeakObjectPtr::Get(&local_f8);
      if (*(char *)(lVar13 + 0x3f) != '\0') {
        lVar13 = FWeakObjectPtr::Get(&local_f8);
        lVar13 = AActor::GetLevel(*(undefined8 *)(lVar13 + 0x118));
        plVar14 = (longlong *)*param_3;
        plVar16 = plVar14 + (int)param_3[1];
        if (plVar14 != plVar16) {
LAB_142496824:
          if (*plVar14 != lVar13) break;
          plVar16 = param_1 + 0x12;
          *(undefined4 *)(param_1 + 0x13) = 0;
          if ((*(int *)((longlong)param_1 + 0x9c) < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0))
          {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar16,0);
          }
          lVar13 = FWeakObjectPtr::Get(&local_f8);
          local_res8[0] = (uint)*(byte *)(lVar13 + 0x38);
          lVar5 = FWeakObjectPtr::Get(&local_f8);
          lVar13 = *(longlong *)(lVar5 + 0x50);
          lVar5 = (longlong)*(int *)(lVar5 + 0x58) * 0x10 + lVar13;
          local_c0 = lVar5;
          if (lVar13 != lVar5) {
            do {
              cVar4 = FWeakObjectPtr::IsValid(lVar13,1,0);
              if (((cVar4 != '\0') && (lVar1 = *(longlong *)(lVar13 + 8), lVar1 != 0)) &&
                 ((*(char *)(lVar1 + 0xd) != '\0' && (*(char *)(lVar1 + 0xf) != '\0')))) {
                plVar11 = (longlong *)*plVar16;
                iVar8 = (int)param_1[0x13];
                plVar14 = plVar11 + iVar8;
                for (; plVar11 != plVar14; plVar11 = plVar11 + 1) {
                  if (*plVar11 == lVar1) goto LAB_1424969e1;
                }
                *(int *)(param_1 + 0x13) = iVar8 + 1;
                if (*(int *)((longlong)param_1 + 0x9c) < iVar8 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16);
                }
                *(longlong *)((longlong)iVar8 * 8 + *plVar16) = lVar1;
                uVar9 = (uint)*(byte *)(lVar1 + 8);
                if ((int)(uint)*(byte *)(lVar1 + 8) <= (int)local_res8[0]) {
                  uVar9 = local_res8[0];
                }
                local_res8[0] = uVar9;
                uVar6 = FWeakObjectPtr::Get(lVar13);
                FWeakObjectPtr::operator=(&local_c8,uVar6);
                piVar7 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                ::FindId(local_res10,local_b8,local_b0);
                if (*piVar7 != -1) {
                  lVar2 = *param_1;
                  lVar5 = param_1[1];
                  for (lVar15 = lVar2; lVar15 != lVar2 + (longlong)(int)lVar5 * 8;
                      lVar15 = lVar15 + 8) {
                    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                      (lVar15,&local_c8);
                    if (cVar4 != '\0') {
                      lVar5 = local_c0;
                      if ((int)(lVar15 - lVar2 >> 3) != -1) goto LAB_1424969ce;
                      break;
                    }
                  }
                  iVar8 = (int)param_1[1];
                  *(int *)(param_1 + 1) = iVar8 + 1;
                  if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar8)
                    ;
                  }
                  puVar10 = (undefined4 *)(*param_1 + (longlong)iVar8 * 8);
                  *puVar10 = local_c8;
                  puVar10[1] = uStack_c4;
                  lVar5 = local_c0;
                }
LAB_1424969ce:
                FUN_14249d070(param_1,lVar1,local_res10,local_res8);
              }
LAB_1424969e1:
              lVar13 = lVar13 + 0x10;
            } while (lVar13 != lVar5);
          }
          for (; (local_res8[0] - 1 & 0xfffffffd) == 0; local_res8[0] = local_res8[0] + 1) {
          }
          plVar16 = param_1 + ((longlong)(int)local_res8[0] + 1) * 2;
          iVar8 = (int)plVar16[1];
          *(int *)(plVar16 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar16 + 0xc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar8);
          }
          puVar10 = (undefined4 *)(*plVar16 + (longlong)iVar8 * 8);
          *puVar10 = local_f8;
          puVar10[1] = local_f4;
          param_3 = local_res18;
        }
      }
    }
LAB_142496a40:
    uStack_80 = uStack_80 & ~uStack_90._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
  } while( true );
  plVar14 = plVar14 + 1;
  if (plVar14 == plVar16) goto LAB_142496a40;
  goto LAB_142496824;
}



// FUNCTION 142496ab0 FUN_142496ab0 body=86 status=ok
// SIG undefined FUN_142496ab0(void)

undefined8 * FUN_142496ab0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142496b10 FUN_142496b10 body=97 status=ok
// SIG undefined FUN_142496b10(void)

undefined8 * FUN_142496b10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7148;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142496b80 FUN_142496b80 body=97 status=ok
// SIG undefined FUN_142496b80(void)

undefined8 * FUN_142496b80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7138;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142496bf0 FUN_142496bf0 body=97 status=ok
// SIG undefined FUN_142496bf0(void)

undefined8 * FUN_142496bf0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7108;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142496c60 FUN_142496c60 body=97 status=ok
// SIG undefined FUN_142496c60(void)

undefined8 * FUN_142496c60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c70e8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142496cd0 FUN_142496cd0 body=97 status=ok
// SIG undefined FUN_142496cd0(void)

undefined8 * FUN_142496cd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c70f8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142496d40 FUN_142496d40 body=97 status=ok
// SIG undefined FUN_142496d40(void)

undefined8 * FUN_142496d40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7118;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142496db0 FUN_142496db0 body=97 status=ok
// SIG undefined FUN_142496db0(void)

undefined8 * FUN_142496db0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c6f98;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142496e20 FUN_142496e20 body=97 status=ok
// SIG undefined FUN_142496e20(void)

undefined8 * FUN_142496e20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c6fa8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142496e90 FUN_142496e90 body=97 status=ok
// SIG undefined FUN_142496e90(void)

undefined8 * FUN_142496e90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c6fb8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142496f00 FUN_142496f00 body=97 status=ok
// SIG undefined FUN_142496f00(void)

undefined8 * FUN_142496f00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7158;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142496f70 FUN_142496f70 body=97 status=ok
// SIG undefined FUN_142496f70(void)

undefined8 * FUN_142496f70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450c7128;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142496fe0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FArchiveProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142497020 FUN_142497020 body=154 status=ok
// SIG undefined FUN_142497020(void)

undefined8 * FUN_142497020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450c5890;
  param_1[2] = &PTR_LAB_1450c58d0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  param_1[2] = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 8);
  FUN_141edd2d0(param_1 + 2);
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1424970c0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithCineCameraActorTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142497110 FUN_142497110 body=43 status=ok
// SIG undefined FUN_142497110(void)

undefined8 * FUN_142497110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142497140 FUN_142497140 body=134 status=ok
// SIG undefined FUN_142497140(void)

longlong FUN_142497140(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1424971d0 FUN_1424971d0 body=52 status=ok
// SIG undefined FUN_1424971d0(void)

undefined8 FUN_1424971d0(undefined8 param_1,ulonglong param_2)

{
  FUN_142495090();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142497210 FUN_142497210 body=73 status=ok
// SIG undefined FUN_142497210(void)

longlong FUN_142497210(longlong param_1,ulonglong param_2)

{
  FUN_142494c80(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142497260 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithAssetUserData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_14249c6c0(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1424972e0 FUN_1424972e0 body=607 status=ok
// SIG undefined FUN_1424972e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424972e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  float *pfVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_60;
  
  iVar8 = *(int *)(param_3 + 0x10);
  plVar1 = (longlong *)(param_3 + 8);
  iVar7 = iVar8 + 1;
  *(int *)(param_3 + 0x10) = iVar7;
  if (*(int *)(param_3 + 0x14) < iVar7) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  lVar9 = (longlong)iVar8 * 0x60;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + lVar9),0,0x60);
  lVar4 = *plVar1;
  *(longlong *)(lVar9 + lVar4) = param_2;
  lVar5 = *(longlong *)(param_2 + 0x168);
  if (lVar5 == 0) {
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar18 = (float)(_DAT_146af5750 & _DAT_146af5760);
    fVar15 = (float)(uRam0000000146af5754 & uRam0000000146af5764);
    fVar16 = (float)(uRam0000000146af5758 & uRam0000000146af5768);
    fVar17 = (float)((uint)fRam0000000146af575c & uRam0000000146af576c);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = fRam0000000146af575c;
  }
  else {
    fVar10 = *(float *)(lVar5 + 0x210);
    fVar12 = *(float *)(lVar5 + 0x214);
    fVar13 = *(float *)(lVar5 + 0x218);
    fVar19 = *(float *)(lVar5 + 0x220);
    fVar20 = *(float *)(lVar5 + 0x224);
    fVar21 = *(float *)(lVar5 + 0x228);
    fVar22 = *(float *)(lVar5 + 0x22c);
    fVar18 = *(float *)(lVar5 + 0x230);
    fVar15 = *(float *)(lVar5 + 0x234);
    fVar16 = *(float *)(lVar5 + 0x238);
    fVar17 = *(float *)(lVar5 + 0x23c);
    fVar14 = *(float *)(lVar5 + 0x21c);
  }
  auVar11._4_4_ = -(uint)(fRam0000000146af59f4 < (float)((uint)fVar15 & uRam0000000146af5a04));
  auVar11._0_4_ = -(uint)(_DAT_146af59f0 < (float)((uint)fVar18 & _DAT_146af5a00));
  auVar11._8_4_ = -(uint)(fRam0000000146af59f8 < (float)((uint)fVar16 & uRam0000000146af5a08));
  auVar11._12_4_ = -(uint)(fRam0000000146af59fc < (float)((uint)fVar17 & uRam0000000146af5a0c));
  iVar8 = movmskps((int)lVar5,auVar11);
  fVar23 = _DAT_1468b5b70;
  fVar24 = fRam00000001468b5b74;
  fVar25 = fRam00000001468b5b78;
  fVar26 = fRam00000001468b5b7c;
  fVar27 = _DAT_1468b5b90;
  fVar28 = fRam00000001468b5b94;
  fVar29 = fRam00000001468b5b98;
  fVar30 = fRam00000001468b5b9c;
  uVar31 = _DAT_1468b5b80;
  uVar32 = uRam00000001468b5b84;
  uVar33 = uRam00000001468b5b88;
  uVar34 = uRam00000001468b5b8c;
  if (iVar8 != 0) {
    fVar23 = fVar10 * _DAT_146af59e0;
    fVar24 = fVar12 * fRam0000000146af59e4;
    fVar25 = fVar13 * fRam0000000146af59e8;
    fVar26 = fVar14 * fRam0000000146af59ec;
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar18;
    auVar6._8_4_ = fVar16;
    auVar6._12_4_ = fVar17;
    auVar11 = rcpps(in_XMM1,auVar6);
    fVar10 = auVar11._0_4_;
    fVar12 = auVar11._4_4_;
    fVar13 = auVar11._8_4_;
    fVar14 = auVar11._12_4_;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar18;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar15;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar16;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar17;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar18;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar15;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar16;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar17;
    fVar27 = (float)(((uint)fVar10 &
                      -(uint)((float)((uint)fVar18 & _DAT_146af5a00) <= _DAT_146af59f0) ^
                     (uint)fVar10) & _DAT_146af5760);
    fVar28 = (float)(((uint)fVar12 &
                      -(uint)((float)((uint)fVar15 & uRam0000000146af5a04) <= fRam0000000146af59f4)
                     ^ (uint)fVar12) & uRam0000000146af5764);
    fVar29 = (float)(((uint)fVar13 &
                      -(uint)((float)((uint)fVar16 & uRam0000000146af5a08) <= fRam0000000146af59f8)
                     ^ (uint)fVar13) & uRam0000000146af5768);
    fVar30 = (float)(((uint)fVar14 &
                      -(uint)((float)((uint)fVar17 & uRam0000000146af5a0c) <= fRam0000000146af59fc)
                     ^ (uint)fVar14) & uRam0000000146af576c);
    fVar19 = fVar27 * fVar19;
    fVar20 = fVar28 * fVar20;
    fVar21 = fVar29 * fVar21;
    fVar22 = fVar30 * fVar22;
    fVar10 = fVar21 * fVar24 - fVar20 * fVar25;
    fVar12 = fVar19 * fVar25 - fVar21 * fVar23;
    fVar13 = fVar20 * fVar23 - fVar19 * fVar24;
    fVar18 = fVar22 * fVar26 - fVar22 * fVar26;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar18 = fVar18 + fVar18;
    uVar31 = (uint)(0.0 - ((fVar13 * fVar24 - fVar12 * fVar25) + fVar26 * fVar10 + fVar19)) &
             _DAT_146af5760;
    uVar32 = (uint)(0.0 - ((fVar10 * fVar25 - fVar13 * fVar23) + fVar26 * fVar12 + fVar20)) &
             uRam0000000146af5764;
    uVar33 = (uint)(0.0 - ((fVar12 * fVar23 - fVar10 * fVar24) + fVar26 * fVar13 + fVar21)) &
             uRam0000000146af5768;
    uVar34 = (uint)(0.0 - ((fVar18 * fVar26 - fVar18 * fVar26) + fVar26 * fVar18 + fVar22)) &
             uRam0000000146af576c;
  }
  pfVar2 = (float *)(lVar9 + 0x30 + lVar4);
  *pfVar2 = fVar23;
  pfVar2[1] = fVar24;
  pfVar2[2] = fVar25;
  pfVar2[3] = fVar26;
  puVar3 = (uint *)(lVar9 + 0x40 + lVar4);
  *puVar3 = uVar31;
  puVar3[1] = uVar32;
  puVar3[2] = uVar33;
  puVar3[3] = uVar34;
  pfVar2 = (float *)(lVar9 + 0x50 + lVar4);
  *pfVar2 = fVar27;
  pfVar2[1] = fVar28;
  pfVar2[2] = fVar29;
  pfVar2[3] = fVar30;
  FUN_14222da00(param_2,1,&local_98,&local_88);
  local_60 = CONCAT31(local_60._1_3_,1);
  pfVar2 = (float *)(lVar9 + 8 + lVar4);
  *pfVar2 = local_98 - local_88;
  pfVar2[1] = local_94 - local_84;
  pfVar2[2] = local_90 - local_80;
  pfVar2[3] = local_98 + local_88;
  *(ulonglong *)(lVar9 + 0x18 + lVar4) = CONCAT44(local_90 + local_80,local_94 + local_84);
  *(undefined4 *)(lVar9 + 0x20 + lVar4) = local_60;
  return;
}



// FUNCTION 142497540 FUN_142497540 body=83 status=ok
// SIG undefined FUN_142497540(void)

void FUN_142497540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = param_2;
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
  }
  LOCK();
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014249758f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[5] + 0x10))();
  return;
}



// FUNCTION 1424975a0 FUN_1424975a0 body=185 status=ok
// SIG undefined FUN_1424975a0(void)

void FUN_1424975a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),0,0);
  for (plVar1 = *(longlong **)(param_1 + 0x60); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    lVar3 = *(longlong *)(*plVar1 + 8);
    lVar2 = (longlong)*(int *)(*plVar1 + 0x10) * 0x60 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x60) {
      (**(code **)(*param_2 + 0x38))(param_2,lVar3,0,0);
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142497660 FUN_142497660 body=89 status=ok
// SIG undefined FUN_142497660(void)

void FUN_142497660(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x280 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x280) {
    FUN_1424977b0(lVar1,param_2);
  }
  return;
}



// FUNCTION 1424976c0 FUN_1424976c0 body=237 status=ok
// SIG undefined FUN_1424976c0(void)

void FUN_1424976c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined **local_a8 [5];
  byte local_7f;
  byte local_7e;
  longlong *local_18;
  
  FArchive::FArchive(local_a8);
  local_7e = local_7e | 8;
  local_a8[0] = &PTR__scalar_deleting_destructor__1450c5bf0;
  local_18 = param_2;
  FArchive::SetIsPersistent(local_a8,0);
  local_7f = local_7f & 0xdf;
  plVar2 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  plVar3 = plVar2 + (longlong)(int)param_1[0x21] * 4;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
    (**(code **)(*param_2 + 0x38))(param_2,plVar2,0,0);
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2c0))(plVar1,local_a8);
    }
  }
  FArchive::~FArchive(local_a8);
  return;
}



// FUNCTION 1424977b0 FUN_1424977b0 body=690 status=ok
// SIG undefined FUN_1424977b0(void)

void FUN_1424977b0(ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined **local_c8 [5];
  byte local_9f;
  byte local_9e;
  longlong *local_38;
  
  uVar6 = 0;
  local_res8 = uVar6;
  if (*param_1 != 0) {
    uVar2 = FUN_1428dfc70();
    for (uVar4 = *param_1;
        (local_res8 = uVar6, uVar4 != 0 && (local_res8 = *param_1, uVar4 != uVar2));
        uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  uVar4 = uVar6;
  if (*param_1 != 0) {
    uVar3 = FUN_1428dfc70();
    for (uVar2 = *param_1; (uVar4 = uVar6, uVar2 != 0 && (uVar4 = *param_1, uVar2 != uVar3));
        uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
    }
  }
  if (local_res8 != uVar4) {
    *param_1 = local_res8;
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xe,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xf,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  local_res10 = FWeakObjectPtr::Get(param_1 + 0x17);
  if ((local_res10 != 0) &&
     ((**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0), local_res10 == 0)) {
    FWeakObjectPtr::operator=(param_1 + 0x17,0);
    local_res10 = 0;
    param_1[0x18] = 0;
  }
  local_res10 = FWeakObjectPtr::Get(param_1 + 0x19);
  if ((local_res10 != 0) &&
     ((**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0), local_res10 == 0)) {
    FWeakObjectPtr::operator=(param_1 + 0x19,0);
    local_res10 = 0;
    param_1[0x1a] = 0;
  }
  FArchive::FArchive(local_c8);
  local_9e = local_9e | 8;
  local_c8[0] = &PTR__scalar_deleting_destructor__1450c5bf0;
  local_38 = param_2;
  FArchive::SetIsPersistent(local_c8,0);
  local_9f = local_9f & 0xdf;
  puVar5 = (ulonglong *)param_1[0x3d];
  if ((ulonglong *)param_1[0x3d] == (ulonglong *)0x0) {
    puVar5 = param_1 + 0x1d;
  }
  puVar7 = puVar5 + (longlong)(int)param_1[0x3e] * 4;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 4) {
    (**(code **)(*param_2 + 0x38))(param_2,puVar5,0,0);
    plVar1 = (longlong *)*puVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2c0))(plVar1,local_c8);
    }
  }
  FArchive::~FArchive(local_c8);
  puVar5 = (ulonglong *)param_1[0x43];
  if ((ulonglong *)param_1[0x43] == (ulonglong *)0x0) {
    puVar5 = param_1 + 0x3f;
  }
  uVar4 = (longlong)(int)param_1[0x44] & 0x1fffffffffffffff;
  if (puVar5 + (int)param_1[0x44] < puVar5) {
    uVar4 = uVar6;
  }
  if (uVar4 != 0) {
    do {
      local_res10 = *puVar5;
      (**(code **)(*param_2 + 0x38))(param_2,&local_res10,0,0);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}



// FUNCTION 142497a70 FUN_142497a70 body=50 status=ok
// SIG undefined FUN_142497a70(void)

void FUN_142497a70(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1424a3300(param_1,param_2,param_1 + 0x58);
    *(undefined1 *)(param_2 + 0x95c) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x95c) = 1;
  return;
}



// FUNCTION 142497ab0 FUN_142497ab0 body=442 status=ok
// SIG undefined FUN_142497ab0(void)

ulonglong FUN_142497ab0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  ulonglong in_RAX;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  int local_c4;
  int *local_c0;
  undefined **local_b8 [18];
  undefined8 local_28;
  ulonglong *local_20;
  undefined8 local_18;
  
  if ((param_2 != (ulonglong *)0x0) && (0 < (int)param_2[5])) {
    uVar1 = (uint)param_2[1];
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 == *(uint *)(param_1 + 0x180)) &&
       ((uVar1 == *(uint *)(param_1 + 0x184) &&
        (in_RAX = *(ulonglong *)(param_1 + 0xb0), *param_2 == in_RAX)))) {
      QueryPerformanceCounter(&local_res10);
      local_c0 = &local_c4;
      local_c4 = 0;
      FArchive::FArchive(local_b8);
      local_28 = 0;
      local_b8[0] = &PTR_FUN_143f4a3a0;
      local_18 = 0x7fffffffffffffff;
      local_20 = param_2 + 4;
      FArchive::SetIsLoading(local_b8,1);
      FArchive::SetIsPersistent(local_b8,0);
      bVar2 = FUN_1424ac570(param_1,local_b8);
      QueryPerformanceCounter(&local_res18);
      if (local_c0 != (int *)0x0) {
        *local_c0 = *local_c0 + (local_res18.s.LowPart - local_res10.s.LowPart);
      }
      *(int *)(param_1 + 0xa4) = (int)param_2[5];
      if (bVar2 != 0) {
        FUN_1424a5190(*(undefined8 *)(param_1 + 0x1a0),0,local_res18.s.LowPart,param_4,
                      local_res18.s.LowPart);
      }
      FUN_1424aca50(param_1,*(longlong *)(param_1 + 0x1a0) + 0x70);
      FUN_14249e320(param_1,4);
      FUN_14249e320(param_1,3);
      FUN_14249e320(param_1,5);
      FUN_1424a95a0(param_1,1);
      FUN_1424a95a0(param_1,2);
      FUN_1424a95a0(param_1,3);
      FArchive::~FArchive(local_b8);
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142497c70 FUN_142497c70 body=863 status=ok
// SIG undefined FUN_142497c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142497c70(ulonglong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_res10;
  longlong local_38;
  longlong lStack_30;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
    plVar8 = (longlong *)
             ((ulonglong)(*(ulonglong *)(param_1 + 0x100) != 0) - 1 & param_1 |
             *(ulonglong *)(param_1 + 0x100));
    plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x108) * 4;
    if (plVar8 != plVar10) {
      plVar7 = plVar8 + 1;
      do {
        lVar3 = *plVar8;
        if (lVar3 != 0) {
          lVar2 = UObjectPropertyBase::GetPrivateStaticClass();
          lVar3 = *(longlong *)(lVar3 + 0x10);
          if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
              lVar2 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          plVar6 = (longlong *)*plVar8;
          if (bVar11) {
            plVar4 = (longlong *)plVar7[1];
            local_res10 = 0;
            plVar9 = plVar4;
            if (plVar4 == (longlong *)0x0) {
              plVar9 = plVar7;
            }
            if (&local_res10 != plVar9) {
              if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) == 0) {
                (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_res10,plVar9,(int)plVar6[6]);
                plVar4 = (longlong *)plVar7[1];
                plVar6 = (longlong *)*plVar8;
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (&local_res10,plVar9,
                           (longlong)(*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6]));
              }
              if (local_res10 != 0) {
                uVar1 = *(uint *)(local_res10 + 0xc);
                if ((int)uVar1 < (int)DAT_1469e91c4) {
                  uVar5 = uVar1 & 0xffff;
                  if ((int)uVar1 < 0) {
                    uVar1 = uVar1 + 0xffff;
                    uVar5 = uVar5 - 0x10000;
                  }
                  bVar11 = (*(uint *)(*(longlong *)
                                       (DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) + 8 +
                                     (longlong)(int)uVar5 * 0x18) & 0x30000000) == 0;
                }
                else {
                  bVar11 = (_DAT_00000008 & 0x30000000) == 0;
                }
LAB_142497f0d:
                if (!bVar11) {
LAB_142497f0f:
                  if (plVar4 == (longlong *)0x0) {
                    plVar4 = plVar7;
                  }
                  if ((*(uint *)(plVar6 + 7) >> 9 & 1) == 0) {
                    (**(code **)(*plVar6 + 0x330))(plVar6,plVar4);
                  }
                  else {
                    _guard_xfg_dispatch_icall_nop
                              (plVar4,0,(longlong)
                                        (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6]));
                  }
                }
              }
            }
          }
          else if (plVar6 != (longlong *)0x0) {
            lVar3 = UInterfaceProperty::GetPrivateStaticClass();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              plVar4 = (longlong *)plVar7[1];
              plVar6 = (longlong *)*plVar8;
              plVar9 = plVar4;
              if (plVar4 == (longlong *)0x0) {
                plVar9 = plVar7;
              }
              local_38 = 0;
              lStack_30 = 0;
              if (&local_38 != plVar9) {
                if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) == 0) {
                  (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_38,plVar9,(int)plVar6[6]);
                  plVar4 = (longlong *)plVar7[1];
                  plVar6 = (longlong *)*plVar8;
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            (&local_38,plVar9,
                             (longlong)(*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6]));
                }
                if (local_38 != 0) {
                  if (lStack_30 != 0) {
                    uVar1 = *(uint *)(local_38 + 0xc);
                    lVar3 = 0;
                    if ((int)uVar1 < (int)DAT_1469e91c4) {
                      uVar5 = uVar1 & 0xffff;
                      if ((int)uVar1 < 0) {
                        uVar1 = uVar1 + 0xffff;
                        uVar5 = uVar5 - 0x10000;
                      }
                      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                              (longlong)(int)uVar5 * 0x18;
                    }
                    bVar11 = (*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0;
                    goto LAB_142497f0d;
                  }
                  goto LAB_142497f0f;
                }
              }
            }
          }
          plVar6 = (longlong *)*plVar8;
          plVar4 = (longlong *)plVar7[1];
          if ((longlong *)plVar7[1] == (longlong *)0x0) {
            plVar4 = plVar7;
          }
          plVar9 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_2);
          if (plVar9 != plVar4) {
            if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar6 + 0x2e8))(plVar6,plVar9,plVar4,(int)plVar6[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (plVar9,plVar4,
                         (longlong)(*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6]));
            }
          }
        }
        plVar8 = plVar8 + 4;
        plVar7 = plVar7 + 4;
      } while (plVar8 != plVar10);
    }
  }
  return;
}



// FUNCTION 142497fd0 FUN_142497fd0 body=80 status=ok
// SIG undefined FUN_142497fd0(void)

void FUN_142497fd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_2 + 0x71b) = *(byte *)(param_2 + 0x71b) & 0xef;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = param_2;
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014249801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  return;
}



// FUNCTION 142498030 FUN_142498030 body=343 status=ok
// SIG undefined FUN_142498030(void)

undefined8 FUN_142498030(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  BOOL BVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_28 [32];
  
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  }
  if (DAT_146af5674 == 0) {
    FUN_1424aafa0(param_1);
  }
  iVar2 = DAT_146af5674;
  if ((param_1 != DAT_146af5674) || ((DAT_146af5670 & 0xfffffffd) != 0)) {
    uVar10 = 0;
    goto LAB_14249816c;
  }
  DAT_146af5670 = 1;
  local_res8[0] = DAT_146af5674;
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142495430(local_res8,uVar10);
      uVar10 = 1;
      goto LAB_14249816c;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar9 = GetCurrentThreadId();
      if (DVar9 != DAT_1468c21c0) goto LAB_142498110;
    }
    local_res10[0] = iVar2;
    uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142495430(local_res10,uVar10);
    uVar10 = 1;
  }
  else {
LAB_142498110:
    plVar11 = (longlong *)
              TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSkyCaptureContents'::`10'::ClearCommandName,<lambda_0ddb857484b536f0cf87119d965ea51a>_>_>
              ::CreateTask(local_28,0,0xff);
    *(int *)(*plVar11 + 0x10) = iVar2;
    lVar3 = *plVar11;
    lVar6 = plVar11[2];
    lVar4 = plVar11[1];
    lVar5 = *(longlong *)(lVar3 + 0x18);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_141d4e540(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
    uVar10 = 1;
  }
LAB_14249816c:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af57b8);
  return uVar10;
}



// FUNCTION 142498190 FUN_142498190 body=94 status=ok
// SIG undefined FUN_142498190(void)

void FUN_142498190(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '>';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = -0x80;
    param_1[0xb] = '<';
  }
  else {
    if (cVar1 == '\x01') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = -0x40;
      param_1[7] = '>';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '=';
      return;
    }
    if (cVar1 == '\x02') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '?';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '@';
      param_1[0xb] = '=';
      return;
    }
    if (cVar1 == '\x03') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = -0x80;
      param_1[7] = '?';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '>';
      return;
    }
    if (cVar1 == '\x04') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      return;
    }
  }
  return;
}



// FUNCTION 142498200 FUN_142498200 body=8 status=ok
// SIG undefined FUN_142498200(void)

void FUN_142498200(undefined8 param_1,undefined8 *param_2)

{
  FUN_1424956d0(param_1,*param_2);
  return;
}



// FUNCTION 142498210 FUN_142498210 body=135 status=ok
// SIG undefined FUN_142498210(void)

undefined8 FUN_142498210(longlong *param_1,float param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  
  if ((((char)param_1[6] != '\0') &&
      (param_2 = param_2 - *(float *)((longlong)param_1 + 0x3c), 0.0 < param_2)) &&
     ((int)param_1[0xe] != 0)) {
    if (param_3 == '\0') {
      return 1;
    }
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      fVar2 = (*(float *)(lVar1 + 0x798) - param_2) - **(float **)param_1[0xd];
      if (fVar2 <= 0.0) {
        return 1;
      }
      if (fVar2 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1424982a0 FUN_1424982a0 body=71 status=ok
// SIG undefined FUN_1424982a0(void)

void FUN_1424982a0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    lVar1 = FUN_1428cce50(lVar1);
    if (lVar1 != 0) {
      local_res18[0] = param_2;
      FUN_142493150(lVar1 + 0x30,local_res18);
    }
  }
  return;
}



// FUNCTION 1424982f0 FUN_1424982f0 body=722 status=ok
// SIG undefined FUN_1424982f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1424982f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  longlong **local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  int local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(float *)(param_1 + 0x9c) <= 0.0) {
    return true;
  }
  if (*(char *)(param_1 + 0x271) != '\0') goto LAB_14249855e;
  FUN_142498970();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af5a80) && (_Init_thread_header(&DAT_146af5a80), DAT_146af5a80 == -1))
  {
    FName::FName(&DAT_146af5a78,L"GbxSpawnActorAsync_FindGroundTrace",1);
    _Init_thread_footer(&DAT_146af5a80);
  }
  local_e8 = *(undefined4 *)(param_1 + 0x250);
  local_e4 = *(undefined4 *)(param_1 + 0x254);
  local_d0 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 600);
  local_e0 = *(float *)(param_1 + 600) - *(float *)(param_1 + 0x9c);
  local_138 = (undefined4 *)0x0;
  local_d8 = local_e8;
  local_d4 = local_e4;
  FUN_1422ffb20(local_b8,DAT_146af5a78,local_108,0);
  FCollisionQueryParams::AddIgnoredActor(local_b8,*(undefined8 *)(param_1 + 0x70));
  FCollisionQueryParams::AddIgnoredActor(local_b8,*(undefined8 *)(param_1 + 0x78));
  FCollisionQueryParams::AddIgnoredActor(local_b8,*(undefined8 *)(param_1 + 0x40));
  lVar3 = FUN_140a05dc0();
  uVar1 = *(undefined4 *)(param_1 + 0x22c);
  uVar2 = *(undefined4 *)(param_1 + 0x228);
  local_f0 = *(undefined4 *)(lVar3 + 4);
  local_ec = 0;
  local_100 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_f8 = 2;
  local_100 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_1450c6fc8;
    plVar4[1] = (longlong)FUN_1424a52f0;
    *(undefined4 *)(plVar4 + 2) = uVar2;
    *(undefined4 *)((longlong)plVar4 + 0x14) = uVar1;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar3;
    *plVar4 = (longlong)&PTR_GetPoolName_1450c7010;
  }
  local_118 = 0;
  local_120 = &local_100;
  local_128 = local_b8;
  local_130 = &local_f0;
  local_138 = &local_e8;
  FUN_142330140(param_2,local_c8,1,&local_d8);
  *(undefined1 *)(param_1 + 0x271) = 1;
  if (local_f8 == 0) {
LAB_14249852d:
    if (local_100 != (longlong *)0x0) {
      FMemory::Free(local_100);
    }
  }
  else if (local_100 != (longlong *)0x0) {
    (**(code **)(*local_100 + 0x28))(local_100,0);
    if (local_100 != (longlong *)0x0) {
      local_100 = (longlong *)FMemory::Realloc(local_100,0,0);
    }
    local_f8 = 0;
    goto LAB_14249852d;
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
LAB_14249855e:
  return 1 < *(byte *)(param_1 + 0x271);
}



// FUNCTION 1424985d0 FUN_1424985d0 body=411 status=ok
// SIG undefined FUN_1424985d0(void)

void FUN_1424985d0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8;
  int local_resc;
  ulonglong uVar7;
  
  uVar13 = 0;
  *(uint *)(param_1 + 0x6c) = (param_2 ^ 1) * 2 + 2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    uVar10 = uVar13;
    uVar11 = uVar13;
    do {
      lVar1 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 0x48));
      if (0 < *(int *)(lVar1 + 0x58)) {
        uVar7 = uVar13;
        uVar8 = uVar13;
        uVar12 = 0xff;
        if (param_2 != 0) {
          uVar7 = 0;
          uVar12 = uVar13;
        }
        do {
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
          *(char *)(uVar8 + *(longlong *)(lVar1 + 0x50)) = (char)uVar12;
          uVar8 = uVar8 + 1;
        } while ((int)uVar4 < *(int *)(lVar1 + 0x58));
      }
      iVar6 = *(int *)(lVar1 + 0x34);
      if (param_2 == 0) {
        iVar5 = 1;
        if (iVar6 != 0) {
          iVar5 = 4;
        }
        uVar7 = (ulonglong)(uint)(iVar6 * 0xff);
      }
      else {
        iVar5 = (iVar6 != 0) + 1;
        uVar7 = uVar13;
      }
      iVar3 = iVar9;
      if (param_2 == 0) {
        iVar3 = iVar6;
      }
      *(int *)(lVar1 + 0x3c) = iVar3;
      *(int *)(lVar1 + 0x40) = iVar3;
      *(int *)(lVar1 + 0x44) = (int)uVar7;
      *(int *)(lVar1 + 0x48) = (int)uVar7;
      *(int *)(lVar1 + 0x14) = iVar5;
      FUN_1424b0430(lVar1,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
      uVar4 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar4;
      uVar11 = uVar11 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x34));
  }
  iVar6 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (iVar6 != *(int *)(param_1 + 0x10)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x7c);
    iVar9 = *(int *)(param_1 + 0x78);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = iVar9 + iVar5;
  *(int *)(param_1 + 0x78) = iVar3;
  if (iVar6 < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x70);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar9 + *(longlong *)(param_1 + 0x70)),0,(longlong)iVar5);
  uVar10 = uVar13;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar9 = (int)uVar10;
      uVar10 = uVar13;
      local_resc = iVar9;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x70);
          iVar5 = (int)uVar10;
          iVar6 = *(int *)(param_1 + 8);
          local_res8 = iVar5;
          uVar2 = FUN_1424a2120(param_1,&local_res8);
          *(undefined1 *)((iVar9 * iVar6 + iVar5) + lVar1) = uVar2;
          uVar10 = (ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 8));
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0xc));
  }
  return;
}



// FUNCTION 142498770 FUN_142498770 body=501 status=ok
// SIG undefined FUN_142498770(void)

void FUN_142498770(int *param_1,undefined4 *param_2,float param_3,undefined8 *param_4)

{
  int iVar1;
  PxTransform *pPVar2;
  undefined8 *in_R8;
  undefined4 uVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  
  *in_R8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)(in_R8 + 1) = DAT_1468b5d98;
  *param_4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)(param_4 + 1) = DAT_1468b5d98;
  pPVar2 = *(PxTransform **)(param_1 + 4);
  if (pPVar2 != (PxTransform *)0x0) {
    if (*param_1 == 1) {
      iVar1 = *(int *)pPVar2;
      if (iVar1 == 1) {
        local_88 = *(undefined4 *)(pPVar2 + 4);
        uStack_84 = *(undefined4 *)(pPVar2 + 8);
        uVar3 = *(undefined4 *)(pPVar2 + 0xc);
      }
      else if (iVar1 == 2) {
        local_88 = *(undefined4 *)(pPVar2 + 4);
        uVar3 = local_88;
        uStack_84 = local_88;
      }
      else if (iVar1 == 3) {
        local_88 = *(undefined4 *)(pPVar2 + 4);
        uVar3 = *(undefined4 *)(pPVar2 + 8);
        uStack_84 = local_88;
      }
      else {
        local_88 = DAT_1468b5d90;
        uVar3 = DAT_1468b5d98;
        uStack_84 = DAT_1468b5d94;
      }
      *in_R8 = CONCAT44(uStack_84,local_88);
      *(undefined4 *)(in_R8 + 1) = uVar3;
    }
    else if (*param_1 == 3) {
      local_60 = *param_2;
      uStack_5c = param_2[1];
      uStack_58 = param_2[2];
      uStack_54 = param_2[3];
      local_50 = 0;
      local_48 = 0;
      physx::PxGeometryQuery::getWorldBounds((PxGeometry *)&local_78,pPVar2,param_3);
      *in_R8 = CONCAT44((local_68 - local_74) * 0.5,(local_6c - local_78) * 0.5);
      *(float *)(in_R8 + 1) = (local_64 - local_70) * 0.5;
      *param_4 = CONCAT44((local_74 + local_68) * 0.5,(local_78 + local_6c) * 0.5);
      *(float *)(param_4 + 1) = (local_70 + local_64) * 0.5;
    }
  }
  return;
}



// FUNCTION 142498970 FUN_142498970 body=739 status=ok
// SIG undefined FUN_142498970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142498970(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(char *)(param_1 + 0x270) == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    if ((((int)uVar4 == 0) && ((int)((ulonglong)uVar4 >> 0x20) == 0)) &&
       (0 < *(int *)(param_1 + 0x60))) {
      uVar4 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x58) +
               (longlong)(*(int *)(param_1 + 0x22c) % *(int *)(param_1 + 0x60)) * 8);
    }
    local_168 = param_1;
    if (((int)uVar4 != 0) || ((int)((ulonglong)uVar4 >> 0x20) != 0)) {
      plVar7 = *(longlong **)(param_1 + 0x48);
      if ((plVar7 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar7 + 0x440))(plVar7,uVar4), cVar3 != '\0')) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x420))
                          (*(longlong **)(param_1 + 0x48),&local_158,uVar4,0);
        FUN_142495f40(&local_168,uVar4);
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (((lVar5 != 0) || (lVar5 = *(longlong *)(param_1 + 0x70), lVar5 != 0)) ||
         (lVar5 = *(longlong *)(param_1 + 0x78), lVar5 != 0)) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_140749cd0(lVar5,local_f8,0);
        plVar7 = local_f8;
        if (local_38 != (longlong *)0x0) {
          plVar7 = local_38;
        }
        plVar1 = plVar7 + (int)local_30;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          plVar2 = (longlong *)*plVar7;
          if ((plVar2 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar2 + 0x440))(plVar2,uVar4), cVar3 != '\0')) {
            uVar4 = (**(code **)(*plVar2 + 0x420))(plVar2,&local_158,uVar4,0);
            FUN_142495f40(&local_168,uVar4);
            if (local_38 == (longlong *)0x0) {
              return;
            }
            FMemory::Free();
            return;
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x48);
    if (lVar5 == 0) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        local_128 = *(undefined4 *)(param_1 + 0x10);
        uStack_124 = *(undefined4 *)(param_1 + 0x14);
        uStack_120 = *(undefined4 *)(param_1 + 0x18);
        uStack_11c = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x240) = local_128;
        *(undefined4 *)(param_1 + 0x244) = uStack_124;
        *(undefined4 *)(param_1 + 0x248) = uStack_120;
        *(undefined4 *)(param_1 + 0x24c) = uStack_11c;
        *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x3c);
        if (*(char *)(param_1 + 0x68) != '\0') {
          lVar5 = FQuat::Euler(&local_128,local_118);
          local_160 = *(undefined4 *)(lVar5 + 8);
          local_168 = 0;
          puVar6 = (undefined8 *)FQuat::MakeFromEuler(local_108,&local_168);
          uVar4 = puVar6[1];
          *(undefined8 *)(param_1 + 0x240) = *puVar6;
          *(undefined8 *)(param_1 + 0x248) = uVar4;
        }
        *(undefined1 *)(param_1 + 0x270) = 1;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x168);
        if (lVar5 == 0) {
          local_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_138 = _DAT_146af5750 & _DAT_146af5760;
          uStack_134 = uRam0000000146af5754 & uRam0000000146af5764;
          uStack_130 = uRam0000000146af5758 & uRam0000000146af5768;
          uStack_12c = uRam0000000146af575c & uRam0000000146af576c;
          uVar8 = 0;
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = uRam0000000146af575c;
        }
        else {
          uVar8 = *(undefined4 *)(lVar5 + 0x210);
          uVar9 = *(undefined4 *)(lVar5 + 0x214);
          uVar10 = *(undefined4 *)(lVar5 + 0x218);
          local_148 = *(undefined4 *)(lVar5 + 0x220);
          uStack_144 = *(undefined4 *)(lVar5 + 0x224);
          uStack_140 = *(undefined4 *)(lVar5 + 0x228);
          uStack_13c = *(undefined4 *)(lVar5 + 0x22c);
          local_138 = *(uint *)(lVar5 + 0x230);
          uStack_134 = *(uint *)(lVar5 + 0x234);
          uStack_130 = *(uint *)(lVar5 + 0x238);
          uStack_12c = *(uint *)(lVar5 + 0x23c);
          uVar11 = *(uint *)(lVar5 + 0x21c);
        }
        local_158 = CONCAT44(uVar9,uVar8);
        uStack_150 = CONCAT44(uVar11,uVar10);
        FUN_142495f40(&local_168,&local_158);
      }
    }
    else {
      local_158 = *(undefined8 *)(lVar5 + 0x210);
      uStack_150 = *(undefined8 *)(lVar5 + 0x218);
      local_148 = *(undefined4 *)(lVar5 + 0x220);
      uStack_144 = *(undefined4 *)(lVar5 + 0x224);
      uStack_140 = *(undefined4 *)(lVar5 + 0x228);
      uStack_13c = *(undefined4 *)(lVar5 + 0x22c);
      local_138 = *(undefined4 *)(lVar5 + 0x230);
      uStack_134 = *(undefined4 *)(lVar5 + 0x234);
      uStack_130 = *(undefined4 *)(lVar5 + 0x238);
      uStack_12c = *(undefined4 *)(lVar5 + 0x23c);
      FUN_142495f40(&local_168,&local_158);
    }
  }
  return;
}



// FUNCTION 142498c60 FUN_142498c60 body=46 status=ok
// SIG undefined FUN_142498c60(void)

void FUN_142498c60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_1424932e0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142498c90 FUN_142498c90 body=284 status=ok
// SIG undefined FUN_142498c90(void)

undefined8 * FUN_142498c90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 1;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FODReadbackUAV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"FODReadbackChunk",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"FODTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"FODTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142498db0 FUN_142498db0 body=284 status=ok
// SIG undefined FUN_142498db0(void)

undefined8 * FUN_142498db0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 2;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 2;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FODReadbackUAV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"FODReadbackChunk",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"FODTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"FODTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142498ed0 FUN_142498ed0 body=284 status=ok
// SIG undefined FUN_142498ed0(void)

undefined8 * FUN_142498ed0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 4;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FODReadbackUAV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"FODReadbackChunk",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"FODTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"FODTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142498ff0 FUN_142498ff0 body=284 status=ok
// SIG undefined FUN_142498ff0(void)

undefined8 * FUN_142498ff0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 8;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FODReadbackUAV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"FODReadbackChunk",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"FODTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"FODTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499110 FUN_142499110 body=284 status=ok
// SIG undefined FUN_142499110(void)

undefined8 * FUN_142499110(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x10;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FODReadbackUAV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"FODReadbackChunk",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"FODTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"FODTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499230 FUN_142499230 body=46 status=ok
// SIG undefined FUN_142499230(void)

void FUN_142499230(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_1424934f0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142499260 FUN_142499260 body=46 status=ok
// SIG undefined FUN_142499260(void)

void FUN_142499260(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_1424936e0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142499290 FUN_142499290 body=46 status=ok
// SIG undefined FUN_142499290(void)

void FUN_142499290(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_1424938d0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1424992c0 FUN_1424992c0 body=46 status=ok
// SIG undefined FUN_1424992c0(void)

void FUN_1424992c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_142493ac0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1424992f0 FUN_1424992f0 body=46 status=ok
// SIG undefined FUN_1424992f0(void)

void FUN_1424992f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_142493cb0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142499320 FUN_142499320 body=145 status=ok
// SIG undefined FUN_142499320(void)

undefined8 * FUN_142499320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450c5520;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 1;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424993c0 FUN_1424993c0 body=117 status=ok
// SIG undefined FUN_1424993c0(void)

undefined8 * FUN_1424993c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 1;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499440 FUN_142499440 body=117 status=ok
// SIG undefined FUN_142499440(void)

undefined8 * FUN_142499440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 2;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 2;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424994c0 FUN_1424994c0 body=117 status=ok
// SIG undefined FUN_1424994c0(void)

undefined8 * FUN_1424994c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 4;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499540 FUN_142499540 body=117 status=ok
// SIG undefined FUN_142499540(void)

undefined8 * FUN_142499540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 8;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424995c0 FUN_1424995c0 body=117 status=ok
// SIG undefined FUN_1424995c0(void)

undefined8 * FUN_1424995c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450c54f0;
    *(undefined4 *)(puVar1 + 0x18) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x10;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499640 FUN_142499640 body=145 status=ok
// SIG undefined FUN_142499640(void)

undefined8 * FUN_142499640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450bce60;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 1;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424996e0 FUN_1424996e0 body=145 status=ok
// SIG undefined FUN_1424996e0(void)

undefined8 * FUN_1424996e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450bce60;
    *(undefined4 *)(puVar1 + 0x18) = 2;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 2;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499780 FUN_142499780 body=145 status=ok
// SIG undefined FUN_142499780(void)

undefined8 * FUN_142499780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450bce60;
    *(undefined4 *)(puVar1 + 0x18) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 4;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499820 FUN_142499820 body=145 status=ok
// SIG undefined FUN_142499820(void)

undefined8 * FUN_142499820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450bce60;
    *(undefined4 *)(puVar1 + 0x18) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 8;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424998c0 FUN_1424998c0 body=145 status=ok
// SIG undefined FUN_1424998c0(void)

undefined8 * FUN_1424998c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR_FUN_1450bce60;
    *(undefined4 *)(puVar1 + 0x18) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x10;
    *(undefined4 *)(puVar1 + 0x19) = 1;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142499960 CreateCopy body=89 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_8be481e26384b086acfe8f61a0f13330>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1450c7058;
    FUN_142494410(puVar1 + 1,param_1 + 8);
    puVar1[0x18] = *(undefined8 *)(param_1 + 0xc0);
    *puVar1 = &PTR_GetPoolName_1450c70a0;
  }
  return;
}



// FUNCTION 1424999c0 FUN_1424999c0 body=74 status=ok
// SIG undefined FUN_1424999c0(void)

void FUN_1424999c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1450c6fc8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1450c7010;
  }
  return;
}



// FUNCTION 142499a10 FUN_142499a10 body=225 status=ok
// SIG undefined FUN_142499a10(void)

undefined8 * FUN_142499a10(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 4;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0xc7efffffe0000000;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x74) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x76) = 0;
    *puVar2 = &PTR_FUN_1450c5890;
    puVar2[2] = &PTR_LAB_1450c58d0;
    puVar2[0xf] = param_1;
    lVar1 = param_1[0x1b];
    puVar2[0x10] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x2c0))(param_1,puVar2 + 0x11);
    TRefCountPtr<FRHITexture>::operator=(puVar2 + 8,puVar2[0x10]);
    puVar3 = puVar2;
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 142499b00 FUN_142499b00 body=332 status=ok
// SIG undefined FUN_142499b00(void)

undefined8 * FUN_142499b00(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c7148;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142499c50 FUN_142499c50 body=332 status=ok
// SIG undefined FUN_142499c50(void)

undefined8 * FUN_142499c50(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c7138;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142499da0 FUN_142499da0 body=332 status=ok
// SIG undefined FUN_142499da0(void)

undefined8 * FUN_142499da0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c7108;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142499ef0 FUN_142499ef0 body=332 status=ok
// SIG undefined FUN_142499ef0(void)

undefined8 * FUN_142499ef0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c70e8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a040 FUN_14249a040 body=332 status=ok
// SIG undefined FUN_14249a040(void)

undefined8 * FUN_14249a040(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c70f8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a190 FUN_14249a190 body=332 status=ok
// SIG undefined FUN_14249a190(void)

undefined8 * FUN_14249a190(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c7118;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a2e0 CreateTask body=332 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSkyCaptureContents'::`10'::ClearCommandName,<lambda_0ddb857484b536f0cf87119d965ea51a>_>_>
::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c6f98;
  *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a430 CreateTask body=332 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSkyCaptureContents'::`10'::ClearCommandName,<lambda_0ddb857484b536f0cf87119d965ea51a>_>_>
::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c6fa8;
  *(undefined1 *)((longlong)plVar6 + 0x14) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a580 FUN_14249a580 body=332 status=ok
// SIG undefined FUN_14249a580(void)

undefined8 * FUN_14249a580(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c6fb8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14249a6d0 FUN_14249a6d0 body=332 status=ok
// SIG undefined FUN_14249a6d0(void)

undefined8 * FUN_14249a6d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450c7158;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}


