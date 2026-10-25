// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425c5640 NotifyActorFullyDormantForConnection body=83 status=ok
// SIG undefined NotifyActorFullyDormantForConnection(void)

void UReplicationDriver::NotifyActorFullyDormantForConnection(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x54,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorFullyDormantForConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x54,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorFullyDormantForConnection");
  return;
}



// FUNCTION 1425c56a0 FUN_1425c56a0 body=337 status=ok
// SIG undefined FUN_1425c56a0(void)

void FUN_1425c56a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res18;
  undefined8 local_res20;
  
  (**(code **)(*param_1 + 0x338))(param_1,param_2,1);
  if (param_1[0x12] != 0) {
    FWeakObjectPtr::operator=(&local_res8,param_2);
    lVar2 = param_1[0x12];
    if (*(int *)(lVar2 + 0x1608) != *(int *)(lVar2 + 0x1634)) {
      lVar5 = *(longlong *)(lVar2 + 0x1640);
      if (*(longlong *)(lVar2 + 0x1640) == 0) {
        lVar5 = lVar2 + 0x1638;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)(int)(uStackX_c ^ local_res8) &
                               (longlong)*(int *)(lVar2 + 0x1648) - 1U) * 4);
      if (iVar4 != -1) {
        lVar5 = *(longlong *)(lVar2 + 0x1600);
        while ((lVar1 = (longlong)iVar4 * 0x18, *(uint *)(lVar1 + lVar5) != local_res8 ||
               (*(uint *)(lVar1 + 4 + lVar5) != uStackX_c))) {
          iVar4 = *(int *)(lVar1 + 0x10 + lVar5);
          if (iVar4 == -1) {
            return;
          }
        }
        if (((iVar4 != -1) && (lVar1 + lVar5 != 0)) &&
           (lVar5 = *(longlong *)(lVar1 + lVar5 + 8), lVar5 != 0)) {
          FWeakObjectPtr::operator=(&local_res18,param_2);
          local_res20 = local_res18;
          TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(lVar2 + 0x1600),&local_res20);
          plVar3 = *(longlong **)(lVar2 + 0x1650);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
          }
          *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 0x20;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          FUN_1423e8710(lVar5,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425c5800 FUN_1425c5800 body=23 status=ok
// SIG undefined FUN_1425c5800(void)

void FUN_1425c5800(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c580f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2f8))();
    return;
  }
  return;
}



// FUNCTION 1425c5820 ReceivedBunch body=83 status=ok
// SIG undefined ReceivedBunch(void)

void UChannel::ReceivedBunch(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x60,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorNetCullDistanceChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x60,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorNetCullDistanceChange");
  return;
}



// FUNCTION 1425c5880 FUN_1425c5880 body=23 status=ok
// SIG undefined FUN_1425c5880(void)

void FUN_1425c5880(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c588f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2d8))();
    return;
  }
  return;
}



// FUNCTION 1425c58a0 FUN_1425c58a0 body=83 status=ok
// SIG undefined FUN_1425c58a0(void)

void FUN_1425c58a0(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x58,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorNetUpdateFrequencyChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x58,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorNetUpdateFrequencyChange");
  return;
}



// FUNCTION 1425c5900 FUN_1425c5900 body=23 status=ok
// SIG undefined FUN_1425c5900(void)

void FUN_1425c5900(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c590f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x300))();
    return;
  }
  return;
}



// FUNCTION 1425c5920 FUN_1425c5920 body=83 status=ok
// SIG undefined FUN_1425c5920(void)

void FUN_1425c5920(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x62,L"Pure virtual not implemented (%s)",L"UReplicationDriver::NotifyActorOwnerChange"
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x62,L"Pure virtual not implemented (%s)",L"UReplicationDriver::NotifyActorOwnerChange"
            );
  return;
}



// FUNCTION 1425c5980 FUN_1425c5980 body=23 status=ok
// SIG undefined FUN_1425c5980(void)

void FUN_1425c5980(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c598f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2e0))();
    return;
  }
  return;
}



// FUNCTION 1425c59a0 UnbindPossessableObjects body=83 status=ok
// SIG undefined UnbindPossessableObjects(void)

void UMovieSceneSequence::UnbindPossessableObjects(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5a,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorOwnerRelevancyChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5a,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorOwnerRelevancyChange");
  return;
}



// FUNCTION 1425c5a00 FUN_1425c5a00 body=290 status=ok
// SIG undefined FUN_1425c5a00(void)

void FUN_1425c5a00(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined8 *local_28;
  longlong *local_20;
  
  local_res18[0] = param_3;
  cVar2 = (**(code **)(*param_1 + 0x368))();
  cVar3 = FNetGUIDCache::IsDynamicObject(param_1[0x1c],param_2);
  if (((cVar3 == '\0') && (*(char *)(param_2 + 0x95) != '\0')) && (cVar2 != '\0')) {
    lVar6 = 0;
    if ((int)param_1[0x57] != *(int *)((longlong)param_1 + 0x2e4)) {
      plVar5 = (longlong *)param_1[0x5e];
      if ((longlong *)param_1[0x5e] == (longlong *)0x0) {
        plVar5 = param_1 + 0x5d;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)local_res18[0] >> 0x20) + (int)local_res18[0]) &
                      (longlong)(int)param_1[0x5f] - 1U) * 4);
      if (iVar4 != -1) {
        lVar1 = param_1[0x56];
        do {
          lVar7 = (longlong)iVar4;
          if (*(longlong *)(lVar1 + lVar7 * 0x18) == local_res18[0]) {
            if ((iVar4 != -1) && (lVar1 = lVar1 + lVar7 * 0x18, lVar1 != 0)) {
              lVar6 = *(longlong *)(lVar1 + 8);
            }
            break;
          }
          iVar4 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
        } while (iVar4 != -1);
      }
    }
    local_res8 = 0;
    if (lVar6 != 0) {
      local_res18[0] = lVar6;
    }
    local_res10 = *(undefined8 *)(param_2 + 0x18);
    local_28 = &local_res10;
    local_20 = local_res18;
    TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(param_1 + 0x56,&local_res8,&local_28,0);
  }
  return;
}



// FUNCTION 1425c5b50 NotifyActorTearOff body=83 status=ok
// SIG undefined NotifyActorTearOff(void)

void UReplicationDriver::NotifyActorTearOff(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x52,L"Pure virtual not implemented (%s)",L"UReplicationDriver::NotifyActorTearOff");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x52,L"Pure virtual not implemented (%s)",L"UReplicationDriver::NotifyActorTearOff");
  return;
}



// FUNCTION 1425c5bb0 FUN_1425c5bb0 body=23 status=ok
// SIG undefined FUN_1425c5bb0(void)

void FUN_1425c5bb0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c5bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2e8))();
    return;
  }
  return;
}



// FUNCTION 1425c5bd0 GatherActorListsForConnection body=83 status=ok
// SIG undefined GatherActorListsForConnection(void)

void UReplicationGraphNode::GatherActorListsForConnection(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5c,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorUseOwnerRelevancyChange");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x5c,L"Pure virtual not implemented (%s)",
             L"UReplicationDriver::NotifyActorUseOwnerRelevancyChange");
  return;
}



// FUNCTION 1425c5c30 FUN_1425c5c30 body=267 status=ok
// SIG undefined FUN_1425c5c30(void)

void FUN_1425c5c30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_1425caff0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x10));
    FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(param_2 + 0xf0));
    local_res10 = local_res8;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x3a8,&local_res10);
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x68) != 0)) {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FWeakObjectPtr::operator=(&local_res8);
      lVar4 = FUN_14240d190(*(undefined8 *)(param_1 + 0x90),&local_res8);
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 0x20;
        *(undefined8 *)(lVar4 + 0x68) = 0;
        FUN_1423e8710(lVar4,0);
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x68);
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  iVar3 = *(int *)(param_1 + 0xa0) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + lVar4 * 8);
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x68), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 1425c5d40 FUN_1425c5d40 body=1064 status=ok
// SIG undefined FUN_1425c5d40(void)

void FUN_1425c5d40(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  char local_80;
  char cStack_7f;
  ulonglong local_78;
  uint local_70;
  int local_6c;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if (param_3 == param_1[0x1a]) {
    uVar15 = 0;
    if (param_2 != 0) {
      plVar16 = *(longlong **)(param_2 + 0xa0);
      uVar10 = (longlong)*(int *)(param_2 + 0xa8) & 0x1fffffffffffffff;
      if (plVar16 + *(int *)(param_2 + 0xa8) < plVar16) {
        uVar10 = uVar15;
      }
      uVar14 = uVar15;
      if (uVar10 != 0) {
        do {
          lVar2 = *plVar16;
          if (lVar2 != 0) {
            (**(code **)(*param_1 + 0x348))(param_1,lVar2);
            FNetworkObjectList::Remove(param_1[0xa5],lVar2);
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x56,*(undefined8 *)(lVar2 + 0x18));
            plVar17 = (longlong *)param_1[0xa4];
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x2a8))(plVar17,lVar2);
            }
          }
          plVar16 = plVar16 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar10);
      }
    }
    plVar16 = param_1 + 0x4c;
    local_78 = 0;
    iVar20 = (int)param_1[0x51];
    puStack_58 = (uint *)(param_1 + 0x4e);
    local_6c = 0;
    local_b8 = 0;
    uStack_b4 = 1;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    if (iVar20 != 0) {
      puVar18 = (uint *)param_1[0x50];
      if ((uint *)param_1[0x50] == (uint *)0x0) {
        puVar18 = puStack_58;
      }
      uVar1 = *puVar18;
      uVar10 = uVar15;
      uVar14 = uVar15;
      while (uVar1 == 0) {
        iVar9 = (int)uVar10;
        uStack_a0 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_a0;
        local_b8 = iVar9 + 1;
        uVar10 = (ulonglong)local_b8;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1425c5edf;
        uVar1 = puVar18[(longlong)iVar9 + 1];
      }
      uStack_b4 = -uVar1 & uVar1;
      iVar9 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_a8._4_4_ = (uStack_a0 - iVar9) + 0x1f;
      if (iVar20 < local_a8._4_4_) {
LAB_1425c5edf:
        local_a8._4_4_ = iVar20;
      }
    }
    auStack_50._4_4_ = local_a8._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_a0;
    auStack_50._12_4_ = iStack_9c;
    uStack_60 = local_b8;
    uStack_5c = uStack_b4;
    local_80 = '\0';
    cStack_7f = '\0';
    local_40._0_4_ = SUB84(plVar16,0);
    local_40._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
    uStack_a0 = 0xffffffff;
    iStack_9c = local_a8._4_4_;
    uStack_b0 = local_b8;
    uStack_ac = uStack_b4;
    local_98._8_4_ = (undefined4)local_40;
    local_98._0_8_ = auStack_50._8_8_;
    local_98._12_4_ = local_40._4_4_;
    bVar7 = local_a8._4_4_ < (int)param_1[0x51];
    uVar10 = uVar15;
    local_88 = plVar16;
    local_68 = plVar16;
    local_40 = plVar16;
    local_a8 = puStack_58;
    if (bVar7) {
      do {
        lVar2 = (longlong)iStack_9c * 0x18;
        cVar8 = FUN_14058c1e0(*(undefined8 *)(*plVar16 + 8 + lVar2),param_2);
        if (cVar8 != '\0') {
          uVar14 = 0;
          lVar3 = *(longlong *)(*plVar16 + 8 + lVar2);
          plVar17 = (longlong *)param_1[0x13];
          uVar15 = (longlong)(int)param_1[0x14] & 0x1fffffffffffffff;
          if (plVar17 + (int)param_1[0x14] < plVar17) {
            uVar15 = uVar14;
          }
          if (uVar15 != 0) {
LAB_1425c5fb0:
            lVar4 = *plVar17;
            plVar5 = *(longlong **)(lVar4 + 0x1650);
            if (plVar5 == (longlong *)0x0) {
              if (*(int *)(lVar4 + 0x1660) != *(int *)(lVar4 + 0x168c)) {
                iVar20 = *(int *)(lVar3 + 0x1c);
                lVar19 = *(longlong *)(lVar4 + 0x1698);
                if (*(longlong *)(lVar4 + 0x1698) == 0) {
                  lVar19 = lVar4 + 0x1690;
                }
                uVar13 = (longlong)*(int *)(lVar4 + 0x16a0) - 1;
                iVar9 = *(int *)(lVar19 + ((longlong)iVar20 & uVar13) * 4);
                if (iVar9 != -1) {
                  lVar6 = *(longlong *)(lVar4 + 0x1658);
                  do {
                    lVar11 = (longlong)iVar9;
                    if (*(int *)(lVar6 + lVar11 * 0xc) == iVar20) {
                      uVar13 = (longlong)*(int *)(lVar6 + 8 + lVar11 * 0xc) & uVar13;
                      puVar12 = (undefined4 *)(lVar19 + uVar13 * 4);
                      iVar20 = *(int *)(lVar19 + uVar13 * 4);
                      if (iVar20 != -1) goto LAB_1425c6056;
                      goto LAB_1425c607c;
                    }
                    iVar9 = *(int *)(lVar6 + 4 + lVar11 * 0xc);
                  } while (iVar9 != -1);
                }
              }
            }
            else {
              (**(code **)(*plVar5 + 0x298))(plVar5,lVar3);
            }
            goto LAB_1425c608a;
          }
LAB_1425c60a2:
          lVar3 = *plVar16;
          iVar20 = (int)uVar10;
          local_70 = iVar20 + 1;
          if (local_6c < (int)local_70) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar10);
          }
          uVar15 = local_78;
          uVar10 = (ulonglong)local_70;
          *(undefined4 *)(local_78 + (longlong)iVar20 * 4) = *(undefined4 *)(lVar3 + lVar2);
          TSet<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>,FDefaultSetAllocator>
          ::Remove(local_98._8_8_,iStack_9c);
          local_80 = '\x01';
        }
        uStack_a0 = uStack_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
      } while (iStack_9c < (int)local_a8[6]);
      if ((local_80 != '\0') && (cStack_7f != '\0')) {
        TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
      }
      if (uVar15 != 0) {
        FMemory::Free(uVar15);
      }
    }
  }
  return;
  while( true ) {
    lVar19 = (longlong)iVar20 * 3 + 1;
    iVar20 = *(int *)(lVar6 + lVar19 * 4);
    puVar12 = (undefined4 *)(lVar6 + lVar19 * 4);
    if (iVar20 == -1) break;
LAB_1425c6056:
    if (iVar20 == iVar9) {
      *puVar12 = *(undefined4 *)(lVar6 + lVar11 * 0xc + 4);
      break;
    }
  }
LAB_1425c607c:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized((longlong *)(lVar4 + 0x1658),iVar9,1);
LAB_1425c608a:
  plVar17 = plVar17 + 1;
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar15) goto LAB_1425c60a2;
  goto LAB_1425c5fb0;
}



// FUNCTION 1425c6170 FUN_1425c6170 body=984 status=ok
// SIG undefined FUN_1425c6170(void)

void FUN_1425c6170(longlong param_1,float *param_2,float *param_3,ulonglong param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  float fVar15;
  int local_118;
  void *local_110;
  uint local_108;
  undefined4 local_104;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined1 local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  float local_c8;
  longlong local_c0;
  float local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x728) != 0) {
      UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_a0);
      local_c8 = local_98 + local_8c;
      local_b8 = local_98 - local_8c;
      local_f8 = local_98 - local_8c;
      local_ec = local_98 + local_8c;
      local_100 = CONCAT44(local_9c - local_90,local_a0 - local_94);
      local_f4 = CONCAT44(local_9c + local_90,local_a0 + local_94);
      local_e8 = 1;
      local_d0 = (param_4 & 0xff) * 4;
      fVar1 = *(float *)((longlong)&local_100 + local_d0);
      fVar2 = *(float *)((longlong)&local_f4 + local_d0);
      uVar5 = UStaticMesh::GetNumLODs(*(undefined8 *)(param_1 + 0x728));
      FUN_142826ef0(param_1,uVar5,uVar5);
      local_e0 = *(longlong *)(param_1 + 0x758);
      local_118 = 0;
      local_c0 = (longlong)*(int *)(param_1 + 0x760) * 0xc0 + local_e0;
      if (local_e0 != local_c0) {
        puVar13 = (undefined8 *)(local_e0 + 0x30);
        do {
          uVar10 = 0;
          local_d8 = puVar13;
          do {
            AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
            uVar10 = uVar10 + 1;
          } while (uVar10 < 2);
          local_110 = (void *)0x0;
          local_104 = 0;
          local_a8 = *(longlong *)
                      (**(longlong **)(*(longlong *)(param_1 + 0x728) + 0x38) +
                      (longlong)local_118 * 8);
          uVar10 = *(uint *)(local_a8 + 0x13c);
          local_108 = uVar10;
          if (0 < (int)uVar10) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_110);
          }
          uVar12 = local_108;
          pvVar3 = local_110;
          _guard_xfg_dispatch_icall_nop(local_110,0,(longlong)(int)uVar10 << 2);
          lVar4 = local_a8;
          lVar7 = local_d0;
          uVar14 = 0;
          if (uVar10 != 0) {
            do {
              fVar15 = (*(float *)((ulonglong)(*(int *)(lVar4 + 0x138) * uVar14) + lVar7 +
                                  *(longlong *)(lVar4 + 0x130)) - fVar1) * (1.0 / (fVar2 - fVar1));
              local_100 = CONCAT44((param_3[1] - param_2[1]) * fVar15 + param_2[1],
                                   (*param_3 - *param_2) * fVar15 + *param_2);
              local_f8 = (param_3[2] - param_2[2]) * fVar15 + param_2[2];
              local_f4 = CONCAT44(local_f4._4_4_,(param_3[3] - param_2[3]) * fVar15 + param_2[3]);
              puVar6 = (undefined4 *)FLinearColor::ToFColor(&local_100,local_b0,param_5);
              lVar9 = (longlong)(int)uVar14;
              uVar14 = uVar14 + 1;
              *(undefined4 *)((longlong)pvVar3 + lVar9 * 4) = *puVar6;
              puVar13 = local_d8;
              uVar12 = local_108;
            } while (uVar14 < uVar10);
          }
          for (puVar11 = puVar13; puVar11 != puVar13 + 2; puVar11 = puVar11 + 1) {
            lVar7 = operator_new(0x58);
            uVar8 = 0;
            if (lVar7 != 0) {
              uVar8 = FUN_14271d780(lVar7);
            }
            *puVar11 = uVar8;
            FColorVertexBuffer::InitFromColorArray(uVar8,pvVar3,uVar12,4);
            FUN_141edf270(*puVar11);
          }
          local_118 = local_118 + 1;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          puVar13 = puVar13 + 0x18;
          local_e0 = local_e0 + 0xc0;
          local_d8 = puVar13;
        } while (local_e0 != local_c0);
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      FUN_1423424e0(param_1);
      *(byte *)(param_1 + 0x744) = *(byte *)(param_1 + 0x744) | 0x10;
    }
  }
  return;
}



// FUNCTION 1425c6550 PaintVerticesLerpAlongAxis body=14 status=ok
// SIG undefined PaintVerticesLerpAlongAxis(void)

void UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(void)

{
  FUN_1425c6170();
  return;
}



// FUNCTION 1425c6560 FUN_1425c6560 body=375 status=ok
// SIG undefined FUN_1425c6560(void)

void FUN_1425c6560(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    uVar1 = UStaticMesh::GetNumLODs();
    FUN_142826ef0(param_1,uVar1,uVar1);
    FLinearColor::ToFColor(param_2,local_res8,param_3);
    lVar9 = *(longlong *)(param_1 + 0x758);
    iVar8 = 0;
    lVar7 = (longlong)*(int *)(param_1 + 0x760) * 0xc0 + lVar9;
    for (; lVar9 != lVar7; lVar9 = lVar9 + 0xc0) {
      uVar4 = 0;
      do {
        AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
      puVar5 = (undefined8 *)(lVar9 + 0x30);
      uVar4 = 0;
      lVar6 = 0;
      uVar1 = *(undefined4 *)
               (*(longlong *)
                 (**(longlong **)(*(longlong *)(param_1 + 0x728) + 0x38) + (longlong)iVar8 * 8) +
               0x13c);
      do {
        FUN_141ee2e70(local_res20,*(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x84 + lVar6));
        lVar2 = operator_new(0x58);
        uVar3 = 0;
        if (lVar2 != 0) {
          uVar3 = FUN_14271d780(lVar2);
        }
        *puVar5 = uVar3;
        FColorVertexBuffer::InitFromColorArray(uVar3,local_res8,uVar1,0);
        FUN_141edf270(*puVar5);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 < 2);
      iVar8 = iVar8 + 1;
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
    FUN_1423424e0(param_1);
    *(byte *)(param_1 + 0x744) = *(byte *)(param_1 + 0x744) | 0x10;
  }
  return;
}



// FUNCTION 1425c66e0 FUN_1425c66e0 body=1367 status=ok
// SIG undefined FUN_1425c66e0(void)

void FUN_1425c66e0(undefined8 *param_1,longlong param_2,undefined8 param_3,void *param_4,
                  longlong *param_5)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar13;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_70 = 2;
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_78 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  plVar6 = local_78;
  FGenericPlatformString::Memcpy(local_78,&DAT_143f73c90,4);
  cVar3 = FUN_1404e14f0(param_5,&local_78,&local_68,&local_58,CONCAT44(uVar13,1),0);
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  puVar7 = local_68;
  if (cVar3 == '\0') {
    if ((int)param_5[1] == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_5;
    }
    FName::FName(&local_80,puVar10,0);
    if (((int)local_80 == 0) && ((int)((ulonglong)local_80 >> 0x20) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (param_4 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = *(ulonglong *)((longlong)param_4 + 0x38);
      }
      local_38 = 0xffffffff;
      local_34 = 0x101;
      local_32 = 0;
      local_48 = param_4;
      FUN_140472e10(&local_48);
      while (local_40 != 0) {
        if (*(longlong *)(local_40 + 0x18) == local_80) {
          if (local_40 != 0) {
            *param_1 = param_3;
            param_1[1] = local_40;
            param_1[2] = param_2;
            goto LAB_1425c6bce;
          }
          break;
        }
        local_40 = *(ulonglong *)(local_40 + 0x28);
        FUN_140472e10(&local_48);
      }
    }
    local_78 = (longlong *)0x0;
    local_70 = 0;
    UObject::CollectDefaultSubobjects(param_2,&local_78,0);
    uVar11 = 0;
    uVar9 = uVar11;
    if (0 < (int)local_70) {
      do {
        iVar4 = (int)param_5[1];
        pvVar1 = (void *)*param_5;
        local_48 = (void *)0x0;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        lVar5 = *(longlong *)(uVar11 + (longlong)local_78);
        if (iVar4 == 0) {
          local_40 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar4 * 2);
        }
        FUN_1425c66e0(param_1,lVar5,lVar5,*(undefined8 *)(lVar5 + 0x10),&local_48);
        if (param_1[1] != 0) {
          pvVar1 = local_58;
          if (local_78 != (longlong *)0x0) {
            FMemory::Free();
            pvVar1 = local_58;
          }
          goto joined_r0x0001425c6910;
        }
        uVar12 = (int)uVar9 + 1;
        uVar11 = uVar11 + 8;
        uVar9 = (ulonglong)uVar12;
        puVar7 = local_68;
      } while ((int)uVar12 < (int)local_70);
    }
  }
  else {
    puVar10 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar10 = local_68;
    }
    FName::FName(&local_80,puVar10,0);
    lVar5 = local_80;
    if (((int)local_80 == 0) && ((int)((ulonglong)local_80 >> 0x20) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (param_4 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = *(ulonglong *)((longlong)param_4 + 0x38);
      }
      local_38 = 0xffffffff;
      local_34 = 0x101;
      local_32 = 0;
      local_48 = param_4;
      FUN_14067b390(&local_48);
      pvVar1 = local_58;
      uVar9 = local_40;
      while (local_58 = pvVar1, local_40 = uVar9, uVar9 != 0) {
        if (*(longlong *)(uVar9 + 0x18) == lVar5) {
          if (uVar9 != 0) {
            lVar5 = (longlong)(int)local_50;
            iVar4 = *(int *)(uVar9 + 0x44);
            local_78 = (longlong *)0x0;
            local_70._4_4_ = (int)(local_70 >> 0x20);
            local_70 = CONCAT44(local_70._4_4_,(int)local_50);
            if ((int)local_50 == 0) {
              local_70 = local_50 & 0xffffffff;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_50 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(local_78,pvVar1,lVar5 * 2);
            }
            FUN_1425c66e0(param_1,param_2,iVar4 + param_2,*(undefined8 *)(uVar9 + 0x70),&local_78);
            goto joined_r0x0001425c6910;
          }
          break;
        }
        local_40 = *(ulonglong *)(uVar9 + 0x28);
        FUN_14067b390(&local_48);
        pvVar1 = local_58;
        uVar9 = local_40;
      }
    }
    puVar10 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar10 = puVar7;
    }
    FName::FName(&local_80,puVar10,1);
    uVar9 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    UObject::CollectDefaultSubobjects(param_2,&local_78,0);
    if (param_2 != 0) {
      lVar5 = APlayerState::GetPrivateStaticClass();
      uVar11 = local_70;
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar8 = (longlong)(int)local_70;
        lVar5 = *(longlong *)(param_2 + 0x470);
        for (plVar6 = local_78; plVar6 != local_78 + lVar8; plVar6 = plVar6 + 1) {
          if (*plVar6 == lVar5) {
            if ((int)((longlong)plVar6 - (longlong)local_78 >> 3) != -1) goto LAB_1425c6991;
            break;
          }
        }
        iVar4 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar4);
        if (local_70._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_78,uVar11 & 0xffffffff);
        }
        local_78[lVar8] = lVar5;
      }
    }
LAB_1425c6991:
    if (0 < (int)local_70) {
      local_88 = 0;
      uVar11 = uVar9;
LAB_1425c69a0:
      lVar5 = *(longlong *)(uVar9 + (longlong)local_78);
      FLinkerLoad::FindSubobjectRedirectName(&local_88,&local_80,*(undefined8 *)(lVar5 + 0x10));
      pvVar1 = local_58;
      lVar8 = local_80;
      if (local_88 != 0) {
        lVar8 = local_88;
      }
      if (*(longlong *)(lVar5 + 0x18) != lVar8) goto code_r0x0001425c69c8;
      lVar8 = (longlong)(int)local_50;
      local_48 = (void *)0x0;
      local_40 = CONCAT44(local_40._4_4_,(int)local_50);
      if ((int)local_50 == 0) {
        local_40 = local_50 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar8 * 2);
      }
      FUN_1425c66e0(param_1,lVar5,lVar5,*(undefined8 *)(lVar5 + 0x10),&local_48);
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
joined_r0x0001425c6910:
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      puVar7 = local_68;
      if (local_68 == (undefined2 *)0x0) goto LAB_1425c6be9;
      goto LAB_1425c6be4;
    }
  }
joined_r0x0001425c6bc7:
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
LAB_1425c6bce:
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (puVar7 != (undefined2 *)0x0) {
LAB_1425c6be4:
    FMemory::Free(puVar7);
  }
LAB_1425c6be9:
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
code_r0x0001425c69c8:
  uVar12 = (int)uVar11 + 1;
  uVar11 = (ulonglong)uVar12;
  uVar9 = uVar9 + 8;
  puVar7 = local_68;
  if ((int)local_70 <= (int)uVar12) goto joined_r0x0001425c6bc7;
  goto LAB_1425c69a0;
}



// FUNCTION 1425c6c40 FUN_1425c6c40 body=37 status=ok
// SIG undefined FUN_1425c6c40(void)

void FUN_1425c6c40(longlong param_1)

{
  *(int *)(param_1 + 0x11c) =
       *(int *)(param_1 + 0x11c) + (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x550));
  FBitWriterMark::Pop(param_1 + 0x220,param_1 + 0x4b0);
  return;
}



// FUNCTION 1425c6c70 PostInitProperties body=112 status=ok
// SIG undefined PostInitProperties(void)

undefined8 * UMaterialParameterCollection::PostInitProperties(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  FUN_1417931d0();
  uVar2 = *(uint *)(param_1 + 8) >> 4;
  puVar3 = (undefined8 *)(ulonglong)uVar2;
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar3 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      uVar1 = DAT_146aff030;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = uVar1;
      *(undefined4 *)(puVar4 + 10) = 0;
      *(undefined8 **)(param_1 + 0x58) = puVar4;
      return puVar4;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return puVar3;
}



// FUNCTION 1425c6ce0 PostInitProperties body=118 status=ok
// SIG undefined PostInitProperties(void)

undefined8 * UMaterialParameterCollectionInstance::PostInitProperties(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  FUN_1417931d0();
  uVar2 = *(uint *)(param_1 + 8) >> 4;
  puVar3 = (undefined8 *)(ulonglong)uVar2;
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)operator_new(0x58);
    puVar3 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      uVar1 = DAT_146aff030;
      *(undefined4 *)(puVar4 + 4) = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = uVar1;
      *(undefined4 *)(puVar4 + 10) = 0;
      *(undefined8 **)(param_1 + 0xe0) = puVar4;
      return puVar4;
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  return puVar3;
}



// FUNCTION 1425c6d60 FUN_1425c6d60 body=1028 status=ok
// SIG undefined FUN_1425c6d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425c6d60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_1417931d0();
  local_res8 = 0x11a;
  plVar10 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x120) = 0x11a;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar4 = FUN_1428dfc70();
    uVar5 = UProperty::GetPrivateStaticClass();
    uVar4 = StaticFindObjectChecked(uVar5,uVar4,L"Role",0);
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    uVar4 = FUN_1428dfc70();
    uVar5 = UProperty::GetPrivateStaticClass();
    uVar4 = StaticFindObjectChecked(uVar5,uVar4,L"RemoteRole",0);
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    lVar6 = operator_new(0x2a8);
    plVar7 = plVar10;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FNetGUIDCache::FNetGUIDCache(lVar6,param_1);
    }
    local_58 = plVar7;
    plVar8 = (longlong *)operator_new(0x18);
    local_50 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_14511d188;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      local_50 = plVar8;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar7,plVar7);
    if ((longlong **)(param_1 + 0xe0) != &local_58) {
      *(longlong **)(param_1 + 0xe0) = local_58;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe8,&local_50);
    }
    plVar7 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
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
    plVar8 = (longlong *)operator_new(0x58);
    plVar7 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      *(undefined1 *)plVar8 = 0;
      *(undefined4 *)((longlong)plVar8 + 4) = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      *(undefined4 *)(plVar8 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
      plVar8[9] = 0;
      *(undefined4 *)(plVar8 + 10) = 0;
      plVar7 = plVar8;
    }
    local_48 = plVar7;
    plVar8 = (longlong *)operator_new(0x18);
    uStack_40 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_14511d198;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      uStack_40 = plVar8;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar7,plVar7);
    if ((undefined8 *)(param_1 + 0xf0) != &local_48) {
      *(undefined8 *)(param_1 + 0xf0) = local_48;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf8,&uStack_40);
    }
    plVar7 = uStack_40;
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_40 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_40)(uStack_40);
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
    uVar4 = FCommandLine::Get();
    uVar3 = FParse::Param(uVar4,L"profilestats");
    *(undefined1 *)(param_1 + 0x181) = uVar3;
    uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
    local_48 = (longlong *)&LAB_140b1900c;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    plVar7 = plVar10;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_40._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar6;
      *plVar8 = (longlong)&PTR_FUN_144012f78;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535808,1);
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
      iVar2 = DAT_146535810;
      lVar6 = (longlong)DAT_146535810;
      plVar7 = (longlong *)*puVar9;
      DAT_146535810 = DAT_146535810 + 1;
      if (DAT_146535814 < DAT_146535810) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535808,iVar2);
      }
      puVar9 = (undefined8 *)(lVar6 * 0x10 + DAT_146535808);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    *(longlong **)(param_1 + 0x510) = plVar7;
    uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
    local_48 = (longlong *)&LAB_1406daf40;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_40._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_FUN_144012f78;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357f0,1);
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
      iVar2 = DAT_1465357f8;
      lVar6 = (longlong)DAT_1465357f8;
      plVar10 = (longlong *)*puVar9;
      DAT_1465357f8 = DAT_1465357f8 + 1;
      if (DAT_1465357fc < DAT_1465357f8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357f0,iVar2);
      }
      puVar9 = (undefined8 *)(lVar6 * 0x10 + _DAT_1465357f0);
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    *(longlong **)(param_1 + 0x518) = plVar10;
  }
  return;
}



// FUNCTION 1425c7170 FUN_1425c7170 body=630 status=ok
// SIG undefined FUN_1425c7170(void)

void FUN_1425c7170(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong local_res8;
  code *in_stack_ffffffffffffffb8;
  undefined8 *local_28;
  undefined8 local_20;
  int local_18;
  
  UObject::PostLoad();
  if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
      *(int *)(param_1 + 0x2c) == 0) && *(int *)(param_1 + 0x28) == 0) {
    puVar7 = (undefined4 *)FGuid::NewGuid(&local_28);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *(undefined4 *)(param_1 + 0x28) = *puVar7;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
  iVar6 = *(int *)(param_1 + 0x40) + 3;
  local_20 = 1;
  puVar9 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  iVar6 = ((int)((iVar6 >> 0x1f & 3U) + iVar6) >> 2) + *(int *)(param_1 + 0x50);
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_28,0);
  if (local_28 != (undefined8 *)0x0) {
    *(undefined4 *)(local_28 + 2) = 0;
    *local_28 = L"Vectors";
    local_28[1] = &DAT_14510c3bc;
    *(undefined4 *)((longlong)local_28 + 0x14) = 4;
    *(undefined4 *)(local_28 + 3) = 1;
    *(undefined4 *)((longlong)local_28 + 0x1c) = 1;
    *(undefined4 *)(local_28 + 4) = 4;
    *(int *)((longlong)local_28 + 0x24) = iVar6;
    local_28[5] = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b04700) && (_Init_thread_header(&DAT_146b04700), DAT_146b04700 == -1))
  {
    FName::FName(&DAT_146b046f8,L"MaterialCollection",1);
    _Init_thread_footer(&DAT_146b04700);
  }
  lVar8 = operator_new(0x88);
  if (lVar8 != 0) {
    in_stack_ffffffffffffffb8 = AK::MemoryMgr::GetPoolName;
    puVar9 = (undefined8 *)
             FUniformBufferStruct::FUniformBufferStruct
                       (lVar8,&DAT_146b046f8,L"MaterialCollection",L"MaterialCollection",
                        AK::MemoryMgr::GetPoolName,iVar6 * 0x10,&local_28,0);
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if (plVar1 == &local_res8) {
    if (puVar9 == (undefined8 *)0x0) goto LAB_1425c72ca;
    puVar10 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar9;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1425c72ca;
    puVar10 = (undefined8 *)*puVar2;
    puVar9 = puVar2;
  }
  (*(code *)*puVar10)(puVar9,1);
LAB_1425c72ca:
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_18 = -1;
  uVar11 = FUN_142a2f930();
  FUN_1417a5560(uVar11,&local_28,1,0x10,(ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (local_28[local_18] == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != (undefined8 *)0x0) {
          FMemory::Free(local_28);
        }
        FUN_1425d4bb0(param_1);
        return;
      }
      FUN_1428c4f70(local_28[local_18],param_1,1);
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (local_28[local_18] != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1425c73f0 FUN_1425c73f0 body=166 status=ok
// SIG undefined FUN_1425c73f0(void)

void FUN_1425c73f0(longlong param_1)

{
  undefined8 uVar1;
  
  UObject::PostLoad();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    FUN_1425d5b40(param_1);
    return;
  }
  return;
}



// FUNCTION 1425c74a0 FUN_1425c74a0 body=294 status=ok
// SIG undefined FUN_1425c74a0(void)

void FUN_1425c74a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
    iVar5 = *(int *)(param_1 + 0x38);
    if ((*(int *)(lVar1 + 0x20) == iVar5) && (iVar6 = iVar5 + -1, -1 < iVar6)) {
      lVar8 = (longlong)iVar6 * 0x1c;
      lVar7 = (longlong)iVar6 * 0x30;
      lVar9 = (longlong)iVar5 * 0x30;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x18);
        bVar3 = FUN_142433a10();
        if (*(char *)(lVar8 + (ulonglong)bVar3 * 8 + lVar2) == '\0') {
          lVar2 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(lVar2 + 0x18 + lVar7) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar2 + lVar7) != 0) {
            FMemory::Free();
          }
          iVar5 = *(int *)(param_1 + 0x38);
          iVar4 = (iVar5 - iVar6) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar7 + *(longlong *)(param_1 + 0x30)),
                       (void *)(lVar9 + *(longlong *)(param_1 + 0x30)),(longlong)iVar4 * 0x30);
            iVar5 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar5 + -1;
          TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1 + 0x30);
        }
        lVar9 = lVar9 + -0x30;
        lVar7 = lVar7 + -0x30;
        lVar8 = lVar8 + -0x1c;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  return;
}



// FUNCTION 1425c75d0 FUN_1425c75d0 body=10 status=ok
// SIG undefined FUN_1425c75d0(void)

void FUN_1425c75d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425c75d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))();
  return;
}



// FUNCTION 1425c75e0 FUN_1425c75e0 body=55 status=ok
// SIG undefined FUN_1425c75e0(void)

void FUN_1425c75e0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar1 = (longlong *)UOnlineEngineInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x0001425c760a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x350))(plVar1,*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}



// FUNCTION 1425c7620 OnChangePolygonVertexInstances body=10 status=ok
// SIG undefined OnChangePolygonVertexInstances(void)

void UEditableGeometryCollectionAdapter::OnChangePolygonVertexInstances(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425c7623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))();
  return;
}



// FUNCTION 1425c7630 FUN_1425c7630 body=3925 status=ok
// SIG undefined FUN_1425c7630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425c7630(undefined8 param_1,char ***param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char **ppcVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  char ***pppcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  char local_3c8 [4];
  float local_3c4;
  undefined1 *****local_3c0;
  undefined8 local_3b8;
  undefined1 *puStack_3b0;
  uint local_3a8;
  int iStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 ****local_398;
  char ***local_390;
  undefined1 ****local_388;
  char ****local_380;
  undefined1 ****local_378;
  undefined8 local_370;
  undefined4 uStack_368;
  uint uStack_364;
  undefined1 *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  float local_340;
  uint local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320 [2];
  longlong *local_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  int local_2a4;
  longlong local_298;
  undefined4 local_290;
  longlong local_288;
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  int local_254;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  int local_204;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  uint local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  int local_d8;
  char local_d4;
  int local_d0;
  char ***local_c8;
  longlong local_c0;
  int local_b8;
  undefined1 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  lVar17 = 0;
  local_3b8 = 0;
  puStack_3b0 = (undefined1 *)0x0;
  local_3a8 = -1;
  uVar12 = FUN_1429c3150();
  local_3d8 = 0;
  FUN_1417a5560(uVar12,&local_3b8,1,0x10);
  uVar21 = (ulonglong)puStack_3b0 & 0xffffffff;
  do {
    local_3a8 = local_3a8 + 1;
    lVar27 = local_3b8;
    if ((int)puStack_3b0 <= (int)local_3a8) break;
  } while (*(longlong *)(local_3b8 + (longlong)(int)local_3a8 * 8) == 0);
LAB_1425c76c6:
  if (((int)local_3a8 < 0) || ((int)uVar21 <= (int)local_3a8)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_1425c7741;
  local_398 = (undefined1 ****)0x11a;
  plVar3 = *(longlong **)(lVar27 + (longlong)(int)local_3a8 * 8);
  if (plVar3[0x24] == 0x11a) {
    cVar9 = (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar27 = local_3b8;
    if (cVar9 != '\0') {
      lVar17 = *(longlong *)(local_3b8 + (longlong)(int)local_3a8 * 8);
LAB_1425c7741:
      if (lVar27 != 0) {
        FMemory::Free(lVar27);
      }
      local_288 = 0;
      local_1a8 = (undefined1 *)0x0;
      local_280 = 0;
      local_268 = 0;
      local_260 = 0;
      local_258 = 0xffffffff;
      local_254 = 0;
      local_248 = 0;
      local_240 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2a4 = 0;
      local_298 = 0;
      local_290 = 0;
      local_238 = 0;
      local_230 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0xffffffff;
      local_204 = 0;
      local_1f8 = (undefined1 *)0x0;
      local_1f0 = 0;
      local_148 = 0;
      local_140 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0xffffffff;
      local_114 = 0;
      local_108 = (undefined1 *)0x0;
      local_100 = 0;
      local_198 = 0;
      local_190 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0xffffffff;
      local_164 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1b4 = 0;
      local_1a0 = 0;
      if (lVar17 != 0) {
        param_2 = *(char ****)(lVar17 + 0xd0);
      }
      if (param_2 != (char ***)0x0) {
        local_398 = (undefined1 ****)FUN_1428dfc70();
        local_f8[0] = 5;
        local_a0 = 0;
        local_390 = param_2;
        FUN_14044bc80(&local_f0,&local_390,&local_398);
        FUN_14045a130(local_f8);
        fVar28 = local_3c4;
        fVar29 = local_3c4;
        fVar30 = local_3c4;
        fVar31 = local_3c4;
        fVar32 = local_3c4;
        fVar33 = local_3c4;
        if (local_d4 == '\0') {
LAB_1425c7980:
          local_390 = local_c8;
          if ((*(byte *)((longlong)local_c8 + 0x92) & 0x40) != 0) {
            bVar1 = *(byte *)((longlong)local_c8 + 0x129);
            local_33c = (uint)bVar1;
            if ((int)local_230 != local_204) {
              puVar18 = local_200;
              if (local_1f8 != (undefined1 *)0x0) {
                puVar18 = local_1f8;
              }
              iVar10 = *(int *)(puVar18 + ((ulonglong)(local_1f0 - 1) & (ulonglong)bVar1) * 4);
              while (iVar10 != -1) {
                lVar17 = (longlong)iVar10;
                if (*(uint *)(local_238 + lVar17 * 0x10) == (uint)bVar1) {
                  if ((iVar10 != -1) && (lVar17 = local_238 + lVar17 * 0x10, lVar17 != 0))
                  goto LAB_1425c7a35;
                  break;
                }
                iVar10 = *(int *)(local_238 + 8 + lVar17 * 0x10);
              }
            }
            local_3c0 = (undefined1 *****)&local_33c;
            FUN_14058d450(&local_238,&local_338,&local_3c0,0);
            lVar17 = (longlong)local_338 * 0x10 + local_238;
LAB_1425c7a35:
            *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
            ppcVar4 = local_390[0x2d];
            if (ppcVar4 == (char **)0x0) {
              puStack_3b0 = (undefined1 *)CONCAT44(puStack_3b0._4_4_,DAT_1468b5d98);
              puVar13 = &local_3b8;
              local_3b8 = _DAT_1468b5d90;
            }
            else {
              puVar13 = (undefined8 *)&local_2f0;
              local_2f0 = *(undefined4 *)(ppcVar4 + 0x44);
              local_2e8 = *(undefined4 *)(ppcVar4 + 0x45);
              uStack_2ec = *(undefined4 *)((longlong)ppcVar4 + 0x224);
            }
            uVar12 = *puVar13;
            local_340 = *(float *)(puVar13 + 1);
            local_348._0_4_ = (float)uVar12;
            local_348._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
            if (local_3c8[0] == '\0') {
              local_3c8[0] = '\x01';
              fVar28 = local_340;
              fVar29 = local_348._4_4_;
              fVar30 = (float)local_348;
              fVar31 = (float)local_348;
              fVar32 = local_348._4_4_;
              fVar33 = local_340;
            }
            else {
              if ((float)local_348 < fVar31) {
                fVar31 = (float)local_348;
              }
              if (local_348._4_4_ < fVar32) {
                fVar32 = local_348._4_4_;
              }
              if (local_340 < fVar33) {
                fVar33 = local_340;
              }
              if (fVar30 < (float)local_348) {
                fVar30 = (float)local_348;
              }
              if (fVar29 < local_348._4_4_) {
                fVar29 = local_348._4_4_;
              }
              if (fVar28 < local_340) {
                fVar28 = local_340;
              }
            }
            local_388 = (undefined1 ****)local_390[2];
            local_348 = uVar12;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_2d8,&local_334);
            if ((local_334 == -1) || (lVar17 = local_2d8 + (longlong)local_334 * 0x18, lVar17 == 0))
            {
              local_3c0 = &local_388;
              TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
              ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(&local_2d8,&local_330,&local_3c0);
              lVar17 = local_2d8 + (longlong)local_330 * 0x18;
            }
            *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
            for (; local_388 != (undefined1 ****)0x0; local_388 = (undefined1 ****)local_388[6]) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(&local_288,&local_32c,local_388);
              if ((local_32c == -1) ||
                 (lVar17 = local_288 + (longlong)local_32c * 0x18, lVar17 == 0)) {
                local_3c0 = &local_388;
                TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(&local_288,&local_328,&local_3c0);
                lVar17 = local_288 + (longlong)local_328 * 0x18;
              }
              *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
            }
            iVar10 = rand();
            local_3c0 = (undefined1 *****)&local_390;
            FUN_1425aa570(&local_148,&local_324,&local_3c0);
            *(int *)(local_148 + 8 + (longlong)local_324 * 0x18) = iVar10;
            FWeakObjectPtr::operator=(&local_380,local_390);
            iVar10 = rand();
            local_3c0 = &local_380;
            FUN_1425a9a00(&local_198,local_320,&local_3c0);
            *(int *)(local_198 + 8 + (longlong)local_320[0] * 0x14) = iVar10;
            iVar10 = rand();
            local_398 = (undefined1 ****)0xffffffff;
            if (local_390 != (char ***)0x0) {
              FWeakObjectPtr::operator=(&local_378);
              local_398 = local_378;
            }
            local_3c0 = &local_398;
            FUN_1425a9f80(&local_1e8,local_3c8 + 4,&local_3c0);
            *(int *)(local_1e8 + 8 + (longlong)(int)local_3c4 * 0x14) = iVar10;
          }
          lVar17 = local_f0;
          iVar10 = local_d8 + 1;
          if (iVar10 < local_b8 + local_e0) {
            lVar27 = (longlong)iVar10 * 8;
            iVar25 = local_b8;
            iVar19 = local_e0;
            do {
              lVar16 = 0;
              if (iVar10 < iVar19) {
                pppcVar22 = *(char ****)(local_e8 + lVar27);
              }
              else {
                pppcVar22 = *(char ****)(local_c0 + (longlong)(iVar10 - iVar19) * 8);
              }
              local_d0 = local_d0 + 1;
              if ((pppcVar22 != (char ***)0x0) &&
                 (lVar14 = AActor::GetLevel(pppcVar22), iVar25 = local_b8, iVar19 = local_e0,
                 lVar14 != 0)) {
                if ((local_f8[0] & 1) != 0) {
                  iVar2 = *(int *)((longlong)pppcVar22 + 0xc);
                  if (iVar2 < (int)DAT_1469e91c4) {
                    uVar20 = iVar2 >> 0x1f & 0xffff;
                    uVar11 = iVar2 + uVar20;
                    lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                             (longlong)(int)((uVar11 & 0xffff) - uVar20) * 0x18;
                  }
                  if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_1425c7eaa;
                }
                if (((local_f8[0] >> 1 & 1) == 0) ||
                   (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(pppcVar22), iVar25 = local_b8,
                   iVar19 = local_e0, cVar9 != '\0')) {
                  if ((local_f8[0] >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    piVar5 = *(int **)(lVar14 + 600);
                    if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                        (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)
                        ) || (piVar5 == piVar15)) {
                      bVar7 = true;
                    }
                    else {
                      bVar7 = false;
                    }
                    if ((piVar5 == (int *)0x0) || (*piVar5 == 2)) {
                      bVar8 = true;
                    }
                    else {
                      bVar8 = false;
                    }
                    if ((bVar7) || (bVar7 = false, bVar8)) {
                      bVar7 = true;
                    }
                    iVar25 = local_b8;
                    iVar19 = local_e0;
                    if ((!bVar6) || (!bVar7)) goto LAB_1425c7eaa;
                  }
                  lVar16 = ULevel::GetWorld(lVar14);
                  iVar25 = local_b8;
                  iVar19 = local_e0;
                  if (lVar16 == lVar17) {
                    lVar16 = AActor::GetLevel(pppcVar22);
                    if (lVar16 == *(longlong *)(lVar17 + 0x30)) goto LAB_1425c807c;
                    lVar16 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(pppcVar22[2] + 0x12) < *(int *)(lVar16 + 0x90)) ||
                       (*(longlong *)(pppcVar22[2][0x11] + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
                        lVar16 + 0x88)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    iVar25 = local_b8;
                    iVar19 = local_e0;
                    if (!bVar6) goto LAB_1425c807c;
                  }
                }
              }
LAB_1425c7eaa:
              iVar10 = iVar10 + 1;
              lVar27 = lVar27 + 8;
              if (iVar25 + iVar19 <= iVar10) break;
            } while( true );
          }
          local_c8 = (char ***)0x0;
          local_d4 = '\x01';
        }
LAB_1425c7f10:
        uVar21 = 0;
        TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_f0);
        local_378 = (undefined1 ****)local_3c8;
        local_380 = (char ****)&local_378;
        if (0 < (int)local_280 - local_254) {
          TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(&local_288);
          local_3c0 = &local_380;
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
                    (local_288,(longlong)((int)local_280 - local_254),local_3c8[0],&local_3c0);
        }
        TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
        ::Rehash(&local_288);
        local_378 = (undefined1 ****)local_3c8;
        local_380 = (char ****)&local_378;
        if (0 < (int)local_2d0 - local_2a4) {
          TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(&local_2d8);
          local_3c0 = &local_380;
          AlgoImpl::
          IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
                    (local_2d8,(longlong)((int)local_2d0 - local_2a4),local_3c8[0],&local_3c0);
        }
        TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
        ::Rehash(&local_2d8);
        puStack_3b0 = local_278;
        local_3b8._0_4_ = 0;
        local_3b8._4_4_ = 1;
        local_3a8 = 0xffffffff;
        iStack_3a4 = 0;
        uStack_3a0 = 0;
        iVar10 = 0;
        if ((int)local_260 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
          iVar10 = (int)local_260;
        }
        uStack_358._0_4_ = local_3a8;
        uStack_358._4_4_ = iStack_3a4;
        local_350 = CONCAT44(uStack_39c,uStack_3a0);
        local_318 = &local_288;
        uStack_310._0_4_ = (undefined4)local_3b8;
        uStack_310._4_4_ = local_3b8._4_4_;
        puStack_308 = puStack_3b0;
        local_3a8 = -1 << ((byte)iVar10 & 0x1f);
        uStack_368 = (undefined4)local_3b8;
        uStack_364 = local_3b8._4_4_;
        local_360 = puStack_3b0;
        iStack_3a4 = iVar10;
        uStack_2f8 = local_350;
        local_370 = local_318;
        uStack_300._0_4_ = (uint)uStack_358;
        uStack_300._4_4_ = uStack_358._4_4_;
        while( true ) {
          if ((uStack_358._4_4_ == iVar10) && (local_360 == local_278)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_370 == &local_288)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) break;
          uStack_358._0_4_ = (uint)uStack_358 & ~uStack_364;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_368);
        }
        puStack_3b0 = local_2c8;
        local_3b8._0_4_ = 0;
        local_3b8._4_4_ = 1;
        local_3a8 = 0xffffffff;
        iStack_3a4 = 0;
        uStack_3a0 = 0;
        iVar10 = 0;
        if ((int)local_2b0 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
          iVar10 = (int)local_2b0;
        }
        uStack_358._0_4_ = local_3a8;
        uStack_358._4_4_ = iStack_3a4;
        local_350 = CONCAT44(uStack_39c,uStack_3a0);
        local_318 = &local_2d8;
        uStack_310._0_4_ = (undefined4)local_3b8;
        uStack_310._4_4_ = local_3b8._4_4_;
        puStack_308 = puStack_3b0;
        local_3a8 = -1 << ((byte)iVar10 & 0x1f);
        uStack_368 = (undefined4)local_3b8;
        uStack_364 = local_3b8._4_4_;
        local_360 = puStack_3b0;
        iStack_3a4 = iVar10;
        uStack_2f8 = local_350;
        local_370 = local_318;
        uStack_300._0_4_ = (uint)uStack_358;
        uStack_300._4_4_ = uStack_358._4_4_;
        while( true ) {
          if ((uStack_358._4_4_ == iVar10) && (local_360 == local_2c8)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_370 == &local_2d8)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) break;
          uStack_358._0_4_ = (uint)uStack_358 & ~uStack_364;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_368);
        }
        puStack_3b0 = local_228;
        local_3b8 = 0x100000000;
        local_3a8 = 0xffffffff;
        iStack_3a4 = 0;
        uStack_3a0 = 0;
        iVar10 = 0;
        if ((int)local_210 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
          iVar10 = (int)local_210;
        }
        uStack_358 = CONCAT44(iStack_3a4,local_3a8);
        local_350 = CONCAT44(uStack_39c,uStack_3a0);
        local_318 = &local_238;
        uStack_310 = local_3b8;
        lVar17 = uStack_310;
        puStack_308 = puStack_3b0;
        uStack_310._0_4_ = (undefined4)local_3b8;
        uStack_310._4_4_ = (uint)((ulonglong)local_3b8 >> 0x20);
        local_3a8 = -1 << ((byte)iVar10 & 0x1f);
        uStack_368 = (undefined4)uStack_310;
        uStack_364 = uStack_310._4_4_;
        local_360 = puStack_3b0;
        iStack_3a4 = iVar10;
        uStack_310 = lVar17;
        uStack_300 = uStack_358;
        uStack_2f8 = local_350;
        local_370 = local_318;
        while( true ) {
          if ((uStack_358._4_4_ == iVar10) && (local_360 == local_228)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_370 == &local_238)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) break;
          uStack_358 = CONCAT44(uStack_358._4_4_,(uint)uStack_358 & ~uStack_364);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_368);
        }
        uVar12 = FUN_141672640();
        FOutputDevice::LogfImpl
                  (uVar12,L"TSet: %i elements, %i hash slots",(int)local_140 - local_114,local_100);
        iVar10 = local_100;
        uVar23 = uVar21;
        uVar24 = uVar21;
        if (0 < local_100) {
          do {
            puVar18 = local_110;
            if (local_108 != (undefined1 *)0x0) {
              puVar18 = local_108;
            }
            uVar26 = uVar21;
            for (iVar25 = *(int *)(puVar18 + ((longlong)(local_100 + -1) & uVar24) * 4);
                iVar25 != -1; iVar25 = *(int *)(local_148 + 0x10 + (longlong)iVar25 * 0x18)) {
              uVar26 = (ulonglong)((int)uVar26 + 1);
            }
            FOutputDevice::LogfImpl(uVar12,L"   Hash[%i] = %i",uVar23,uVar26);
            uVar11 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar11;
            uVar24 = uVar24 + 1;
          } while ((int)uVar11 < iVar10);
        }
        uVar12 = FUN_141672640();
        FOutputDevice::LogfImpl
                  (uVar12,L"TSet: %i elements, %i hash slots",(int)local_190 - local_164,local_150);
        iVar10 = local_150;
        uVar23 = uVar21;
        uVar24 = uVar21;
        if (0 < local_150) {
          do {
            puVar18 = local_160;
            if (local_158 != (undefined1 *)0x0) {
              puVar18 = local_158;
            }
            uVar26 = uVar21;
            for (iVar25 = *(int *)(puVar18 + ((longlong)(local_150 + -1) & uVar24) * 4);
                iVar25 != -1; iVar25 = *(int *)(local_198 + 0xc + (longlong)iVar25 * 0x14)) {
              uVar26 = (ulonglong)((int)uVar26 + 1);
            }
            FOutputDevice::LogfImpl(uVar12,L"   Hash[%i] = %i",uVar23,uVar26);
            uVar11 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar11;
            uVar24 = uVar24 + 1;
          } while ((int)uVar11 < iVar10);
        }
        uVar12 = FUN_141672640();
        FOutputDevice::LogfImpl
                  (uVar12,L"TSet: %i elements, %i hash slots",(int)local_1e0 - local_1b4,local_1a0);
        iVar10 = local_1a0;
        uVar23 = uVar21;
        uVar24 = uVar21;
        if (0 < local_1a0) {
          do {
            puVar18 = local_1b0;
            if (local_1a8 != (undefined1 *)0x0) {
              puVar18 = local_1a8;
            }
            uVar26 = uVar21;
            for (iVar25 = *(int *)(puVar18 + ((longlong)(local_1a0 + -1) & uVar24) * 4);
                iVar25 != -1; iVar25 = *(int *)(local_1e8 + 0xc + (longlong)iVar25 * 0x14)) {
              uVar26 = (ulonglong)((int)uVar26 + 1);
            }
            FOutputDevice::LogfImpl(uVar12,L"   Hash[%i] = %i",uVar23,uVar26);
            uVar11 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar11;
            uVar24 = uVar24 + 1;
          } while ((int)uVar11 < iVar10);
        }
      }
      local_1a0 = 0;
      if (local_1a8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_1e8);
      local_150 = 0;
      if (local_158 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_198);
      local_100 = 0;
      if (local_108 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_148);
      local_1f0 = 0;
      if (local_1f8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_238);
      local_290 = 0;
      if (local_298 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_2d8);
      local_240 = 0;
      if (local_248 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_288);
      return;
    }
    uVar21 = (ulonglong)puStack_3b0 & 0xffffffff;
  }
  do {
    local_3a8 = local_3a8 + 1;
    if ((int)uVar21 <= (int)local_3a8) break;
  } while (*(longlong *)(lVar27 + (longlong)(int)local_3a8 * 8) == 0);
  goto LAB_1425c76c6;
LAB_1425c807c:
  local_c8 = pppcVar22;
  local_d8 = iVar10;
  if (local_d4 != '\0') goto LAB_1425c7f10;
  goto LAB_1425c7980;
}



// FUNCTION 1425c8590 FUN_1425c8590 body=316 status=ok
// SIG undefined FUN_1425c8590(void)

void FUN_1425c8590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar6 = (longlong *)UOnlineEngineInterface::Get();
    iVar5 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(param_1 + 0xd0));
    if ((((iVar5 != 0) &&
         (plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x1580) + 8),
         plVar6 != (longlong *)0x0)) && (*(int *)((longlong)plVar6 + 0x44) == 4)) &&
       (uVar8 = 0, 0 < iVar5)) {
      do {
        plVar7 = (longlong *)UOnlineEngineInterface::Get();
        (**(code **)(*plVar7 + 0x330))
                  (plVar7,&local_28,*(undefined8 *)(param_1 + 0xd0),uVar8 & 0xff);
        if (local_28 != 0) {
          local_18 = local_28;
          plStack_10 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar6 + 0x300))(plVar6,&local_18);
        }
        plVar7 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
    }
  }
  return;
}



// FUNCTION 1425c86d0 FUN_1425c86d0 body=265 status=ok
// SIG undefined FUN_1425c86d0(void)

void FUN_1425c86d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_1[0x1a] != 0) {
    plVar6 = (longlong *)UOnlineEngineInterface::Get();
    iVar5 = (**(code **)(*plVar6 + 0x368))(plVar6,param_1[0x1a]);
    uVar7 = 0;
    if (0 < iVar5) {
      do {
        plVar6 = (longlong *)UOnlineEngineInterface::Get();
        (**(code **)(*plVar6 + 0x330))(plVar6,&local_28,param_1[0x1a],uVar7 & 0xff);
        if (local_28 != 0) {
          local_18 = local_28;
          plStack_10 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0x328))(param_1,&local_18,0);
        }
        plVar6 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar5);
    }
  }
  return;
}



// FUNCTION 1425c87e0 FUN_1425c87e0 body=666 status=ok
// SIG undefined FUN_1425c87e0(void)

void FUN_1425c87e0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  if (((longlong *)param_1[0xa4] == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)param_1[0xa4] + 0x318))(), cVar3 == '\0')) {
    cVar3 = (**(code **)(*param_1 + 0x368))(param_1);
    if ((cVar3 == '\0') || ((*(uint *)(param_3 + 0x88) & 0x4000) == 0)) {
      lVar8 = (**(code **)(*param_2 + 0x4a8))(param_2);
      if (lVar8 != 0) {
        FUN_1425c3fb0(param_1,param_2,param_7,lVar8,param_3,param_4,param_5,param_6,cVar3);
      }
    }
    else {
      FUN_1425bf040(param_1,&local_68,param_3);
      iVar7 = 0;
      if (0 < (int)param_1[0x14]) {
        lVar8 = 0;
        do {
          plVar6 = *(longlong **)(lVar8 + param_1[0x13]);
          if ((plVar6 != (longlong *)0x0) && (plVar6[0x12] != 0)) {
            FUN_1425ad800(local_58,plVar6,0);
            cVar4 = (**(code **)(*param_2 + 0x468))(param_2,local_50,local_48,local_40);
            if (cVar4 != '\0') {
              lVar5 = (**(code **)(*plVar6 + 0x280))(plVar6);
              if (lVar5 != 0) {
                plVar6 = (longlong *)plVar6[0x32e];
              }
              FUN_1427244b0(local_68,param_4);
              FUN_1425c3fb0(param_1,param_2,param_7,plVar6,param_3,param_4,param_5,param_6,cVar3);
            }
          }
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 8;
        } while (iVar7 < (int)param_1[0x14]);
      }
      plVar6 = (longlong *)FUN_142873bb0(DAT_146b17150,param_1[0x1a],0x11e);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2e8))(plVar6,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      FUN_142725fc0(local_68);
      plVar6 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1425c8a80 FUN_1425c8a80 body=1889 status=ok
// SIG undefined FUN_1425c8a80(void)

void FUN_1425c8a80(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7,longlong param_8,
                  longlong *param_9,longlong param_10,char param_11,int param_12)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *_Dst;
  undefined2 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffc38;
  undefined4 uVar18;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  undefined4 local_398;
  undefined2 local_394;
  undefined1 local_392;
  longlong *local_390;
  int local_388;
  undefined4 local_384;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348 [2];
  longlong local_338 [2];
  longlong local_328 [2];
  undefined1 local_318 [8];
  longlong local_310 [2];
  longlong local_300 [2];
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [40];
  byte local_2b0;
  longlong local_248;
  undefined8 local_220;
  byte local_1f0;
  longlong local_1e8;
  longlong local_1d8;
  undefined1 local_1c8 [40];
  byte local_1a0;
  longlong local_138;
  undefined1 local_108 [144];
  longlong local_78;
  
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    return;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_2 + 0x3c) == -1) {
    if (param_11 == '\0') {
      return;
    }
    if ((*(byte *)(param_2 + 0x11) & 4) != 0) {
      puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(param_5,local_310,0);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar7;
      }
      local_res10 = *(longlong **)(param_7 + 0x18);
      FName::ToString(&local_res10,&local_358);
      puVar9 = &DAT_143f3eda8;
      if (local_350 != 0) {
        puVar9 = local_358;
      }
      FString::PrintfImpl(local_300,
                          L"Attempt to replicate function \'%s\' on Actor \'%s\' while it is in the middle of variable replication!"
                          ,puVar9,puVar13);
      if (local_358 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_310[0] != 0) {
        FMemory::Free();
      }
      if (local_300[0] == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
    FUN_142224a10(param_2[0xd],param_1);
    FUN_1423f9930(param_2);
  }
  if (*(int *)((longlong)param_2 + 0x34) == -1) {
    return;
  }
  FUN_1423e4ec0(local_2d8,param_2,0);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc38 >> 0x20);
  if ((*(byte *)(param_7 + 0x88) & 0x80) != 0) {
    local_1f0 = local_1f0 | 0x20;
  }
  if ((local_2b0 & 0x80) == 0) {
    plVar12 = (longlong *)0x0;
    local_3b8 = (longlong *)0x0;
    local_3b0 = 0;
    uVar16 = 0;
    if (param_10 == 0) {
      local_3a0 = *(longlong **)(param_7 + 0x38);
      local_3a8 = param_7;
      local_398 = 0xffffffff;
      local_394 = 0x101;
      local_392 = 0;
      FUN_140472e10(&local_3a8);
      uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc38 >> 0x20);
      uVar16 = 0;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = plVar12;
        iVar17 = local_3b0._4_4_;
        do {
          plVar5 = local_3a0;
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc38 >> 0x20);
          uVar16 = (uint)plVar11;
          uVar14 = local_3a0[7];
          param_2 = local_res10;
          if (((uint)uVar14 & 0x480) != 0x80) break;
          if (((uVar14 >> 8 & 1) != 0) && (param_9 != (longlong *)0x0)) {
            plVar3 = (longlong *)*param_9;
            plVar4 = param_9;
            while (plVar3 != local_3a0) {
              plVar4 = (longlong *)plVar4[2];
              plVar3 = (longlong *)*plVar4;
            }
            pvVar2 = (void *)plVar4[1];
            _Dst = (void *)(*(int *)((longlong)local_3a0 + 0x44) + param_8);
            if (_Dst != pvVar2) {
              if ((uVar14 >> 0x1e & 1) == 0) {
                (**(code **)(*local_3a0 + 0x2e8))(local_3a0,_Dst,pvVar2,(int)local_3a0[6]);
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,pvVar2,
                           (longlong)(*(int *)((longlong)local_3a0 + 0x34) * (int)local_3a0[6]));
              }
            }
            uVar15 = uVar16 + 1;
            local_3b0 = CONCAT44(local_3b0._4_4_,uVar15);
            if (iVar17 < (int)uVar15) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_3b8,plVar11);
              plVar12 = local_3b8;
              iVar17 = local_3b0._4_4_;
              uVar15 = (uint)local_3b0;
            }
            plVar11 = (longlong *)(ulonglong)uVar15;
            plVar12[(int)uVar16] = (longlong)plVar5;
          }
          uVar16 = (uint)plVar11;
          local_3a0 = (longlong *)plVar5[5];
          FUN_140472e10(&local_3a8);
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc38 >> 0x20);
          param_2 = local_res10;
        } while (local_3a0 != (longlong *)0x0);
      }
    }
    if (DAT_146af1a5c == 1) {
      local_370 = *(undefined8 *)(param_7 + 0x18);
      FName::ToString(&local_370,local_348);
      uVar8 = CONCAT44(uVar18,0xffffffff);
      FUN_141592950(local_348,L"ServerUpdateCamera",1,0,uVar8);
      uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (local_348[0] != 0) {
        FMemory::Free();
      }
      local_368 = *(undefined8 *)(param_7 + 0x18);
      FName::ToString(&local_368,local_338);
      uVar8 = CONCAT44(uVar18,0xffffffff);
      FUN_141592950(local_338,L"ClientAckGoodMove",1,0,uVar8);
      uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (local_338[0] != 0) {
        FMemory::Free();
      }
      local_360 = *(undefined8 *)(param_7 + 0x18);
      FName::ToString(&local_360,local_328);
      FUN_141592950(local_328,L"ServerMove",1,0,CONCAT44(uVar18,0xffffffff));
      if (local_328[0] != 0) {
        FMemory::Free();
      }
    }
    FNetBitWriter::FNetBitWriter(local_1c8,local_220,0);
    FUN_1425bf040(param_1,&local_380,param_7);
    FUN_142739aa0(local_380,param_7,param_2,local_1c8,param_8);
    if ((local_1a0 & 0x80) == 0) {
      uVar8 = FUN_1423efcc0(param_2,param_5);
      if (param_12 == 0) {
        if (((local_1f0 & 0x20) == 0) && ((*(uint *)(param_7 + 0x88) & 0x4000) != 0))
        goto LAB_1425c90a2;
LAB_1425c8f8b:
        FNetBitWriter::FNetBitWriter(local_108,local_220,0);
        FUN_1423ffb60(param_2,local_108,local_res18,local_res20,uVar8,local_1c8);
        FUN_1423ffa60(param_2,param_5,local_2d8,0,local_108);
        if (local_78 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_108);
        bVar6 = false;
      }
      else {
        if ((param_12 == 1) || (param_12 != 2)) goto LAB_1425c8f8b;
LAB_1425c90a2:
        FUN_1423ffb60(param_2,local_2d8,local_res18,local_res20,uVar8,local_1c8);
        bVar6 = true;
      }
      if (0 < (int)uVar16) {
        uVar14 = (ulonglong)uVar16;
        plVar11 = plVar12;
        do {
          plVar5 = (longlong *)*plVar11;
          if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar5 + 0x328))(plVar5,*(int *)((longlong)plVar5 + 0x44) + param_8);
          }
          plVar11 = plVar11 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (((local_2b0 & 0x80) == 0) && ((*(byte *)(param_2 + 6) & 2) == 0)) {
        if (bVar6) {
          UActorChannel::QueueRemoteFunctionBunch(param_2,param_5,param_7,local_2d8);
        }
        else {
          (**(code **)(*param_2 + 0x2c8))(param_2,local_318,local_2d8,1);
        }
      }
    }
    if ((*(byte *)((longlong)param_6 + 0xa4) & 1) != 0) {
      (**(code **)(*param_6 + 0x2c8))(param_6,0);
    }
    plVar11 = local_378;
    if (local_378 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_378 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar12 = local_3b8;
      if ((int)lVar10 == 1) {
        (**(code **)*local_378)(local_378);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = local_3b8;
        if (iVar17 == 1) {
          (**(code **)(*local_378 + 8))(local_378,1);
          plVar12 = local_3b8;
        }
      }
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_1c8);
  }
  else {
    if ((local_1f0 & 0x20) == 0) goto LAB_1425c9179;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2f0,L"Outgoing reliable buffer overflow",L"NetworkErrors",
                       L"ClientReliableBufferOverflow");
    puVar7 = (undefined8 *)FText::ToString(uVar8);
    local_390 = (longlong *)0x0;
    local_388 = *(int *)(puVar7 + 1);
    lVar10 = (longlong)local_388;
    pvVar2 = (void *)*puVar7;
    if (local_388 == 0) {
      local_384 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_390,local_388,0);
      _guard_xfg_dispatch_icall_nop(local_390,pvVar2,lVar10 * 2);
    }
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2e8 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)local_2e8 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    FUN_1404dfdc0(param_6,&local_390);
    (**(code **)(*param_6 + 0x2c8))(param_6,1);
    (**(code **)(*param_6 + 0x2f8))(param_6);
    plVar12 = local_390;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
LAB_1425c9179:
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_2d8);
  return;
}



// FUNCTION 1425c91f0 FUN_1425c91f0 body=142 status=ok
// SIG undefined FUN_1425c91f0(void)

void FUN_1425c91f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1[699]) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x2c0))(param_1,*(undefined4 *)(lVar1 + param_1[0x2ba]),0);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 4;
    } while (iVar2 < (int)param_1[699]);
  }
  *(undefined4 *)(param_1 + 699) = 0;
  if (*(int *)((longlong)param_1 + 0x15dc) == 0x20) {
    return;
  }
  TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2ba,0x20);
  return;
}



// FUNCTION 1425c9280 FUN_1425c9280 body=5390 status=ok
// SIG undefined FUN_1425c9280(void)

void FUN_1425c9280(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  DWORD DVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  bool bVar21;
  bool bVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint uVar26;
  bool bVar27;
  float fVar28;
  double dVar29;
  LARGE_INTEGER local_res8;
  char local_res10;
  char local_res18;
  ushort local_res20 [4];
  uint *local_310;
  undefined4 *local_308;
  int local_300;
  int local_2fc;
  uint local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  int local_2ec;
  uint local_2e8 [2];
  uint *local_2e0;
  int local_2d8;
  int local_2d4;
  longlong local_2c8;
  longlong *local_2c0;
  byte local_2a0;
  byte local_29f;
  uint local_274;
  longlong local_238;
  int local_210;
  uint local_1f8;
  uint local_1f4;
  int local_1f0;
  byte local_1ec;
  byte local_1eb;
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [12];
  undefined1 local_1d8 [144];
  longlong local_148;
  byte local_f0;
  longlong local_e8;
  longlong local_d8;
  
  (**(code **)(*param_1 + 0x2b8))();
  if (-1 < (char)param_2[5]) {
    (**(code **)(*param_1 + 0x2a8))(param_1);
    if (*(char *)((longlong)param_1 + 0x193c) != '\0') {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res8,3);
      if ((char)param_2[5] < '\0') {
        return;
      }
      if (*(int *)((longlong)param_1 + 0x1934) == 0) {
        if (local_res8.s.LowPart._0_1_ != 0) {
          return;
        }
        if (local_res8.s.LowPart._1_1_ != '\0') {
          return;
        }
        if (local_res8.s.LowPart._2_1_ != '\0') {
          return;
        }
      }
      else {
        if (local_res8.s.LowPart._0_1_ != *(byte *)((longlong)param_1 + 0x193d)) {
          return;
        }
        if (local_res8.s.LowPart._1_1_ != *(char *)((longlong)param_1 + 0x193e)) {
          return;
        }
        if (local_res8.s.LowPart._2_1_ != *(char *)((longlong)param_1 + 0x193f)) {
          return;
        }
      }
    }
    QueryPerformanceCounter(&local_res8);
    dVar29 = (((double)CONCAT44(local_res8.s.HighPart,
                                CONCAT13(local_res8.s.LowPart._3_1_,
                                         CONCAT12(local_res8.s.LowPart._2_1_,
                                                  CONCAT11(local_res8.s.LowPart._1_1_,
                                                           local_res8.s.LowPart._0_1_)))) *
               DAT_1468b02f8 + 16777216.0) - (double)param_1[0x3e]) * 1000.0;
    FHistogram::AddMeasurement(param_1 + 0x300,dVar29,SUB84(dVar29,0));
    param_1[0x3d] = (longlong)(double)*(float *)(param_1[0xb] + 0x170);
    QueryPerformanceCounter(&local_res8);
    puVar25 = (uint *)0x0;
    param_1[0x3e] =
         (longlong)
         ((double)CONCAT44(local_res8.s.HighPart,
                           CONCAT13(local_res8.s.LowPart._3_1_,
                                    CONCAT12(local_res8.s.LowPart._2_1_,
                                             CONCAT11(local_res8.s.LowPart._1_1_,
                                                      local_res8.s.LowPart._0_1_)))) * DAT_1468b02f8
         + 16777216.0);
    if ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0) {
      local_res8.s.LowPart._0_1_ = 0;
      local_res8.s.LowPart._1_1_ = '\0';
      local_res8.s.LowPart._2_1_ = '\0';
      local_res8.s.LowPart._3_1_ = 0;
      (**(code **)(*param_2 + 0x60))(param_2,&local_res8,0x4000);
      iVar10 = *(int *)((longlong)param_1 + 0x156c);
      iVar12 = iVar10 + -0x2000 +
               ((CONCAT13(local_res8.s.LowPart._3_1_,
                          CONCAT12(local_res8.s.LowPart._2_1_,
                                   CONCAT11(local_res8.s.LowPart._1_1_,local_res8.s.LowPart._0_1_)))
                - iVar10) - 0x2000U & 0x3fff);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x156c);
      iVar12 = iVar10 + 1;
    }
    if (iVar10 < iVar12) {
      iVar10 = (iVar12 - iVar10) + -1;
      *(int *)((longlong)param_1 + 0x49c) = *(int *)((longlong)param_1 + 0x49c) + iVar10;
      *(int *)((longlong)param_1 + 0x4a4) = *(int *)((longlong)param_1 + 0x4a4) + iVar10;
      piVar1 = (int *)(param_1[0xb] + 0x1b8);
      *piVar1 = *piVar1 + iVar10;
      *(int *)((longlong)param_1 + 0x156c) = iVar12;
      local_2fc = iVar12;
      local_res18 = (**(code **)(*(longlong *)param_1[0xb] + 0x3b0))();
      bVar6 = false;
      local_2ec = 0;
      local_2d4 = 0;
      local_2e0 = (uint *)0x0;
      local_300 = 0;
      cVar8 = (**(code **)(*param_2 + 0xa0))(param_2);
      bVar21 = false;
      if (cVar8 == '\0') {
LAB_1425c9560:
        bVar6 = bVar21;
        uVar24 = 0;
        if (*(int *)((longlong)param_1 + 300) != 1) {
          cVar8 = (char)param_2[5];
          bVar21 = false;
          if (cVar8 < '\0') {
LAB_1425ca6a2:
            pwVar20 = L"Bunch missing ack flag";
LAB_1425ca5bf:
            FString::PrintfImpl(&local_310,pwVar20);
            (**(code **)(*param_1 + 0x2f8))(param_1);
            if (local_310 != (uint *)0x0) {
              FMemory::Free();
            }
          }
          else {
            lVar23 = param_2[0x15];
            if (lVar23 < param_2[0x14]) {
              bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                       '\x01' << ((byte)lVar23 & 7)) != 0;
              param_2[0x15] = lVar23 + 1;
            }
            else {
              FUN_1416952d0(param_2);
              cVar8 = (char)param_2[5];
            }
            if (cVar8 < '\0') goto LAB_1425ca6a2;
            if (bVar21) {
              local_res8.s.LowPart._0_1_ = 0;
              local_res8.s.LowPart._1_1_ = '\0';
              local_res8.s.LowPart._2_1_ = '\0';
              local_res8.s.LowPart._3_1_ = 0;
              *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_1[0xb] + 0x170);
              (**(code **)(*param_2 + 0x60))(param_2,&local_res8);
              uVar26 = *(int *)((longlong)param_1 + 0x1574) + -0x2000 +
                       ((CONCAT13(local_res8.s.LowPart._3_1_,
                                  CONCAT12(local_res8.s.LowPart._2_1_,
                                           CONCAT11(local_res8.s.LowPart._1_1_,
                                                    local_res8.s.LowPart._0_1_))) -
                        *(int *)((longlong)param_1 + 0x1574)) - 0x2000U & 0x3fff);
              if ((char)param_2[5] < '\0') {
                pwVar20 = L"Bunch missing ack";
                goto LAB_1425ca5bf;
              }
              lVar23 = param_2[0x15];
              bVar21 = false;
              dVar29 = 0.0;
              if (lVar23 < param_2[0x14]) {
                bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                         '\x01' << ((byte)lVar23 & 7)) != 0;
                param_2[0x15] = lVar23 + 1;
              }
              else {
                FUN_1416952d0(param_2);
              }
              bVar9 = (**(code **)(*(longlong *)param_1[0xb] + 0x368))();
              if (bVar9 == 0) {
                if (bVar21 != false) {
                  plVar16 = (longlong *)param_2[1];
                  if ((byte *)plVar16[1] < (byte *)*plVar16 + 1) {
                    local_res8.s.LowPart._0_1_ = bVar9;
                    (**(code **)(*param_2 + 0x50))(param_2,&local_res8);
                  }
                  else {
                    local_res8.s.LowPart._0_1_ = *(byte *)*plVar16;
                    *plVar16 = *plVar16 + 1;
                  }
                  dVar29 = (double)(byte)local_res8.s.LowPart._0_1_ * 0.001;
                }
              }
              else {
                *(bool *)(param_1 + 0x2af) = bVar21;
              }
              local_2f8 = 0;
              (**(code **)(*param_2 + 0x68))(param_2,&local_2f8);
              iVar12 = *(int *)((longlong)param_1 + 0x1574);
              if (iVar12 < (int)uVar26) {
                while (iVar12 = iVar12 + 1, iVar12 < (int)uVar26) {
                  (**(code **)(*(longlong *)param_1[0xd] + 0x2a0))((longlong *)param_1[0xd],iVar12);
                  iVar10 = (int)param_1[0xf] + -1;
                  lVar23 = (longlong)iVar10;
                  if (-1 < iVar10) {
                    do {
                      plVar16 = *(longlong **)(param_1[0xe] + lVar23 * 8);
                      (**(code **)(*plVar16 + 0x2a0))(plVar16,iVar12);
                      if ((iVar12 < *(int *)((longlong)plVar16 + 0x3c)) ||
                         ((int)plVar16[8] < iVar12)) {
                        bVar21 = false;
                      }
                      else {
                        bVar21 = true;
                      }
                      if (bVar21) {
                        UChannel::ReceivedAcks(plVar16);
                      }
                      lVar23 = lVar23 + -1;
                    } while (-1 < lVar23);
                  }
                  *(int *)(param_1 + 0x94) = (int)param_1[0x94] + 1;
                  *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                  *(int *)(param_1[0xb] + 0x1bc) = *(int *)(param_1[0xb] + 0x1bc) + 1;
                }
                *(uint *)((longlong)param_1 + 0x1574) = uVar26;
              }
              uVar24 = (ulonglong)(uVar26 & 0xff);
              if (*(uint *)((longlong)param_1 + uVar24 * 4 + 0xd68) == uVar26) {
                *(undefined4 *)((longlong)param_1 + uVar24 * 4 + 0xd68) = 0xffffffff;
                lVar23 = DAT_146aff470;
                dVar7 = DAT_1468b5a78;
                cVar8 = FUN_1415ad720(&DAT_1468e2448);
                if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
                  DVar11 = GetCurrentThreadId();
                  lVar15 = 1;
                  if (DVar11 == DAT_1468c21c0) goto LAB_1425c980d;
                }
                else {
LAB_1425c980d:
                  lVar15 = 0;
                }
                if (*(int *)(lVar23 + lVar15 * 4) == 0) {
                  dVar29 = 0.0;
                }
                iVar12 = *(int *)((longlong)param_1 + uVar24 * 4 + 0x1168);
                dVar29 = (dVar7 - (double)param_1[uVar24 + 0xad]) - dVar29;
                if (dVar29 <= 0.0) {
                  dVar29 = 0.0;
                }
                if (iVar12 < 1) {
                  fVar28 = 0.0;
                }
                else {
                  fVar28 = (float)local_2f8 / (float)iVar12;
                  if (1.0 <= fVar28) {
                    fVar28 = 1.0;
                  }
                  fVar28 = (1.0 - fVar28) * 100.0;
                }
                *(float *)(param_1 + 0x2ad) = fVar28;
                *(int *)(param_1 + 0x88) = (int)param_1[0x88] + 1;
                plVar16 = (longlong *)param_1[6];
                param_1[0x86] = (longlong)(dVar29 + (double)param_1[0x86]);
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0xdc8))(plVar16,(float)dVar29);
                }
              }
              plVar16 = (longlong *)param_1[0xd];
              if (plVar16 != (longlong *)0x0) {
                (**(code **)(*plVar16 + 0x2a8))(plVar16,uVar26);
              }
              iVar12 = (int)param_1[0xf] + -1;
              lVar23 = (longlong)iVar12;
              if (-1 < iVar12) {
                do {
                  lVar15 = *(longlong *)(param_1[0xe] + lVar23 * 8);
                  if (*(uint *)(lVar15 + 0x40) == uVar26) {
                    *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) | 1;
                  }
                  for (lVar4 = *(longlong *)(lVar15 + 0x58); lVar4 != 0;
                      lVar4 = *(longlong *)(lVar4 + 0xc0)) {
                    if ((*(byte *)(lVar4 + 0xe8) & 2) != 0) {
                      *(uint *)(lVar15 + 0x30) = *(uint *)(lVar15 + 0x30) & 0xfffffffe;
                    }
                    if (*(uint *)(lVar4 + 0xe4) == uVar26) {
                      *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) | 1;
                    }
                  }
                  UChannel::ReceivedAcks();
                  lVar23 = lVar23 + -1;
                } while (-1 < lVar23);
              }
              goto LAB_1425ca37a;
            }
            FUN_1423e48e0(&local_2c8,param_1,0,0);
            bVar21 = false;
            uVar5 = param_2[0x15];
            bVar27 = false;
            uVar19 = uVar5;
            bVar22 = bVar27;
            if ((char)param_2[5] < '\0') {
LAB_1425c99f9:
              local_210 = iVar12;
              if ((bVar21) && (-1 < (char)param_2[5])) {
                if ((longlong)uVar19 < param_2[0x14]) {
                  bVar9 = *(byte *)((longlong)(int)((longlong)uVar19 >> 3) + param_2[0x12]);
                  param_2[0x15] = uVar19 + 1;
                  bVar22 = (bVar9 & '\x01' << ((byte)uVar19 & 7)) != 0;
                }
                else {
                  FUN_1416952d0(param_2,1);
                }
              }
            }
            else {
              if ((longlong)uVar5 < param_2[0x14]) {
                bVar21 = (*(byte *)((longlong)(int)((longlong)uVar5 >> 3) + param_2[0x12]) &
                         '\x01' << ((byte)uVar5 & 7)) != 0;
                uVar19 = uVar5 + 1;
                param_2[0x15] = uVar19;
                goto LAB_1425c99f9;
              }
              FUN_1416952d0(param_2);
              local_210 = iVar12;
            }
            local_1ec = local_1ec & 0xfe | bVar22;
            bVar22 = bVar27;
            if ((bVar21) && (-1 < (char)param_2[5])) {
              lVar23 = param_2[0x15];
              if (lVar23 < param_2[0x14]) {
                bVar9 = *(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]);
                param_2[0x15] = lVar23 + 1;
                bVar22 = (bVar9 & '\x01' << ((byte)lVar23 & 7)) != 0;
              }
              else {
                FUN_1416952d0(param_2,1);
              }
            }
            local_1ec = local_1ec & 0xfd | bVar22 * '\x02';
            bVar21 = bVar27;
            if ((bVar22 != false) && (-1 < (char)param_2[5])) {
              lVar23 = param_2[0x15];
              if (lVar23 < param_2[0x14]) {
                bVar9 = *(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]);
                param_2[0x15] = lVar23 + 1;
                bVar21 = (bVar9 & '\x01' << ((byte)lVar23 & 7)) != 0;
              }
              else {
                FUN_1416952d0(param_2,1);
              }
            }
            cVar8 = (char)param_2[5];
            bVar22 = false;
            local_1ec = local_1ec & 0xfb | bVar21 << 2;
            if (-1 < cVar8) {
              lVar23 = param_2[0x15];
              if (lVar23 < param_2[0x14]) {
                bVar22 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                         '\x01' << ((byte)lVar23 & 7)) != 0;
                param_2[0x15] = lVar23 + 1;
              }
              else {
                FUN_1416952d0(param_2);
                cVar8 = (char)param_2[5];
              }
            }
            local_1ec = local_1ec & 0xf7 | bVar22 << 3;
            bVar21 = false;
            if (-1 < cVar8) {
              lVar23 = param_2[0x15];
              if (lVar23 < param_2[0x14]) {
                bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                         '\x01' << ((byte)lVar23 & 7)) != 0;
                param_2[0x15] = lVar23 + 1;
              }
              else {
                FUN_1416952d0(param_2);
              }
            }
            local_1ec = local_1ec & 0xef | bVar21 << 4;
            if (local_274 < 3) {
              local_res8.s.LowPart._0_1_ = 0;
              local_res8.s.LowPart._1_1_ = '\0';
              local_res8.s.LowPart._2_1_ = '\0';
              local_res8.s.LowPart._3_1_ = 0;
              (**(code **)(*param_2 + 0x60))(param_2,&local_res8,0x2800);
              uVar26 = CONCAT13(local_res8.s.LowPart._3_1_,
                                CONCAT12(local_res8.s.LowPart._2_1_,
                                         CONCAT11(local_res8.s.LowPart._1_1_,
                                                  local_res8.s.LowPart._0_1_)));
LAB_1425c9c51:
              cVar8 = (char)param_2[5];
              bVar21 = false;
              local_1f8 = uVar26;
              if (-1 < cVar8) {
                lVar23 = param_2[0x15];
                if (lVar23 < param_2[0x14]) {
                  bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                           '\x01' << ((byte)lVar23 & 7)) != 0;
                  param_2[0x15] = lVar23 + 1;
                }
                else {
                  FUN_1416952d0(param_2);
                  cVar8 = (char)param_2[5];
                }
              }
              local_1eb = local_1eb & 0xfe | bVar21;
              bVar21 = false;
              if (-1 < cVar8) {
                lVar23 = param_2[0x15];
                if (lVar23 < param_2[0x14]) {
                  bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                           '\x01' << ((byte)lVar23 & 7)) != 0;
                  param_2[0x15] = lVar23 + 1;
                }
                else {
                  FUN_1416952d0(param_2);
                  cVar8 = (char)param_2[5];
                }
              }
              local_1eb = local_1eb & 0xfd | bVar21 * '\x02';
              bVar21 = false;
              if (-1 < cVar8) {
                lVar23 = param_2[0x15];
                if (lVar23 < param_2[0x14]) {
                  bVar21 = (*(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]) &
                           '\x01' << ((byte)lVar23 & 7)) != 0;
                  param_2[0x15] = lVar23 + 1;
                }
                else {
                  FUN_1416952d0(param_2);
                }
              }
              bVar9 = local_1ec & 0xdf | bVar21 << 5;
              if ((local_1ec & 0x10) == 0) {
                local_1f0 = 0;
                local_1ec = bVar9;
                if (bVar21 != false) {
                  local_1f0 = iVar12;
                }
              }
              else {
                lVar23 = param_1[0x2b4];
                if ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0) {
                  lVar15 = (longlong)(int)local_1f8;
                  local_res8.s.LowPart._0_1_ = 0;
                  local_res8.s.LowPart._1_1_ = '\0';
                  local_res8.s.LowPart._2_1_ = '\0';
                  local_res8.s.LowPart._3_1_ = 0;
                  local_1ec = bVar9;
                  (**(code **)(*param_2 + 0x60))(param_2,&local_res8,0x400);
                  local_1f0 = (((CONCAT13(local_res8.s.LowPart._3_1_,
                                          CONCAT12(local_res8.s.LowPart._2_1_,
                                                   CONCAT11(local_res8.s.LowPart._1_1_,
                                                            local_res8.s.LowPart._0_1_))) -
                                *(int *)(lVar23 + lVar15 * 4)) - 0x200U & 0x3ff) - 0x200) +
                              *(int *)(lVar23 + lVar15 * 4);
                }
                else {
                  local_1f0 = *(int *)(lVar23 + (longlong)(int)local_1f8 * 4) + 1;
                  local_1ec = bVar9;
                }
              }
              uVar19 = uVar24;
              if (((local_1ec & 0x20) != 0) && (-1 < (char)param_2[5])) {
                lVar23 = param_2[0x15];
                if (lVar23 < param_2[0x14]) {
                  bVar9 = *(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]);
                  param_2[0x15] = lVar23 + 1;
                  uVar19 = (ulonglong)((bVar9 & '\x01' << ((byte)lVar23 & 7)) != 0);
                }
                else {
                  FUN_1416952d0(param_2,1);
                }
              }
              bVar9 = (char)uVar19 << 6 | local_1ec & 0xbf;
              if (((local_1ec & 0x20) != 0) && (-1 < (char)param_2[5])) {
                lVar23 = param_2[0x15];
                if (lVar23 < param_2[0x14]) {
                  bVar3 = *(byte *)((longlong)(int)(lVar23 >> 3) + param_2[0x12]);
                  param_2[0x15] = lVar23 + 1;
                  bVar27 = (bVar3 & '\x01' << ((byte)lVar23 & 7)) != 0;
                }
                else {
                  local_1ec = bVar9;
                  FUN_1416952d0(param_2,1);
                  bVar9 = local_1ec;
                }
              }
              local_1ec = bVar27 << 7 | bVar9 & 0x7f;
              if ((bVar9 & 0x11) == 0) {
                local_1f4 = 0;
              }
              else {
                local_res8.s.LowPart._0_1_ = 0;
                local_res8.s.LowPart._1_1_ = 0;
                local_res8.s.LowPart._2_1_ = 0;
                local_res8.s.LowPart._3_1_ = 0;
                (**(code **)(*param_2 + 0x60))(param_2,&local_res8,8);
                local_1f4 = CONCAT13(local_res8.s.LowPart._3_1_,
                                     CONCAT12(local_res8.s.LowPart._2_1_,
                                              CONCAT11(local_res8.s.LowPart._1_1_,
                                                       local_res8.s.LowPart._0_1_)));
              }
              local_res8.s.LowPart._0_1_ = 0;
              local_res8.s.LowPart._1_1_ = '\0';
              local_res8.s.LowPart._2_1_ = '\0';
              local_res8.s.LowPart._3_1_ = 0;
              (**(code **)(*param_2 + 0x60))(param_2,&local_res8,(int)param_1[0x14] << 3);
              uVar19 = param_2[0x15];
              if ((char)param_2[5] < '\0') {
                pwVar20 = L"Bunch header overflowed";
                goto LAB_1425ca664;
              }
              iVar12 = CONCAT13(local_res8.s.LowPart._3_1_,
                                CONCAT12(local_res8.s.LowPart._2_1_,
                                         CONCAT11(local_res8.s.LowPart._1_1_,
                                                  local_res8.s.LowPart._0_1_)));
              FUN_1416950d0(&local_2c8,param_2,(longlong)iVar12);
              if ((char)param_2[5] < '\0') {
                FString::PrintfImpl(&local_310,L"Bunch data overflowed (%i %i+%i/%i)",
                                    uVar5 & 0xffffffff,uVar19 & 0xffffffff,iVar12,param_2[0x14]);
                goto LAB_1425ca66e;
              }
              if (((local_1eb & 1) != 0) &&
                 (*(int *)(param_1[0xb] + 0x19c) =
                       *(int *)(param_1[0xb] + 0x19c) + (((int)uVar19 - (int)uVar5) + iVar12 >> 3),
                 (*(byte *)((longlong)param_1 + 0xa4) & 1) != 0)) {
                uVar19 = param_1[0xd];
                if (uVar19 == 0) {
LAB_1425c9ffb:
                  uVar19 = uVar24;
                }
                else {
                  lVar23 = UPackageMapClient::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(uVar19 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(uVar19 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar23 + 0x90) * 8) != lVar23 + 0x88)) {
                    bVar21 = false;
                  }
                  else {
                    bVar21 = true;
                  }
                  if (!bVar21) goto LAB_1425c9ffb;
                }
                FUN_1425ef250(uVar19,&local_2c8);
              }
              plVar16 = (longlong *)param_1[0x2b0];
              uVar24 = (ulonglong)(int)local_1f8;
              if (plVar16[uVar24] == 0) {
                if ((local_1f8 == 0) && (local_1f4 == 1)) goto LAB_1425ca077;
                if (*plVar16 != 0) {
                  if (param_1[6] == 0) {
                    puVar17 = *(undefined8 **)(param_1[0xb] + 0x98);
                    puVar2 = puVar17 + *(int *)(param_1[0xb] + 0xa0);
                    for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
                      if ((longlong *)*puVar17 == param_1) {
                        FString::PrintfImpl(&local_310,
                                            L"UNetConnection::ReceivedPacket: Received non-control bunch before player controller was assigned. ChIndex: %i, ChType: %i"
                                            ,local_1f8,local_1f4);
                        goto LAB_1425ca66e;
                      }
                    }
                  }
                  goto LAB_1425ca072;
                }
LAB_1425ca606:
                (**(code **)(*param_1 + 0x2f8))(param_1);
                goto LAB_1425ca689;
              }
LAB_1425ca072:
              if (local_1f8 == 0) {
LAB_1425ca077:
                if (((*plVar16 == 0) && ((local_1ec & 2) != 0)) && (local_1f4 == 1))
                goto LAB_1425ca606;
              }
              plVar16 = (longlong *)plVar16[uVar24];
              if ((((*(byte *)((longlong)param_1 + 0xa4) & 1) != 0) && (plVar16 != (longlong *)0x0))
                 && ((char)param_1[0x326] != '\0')) {
                if ((((local_1ec & 1) != 0) && (local_1f4 == 2)) &&
                   (((local_1ec & 0x20) == 0 || ((local_1ec & 0x40) != 0)))) {
                  if ((local_1eb & 2) != 0) {
                    local_res20[0] = 0;
                    if ((ushort *)local_2c0[1] < (ushort *)*local_2c0 + 1) {
                      (**(code **)(local_2c8 + 0x50))(&local_2c8,local_res20,2);
                      if ((local_29f >> 4 & 1) != 0) {
                        FArchive::ByteSwap(&local_2c8,local_res20,2);
                      }
                    }
                    else {
                      local_res20[0] = *(ushort *)*local_2c0;
                      *local_2c0 = *local_2c0 + 2;
                    }
                    iVar12 = 0;
                    if (local_res20[0] != 0) {
                      do {
                        local_res8.s.LowPart._0_1_ = 0;
                        local_res8.s.LowPart._1_1_ = '\0';
                        local_res8.s.LowPart._2_1_ = '\0';
                        local_res8.s.LowPart._3_1_ = 0;
                        (**(code **)(local_2c8 + 0x68))(&local_2c8,&local_res8);
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < (int)(uint)local_res20[0]);
                    }
                  }
                  local_2f4 = 0;
                  (**(code **)(local_2c8 + 0x68))(&local_2c8,&local_2f4);
                  local_310 = &local_1f8;
                  local_308 = &local_2f4;
                  FUN_1417ab330(param_1 + 0x31c,local_1e8,&local_310,0);
                  uVar24 = (ulonglong)local_1f8;
                }
                if ((int)param_1[0x31d] != *(int *)((longlong)param_1 + 0x1914)) {
                  iVar12 = (int)uVar24;
                  plVar14 = (longlong *)param_1[0x324];
                  if ((longlong *)param_1[0x324] == (longlong *)0x0) {
                    plVar14 = param_1 + 0x323;
                  }
                  iVar10 = *(int *)((longlong)plVar14 +
                                   ((longlong)(int)param_1[0x325] - 1U & (longlong)iVar12) * 4);
                  if (iVar10 != -1) {
                    lVar23 = param_1[0x31c];
                    iVar13 = iVar10;
                    do {
                      if (*(int *)(lVar23 + (longlong)iVar13 * 0x10) == iVar12) {
                        if (iVar13 != -1) {
                          if (((local_1ec & 2) == 0) ||
                             (((local_1ec & 0x20) != 0 && (-1 < (char)local_1ec))))
                          goto LAB_1425ca35a;
                          if (((int)param_1[0x31d] == *(int *)((longlong)param_1 + 0x1914)) ||
                             (iVar10 == -1)) goto LAB_1425ca2d6;
                          goto LAB_1425ca2c0;
                        }
                        break;
                      }
                      iVar13 = *(int *)(lVar23 + 8 + (longlong)iVar13 * 0x10);
                    } while (iVar13 != -1);
                  }
                }
              }
              iVar12 = local_300;
              bVar9 = local_1ec >> 4 & 1;
              if ((bVar9 == 0) ||
                 (*(int *)(param_1[0x2b4] + (longlong)(int)(uint)uVar24 * 4) < local_1f0)) {
                if (plVar16 == (longlong *)0x0) {
                  if ((bVar9 == 0) &&
                     (((local_1ec & 1) == 0 || (((local_1ec & 2) == 0 && ((local_1ec & 0x20) == 0)))
                      ))) {
                    bVar6 = true;
                    if (local_238 != 0) {
                      FMemory::Free();
                    }
                    FArchive::~FArchive(&local_2c8);
                    goto LAB_1425ca37a;
                  }
                  lVar23 = (longlong)local_300;
                  for (puVar18 = puVar25; puVar18 != puVar25 + lVar23; puVar18 = puVar18 + 1) {
                    if (*puVar18 == (uint)uVar24) goto LAB_1425ca35a;
                  }
                  if ((local_1f4 < 8) &&
                     (*(longlong *)(param_1[0xb] + 0x128 + (longlong)(int)local_1f4 * 8) != 0)) {
                    bVar21 = true;
                  }
                  else {
                    bVar21 = false;
                  }
                  if (!bVar21) {
                    FString::PrintfImpl(&local_310,
                                        L"UNetConnection::ReceivedPacket: Connection unknown channel type (%i)"
                                        ,local_1f4);
                    goto LAB_1425ca66e;
                  }
                  plVar16 = (longlong *)FUN_1425b9f20(param_1,local_1f4,0,uVar24 & 0xffffffff);
                  cVar8 = (**(code **)(**(longlong **)(param_1[0xb] + 0x168) + 0x10))
                                    (*(longlong **)(param_1[0xb] + 0x168),plVar16);
                  puVar18 = puVar25;
                  if (cVar8 == '\0') {
                    for (; puVar18 != puVar25 + lVar23; puVar18 = puVar18 + 1) {
                      if (*puVar18 == local_1f8) {
                        if ((int)((longlong)puVar18 - (longlong)puVar25 >> 2) != -1)
                        goto LAB_1425ca47d;
                        break;
                      }
                    }
                    local_300 = iVar12 + 1;
                    local_2d8 = local_300;
                    if (local_2ec < local_300) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_2e0,iVar12);
                      local_2ec = local_2d4;
                      puVar25 = local_2e0;
                    }
                    puVar25[lVar23] = local_1f8;
                    local_300 = local_2d8;
LAB_1425ca47d:
                    FUN_1423e4ec0(local_1d8,plVar16,1);
                    local_f0 = local_f0 | 0x20;
                    (**(code **)(*plVar16 + 0x2c8))(plVar16,local_1e4,local_1d8,0);
                    (**(code **)(*param_1 + 0x2c8))(param_1,0);
                    FUN_1423e8eb0(plVar16,0);
                    if (local_1f8 == 0) {
                      *(undefined4 *)((longlong)param_1 + 300) = 1;
                    }
                    if (local_d8 != 0) {
                      FMemory::Free();
                    }
                    if (local_e8 != 0) {
                      FMemory::Free();
                    }
                    if (local_148 != 0) {
                      FMemory::Free();
                    }
                    FArchive::~FArchive(local_1d8);
                    goto LAB_1425ca35a;
                  }
                }
                local_res10 = '\0';
                local_1eb = local_1eb ^ (local_res18 << 2 ^ local_1eb) & 4;
                FUN_1423f8f70(plVar16,&local_2c8);
                if (local_res10 != '\0') {
                  bVar6 = true;
                }
                if (param_1[0xb] != 0) {
                  piVar1 = (int *)(param_1[0xb] + 0x1a8);
                  *piVar1 = *piVar1 + 1;
                  *(int *)(param_1[0xb] + 0x1b0) = *(int *)(param_1[0xb] + 0x1b0) + 1;
                  if ((*(longlong *)(param_1[0xb] + 0x90) == 0) &&
                     (((local_29f & 1) != 0 || ((local_2a0 & 0x80) != 0)))) {
                    *(undefined4 *)((longlong)param_1 + 300) = 1;
                    bVar6 = true;
                  }
                }
                if (local_238 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_2c8);
                goto LAB_1425ca37a;
              }
              goto LAB_1425ca35a;
            }
            (**(code **)(*param_2 + 0x68))(param_2,local_2e8);
            uVar26 = local_2e8[0];
            if (local_2e8[0] < *(uint *)((longlong)param_1 + 0x157c)) goto LAB_1425c9c51;
            pwVar20 = L"Bunch channel index exceeds channel limit";
LAB_1425ca664:
            FString::PrintfImpl(&local_310,pwVar20);
LAB_1425ca66e:
            (**(code **)(*param_1 + 0x2f8))(param_1);
            if (local_310 != (uint *)0x0) {
              FMemory::Free();
            }
LAB_1425ca689:
            if (local_238 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(&local_2c8);
          }
          goto LAB_1425ca6fe;
        }
      }
LAB_1425ca6ae:
      (**(code **)(*param_1 + 0x2a8))(param_1);
      if (!bVar6) {
        QueryPerformanceCounter(&local_res8);
        param_1[0x3f] =
             (longlong)
             ((double)CONCAT44(local_res8.s.HighPart,
                               CONCAT13(local_res8.s.LowPart._3_1_,
                                        CONCAT12(local_res8.s.LowPart._2_1_,
                                                 CONCAT11(local_res8.s.LowPart._1_1_,
                                                          local_res8.s.LowPart._0_1_)))) *
              DAT_1468b02f8 + 16777216.0);
        (**(code **)(*param_1 + 0x2c0))(param_1,iVar12,1);
      }
LAB_1425ca6fe:
      if (puVar25 != (uint *)0x0) {
        FMemory::Free(puVar25);
      }
    }
    else {
      piVar1 = (int *)(param_1[0xb] + 0x1c0);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
  while (iVar10 = *(int *)(lVar23 + 8 + (longlong)iVar10 * 0x10), iVar10 != -1) {
LAB_1425ca2c0:
    if (*(int *)(lVar23 + (longlong)iVar10 * 0x10) == iVar12) goto LAB_1425ca2db;
  }
LAB_1425ca2d6:
  iVar10 = -1;
LAB_1425ca2db:
  local_2f0 = *(uint *)(lVar23 + 4 + (longlong)iVar10 * 0x10);
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x31c);
  if (((local_2f0 & 1) != 0) &&
     (lVar23 = FUN_1425e6270(*(undefined8 *)(param_1[0xb] + 0xe0),&local_2f0), lVar23 != 0)) {
    lVar15 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21) {
      (**(code **)(*param_1 + 0x370))(param_1,lVar23);
    }
  }
LAB_1425ca35a:
  if (local_238 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_2c8);
LAB_1425ca37a:
  cVar8 = (**(code **)(*param_2 + 0xa0))(param_2);
  iVar12 = local_2fc;
  bVar21 = bVar6;
  if (cVar8 != '\0') goto LAB_1425ca6ae;
  goto LAB_1425c9560;
}



// FUNCTION 1425ca790 FUN_1425ca790 body=461 status=ok
// SIG undefined FUN_1425ca790(void)

void FUN_1425ca790(longlong *param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong local_d8;
  int local_d0;
  char local_cc;
  longlong local_c8 [2];
  undefined1 local_b8 [144];
  longlong local_28;
  int local_18;
  int local_10;
  
  if (param_1[0x27] != 0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    FUN_1421e1a00(param_1[0x27],&local_d8,param_2,param_3,0,local_c8);
    if (local_cc != '\0') {
      FString::PrintfImpl(local_c8,L"Packet failed PacketHandler processing.");
      (**(code **)(*param_1 + 0x2f8))(param_1);
      local_d8 = local_c8[0];
      goto LAB_1425ca94a;
    }
    param_3 = (int)(local_d0 + 7 + (local_d0 + 7 >> 0x1f & 7U)) >> 3;
    if (param_3 < 1) {
      return;
    }
    param_2 = local_d8;
    if (*(int *)(param_1[0x27] + 0x1cc) != 2) {
      return;
    }
  }
  iVar2 = (int)param_1[0x30] + param_3;
  *(int *)((longlong)param_1 + 0x46c) = *(int *)((longlong)param_1 + 0x46c) + iVar2;
  *(int *)((longlong)param_1 + 0x474) = *(int *)((longlong)param_1 + 0x474) + iVar2;
  *(int *)((longlong)param_1 + 0x47c) = *(int *)((longlong)param_1 + 0x47c) + 1;
  *(int *)((longlong)param_1 + 0x484) = *(int *)((longlong)param_1 + 0x484) + 1;
  *(int *)(param_1[0xb] + 400) = *(int *)(param_1[0xb] + 400) + iVar2;
  *(int *)(param_1[0xb] + 0x1a0) = *(int *)(param_1[0xb] + 0x1a0) + 1;
  if (param_3 < 1) {
    pwVar3 = L"Received zero-size packet";
  }
  else {
    cVar1 = *(char *)((longlong)param_3 + -1 + param_2);
    if (cVar1 != '\0') {
      param_3 = param_3 * 8;
      for (; param_3 = param_3 + -1, -1 < cVar1; cVar1 = cVar1 * '\x02') {
      }
      FUN_1416883a0(local_b8,param_2,(longlong)param_3);
      FUN_1416951c0(local_b8,(int)param_1[0x2bd]);
      FArchiveState::SetGameNetVer(local_b8,*(undefined4 *)((longlong)param_1 + 0x15ec));
      if (param_1[0x27] != 0) {
        AK::MemoryMgr::StartProfileThreadUsage((long)param_1[0x27]);
      }
      if (local_18 != local_10) {
        FUN_1425c9280(param_1,local_b8);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_b8);
      return;
    }
    pwVar3 = L"Received packet with 0\'s in last byte of packet";
  }
  FString::PrintfImpl(&local_d8,pwVar3);
  (**(code **)(*param_1 + 0x2f8))(param_1);
LAB_1425ca94a:
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425ca960 FUN_1425ca960 body=633 status=ok
// SIG undefined FUN_1425ca960(void)

void FUN_1425ca960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  
  if (param_2 != 0) {
    uVar6 = 0;
    plVar1 = (longlong *)(param_2 + 0x500);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    uVar7 = uVar6;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1444f7eb0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x404c2114;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1444f7ef8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar2 = *(int *)(param_2 + 0x508);
      uVar7 = *puVar5;
      *(int *)(param_2 + 0x508) = iVar2 + 1;
      if (*(int *)(param_2 + 0x50c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x4f0) = uVar7;
    plVar1 = (longlong *)(param_2 + 0x518);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    uVar7 = uVar6;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1444f7eb0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x4102fc50;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1444f7ef8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar2 = *(int *)(param_2 + 0x520);
      uVar7 = *puVar5;
      *(int *)(param_2 + 0x520) = iVar2 + 1;
      if (*(int *)(param_2 + 0x524) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x4f8) = uVar7;
    plVar1 = (longlong *)(param_2 + 0x530);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x420db1e0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar2 = *(int *)(param_2 + 0x538);
      uVar6 = *puVar5;
      *(int *)(param_2 + 0x538) = iVar2 + 1;
      if (*(int *)(param_2 + 0x53c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x500) = uVar6;
  }
  return;
}



// FUNCTION 1425cabe0 FUN_1425cabe0 body=535 status=ok
// SIG undefined FUN_1425cabe0(void)

void FUN_1425cabe0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
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
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1425cad1f;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_1425cad1f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1425cae00 Remove body=276 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x60;
      if (*(int *)(lVar3 + lVar2) == *param_2) {
        lVar3 = (longlong)iVar5 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001425cae9c;
      }
      iVar5 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001425cae9c:
  if (iVar1 == -1) {
LAB_1425caec3:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_1425caec3;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001425cae9c;
}



// FUNCTION 1425caf20 Remove body=198 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x18;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x14));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x10);
        break;
      }
      lVar6 = (longlong)iVar3 * 3 + 2;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x38);
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1425caff0 FUN_1425caff0 body=278 status=ok
// SIG undefined FUN_1425caff0(void)

void FUN_1425caff0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30;
  
  FWeakObjectPtr::operator=(&local_res8);
  local_res10 = local_res8;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x358,&local_res10);
  if (param_2 == 0) {
    lStack_50 = 0;
  }
  else {
    lStack_50 = *(longlong *)(param_2 + 0x38);
  }
  local_48 = 0xffffffff;
  uStack_44 = 0x100;
  uStack_42 = 0;
  local_58 = param_2;
  FUN_140cbbd90(&local_58);
  lVar2 = lStack_50;
  local_30 = CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT24(uStack_44,local_48)));
  local_48 = 0xffffffff;
  local_40 = local_58;
  lStack_38 = lStack_50;
  uStack_44 = 0x101;
  local_58 = 0;
  lStack_50 = 0;
  uStack_42 = 0;
  FUN_140cbbd90(&local_58);
  lVar3 = lStack_50;
  lVar1 = lStack_38;
  lStack_38 = lVar2;
  while (lStack_38 != lVar3) {
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x88) & 0x40) != 0)) {
      lStack_38 = lVar1;
      FWeakObjectPtr::operator=(&local_res8,lVar1);
      local_res10 = local_res8;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x358,&local_res10);
    }
    lStack_38 = *(longlong *)(lVar1 + 0x28);
    FUN_140cbbd90(&local_40);
    lVar1 = lStack_38;
  }
  return;
}



// FUNCTION 1425cb110 RemoveClientConnection body=83 status=ok
// SIG undefined RemoveClientConnection(void)

void UReplicationDriver::RemoveClientConnection(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x48,L"Pure virtual not implemented (%s)",L"UReplicationDriver::RemoveClientConnection"
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x48,L"Pure virtual not implemented (%s)",L"UReplicationDriver::RemoveClientConnection"
            );
  return;
}



// FUNCTION 1425cb170 FUN_1425cb170 body=247 status=ok
// SIG undefined FUN_1425cb170(void)

void FUN_1425cb170(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(longlong **)(param_1 + 0x1650) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425cb18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1650) + 0x298))();
    return;
  }
  if (*(int *)(param_1 + 0x1660) != *(int *)(param_1 + 0x168c)) {
    lVar7 = *(longlong *)(param_1 + 0x1698);
    if (*(longlong *)(param_1 + 0x1698) == 0) {
      lVar7 = param_1 + 0x1690;
    }
    uVar6 = (longlong)*(int *)(param_1 + 0x16a0) - 1;
    iVar2 = *(int *)(lVar7 + ((longlong)*(int *)(param_2 + 0x1c) & uVar6) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1658);
      while (lVar5 = (longlong)iVar2, *(int *)(lVar4 + lVar5 * 0xc) != *(int *)(param_2 + 0x1c)) {
        iVar2 = *(int *)(lVar4 + 4 + lVar5 * 0xc);
        if (iVar2 == -1) {
          return;
        }
      }
      uVar6 = (longlong)*(int *)(lVar4 + 8 + lVar5 * 0xc) & uVar6;
      puVar1 = (undefined4 *)(lVar7 + uVar6 * 4);
      iVar3 = *(int *)(lVar7 + uVar6 * 4);
      do {
        if (iVar3 == -1) {
LAB_1425cb246:
          TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized((longlong *)(param_1 + 0x1658),iVar2,1);
          return;
        }
        if (iVar3 == iVar2) {
          *puVar1 = *(undefined4 *)(lVar4 + lVar5 * 0xc + 4);
          goto LAB_1425cb246;
        }
        lVar7 = (longlong)iVar3 * 3 + 1;
        iVar3 = *(int *)(lVar4 + lVar7 * 4);
        puVar1 = (undefined4 *)(lVar4 + lVar7 * 4);
      } while( true );
    }
  }
  return;
}



// FUNCTION 1425cb270 FUN_1425cb270 body=79 status=ok
// SIG undefined FUN_1425cb270(void)

void FUN_1425cb270(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  FNetworkObjectList::Remove(*(undefined8 *)(param_1 + 0x528));
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (param_1 + 0x2b0,*(undefined8 *)(param_2 + 0x18));
  plVar1 = *(longlong **)(param_1 + 0x520);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1425cb2c0 RemoveNetworkActor body=83 status=ok
// SIG undefined RemoveNetworkActor(void)

void UReplicationDriver::RemoveNetworkActor(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4c,L"Pure virtual not implemented (%s)",L"UReplicationDriver::RemoveNetworkActor");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x4c,L"Pure virtual not implemented (%s)",L"UReplicationDriver::RemoveNetworkActor");
  return;
}



// FUNCTION 1425cb320 FUN_1425cb320 body=173 status=ok
// SIG undefined FUN_1425cb320(void)

void FUN_1425cb320(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x758);
    lVar3 = (longlong)*(int *)(param_1 + 0x760) * 0xc0 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xc0) {
      uVar1 = 0;
      do {
        AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < 2);
    }
    FUN_1423424e0(param_1);
    *(byte *)(param_1 + 0x744) = *(byte *)(param_1 + 0x744) & 0xef;
  }
  return;
}



// FUNCTION 1425cb3e0 FUN_1425cb3e0 body=415 status=ok
// SIG undefined FUN_1425cb3e0(void)

void FUN_1425cb3e0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar10 = false;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(lVar11 + *(longlong *)(param_1 + 0x98));
      if (param_3 != lVar4) {
        if (*(char *)(param_1 + 0x180) == '\0') {
          bVar10 = true;
          puVar9 = (undefined8 *)
                   (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_48);
          cVar8 = FUN_1425d1d70(lVar4,*puVar9);
          if (cVar8 == '\0') goto LAB_1425cb473;
          bVar6 = true;
        }
        else {
LAB_1425cb473:
          bVar6 = false;
        }
        plVar5 = local_40;
        if ((bVar10) && (bVar10 = false, local_40 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
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
        if (((bVar6) &&
            (plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x1580) + 8), plVar5 != (longlong *)0x0))
           && (*(int *)((longlong)plVar5 + 0x44) == 4)) {
          local_58 = *param_2;
          local_50 = param_2[1];
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x300))(plVar5,&local_58);
        }
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar12 < *(int *)(param_1 + 0xa0));
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1425cb580 FUN_1425cb580 body=1323 status=ok
// SIG undefined FUN_1425cb580(void)

void FUN_1425cb580(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar15 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x1650) == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x1660) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1664)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x1658,0);
    }
    *(undefined4 *)(param_1 + 0x1688) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168c) = 0;
    iVar2 = *(int *)(param_1 + 0x1680) + 0x1f;
    _Dst = *(void **)(param_1 + 0x1678);
    if (*(void **)(param_1 + 0x1678) == (void *)0x0) {
      _Dst = (void *)(param_1 + 0x1668);
    }
    _guard_xfg_dispatch_icall_nop
              (_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
    *(undefined4 *)(param_1 + 0x1680) = 0;
    if (0 < (int)*(uint *)(param_1 + 0x16a0)) {
      uVar16 = (ulonglong)*(uint *)(param_1 + 0x16a0);
      plVar10 = plVar15;
      do {
        uVar14 = (longlong)*(int *)(param_1 + 0x16a0) - 1U & (ulonglong)plVar10;
        lVar7 = *(longlong *)(param_1 + 0x1698);
        if (*(longlong *)(param_1 + 0x1698) == 0) {
          lVar7 = param_1 + 0x1690;
        }
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        *(undefined4 *)(lVar7 + uVar14 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1650) + 0x2a0))();
  }
  lVar7 = *param_2;
  plVar10 = (longlong *)(param_1 + 0x1798);
  if (*(int *)(param_1 + 0x17a0) != *(int *)(param_1 + 0x17cc)) {
    lVar5 = *(longlong *)(param_1 + 0x17d8);
    if (*(longlong *)(param_1 + 0x17d8) == 0) {
      lVar5 = param_1 + 0x17d0;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                             (longlong)*(int *)(param_1 + 0x17e0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar2 * 0x20 + *plVar10);
        if (*plVar11 == lVar7) {
          if (iVar2 != -1) goto LAB_1425cb6d2;
          break;
        }
        iVar2 = (int)plVar11[3];
      } while (iVar2 != -1);
    }
  }
  plVar11 = plVar15;
LAB_1425cb6d2:
  plVar9 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar15;
  }
  if ((lVar7 == 0) || (plVar9 == (longlong *)0x0)) {
    *(undefined4 *)(param_1 + 0x1750) = 0;
    if (*(int *)(param_1 + 0x1754) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1748,0);
    }
    *(undefined4 *)(param_1 + 0x1778) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x177c) = 0;
    *(undefined4 *)(param_1 + 6000) = 0;
    if (*(int *)(param_1 + 0x1774) != 0) {
      *(undefined4 *)(param_1 + 0x1774) = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x1758,0);
    }
    if (0 < (int)*(uint *)(param_1 + 0x1790)) {
      uVar16 = (ulonglong)*(uint *)(param_1 + 0x1790);
      do {
        uVar14 = (longlong)*(int *)(param_1 + 0x1790) - 1U & (ulonglong)plVar15;
        lVar7 = *(longlong *)(param_1 + 0x1788);
        if (*(longlong *)(param_1 + 0x1788) == 0) {
          lVar7 = param_1 + 0x1780;
        }
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        *(undefined4 *)(lVar7 + uVar14 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
    ::Empty(plVar10,0);
  }
  else {
    plVar11 = (longlong *)(param_1 + 0x1748);
    iVar2 = *(int *)(param_1 + 6000);
    puStack_48 = (uint *)(param_1 + 0x1758);
    local_98._0_4_ = 0;
    local_98._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar2 != 0) {
      puVar13 = *(uint **)(param_1 + 0x1768);
      if (*(uint **)(param_1 + 0x1768) == (uint *)0x0) {
        puVar13 = puStack_48;
      }
      uVar4 = *puVar13;
      plVar8 = plVar15;
      plVar12 = plVar15;
      while (uVar4 == 0) {
        iVar3 = (int)plVar8;
        uStack_80 = (int)plVar12 + 0x20;
        plVar12 = (longlong *)(ulonglong)uStack_80;
        local_98._0_4_ = iVar3 + 1;
        plVar8 = (longlong *)(ulonglong)(uint)local_98;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_1425cb7ad;
        uVar4 = puVar13[(longlong)iVar3 + 1];
      }
      local_98._4_4_ = -uVar4 & uVar4;
      iVar3 = 0x1f;
      if (local_98._4_4_ != 0) {
        for (; local_98._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_98._4_4_ == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_88._4_4_ = (uStack_80 - iVar3) + 0x1f;
      if (iVar2 < local_88._4_4_) {
LAB_1425cb7ad:
        local_88._4_4_ = iVar2;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50._0_4_ = (uint)local_98;
    uStack_50._4_4_ = local_98._4_4_;
    uStack_90._0_4_ = (uint)local_98;
    uStack_90._4_4_ = local_98._4_4_;
    local_78._4_4_ = iStack_7c;
    local_78._0_4_ = uStack_80;
    local_78._8_8_ = plVar11;
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    bVar1 = iVar2 <= local_88._4_4_;
    plVar8 = plVar11;
    local_58 = plVar11;
    local_88 = puStack_48;
    if (bVar1) {
      do {
        plVar6 = (longlong *)*plVar9;
        plVar12 = plVar6 + (int)plVar9[1];
        if (plVar6 != plVar12) {
          do {
            if (*plVar6 == *(longlong *)(*plVar11 + (longlong)iStack_7c * 0x10)) goto LAB_1425cb837;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar12);
        }
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove(plVar8);
LAB_1425cb837:
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        if (iStack_7c < (int)local_88[6]) break;
        plVar8 = (longlong *)local_78._8_8_;
      } while( true );
    }
    iVar2 = *(int *)(param_1 + 0x17c0);
    puStack_48 = (uint *)(param_1 + 0x17a8);
    local_98 = 0x100000000;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar2 != 0) {
      puVar13 = *(uint **)(param_1 + 0x17b8);
      if (*(uint **)(param_1 + 0x17b8) == (uint *)0x0) {
        puVar13 = puStack_48;
      }
      uVar4 = *puVar13;
      plVar11 = plVar15;
      while (uVar4 == 0) {
        iVar3 = (int)plVar11;
        uStack_80 = (int)plVar15 + 0x20;
        plVar15 = (longlong *)(ulonglong)uStack_80;
        plVar11 = (longlong *)(ulonglong)(iVar3 + 1U);
        local_98._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
        local_98 = CONCAT44(local_98._4_4_,iVar3 + 1U);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_1425cb8f9;
        uVar4 = puVar13[(longlong)iVar3 + 1];
      }
      uVar4 = -uVar4 & uVar4;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      local_98 = CONCAT44(uVar4,(uint)local_98);
      if (uVar4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_88._4_4_ = (uStack_80 - iVar3) + 0x1f;
      if (iVar2 < local_88._4_4_) {
LAB_1425cb8f9:
        local_88._4_4_ = iVar2;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = local_98;
    local_60 = 0;
    local_30._0_4_ = SUB84(plVar10,0);
    local_30._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    uStack_90 = local_98;
    local_78._8_4_ = (undefined4)local_30;
    local_78._0_8_ = auStack_40._8_8_;
    local_78._12_4_ = local_30._4_4_;
    bVar1 = *(int *)(param_1 + 0x17c0) <= local_88._4_4_;
    local_68 = plVar10;
    local_58 = plVar10;
    local_30 = plVar10;
    local_88 = puStack_48;
    if (bVar1) {
      do {
        if (*(longlong *)((longlong)iStack_7c * 0x20 + *plVar10) != *param_2) {
          TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::Remove(local_78._8_8_);
          local_60 = CONCAT11(local_60._1_1_,1);
        }
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while ((int)local_88[6] <= iStack_7c);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
  }
  TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x16a8,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x16f8,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x16f8,0);
  return;
}



// FUNCTION 1425cbab0 FUN_1425cbab0 body=175 status=ok
// SIG undefined FUN_1425cbab0(void)

void FUN_1425cbab0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  TSet<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x260,0);
  FUN_1406c5d90(param_1 + 0x2b0,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FClassNetCacheMgr::ClearClassNetCache();
  }
  FUN_1425f0da0(*(undefined8 *)(param_1 + 0x528));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1425cb580(*(longlong *)(param_1 + 0x90),param_2);
  }
  for (iVar1 = 0; (-1 < iVar1 && (iVar1 < *(int *)(param_1 + 0xa0))); iVar1 = iVar1 + 1) {
    FUN_1425cb580(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8),param_2);
  }
  if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x288))();
  }
  return;
}



// FUNCTION 1425cbb60 ResetGameWorldState body=83 status=ok
// SIG undefined ResetGameWorldState(void)

void UReplicationDriver::ResetGameWorldState(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x44,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ResetGameWorldState");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x44,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ResetGameWorldState");
  return;
}



// FUNCTION 1425cbbc0 FUN_1425cbbc0 body=261 status=ok
// SIG undefined FUN_1425cbbc0(void)

void FUN_1425cbbc0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x208);
  if (uVar1 < 0x41) {
    uVar2 = 0x40;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x20c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x200);
  if (uVar2 < 0x41) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x200);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x200) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar5;
  return;
}



// FUNCTION 1425cbcd0 FUN_1425cbcd0 body=311 status=ok
// SIG undefined FUN_1425cbcd0(void)

undefined8 *
FUN_1425cbcd0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (((*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x1c) != 0) ||
      *(int *)(param_1 + 0x18) != 0) || *(int *)(param_1 + 0x14) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1c);
    *param_2 = *(undefined8 *)(param_1 + 0x14);
    param_2[1] = uVar2;
    if (*(char *)(param_4 + 1) == '\0') {
      return param_2;
    }
    *(undefined1 *)(param_4 + 1) = 0;
    return param_2;
  }
  plVar5 = (longlong *)0x0;
  local_res8 = (longlong *)0x0;
  if ((*(char *)(param_4 + 1) != '\0') && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)
     ) {
    local_28 = *param_4;
    local_20 = 0x202ffff;
    local_1c = 0xffffffff;
    cVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_28,&local_res8,param_3);
    if ((cVar3 != '\0') && (local_res8 != (longlong *)0x0)) {
      (**(code **)(*local_res8 + 0x2c0))(local_res8,param_2);
      goto LAB_1425cbde7;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == -1) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*(longlong *)param_3[1] + 0x340))();
    if ((iVar1 < 0) || ((int)plVar4[1] <= iVar1)) {
      if (DAT_146aff640 == '\0') {
        DAT_146aff640 = '\x01';
      }
    }
    else {
      plVar5 = *(longlong **)(*plVar4 + (longlong)iVar1 * 8);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x2c0))(plVar5,param_2);
  }
LAB_1425cbde7:
  if (*(char *)(param_4 + 1) != '\0') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1425cbe10 FUN_1425cbe10 body=321 status=ok
// SIG undefined FUN_1425cbe10(void)

void FUN_1425cbe10(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 0xf;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,param_2,4);
      if ((local_ef & 0x10) != 0) {
        FArchive::ByteSwap(&local_118,param_2,4);
      }
    }
    else {
      *param_2 = *(undefined4 *)*local_110;
      *local_110 = *local_110 + 4;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res18,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1425cbf60 FUN_1425cbf60 body=518 status=ok
// SIG undefined FUN_1425cbf60(void)

void FUN_1425cbf60(longlong *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 local_res8 [8];
  int local_res20 [2];
  longlong local_d8;
  longlong *local_d0;
  longlong local_48;
  undefined4 local_38;
  
  (**(code **)(*param_1 + 0x2a8))();
  if ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0) {
    if (param_3 != '\0') {
      FUN_1425c91f0(param_1);
      iVar3 = (int)param_1[0x2b9];
      *(int *)(param_1 + 0x2b9) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x15cc) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x2b8,iVar3);
      }
      *(undefined4 *)(param_1[0x2b8] + (longlong)iVar3 * 4) = param_2;
    }
    FUN_1416884c0(&local_d8,0x20,1);
    FBitWriter::WriteBit(&local_d8,1);
    FBitWriter::WriteIntWrapped(&local_d8,param_2,0x4000);
    if ((longlong *)param_1[0xb] == (longlong *)0x0) {
      FBitWriter::WriteBit(&local_d8,0);
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x368))();
      if (cVar1 == '\0') {
        cVar1 = 0 < *DAT_146aff470;
      }
      else {
        cVar1 = (char)param_1[0x2af];
      }
      FBitWriter::WriteBit(&local_d8,cVar1 != '\0');
      cVar2 = (**(code **)(*(longlong *)param_1[0xb] + 0x368))();
      if ((cVar2 != '\0') && (cVar1 != '\0')) {
        iVar3 = (int)ROUND(((float)((double)param_1[0x8a] * 1000.0) +
                           (float)((double)param_1[0x8a] * 1000.0)) - 0.5) >> 1;
        local_res8[0] = 0xff;
        if (iVar3 < 0x100) {
          local_res8[0] = (char)iVar3;
        }
        if ((undefined1 *)local_d0[1] < (undefined1 *)*local_d0 + 1) {
          (**(code **)(local_d8 + 0x50))(&local_d8,local_res8,1);
        }
        else {
          local_res8[0] = *(undefined1 *)*local_d0;
          *local_d0 = *local_d0 + 1;
        }
      }
    }
    local_res20[0] =
         (int)(*(int *)((longlong)param_1 + 0x48c) +
              (*(int *)((longlong)param_1 + 0x48c) >> 0x1f & 0x3ffU)) >> 10;
    FUN_141694b60(&local_d8,local_res20);
    FUN_1425d62e0(param_1,local_48,local_38,0,0,2);
    *(undefined2 *)(param_1 + 0x48) = 0x100;
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_d8);
  }
  return;
}



// FUNCTION 1425cc170 FUN_1425cc170 body=633 status=ok
// SIG undefined FUN_1425cc170(void)

undefined4 FUN_1425cc170(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_res18 [2];
  
  (**(code **)(*param_1 + 0x2a8))();
  plVar1 = param_1 + 0x6c;
  *(int *)(param_1[0xb] + 0x1ac) = *(int *)(param_1[0xb] + 0x1ac) + 1;
  *(int *)(param_1[0xb] + 0x1b4) = *(int *)(param_1[0xb] + 0x1b4) + 1;
  *(undefined1 *)((longlong)param_1 + 0x241) = 1;
  (**(code **)(*plVar1 + 0x168))(plVar1);
  FBitWriter::WriteBit(plVar1,0);
  FBitWriter::WriteBit(plVar1,(*(byte *)(param_2 + 0xe8) & 6) != 0);
  bVar2 = *(byte *)(param_2 + 0xe8);
  uVar4 = (ulonglong)bVar2;
  if ((bVar2 & 6) != 0) {
    FBitWriter::WriteBit(plVar1,bVar2 >> 1 & 1);
    FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe8) >> 2 & 1);
    bVar2 = *(byte *)(param_2 + 0xe8);
    uVar4 = (ulonglong)bVar2;
    if ((bVar2 & 4) != 0) {
      FBitWriter::WriteBit(plVar1,bVar2 >> 3 & 1);
      uVar4 = (ulonglong)*(byte *)(param_2 + 0xe8);
    }
  }
  FBitWriter::WriteBit(plVar1,uVar4 >> 4 & 1);
  FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe8) >> 5 & 1);
  local_res18[0] = *(undefined4 *)(param_2 + 0xd8);
  (**(code **)(*plVar1 + 0x68))(plVar1,local_res18);
  FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe9) >> 1 & 1);
  FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe9) >> 2 & 1);
  FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe8) >> 6 & 1);
  bVar2 = *(byte *)(param_2 + 0xe8);
  if (((bVar2 & 0x20) != 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0)) {
    FBitWriter::WriteIntWrapped(plVar1,*(undefined4 *)(param_2 + 0xe0),0x400);
    bVar2 = *(byte *)(param_2 + 0xe8);
  }
  if ((bVar2 & 0x40) != 0) {
    FBitWriter::WriteBit(plVar1,bVar2 >> 7);
    FBitWriter::WriteBit(plVar1,*(byte *)(param_2 + 0xe9) & 1);
    bVar2 = *(byte *)(param_2 + 0xe8);
  }
  if ((bVar2 & 0x22) != 0) {
    FBitWriter::WriteIntWrapped(plVar1,*(undefined4 *)(param_2 + 0xdc),8);
  }
  FBitWriter::WriteIntWrapped(plVar1,*(undefined4 *)(param_2 + 0xa0),(int)param_1[0x14] << 3);
  *(undefined1 *)(param_1 + 0x48) = param_3;
  *(double *)(param_2 + 0xd0) = (double)*(float *)(param_1[0xb] + 0x170);
  uVar3 = FUN_1425d62e0(param_1,param_1[0x7e],(int)param_1[0x80],*(undefined8 *)(param_2 + 0x90),
                        (int)*(undefined8 *)(param_2 + 0xa0),1);
  *(undefined4 *)(param_2 + 0xe4) = uVar3;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(param_2 + 0xe9) & 2) == 0) goto LAB_1425cc3ce;
    (**(code **)(*plVar1 + 0x2b0))(plVar1,uVar3,param_2);
  }
  if ((*(byte *)(param_2 + 0xe9) & 2) != 0) {
    *(int *)(param_1[0xb] + 0x198) =
         *(int *)(param_1[0xb] + 0x198) + (int)(param_1[0x80] + *(longlong *)(param_2 + 0xa0) >> 3);
  }
LAB_1425cc3ce:
  return *(undefined4 *)(param_2 + 0xe4);
}



// FUNCTION 1425cc3f0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451191b8;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc430 FUN_1425cc430 body=55 status=ok
// SIG undefined FUN_1425cc430(void)

undefined8 * FUN_1425cc430(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145118dc0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc470 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451196b0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc4b0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119668;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc4f0 FUN_1425cc4f0 body=55 status=ok
// SIG undefined FUN_1425cc4f0(void)

undefined8 * FUN_1425cc4f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119788;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc530 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119740;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc570 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119008;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc5b0 SerializationConstructor body=59 status=ok
// SIG undefined SerializationConstructor(void)

undefined8 * FMaterialUniformExpressionClamp::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145118e98;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc5f0 FUN_1425cc5f0 body=54 status=ok
// SIG undefined FUN_1425cc5f0(void)

void FUN_1425cc5f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145118f28;
    puVar1[2] = 0;
    return;
  }
  return;
}



// FUNCTION 1425cc630 SerializationConstructor body=46 status=ok
// SIG undefined SerializationConstructor(void)

void FMaterialUniformExpressionConstant::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119428;
    return;
  }
  return;
}



// FUNCTION 1425cc660 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451197d0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc6a0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451198a8;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc6e0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119860;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc720 SerializationConstructor body=62 status=ok
// SIG undefined SerializationConstructor(void)

undefined8 * FMaterialUniformExpressionExternalTexture::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = &PTR_FUN_145119bd8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc760 SerializationConstructor body=62 status=ok
// SIG undefined SerializationConstructor(void)

undefined8 * FMaterialUniformExpressionExternalTextureBase::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119b90;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc7a0 FUN_1425cc7a0 body=66 status=ok
// SIG undefined FUN_1425cc7a0(void)

undefined8 * FUN_1425cc7a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119290;
    *(undefined1 *)(puVar1 + 6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc7f0 FUN_1425cc7f0 body=66 status=ok
// SIG undefined FUN_1425cc7f0(void)

undefined8 * FUN_1425cc7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119248;
    *(undefined1 *)(puVar1 + 6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc840 SerializationConstructor body=66 status=ok
// SIG undefined SerializationConstructor(void)

undefined8 * FMaterialUniformExpressionExternalTextureParameter::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = &PTR_FUN_145119ee0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc890 FUN_1425cc890 body=60 status=ok
// SIG undefined FUN_1425cc890(void)

void FUN_1425cc890(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_1451195c0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    return;
  }
  return;
}



// FUNCTION 1425cc8d0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145118fc0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc910 FUN_1425cc910 body=55 status=ok
// SIG undefined FUN_1425cc910(void)

undefined8 * FUN_1425cc910(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119170;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc950 SerializationConstructor body=62 status=ok
// SIG undefined SerializationConstructor(void)

undefined8 * FMaterialUniformExpressionFoldedMath::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__14510c098;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xf;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cc990 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119128;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cc9d0 SerializationConstructor body=61 status=ok
// SIG undefined SerializationConstructor(void)

void FMaterialUniformExpressionLength::SerializationConstructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119a80;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xf;
    return;
  }
  return;
}



// FUNCTION 1425cca10 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__14510c050;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cca50 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119ac8;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425cca90 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451198f0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccad0 FUN_1425ccad0 body=55 status=ok
// SIG undefined FUN_1425ccad0(void)

undefined8 * FUN_1425ccad0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145118e50;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ccb10 FUN_1425ccb10 body=55 status=ok
// SIG undefined FUN_1425ccb10(void)

undefined8 * FUN_1425ccb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145118e08;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ccb50 FUN_1425ccb50 body=47 status=ok
// SIG undefined FUN_1425ccb50(void)

void FUN_1425ccb50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_1451192d8;
    return;
  }
  return;
}



// FUNCTION 1425ccb80 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145118d78;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccbc0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119818;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccc00 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119050;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccc40 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145118ee0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccc80 FUN_1425ccc80 body=76 status=ok
// SIG undefined FUN_1425ccc80(void)

undefined8 * FUN_1425ccc80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119518;
    puVar1[2] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = 0x202ffff;
    *(undefined4 *)(puVar1 + 4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cccd0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451190e0;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccd10 FUN_1425ccd10 body=54 status=ok
// SIG undefined FUN_1425ccd10(void)

void FUN_1425ccd10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119620;
    puVar1[2] = 0;
    return;
  }
  return;
}



// FUNCTION 1425ccd50 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119a38;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccd90 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__1451196f8;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccdd0 FUN_1425ccdd0 body=60 status=ok
// SIG undefined FUN_1425ccdd0(void)

void FUN_1425ccdd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119b30;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    return;
  }
  return;
}



// FUNCTION 1425cce10 FUN_1425cce10 body=80 status=ok
// SIG undefined FUN_1425cce10(void)

undefined8 * FUN_1425cce10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119560;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x202ffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425cce60 FUN_1425cce60 body=54 status=ok
// SIG undefined FUN_1425cce60(void)

void FUN_1425cce60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145119200;
    puVar1[2] = 0;
    return;
  }
  return;
}



// FUNCTION 1425ccea0 FUN_1425ccea0 body=55 status=ok
// SIG undefined FUN_1425ccea0(void)

undefined8 * FUN_1425ccea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1451199f0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ccee0 Create body=54 status=ok
// SIG IPDBError * Create(PDB * param_1)

/* Library Function - Single Match
    public: static struct IPDBError * __ptr64 __cdecl CPDBErrorDefault::Create(struct PDB * __ptr64)
   
   Library: Visual Studio 2017 Release */

IPDBError * __cdecl CPDBErrorDefault::Create(PDB *param_1)

{
  IPDBError *pIVar1;
  
  pIVar1 = (IPDBError *)operator_new(0x18);
  if (pIVar1 != (IPDBError *)0x0) {
    *(undefined4 *)(pIVar1 + 8) = 0;
    *(undefined ***)pIVar1 = &PTR__scalar_deleting_destructor__145119098;
    *(undefined8 *)(pIVar1 + 0x10) = 0;
    return pIVar1;
  }
  return (IPDBError *)0x0;
}



// FUNCTION 1425ccf20 FUN_1425ccf20 body=81 status=ok
// SIG undefined FUN_1425ccf20(void)

undefined8 * FUN_1425ccf20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_145119470;
    puVar1[2] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = 0x202ffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ccf80 FUN_1425ccf80 body=169 status=ok
// SIG undefined FUN_1425ccf80(void)

void FUN_1425ccf80(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_1 + 0x14);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return;
}



// FUNCTION 1425cd030 FUN_1425cd030 body=50 status=ok
// SIG undefined FUN_1425cd030(void)

void FUN_1425cd030(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x28);
  FUN_1425ccf80(param_1,param_2);
  return;
}



// FUNCTION 1425cd070 FUN_1425cd070 body=206 status=ok
// SIG undefined FUN_1425cd070(void)

void FUN_1425cd070(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  FUN_1419e0a40(param_2,param_1 + 0x1a);
  FUN_1419e0a40(param_2,param_1 + 0x20);
  FUN_1419e0a40(param_2,param_1 + 0x26);
  FUN_1419e0a40(param_2,param_1 + 0x2c);
  FUN_1419e0a40(param_2,param_1 + 0x32);
  FUN_1419e0a40(param_2,param_1 + 0x38);
  FUN_1419e0a40(param_2,param_1 + 0x3e);
  FUN_1419e0a40(param_2,param_1 + 0x44);
  FUN_1419e0a40(param_2,param_1 + 0x4a);
  FUN_1419e0b60(param_2,param_1 + 0x50);
  FUN_1419e0b60(param_2,param_1 + 0x54);
  FUN_1419e0a40(param_2,param_1 + 0x58);
  return;
}



// FUNCTION 1425cd140 FUN_1425cd140 body=954 status=ok
// SIG undefined FUN_1425cd140(void)

void FUN_1425cd140(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_1425b0bd0(param_2,param_1 + 0x10);
  FUN_1425b0bd0(param_2,param_1 + 0x20);
  FUN_1425b0bd0(param_2,param_1 + 0x30);
  FUN_1425b0bd0(param_2,param_1 + 0x40);
  FUN_1425b0bd0(param_2,param_1 + 0x60);
  FUN_1425b0bd0(param_2,param_1 + 0x50);
  FUN_1425b0bd0(param_2,param_1 + 0x70);
  uVar10 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1425b0bd0(param_2,&local_38);
  FUN_140910980(param_2,param_1 + 0xb0);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = (ulonglong *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x18)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2);
    }
    puVar3 = (ulonglong *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x28)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar3);
    }
    puVar4 = (ulonglong *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) <
        *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x48) +
        *(int *)(param_1 + 0x38)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar4);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = puVar12 + *(int *)(param_1 + 0x18);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x20))((longlong *)*puVar12,puVar12,puVar3);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x20);
    puVar6 = puVar12 + *(int *)(param_1 + 0x28);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x20))((longlong *)*puVar12,puVar12,puVar3);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x30);
    puVar6 = puVar12 + *(int *)(param_1 + 0x38);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x50))((longlong *)*puVar12,puVar12,puVar3);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x40);
    puVar6 = puVar12 + *(int *)(param_1 + 0x48);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x50))((longlong *)*puVar12,puVar12,puVar3);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    puVar6 = puVar12 + *(int *)(param_1 + 0x68);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x50))((longlong *)*puVar12,puVar12,puVar3);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x50);
    puVar6 = puVar12 + *(int *)(param_1 + 0x58);
    for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
      (**(code **)(*(longlong *)*puVar12 + 0x50))((longlong *)*puVar12,puVar12,puVar3);
    }
    if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2);
    }
    if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar3);
    }
    if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa8)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar4);
    }
    plVar8 = (longlong *)*puVar2;
    uVar14 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x98) < plVar8) {
      uVar14 = uVar10;
    }
    uVar9 = uVar10;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      do {
        lVar5 = *plVar8;
        plVar8 = plVar8 + 1;
        uVar13 = uVar13 + 1;
        *(short *)(lVar5 + 0x18) = (short)uVar9;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar13 != uVar14);
    }
    plVar8 = (longlong *)*puVar3;
    uVar14 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x88) < plVar8) {
      uVar14 = uVar10;
    }
    uVar9 = uVar10;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      do {
        lVar5 = *plVar8;
        plVar8 = plVar8 + 1;
        uVar13 = uVar13 + 1;
        *(short *)(lVar5 + 0x18) = (short)uVar9;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar13 != uVar14);
    }
    plVar8 = (longlong *)*puVar4;
    uVar14 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0xa8) < plVar8) {
      uVar14 = uVar10;
    }
    uVar9 = uVar10;
    if (uVar14 != 0) {
      do {
        lVar5 = *plVar8;
        plVar8 = plVar8 + 1;
        uVar10 = uVar10 + 1;
        *(short *)(lVar5 + 0x20) = (short)uVar9;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar10 != uVar14);
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_1425b6d10(param_1);
  }
  plVar7 = local_38;
  plVar8 = local_38;
  for (iVar11 = (int)local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar6 = (undefined8 *)*plVar8;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
    return;
  }
  return;
}



// FUNCTION 1425cd500 FUN_1425cd500 body=3131 status=ok
// SIG undefined FUN_1425cd500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425cd500(void **param_1,longlong *param_2,ulonglong param_3)

{
  void **ppvVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_8b8 [32];
  byte local_898;
  byte local_897;
  void *local_890;
  ulonglong local_888;
  void **local_880;
  undefined8 local_878;
  void *local_870;
  ulonglong local_868;
  void **local_860;
  void ***local_858;
  void *local_850;
  ulonglong local_848;
  void **local_840;
  undefined4 local_830 [2];
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_8b8;
  FUN_141763960();
  if (param_1[4] == (void *)0x0) {
LAB_1425cd583:
    param_3 = param_3 & 0xffffffffffffff00;
  }
  else {
    lVar8 = FUN_14290cfd0();
    param_3 = lVar8 + 0x88;
    if ((*(int *)(*(longlong *)((longlong)param_1[4] + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(ulonglong *)
         (*(longlong *)(*(longlong *)((longlong)param_1[4] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar8 + 0x90) * 8) != param_3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1425cd583;
    param_3 = CONCAT71((int7)(param_3 >> 8),1);
  }
  FUN_14242a0d0(&local_898,param_2,param_3,0xd6);
  ppvVar1 = param_1 + 0x69;
  uVar9 = FUN_1406da970(param_2);
  plVar10 = (longlong *)FUN_1406da970(uVar9,(longlong)param_1 + 0x33c);
  puVar12 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar12 + 1) {
    (**(code **)(*plVar10 + 0x50))(plVar10,ppvVar1,4);
    if ((*(byte *)((longlong)plVar10 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar10,ppvVar1,4);
    }
  }
  else {
    *(undefined4 *)ppvVar1 = *puVar12;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0x1d8 < (int)param_2[8])) {
    FUN_1421e8310(param_1 + 9,param_2,0);
    FUN_1421e8310(param_1 + 0xb,param_2,0);
    FUN_1425b4a00(param_1 + 5,param_2,0);
  }
  else {
    local_890 = (void *)0x0;
    local_888 = 0;
    local_850 = (void *)0x0;
    local_848 = 0;
    local_870 = (void *)0x0;
    local_868 = 0;
    local_880 = param_1;
    local_860 = param_1;
    local_840 = param_1;
    FUN_1421e8310(&local_890,param_2,0);
    FUN_1421e8310(&local_850,param_2,0);
    FUN_1425b4a00(&local_870,param_2,0);
    ppvVar1 = param_1 + 9;
    if (ppvVar1 != &local_890) {
      lVar8 = (longlong)(int)local_888;
      *(int *)(param_1 + 10) = (int)local_888;
      if (((int)local_888 == 0) && (*(int *)((longlong)param_1 + 0x54) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_888 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar1,local_890,lVar8 * 0xc);
      }
    }
    pvVar5 = local_850;
    ppvVar1 = param_1 + 0xb;
    if (ppvVar1 != &local_850) {
      lVar8 = (longlong)(int)local_848;
      *(int *)(param_1 + 0xc) = (int)local_848;
      if (((int)local_848 == 0) && (*(int *)((longlong)param_1 + 100) == 0)) {
        *(undefined4 *)((longlong)param_1 + 100) = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_848 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar1,pvVar5,lVar8 * 0xc);
      }
    }
    pvVar6 = local_870;
    ppvVar1 = param_1 + 5;
    if (ppvVar1 != &local_870) {
      iVar16 = (int)local_868;
      *(int *)(param_1 + 6) = (int)local_868;
      if (((int)local_868 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      }
      else {
        TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_868 & 0xffffffff);
        if (iVar16 != 0) {
          puVar12 = (undefined4 *)((longlong)pvVar6 + 0x10);
          puVar15 = *ppvVar1;
          do {
            *puVar15 = *(undefined8 *)(puVar12 + -4);
            *(undefined4 *)(puVar15 + 1) = puVar12[-2];
            *(undefined4 *)((longlong)puVar15 + 0xc) = puVar12[-1];
            *(undefined4 *)(puVar15 + 2) = *puVar12;
            *(undefined4 *)((longlong)puVar15 + 0x14) = puVar12[1];
            *(undefined4 *)(puVar15 + 3) = puVar12[2];
            *(undefined2 *)((longlong)puVar15 + 0x1c) = *(undefined2 *)(puVar12 + 3);
            *(undefined2 *)((longlong)puVar15 + 0x1e) = *(undefined2 *)((longlong)puVar12 + 0xe);
            *(undefined4 *)(puVar15 + 4) = puVar12[4];
            *(undefined4 *)((longlong)puVar15 + 0x24) = puVar12[5];
            *(undefined4 *)((longlong)puVar15 + 0x24) = puVar12[5];
            *(undefined4 *)(puVar15 + 5) = puVar12[6];
            *(undefined4 *)((longlong)puVar15 + 0x2c) = puVar12[7];
            *(undefined4 *)(puVar15 + 6) = puVar12[8];
            *(undefined2 *)((longlong)puVar15 + 0x34) = *(undefined2 *)(puVar12 + 9);
            *(undefined1 *)((longlong)puVar15 + 0x36) = *(undefined1 *)((longlong)puVar12 + 0x26);
            *(undefined1 *)((longlong)puVar15 + 0x37) = *(undefined1 *)((longlong)puVar12 + 0x27);
            puVar15[7] = *(undefined8 *)(puVar12 + 10);
            iVar16 = iVar16 + -1;
            puVar12 = puVar12 + 0x10;
            puVar15 = puVar15 + 8;
          } while (iVar16 != 0);
        }
      }
    }
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    if (local_890 != (void *)0x0) {
      FMemory::Free(local_890);
    }
  }
  uVar17 = 0;
  bVar7 = *(byte *)(param_2 + 5);
  if ((bVar7 & 1) != 0) {
    uVar11 = uVar17;
    uVar14 = uVar17;
    if (0 < *(int *)(param_1 + 6)) {
      do {
        uVar13 = (int)uVar14 + 1;
        pbVar2 = (byte *)((longlong)param_1[5] + uVar11 + 0x37);
        *pbVar2 = *pbVar2 & 0x1f;
        uVar11 = uVar11 + 0x40;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < *(int *)(param_1 + 6));
      bVar7 = *(byte *)(param_2 + 5);
    }
    if (((bVar7 & 1) != 0) && ((int)param_2[8] < 0x1d9)) {
      local_890 = (void *)0x0;
      local_888 = 0;
      local_870 = (void *)0x0;
      local_868 = 0;
      local_880 = param_1;
      local_860 = param_1;
      (**(code **)(*param_2 + 0x30))(param_2,&local_880);
      FUN_1425afff0(param_2,&local_890);
      FUN_1425b5010(&local_870,param_2,0);
      pvVar5 = local_890;
      ppvVar1 = param_1 + 0xd;
      if (ppvVar1 != &local_890) {
        iVar16 = (int)local_888;
        *(int *)(param_1 + 0xe) = (int)local_888;
        if (((int)local_888 == 0) && (*(int *)((longlong)param_1 + 0x74) == 0)) {
          *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        }
        else {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy
                    (ppvVar1,local_888 & 0xffffffff);
          if (iVar16 != 0) {
            puVar12 = (undefined4 *)((longlong)pvVar5 + 8);
            puVar15 = *ppvVar1;
            do {
              *puVar15 = *(undefined8 *)(puVar12 + -2);
              *(undefined4 *)(puVar15 + 1) = *puVar12;
              *(undefined4 *)((longlong)puVar15 + 0xc) = puVar12[1];
              *(undefined4 *)(puVar15 + 2) = puVar12[2];
              *(undefined4 *)((longlong)puVar15 + 0x14) = puVar12[3];
              *(undefined4 *)(puVar15 + 3) = puVar12[4];
              *(undefined4 *)((longlong)puVar15 + 0x1c) = puVar12[5];
              puVar15[4] = *(undefined8 *)(puVar12 + 6);
              puVar15[6] = *(undefined8 *)(puVar12 + 10);
              *(undefined4 *)(puVar15 + 7) = puVar12[0xc];
              *(undefined4 *)((longlong)puVar15 + 0x3c) = puVar12[0xd];
              *(undefined4 *)(puVar15 + 8) = puVar12[0xe];
              *(undefined4 *)((longlong)puVar15 + 0x44) = puVar12[0xf];
              *(undefined1 *)(puVar15 + 9) = *(undefined1 *)(puVar12 + 0x10);
              *(undefined1 *)((longlong)puVar15 + 0x49) = *(undefined1 *)((longlong)puVar12 + 0x41);
              *(undefined1 *)((longlong)puVar15 + 0x4a) = *(undefined1 *)((longlong)puVar12 + 0x42);
              iVar16 = iVar16 + -1;
              puVar12 = puVar12 + 0x14;
              puVar15 = puVar15 + 10;
            } while (iVar16 != 0);
          }
        }
      }
      pvVar5 = local_870;
      ppvVar1 = param_1 + 7;
      if (ppvVar1 != &local_870) {
        lVar8 = (longlong)(int)local_868;
        *(int *)(param_1 + 8) = (int)local_868;
        if (((int)local_868 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
          *(undefined4 *)((longlong)param_1 + 0x44) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_868 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar1,pvVar5,lVar8 * 0x18);
        }
      }
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      if (local_890 != (void *)0x0) {
        FMemory::Free();
      }
      goto LAB_1425cda5b;
    }
  }
  FUN_1425afff0(param_2,param_1 + 0xd);
  FUN_1425b5010(param_1 + 7,param_2,0);
LAB_1425cda5b:
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0x149 < (int)param_2[8])) {
    puVar12 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x32c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,(longlong)param_1 + 0x32c,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x32c) = *puVar12;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else {
    puVar12 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x32c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,(longlong)param_1 + 0x32c,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x32c) = *puVar12;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    plVar10 = (longlong *)param_2[1];
    if ((undefined4 *)plVar10[1] < (undefined4 *)*plVar10 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_878,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_878,4);
      }
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,*(undefined4 *)*plVar10);
      *plVar10 = *plVar10 + 4;
    }
    local_828 = 0;
    local_820 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7c8 = 0;
    local_7c0 = 0;
    local_7a8 = 0;
    local_7a0 = 0;
    local_788 = 0;
    local_780 = 0;
    local_768 = 0;
    local_760 = 0;
    local_748 = 0;
    local_740 = 0;
    local_728 = 0;
    local_720 = 0;
    local_708 = 0;
    local_700 = 0;
    local_6e8 = 0;
    local_6e0 = 0;
    local_6c8 = 0;
    local_6c0 = 0;
    local_6a8 = 0;
    local_6a0 = 0;
    local_688 = 0;
    local_680 = 0;
    local_668 = 0;
    local_660 = 0;
    local_648 = 0;
    local_640 = 0;
    local_628 = 0;
    local_620 = 0;
    local_608 = 0;
    local_600 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    local_5c8 = 0;
    local_5c0 = 0;
    local_5a8 = 0;
    local_5a0 = 0;
    local_588 = 0;
    local_580 = 0;
    local_568 = 0;
    local_560 = 0;
    local_548 = 0;
    local_540 = 0;
    local_528 = 0;
    local_520 = 0;
    local_508 = 0;
    local_500 = 0;
    local_4e8 = 0;
    local_4e0 = 0;
    local_4c8 = 0;
    local_4c0 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_488 = 0;
    local_480 = 0;
    local_468 = 0;
    local_460 = 0;
    local_448 = 0;
    local_440 = 0;
    local_428 = 0;
    local_420 = 0;
    local_408 = 0;
    local_400 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_388 = 0;
    local_380 = 0;
    local_368 = 0;
    local_360 = 0;
    local_348 = 0;
    local_340 = 0;
    local_328 = 0;
    local_320 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_288 = 0;
    local_280 = 0;
    local_268 = 0;
    local_260 = 0;
    local_248 = 0;
    local_240 = 0;
    local_228 = 0;
    local_220 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    local_160 = 0;
    local_148 = 0;
    local_140 = 0;
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    if (0 < (int)local_878) {
      puVar12 = local_830;
      do {
        uVar9 = (**(code **)(*param_2 + 0x30))(param_2,puVar12 + -2);
        uVar9 = FUN_1404c11e0(uVar9,puVar12 + 2);
        plVar10 = (longlong *)FUN_1404c11e0(uVar9,puVar12 + 4);
        puVar3 = *(undefined4 **)plVar10[1];
        if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar10 + 0x50))(plVar10,puVar12,4);
          if ((*(byte *)((longlong)plVar10 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar10,puVar12,4);
          }
        }
        else {
          *puVar12 = *puVar3;
          *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
        }
        uVar13 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar13;
        puVar12 = puVar12 + 8;
      } while ((int)uVar13 < (int)local_878);
    }
  }
  bVar7 = (byte)~*(byte *)((longlong)param_2 + 0x2a) >> 7;
  if ((int)param_2[8] < 0x1ba) {
    bVar7 = 1;
  }
  if (((*(byte *)(param_2 + 5) & 3) != 0) && (bVar7 != 0)) {
    local_878 = 0;
    (**(code **)(*param_2 + 0x30))(param_2,&local_878);
    local_890 = (void *)0x0;
    local_888 = 0;
    FUN_141f115c0(&local_890,param_2,0);
    local_850 = (void *)0x0;
    local_848 = 0;
    FUN_1425b4e10(&local_850,param_2,0);
    if (local_850 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_890 != (void *)0x0) {
      FMemory::Free();
    }
  }
  plVar10 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_1 + 0x65);
  (**(code **)(*plVar10 + 8))(plVar10,(longlong)param_1 + 0x329);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x14a)) {
    local_890 = (void *)0x0;
    local_888 = 0;
    FUN_141f115c0(&local_890,param_2,0);
    if (local_890 != (void *)0x0) {
      FMemory::Free();
    }
  }
  puVar12 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar12 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x314,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0x314,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x314) = *puVar12;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (((local_898 & 1) == 0) || ((local_897 & 1) == 0)) {
    operator<<(param_2,param_1 + 0x1b);
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_870,param_2);
  local_860 = &local_870;
  local_858 = &local_860;
  FUN_141661f40(&local_860,param_1 + 99);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_870);
  FUN_1425b0310(param_2,param_1 + 0xf);
  return;
}



// FUNCTION 1425ce140 Serialize body=88 status=ok
// SIG undefined Serialize(void)

void UMorphTarget::Serialize(longlong param_1,undefined8 param_2)

{
  byte local_res18 [16];
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  FUN_14242a0d0(local_res18,param_2,0,0xd6);
  if ((local_res18[0] & 2) == 0) {
    FUN_1425b0800(param_2,param_1 + 0x30);
  }
  return;
}



// FUNCTION 1425ce1a0 FUN_1425ce1a0 body=378 status=ok
// SIG undefined FUN_1425ce1a0(void)

void FUN_1425ce1a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  FUN_141763960();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x68);
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x1580);
  uVar4 = (longlong)*(int *)(param_1 + 0x1588) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0x1588) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      local_res8 = *puVar2;
      (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar4);
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x50) << 3,
               (longlong)*(int *)(param_1 + 0x54) << 3);
    FUN_1425b6c40(param_1 + 0x1748,param_2);
    lVar1 = (longlong)*(int *)(param_1 + 0x1790) << 2;
    (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x15c8) << 2,
               (longlong)*(int *)(param_1 + 0x15cc) << 2);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x15d8) << 2,
               (longlong)*(int *)(param_1 + 0x15dc) << 2);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x78) << 3,
               (longlong)*(int *)(param_1 + 0x7c) << 3);
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x88) << 3,
               (longlong)*(int *)(param_1 + 0x8c) << 3);
    FUN_1422c53b0(param_1 + 0x1600,param_2);
    lVar1 = (longlong)*(int *)(param_1 + 0x1648) << 2;
    (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
  }
  return;
}



// FUNCTION 1425ce320 FUN_1425ce320 body=135 status=ok
// SIG undefined FUN_1425ce320(void)

void FUN_1425ce320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_141763960();
  plVar1 = (longlong *)FUN_1408bdc30(param_2,param_1 + 0x98);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x90);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x110);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x118);
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0xa0) << 3,
               (longlong)*(int *)(param_1 + 0xa4) << 3);
  }
  return;
}



// FUNCTION 1425ce3b0 FUN_1425ce3b0 body=3020 status=ok
// SIG undefined FUN_1425ce3b0(void)

ulonglong FUN_1425ce3b0(longlong param_1,float param_2)

{
  uint *puVar1;
  double *pdVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  DWORD DVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  bool local_res18;
  ulonglong local_res20;
  undefined *local_1b8;
  ulonglong *puStack_1b0;
  uint local_1a8;
  undefined8 local_198;
  ulonglong *puStack_190;
  undefined4 local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  longlong *plStack_170;
  ulonglong *puStack_168;
  undefined1 auStack_160 [16];
  uint local_150;
  uint local_14c;
  undefined8 *local_148;
  undefined8 local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  longlong local_120;
  uint local_118;
  longlong *local_110;
  ulonglong local_108;
  undefined *local_f8;
  ulonglong *puStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  ulonglong *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 local_80 [16];
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
      uVar12 = (**(code **)(**(longlong **)(param_1 + 0x520) + 800))();
      return uVar12;
    }
    *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
    uVar17 = 0;
    local_14c = 0;
    local_118 = FUN_1425cf610(param_1);
    uVar12 = (ulonglong)(int)local_118;
    if (local_118 != 0) {
      local_a8 = UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
      local_res18 = false;
      fVar21 = (float)(**(code **)(*DAT_146b17150 + 0x2b8))();
      fVar22 = param_2;
      if (fVar21 != 0.0) {
        local_res18 = (1.0 / fVar21) * 1.2 < param_2;
        fVar22 = 1.0 / fVar21;
      }
      local_198 = (longlong *)0x0;
      puStack_190 = (ulonglong *)0x0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x528) + 0x58) -
              *(int *)(*(longlong *)(param_1 + 0x528) + 0x84)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_198);
      }
      FUN_1425cefe0(param_1,&local_198,fVar22);
      puStack_1b0 = &local_res20;
      local_res20 = local_res20 & 0xffffffffffffff00;
      local_1b8 = &DAT_14060d670;
      local_f8 = &DAT_14060d670;
      puStack_f0 = puStack_1b0;
      lVar13 = FUN_1415d8310(&local_f8,&DAT_146216a38);
      local_148 = (undefined8 *)(lVar13 + 0x18);
      local_1a8 = 0;
      local_110 = local_198;
      local_140 = *local_148;
      local_138 = *(longlong *)(lVar13 + 0x28);
      local_130 = '\0';
      local_128 = *(undefined8 *)(lVar13 + 0x30);
      *(undefined8 ***)(lVar13 + 0x30) = &local_148;
      *(int *)(lVar13 + 0x38) = *(int *)(lVar13 + 0x38) + 1;
      iVar11 = *(int *)(param_1 + 0xa0);
      if (0 < iVar11) {
        local_150 = (uint)puStack_190;
        local_120 = 0;
        uVar20 = (uint)puStack_190;
        local_108 = uVar12;
        do {
          lVar16 = local_120;
          lVar15 = DAT_146aff538;
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x98) + local_120 * 8);
          cVar7 = FUN_1415ad720();
          if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
             (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
            lVar14 = 4;
          }
          else {
            lVar14 = 0;
          }
          if (*(int *)(lVar15 + lVar14) == 2) {
            local_178 = (longlong *)(lVar13 + 0x16f8);
            local_198 = (longlong *)0x100000000;
            iVar11 = *(int *)(lVar13 + 0x1720);
            puStack_190 = (ulonglong *)(lVar13 + 0x1708);
            iStack_184 = 0;
            iStack_180 = 0;
            if (iVar11 != 0) {
              puVar19 = *(ulonglong **)(lVar13 + 0x1718);
              if (*(ulonglong **)(lVar13 + 0x1718) == (ulonglong *)0x0) {
                puVar19 = puStack_190;
              }
              uVar9 = (uint)*puVar19;
              iVar10 = 0;
              while (uVar9 == 0) {
                iStack_180 = iStack_180 + 0x20;
                uVar6 = (ulonglong)local_198 >> 0x20;
                local_198 = (longlong *)CONCAT44((int)uVar6,iVar10 + 1);
                if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10)
                goto LAB_1425ce6a5;
                uVar9 = *(uint *)((longlong)puVar19 + ((longlong)iVar10 + 1) * 4);
                iVar10 = iVar10 + 1;
              }
              uVar9 = -uVar9 & uVar9;
              iVar10 = 0x1f;
              if (uVar9 != 0) {
                for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              local_198 = (longlong *)CONCAT44(uVar9,SUB84(local_198,0));
              if (uVar9 == 0) {
                iVar10 = 0x20;
              }
              else {
                iVar10 = 0x1f - iVar10;
              }
              iStack_184 = (iStack_180 - iVar10) + 0x1f;
              if (iVar11 < iStack_184) {
LAB_1425ce6a5:
                iStack_184 = iVar11;
              }
            }
            local_188 = 0xffffffff;
            uStack_d0 = CONCAT44(iStack_184,0xffffffff);
            auStack_160._8_4_ = iStack_180;
            auStack_160._0_8_ = uStack_d0;
            auStack_160._12_4_ = uStack_17c;
            plStack_170 = local_198;
            local_b0 = 0;
            local_80._8_4_ = SUB84(local_178,0);
            local_80._12_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
            uStack_e0 = local_198;
            local_80._0_8_ = auStack_160._8_8_;
            local_c8._8_4_ = local_80._8_4_;
            local_c8._0_8_ = auStack_160._8_8_;
            local_c8._12_4_ = local_80._12_4_;
            iVar11 = iStack_184;
            puStack_168 = puStack_190;
            local_e8 = local_178;
            local_d8 = puStack_190;
            local_b8 = local_178;
            if (iStack_184 < *(int *)(lVar13 + 0x1720)) {
              do {
                lVar15 = *(longlong *)((longlong)iVar11 * 0x20 + 8 + *local_e8);
                lVar14 = *(longlong *)(lVar15 + 0xf8);
                if (lVar14 != 0) {
                  FObjectReplicator::ValidateAgainstState(lVar15,*(undefined8 *)(lVar14 + 0x68));
                }
                uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
                iVar11 = uStack_d0._4_4_;
              } while (uStack_d0._4_4_ < (int)(uint)local_d8[3]);
              if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
                TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                ::ConditionalRehash(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34))
                ;
              }
            }
          }
          lVar15 = local_a8;
          uVar9 = (uint)uVar17;
          if (lVar16 < (longlong)uVar12) {
            if (*(longlong *)(lVar13 + 0x90) != 0) {
              iVar10 = 0;
              plVar18 = (longlong *)(local_a8 + 0x610);
              iVar11 = *(int *)(local_a8 + 0x61c);
              *(undefined4 *)(local_a8 + 0x618) = 0;
              if ((iVar11 < 0) && (iVar11 != 0)) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeTo(plVar18,0);
                iVar11 = *(int *)(lVar15 + 0x61c);
                iVar10 = *(int *)(lVar15 + 0x618);
              }
              *(int *)(lVar15 + 0x618) = iVar10 + 1;
              if (iVar11 < iVar10 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar18,iVar10);
              }
              lVar16 = (longlong)iVar10 * 0x30 + *plVar18;
              if (lVar16 != 0) {
                FUN_1425ad800(lVar16,lVar13,param_2);
              }
              iVar11 = *(int *)(lVar13 + 0x50);
              iVar10 = 0;
              if (0 < iVar11) {
                lVar16 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + lVar16) + 0x90) !=
                      0) {
                    iVar11 = *(int *)(lVar15 + 0x618);
                    *(int *)(lVar15 + 0x618) = iVar11 + 1;
                    if (*(int *)(lVar15 + 0x61c) < iVar11 + 1) {
                      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar18,iVar11);
                    }
                    lVar14 = (longlong)iVar11 * 0x30 + *plVar18;
                    if (lVar14 != 0) {
                      FUN_1425ad800(lVar14,*(undefined8 *)(*(longlong *)(lVar13 + 0x48) + lVar16),
                                    param_2);
                    }
                  }
                  iVar11 = *(int *)(lVar13 + 0x50);
                  iVar10 = iVar10 + 1;
                  lVar16 = lVar16 + 8;
                } while (iVar10 < iVar11);
              }
              if (*(longlong **)(lVar13 + 0x30) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar13 + 0x30) + 0xea8))();
                iVar11 = *(int *)(lVar13 + 0x50);
              }
              iVar10 = 0;
              if (0 < iVar11) {
                lVar16 = 0;
                do {
                  plVar3 = *(longlong **)
                            (*(longlong *)(*(longlong *)(lVar13 + 0x48) + lVar16) + 0x30);
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0xea8))();
                  }
                  iVar10 = iVar10 + 1;
                  lVar16 = lVar16 + 8;
                } while (iVar10 < *(int *)(lVar13 + 0x50));
              }
              puStack_190 = &local_res20;
              local_res20 = local_res20 & 0xffffffffffffff00;
              local_f8 = &DAT_14060d670;
              local_198 = (longlong *)&DAT_14060d670;
              puStack_f0 = puStack_190;
              lVar16 = FUN_1415d8310(&local_198,&DAT_146216a38);
              local_178 = (longlong *)(lVar16 + 0x18);
              local_198 = (longlong *)0x0;
              local_1b8 = (undefined *)0x0;
              puStack_1b0 = (ulonglong *)CONCAT44(puStack_1b0._4_4_,uVar20);
              plStack_170 = (longlong *)*local_178;
              puStack_168 = *(ulonglong **)(lVar16 + 0x28);
              auStack_160._0_8_ = auStack_160._1_8_ << 8;
              auStack_160._8_8_ = *(undefined8 *)(lVar16 + 0x30);
              *(longlong ***)(lVar16 + 0x30) = &local_178;
              *(int *)(lVar16 + 0x38) = *(int *)(lVar16 + 0x38) + 1;
              local_res20 = 0;
              if (uVar20 == 0) {
                puStack_1b0 = (ulonglong *)0x0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_1b8,uVar20,0);
                _guard_xfg_dispatch_icall_nop(local_1b8,local_110,(longlong)(int)uVar20 << 3);
              }
              iVar11 = FUN_1425cf950(param_1,lVar13,plVar18,&local_1b8,local_res18,&local_198,
                                     &local_res20);
              uVar12 = local_res20;
              uVar17 = (ulonglong)iVar11;
              iVar11 = FUN_1425d0740(param_1,lVar13,plVar18,local_res20,iVar11,&local_14c);
              lVar13 = (longlong)iVar11;
              local_res20 = uVar17;
              if (lVar13 < (longlong)uVar17) {
                do {
                  lVar16 = *(longlong *)(uVar12 + lVar13 * 8);
                  puVar4 = *(undefined8 **)(lVar16 + 8);
                  if (puVar4 != (undefined8 *)0x0) {
                    lVar16 = *(longlong *)(lVar16 + 0x10);
                    plVar3 = (longlong *)*puVar4;
                    if ((lVar16 == 0) ||
                       (1.0 < (double)*(float *)(param_1 + 0x170) - *(double *)(lVar16 + 0x78))) {
                      iVar11 = 0;
                      if (0 < *(int *)(lVar15 + 0x618)) {
                        do {
                          cVar7 = (**(code **)(*plVar3 + 0x468))(plVar3);
                          if (cVar7 != '\0') {
                            puVar1 = (uint *)(*(longlong *)(*(longlong *)(uVar12 + lVar13 * 8) + 8)
                                             + 0x28);
                            *puVar1 = *puVar1 | 1;
                            if (lVar16 != 0) {
                              fVar22 = (float)FGenericPlatformMath::SRand();
                              *(double *)(lVar16 + 0x78) =
                                   (double)(fVar22 * 0.5 + *(float *)(param_1 + 0x170));
                            }
                            break;
                          }
                          iVar11 = iVar11 + 1;
                        } while (iVar11 < *(int *)(lVar15 + 0x618));
                      }
                    }
                    else {
                      *(uint *)(puVar4 + 5) = *(uint *)(puVar4 + 5) | 1;
                    }
                  }
                  lVar13 = lVar13 + 1;
                } while (lVar13 < (longlong)local_res20);
              }
              if (auStack_160[0] == '\0') {
                auStack_160[0] = 1;
                *(int *)(local_178 + 4) = (int)local_178[4] + -1;
                if (puStack_168 != (ulonglong *)local_178[2]) {
                  FMemStackBase::FreeChunks();
                }
                *local_178 = (longlong)plStack_170;
                local_178[3] = auStack_160._8_8_;
                plStack_170 = (longlong *)0x0;
              }
              *(undefined4 *)(lVar15 + 0x618) = 0;
              if ((*(int *)(lVar15 + 0x61c) < 0) && (*(int *)(lVar15 + 0x61c) != 0)) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeTo(plVar18,0);
              }
              lVar16 = local_120;
              uVar12 = local_108;
              uVar20 = local_150;
              uVar9 = local_1a8;
              if (auStack_160[0] == '\0') {
                auStack_160[0] = 1;
                *(int *)(local_178 + 4) = (int)local_178[4] + -1;
                if (puStack_168 != (ulonglong *)local_178[2]) {
                  FMemStackBase::FreeChunks();
                }
                *local_178 = (longlong)plStack_170;
                local_178[3] = auStack_160._8_8_;
                lVar16 = local_120;
                uVar12 = local_108;
                uVar20 = local_150;
                uVar9 = local_1a8;
              }
            }
          }
          else {
            if (0 < (int)uVar20) {
              uVar17 = (ulonglong)uVar20;
              plVar18 = local_110;
              do {
                plVar3 = (longlong *)*plVar18;
                if ((*plVar3 != 0) && ((*(uint *)(plVar3 + 5) & 1) == 0)) {
                  if (*(int *)(lVar13 + 0x1608) != *(int *)(lVar13 + 0x1634)) {
                    lVar15 = *(longlong *)(lVar13 + 0x1640);
                    if (*(longlong *)(lVar13 + 0x1640) == 0) {
                      lVar15 = lVar13 + 0x1638;
                    }
                    iVar11 = *(int *)(lVar15 + ((longlong)
                                                (int)(*(uint *)((longlong)plVar3 + 0xc) ^
                                                     *(uint *)(plVar3 + 1)) &
                                               (longlong)*(int *)(lVar13 + 0x1648) - 1U) * 4);
                    if (iVar11 != -1) {
                      lVar15 = *(longlong *)(lVar13 + 0x1600);
                      do {
                        lVar16 = (longlong)iVar11;
                        if ((*(uint *)(lVar15 + lVar16 * 0x18) == *(uint *)(plVar3 + 1)) &&
                           (*(uint *)(lVar15 + 4 + lVar16 * 0x18) ==
                            *(uint *)((longlong)plVar3 + 0xc))) {
                          if ((iVar11 != -1) &&
                             (((lVar15 = lVar15 + lVar16 * 0x18, lVar15 != 0 &&
                               (lVar15 = *(longlong *)(lVar15 + 8), lVar15 != 0)) &&
                              (pdVar2 = (double *)(lVar15 + 0x80),
                              *pdVar2 <= (double)*(float *)((longlong)plVar3 + 0x24) &&
                              (double)*(float *)((longlong)plVar3 + 0x24) != *pdVar2)))) {
                            *(uint *)(plVar3 + 5) = *(uint *)(plVar3 + 5) | 1;
                          }
                          break;
                        }
                        iVar11 = *(int *)(lVar15 + 0x10 + lVar16 * 0x18);
                      } while (iVar11 != -1);
                    }
                  }
                }
                plVar18 = plVar18 + 1;
                uVar17 = uVar17 - 1;
                lVar16 = local_120;
                uVar9 = local_1a8;
              } while (uVar17 != 0);
            }
            *(undefined1 *)(lVar13 + 0x241) = 0;
          }
          iVar11 = *(int *)(param_1 + 0xa0);
          local_1a8 = uVar9 + 1;
          uVar17 = (ulonglong)local_1a8;
          local_120 = lVar16 + 1;
        } while ((int)local_1a8 < iVar11);
        uVar17 = (ulonglong)local_14c;
        uVar12 = (ulonglong)local_118;
      }
      plVar18 = local_110;
      if (((int)uVar12 < iVar11) && (0 < (int)uVar12)) {
        plVar3 = (longlong *)(param_1 + 0x98);
        do {
          iVar11 = *(int *)(param_1 + 0xa0);
          puVar4 = (undefined8 *)*plVar3;
          uVar5 = *puVar4;
          if (iVar11 + -1 != 0) {
            _guard_xfg_dispatch_icall_nop(puVar4,puVar4 + 1,(longlong)(iVar11 + -1) << 3);
            iVar11 = *(int *)(param_1 + 0xa0);
          }
          *(int *)(param_1 + 0xa0) = iVar11 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar3);
          iVar11 = *(int *)(param_1 + 0xa0);
          *(int *)(param_1 + 0xa0) = iVar11 + 1;
          if (*(int *)(param_1 + 0xa4) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
          }
          uVar20 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar20;
          *(undefined8 *)(*plVar3 + (longlong)iVar11 * 8) = uVar5;
        } while (0 < (int)uVar20);
      }
      if (local_130 == '\0') {
        local_130 = '\x01';
        *(int *)(local_148 + 4) = *(int *)(local_148 + 4) + -1;
        if (local_138 != local_148[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_148 = local_140;
        local_148[3] = local_128;
        local_140 = 0;
      }
      if (*(char *)(param_1 + 0x21c) != '\0') {
        local_1b8 = (undefined *)0x0;
        puStack_1b0 = (ulonglong *)0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
        FGenericPlatformString::Memcpy(local_1b8,L" Prioritized Actor",0x26);
        FUN_1425b3390(param_1 + 0x220,&local_1b8);
        local_1b8 = (undefined *)0x0;
        puStack_1b0 = (ulonglong *)0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
        FGenericPlatformString::Memcpy(local_1b8,L" Relevant Actor",0x20);
        FUN_1425b3390(param_1 + 0x230,&local_1b8);
        local_1b8 = (undefined *)0x0;
        puStack_1b0 = (ulonglong *)0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
        FGenericPlatformString::Memcpy(local_1b8,L" NonRelevant Actor",0x26);
        FUN_1425b3390(param_1 + 0x250,&local_1b8);
        local_1b8 = (undefined *)0x0;
        puStack_1b0 = (ulonglong *)&DAT_0000000c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
        FGenericPlatformString::Memcpy(local_1b8,L" Sent Actor",0x18);
        FUN_1425b3390(param_1 + 0x240,&local_1b8);
        *(undefined4 *)(param_1 + 0x228) = 0;
        if (*(int *)(param_1 + 0x22c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x220,0);
        }
        *(undefined4 *)(param_1 + 0x248) = 0;
        if (*(int *)(param_1 + 0x24c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x240,0);
        }
        *(undefined4 *)(param_1 + 0x238) = 0;
        if (*(int *)(param_1 + 0x23c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x230,0);
        }
        *(undefined4 *)(param_1 + 600) = 0;
        if (*(int *)(param_1 + 0x25c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x250,0);
        }
        *(undefined1 *)(param_1 + 0x21c) = 0;
      }
      if (local_130 == '\0') {
        local_130 = '\x01';
        *(int *)(local_148 + 4) = *(int *)(local_148 + 4) + -1;
        if (local_138 != local_148[2]) {
          FMemStackBase::FreeChunks(local_148);
        }
        *local_148 = local_140;
        local_148[3] = local_128;
        local_140 = 0;
      }
      if (plVar18 == (longlong *)0x0) {
        return uVar17;
      }
      FMemory::Free(plVar18);
      return uVar17;
    }
  }
  return 0;
}



// FUNCTION 1425cef80 GetParentObject body=85 status=ok
// SIG undefined GetParentObject(void)

undefined8 UMovieSceneSequence::GetParentObject(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x6c,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ServerReplicateActors")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x6c,L"Pure virtual not implemented (%s)",L"UReplicationDriver::ServerReplicateActors")
  ;
  return 0;
}



// FUNCTION 1425cefe0 FUN_1425cefe0 body=1582 status=ok
// SIG undefined FUN_1425cefe0(void)

void FUN_1425cefe0(longlong param_1,longlong *param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_138;
  uint local_130;
  int local_12c;
  uint local_128;
  uint uStack_124;
  uint *puStack_120;
  undefined4 local_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  ulonglong local_e0;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  
  lVar2 = DAT_146aff580;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  plVar19 = (longlong *)0x0;
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar17 = (longlong *)&DAT_00000004;
    if (DVar6 != DAT_1468c21c0) goto LAB_1425cf077;
  }
  plVar17 = plVar19;
LAB_1425cf077:
  iVar1 = *(int *)((longlong)plVar17 + lVar2);
  lVar2 = *(longlong *)(param_1 + 0x528);
  plVar17 = (longlong *)(lVar2 + 0x50);
  iVar13 = *(int *)(lVar2 + 0x78);
  puStack_120 = (uint *)(lVar2 + 0x60);
  local_138 = (longlong *)0x0;
  local_12c = 0;
  local_128 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  uStack_110 = 0;
  if (iVar13 != 0) {
    puVar16 = *(uint **)(lVar2 + 0x70);
    if (*(uint **)(lVar2 + 0x70) == (uint *)0x0) {
      puVar16 = puStack_120;
    }
    uVar8 = *puVar16;
    plVar11 = plVar19;
    plVar14 = plVar19;
    while (uVar8 == 0) {
      iVar7 = (int)plVar11;
      uStack_110 = (int)plVar14 + 0x20;
      plVar14 = (longlong *)(ulonglong)uStack_110;
      local_128 = iVar7 + 1;
      plVar11 = (longlong *)(ulonglong)local_128;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1425cf151;
      uVar8 = puVar16[(longlong)iVar7 + 1];
    }
    uStack_124 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_114 = (uStack_110 - iVar7) + 0x1f;
    if (iVar13 < iStack_114) {
LAB_1425cf151:
      iStack_114 = iVar13;
    }
  }
  local_118 = 0xffffffff;
  uVar8 = *(uint *)(lVar2 + 0x78);
  uStack_100 = CONCAT44(uStack_124,local_128);
  uVar12 = *(uint *)(lVar2 + 0x78);
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_114;
  uStack_e8 = CONCAT44(uStack_10c,uStack_110);
  uVar18 = -1 << ((byte)uVar8 & 0x1f);
  uVar15 = uVar8 & 0xffffffe0;
  uStack_f8 = CONCAT44(uVar8,uVar18);
  uStack_d0 = local_128;
  uStack_cc = uStack_124;
  if (uVar8 != uVar12) {
    lVar10 = *(longlong *)(lVar2 + 0x70);
    if (*(longlong *)(lVar2 + 0x70) == 0) {
      lVar10 = lVar2 + 0x60;
    }
    uVar18 = *(uint *)(lVar10 + (longlong)((int)uVar8 >> 5) * 4) & uVar18;
    iVar13 = (int)uVar8 >> 5;
    while (uVar18 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1425cf232;
      uVar18 = *(uint *)(lVar10 + 4 + (longlong)iVar13 * 4);
      uStack_f8 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar18 = -uVar18 & uVar18;
    iVar13 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    iVar13 = (uVar15 - iVar13) + 0x1f;
    uStack_f8 = CONCAT44(iVar13,(undefined4)uStack_f8);
    if ((int)uVar12 < iVar13) {
LAB_1425cf232:
      uStack_f8 = CONCAT44(uVar12,(undefined4)uStack_f8);
    }
  }
  local_e0 = uStack_f8 >> 0x20;
  plVar11 = plVar19;
  plVar14 = plVar19;
  local_108 = plVar17;
  local_c8 = puStack_120;
  local_b8 = uStack_e8;
  local_d8 = plVar17;
  uStack_f0 = uStack_c0;
  iStack_ec = iStack_bc;
  do {
    iVar13 = (int)plVar11;
    if (((iStack_bc == (int)local_e0) && (local_c8 == puStack_120)) && (local_d8 == plVar17)) {
      plVar17 = (longlong *)
                ((ulonglong)((longlong)(plVar14 + iVar13) + (7 - (longlong)plVar14)) >> 3);
      if (plVar14 + iVar13 < plVar14) {
        plVar17 = plVar19;
      }
      plVar11 = plVar14;
      if (plVar17 != (longlong *)0x0) {
        do {
          lVar2 = *plVar11;
          FNetworkObjectList::Remove(*(undefined8 *)(param_1 + 0x528),lVar2);
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x2b0,*(undefined8 *)(lVar2 + 0x18));
          plVar3 = *(longlong **)(param_1 + 0x520);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,lVar2);
          }
          plVar11 = plVar11 + 1;
          plVar19 = (longlong *)((longlong)plVar19 + 1);
        } while (plVar19 != plVar17);
      }
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      return;
    }
    plVar3 = *(longlong **)(*local_d8 + (longlong)iStack_bc * 0x18);
    if (((*(byte *)(plVar3 + 5) & 1) != 0) ||
       (dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0xd0) + 0x790),
       (double)plVar3[2] <= dVar4 && dVar4 != (double)plVar3[2])) {
      lVar2 = *plVar3;
      if ((*(byte *)(lVar2 + 0x94) & 2) == 0) {
        uVar8 = *(uint *)(lVar2 + 0xc);
        plVar9 = plVar19;
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar12 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar12 = uVar12 - 0x10000;
          }
          plVar9 = (longlong *)
                   (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)uVar12 * 0x18);
        }
        if (((*(uint *)(plVar9 + 1) >> 0x1d & 1) == 0) && (*(char *)(lVar2 + 0x95) != '\0')) {
          if ((*(longlong *)(lVar2 + 0x120) == *(longlong *)(param_1 + 0x120)) &&
             ((*(byte *)(lVar2 + 0x93) & 8) != 0)) {
            lVar10 = AActor::GetLevel(lVar2);
            cVar5 = ULevel::HasVisibilityChangeRequestPending(lVar10);
            if ((cVar5 == '\0') && ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
              if (*(char *)(lVar2 + 0x129) == '\x04') {
                cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar2);
                if (cVar5 != '\0') goto LAB_1425cf4d1;
              }
              dVar4 = (double)plVar3[3];
              if (dVar4 == 0.0) {
                dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0xd0) + 0x790);
                plVar3[3] = (longlong)dVar4;
                *(float *)(plVar3 + 4) = 1.0 / *(float *)(lVar2 + 0x140);
              }
              fVar20 = (float)((double)*(float *)(*(longlong *)(param_1 + 0xd0) + 0x790) - dVar4);
              if (2.0 < fVar20) {
                fVar22 = *(float *)(lVar2 + 0x144);
                if (fVar22 == 0.0) {
                  *(undefined4 *)(lVar2 + 0x144) = 0x40000000;
                  fVar22 = 2.0;
                }
                fVar23 = 1.0 / *(float *)(lVar2 + 0x140);
                fVar21 = (fVar20 - 2.0) * 0.2;
                fVar20 = 1.0 / fVar22;
                if (1.0 / fVar22 <= fVar23) {
                  fVar20 = fVar23;
                }
                if (0.0 <= fVar21) {
                  if (1.0 <= fVar21) {
                    fVar21 = 1.0;
                  }
                }
                else {
                  fVar21 = 0.0;
                }
                *(float *)(plVar3 + 4) = (fVar20 - fVar23) * fVar21 + fVar23;
              }
              uVar8 = *(uint *)(plVar3 + 5);
              if ((uVar8 & 1) == 0) {
                if (iVar1 < 1) {
                  fVar20 = 1.0 / *(float *)(lVar2 + 0x140);
                }
                else {
                  fVar20 = *(float *)(plVar3 + 4);
                }
                fVar22 = (float)FGenericPlatformMath::SRand();
                plVar3[2] = (longlong)
                            (double)(fVar22 * param_3 +
                                     *(float *)(*(longlong *)(param_1 + 0xd0) + 0x790) + fVar20);
                *(undefined4 *)((longlong)plVar3 + 0x24) = *(undefined4 *)(param_1 + 0x170);
                uVar8 = *(uint *)(plVar3 + 5);
              }
              *(uint *)(plVar3 + 5) = uVar8 & 0xfffffffe;
              iVar13 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar13 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
              }
              *(longlong **)(*param_2 + (longlong)iVar13 * 8) = plVar3;
              FUN_142224a10(lVar2,param_1);
            }
          }
          goto LAB_1425cf4fa;
        }
      }
LAB_1425cf4d1:
      local_130 = iVar13 + 1;
      if (local_12c < (int)local_130) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,plVar11);
        plVar14 = local_138;
      }
      plVar11 = (longlong *)(ulonglong)local_130;
      plVar14[iVar13] = lVar2;
    }
LAB_1425cf4fa:
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
  } while( true );
}



// FUNCTION 1425cf610 FUN_1425cf610 body=828 status=ok
// SIG undefined FUN_1425cf610(void)

ulonglong FUN_1425cf610(longlong *param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  uint local_res18;
  
  uVar11 = *(uint *)(param_1 + 0x14);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146b04790) &&
     (_Init_thread_header(&DAT_146b04790), DAT_146b04790 == -1)) {
    uVar9 = FCommandLine::Get();
    DAT_146b0478c = FParse::Param(uVar9,L"limitclientticks");
    _Init_thread_footer(&DAT_146b04790);
  }
  local_res18 = uVar11;
  if ((DAT_146b0478c != '\0') ||
     ((cVar4 = (**(code **)(*param_1 + 0x368))(param_1), cVar4 != '\0' && (DAT_1468c2172 != '\0'))))
  {
    if ((*(int *)(lVar1 + 0x38) < DAT_146b0479c) &&
       (_Init_thread_header(&DAT_146b0479c), DAT_146b0479c == -1)) {
      uVar9 = FCommandLine::Get();
      DAT_146b04798 = FParse::Param(uVar9,L"lanplay");
      _Init_thread_footer(&DAT_146b0479c);
    }
    if (DAT_146b04798 == '\0') {
      fVar17 = 1.0;
    }
    else {
      fVar17 = 2.0;
    }
    local_res18 = (uint)((DAT_146b04794 + param_2) * *(float *)(DAT_146b17150 + 0x8f8) * fVar17);
    if ((int)uVar11 <= (int)local_res18) {
      local_res18 = uVar11;
    }
    if (local_res18 == 0) {
      DAT_146b04794 = DAT_146b04794 + param_2;
      return 0;
    }
    DAT_146b04794 = 0.0;
  }
  iVar5 = (**(code **)(*DAT_146aff5f0 + 0x68))();
  if (0 < iVar5) {
    uVar11 = *(uint *)(param_1 + 0x14);
    local_res18 = (**(code **)(*DAT_146aff5f0 + 0x68))();
    if ((int)uVar11 <= (int)local_res18) {
      local_res18 = uVar11;
    }
  }
  bVar2 = false;
  uVar14 = 0;
  uVar15 = uVar14;
  uVar16 = uVar14;
  bVar3 = false;
  if (0 < (int)param_1[0x14]) {
    do {
      bVar2 = bVar3;
      lVar1 = *(longlong *)(uVar15 + param_1[0x13]);
      plVar12 = *(longlong **)(lVar1 + 0x98);
      if (((plVar12 == (longlong *)0x0) || (*(int *)(lVar1 + 300) != 3)) ||
         (1.5 <= (double)*(float *)(*(longlong *)(lVar1 + 0x58) + 0x170) -
                 *(double *)(lVar1 + 0x1e8))) {
        *(undefined8 *)(lVar1 + 0x90) = 0;
        uVar10 = uVar14;
        uVar13 = uVar14;
        if (0 < *(int *)(lVar1 + 0x50)) {
          do {
            uVar11 = (int)uVar10 + 1;
            *(undefined8 *)(*(longlong *)(uVar13 + *(longlong *)(lVar1 + 0x48)) + 0x90) = 0;
            uVar10 = (ulonglong)uVar11;
            uVar13 = uVar13 + 8;
          } while ((int)uVar11 < *(int *)(lVar1 + 0x50));
        }
      }
      else {
        bVar2 = true;
        if (*(longlong **)(lVar1 + 0x30) != (longlong *)0x0) {
          plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x30) + 0x758))();
          if (plVar6 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
            if (lVar7 != 0) {
              plVar12 = plVar6;
            }
          }
        }
        *(longlong **)(lVar1 + 0x90) = plVar12;
        uVar10 = uVar14;
        uVar13 = uVar14;
        if (0 < *(int *)(lVar1 + 0x50)) {
          do {
            lVar7 = *(longlong *)(uVar13 + *(longlong *)(lVar1 + 0x48));
            plVar12 = *(longlong **)(lVar7 + 0x30);
            uVar8 = uVar14;
            if (plVar12 != (longlong *)0x0) {
              uVar8 = (**(code **)(*plVar12 + 0x758))();
            }
            uVar11 = (int)uVar10 + 1;
            *(ulonglong *)(lVar7 + 0x90) = uVar8;
            uVar10 = (ulonglong)uVar11;
            uVar13 = uVar13 + 8;
          } while ((int)uVar11 < *(int *)(lVar1 + 0x50));
        }
      }
      uVar11 = (int)uVar16 + 1;
      uVar15 = uVar15 + 8;
      uVar16 = (ulonglong)uVar11;
      bVar3 = bVar2;
    } while ((int)uVar11 < (int)param_1[0x14]);
  }
  if (bVar2) {
    uVar14 = (ulonglong)local_res18;
  }
  return uVar14;
}



// FUNCTION 1425cf950 FUN_1425cf950 body=3554 status=ok
// SIG undefined FUN_1425cf950(void)

undefined4 *
FUN_1425cf950(longlong *param_1,longlong param_2,longlong *param_3,ulonglong *param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int iVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  ulonglong *local_res20;
  undefined1 local_198 [4];
  uint local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uint uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  int iStack_12c;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong *local_110;
  ulonglong local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  longlong *local_f0;
  
  *(int *)(param_1 + 0x43) = (int)param_1[0x43] + 1;
  *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
  puVar16 = (undefined4 *)0x0;
  puVar8 = puVar16;
  puVar7 = puVar16;
  if (0 < *(int *)(param_2 + 0x88)) {
    do {
      uVar23 = (int)puVar7 + 1;
      *(int *)(*(longlong *)((longlong)puVar8 + *(longlong *)(param_2 + 0x80)) + 0x13c) =
           (int)param_1[0x43];
      puVar8 = puVar8 + 2;
      puVar7 = (undefined4 *)(ulonglong)uVar23;
    } while ((int)uVar23 < *(int *)(param_2 + 0x88));
  }
  local_194 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FWeakObjectPtr::operator=(&local_f8,param_2);
  iVar15 = ((int)param_1[0x4d] - *(int *)((longlong)param_1 + 0x294)) + (int)param_4[1];
  if (0 < iVar15) {
    uStack_180 = (longlong *)local_198;
    local_198[0] = 0;
    local_188 = (longlong *)&DAT_14060d670;
    lVar6 = FUN_1415d8310(&local_188,&DAT_146216a38);
    puVar7 = (undefined4 *)operator_new(0x20,lVar6 + 0x18,iVar15,0);
    puVar8 = puVar16;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      puVar8 = puVar7;
    }
    local_198[0] = 0;
    *param_6 = (longlong)puVar8;
    uStack_180 = (longlong *)local_198;
    local_188 = (longlong *)&DAT_14060d670;
    lVar6 = FUN_1415d8310(&local_188,&DAT_146216a38);
    lVar6 = operator_new(8,lVar6 + 0x18,iVar15);
    *param_7 = lVar6;
    if (*(longlong **)(param_1[0x1a] + 0x58) == (longlong *)0x0) {
      local_198[0] = 0;
    }
    else {
      local_198[0] = (**(code **)(**(longlong **)(param_1[0x1a] + 0x58) + 0x6f8))();
    }
    local_110 = (longlong *)*local_res20;
    local_108 = 0;
    local_188 = (longlong *)((longlong)(int)local_res20[1] & 0x1fffffffffffffff);
    if (local_110 + (int)local_res20[1] < local_110) {
      local_188 = (longlong *)0;
    }
    if (local_188 != (longlong *)0x0) {
      local_120 = 0;
      local_128 = 0;
LAB_1425cfb70:
      puVar21 = (uint *)0x0;
      plVar10 = (longlong *)*local_110;
      plVar17 = (longlong *)*plVar10;
      local_158 = plVar10;
      local_f0 = plVar17;
      if (*(int *)(param_2 + 0x1608) != *(int *)(param_2 + 0x1634)) {
        lVar6 = *(longlong *)(param_2 + 0x1640);
        if (*(longlong *)(param_2 + 0x1640) == 0) {
          lVar6 = param_2 + 0x1638;
        }
        iVar15 = *(int *)(lVar6 + ((longlong)
                                   (int)(*(uint *)((longlong)plVar10 + 0xc) ^ *(uint *)(plVar10 + 1)
                                        ) & (longlong)*(int *)(param_2 + 0x1648) - 1U) * 4);
        if (iVar15 != -1) {
          lVar6 = *(longlong *)(param_2 + 0x1600);
          do {
            lVar12 = (longlong)iVar15;
            if ((*(uint *)(lVar6 + lVar12 * 0x18) == *(uint *)(plVar10 + 1)) &&
               (*(uint *)(lVar6 + 4 + lVar12 * 0x18) == *(uint *)((longlong)plVar10 + 0xc))) {
              if ((iVar15 != -1) &&
                 ((lVar6 = lVar6 + lVar12 * 0x18, lVar6 != 0 &&
                  (puVar21 = *(uint **)(lVar6 + 8), puVar21 != (uint *)0x0)))) goto LAB_1425cfc99;
              break;
            }
            iVar15 = *(int *)(lVar6 + 0x10 + lVar12 * 0x18);
          } while (iVar15 != -1);
        }
      }
      cVar5 = (**(code **)(*param_1 + 0x3d0))(param_1,plVar17,local_res10);
      uVar14 = 0;
      if ((cVar5 != '\0') && (uVar13 = uVar14, 0 < (int)param_3[1])) {
        do {
          lVar6 = *param_3;
          cVar5 = (**(code **)(*plVar17 + 0x468))
                            (plVar17,*(undefined8 *)(uVar13 + 8 + lVar6),
                             *(undefined8 *)(uVar13 + 0x10 + lVar6),
                             (longlong)(int)uVar14 * 0x30 + 0x18 + lVar6);
          if (cVar5 != '\0') goto LAB_1425cfc99;
          uVar23 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar23;
          uVar13 = uVar13 + 0x30;
        } while ((int)uVar23 < (int)param_3[1]);
      }
      goto LAB_1425d0030;
    }
LAB_1425d0076:
    iVar18 = 0x20;
    local_150 = (longlong *)(param_2 + 0x1658);
    iVar15 = *(int *)(param_2 + 0x1680);
    uStack_140 = (uint *)(param_2 + 0x1668);
    local_188 = (longlong *)0x100000000;
    local_178._4_4_ = 0;
    uStack_170 = 0;
    if (iVar15 != 0) {
      puVar21 = *(uint **)(param_2 + 0x1678);
      if (*(uint **)(param_2 + 0x1678) == (uint *)0x0) {
        puVar21 = uStack_140;
      }
      uVar23 = *puVar21;
      iVar2 = 0;
      while (uVar23 == 0) {
        uStack_170 = uStack_170 + 0x20;
        uVar14 = (ulonglong)local_188 >> 0x20;
        local_188 = (longlong *)CONCAT44((int)uVar14,iVar2 + 1);
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_1425d012d;
        uVar23 = puVar21[(longlong)iVar2 + 1];
        iVar2 = iVar2 + 1;
      }
      uVar23 = -uVar23 & uVar23;
      iVar2 = 0x1f;
      if (uVar23 != 0) {
        for (; uVar23 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      local_188 = (longlong *)CONCAT44(uVar23,SUB84(local_188,0));
      if (uVar23 != 0) {
        iVar18 = 0x1f - iVar2;
      }
      local_178._4_4_ = (uStack_170 - iVar18) + 0x1f;
      if (iVar15 < local_178._4_4_) {
LAB_1425d012d:
        local_178._4_4_ = iVar15;
      }
    }
    uStack_138 = CONCAT44(local_178._4_4_,0xffffffff);
    iStack_130 = uStack_170;
    iStack_12c = iStack_16c;
    uStack_148 = local_188;
    uStack_180 = local_188;
    local_168 = uStack_170;
    iStack_164 = iStack_16c;
    uStack_170 = 0xffffffff;
    iStack_16c = local_178._4_4_;
    bVar27 = local_178._4_4_ < iVar15;
    local_188 = local_150;
    local_178 = uStack_140;
    if (bVar27) {
      lVar6 = (longlong)(int)puVar16 * 8;
      lVar12 = (longlong)(int)puVar16 << 5;
      do {
        uVar14 = 0;
        if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
          iVar15 = *(int *)(*local_188 + (longlong)iStack_16c * 0xc);
          plVar10 = (longlong *)param_1[0x54];
          if ((longlong *)param_1[0x54] == (longlong *)0x0) {
            plVar10 = param_1 + 0x53;
          }
          iVar18 = *(int *)((longlong)plVar10 +
                           ((longlong)(int)param_1[0x55] - 1U & (longlong)iVar15) * 4);
          if (iVar18 != -1) {
            do {
              uVar13 = param_1[0x4c] + (longlong)iVar18 * 0x18;
              if (*(int *)(param_1[0x4c] + (longlong)iVar18 * 0x18) == iVar15) {
                if (iVar18 != -1) goto LAB_1425d0283;
                break;
              }
              iVar18 = *(int *)(uVar13 + 0x10);
            } while (iVar18 != -1);
          }
        }
        uVar13 = uVar14;
LAB_1425d0283:
        lVar22 = (longlong)(int)param_3[1];
        lVar19 = *(longlong *)(uVar13 + 8);
        uVar25 = (ulonglong)local_150 >> 0x20;
        local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
        uStack_148 = (longlong *)0x0;
        uStack_140 = (uint *)0x0;
        uVar13 = uVar14;
        if (3 < lVar22) {
          fVar28 = *(float *)(lVar19 + 0x10);
          fVar30 = *(float *)(lVar19 + 0x14);
          fVar32 = *(float *)(lVar19 + 0x18);
          fVar34 = *(float *)(*(longlong *)(param_2 + 0x58) + 0x6c);
          pfVar11 = (float *)(*param_3 + 0x20);
          lVar20 = (lVar22 - 4U >> 2) + 1;
          uVar13 = lVar20 * 4;
          do {
            fVar33 = fVar30 - pfVar11[-1];
            fVar31 = fVar28 - pfVar11[-2];
            fVar29 = fVar32 - *pfVar11;
            fVar35 = fVar33 * fVar33 + fVar31 * fVar31 + fVar29 * fVar29;
            if (0.0 <= fVar33 * pfVar11[2] + fVar31 * pfVar11[1] + fVar29 * pfVar11[3]) {
              bVar27 = fVar35 == 9998244.0;
              bVar26 = fVar35 < 9998244.0;
LAB_1425d0351:
              fVar29 = fVar34;
              if (!bVar26 && !bVar27) {
                fVar29 = fVar34 * 0.4;
              }
            }
            else {
              if (fVar35 <= 4e+06) {
                bVar27 = fVar35 == 250000.0;
                bVar26 = fVar35 < 250000.0;
                goto LAB_1425d0351;
              }
              fVar29 = fVar34 * 0.2;
            }
            fVar33 = fVar28 - pfVar11[10];
            fVar35 = fVar30 - pfVar11[0xb];
            fVar31 = fVar32 - pfVar11[0xc];
            uVar23 = (int)(fVar29 * 65536.0);
            if ((int)(fVar29 * 65536.0) <= (int)(uint)uVar14) {
              uVar23 = (uint)uVar14;
            }
            fVar29 = fVar35 * fVar35 + fVar33 * fVar33 + fVar31 * fVar31;
            if (0.0 <= fVar35 * pfVar11[0xe] + fVar33 * pfVar11[0xd] + fVar31 * pfVar11[0xf]) {
              bVar27 = fVar29 == 9998244.0;
              bVar26 = fVar29 < 9998244.0;
LAB_1425d03da:
              fVar29 = fVar34;
              if (!bVar26 && !bVar27) {
                fVar29 = fVar34 * 0.4;
              }
            }
            else {
              if (fVar29 <= 4e+06) {
                bVar27 = fVar29 == 250000.0;
                bVar26 = fVar29 < 250000.0;
                goto LAB_1425d03da;
              }
              fVar29 = fVar34 * 0.2;
            }
            fVar33 = fVar28 - pfVar11[0x16];
            fVar35 = fVar30 - pfVar11[0x17];
            fVar31 = fVar32 - pfVar11[0x18];
            uVar24 = (int)(fVar29 * 65536.0);
            if ((int)(fVar29 * 65536.0) <= (int)uVar23) {
              uVar24 = uVar23;
            }
            fVar29 = fVar35 * fVar35 + fVar33 * fVar33 + fVar31 * fVar31;
            if (0.0 <= fVar35 * pfVar11[0x1a] + fVar33 * pfVar11[0x19] + fVar31 * pfVar11[0x1b]) {
              bVar27 = fVar29 == 9998244.0;
              bVar26 = fVar29 < 9998244.0;
LAB_1425d0463:
              fVar29 = fVar34;
              if (!bVar26 && !bVar27) {
                fVar29 = fVar34 * 0.4;
              }
            }
            else {
              if (fVar29 <= 4e+06) {
                bVar27 = fVar29 == 250000.0;
                bVar26 = fVar29 < 250000.0;
                goto LAB_1425d0463;
              }
              fVar29 = fVar34 * 0.2;
            }
            fVar33 = fVar28 - pfVar11[0x22];
            fVar35 = fVar30 - pfVar11[0x23];
            fVar31 = fVar32 - pfVar11[0x24];
            uVar23 = (int)(fVar29 * 65536.0);
            if ((int)(fVar29 * 65536.0) <= (int)uVar24) {
              uVar23 = uVar24;
            }
            fVar29 = fVar35 * fVar35 + fVar33 * fVar33 + fVar31 * fVar31;
            if (0.0 <= fVar35 * pfVar11[0x26] + fVar33 * pfVar11[0x25] + fVar31 * pfVar11[0x27]) {
              bVar27 = fVar29 == 9998244.0;
              bVar26 = fVar29 < 9998244.0;
LAB_1425d04fe:
              fVar29 = fVar34;
              if (!bVar26 && !bVar27) {
                fVar29 = fVar34 * 0.4;
              }
            }
            else {
              if (fVar29 <= 4e+06) {
                bVar27 = fVar29 == 250000.0;
                bVar26 = fVar29 < 250000.0;
                goto LAB_1425d04fe;
              }
              fVar29 = fVar34 * 0.2;
            }
            uVar24 = (int)(fVar29 * 65536.0);
            if ((int)(fVar29 * 65536.0) <= (int)uVar23) {
              uVar24 = uVar23;
            }
            uVar14 = (ulonglong)uVar24;
            pfVar11 = pfVar11 + 0x30;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          local_150 = (longlong *)CONCAT44((int)uVar25,uVar24);
        }
        if ((longlong)uVar13 < lVar22) {
          fVar28 = *(float *)(*(longlong *)(param_2 + 0x58) + 0x6c);
          pfVar11 = (float *)(*param_3 + 0x20 + uVar13 * 0x30);
          lVar22 = lVar22 - uVar13;
          do {
            fVar34 = *(float *)(lVar19 + 0x14) - pfVar11[-1];
            fVar32 = *(float *)(lVar19 + 0x10) - pfVar11[-2];
            fVar30 = *(float *)(lVar19 + 0x18) - *pfVar11;
            fVar29 = fVar34 * fVar34 + fVar32 * fVar32 + fVar30 * fVar30;
            if (0.0 <= fVar34 * pfVar11[2] + fVar32 * pfVar11[1] + fVar30 * pfVar11[3]) {
              bVar27 = fVar29 == 9998244.0;
              bVar26 = fVar29 < 9998244.0;
LAB_1425d05da:
              fVar30 = fVar28;
              if (!bVar26 && !bVar27) {
                fVar30 = fVar28 * 0.4;
              }
            }
            else {
              if (fVar29 <= 4e+06) {
                bVar27 = fVar29 == 250000.0;
                bVar26 = fVar29 < 250000.0;
                goto LAB_1425d05da;
              }
              fVar30 = fVar28 * 0.2;
            }
            uVar23 = (int)(fVar30 * 65536.0);
            if ((int)(fVar30 * 65536.0) <= (int)(uint)uVar14) {
              uVar23 = (uint)uVar14;
            }
            pfVar11 = pfVar11 + 0xc;
            uVar14 = (ulonglong)uVar23;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          local_150 = (longlong *)CONCAT44(local_150._4_4_,uVar23);
        }
        lVar22 = *param_6;
        iVar15 = (int)puVar16;
        puVar16 = (undefined4 *)(ulonglong)(iVar15 + 1);
        uStack_138._0_4_ = (undefined4)lVar19;
        uStack_138._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
        puVar8 = (undefined4 *)(lVar12 + lVar22);
        *puVar8 = (undefined4)local_150;
        puVar8[1] = local_150._4_4_;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = (undefined4 *)(lVar12 + 0x10 + lVar22);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = (undefined4)uStack_138;
        puVar8[3] = uStack_138._4_4_;
        lVar12 = lVar12 + 0x20;
        *(longlong *)(lVar6 + *param_7) = (longlong)iVar15 * 0x20 + *param_6;
        lVar6 = lVar6 + 8;
        uStack_170 = uStack_170 & ~uStack_180._4_4_;
        uStack_138 = lVar19;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_180);
      } while (iStack_16c < (int)local_178[6]);
    }
    AlgoImpl::
    IntroSortInternal<FActorPriority_*,FIdentityFunctor,TDereferenceWrapper<FActorPriority_*,FCompareFActorPriority>_>
              (*param_7,(longlong)(int)puVar16,(ulonglong)local_res8 & 0xff,&local_res8);
    param_4 = local_res20;
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return puVar16;
LAB_1425cfc99:
  lVar6 = local_res10;
  if ((*(byte *)(plVar17 + 0x12) & 4) == 0) {
LAB_1425cfdab:
    if (*DAT_146aff520 != 0) {
      local_158 = local_f8;
      piVar9 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      ::FindId(plVar10 + 6,local_100,&local_158);
      param_1 = local_res8;
      if (*piVar9 != -1) goto LAB_1425d0030;
      lVar12 = local_res8[0x2e];
      if (((1 < *(byte *)((longlong)plVar17 + 0x129)) && (puVar21 != (uint *)0x0)) &&
         ((puVar21[0xc] & 0x84) == 0)) {
        if ((*(byte *)((longlong)plVar17 + 0x129) == 3) && (iVar15 = 0, 0 < (int)param_3[1])) {
          lVar19 = 0;
          do {
            lVar22 = *param_3;
            cVar5 = (**(code **)(*plVar17 + 0x3e0))
                              (plVar17,(longlong)iVar15 * 0x30 + 0x18 + lVar22,
                               lVar22 + 0x24 + (longlong)iVar15 * 0x30,
                               *(undefined8 *)(lVar19 + 8 + lVar22),
                               *(undefined8 *)(lVar19 + 0x10 + lVar22),puVar21,(int)lVar12,
                               local_198[0]);
            if (cVar5 == '\0') goto LAB_1425cfe8a;
            iVar15 = iVar15 + 1;
            lVar19 = lVar19 + 0x30;
          } while (iVar15 < (int)param_3[1]);
        }
        (**(code **)(*(longlong *)puVar21 + 0x2d8))(puVar21);
      }
    }
LAB_1425cfe8a:
    uVar4 = local_198[0];
    uVar14 = 0;
    param_1 = local_res8;
    if (*(int *)((longlong)plVar17 + 0x13c) != (int)local_res8[0x43]) {
      *(int *)((longlong)plVar17 + 0x13c) = (int)local_res8[0x43];
      uStack_138 = 0;
      if (puVar21 == (uint *)0x0) {
        dVar3 = (double)*(float *)(*(longlong *)(lVar6 + 0x58) + 0x6c);
      }
      else {
        dVar3 = (double)*(float *)(*(longlong *)(lVar6 + 0x58) + 0x170) -
                *(double *)(puVar21 + 0x20);
      }
      local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
      uVar13 = uVar14;
      uVar25 = uVar14;
      uStack_148 = plVar10;
      uStack_140 = puVar21;
      if (0 < (int)param_3[1]) {
        do {
          lVar6 = *param_3;
          lVar12 = (longlong)(int)uVar25 * 0x30;
          fVar28 = (float)(**(code **)(*(longlong *)*plVar10 + 0x3d0))
                                    ((longlong *)*plVar10,lVar12 + 0x18 + lVar6,
                                     lVar6 + 0x24 + lVar12,*(undefined8 *)(uVar13 + 8 + lVar6),
                                     *(undefined8 *)(uVar13 + 0x10 + lVar6),puVar21,(float)dVar3,
                                     uVar4);
          uVar23 = (int)ROUND(fVar28 * 65536.0 + fVar28 * 65536.0 + 0.5) >> 1;
          if ((int)uVar23 <= (int)(uint)uVar14) {
            uVar23 = (uint)uVar14;
          }
          uVar24 = (int)uVar25 + 1;
          uVar14 = (ulonglong)uVar23;
          uVar13 = uVar13 + 0x30;
          uVar25 = (ulonglong)uVar24;
        } while ((int)uVar24 < (int)param_3[1]);
        local_150 = (longlong *)CONCAT44(local_150._4_4_,uVar23);
        plVar17 = local_f0;
      }
      param_1 = local_res8;
      lVar12 = (longlong)(int)local_194;
      lVar6 = *param_6;
      local_194 = local_194 + 1;
      puVar16 = (undefined4 *)(ulonglong)local_194;
      puVar8 = (undefined4 *)(local_128 + lVar6);
      *puVar8 = (undefined4)local_150;
      puVar8[1] = local_150._4_4_;
      puVar8[2] = (undefined4)uStack_148;
      puVar8[3] = uStack_148._4_4_;
      puVar8 = (undefined4 *)(local_128 + 0x10 + lVar6);
      *puVar8 = (undefined4)uStack_140;
      puVar8[1] = uStack_140._4_4_;
      puVar8[2] = (undefined4)uStack_138;
      puVar8[3] = uStack_138._4_4_;
      local_128 = local_128 + 0x20;
      *(longlong *)(local_120 + *param_7) = lVar12 * 0x20 + *param_6;
      local_120 = local_120 + 8;
      if (*(char *)((longlong)local_res8 + 0x21c) != '\0') {
        FWeakObjectPtr::operator=(&local_118,plVar17);
        iVar15 = (int)param_1[0x45];
        *(int *)(param_1 + 0x45) = iVar15 + 1;
        if (*(int *)((longlong)param_1 + 0x22c) < iVar15 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x44,iVar15);
        }
        lVar6 = param_1[0x44];
        *(undefined4 *)(lVar6 + (longlong)iVar15 * 8) = local_118;
        *(undefined4 *)(lVar6 + 4 + (longlong)iVar15 * 8) = local_114;
      }
      goto LAB_1425d0035;
    }
  }
  else {
    lVar12 = (**(code **)(*plVar17 + 0x498))(plVar17);
    uVar13 = 0;
    bVar27 = false;
    uVar14 = uVar13;
    if (0 < (int)param_3[1]) {
      do {
        lVar6 = *(longlong *)(uVar14 + *local_res18);
        plVar1 = *(longlong **)(lVar6 + 0x90);
        if (plVar1 == (longlong *)0x0) {
          bVar27 = true;
        }
        lVar19 = *(longlong *)(lVar6 + 0x30);
        param_3 = local_res18;
        plVar10 = local_158;
        if (((lVar12 == lVar19) || ((lVar19 != 0 && (lVar12 == *(longlong *)(lVar19 + 0x488))))) ||
           ((plVar1 != (longlong *)0x0 &&
            (cVar5 = (**(code **)(*plVar1 + 0x478))
                               (plVar1,plVar17,lVar12,*(undefined8 *)(lVar6 + 0x98)),
            param_3 = local_res18, plVar10 = local_158, cVar5 != '\0')))) goto LAB_1425cfdab;
        uVar23 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar23;
        uVar14 = uVar14 + 0x30;
      } while ((int)uVar23 < (int)local_res18[1]);
      param_1 = local_res8;
      if (bVar27) goto LAB_1425d0030;
    }
    param_1 = local_res8;
    if ((puVar21 != (uint *)0x0) &&
       ((double)*(float *)(local_res8 + 0xe) <=
        (double)*(float *)(local_res8 + 0x2e) - *(double *)(puVar21 + 0x1e))) {
      (**(code **)(*(longlong *)puVar21 + 0x288))(puVar21);
    }
  }
LAB_1425d0030:
  puVar16 = (undefined4 *)(ulonglong)local_194;
LAB_1425d0035:
  local_110 = local_110 + 1;
  local_108 = local_108 + 1;
  param_3 = local_res18;
  param_2 = local_res10;
  if ((longlong *)local_108 == local_188) goto LAB_1425d0076;
  goto LAB_1425cfb70;
}



// FUNCTION 1425d0740 FUN_1425d0740 body=1582 status=ok
// SIG undefined FUN_1425d0740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1425d0740(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       uint param_5,int *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  
  uVar8 = (**(code **)(*param_2 + 0x2d8))(param_2,0);
  if ((int)uVar8 == 0) {
    _DAT_146afefdc = _DAT_146afefdc + 1;
    return uVar8;
  }
  uVar17 = 0;
  if (0 < (int)param_5) {
    do {
      lVar10 = *param_4;
      plVar9 = *(longlong **)(lVar10 + 8);
      if ((plVar9 == (longlong *)0x0) && (*(longlong *)(lVar10 + 0x18) != 0)) {
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x30);
        if (lVar10 == 0) {
LAB_1425d08c4:
          lVar10 = FUN_1425b9f20(param_2,2,1,0xffffffff,uVar17,0);
          if (lVar10 != 0) {
            FUN_1423fd050(lVar10,*(undefined8 *)(*param_4 + 0x18));
            FUN_1425cb170(param_2,*(undefined8 *)(*param_4 + 0x18));
          }
        }
        else if ((int)param_2[0x2ea] != *(int *)((longlong)param_2 + 0x177c)) {
          plVar9 = (longlong *)param_2[0x2f1];
          if ((longlong *)param_2[0x2f1] == (longlong *)0x0) {
            plVar9 = param_2 + 0x2f0;
          }
          iVar13 = *(int *)((longlong)plVar9 +
                           ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                           (longlong)(int)param_2[0x2f2] - 1U) * 4);
          if (iVar13 != -1) {
            do {
              if (*(longlong *)(param_2[0x2e9] + (longlong)iVar13 * 0x10) == lVar10) {
                if (iVar13 != -1) goto LAB_1425d08c4;
                break;
              }
              iVar13 = *(int *)(param_2[0x2e9] + 8 + (longlong)iVar13 * 0x10);
            } while (iVar13 != -1);
          }
        }
      }
      else {
        plVar12 = *(longlong **)(lVar10 + 0x10);
        if ((plVar12 == (longlong *)0x0) || (plVar12[0xd] != 0)) {
          plVar1 = (longlong *)*plVar9;
          bVar4 = false;
          cVar5 = (**(code **)(*param_1 + 0x3d0))(param_1,plVar1,param_2);
          if (((cVar5 != '\0') && ((*(byte *)(plVar1 + 0x12) & 0x20) == 0)) &&
             ((plVar12 == (longlong *)0x0 ||
              (1.0 < (double)*(float *)(param_1 + 0x2e) - (double)plVar12[0xf])))) {
            iVar13 = 0;
            if (0 < (int)param_3[1]) {
              lVar10 = 0;
              do {
                lVar2 = *param_3;
                cVar6 = (**(code **)(*plVar1 + 0x468))
                                  (plVar1,*(undefined8 *)(lVar2 + 8 + lVar10),
                                   *(undefined8 *)(lVar2 + 0x10 + lVar10),
                                   (longlong)iVar13 * 0x30 + 0x18 + lVar2);
                if (cVar6 != '\0') {
                  bVar4 = true;
                  goto LAB_1425d0a54;
                }
                iVar13 = iVar13 + 1;
                lVar10 = lVar10 + 0x30;
              } while (iVar13 < (int)param_3[1]);
            }
            if (*(char *)((longlong)param_1 + 0x21c) != '\0') {
              FWeakObjectPtr::operator=(&local_a8,plVar1);
              iVar13 = (int)param_1[0x4b];
              *(int *)(param_1 + 0x4b) = iVar13 + 1;
              if (*(int *)((longlong)param_1 + 0x25c) < iVar13 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x4a,iVar13);
              }
              lVar10 = param_1[0x4a];
              *(undefined4 *)(lVar10 + (longlong)iVar13 * 8) = local_a8;
              *(undefined4 *)(lVar10 + 4 + (longlong)iVar13 * 8) = local_a4;
            }
          }
          if (((plVar12 != (longlong *)0x0) &&
              ((double)*(float *)(param_1 + 0x2e) - (double)plVar12[0xf] <
               (double)*(float *)(param_1 + 0xe))) ||
             (uVar7 = *(uint *)(plVar9 + 5), (uVar7 & 2) != 0)) {
LAB_1425d0a54:
            uVar7 = *(uint *)(plVar9 + 5);
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          *(uint *)(plVar9 + 5) = uVar7 & 0xfffffffd;
          if (bVar3) {
            if (plVar12 == (longlong *)0x0) {
              cVar6 = FNetGUIDCache::SupportsObject(param_1[0x1c],plVar1[2],0);
              if (cVar6 != '\0') {
                cVar6 = UAbilityTask::IsWaitingOnRemotePlayerdata(plVar1);
                plVar11 = plVar1;
                if (cVar6 == '\0') {
                  plVar11 = (longlong *)FUN_14178ca30(plVar1);
                }
                cVar6 = FNetGUIDCache::SupportsObject(param_1[0x1c],plVar11,0);
                if (cVar6 != '\0') {
                  if (cVar5 == '\0') {
                    if (*(float *)(plVar1 + 0x28) <= 1.0 && *(float *)(plVar1 + 0x28) != 1.0) {
                      iVar13 = rand();
                      plVar9[2] = (longlong)
                                  (double)((float)iVar13 * 6.103702e-06 +
                                          *(float *)(param_1[0x1a] + 0x790));
                    }
                  }
                  else {
                    plVar12 = (longlong *)FUN_1425b9f20(param_2,2,1);
                    if (plVar12 != (longlong *)0x0) {
                      FUN_1423fcda0(plVar12,plVar1);
                      goto LAB_1425d0af8;
                    }
                  }
                }
              }
            }
            else {
LAB_1425d0af8:
              if (bVar4) {
                fVar14 = (float)FGenericPlatformMath::SRand();
                plVar12[0xf] = (longlong)(double)(fVar14 * 0.5 + *(float *)(param_1 + 0x2e));
              }
              iVar13 = UChannel::IsNetReady(plVar12,0);
              if (iVar13 == 0) {
                (**(code **)(*plVar1 + 0x600))(plVar1);
              }
              else {
                if (*(char *)((longlong)param_1 + 0x21c) != '\0') {
                  FWeakObjectPtr::operator=(&local_a0,plVar1);
                  iVar13 = (int)param_1[0x47];
                  *(int *)(param_1 + 0x47) = iVar13 + 1;
                  if (*(int *)((longlong)param_1 + 0x23c) < iVar13 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_1 + 0x46,iVar13);
                  }
                  lVar10 = param_1[0x46];
                  *(undefined4 *)(lVar10 + (longlong)iVar13 * 8) = local_a0;
                  *(undefined4 *)(lVar10 + 4 + (longlong)iVar13 * 8) = local_9c;
                }
                lVar10 = FUN_1423f9930(plVar12);
                if (lVar10 != 0) {
                  if (*(char *)((longlong)param_1 + 0x21c) != '\0') {
                    FWeakObjectPtr::operator=(&local_98,plVar1);
                    iVar13 = (int)param_1[0x49];
                    *(int *)(param_1 + 0x49) = iVar13 + 1;
                    if (*(int *)((longlong)param_1 + 0x24c) < iVar13 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_1 + 0x48,iVar13);
                    }
                    lVar10 = param_1[0x48];
                    *(undefined4 *)(lVar10 + (longlong)iVar13 * 8) = local_98;
                    *(undefined4 *)(lVar10 + 4 + (longlong)iVar13 * 8) = local_94;
                  }
                  fVar14 = 1.0 / *(float *)(plVar1 + 0x28);
                  fVar16 = (float)((double)*(float *)(param_1[0x1a] + 0x790) - (double)plVar9[3]) *
                           0.7;
                  if (fVar14 <= fVar16) {
                    fVar15 = 1.0 / *(float *)((longlong)plVar1 + 0x144);
                    if (fVar15 <= fVar14) {
                      fVar15 = fVar14;
                    }
                    fVar14 = fVar15;
                    if (fVar16 <= fVar15) {
                      fVar14 = fVar16;
                    }
                  }
                  *(float *)(plVar9 + 4) = fVar14;
                  plVar9[3] = (longlong)(double)*(float *)(param_1[0x1a] + 0x790);
                }
                *param_6 = *param_6 + 1;
              }
              iVar13 = (**(code **)(*param_2 + 0x2d8))(param_2,0);
              if (iVar13 == 0) {
                _DAT_146afefdc = _DAT_146afefdc + 1;
                param_5 = uVar17;
                break;
              }
            }
            if ((*(byte *)(plVar1 + 0x12) & 0x20) == 0) goto LAB_1425d0ce8;
          }
          if ((plVar12 != (longlong *)0x0) &&
             ((cVar5 == '\0' ||
              (cVar5 = UAbilityTask::IsWaitingOnRemotePlayerdata(plVar1), cVar5 == '\0')))) {
            (**(code **)(*plVar12 + 0x288))(plVar12);
          }
        }
      }
LAB_1425d0ce8:
      uVar17 = uVar17 + 1;
      param_4 = param_4 + 1;
    } while ((int)uVar17 < (int)param_5);
  }
  return (ulonglong)param_5;
}



// FUNCTION 1425d0d70 SetClientLoginState body=15 status=ok
// SIG undefined SetClientLoginState(void)

void UNetConnection::SetClientLoginState(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c0) != param_2) {
    *(int *)(param_1 + 0x1c0) = param_2;
  }
  return;
}



// FUNCTION 1425d0d80 FUN_1425d0d80 body=12 status=ok
// SIG undefined FUN_1425d0d80(void)

void FUN_1425d0d80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1888) = param_2;
  FUN_1425d47e0();
  return;
}



// FUNCTION 1425d0d90 SetCollection body=13 status=ok
// SIG undefined SetCollection(void)

void UMaterialParameterCollectionInstance::SetCollection
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  FUN_1425d5810();
  return;
}



// FUNCTION 1425d0de0 FUN_1425d0de0 body=696 status=ok
// SIG undefined FUN_1425d0de0(void)

void FUN_1425d0de0(longlong param_1,longlong param_2)

{
  FUN_1424b6ac0(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x784) = *(undefined1 *)(param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x785) = *(undefined1 *)(param_2 + 0x105);
  *(undefined1 *)(param_1 + 0x786) = *(undefined1 *)(param_2 + 0x106);
  *(undefined1 *)(param_1 + 0x787) = *(undefined1 *)(param_2 + 0x107);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x794) = *(undefined1 *)(param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x795) = *(undefined1 *)(param_2 + 0x115);
  *(undefined1 *)(param_1 + 0x796) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)(param_1 + 0x797) = *(undefined1 *)(param_2 + 0x117);
  *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x7a4) = *(undefined1 *)(param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x7a5) = *(undefined1 *)(param_2 + 0x125);
  *(undefined1 *)(param_1 + 0x7a6) = *(undefined1 *)(param_2 + 0x126);
  *(undefined1 *)(param_1 + 0x7a7) = *(undefined1 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x7b4) = *(undefined1 *)(param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x7b5) = *(undefined1 *)(param_2 + 0x135);
  *(undefined1 *)(param_1 + 0x7b6) = *(undefined1 *)(param_2 + 0x136);
  *(undefined1 *)(param_1 + 0x7b7) = *(undefined1 *)(param_2 + 0x137);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x7c4) = *(undefined1 *)(param_2 + 0x144);
  *(undefined1 *)(param_1 + 0x7c5) = *(undefined1 *)(param_2 + 0x145);
  *(undefined1 *)(param_1 + 0x7c6) = *(undefined1 *)(param_2 + 0x146);
  *(undefined1 *)(param_1 + 0x7c7) = *(undefined1 *)(param_2 + 0x147);
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x7d4) = *(undefined1 *)(param_2 + 0x154);
  *(undefined1 *)(param_1 + 0x7d5) = *(undefined1 *)(param_2 + 0x155);
  *(undefined1 *)(param_1 + 0x7d6) = *(undefined1 *)(param_2 + 0x156);
  *(undefined1 *)(param_1 + 0x7d7) = *(undefined1 *)(param_2 + 0x157);
  *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x7e4) = *(undefined1 *)(param_2 + 0x164);
  *(undefined1 *)(param_1 + 0x7e5) = *(undefined1 *)(param_2 + 0x165);
  *(undefined1 *)(param_1 + 0x7e6) = *(undefined1 *)(param_2 + 0x166);
  *(undefined1 *)(param_1 + 0x7e7) = *(undefined1 *)(param_2 + 0x167);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x7f4) = *(undefined1 *)(param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x7f5) = *(undefined1 *)(param_2 + 0x175);
  *(undefined1 *)(param_1 + 0x7f6) = *(undefined1 *)(param_2 + 0x176);
  *(undefined1 *)(param_1 + 0x7f7) = *(undefined1 *)(param_2 + 0x177);
  *(undefined1 *)(param_1 + 0x7f8) = *(undefined1 *)(param_2 + 0x178);
  FRenderResource::UpdateRHI(param_1);
  return;
}



// FUNCTION 1425d10a0 FUN_1425d10a0 body=49 status=ok
// SIG undefined FUN_1425d10a0(void)

void FUN_1425d10a0(longlong param_1,undefined **param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == (undefined **)0x0) {
    uVar1 = 0;
    param_2 = &PTR_PTR_146534748;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x804);
    uVar2 = param_3;
  }
  *(undefined ***)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  return;
}



// FUNCTION 1425d10e0 SetExpectedClientLoginMsgType body=15 status=ok
// SIG undefined SetExpectedClientLoginMsgType(void)

void UNetConnection::SetExpectedClientLoginMsgType(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1c4) != param_2) {
    *(char *)(param_1 + 0x1c4) = param_2;
  }
  return;
}



// FUNCTION 1425d10f0 SetExternalData body=106 status=ok
// SIG undefined SetExternalData(void)

void FRepChangedPropertyTracker::SetExternalData(longlong param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = param_3 + 7 >> 3;
  if (*(int *)(param_1 + 0x2c) < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1,iVar3);
  }
  iVar2 = *(int *)(param_1 + 0x28) + iVar3;
  *(int *)(param_1 + 0x28) = iVar2;
  if (*(int *)(param_1 + 0x2c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,param_2,(longlong)iVar3);
  return;
}



// FUNCTION 1425d1160 FUN_1425d1160 body=18 status=ok
// SIG undefined FUN_1425d1160(void)

void FUN_1425d1160(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1930) = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x18e0);
  return;
}



// FUNCTION 1425d1180 SetInstanceBuffer body=13 status=ok
// SIG undefined SetInstanceBuffer(void)

void FMeshParticleVertexFactory::SetInstanceBuffer
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 1425d1190 FUN_1425d1190 body=1138 status=ok
// SIG undefined FUN_1425d1190(void)

void FUN_1425d1190(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *_Dst;
  undefined8 *puVar12;
  ulonglong _Size;
  undefined8 local_48;
  undefined8 uStack_40;
  
  cVar7 = DAT_1464c9c6c;
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  lVar6 = CONCAT44(param_5._4_4_,(undefined4)param_5);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + 0x20) + 0x2e8))();
  if (*(short *)(param_1 + 0x56) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x54);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144165218;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar8;
  }
  param_5._0_4_ = *(undefined4 *)(param_4 + 0x838);
  uVar5 = (uint)*(ushort *)(param_1 + 0x5c);
  if (3 < *(ushort *)(param_1 + 0x5c)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x5a);
    uVar2 = *(ushort *)(param_1 + 0x58);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar9 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar9 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar9;
    _guard_xfg_dispatch_icall_nop(_Dst,&param_5,_Size);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar10 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar10 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f4d340;
    *(uint *)(puVar10 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
    puVar10[2] = uVar4;
    puVar10[3] = _Dst;
    *(uint *)(puVar10 + 5) = uVar5;
  }
  if (cVar7 == '\0') {
    lVar11 = (longlong)*(int *)(param_6 + 0x58);
    lVar3 = *(longlong *)(param_6 + 0x20);
    puVar12 = (undefined8 *)(lVar11 * 0x70 + *(longlong *)(lVar3 + 8));
    puVar10 = (undefined8 *)(lVar11 * 0x10 + *(longlong *)(lVar3 + 0x10));
    lVar11 = lVar11 * 0x30 + *(longlong *)(lVar3 + 0x18);
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 8,puVar12 + 2,0);
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 0xe,puVar12 + 4,0);
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 0x14,puVar12 + 6,0);
    local_48 = CONCAT44((float)(int)*(short *)((longlong)puVar12 + 0x52),
                        (float)(int)*(short *)(puVar12 + 10));
    uStack_40 = CONCAT44((float)(int)*(short *)((longlong)puVar12 + 0x56),
                         (float)(int)*(short *)((longlong)puVar12 + 0x54));
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 0x1a,&local_48,0);
    FUN_1404986d0(param_2,uVar4,param_1 + 0x20,puVar12 + 0xb,0);
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 0x26,puVar12 + 8,0);
    FUN_1404986d0(param_2,uVar4,param_1 + 0x2c,(longlong)puVar12 + 0x5c,0);
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      local_48 = *puVar10;
      uStack_40 = puVar10[1];
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar4,param_1 + 0x32,&local_48,0);
    }
    if ((*(longlong *)(lVar3 + 0x18) != 0) && (1 < *(int *)(lVar6 + 0x1a38))) {
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar4,param_1 + 0x3e,lVar11,0);
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar4,param_1 + 0x44,lVar11 + 0x10,0);
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar4,param_1 + 0x4a,lVar11 + 0x20,0);
    }
    local_48 = *puVar12;
    uStack_40 = puVar12[1];
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar4,param_1 + 0x38,&local_48,0);
  }
  else if ((1 < *(int *)(lVar6 + 0x1a38)) &&
          (uVar8 = *(undefined8 *)(param_4 + 0x818), *(short *)(param_1 + 0x52) != 0)) {
    uVar1 = *(ushort *)(param_1 + 0x50);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144165218;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar8;
  }
  return;
}



// FUNCTION 1425d1610 FUN_1425d1610 body=8 status=ok
// SIG undefined FUN_1425d1610(void)

void FUN_1425d1610(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  return;
}



// FUNCTION 1425d1620 FUN_1425d1620 body=8 status=ok
// SIG undefined FUN_1425d1620(void)

void FUN_1425d1620(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1830) = param_2;
  return;
}



// FUNCTION 1425d1630 FUN_1425d1630 body=148 status=ok
// SIG undefined FUN_1425d1630(void)

void FUN_1425d1630(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x520) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x520) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20000000;
  }
  *(longlong **)(param_1 + 0x520) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x278))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001425d16b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x520) + 0x280))
              (*(longlong **)(param_1 + 0x520),*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}



// FUNCTION 1425d16d0 SetScalarParameterValue body=278 status=ok
// SIG undefined SetScalarParameterValue(void)

undefined8
UMaterialParameterCollectionInstance::SetScalarParameterValue
          (longlong param_1,longlong param_2,float param_3)

{
  int iVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 local_res8 [8];
  longlong local_res10;
  float local_res18 [4];
  longlong *local_18;
  float *local_10;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x40);
  if (0 < iVar1) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x38);
    pfVar7 = (float *)0x0;
    pfVar6 = pfVar7;
    do {
      if (*plVar3 == param_2) {
        if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) goto LAB_1425d1780;
        lVar4 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar4 = param_1 + 0x78;
        }
        fVar2 = *(float *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                   (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
        if (fVar2 == -NAN) goto LAB_1425d1780;
        goto LAB_1425d1760;
      }
      pfVar6 = (float *)((longlong)pfVar6 + 1);
      plVar3 = plVar3 + 4;
    } while ((longlong)pfVar6 < (longlong)iVar1);
  }
  return 0;
  while (fVar2 = pfVar6[4], fVar2 != -NAN) {
LAB_1425d1760:
    pfVar6 = (float *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)fVar2 * 0x18);
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)fVar2 * 0x18) == param_2) {
      if (fVar2 != -NAN) goto LAB_1425d1783;
      break;
    }
  }
LAB_1425d1780:
  pfVar6 = pfVar7;
LAB_1425d1783:
  pfVar5 = pfVar6 + 2;
  if (pfVar6 == (float *)0x0) {
    pfVar5 = pfVar7;
  }
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (pfVar5 == (float *)0x0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    FUN_1417e05c0(param_1 + 0x40,local_res8,&local_18,0);
    FUN_1425d5810(param_1);
  }
  else if (param_3 != *pfVar5) {
    *pfVar5 = param_3;
    FUN_1425d5810(param_1);
    return 1;
  }
  return 1;
}



// FUNCTION 1425d17f0 SetVectorParameterValue body=341 status=ok
// SIG undefined SetVectorParameterValue(void)

undefined8
UMaterialParameterCollectionInstance::SetVectorParameterValue
          (longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_18;
  float *local_10;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x50);
  if (0 < iVar1) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x48);
    pfVar8 = (float *)0x0;
    pfVar9 = pfVar8;
    do {
      if (*plVar5 == param_2) {
        if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0xc4)) goto LAB_1425d18af;
        lVar6 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar6 = param_1 + 200;
        }
        fVar4 = *(float *)(lVar6 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                   (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
        if (fVar4 == -NAN) goto LAB_1425d18af;
        goto LAB_1425d1890;
      }
      pfVar9 = (float *)((longlong)pfVar9 + 1);
      plVar5 = plVar5 + 5;
    } while ((longlong)pfVar9 < (longlong)iVar1);
  }
  return 0;
  while (fVar4 = pfVar9[6], fVar4 != -NAN) {
LAB_1425d1890:
    pfVar9 = (float *)((longlong)(int)fVar4 * 0x20 + *(longlong *)(param_1 + 0x90));
    if (*(longlong *)pfVar9 == param_2) {
      if (fVar4 != -NAN) goto LAB_1425d18b2;
      break;
    }
  }
LAB_1425d18af:
  pfVar9 = pfVar8;
LAB_1425d18b2:
  pfVar7 = pfVar9 + 2;
  if (pfVar9 == (float *)0x0) {
    pfVar7 = pfVar8;
  }
  local_res10 = param_2;
  if (pfVar7 == (float *)0x0) {
    local_18 = &local_res10;
    local_10 = param_3;
    TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
              ((longlong *)(param_1 + 0x90),local_res8,&local_18,0);
    FUN_1425d5810(param_1);
  }
  else if ((((*param_3 != *pfVar7) || (param_3[1] != pfVar7[1])) || (param_3[2] != pfVar7[2])) ||
          (param_3[3] != pfVar7[3])) {
    fVar4 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *pfVar7 = *param_3;
    pfVar7[1] = fVar4;
    pfVar7[2] = fVar2;
    pfVar7[3] = fVar3;
    FUN_1425d5810(param_1);
    return 1;
  }
  return 1;
}



// FUNCTION 1425d1950 FUN_1425d1950 body=439 status=ok
// SIG undefined FUN_1425d1950(void)

void FUN_1425d1950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0x500,*(undefined8 *)(param_1 + 0x4f0));
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0x518,*(undefined8 *)(param_1 + 0x4f8));
    lVar3 = *(longlong *)(param_1 + 0x500);
    uVar6 = 0;
    uVar8 = uVar6;
    if (0 < *(int *)(lVar1 + 0x538)) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x530) + uVar8);
        if ((((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar7 != 0) {
              lVar3 = FMemory::Realloc(*plVar7,0,0);
              *plVar7 = lVar3;
            }
            *(undefined4 *)(plVar7 + 1) = 0;
          }
          break;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar8 = uVar8 + 0x10;
      } while ((int)uVar5 < *(int *)(lVar1 + 0x538));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x530,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    FNetworkObjectList::Reset(*(undefined8 *)(param_1 + 0x528));
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0xd0) = param_2;
    uVar4 = UObjectBaseUtility::GetOutermost(param_2);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    *(longlong *)(param_1 + 0x168) = param_2 + 0x28;
    FUN_1425ca960(param_1,param_2);
    FUN_1425db280(*(undefined8 *)(param_1 + 0x528),param_2,*(undefined8 *)(param_1 + 0x120));
  }
  plVar7 = *(longlong **)(param_1 + 0x520);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425d1af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x280))(plVar7,param_2);
  return;
}



// FUNCTION 1425d1b10 SetWorld body=83 status=ok
// SIG undefined SetWorld(void)

void UReplicationDriver::SetWorld(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x42,L"Pure virtual not implemented (%s)",L"UReplicationDriver::SetWorld");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\ReplicationDriver.h",
             0x42,L"Pure virtual not implemented (%s)",L"UReplicationDriver::SetWorld");
  return;
}



// FUNCTION 1425d1b70 FUN_1425d1b70 body=88 status=ok
// SIG undefined FUN_1425d1b70(void)

undefined8 FUN_1425d1b70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x8c] == 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = FUN_1428cb8d0(uVar2);
  }
  else {
    lVar1 = FUN_14238cd00();
  }
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x49c) & 1) == 0)) && (param_1[0x8c] != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425d1bd0 FUN_1425d1bd0 body=176 status=ok
// SIG undefined FUN_1425d1bd0(void)

undefined8 FUN_1425d1bd0(longlong param_1,undefined4 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  ulonglong local_18 [2];
  
  FName::FName(local_18,L"FLocalVertexFactory",1);
  cVar1 = FUN_142583950();
  if (((((cVar1 == '\0') || (param_3 == (longlong *)0x0)) ||
       (cVar1 = (**(code **)(*param_3 + 800))(param_3), cVar1 == '\0')) ||
      (*(ulonglong *)(param_4 + 0x20) != local_18[0])) &&
     (((cVar1 = (**(code **)(param_1 + 0x138))(param_2,param_3,param_4), cVar1 != '\0' &&
       (cVar1 = (**(code **)(*param_3 + 8))(param_3,param_2,param_1,param_4), cVar1 != '\0')) &&
      (cVar1 = (**(code **)(param_4 + 0x38))(param_2,param_3,param_1), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425d1c80 ShouldCallRemoteFunction body=48 status=ok
// SIG undefined ShouldCallRemoteFunction(void)

undefined8
UNetDriver::ShouldCallRemoteFunction
          (longlong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x368))();
  if (((cVar1 == '\0') || ((*param_4 & 1) != 0)) && ((*param_4 & 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425d1cb0 FUN_1425d1cb0 body=55 status=ok
// SIG undefined FUN_1425d1cb0(void)

undefined1 FUN_1425d1cb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x100))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425d1cf0 FUN_1425d1cf0 body=62 status=ok
// SIG undefined FUN_1425d1cf0(void)

undefined8 FUN_1425d1cf0(int param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_1 != 8) {
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 0x100))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1425d1d30 ShouldForwardFunction body=23 status=ok
// SIG undefined ShouldForwardFunction(void)

bool UNetDriver::ShouldForwardFunction(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x368))();
  return cVar1 == '\0';
}



// FUNCTION 1425d1d70 FUN_1425d1d70 body=155 status=ok
// SIG undefined FUN_1425d1d70(void)

undefined8 FUN_1425d1d70(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x30) + 0x678) != '\0')) &&
      (cVar1 = (**(code **)(*param_2 + 0x20))(param_2), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc40))
                        (*(longlong **)(param_1 + 0x30),param_2), cVar1 == '\0')) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar3 = 0;
      do {
        cVar1 = FUN_1425d1d70(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x48)),param_2);
        if (cVar1 == '\0') {
          return 0;
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x50));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1425d1e10 FUN_1425d1e10 body=695 status=ok
// SIG undefined FUN_1425d1e10(void)

void FUN_1425d1e10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_138 [3];
  longlong *local_120;
  longlong local_98;
  longlong local_38;
  longlong local_28;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2f8))();
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2c8))(*(longlong **)(param_1 + 0x90),0);
  }
  uVar5 = 0;
  uVar9 = uVar5;
  uVar10 = uVar5;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      local_138[0] = 0;
      local_138[1] = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
      FGenericPlatformString::Memcpy(local_138[0],L"HostClosedConnection",0x2a);
      lVar11 = *(longlong *)(param_1 + 0x98);
      lVar6 = *(longlong *)(uVar10 + lVar11);
      lVar1 = **(longlong **)(lVar6 + 0x1580);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
        FControlChannelOutBunch::FControlChannelOutBunch(local_138 + 2,lVar1,0);
        local_res8[0] = 6;
        if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
          (**(code **)(local_138[2] + 0x50))(local_138 + 2,local_res8,1);
        }
        else {
          local_res8[0] = *(undefined1 *)*local_120;
          *local_120 = *local_120 + 1;
        }
        FUN_14158ce90(local_138 + 2,local_138);
        plVar2 = (longlong *)**(undefined8 **)(lVar6 + 0x1580);
        (**(code **)(*plVar2 + 0x2c8))(plVar2,local_res10,local_138 + 2,1);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_138 + 2);
        lVar11 = *(longlong *)(param_1 + 0x98);
      }
      (**(code **)(**(longlong **)(uVar10 + lVar11) + 0x2c8))();
      if (local_138[0] != 0) {
        FMemory::Free();
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0xa0));
    iVar4 = *(int *)(param_1 + 0xa0) + -1;
    lVar11 = (longlong)iVar4;
    if (-1 < iVar4) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x98);
        lVar1 = *(longlong *)(*(longlong *)(lVar6 + lVar11 * 8) + 0x30);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x488), lVar1 != 0)) {
          FUN_142227350(lVar1,1);
          lVar6 = *(longlong *)(param_1 + 0x98);
        }
        (**(code **)(**(longlong **)(lVar6 + lVar11 * 8) + 0x300))();
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
  }
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x358,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x3a8,0);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x520) + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar7 = iVar4 >> 0x1f & 0xffff;
      uVar8 = iVar4 + uVar7;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
              (longlong)(int)((uVar8 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x20000000;
  }
  *(undefined8 *)(param_1 + 0x520) = 0;
  return;
}



// FUNCTION 1425d20f0 FUN_1425d20f0 body=3086 status=ok
// SIG undefined FUN_1425d20f0(void)

void FUN_1425d20f0(longlong *param_1)

{
  LARGE_INTEGER LVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  double dVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  uint *puVar23;
  int iVar24;
  longlong *plVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  LARGE_INTEGER local_res10;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined2 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  longlong *local_90;
  
  (**(code **)(*param_1 + 0x2b8))();
  QueryPerformanceCounter(&local_res10);
  dVar6 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
  dVar27 = (double)param_1[0x89];
  if ((double)param_1[0x89] == 0.0) {
    param_1[0x89] = (longlong)dVar6;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x3e) = auVar5;
    dVar27 = dVar6;
  }
  param_1[0x8a] = (longlong)(dVar6 - dVar27);
  iVar8 = *(int *)(param_1[0xb] + 0x5c);
  if (iVar8 < 1) {
    fVar29 = 3.4028235e+38;
  }
  else {
    fVar29 = (float)iVar8;
  }
  fVar26 = (float)(**(code **)(*DAT_146b17150 + 0x2b8))(DAT_146b17150,0);
  fVar30 = fVar29;
  if ((0.0 < fVar26) && (fVar30 = fVar26, fVar29 <= fVar26)) {
    fVar30 = fVar29;
  }
  uVar15 = *(uint *)((longlong)param_1 + 0xa4) & 1;
  if ((((uVar15 == 0) && (0 < iVar8)) && (0.0 < fVar30)) &&
     ((double)param_1[0x8a] <= (double)(1.0 / fVar30) &&
      (double)(1.0 / fVar30) != (double)param_1[0x8a])) {
    return;
  }
  iVar8 = (int)param_1[0x8d] + 1;
  dVar27 = (double)param_1[0x8a] + (double)param_1[0x8b];
  param_1[0x89] = (longlong)dVar6;
  *(int *)(param_1 + 0x8d) = iVar8;
  param_1[0x8b] = (longlong)dVar27;
  if (1.0 < dVar27) {
    param_1[0x8b] = 0;
    *(undefined4 *)(param_1 + 0x8d) = 0;
    param_1[0x8c] = (longlong)(dVar27 / (double)iVar8);
  }
  if (uVar15 != 0) {
    *(int *)((longlong)param_1 + 0x1574) = (int)param_1[0x2ae];
    param_1[0x3d] = (longlong)(double)*(float *)(param_1[0xb] + 0x170);
    QueryPerformanceCounter(&local_res10);
    param_1[0x3e] = (longlong)((double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0);
    QueryPerformanceCounter(&local_res10);
    iVar8 = (int)param_1[0xf] + -1;
    lVar19 = (longlong)iVar8;
    param_1[0x3f] = (longlong)((double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0);
    if (-1 < iVar8) {
      do {
        lVar20 = *(longlong *)(param_1[0xe] + lVar19 * 8);
        for (lVar21 = *(longlong *)(lVar20 + 0x58); lVar21 != 0;
            lVar21 = *(longlong *)(lVar21 + 0xc0)) {
          *(byte *)(lVar21 + 0xe8) = *(byte *)(lVar21 + 0xe8) | 1;
        }
        cVar7 = (**(code **)(*(longlong *)param_1[0xb] + 0x368))();
        if ((cVar7 != '\0') || (*(int *)(lVar20 + 0x38) != 0)) {
          *(uint *)(lVar20 + 0x30) = *(uint *)(lVar20 + 0x30) | 1;
        }
        UChannel::ReceivedAcks(lVar20);
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
  }
  if ((double)*(float *)(param_1 + 0x84) < dVar6 - (double)param_1[0x83]) {
    if ((int)param_1[0x88] == 0) {
      fVar29 = *(float *)(param_1 + 0x85);
    }
    else {
      fVar29 = (float)((double)param_1[0x86] / (double)(int)param_1[0x88]);
      *(float *)(param_1 + 0x85) = fVar29;
    }
    param_1[0x86] = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
    fVar30 = 1.0 / (float)(dVar6 - (double)param_1[0x83]);
    *(float *)((longlong)param_1 + 0x424) = fVar29;
    param_1[0x83] = (longlong)dVar6;
    *(int *)((longlong)param_1 + 0x48c) = (int)((float)*(int *)((longlong)param_1 + 0x46c) * fVar30)
    ;
    *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
    *(int *)(param_1 + 0x92) = (int)((float)(int)param_1[0x8e] * fVar30);
    *(int *)((longlong)param_1 + 0x494) = (int)((float)*(int *)((longlong)param_1 + 0x47c) * fVar30)
    ;
    *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
    *(int *)(param_1 + 0x93) = (int)((float)(int)param_1[0x90] * fVar30);
    param_1[0x87] = 0x40c3878000000000;
  }
  fVar29 = *(float *)(param_1[0xb] + 0x170);
  dVar27 = (double)param_1[0x41];
  param_1[0x41] = (longlong)(double)fVar29;
  fVar30 = (float)((double)fVar29 - dVar27);
  fVar29 = (float)(**(code **)(*param_1 + 0x360))(param_1);
  lVar19 = DAT_146aff488;
  if ((double)fVar29 < dVar6 - (double)param_1[0x3e]) {
    QueryPerformanceCounter(&local_res10);
    dVar28 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar6 = (double)param_1[0x3e];
    dVar27 = (double)param_1[0x3f];
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,&local_108);
    if (*(int *)(puVar12 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar12;
    }
    pwVar22 = L"UNetConnection::Tick: Connection TIMED OUT. Closing connection.";
    if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
      pwVar22 = 
      L"UNetConnection::Tick: Connection closing during pending destroy, not all shutdown traffic may have been negotiated"
      ;
    }
    FString::PrintfImpl(local_c8,
                        L"%s. Elapsed: %2.2f, Real: %2.2f, Good: %2.2f, DriverTime: %2.2f, Threshold: %2.2f, %s"
                        ,pwVar22,(double)*(float *)(param_1[0xb] + 0x170) - (double)param_1[0x3d],
                        (double)(float)(dVar28 - dVar6),(double)(float)(dVar28 - dVar27),
                        (double)*(float *)(param_1[0xb] + 0x170),(double)fVar29,puVar17);
    if (CONCAT44(local_108._4_4_,(int)local_108) != 0) {
      FMemory::Free();
    }
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
      lVar19 = param_1[0xb];
      *(undefined4 *)((longlong)param_1 + 300) = 4;
      plVar14 = DAT_146b17150;
      bVar4 = false;
      plVar25 = DAT_146b17150 + 0x13d;
      LVar1 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar19 + 0xd0))->QuadPart;
      *(int *)((longlong)DAT_146b17150 + 0x9fc) = *(int *)((longlong)DAT_146b17150 + 0x9fc) + 1;
      iVar8 = *(int *)((longlong)plVar14 + 0x9fc);
      iVar9 = (int)plVar14[0x13e] + -1;
      lVar20 = (longlong)iVar9;
      local_res10 = LVar1;
      if (-1 < iVar9) {
        lVar21 = lVar20 << 4;
        bVar4 = false;
        do {
          lVar2 = *plVar25;
          if (((*(int *)(lVar21 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar21 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x40))(plVar3,LVar1.QuadPart,lVar19,4,local_c8),
             cVar7 == '\0')) {
            bVar4 = true;
          }
          lVar21 = lVar21 + -0x10;
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
        iVar8 = *(int *)((longlong)plVar14 + 0x9fc);
      }
      *(int *)((longlong)plVar14 + 0x9fc) = iVar8 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar25,0);
      }
    }
    (**(code **)(*param_1 + 0x2f8))(param_1);
    if (param_1[0xb] == 0) {
      if (local_c8[0] == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    goto LAB_1425d2a3c;
  }
  cVar7 = FUN_1415ad720();
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar20 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_1425d26c0;
  }
  else {
LAB_1425d26c0:
    lVar20 = 0;
  }
  if (*(int *)(lVar20 + lVar19) == 0) {
    iVar8 = (int)param_1[0x2ff] + -1;
    if (-1 < iVar8) {
      plVar14 = param_1 + 0x2fe;
      lVar19 = (longlong)iVar8 * 8;
      lVar21 = (longlong)(int)param_1[0x2ff] << 3;
      lVar20 = lVar19;
      do {
        (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x2a8))();
        cVar7 = (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x2b0))();
        if (cVar7 != '\0') {
          iVar9 = (int)param_1[0x2ff];
          iVar16 = (iVar9 - iVar8) + -1;
          if (iVar16 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar19 + *plVar14),(void *)(lVar21 + *plVar14),(longlong)iVar16 << 3
                      );
            iVar9 = (int)param_1[0x2ff];
          }
          *(int *)(param_1 + 0x2ff) = iVar9 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
        }
        lVar21 = lVar21 + -8;
        lVar19 = lVar19 + -8;
        lVar20 = lVar20 + -8;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  else {
    iVar8 = (int)param_1[0xf] + -1;
    lVar19 = (longlong)iVar8;
    if (-1 < iVar8) {
      do {
        (**(code **)(**(longlong **)(param_1[0xe] + lVar19 * 8) + 0x2a8))();
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
  }
  local_108._4_4_ = 1;
  local_d8 = param_1 + 0x2d5;
  local_108._0_4_ = 0;
  iVar8 = (int)param_1[0x2da];
  uStack_a8 = (uint *)(param_1 + 0x2d7);
  local_f8._4_4_ = 0;
  uStack_f0 = 0;
  if (iVar8 != 0) {
    puVar23 = (uint *)param_1[0x2d9];
    if ((uint *)param_1[0x2d9] == (uint *)0x0) {
      puVar23 = uStack_a8;
    }
    uVar15 = *puVar23;
    local_108._0_4_ = 0;
    uStack_f0 = 0;
    while (uVar15 == 0) {
      lVar19 = (longlong)(int)local_108;
      uStack_f0 = uStack_f0 + 0x20;
      iVar9 = (int)local_108 + 1;
      bVar4 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_108;
      local_108._0_4_ = iVar9;
      if (bVar4) goto LAB_1425d2844;
      uVar15 = puVar23[lVar19 + 1];
    }
    local_108._4_4_ = -uVar15 & uVar15;
    iVar9 = 0x1f;
    if (local_108._4_4_ != 0) {
      for (; local_108._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_108._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_f8._4_4_ = (uStack_f0 - iVar9) + 0x1f;
    if (iVar8 < local_f8._4_4_) {
LAB_1425d2844:
      local_f8._4_4_ = iVar8;
    }
  }
  auStack_a0._4_4_ = local_f8._4_4_;
  auStack_a0._0_4_ = 0xffffffff;
  auStack_a0._8_4_ = uStack_f0;
  auStack_a0._12_4_ = iStack_ec;
  uStack_b0 = CONCAT44(local_108._4_4_,(int)local_108);
  local_d0 = 0;
  uStack_f0 = 0xffffffff;
  iStack_ec = local_f8._4_4_;
  local_e8 = auStack_a0._8_8_;
  uStack_100 = CONCAT44(local_108._4_4_,(int)local_108);
  bVar4 = local_f8._4_4_ < (int)param_1[0x2da];
  local_b8 = local_d8;
  local_90 = local_d8;
  uStack_e0 = local_d8;
  local_f8 = uStack_a8;
  local_108 = local_d8;
  if (bVar4) {
    do {
      iVar9 = 0;
      lVar20 = (longlong)iStack_ec * 0x20;
      lVar19 = *local_108;
      iVar8 = *(int *)(lVar20 + 0x10 + lVar19);
      if (0 < iVar8) {
        lVar21 = 0;
        iVar16 = 0;
        do {
          iVar24 = iVar16 + 1;
          lVar2 = *(longlong *)(lVar21 + *(longlong *)(lVar20 + 8 + lVar19));
          if (lVar2 == 0) {
LAB_1425d2955:
            iVar11 = (iVar8 - iVar9) + -1;
            if (iVar11 != 0) {
              lVar2 = *(longlong *)(lVar20 + 8 + lVar19);
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + (longlong)iVar9 * 8),
                         (void *)(lVar2 + (longlong)iVar24 * 8),(longlong)iVar11 << 3);
              iVar8 = *(int *)(lVar20 + 0x10 + lVar19);
            }
            iVar8 = iVar8 + -1;
            iVar9 = iVar9 + -1;
            *(int *)(lVar20 + 0x10 + lVar19) = iVar8;
            lVar21 = lVar21 + -8;
            iVar24 = iVar16;
          }
          else {
            uVar15 = *(uint *)(lVar2 + 0xc);
            if ((int)uVar15 < (int)DAT_1469e91c4) {
              uVar18 = uVar15 & 0xffff;
              if ((int)uVar15 < 0) {
                uVar15 = uVar15 + 0xffff;
                uVar18 = uVar18 - 0x10000;
              }
              lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                       (longlong)(int)uVar18 * 0x18;
            }
            else {
              lVar13 = 0;
            }
            if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) != 0) goto LAB_1425d2955;
            cVar7 = FUN_1423f4940(lVar2);
            if (cVar7 != '\0') {
              FUN_1423e8eb0(lVar2,0);
              iVar8 = *(int *)(lVar20 + 0x10 + lVar19);
              goto LAB_1425d2955;
            }
            iVar8 = *(int *)(lVar20 + 0x10 + lVar19);
          }
          iVar9 = iVar9 + 1;
          lVar21 = lVar21 + 8;
          iVar16 = iVar24;
        } while (iVar9 < iVar8);
      }
      if (iVar8 == 0) {
        TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
        ::Remove(uStack_e0);
        local_d0 = CONCAT11(local_d0._1_1_,1);
      }
      uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
    } while (iStack_ec < (int)local_f8[6]);
    if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1);
    }
  }
  if ((*(longlong *)param_1[0x2b0] == 0) &&
     ((*(int *)param_1[0x2b2] != (int)param_1[700] ||
      (*(int *)param_1[0x2b4] != *(int *)((longlong)param_1 + 0x15e4))))) {
    *(undefined4 *)((longlong)param_1 + 300) = 1;
  }
LAB_1425d2a3c:
  iVar8 = 0;
  if (0 < (int)param_1[699]) {
    lVar19 = 0;
    do {
      (**(code **)(*param_1 + 0x2c0))(param_1,*(undefined4 *)(param_1[0x2ba] + lVar19),0);
      iVar8 = iVar8 + 1;
      lVar19 = lVar19 + 4;
    } while (iVar8 < (int)param_1[699]);
  }
  *(undefined4 *)(param_1 + 699) = 0;
  if (*(int *)((longlong)param_1 + 0x15dc) != 0x20) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2ba,0x20);
  }
  if ((((*(char *)((longlong)param_1 + 0x241) != '\0') ||
       ((double)*(float *)(param_1[0xb] + 0x74) <
        (double)*(float *)(param_1[0xb] + 0x170) - (double)param_1[0x40])) &&
      ((param_1[0x27] == 0 || (*(int *)(param_1[0x27] + 0x1cc) == 2)))) &&
     ((((*(byte *)((longlong)param_1 + 0xa4) & 1) != 0 || (*(longlong *)(param_1[0xb] + 0x90) != 0))
      || (*(int *)param_1[0x2b4] != *(int *)((longlong)param_1 + 0x15e4))))) {
    (**(code **)(*param_1 + 0x2c8))(param_1,0);
  }
  if (param_1[0x27] != 0) {
    PacketHandler::Tick(param_1[0x27],(float)(double)param_1[0x8a]);
    puVar12 = (undefined8 *)PacketHandler::GetQueuedPacket(param_1[0x27]);
    if (puVar12 != (undefined8 *)0x0) {
      cVar7 = (**(code **)(*(longlong *)param_1[0xb] + 0x390))();
      if (cVar7 != '\0') {
        *(undefined1 *)(param_1[0x27] + 0x240) = 1;
        do {
          (**(code **)(*param_1 + 0x2a0))(param_1,*puVar12,*(int *)(puVar12 + 1) + 7U >> 3);
          puVar12 = (undefined8 *)PacketHandler::GetQueuedPacket(param_1[0x27]);
        } while (puVar12 != (undefined8 *)0x0);
        *(undefined1 *)(param_1[0x27] + 0x240) = 0;
      }
    }
    plVar14 = (longlong *)PacketHandler::GetQueuedPacket(param_1[0x27]);
    while (plVar14 != (longlong *)0x0) {
      cVar7 = (**(code **)(*(longlong *)param_1[0xb] + 0x390))();
      if (cVar7 != '\0') {
        (**(code **)(*param_1 + 0x2a0))(param_1,*plVar14,(int)plVar14[1] + 7U >> 3);
      }
      if (plVar14 != (longlong *)0x0) {
        if (*plVar14 != 0) {
          FMemory::operator_delete(*plVar14,1);
        }
        if (plVar14[3] != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar14,0x30);
      }
      plVar14 = (longlong *)PacketHandler::GetQueuedPacket(param_1[0x27]);
    }
  }
  fVar29 = fVar30;
  if ((0 < *(int *)(param_1[0xb] + 0x58)) &&
     (fVar29 = 2.0 / (float)*(int *)(param_1[0xb] + 0x58), fVar30 <= fVar29)) {
    fVar29 = fVar30;
  }
  fVar29 = (float)(int)param_1[7] * fVar29 * 8.0;
  *(int *)(param_1 + 0x42) = (int)param_1[0x42] - (int)fVar29;
  if ((float)(int)param_1[0x42] < -(fVar29 + fVar29)) {
    *(int *)(param_1 + 0x42) = (int)-(fVar29 + fVar29);
  }
  return;
}



// FUNCTION 1425d2d00 FUN_1425d2d00 body=176 status=ok
// SIG undefined FUN_1425d2d00(void)

void FUN_1425d2d00(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  *(undefined4 *)(param_1 + 0x184) = 0;
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *(float *)(param_1 + 0x170) = param_2 + *(float *)(param_1 + 0x170);
  *(double *)(param_1 + 0x178) = dVar4 + 16777216.0;
  FUN_1425d5900(param_1);
  if ((*(longlong *)(param_1 + 0x90) == 0) &&
     (iVar2 = *(int *)(param_1 + 0xa0) + -1, lVar3 = (longlong)iVar2, -1 < iVar2)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + lVar3 * 8);
      if (*(int *)((longlong)plVar1 + 300) == 1) {
        (**(code **)(*plVar1 + 0x300))();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 1425d2db0 FUN_1425d2db0 body=6382 status=ok
// SIG undefined FUN_1425d2db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425d2db0(LARGE_INTEGER param_1,undefined4 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong *plVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_268 [32];
  char local_248 [4];
  int local_244;
  undefined4 local_240;
  uint local_23c;
  LARGE_INTEGER local_238;
  char local_230;
  uint local_228;
  uint uStack_224;
  uint *puStack_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [8];
  longlong *local_200;
  uint local_1f8;
  int local_1f4;
  LARGE_INTEGER *local_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  longlong *local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  longlong *local_180;
  undefined8 uStack_178;
  uint *local_170;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  int local_150;
  longlong *local_148;
  LARGE_INTEGER local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  uint local_118 [6];
  uint local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar20 = 0;
  local_238.QuadPart = 0x11a;
  local_230 = *(longlong *)(param_1.QuadPart + 0x120) == 0x11a;
  if ((bool)local_230) {
    DAT_146afeff0 = 0.0;
  }
  local_140 = param_1;
  QueryPerformanceCounter(&local_238);
  dVar4 = (double)local_238.QuadPart * DAT_1468b02f8;
  cVar7 = (**(code **)(*(longlong *)param_1 + 0x368))(param_1.QuadPart);
  iVar9 = 0;
  if (((cVar7 != '\0') && (0 < *(int *)(param_1.QuadPart + 0xa0))) &&
     ((*(byte *)(**(longlong **)(param_1.QuadPart + 0x98) + 0xa4) & 1) == 0)) {
    _DAT_146b04784 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1.QuadPart,param_2);
  }
  *(undefined4 *)(param_1.QuadPart + 0x508) = 0;
  QueryPerformanceCounter(&local_238);
  dVar3 = (double)local_238.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (DAT_146aeb1b0 == '\0') {
    FUN_14218f800(&DAT_146aeb1a8);
  }
  FUN_14218df50(DAT_146aeb1a8,local_208);
  if (((*(char *)(param_1.QuadPart + 0x1ec) != '\0') ||
      (cVar7 = FUN_1407ce070(local_208), cVar7 != '\0')) &&
     ((local_238.QuadPart = 0x11a, *(longlong *)(param_1.QuadPart + 0x120) == 0x11a &&
      ((double)*(float *)(param_1.QuadPart + 0x1e8) < dVar3 - *(double *)(param_1.QuadPart + 0x1e0))
      ))) {
    plVar27 = *(longlong **)(param_1.QuadPart + 0x98);
    uVar12 = (longlong)*(int *)(param_1.QuadPart + 0xa0) & 0x1fffffffffffffff;
    if (plVar27 + *(int *)(param_1.QuadPart + 0xa0) < plVar27) {
      uVar12 = uVar20;
    }
    uVar22 = uVar20;
    uVar30 = uVar20;
    uVar32 = uVar20;
    uVar34 = uVar20;
    uVar35 = uVar20;
    if (uVar12 != 0) {
      do {
        lVar23 = *plVar27;
        if (lVar23 != 0) {
          if (((int)uVar22 == 0) || (*(int *)(lVar23 + 0x48c) < (int)uVar22)) {
            uVar22 = (ulonglong)*(uint *)(lVar23 + 0x48c);
          }
          if (((int)uVar32 == 0) || (*(int *)(lVar23 + 0x490) < (int)uVar32)) {
            uVar32 = (ulonglong)*(uint *)(lVar23 + 0x490);
          }
          if (((int)uVar30 == 0) || (*(int *)(lVar23 + 0x494) < (int)uVar30)) {
            uVar30 = (ulonglong)*(uint *)(lVar23 + 0x494);
          }
          if (((int)uVar34 == 0) || (*(int *)(lVar23 + 0x498) < (int)uVar34)) {
            uVar34 = (ulonglong)*(uint *)(lVar23 + 0x498);
          }
        }
        plVar27 = plVar27 + 1;
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar12);
    }
    local_23c = 0;
    if ((*(char *)(param_1.QuadPart + 0x1ec) != '\0') ||
       (cVar7 = FUN_1407ce070(local_208), cVar7 != '\0')) {
      fVar38 = 1.0 / (float)(dVar3 - *(double *)(param_1.QuadPart + 0x1e0));
      uVar31 = (uint)((float)*(uint *)(param_1.QuadPart + 400) * fVar38);
      *(uint *)(param_1.QuadPart + 400) = uVar31;
      *(uint *)(param_1.QuadPart + 0x188) = uVar31;
      uVar29 = (uint)((float)*(uint *)(param_1.QuadPart + 0x194) * fVar38);
      *(uint *)(param_1.QuadPart + 0x194) = uVar29;
      *(uint *)(param_1.QuadPart + 0x18c) = uVar29;
      *(int *)(param_1.QuadPart + 0x198) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x198) * fVar38);
      *(int *)(param_1.QuadPart + 0x19c) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x19c) * fVar38);
      uVar21 = (uint)((float)*(uint *)(param_1.QuadPart + 0x1a0) * fVar38);
      *(uint *)(param_1.QuadPart + 0x1a0) = uVar21;
      uVar18 = (uint)((float)*(uint *)(param_1.QuadPart + 0x1a4) * fVar38);
      *(uint *)(param_1.QuadPart + 0x1a4) = uVar18;
      *(int *)(param_1.QuadPart + 0x1a8) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x1a8) * fVar38);
      *(int *)(param_1.QuadPart + 0x1ac) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x1ac) * fVar38);
      fVar37 = (float)uVar18;
      if (fVar37 <= 1.0) {
        fVar37 = 1.0;
      }
      *(int *)(param_1.QuadPart + 0x1bc) =
           (int)(((float)*(uint *)(param_1.QuadPart + 0x1bc) * 100.0) / fVar37);
      lVar23 = *(longlong *)(param_1.QuadPart + 0x90);
      fVar37 = (float)uVar21 + (float)*(uint *)(param_1.QuadPart + 0x1b8);
      if (fVar37 <= 1.0) {
        fVar37 = 1.0;
      }
      *(int *)(param_1.QuadPart + 0x1b8) =
           (int)(((float)*(uint *)(param_1.QuadPart + 0x1b8) * 100.0) / fVar37);
      if (((lVar23 != 0) && (*(longlong *)(lVar23 + 0x30) != 0)) &&
         (lVar25 = *(longlong *)(*(longlong *)(lVar23 + 0x30) + 0x460), lVar25 != 0)) {
        local_23c = (uint)*(float *)(lVar25 + 0x498);
      }
      iVar19 = *(int *)(param_1.QuadPart + 0xa0);
      *(int *)(param_1.QuadPart + 0x1c8) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x1c8) * fVar38);
      *(int *)(param_1.QuadPart + 0x1d0) =
           (int)((float)*(uint *)(param_1.QuadPart + 0x1d0) * fVar38);
      uVar21 = (uint)((float)*(uint *)(param_1.QuadPart + 0x1cc) * fVar38);
      *(uint *)(param_1.QuadPart + 0x1cc) = uVar21;
      uVar18 = (uint)((float)*(uint *)(param_1.QuadPart + 0x1d4) * fVar38);
      *(uint *)(param_1.QuadPart + 0x1d4) = uVar18;
      iVar8 = iVar9;
      if (uVar31 != 0) {
        iVar8 = (int)((100.0 / (float)uVar31) * (float)uVar18);
      }
      *(int *)(param_1.QuadPart + 0x1d8) = iVar8;
      if (uVar29 != 0) {
        iVar9 = (int)((100.0 / (float)uVar29) * (float)uVar21);
      }
      *(int *)(param_1.QuadPart + 0x1dc) = iVar9;
      if (*(longlong *)(param_1.QuadPart + 0xd0) != 0) {
        UWorld::GetActorCount(*(longlong *)(param_1.QuadPart + 0xd0));
        lVar23 = *(longlong *)(param_1.QuadPart + 0x90);
        iVar19 = *(int *)(param_1.QuadPart + 0xa0);
      }
      if (lVar23 == 0) {
        uVar12 = uVar20;
        uVar22 = uVar20;
        if (0 < iVar19) {
          do {
            FNetworkObjectList::GetNumDormantActorsForConnection
                      (*(longlong *)(param_1.QuadPart + 0x528),
                       *(undefined8 *)(*(longlong *)(param_1.QuadPart + 0x98) + uVar12));
            plVar27 = *(longlong **)(*(longlong *)(param_1.QuadPart + 0x98) + uVar12);
            (**(code **)(*plVar27 + 0x2d8))(plVar27,0);
            uVar18 = (int)uVar22 + 1;
            uVar12 = uVar12 + 8;
            uVar22 = (ulonglong)uVar18;
          } while ((int)uVar18 < *(int *)(param_1.QuadPart + 0xa0));
        }
      }
      else {
        FNetworkObjectList::GetNumDormantActorsForConnection
                  (*(longlong *)(param_1.QuadPart + 0x528));
        (**(code **)(**(longlong **)(param_1.QuadPart + 0x90) + 0x2d8))
                  (*(longlong **)(param_1.QuadPart + 0x90),0);
      }
    }
    cVar7 = FUN_1407ce070(local_208);
    if (cVar7 != '\0') {
      if (DAT_146aeb1b0 == '\0') {
        FUN_14218f800(&DAT_146aeb1a8);
      }
      puVar13 = DAT_146aeb1a8;
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_240,local_208);
      cVar7 = FUN_1407ce070(&local_240);
      if (cVar7 != '\0') {
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 6,(float)*(uint *)(param_1.QuadPart + 400));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 7,(float)*(uint *)(param_1.QuadPart + 0x194));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 8,(float)*(uint *)(param_1.QuadPart + 0x1d4));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 9,(float)*(uint *)(param_1.QuadPart + 0x1cc));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 10,(float)*(uint *)(param_1.QuadPart + 0x1b8));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 0xb,(float)*(uint *)(param_1.QuadPart + 0x1bc));
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
        FUN_142183020(*puVar13,&local_244,puVar13 + 0xd);
        if (*(int *)(param_1.QuadPart + 0x538) == 1) {
          icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,&local_240);
          FUN_142182e90(*puVar13,&local_244,puVar13 + 0xc);
        }
      }
      if (*(longlong *)(param_1.QuadPart + 0x90) != 0) {
        if (DAT_146aeb1b0 == '\0') {
          FUN_14218f800(&DAT_146aeb1a8);
        }
        uVar1 = *DAT_146aeb1a8;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b04788) &&
           (_Init_thread_header(&DAT_146b04788), DAT_146b04788 == -1)) {
          atexit(FUN_143eb42f0);
          _Init_thread_footer(&DAT_146b04788);
        }
        local_238 = (LARGE_INTEGER)
                    *(LARGE_INTEGER *)
                     &((LARGE_INTEGER *)(*(longlong *)(param_1.QuadPart + 0x10) + 0x18))->s;
        if (DAT_1465342a8 != DAT_1465342d4) {
          puVar11 = DAT_1465342e0;
          if (DAT_1465342e0 == (undefined *)0x0) {
            puVar11 = &DAT_1465342d8;
          }
          iVar9 = *(int *)(puVar11 +
                          ((longlong)(int)(local_238.s.HighPart + local_238.s.LowPart) &
                          (longlong)DAT_1465342e8 - 1U) * 4);
          while (iVar9 != -1) {
            lVar23 = (longlong)iVar9;
            if (*(longlong *)(DAT_1465342a0 + lVar23 * 0x18) == local_238.QuadPart) {
              uVar12 = DAT_1465342a0 + lVar23 * 0x18;
              if (iVar9 != -1) goto LAB_1425d3615;
              break;
            }
            iVar9 = *(int *)(DAT_1465342a0 + 0x10 + lVar23 * 0x18);
          }
        }
        uVar12 = uVar20;
LAB_1425d3615:
        uVar22 = uVar12 + 8;
        if (uVar12 == 0) {
          uVar22 = uVar20;
        }
        if (uVar22 == 0) {
          local_1f0 = &local_238;
          FUN_1425aac30(&DAT_1465342a0,&local_244,&local_1f0,0);
          uVar22 = DAT_1465342a0 + ((longlong)local_244 * 3 + 1) * 8;
          FName::ToString(&local_238,&local_1a8);
          plVar28 = local_1a8;
          iVar9 = (int)uStack_1a0;
          local_200 = (longlong *)0x0;
          local_1f8 = iVar9;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_200,(6 - (uint)(iVar9 != 0)) + iVar9,0);
          plVar27 = local_200;
          _guard_xfg_dispatch_icall_nop(local_200,plVar28,(longlong)iVar9 * 2);
          uVar18 = local_1f8;
          lVar23 = (longlong)(int)local_1f8;
          local_1f8 = (6 - (uint)(local_1f8 != 0)) + local_1f8;
          if (local_1f4 < (int)local_1f8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,uVar18);
            plVar27 = local_200;
          }
          lVar23 = lVar23 - (ulonglong)(uVar18 != 0);
          plVar28 = (longlong *)&DAT_143f3eda8;
          if (local_1f8 != 0) {
            plVar28 = plVar27;
          }
          *(undefined8 *)((longlong)plVar27 + lVar23 * 2) = 0x6e00690070005f;
          *(undefined2 *)((longlong)plVar27 + lVar23 * 2 + 8) = 0x67;
          *(undefined2 *)((longlong)plVar27 + lVar23 * 2 + 10) = 0;
          puVar13 = (undefined8 *)FName::FName(&local_130,&DAT_14510c448,1);
          puVar14 = (undefined8 *)FName::FName(&local_138,L"Mean",1);
          uVar15 = FUN_142186cb0(uVar1,&local_d8,uVar22,plVar28);
          uVar15 = FUN_1421837f0(uVar15,*puVar14,0);
          FUN_1421837f0(uVar15,*puVar13,0);
          FUN_14217f320(&local_d8);
          if (plVar27 != (longlong *)0x0) {
            FMemory::Free(plVar27);
          }
          if (local_1a8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_244,local_208);
        FUN_142183020(uVar1,&local_244,uVar22);
      }
    }
    *(double *)(param_1.QuadPart + 0x1e0) = dVar3;
    *(longlong *)(param_1.QuadPart + 400) = 0;
    *(longlong *)(param_1.QuadPart + 0x198) = 0;
    *(longlong *)(param_1.QuadPart + 0x1a0) = 0;
    *(longlong *)(param_1.QuadPart + 0x1a8) = 0;
    *(longlong *)(param_1.QuadPart + 0x1b8) = 0;
    *(longlong *)(param_1.QuadPart + 0x1c8) = 0;
    *(longlong *)(param_1.QuadPart + 0x1d0) = 0;
    *(longlong *)(param_1.QuadPart + 0x1d8) = 0;
  }
  uVar20 = 0;
  if (*(longlong *)(param_1.QuadPart + 0x90) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x310))(param_1.QuadPart);
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x318))();
    (**(code **)(**(longlong **)(param_1.QuadPart + 0x90) + 0x2d0))();
  }
  uVar12 = uVar20;
  uVar22 = uVar20;
  if (0 < *(int *)(param_1.QuadPart + 0xa0)) {
    do {
      (**(code **)(**(longlong **)(uVar22 + *(longlong *)(param_1.QuadPart + 0x98)) + 0x2d0))();
      uVar18 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar18;
      uVar22 = uVar22 + 8;
    } while ((int)uVar18 < *(int *)(param_1.QuadPart + 0xa0));
  }
  if (*(longlong *)(param_1.QuadPart + 0xa8) != 0) {
    PacketHandler::Tick(*(longlong *)(param_1.QuadPart + 0xa8),param_2);
    (**(code **)(*(longlong *)param_1 + 0x2a8))(param_1.QuadPart);
  }
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  lVar23 = DAT_146aff5b0;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    uVar12 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_1425d3920;
  }
  else {
LAB_1425d3920:
    uVar12 = uVar20;
  }
  if ((*(int *)(uVar12 + lVar23) == 0) ||
     (lVar23 = *(longlong *)(param_1.QuadPart + 0xe0), lVar23 == 0)) {
    plVar27 = (longlong *)(param_1.QuadPart + 0x450);
    local_228 = 0;
    puStack_220 = (uint *)(param_1.QuadPart + 0x460);
    uStack_224 = 1;
    local_218 = 0xffffffff;
    uStack_214 = 0;
    uStack_210 = 0;
    if (*(int *)(param_1.QuadPart + 0x478) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
    }
    uStack_168 = local_218;
    uStack_164 = uStack_214;
    local_160 = uStack_210;
    uStack_15c = uStack_20c;
    uStack_1e0 = CONCAT44(uStack_224,local_228);
    local_170 = puStack_220;
    puStack_1d8 = puStack_220;
    uStack_1d0 = CONCAT44(uStack_214,local_218);
    auStack_1c8._4_4_ = uStack_20c;
    auStack_1c8._0_4_ = uStack_210;
    auStack_1c8._8_8_ = plVar27;
    uVar18 = uStack_214;
    local_1e8 = plVar27;
    local_180 = plVar27;
    uStack_178 = uStack_1e0;
    if ((int)uStack_214 < (int)puStack_220[6]) {
      while( true ) {
        local_248[0] = '\0';
        FUN_1423ff040(*(undefined8 *)(*local_1e8 + (longlong)(int)uVar18 * 0x10),local_248);
        if (local_248[0] == '\0') {
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Remove(plVar27,uVar18);
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e0);
        if ((int)puStack_1d8[6] <= (int)uStack_1d0._4_4_) break;
        plVar27 = (longlong *)auStack_1c8._8_8_;
        uVar18 = uStack_1d0._4_4_;
      }
    }
    goto LAB_1425d42af;
  }
  plVar27 = (longlong *)(lVar23 + 0xa8);
  local_d8 = 0;
  local_148 = (longlong *)(lVar23 + 0xf8);
  local_d0 = 0;
  local_1e8 = (longlong *)(param_1.QuadPart + 0x450);
  local_b8 = 0;
  puVar24 = (uint *)(param_1.QuadPart + 0x460);
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar18 = *(uint *)(param_1.QuadPart + 0x478);
  local_1a8 = (longlong *)0x100000000;
  local_198._4_4_ = 0;
  uStack_190 = 0;
  if (uVar18 != 0) {
    puVar33 = *(uint **)(param_1.QuadPart + 0x470);
    if (*(uint **)(param_1.QuadPart + 0x470) == (uint *)0x0) {
      puVar33 = puVar24;
    }
    uVar21 = *puVar33;
    uVar12 = uVar20;
    while (uVar21 == 0) {
      iVar9 = (int)uVar20;
      uStack_190 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_190;
      uVar20 = (ulonglong)(iVar9 + 1U);
      uVar22 = (ulonglong)local_1a8 >> 0x20;
      local_1a8 = (longlong *)CONCAT44((int)uVar22,iVar9 + 1U);
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_1425d3a4d;
      uVar21 = puVar33[(longlong)iVar9 + 1];
    }
    uVar21 = -uVar21 & uVar21;
    iVar9 = 0x1f;
    if (uVar21 != 0) {
      for (; uVar21 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    local_1a8 = (longlong *)CONCAT44(uVar21,SUB84(local_1a8,0));
    if (uVar21 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_198._4_4_ = (uStack_190 - iVar9) + 0x1f;
    if ((int)uVar18 < (int)local_198._4_4_) {
LAB_1425d3a4d:
      local_198._4_4_ = uVar18;
    }
  }
  uStack_214 = *(uint *)(param_1.QuadPart + 0x478);
  uStack_1d0 = CONCAT44(local_198._4_4_,0xffffffff);
  local_188 = CONCAT44(uStack_18c,uStack_190);
  uStack_1e0 = (ulonglong)local_1a8;
  local_218 = -1 << ((byte)uStack_214 & 0x1f);
  uVar21 = uStack_214 & 0xffffffe0;
  auStack_1c8._0_8_ = local_188;
  uStack_1a0 = (ulonglong)local_1a8;
  uStack_190 = 0xffffffff;
  uStack_18c = local_198._4_4_;
  if (uStack_214 != uVar18) {
    puVar33 = *(uint **)(param_1.QuadPart + 0x470);
    if (*(uint **)(param_1.QuadPart + 0x470) == (uint *)0x0) {
      puVar33 = puVar24;
    }
    uVar29 = puVar33[(int)uStack_214 >> 5] & local_218;
    iVar9 = (int)uStack_214 >> 5;
    while (uVar29 == 0) {
      uVar21 = uVar21 + 0x20;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_1425d3b2e;
      uVar29 = puVar33[(longlong)iVar9 + 1];
      local_218 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar29 = -uVar29 & uVar29;
    iVar9 = 0x1f;
    if (uVar29 != 0) {
      for (; uVar29 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar29 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_214 = (uVar21 - iVar9) + 0x1f;
    if ((int)uVar18 < (int)uStack_214) {
LAB_1425d3b2e:
      uStack_214 = uVar18;
    }
  }
  uVar18 = uStack_214;
  puStack_1d8 = puVar24;
  local_1a8 = local_1e8;
  local_130 = plVar27;
  local_198 = puVar24;
  while( true ) {
    plVar28 = local_148;
    if (((uStack_18c == uVar18) && (local_198 == puVar24)) &&
       (local_1a8 == (longlong *)(param_1.QuadPart + 0x450))) break;
    local_238 = (LARGE_INTEGER)
                ((LARGE_INTEGER *)(*local_1a8 + (longlong)(int)uStack_18c * 0x10))->QuadPart;
    if ((*(uint *)(local_238.QuadPart + 0xe8) & 4) != 0) {
      *(uint *)(local_238.QuadPart + 0xe8) = *(uint *)(local_238.QuadPart + 0xe8) & 0xfffffffb;
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(&local_d8,&local_1f0,&local_238);
    }
    uStack_190 = uStack_190 & ~uStack_1a0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
  }
  if ((*(int *)(lVar23 + 0xb0) != *(int *)(lVar23 + 0xdc)) || ((int)local_d0 != local_a4)) {
    lVar16 = 0;
    local_150 = 0;
    cVar7 = (**(code **)(*(longlong *)param_1 + 0x368))(param_1.QuadPart);
    lVar25 = DAT_146aff5c8;
    if (cVar7 == '\0') {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar10 = GetCurrentThreadId();
        if (DVar10 != DAT_1468c21c0) {
          lVar16 = 4;
        }
      }
      local_244 = *(int *)(lVar16 + lVar25);
    }
    else {
      local_244 = 0;
    }
    lVar25 = DAT_146aff5e0;
    lVar16 = 4;
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 == DAT_1468c21c0) goto LAB_1425d3c68;
    }
    else {
LAB_1425d3c68:
      lVar16 = 0;
    }
    uVar21 = 0;
    puStack_220 = (uint *)(lVar23 + 0xb8);
    uVar18 = *(uint *)(lVar23 + 0xd0);
    local_148 = (longlong *)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar16 + lVar25));
    local_1a8 = (longlong *)0x0;
    uStack_1a0 = uStack_1a0 & 0xffffffff;
    local_200 = (longlong *)0x0;
    local_1f4 = 0;
    local_228 = 0;
    uStack_224 = 1;
    uStack_214 = 0;
    uStack_210 = 0;
    if (uVar18 != 0) {
      puVar24 = *(uint **)(lVar23 + 200);
      if (*(uint **)(lVar23 + 200) == (uint *)0x0) {
        puVar24 = puStack_220;
      }
      uVar29 = *puVar24;
      uStack_210 = uVar21;
      local_228 = uVar21;
      while (uVar29 == 0) {
        lVar23 = (longlong)(int)local_228;
        uStack_210 = uStack_210 + 0x20;
        uVar29 = local_228 + 1;
        bVar2 = (int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_228;
        local_228 = uVar29;
        if (bVar2) goto LAB_1425d3d41;
        uVar29 = puVar24[lVar23 + 1];
      }
      uStack_224 = -uVar29 & uVar29;
      iVar9 = 0x1f;
      if (uStack_224 != 0) {
        for (; uStack_224 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_224 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_214 = (uStack_210 - iVar9) + 0x1f;
      if ((int)uVar18 < (int)uStack_214) {
LAB_1425d3d41:
        uStack_214 = uVar18;
      }
    }
    local_218 = 0xffffffff;
    uStack_1e0 = CONCAT44(uStack_224,local_228);
    uStack_1d0 = CONCAT44(uStack_214,0xffffffff);
    auStack_1c8._4_4_ = uStack_20c;
    auStack_1c8._0_4_ = uStack_210;
    local_160 = uStack_210;
    uStack_15c = uStack_20c;
    uStack_168 = 0xffffffff;
    uStack_164 = uStack_214;
    local_1e8 = plVar27;
    puStack_1d8 = puStack_220;
    local_180 = plVar27;
    uStack_178 = uStack_1e0;
    local_170 = puStack_220;
    uStack_158 = plVar27;
    uVar29 = uVar21;
    if ((int)uStack_214 < (int)uVar18) {
      plVar36 = (longlong *)0x0;
      do {
        uVar18 = uStack_164;
        bVar2 = false;
        local_240 = *(undefined4 *)(*local_180 + (longlong)(int)uStack_164 * 0xc);
        lVar23 = FUN_1425e6270(*(longlong *)(param_1.QuadPart + 0xe0),&local_240,0);
        if (lVar23 != 0) {
          local_1f8 = uVar29 + 1;
          if (local_1f4 < (int)local_1f8) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_200,uVar29);
            plVar36 = local_200;
          }
          *(undefined4 *)((longlong)plVar36 + (longlong)(int)uVar29 * 4) = local_240;
          bVar2 = true;
          uVar29 = local_1f8;
        }
        cVar7 = FNetGUIDCache::IsGUIDBroken(*(longlong *)(param_1.QuadPart + 0xe0),&local_240);
        if (cVar7 != '\0') {
          bVar2 = true;
        }
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                  (uStack_158,uVar18);
        if (!bVar2) {
          FNetGUIDCache::GetOuterNetGUID(*(longlong *)(param_1.QuadPart + 0xe0),&local_23c);
          if ((0 < (int)local_148) && (1 < local_23c)) {
            cVar7 = FNetGUIDCache::IsGUIDLoaded(*(longlong *)(param_1.QuadPart + 0xe0),&local_23c);
            if (cVar7 == '\0') {
              cVar7 = FNetGUIDCache::IsGUIDPending
                                (*(longlong *)(param_1.QuadPart + 0xe0),&local_23c);
              if (cVar7 == '\0') {
                if ((int)plVar28[1] != *(int *)((longlong)plVar28 + 0x34)) {
                  plVar27 = (longlong *)plVar28[8];
                  if ((longlong *)plVar28[8] == (longlong *)0x0) {
                    plVar27 = plVar28 + 7;
                  }
                  uVar18 = *(uint *)((longlong)plVar27 +
                                    ((longlong)(int)plVar28[9] - 1U & (longlong)(int)local_23c) * 4)
                  ;
                  if (uVar18 != 0xffffffff) {
                    do {
                      puVar24 = (uint *)((longlong)(int)uVar18 * 0x60 + *plVar28);
                      if (*puVar24 == local_23c) {
                        if ((uVar18 != 0xffffffff) && (puVar24 != (uint *)0x0)) goto LAB_1425d3f23;
                        break;
                      }
                      uVar18 = puVar24[0x16];
                    } while (uVar18 != 0xffffffff);
                  }
                }
                local_138 = &local_23c;
                FUN_1425aaf10(plVar28,&local_1f0,&local_138,0);
                puVar24 = (uint *)((longlong)(int)local_1f0 * 0x60 + *plVar28);
LAB_1425d3f23:
                FUN_140ac3dd0(puVar24 + 2,&local_238);
                goto LAB_1425d3f62;
              }
            }
          }
          uVar18 = uVar21 + 1;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar18);
          if ((int)uStack_1a0._4_4_ < (int)uVar18) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar21);
            uVar18 = (uint)uStack_1a0;
          }
          *(undefined4 *)((longlong)local_1a8 + (longlong)(int)uVar21 * 4) = local_240;
          uVar21 = uVar18;
        }
LAB_1425d3f62:
        local_150 = local_150 + 1;
        if ((0 < local_244) && (plVar27 = local_130, local_244 <= local_150)) break;
        uStack_168 = uStack_168 & ~uStack_178._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_178);
        plVar27 = local_130;
      } while ((int)uStack_164 < (int)local_170[6]);
    }
    plVar36 = (longlong *)((longlong)local_200 + (longlong)(int)uVar29 * 4);
    if (local_200 != plVar36) {
      plVar26 = local_200;
      do {
        TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::FindId(plVar28,&local_1f0,plVar26);
        lVar23 = 0;
        if ((int)local_1f0 != -1) {
          lVar23 = (longlong)(int)local_1f0 * 0x60 + *plVar28;
        }
        lVar25 = lVar23 + 8;
        if (lVar23 == 0) {
          lVar25 = 0;
        }
        if (lVar25 != 0) {
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>(plVar27);
          TSet<TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::Remove(plVar28,plVar26);
        }
        plVar26 = (longlong *)((longlong)plVar26 + 4);
        param_1 = local_140;
      } while (plVar26 != plVar36);
    }
    if (uVar21 != 0) {
      cVar7 = FUN_1425b6920(plVar27);
      if (cVar7 != '\0') {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(plVar27);
      }
      iVar9 = (int)plVar27[1] - *(int *)((longlong)plVar27 + 0x34);
      if (iVar9 < (int)(iVar9 + uVar21)) {
        FUN_1413c1970(plVar27);
      }
      plVar28 = (longlong *)((longlong)local_1a8 + (longlong)(int)uVar21 * 4);
      for (plVar26 = local_1a8; plVar26 != plVar28; plVar26 = (longlong *)((longlong)plVar26 + 4)) {
        FUN_140ac3dd0(plVar27,&local_238,plVar26,0);
      }
    }
    if ((uVar29 != 0) || ((int)local_d0 != local_a4)) {
      local_128 = 0;
      local_120 = 0;
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_118,0,0);
      local_f8 = 0xffffffff;
      local_f4 = 0;
      local_e8 = 0;
      local_e0 = 0;
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      operator=(&local_128,&local_d8);
      for (plVar27 = local_200; plVar27 != plVar36; plVar27 = (longlong *)((longlong)plVar27 + 4)) {
        TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1.QuadPart + 0x3f8),&local_1f0,plVar27);
        lVar23 = 0;
        if ((int)local_1f0 != -1) {
          lVar23 = (longlong)(int)local_1f0 * 0x60 + *(longlong *)(param_1.QuadPart + 0x3f8);
        }
        lVar25 = lVar23 + 8;
        if (lVar23 == 0) {
          lVar25 = 0;
        }
        if (lVar25 != 0) {
          TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>(&local_128);
        }
      }
      uStack_224 = 1;
      puStack_220 = local_118;
      local_228 = 0;
      local_218 = 0xffffffff;
      uStack_214 = 0;
      uStack_210 = 0;
      uVar18 = local_100;
      if (local_100 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
        uVar18 = local_100;
      }
      auVar5 = auStack_1c8;
      auStack_1c8._4_4_ = uStack_20c;
      auStack_1c8._0_4_ = uStack_210;
      local_1e8 = &local_128;
      uStack_178 = CONCAT44(uStack_224,local_228);
      uStack_168 = local_218;
      uStack_164 = uStack_214;
      local_160 = uStack_210;
      uStack_15c = uStack_20c;
      local_170 = puStack_220;
      uStack_1d0 = CONCAT44(uStack_214,local_218);
      uStack_1e0 = CONCAT44(uStack_224,local_228);
      puStack_1d8 = puStack_220;
      auStack_1c8._8_8_ = auVar5._8_8_;
      local_218 = -1 << ((byte)uVar18 & 0x1f);
      uStack_214 = uVar18;
      local_180 = local_1e8;
      while( true ) {
        if (((uStack_1d0._4_4_ == uVar18) && (puStack_1d8 == local_118)) &&
           (local_1e8 == &local_128)) break;
        uVar1 = *(undefined8 *)(*local_1e8 + (longlong)(int)uStack_1d0._4_4_ * 0x10);
        piVar17 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                   ((longlong *)(param_1.QuadPart + 0x450),&local_238,uVar1);
        if (*piVar17 != -1) {
          local_248[0] = '\0';
          FUN_1423ff040(uVar1,local_248);
          if (local_248[0] == '\0') {
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                      ((longlong *)(param_1.QuadPart + 0x450),uVar1);
          }
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e0);
      }
      local_e0 = 0;
      if (local_e8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_128);
    }
    if (local_200 != (longlong *)0x0) {
      FMemory::Free(local_200);
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
LAB_1425d42af:
  if (10.0 < dVar3 - *(double *)(param_1.QuadPart + 0x1f0)) {
    plVar27 = (longlong *)(param_1.QuadPart + 0x300);
    local_228 = 0;
    puStack_220 = (uint *)(param_1.QuadPart + 0x310);
    uStack_224 = 1;
    local_218 = 0xffffffff;
    uStack_214 = 0;
    uStack_210 = 0;
    if (*(int *)(param_1.QuadPart + 0x328) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
    }
    uStack_1d0 = CONCAT44(uStack_214,local_218);
    auVar5._8_4_ = uStack_210;
    auVar5._0_8_ = uStack_1d0;
    auVar5._12_4_ = uStack_20c;
    uStack_158._0_4_ = SUB84(plVar27,0);
    uStack_158._4_4_ = (undefined4)((ulonglong)plVar27 >> 0x20);
    uStack_1e0 = CONCAT44(uStack_224,local_228);
    uStack_168 = local_218;
    uStack_164 = uStack_214;
    local_170 = puStack_220;
    local_1b0._0_1_ = '\0';
    local_1b0._1_1_ = '\0';
    puStack_1d8 = puStack_220;
    local_160 = uStack_210;
    auStack_1c8._8_4_ = (undefined4)uStack_158;
    auStack_1c8._0_8_ = auVar5._8_8_;
    auStack_1c8._12_4_ = uStack_158._4_4_;
    uVar18 = uStack_214;
    local_1e8 = plVar27;
    local_1b8 = plVar27;
    local_180 = plVar27;
    uStack_178 = uStack_1e0;
    uStack_158 = plVar27;
    if ((int)uStack_214 < (int)*(longlong *)((longlong)puStack_220 + 0x18)) {
      do {
        uStack_158 = plVar27;
        cVar7 = FWeakObjectPtr::IsValid((longlong)(int)uVar18 * 0x20 + *local_1e8);
        if (cVar7 == '\0') {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove(auStack_1c8._8_8_,uVar18);
          local_1b0._0_1_ = '\x01';
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e0);
        uVar18 = uStack_1d0._4_4_;
        plVar27 = uStack_158;
      } while ((int)uStack_1d0._4_4_ < (int)*(longlong *)((longlong)puStack_1d8 + 0x18));
      if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_1b8,(int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34),1);
      }
    }
    plVar27 = (longlong *)(param_1.QuadPart + 0x3a8);
    local_228 = 0;
    puStack_220 = (uint *)(param_1.QuadPart + 0x3b8);
    uStack_224 = 1;
    local_218 = 0xffffffff;
    uStack_214 = 0;
    uStack_210 = 0;
    if (*(int *)(param_1.QuadPart + 0x3d0) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
    }
    uStack_1d0 = CONCAT44(uStack_214,local_218);
    auVar6._8_4_ = uStack_210;
    auVar6._0_8_ = uStack_1d0;
    auVar6._12_4_ = uStack_20c;
    uStack_158._0_4_ = SUB84(plVar27,0);
    uStack_158._4_4_ = (undefined4)((ulonglong)plVar27 >> 0x20);
    uStack_1e0 = CONCAT44(uStack_224,local_228);
    uStack_168 = local_218;
    uStack_164 = uStack_214;
    local_160 = uStack_210;
    uStack_15c = uStack_20c;
    local_170 = puStack_220;
    local_1b0 = 0;
    puStack_1d8 = puStack_220;
    auStack_1c8._8_4_ = (undefined4)uStack_158;
    auStack_1c8._0_8_ = auVar6._8_8_;
    auStack_1c8._12_4_ = uStack_158._4_4_;
    uVar18 = uStack_214;
    local_1e8 = plVar27;
    local_1b8 = plVar27;
    local_180 = plVar27;
    uStack_178 = uStack_1e0;
    uStack_158 = plVar27;
    if ((int)uStack_214 < (int)puStack_220[6]) {
      do {
        uStack_158 = plVar27;
        cVar7 = FWeakObjectPtr::IsValid((longlong)(int)uVar18 * 0x20 + *local_1e8);
        if (cVar7 == '\0') {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove(auStack_1c8._8_8_,uVar18);
          local_1b0 = CONCAT11(local_1b0._1_1_,1);
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e0);
        uVar18 = uStack_1d0._4_4_;
        plVar27 = uStack_158;
      } while ((int)uStack_1d0._4_4_ < (int)puStack_1d8[6]);
      if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_1b8,(int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34),1);
      }
    }
    *(double *)(param_1.QuadPart + 0x1f0) = dVar3;
  }
  (**(code **)(*(longlong *)param_1 + 800))(param_1.QuadPart);
  if (local_230 != '\0') {
    QueryPerformanceCounter(&local_140);
    DAT_146afeff0 = DAT_146afeff0 + ((double)local_140.QuadPart * DAT_1468b02f8 - dVar4);
  }
  return;
}



// FUNCTION 1425d46a0 FUN_1425d46a0 body=56 status=ok
// SIG undefined FUN_1425d46a0(void)

void FUN_1425d46a0(longlong param_1)

{
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x810));
  *(undefined8 *)(param_1 + 0x828) = 0;
  return;
}



// FUNCTION 1425d46e0 FUN_1425d46e0 body=256 status=ok
// SIG undefined FUN_1425d46e0(void)

void FUN_1425d46e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    TBaseMulticastDelegate<void>::Remove(param_2 + 0x500,*(undefined8 *)(param_1 + 0x4f0));
    TBaseMulticastDelegate<void>::Remove(param_2 + 0x518,*(undefined8 *)(param_1 + 0x4f8));
    lVar2 = *(longlong *)(param_1 + 0x500);
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x538)) {
      lVar4 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(param_2 + 0x530) + lVar4);
        if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
           (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res10), *plVar1 == lVar2
           )) {
          if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar5 != 0) {
              lVar2 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar2;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < *(int *)(param_2 + 0x538));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_2 + 0x530,0);
  }
  return;
}



// FUNCTION 1425d47e0 FUN_1425d47e0 body=639 status=ok
// SIG undefined FUN_1425d47e0(void)

void FUN_1425d47e0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
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
  
  plVar2 = (longlong *)(param_1 + 0x1838);
  local_88 = 0;
  uVar3 = *(uint *)(param_1 + 0x1860);
  puVar1 = (uint *)(param_1 + 0x1848);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar9 = *(uint **)(param_1 + 0x1858);
    if (*(uint **)(param_1 + 0x1858) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar4 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar10 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar10;
      if (bVar5) goto LAB_1425d48be;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (iStack_70 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1425d48be:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1860);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar9 = *(uint **)(param_1 + 0x1858);
    if (*(uint **)(param_1 + 0x1858) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = puVar9[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1425d4995;
      uVar8 = puVar9[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1425d4995:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x18);
    if (lVar7 != 0) {
      lVar6 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        FUN_1425d4a60(param_1,lVar7);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1425d4a60 FUN_1425d4a60 body=331 status=ok
// SIG undefined FUN_1425d4a60(void)

bool FUN_1425d4a60(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  if (param_2 == 0) {
    bVar5 = true;
  }
  else {
    cVar1 = ULevel::IsPersistentLevel(param_2);
    if ((cVar1 == '\0') ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd8) + 0x18) !=
        *(longlong *)(param_1 + 0x1888))) {
      lVar3 = UObjectBaseUtility::GetOutermost(param_2);
      lVar3 = *(longlong *)(lVar3 + 0x18);
      if (*(int *)(param_1 + 0x1750) != *(int *)(param_1 + 0x177c)) {
        lVar4 = *(longlong *)(param_1 + 0x1788);
        if (*(longlong *)(param_1 + 0x1788) == 0) {
          lVar4 = param_1 + 0x1780;
        }
        iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                 (longlong)*(int *)(param_1 + 0x1790) - 1U) * 4);
        if (iVar2 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1748) + (longlong)iVar2 * 0x10) == lVar3)
            goto LAB_1425d4b1b;
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x1748) + 8 + (longlong)iVar2 * 0x10);
          } while (iVar2 != -1);
        }
      }
      iVar2 = -1;
LAB_1425d4b1b:
      bVar5 = iVar2 != -1;
    }
    else {
      bVar5 = true;
    }
  }
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1838,local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar3 = *(longlong *)(param_1 + 0x1838) + (longlong)local_res8[0] * 0x18, lVar3 != 0)) {
    *(bool *)(lVar3 + 8) = bVar5;
    return bVar5;
  }
  local_res18[0] = &local_res10;
  FUN_1425aa930(param_1 + 0x1838,local_res8,local_res18,0);
  *(bool *)(*(longlong *)(param_1 + 0x1838) + 8 + (longlong)local_res8[0] * 0x18) = bVar5;
  return bVar5;
}



// FUNCTION 1425d4bb0 FUN_1425d4bb0 body=765 status=ok
// SIG undefined FUN_1425d4bb0(void)

void FUN_1425d4bb0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined8 local_res20;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong uVar18;
  
  iVar12 = *(int *)(param_1 + 0x40);
  uVar14 = 0;
  local_d8 = 0;
  local_d0 = 0;
  iVar9 = ((int)(iVar12 + 3 + (iVar12 + 3 >> 0x1f & 3U)) >> 2) + *(int *)(param_1 + 0x50);
  uVar17 = uVar14;
  if (iVar9 != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d8,iVar9);
    iVar12 = *(int *)(param_1 + 0x40);
    uVar17 = local_d0 & 0xffffffff;
  }
  lVar15 = local_d8;
  uVar18 = uVar17;
  uVar19 = uVar14;
  uVar20 = uVar14;
  if (0 < iVar12) {
    do {
      local_res8 = *(longlong *)(param_1 + 0x38);
      uVar13 = (uint)uVar19 & 0x80000003;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
      }
      uVar18 = uVar17;
      if (uVar13 == 0) {
        uVar16 = (int)uVar17 + 1;
        uVar18 = (ulonglong)uVar16;
        local_d0 = CONCAT44(local_d0._4_4_,uVar16);
        if (local_d0._4_4_ < (int)uVar16) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_d8,uVar17);
          uVar18 = local_d0 & 0xffffffff;
          lVar15 = local_d8;
        }
        puVar2 = (undefined8 *)(lVar15 + (longlong)(int)uVar17 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      uVar16 = (uint)uVar19 + 1;
      *(undefined4 *)(lVar15 + ((longlong)(int)uVar13 + (longlong)((int)uVar18 + -1) * 4) * 4) =
           *(undefined4 *)(local_res8 + 0x18 + uVar20);
      uVar17 = uVar18;
      uVar19 = (ulonglong)uVar16;
      uVar20 = uVar20 + 0x20;
    } while ((int)uVar16 < *(int *)(param_1 + 0x40));
  }
  uVar17 = uVar14;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      plVar11 = (longlong *)(uVar14 + 0x18 + *(longlong *)(param_1 + 0x48));
      local_c8 = (undefined4 *)*plVar11;
      uStack_c0 = (undefined8 *)plVar11[1];
      uVar13 = (int)uVar18 + 1;
      uVar19 = (ulonglong)uVar13;
      local_d0 = CONCAT44(local_d0._4_4_,uVar13);
      if (local_d0._4_4_ < (int)uVar13) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_d8,uVar18);
        uVar19 = local_d0 & 0xffffffff;
        lVar15 = local_d8;
      }
      uVar13 = (int)uVar17 + 1;
      uVar14 = uVar14 + 0x28;
      puVar3 = (undefined4 *)(lVar15 + (longlong)(int)uVar18 * 0x10);
      *puVar3 = (undefined4)local_c8;
      puVar3[1] = local_c8._4_4_;
      puVar3[2] = (undefined4)uStack_c0;
      puVar3[3] = uStack_c0._4_4_;
      uVar18 = uVar19;
      uVar17 = (ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(param_1 + 0x50));
  }
  local_res20 = *(undefined8 *)(param_1 + 0x18);
  FUN_1425bebe0(*(undefined8 *)(param_1 + 0x58),param_1 + 0x28,&local_d8,&local_res20);
  local_b8 = *(undefined4 *)(param_1 + 0x28);
  uStack_b4 = *(undefined4 *)(param_1 + 0x2c);
  uStack_b0 = *(undefined4 *)(param_1 + 0x30);
  uStack_ac = *(undefined4 *)(param_1 + 0x34);
  local_a8 = *(undefined8 *)(param_1 + 0x58);
  if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
      local_90 = local_b8;
      uStack_8c = uStack_b4;
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      local_80 = local_a8;
      FBaseGraphTask::GetSmallTaskAllocator();
      local_a0 = &local_90;
      local_98 = &local_80;
      FUN_1425ab900(&DAT_1465340e0,local_res10,&local_a0,0);
    }
    else {
      plVar11 = (longlong *)FUN_1425bb0e0(local_78,0,0xff);
      lVar4 = *plVar11;
      *(undefined4 *)(lVar4 + 0x10) = local_b8;
      *(undefined4 *)(lVar4 + 0x14) = uStack_b4;
      *(undefined4 *)(lVar4 + 0x18) = uStack_b0;
      *(undefined4 *)(lVar4 + 0x1c) = uStack_ac;
      *(undefined8 *)(lVar4 + 0x20) = local_a8;
      lVar4 = *plVar11;
      lVar7 = plVar11[2];
      lVar5 = plVar11[1];
      lVar6 = *(longlong *)(lVar4 + 0x30);
      piVar1 = (int *)(lVar6 + 0x48);
      if (lVar6 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar15 = local_d8;
      }
      local_res18 = lVar6;
      FUN_14048a160(lVar4,lVar5,(int)lVar7,1);
      if (lVar6 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar15 = local_d8;
        if (iVar12 == 1) {
          FGraphEvent::Recycle(local_res18);
          lVar15 = local_d8;
        }
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    local_c8 = &local_b8;
    uStack_c0 = &local_a8;
    FUN_1425ab900(&DAT_1465340e0,&local_res8,&local_c8,0);
  }
  if (lVar15 != 0) {
    FMemory::Free(lVar15);
  }
  return;
}



// FUNCTION 1425d4eb0 FUN_1425d4eb0 body=2107 status=ok
// SIG undefined FUN_1425d4eb0(void)

void FUN_1425d4eb0(longlong *param_1,longlong *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint *puVar18;
  byte bVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  byte bVar25;
  uint local_res20 [2];
  uint *local_f8;
  uint local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  longlong local_48 [2];
  
  plVar16 = (longlong *)0x0;
  local_res20[0] = 0;
  if (param_4 == '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(param_1 + 0x2e9,*param_2);
    lVar7 = *(longlong *)param_3;
    local_f8 = (uint *)0x0;
    if (lVar7 != 0) {
      if ((int)param_1[0x2f4] != *(int *)((longlong)param_1 + 0x17cc)) {
        plVar15 = (longlong *)param_1[0x2fb];
        if ((longlong *)param_1[0x2fb] == (longlong *)0x0) {
          plVar15 = param_1 + 0x2fa;
        }
        iVar5 = *(int *)((longlong)plVar15 +
                        ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                        (longlong)(int)param_1[0x2fc] - 1U) * 4);
        if (iVar5 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar5 * 0x20 + param_1[0x2f3]);
            if (*plVar15 == lVar7) {
              if (iVar5 != -1) goto LAB_1425d5452;
              break;
            }
            iVar5 = (int)plVar15[3];
          } while (iVar5 != -1);
        }
      }
      plVar15 = plVar16;
LAB_1425d5452:
      plVar17 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      if ((plVar17 != (longlong *)0x0) && (lVar7 = (longlong)(int)plVar17[1], (int)plVar17[1] != 0))
      {
        bVar25 = *(longlong *)*plVar17 != *param_2;
        local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar25);
        plVar15 = plVar16;
        plVar10 = plVar16;
        plVar23 = plVar16;
        do {
          iVar5 = (int)plVar10;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          plVar10 = (longlong *)(ulonglong)(iVar5 + 1);
          if ((longlong)plVar15 < lVar7) {
            plVar12 = (longlong *)(*plVar17 + (longlong)plVar15 * 8);
            do {
              if ((bool)bVar25 != (*plVar12 != *param_2)) break;
              plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
              plVar15 = (longlong *)((longlong)plVar15 + 1);
              plVar12 = plVar12 + 1;
            } while ((longlong)plVar15 < lVar7);
          }
          iVar24 = (int)plVar10 - iVar5;
          bVar19 = bVar25;
          if (bVar25 != 0) {
            iVar22 = (int)plVar23;
            if (iVar22 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar17 + (longlong)iVar22 * 8),
                         (void *)(*plVar17 + (longlong)iVar5 * 8),(longlong)iVar24 << 3);
              bVar19 = (byte)local_res20[0];
            }
            plVar23 = (longlong *)(ulonglong)(uint)(iVar22 + iVar24);
          }
          bVar25 = bVar19 ^ 1;
          local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar19) ^ 1;
        } while ((longlong)plVar15 < lVar7);
        *(int *)(plVar17 + 1) = (int)plVar23;
      }
    }
    plVar15 = (longlong *)param_1[0x2ca];
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x2b0))(plVar15,*param_2);
    }
    local_c8 = param_1 + 0x2c0;
    local_f0 = 0;
    uVar11 = *(uint *)(param_1 + 0x2c5);
    puStack_e8 = (uint *)(param_1 + 0x2c2);
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar11 != 0) {
      puVar18 = (uint *)param_1[0x2c4];
      if ((uint *)param_1[0x2c4] == (uint *)0x0) {
        puVar18 = puStack_e8;
      }
      uVar1 = *puVar18;
      plVar15 = plVar16;
      while (uVar1 == 0) {
        iVar5 = (int)plVar15;
        uStack_d8 = (int)plVar16 + 0x20;
        plVar16 = (longlong *)(ulonglong)uStack_d8;
        local_f0 = iVar5 + 1;
        plVar15 = (longlong *)(ulonglong)local_f0;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1425d55e2;
        uVar1 = puVar18[(longlong)iVar5 + 1];
      }
      uStack_ec = -uVar1 & uVar1;
      iVar5 = 0x1f;
      if (uStack_ec != 0) {
        for (; uStack_ec >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_ec == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_dc = (uStack_d8 - iVar5) + 0x1f;
      if ((int)uVar11 < (int)uStack_dc) {
LAB_1425d55e2:
        uStack_dc = uVar11;
      }
    }
    local_e0 = 0xffffffff;
    uStack_b0 = CONCAT44(uStack_dc,0xffffffff);
    auStack_60._8_4_ = uStack_d8;
    auStack_60._0_8_ = uStack_b0;
    auStack_60._12_4_ = uStack_d4;
    uStack_c0 = CONCAT44(uStack_ec,local_f0);
    local_90 = 0;
    local_50._0_4_ = SUB84(local_c8,0);
    local_50._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    local_a8._8_4_ = (undefined4)local_50;
    local_a8._0_8_ = auStack_60._8_8_;
    local_a8._12_4_ = local_50._4_4_;
    uVar11 = uStack_dc;
    local_b8 = puStack_e8;
    local_98 = local_c8;
    local_78 = local_c8;
    uStack_70 = uStack_c0;
    puStack_68 = puStack_e8;
    local_50 = local_c8;
    if ((int)uStack_dc < (int)param_1[0x2c5]) {
      do {
        plVar16 = *(longlong **)(*local_c8 + 8 + (longlong)(int)uVar11 * 0x18);
        if (plVar16[0xd] != 0) {
          uVar8 = AActor::GetLevel();
          lVar7 = UObjectBaseUtility::GetOutermost(uVar8);
          if (*(longlong *)(lVar7 + 0x18) == *param_2) {
            (**(code **)(*plVar16 + 0x288))(plVar16);
          }
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
        uVar11 = uStack_b0._4_4_;
      } while ((int)uStack_b0._4_4_ < (int)local_b8[6]);
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
      }
    }
    goto LAB_1425d56c9;
  }
  local_88 = 0;
  local_80 = 0;
  puVar6 = (undefined8 *)FName::ToString(param_2,local_48);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar6;
  }
  lVar7 = FUN_14178ae20(0,puVar14);
  local_d0 = lVar7;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  lVar7 = FLinkerLoad::FindExistingLinkerForPackage(lVar7);
  plVar15 = plVar16;
  if (lVar7 == 0) {
    plVar15 = (longlong *)0x1;
    uVar8 = FName::ToString(param_2,&local_f0);
    cVar4 = FUN_1416f0740(uVar8,0,&local_88,1);
    if (cVar4 != '\0') goto LAB_1425d4fbf;
    lVar7 = *param_2;
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar17 = *(longlong **)(lVar9 + 0x88);
    plVar15 = plVar17 + *(int *)(lVar9 + 0x90);
    for (; plVar17 != plVar15; plVar17 = plVar17 + 1) {
      if ((*plVar17 != 0) &&
         (plVar10 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(*plVar17,&local_f8),
         *plVar10 == lVar7)) {
        plVar15 = (longlong *)0x1;
        goto LAB_1425d4fbf;
      }
    }
    bVar3 = false;
    plVar15 = (longlong *)0x1;
  }
  else {
LAB_1425d4fbf:
    bVar3 = true;
  }
  if ((plVar15 != (longlong *)0x0) && (CONCAT44(uStack_ec,local_f0) != 0)) {
    FMemory::Free();
  }
  if (bVar3) {
    FUN_140800100(param_1 + 0x2e9,local_res20,param_2,0);
    lVar7 = *(longlong *)param_3;
    local_f8 = (uint *)0x0;
    if (lVar7 != 0) {
      plVar15 = param_1 + 0x2f3;
      if ((int)param_1[0x2f4] != *(int *)((longlong)param_1 + 0x17cc)) {
        plVar17 = (longlong *)param_1[0x2fb];
        if ((longlong *)param_1[0x2fb] == (longlong *)0x0) {
          plVar17 = param_1 + 0x2fa;
        }
        iVar5 = *(int *)((longlong)plVar17 +
                        ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                        (longlong)(int)param_1[0x2fc] - 1U) * 4);
        if (iVar5 != -1) {
          do {
            plVar17 = (longlong *)((longlong)iVar5 * 0x20 + *plVar15);
            if (*plVar17 == lVar7) {
              if ((iVar5 != -1) && (plVar17 != (longlong *)0x0)) goto LAB_1425d5098;
              break;
            }
            iVar5 = (int)plVar17[3];
          } while (iVar5 != -1);
        }
      }
      local_f8 = param_3;
      FUN_1416e0780(plVar15,local_res20,&local_f8,0);
      plVar17 = (longlong *)((longlong)(int)local_res20[0] * 0x20 + *plVar15);
LAB_1425d5098:
      iVar5 = (int)plVar17[2];
      *(int *)(plVar17 + 2) = iVar5 + 1;
      if (*(int *)((longlong)plVar17 + 0x14) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17 + 1,iVar5);
      }
      *(longlong *)(plVar17[1] + (longlong)iVar5 * 8) = *param_2;
    }
    lVar7 = param_1[0xb];
    plVar15 = (longlong *)(lVar7 + 0x260);
    local_f0 = 0;
    uVar11 = *(uint *)(lVar7 + 0x288);
    puVar18 = (uint *)(lVar7 + 0x270);
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar11 != 0) {
      puVar21 = *(uint **)(lVar7 + 0x280);
      if (*(uint **)(lVar7 + 0x280) == (uint *)0x0) {
        puVar21 = puVar18;
      }
      uVar1 = *puVar21;
      plVar17 = plVar16;
      plVar10 = plVar16;
      while (uVar1 == 0) {
        iVar5 = (int)plVar17;
        uStack_d8 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)uStack_d8;
        local_f0 = iVar5 + 1;
        plVar17 = (longlong *)(ulonglong)local_f0;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1425d5171;
        uVar1 = puVar21[(longlong)iVar5 + 1];
      }
      uStack_ec = -uVar1 & uVar1;
      iVar5 = 0x1f;
      if (uStack_ec != 0) {
        for (; uStack_ec >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_ec == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_dc = (uStack_d8 - iVar5) + 0x1f;
      if ((int)uVar11 < (int)uStack_dc) {
LAB_1425d5171:
        uStack_dc = uVar11;
      }
    }
    uVar1 = *(uint *)(lVar7 + 0x288);
    uStack_b0 = CONCAT44(uStack_dc,0xffffffff);
    uStack_70 = CONCAT44(uStack_ec,local_f0);
    local_res20[0] = -1 << ((byte)uVar1 & 0x1f);
    uVar20 = uVar1 & 0xffffffe0;
    auStack_60._8_8_ = CONCAT44(uStack_d4,uStack_d8);
    auStack_60._0_8_ = uStack_b0;
    local_a8._0_8_ = CONCAT44(uStack_d4,uStack_d8);
    uStack_c0 = CONCAT44(uStack_ec,local_f0);
    puStack_e8 = puVar18;
    local_e0 = local_res20[0];
    uStack_dc = uVar1;
    local_c8 = plVar15;
    local_b8 = puVar18;
    local_78 = plVar15;
    puStack_68 = puVar18;
    if (uVar1 != uVar11) {
      puVar21 = *(uint **)(lVar7 + 0x280);
      if (*(uint **)(lVar7 + 0x280) == (uint *)0x0) {
        puVar21 = puVar18;
      }
      uVar13 = puVar21[(int)uVar1 >> 5] & local_res20[0];
      iVar5 = (int)uVar1 >> 5;
      while (uVar13 == 0) {
        uVar20 = uVar20 + 0x20;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1425d5243;
        uVar13 = puVar21[(longlong)iVar5 + 1];
        local_e0 = 0xffffffff;
        iVar5 = iVar5 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar5 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_dc = (uVar20 - iVar5) + 0x1f;
      uVar1 = uStack_dc;
      if ((int)uVar11 < (int)uStack_dc) {
LAB_1425d5243:
        uStack_dc = uVar11;
        uVar1 = uVar11;
      }
    }
    while( true ) {
      lVar7 = local_d0;
      if (((uStack_b0._4_4_ == uVar1) && (local_b8 == puVar18)) && (local_c8 == plVar15)) break;
      lVar7 = *(longlong *)(*local_c8 + 8 + (longlong)(int)uStack_b0._4_4_ * 0x18);
      if (*(longlong *)(lVar7 + 0x30) == *param_2) {
        plVar17 = (longlong *)param_1[0x2ca];
        if (plVar17 == (longlong *)0x0) {
          FUN_140ac3dd0(param_1 + 0x2cb,local_res20,lVar7 + 0x1c,0);
        }
        else {
          (**(code **)(*plVar17 + 0x290))(plVar17,lVar7);
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    }
    plVar15 = plVar16;
    if (local_d0 != 0) {
      local_f8 = (uint *)0x0;
      uVar8 = FUN_142a2f930();
      plVar15 = (longlong *)FUN_1417a3f20(lVar7,uVar8,0);
      if ((plVar15 != (longlong *)0x0) && (lVar7 = plVar15[6], lVar7 != 0)) {
        plVar17 = *(longlong **)(lVar7 + 0xa0);
        uVar8 = *(undefined8 *)(param_1[0xb] + 0x120);
        uVar2 = *(undefined8 *)(param_1[0xb] + 0x528);
        plVar10 = (longlong *)((longlong)*(int *)(lVar7 + 0xa8) & 0x1fffffffffffffff);
        if (plVar17 + *(int *)(lVar7 + 0xa8) < plVar17) {
          plVar10 = plVar16;
        }
        if (plVar10 != (longlong *)0x0) {
          do {
            lVar7 = *plVar17;
            if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x92) & 0x40) != 0)) &&
               (*(char *)(lVar7 + 0x129) == '\x02')) {
              FNetworkObjectList::MarkActive(uVar2,lVar7,param_1,uVar8);
            }
            plVar17 = plVar17 + 1;
            plVar16 = (longlong *)((longlong)plVar16 + 1);
          } while (plVar16 != plVar10);
        }
      }
    }
    plVar16 = (longlong *)param_1[0x2ca];
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x2a8))(plVar16,*param_2,plVar15);
    }
  }
  else {
    (**(code **)(*param_1 + 0x2f8))(param_1);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
LAB_1425d56c9:
  FUN_1425d47e0(param_1);
  return;
}



// FUNCTION 1425d56f0 FUN_1425d56f0 body=274 status=ok
// SIG undefined FUN_1425d56f0(void)

void FUN_1425d56f0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  
  lVar1 = param_1[0xa7];
  cVar2 = (**(code **)(*param_1 + 0x368))();
  if (cVar2 == '\0') {
    if (param_1[0x12] == 0) goto LAB_1425d57d5;
    fVar9 = (float)((double)*(float *)(param_1 + 0x2e) - *(double *)(param_1[0x12] + 0x1e8));
    uVar7 = (uint)(*(float *)(param_1 + 0x10) <= fVar9 && fVar9 != *(float *)(param_1 + 0x10));
  }
  else {
    uVar4 = 0;
    uVar7 = 0;
    plVar3 = (longlong *)param_1[0x13];
    uVar8 = (longlong)(int)param_1[0x14] & 0x1fffffffffffffff;
    if (plVar3 + (int)param_1[0x14] < plVar3) {
      uVar8 = uVar4;
    }
    uVar5 = uVar4;
    uVar6 = uVar4;
    if (uVar8 != 0) {
      do {
        if (*plVar3 != 0) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          fVar9 = (float)((double)*(float *)(param_1 + 0x2e) - *(double *)(*plVar3 + 0x1e8));
          if (*(float *)(param_1 + 0x10) <= fVar9 && fVar9 != *(float *)(param_1 + 0x10)) {
            uVar5 = (ulonglong)((int)uVar5 + 1);
          }
        }
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar8);
      if ((1 < (int)uVar6) && ((int)uVar6 == (int)uVar5)) {
        uVar7 = 1;
      }
    }
  }
  *(uint *)(param_1 + 0xa7) = uVar7;
LAB_1425d57d5:
  if ((int)lVar1 != (int)param_1[0xa7]) {
    FUN_1425b4010(DAT_146b17150,param_1[0x1a],param_1);
  }
  return;
}



// FUNCTION 1425d5810 FUN_1425d5810 body=232 status=ok
// SIG undefined FUN_1425d5810(void)

void FUN_1425d5810(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  longlong local_28 [4];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar2 = FUN_1428cf800();
    if (iVar2 != 1) {
      *(undefined1 *)(param_1 + 0xe8) = 1;
      UWorld::SetMaterialParameterCollectionInstanceNeedsUpdate(*(undefined8 *)(param_1 + 0x38));
      if (DAT_146533de4 == 0) {
        if ((*(char *)(param_1 + 0xe8) != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
          local_28[0] = 0;
          local_28[1] = 0;
          UMaterialParameterCollectionInstance::GetParameterData(param_1,local_28);
          lVar1 = *(longlong *)(param_1 + 0x30);
          if (lVar1 == 0) {
            local_28[2] = 0;
            local_28[3] = 0;
          }
          else {
            local_28[2] = *(undefined8 *)(lVar1 + 0x28);
            local_28[3] = *(undefined8 *)(lVar1 + 0x30);
          }
          local_res8 = *(undefined8 *)(param_1 + 0x18);
          FUN_1425bebe0(*(undefined8 *)(param_1 + 0xe0),local_28 + 2,local_28,&local_res8);
          FUN_1428dba00(*(undefined8 *)(param_1 + 0x38),0,0);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
        }
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1425d5900 FUN_1425d5900 body=575 status=ok
// SIG undefined FUN_1425d5900(void)

void FUN_1425d5900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint local_res8;
  ulonglong local_res10;
  
  if ((((*(longlong *)(param_1 + 0x90) == 0) && (iVar1 = *(int *)(param_1 + 0xa0), iVar1 != 0)) &&
      (*(char *)(param_1 + 0x1f8) != '\0')) && ((*(char *)(param_1 + 0x1f9) == '\0' && (2 < iVar1)))
     ) {
    uVar6 = 0;
    local_res8 = 0;
    local_res10 = 0;
    uVar8 = uVar6;
    uVar5 = uVar6;
    uVar9 = uVar6;
    uVar10 = uVar6;
    uVar12 = uVar6;
    if (0 < iVar1) {
      do {
        lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x98));
        if ((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0x30), plVar3 != (longlong *)0x0)) {
          uVar5 = (**(code **)(*plVar3 + 0x148))(plVar3);
          if ((uVar5 != 0) &&
             ((fVar13 = *(float *)(uVar5 + 0x790) - *(float *)((longlong)plVar3 + 0xd4),
              *(float *)(param_1 + 0x214) <= fVar13 && fVar13 != *(float *)(param_1 + 0x214) &&
              (cVar4 = FUN_1407cd900(plVar3), cVar4 == '\0')))) {
            if (local_res10 == 0) {
              local_res10 = uVar5;
            }
            fVar13 = *(float *)(param_1 + 0x170) - *(float *)(lVar2 + 0x218);
            uVar11 = (uint)uVar9 + 1;
            if ((double)*(float *)(param_1 + 0x170) - *(double *)(lVar2 + 0x1e8) <=
                (double)*(float *)(param_1 + 0x1fc)) {
              uVar11 = (uint)uVar9;
            }
            uVar9 = (ulonglong)uVar11;
            uVar11 = (uint)uVar8 + 1;
            if (fVar13 < *(float *)(param_1 + 0x200) || fVar13 == *(float *)(param_1 + 0x200)) {
              uVar11 = (uint)uVar8;
            }
            uVar8 = (ulonglong)uVar11;
            if (plVar3[0x8c] != 0) {
              uVar6 = (ulonglong)local_res8;
              uVar5 = local_res10;
              if ((float)*(int *)(param_1 + 0x204) < *(float *)(plVar3[0x8c] + 0x498)) {
                local_res8 = local_res8 + 1;
                uVar6 = (ulonglong)local_res8;
              }
              goto LAB_1425d5a82;
            }
          }
          uVar6 = (ulonglong)local_res8;
          uVar5 = local_res10;
        }
LAB_1425d5a82:
        uVar11 = (int)uVar12 + 1;
        uVar10 = uVar10 + 8;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_1 + 0xa0));
      if ((uVar5 != 0) && (plVar3 = *(longlong **)(uVar5 + 0x58), plVar3 != (longlong *)0x0)) {
        fVar13 = 1.0 / (float)*(int *)(param_1 + 0xa0);
        fVar14 = (float)(int)uVar9 * fVar13;
        if (fVar14 < *(float *)(param_1 + 0x208) || fVar14 == *(float *)(param_1 + 0x208)) {
          fVar14 = (float)(int)uVar6 * fVar13;
          if (fVar14 < *(float *)(param_1 + 0x210) || fVar14 == *(float *)(param_1 + 0x210)) {
            fVar13 = (float)(int)uVar8 * fVar13;
            if (fVar13 < *(float *)(param_1 + 0x20c) || fVar13 == *(float *)(param_1 + 0x20c)) {
              return;
            }
            uVar7 = 1;
          }
          else {
            uVar7 = 2;
          }
        }
        else {
          uVar7 = 0;
        }
        *(undefined1 *)(param_1 + 0x1f9) = 1;
        (**(code **)(*plVar3 + 0x728))(plVar3,uVar7);
      }
    }
  }
  return;
}



// FUNCTION 1425d5b40 FUN_1425d5b40 body=180 status=ok
// SIG undefined FUN_1425d5b40(void)

void FUN_1425d5b40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FRenderCommandFence::Wait(param_1 + 0x308,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_14290cfd0();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
  }
  FUN_1428216e0(param_1 + 0xf0,param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0xe0,0);
  }
  FUN_141edede0(param_1 + 0x308,0);
  return;
}



// FUNCTION 1425d5c00 FUN_1425d5c00 body=1590 status=ok
// SIG undefined FUN_1425d5c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425d5c00(longlong *param_1)

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
  float fVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined4 local_210;
  undefined4 *local_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined8 local_1e8;
  float local_1e0;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  undefined1 local_1c8 [4];
  undefined8 local_1c4;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a0;
  float local_198;
  undefined4 local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  byte local_158 [12];
  float local_14c;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar11 = (**(code **)(*param_1 + 0x6e8))();
  fVar10 = DAT_1468b5d98;
  uVar14 = _DAT_1468b5d90;
  if ((cVar11 == '\0') || ((param_1[0x8d] == 0 && (param_1[0x8e] == 0)))) goto LAB_1425d61d2;
  lVar1 = param_1[0x2d];
  if (lVar1 == 0) {
    local_1e8 = _DAT_1468b5d90;
    puVar16 = &local_1e8;
    local_1e0 = DAT_1468b5d98;
  }
  else {
    puVar16 = &local_1b8;
    local_1b0 = *(float *)(lVar1 + 0x228);
    local_1b8 = *(undefined8 *)(lVar1 + 0x220);
  }
  local_1a0 = *puVar16;
  lVar2 = param_1[0x8c];
  local_198 = *(float *)(puVar16 + 1);
  bVar17 = 1;
  auVar27._0_4_ = *(uint *)(lVar2 + 0x230) & _DAT_146aff450;
  auVar27._4_4_ = *(uint *)(lVar2 + 0x234) & uRam0000000146aff454;
  auVar27._8_4_ = *(uint *)(lVar2 + 0x238) & uRam0000000146aff458;
  auVar27._12_4_ = *(uint *)(lVar2 + 0x23c) & uRam0000000146aff45c;
  auVar28._4_4_ = auVar27._8_4_;
  auVar28._0_4_ = auVar27._4_4_;
  auVar28._8_4_ = auVar27._0_4_;
  auVar28._12_4_ = auVar27._12_4_;
  auVar28 = minps(auVar27,auVar28);
  auVar7._4_4_ = auVar27._0_4_;
  auVar7._0_4_ = auVar27._8_4_;
  auVar7._8_4_ = auVar27._4_4_;
  auVar7._12_4_ = auVar27._12_4_;
  auVar28 = minps(auVar28,auVar7);
  fVar26 = auVar28._0_4_ * *(float *)(lVar2 + 0x714);
  _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
  local_14c = 1.0;
  if (lVar1 == 0) {
    local_1e8 = uVar14;
    pfVar13 = (float *)&local_1e8;
    local_1e0 = fVar10;
  }
  else {
    pfVar13 = &local_1d8;
    local_1d8 = *(float *)(lVar1 + 0x220);
    local_1d0 = (float)*(undefined4 *)(lVar1 + 0x228);
    fStack_1d4 = (float)*(undefined4 *)(lVar1 + 0x224);
  }
  local_1b8 = *(undefined8 *)pfVar13;
  local_1b0 = pfVar13[2];
  auVar24._0_4_ = *(uint *)(lVar2 + 0x230) & _DAT_146aff450;
  auVar24._4_4_ = *(uint *)(lVar2 + 0x234) & uRam0000000146aff454;
  auVar24._8_4_ = *(uint *)(lVar2 + 0x238) & uRam0000000146aff458;
  auVar24._12_4_ = *(uint *)(lVar2 + 0x23c) & uRam0000000146aff45c;
  auVar3._4_4_ = auVar24._8_4_;
  auVar3._0_4_ = auVar24._4_4_;
  auVar3._8_4_ = auVar24._0_4_;
  auVar3._12_4_ = auVar24._12_4_;
  auVar28 = minps(auVar24,auVar3);
  auVar8._4_4_ = auVar24._0_4_;
  auVar8._0_4_ = auVar24._8_4_;
  auVar8._8_4_ = auVar24._4_4_;
  auVar8._12_4_ = auVar24._12_4_;
  auVar28 = minps(auVar28,auVar8);
  if (lVar1 == 0) {
    local_1e8 = uVar14;
    pfVar13 = (float *)&local_1e8;
    local_1e0 = fVar10;
  }
  else {
    pfVar13 = &local_1d8;
    local_1d8 = *(float *)(lVar1 + 0x220);
    local_1d0 = (float)*(undefined4 *)(lVar1 + 0x228);
    fStack_1d4 = (float)*(undefined4 *)(lVar1 + 0x224);
  }
  local_1e8 = *(undefined8 *)pfVar13;
  local_1e0 = pfVar13[2];
  local_1d8 = (float)local_1e8;
  fStack_1d4 = (float)((ulonglong)local_1e8 >> 0x20);
  local_1d0 = local_1e0 - auVar28._0_4_ * *(float *)(lVar2 + 0x710) * 4.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b04768) && (_Init_thread_header(&DAT_146b04768), DAT_146b04768 == -1))
  {
    FName::FName(&DAT_146b04760,"NavObjectBase_Validate",1);
    _Init_thread_footer(&DAT_146b04768);
  }
  local_190 = 1;
  local_184 = 0x3f800000;
  local_218 = param_1;
  local_18c = fVar26;
  local_188 = fVar26;
  uVar14 = FUN_1422ffb20(local_c8,DAT_146b04760,local_1c8,0);
  uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1f8 = &DAT_146aefe68;
  local_208 = &local_190;
  local_210 = 2;
  local_218 = (longlong *)&DAT_1464aa810;
  local_200 = uVar14;
  UWorld::SweepSingleByChannel(uVar15,local_158,&local_1b8,&local_1d8);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if ((local_158[0] & 1) != 0) {
    lVar1 = param_1[0x8c];
    lVar2 = param_1[0x2d];
    uVar20 = *(uint *)(lVar1 + 0x230) & _DAT_146aff450;
    uVar21 = *(uint *)(lVar1 + 0x234) & uRam0000000146aff454;
    uVar22 = *(uint *)(lVar1 + 0x238) & uRam0000000146aff458;
    uVar23 = *(uint *)(lVar1 + 0x23c) & uRam0000000146aff45c;
    auVar25._4_4_ = uVar21;
    auVar25._0_4_ = uVar20;
    auVar25._8_4_ = uVar22;
    auVar25._12_4_ = uVar23;
    auVar4._4_4_ = uVar22;
    auVar4._0_4_ = uVar21;
    auVar4._8_4_ = uVar20;
    auVar4._12_4_ = uVar23;
    auVar28 = minps(auVar25,auVar4);
    auVar9._4_4_ = uVar20;
    auVar9._0_4_ = uVar22;
    auVar9._8_4_ = uVar21;
    auVar9._12_4_ = uVar23;
    auVar28 = minps(auVar28,auVar9);
    local_178 = ((local_1d0 - local_1b0) * local_14c + local_1b0 +
                auVar28._0_4_ * *(float *)(lVar1 + 0x710)) - 2.0;
    local_180 = (local_1d8 - (float)local_1b8) * local_14c + (float)local_1b8;
    local_17c = (fStack_1d4 - local_1b8._4_4_) * local_14c + local_1b8._4_4_;
    if (lVar2 == 0) {
      uVar18 = (undefined4)DAT_1468b5da0;
      uVar19 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_1e0 = DAT_1468b5da8;
    }
    else {
      local_168 = *(float *)(lVar2 + 0x210);
      fStack_164 = *(float *)(lVar2 + 0x214);
      fStack_160 = *(float *)(lVar2 + 0x218);
      fStack_15c = *(float *)(lVar2 + 0x21c);
      auVar5._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_164);
      auVar5._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_168);
      auVar5._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_160);
      auVar5._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_15c);
      iVar12 = movmskps((int)lVar1,auVar5);
      if (iVar12 != 0) {
        *(float *)(lVar2 + 0x250) = local_168;
        *(float *)(lVar2 + 0x254) = fStack_164;
        *(float *)(lVar2 + 600) = fStack_160;
        *(float *)(lVar2 + 0x25c) = fStack_15c;
        puVar16 = (undefined8 *)FQuat::Rotator(&local_168,&local_190);
        *(undefined8 *)(lVar2 + 0x260) = *puVar16;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar16 + 1);
      }
      uVar18 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
      local_1e0 = *(float *)(lVar2 + 0x268);
    }
    local_1e8 = CONCAT44(uVar19,uVar18);
    local_218 = (longlong *)CONCAT71(local_218._1_7_,1);
    local_1c4 = local_1e8;
    local_1bc = local_1e0;
    (**(code **)(*param_1 + 0x500))(param_1,&local_180,&local_1c4,0);
    lVar1 = param_1[0x2d];
    if (lVar1 == 0) {
      local_1bc = DAT_1468b5d98;
      puVar16 = &local_1c4;
      local_1c4 = _DAT_1468b5d90;
    }
    else {
      puVar16 = &local_1e8;
      local_1e0 = (float)*(undefined4 *)(lVar1 + 0x228);
      local_1e8 = *(undefined8 *)(lVar1 + 0x220);
    }
    uVar14 = *puVar16;
    local_1e0 = *(float *)(puVar16 + 1);
    if ((float)uVar14 == (float)local_1a0) {
      local_1e8._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
      if ((local_1e8._4_4_ != local_1a0._4_4_) || (local_198 < local_1e0)) goto LAB_1425d60e5;
      bVar17 = 1;
    }
    else {
LAB_1425d60e5:
      bVar17 = 0;
    }
    if (lVar1 == 0) {
      uVar18 = (undefined4)DAT_1468b5da0;
      uVar19 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_1e0 = DAT_1468b5da8;
    }
    else {
      local_168 = *(float *)(lVar1 + 0x210);
      fStack_164 = *(float *)(lVar1 + 0x214);
      fStack_160 = *(float *)(lVar1 + 0x218);
      fStack_15c = *(float *)(lVar1 + 0x21c);
      auVar6._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_164);
      auVar6._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_168);
      auVar6._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_160);
      auVar6._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_15c);
      iVar12 = movmskps(local_1e0,auVar6);
      if (iVar12 != 0) {
        *(float *)(lVar1 + 0x250) = local_168;
        *(float *)(lVar1 + 0x254) = fStack_164;
        *(float *)(lVar1 + 600) = fStack_160;
        *(float *)(lVar1 + 0x25c) = fStack_15c;
        local_1e8 = uVar14;
        puVar16 = (undefined8 *)FQuat::Rotator(&local_168,&local_190);
        *(undefined8 *)(lVar1 + 0x260) = *puVar16;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar16 + 1);
      }
      uVar18 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_1e0 = *(float *)(lVar1 + 0x268);
    }
    local_1e8 = CONCAT44(uVar19,uVar18);
    local_218 = (longlong *)CONCAT71(local_218._1_7_,1);
    local_1c4 = local_1e8;
    local_1bc = local_1e0;
    (**(code **)(*param_1 + 0x500))(param_1,&local_1a0,&local_1e8,0);
  }
  if (param_1[0x8d] != 0) {
    FUN_142398ec0(param_1[0x8d],bVar17,1);
  }
  if (param_1[0x8e] != 0) {
    FUN_142398ec0(param_1[0x8e],bVar17 ^ 1,1);
  }
LAB_1425d61d2:
  FUN_142236cd0(param_1);
  return;
}



// FUNCTION 1425d6240 FUN_1425d6240 body=149 status=ok
// SIG undefined FUN_1425d6240(void)

void FUN_1425d6240(longlong param_1)

{
  if (*(char *)(param_1 + 0x4d8) < '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x37a,
               L"UNetConnection::ValidateSendBuffer: Out.IsError() == true. NumBits: %i, NumBytes: %i, MaxBits: %i"
               ,*(longlong *)(param_1 + 0x550),*(longlong *)(param_1 + 0x550) + 7 >> 3,
               *(undefined8 *)(param_1 + 0x558));
    FDebug::AssertFailed
              (&DAT_14510c78e,"Unknown",0x37a,
               L"UNetConnection::ValidateSendBuffer: Out.IsError() == true. NumBits: %i, NumBytes: %i, MaxBits: %i"
               ,*(longlong *)(param_1 + 0x550),*(longlong *)(param_1 + 0x550) + 7 >> 3,
               *(undefined8 *)(param_1 + 0x558));
  }
  return;
}



// FUNCTION 1425d62e0 FUN_1425d62e0 body=461 status=ok
// SIG undefined FUN_1425d62e0(void)

undefined4
FUN_1425d62e0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             int param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (**(code **)(*param_1 + 0x2a8))();
  lVar4 = param_1[0xaa];
  iVar3 = 0x28;
  iVar2 = 0x28;
  if (0 < lVar4) {
    iVar2 = 1;
  }
  if (((int)param_1[0xab] - iVar2) - (int)lVar4 < param_3 + param_5) {
    (**(code **)(*param_1 + 0x2c8))(param_1,0);
    lVar4 = param_1[0xaa];
  }
  plVar1 = param_1 + 0x96;
  local_38 = CONCAT31(local_38._1_3_,*(byte *)(param_1 + 0x9b) >> 7);
  uStack_30 = (undefined4)lVar4;
  uStack_2c = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_1 + 0x44) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x224) = uStack_34;
  *(undefined4 *)(param_1 + 0x45) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uStack_2c;
  if ((lVar4 == 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0)) {
    if (*(char *)((longlong)param_1 + 0x193c) != '\0') {
      (**(code **)(*plVar1 + 0x50))(plVar1,(longlong)param_1 + 0x193d,3);
    }
    FBitWriter::WriteIntWrapped(plVar1,(int)param_1[0x2ae],0x4000);
    (**(code **)(*param_1 + 0x2a8))(param_1);
    iVar2 = (int)param_1[0x23] + (int)param_1[0xaa];
    *(int *)(param_1 + 0x23) = iVar2;
    if (*(char *)((longlong)param_1 + 0x193c) != '\0') {
      *(int *)(param_1 + 0x23) = iVar2 + -0x18;
    }
  }
  if (param_3 != 0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,(longlong)param_3);
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
  if (param_5 != 0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_4,(longlong)param_5);
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
  lVar4 = param_1[0x2ae];
  if (param_6 == 1) {
    *(int *)((longlong)param_1 + 0x11c) = *(int *)((longlong)param_1 + 0x11c) + param_3 + param_5;
  }
  else if (param_6 == 2) {
    *(int *)(param_1 + 0x24) = (int)param_1[0x24] + param_3 + param_5;
  }
  if (0 < param_1[0xaa]) {
    iVar3 = 1;
  }
  if ((int)param_1[0xab] - iVar3 == (int)param_1[0xaa]) {
    (**(code **)(*param_1 + 0x2c8))(param_1,0);
  }
  return (int)lVar4;
}



// FUNCTION 1425d64b0 Z_Construct_UClass_UModel body=248 status=ok
// SIG undefined Z_Construct_UClass_UModel(void)

longlong Z_Construct_UClass_UModel(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  lVar2 = DAT_146b04730;
  if (DAT_146b04730 == 0) {
    Z_Construct_UClass_UObject();
    lVar2 = USkeletalMesh::GetPrivateStaticClass();
    UObjectForceRegistration(lVar2);
    *(code **)(lVar2 + 0xa8) = UModel::AddReferencedObjects;
    FName::FName(local_res8,L"Surfs",1);
    uVar1 = UClass::EmitStructArrayBegin(lVar2,0x68,local_res8);
    FName::FName(local_res10,L"Material",1);
    UClass::EmitObjectReference(lVar2,0,local_res10,1);
    FName::FName(local_res18,L"Actor",1);
    UClass::EmitObjectReference(lVar2,0x20,local_res18);
    FUN_141734b10(lVar2,uVar1);
    FUN_141726e60(lVar2,0);
  }
  DAT_146b04730 = lVar2;
  return lVar2;
}



// FUNCTION 1425d65b0 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FMeshParticleUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"SubImageSize";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"TexCoordWeightA";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"TexCoordWeightB";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x14;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"PrevTransformAvailable";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x18;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"DeltaSeconds";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x40000001c;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 1425d6810 Emplace<TTuple<unsigned___int64,bool>_const_&> body=416 status=ok
// SIG undefined Emplace<TTuple<unsigned___int64,bool>_const_&>(void)

int * TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<unsigned___int64,bool>_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar1 = *local_30;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar1) goto LAB_1425d68db;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_1425d68db:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_1425d6988;
    }
  }
  cVar6 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) * 0x17 + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1425d6988:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1425d69b0 Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&> body=330 status=ok
// SIG undefined Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>(void)

longlong TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
         ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
                   (longlong *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *local_20 = *param_2;
  local_20[1] = param_2[1];
  local_20[2] = *param_3;
  local_20[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = local_20[1];
    local_res10 = *local_20;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    if (local_res8[0] != -1) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x14),local_20,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1425d6ad4;
    }
  }
  cVar1 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    uVar3 = (*local_20 ^ local_20[1]) & (int)param_1[9] - 1U;
    local_20[4] = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[3] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         local_28[0];
  }
LAB_1425d6ad4:
  return *param_1 + (longlong)local_res8[0] * 0x14 + 8;
}



// FUNCTION 1425d6b00 FUN_1425d6b00 body=524 status=ok
// SIG undefined FUN_1425d6b00(void)

int * FUN_1425d6b00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *_Src;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  void *local_res10;
  int local_48 [2];
  undefined8 *local_40;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_48);
  _Src = local_40;
  *param_2 = local_48[0];
  *local_40 = *param_3;
  lVar4 = param_3[1];
  local_40[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
              (param_1,local_res8);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar6 = *(longlong **)(*param_1 + 8 + (longlong)local_res8[0] * 0x18);
      local_res10 = (void *)(*param_1 + (longlong)local_res8[0] * 0x18);
      iVar9 = local_res8[0];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        _Src = local_40;
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_40;
          iVar9 = local_res8[0];
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            _Src = local_40;
            iVar9 = local_res8[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(local_res10,_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_1425d6ce8;
    }
  }
  cVar5 = TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar9);
  if (cVar5 == '\0') {
    iVar9 = (int)(*(ulonglong *)*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1425d6ce8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1425d6d10 FUN_1425d6d10 body=570 status=ok
// SIG undefined FUN_1425d6d10(void)

int * FUN_1425d6d10(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *_Src;
  int iVar14;
  uint uVar15;
  bool local_res8;
  int local_res10 [2];
  int local_48 [2];
  undefined8 *local_40;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_48);
  _Src = local_40;
  uVar4 = *param_3;
  *param_2 = local_48[0];
  *local_40 = uVar4;
  puVar8 = (undefined8 *)operator_new(0x18);
  puVar9 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_DestroyObject_14512c240;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = uVar4;
    puVar9 = puVar8;
  }
  _Src[1] = puVar9;
  SharedPointerInternals::EnableSharedFromThis(_Src,uVar4,uVar4);
  local_res8 = false;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar14 != 1) {
    TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
              (param_1,local_res10,*(undefined8 *)*_Src);
    lVar13 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar5 = *param_1;
      plVar10 = *(longlong **)(lVar5 + 8 + lVar13 * 0x18);
      iVar14 = local_res10[0];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        _Src = local_40;
        if ((int)lVar6 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_40;
          iVar14 = local_res10[0];
          if (iVar3 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            _Src = local_40;
            iVar14 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + lVar13 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar14;
      goto LAB_1425d6f21;
    }
  }
  cVar7 = TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar14,0);
  if (cVar7 == '\0') {
    iVar14 = (int)(*(ulonglong *)*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
    uVar15 = -(uVar12 + iVar14) ^ uVar12 >> 0xd;
    uVar11 = (iVar14 - uVar12) - uVar15 ^ uVar15 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar15 ^ uVar15 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1425d6f21:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1425d6f50 FUN_1425d6f50 body=478 status=ok
// SIG undefined FUN_1425d6f50(void)

uint * FUN_1425d6f50(longlong *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar5 * 0x10);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar6 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar6 = *puVar6 | 1 << ((byte)uVar5 & 0x1f);
  puVar6 = (uint *)((longlong)(int)uVar5 * 0x10 + *param_1);
  *puVar6 = *param_3;
  bVar7 = false;
  puVar6[1] = param_3[1];
  puVar6[2] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res8 = *puVar6;
    uStackX_c = puVar6[1];
    local_res10 = *(undefined8 *)puVar6;
    TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8,&local_res10);
    uVar5 = local_res8;
    bVar7 = local_res8 != 0xffffffff;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)local_res8 * 0x10 + *param_1),puVar6,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_1425d710c;
    }
  }
  cVar3 = TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    uVar5 = (*puVar6 ^ puVar6[1]) & (int)param_1[9] - 1U;
    puVar6[3] = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar6[2] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1425d710c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1425d7130 Emplace<TKeyInitializer<FNetworkGUID_const_&>_> body=386 status=ok
// SIG undefined Emplace<TKeyInitializer<FNetworkGUID_const_&>_>(void)

int * TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FNetworkGUID_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  local_30[1] = 0;
  local_30[2] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == *local_30) goto LAB_1425d71ea;
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1425d71ea:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_1425d728a;
    }
  }
  cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1425d728a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1425d72c0 Emplace<TPairInitializer<int_&&,bool_&&>_> body=402 status=ok
// SIG undefined Emplace<TPairInitializer<int_&&,bool_&&>_>(void)

int * TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,bool_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (undefined1 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  local_30[2] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == *local_30) goto LAB_1425d738a;
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1425d738a:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_1425d742a;
    }
  }
  cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1425d742a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1425d7460 FUN_1425d7460 body=644 status=ok
// SIG undefined FUN_1425d7460(void)

int * FUN_1425d7460(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  plVar11 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (undefined4 *)param_3[1];
  lVar4 = *(longlong *)*param_3;
  *plVar11 = lVar4;
  *(undefined4 *)(plVar11 + 1) = *puVar3;
  *(undefined4 *)(plVar11 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x18) == lVar4) goto LAB_1425d75bc;
          iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1425d75bc:
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),plVar11,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar8,1);
      *param_2 = iVar7;
      goto LAB_1425d76bb;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_1404b4e10(param_1);
  }
LAB_1425d76bb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1425d76f0 FUN_1425d76f0 body=621 status=ok
// SIG undefined FUN_1425d76f0(void)

int * FUN_1425d76f0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar12 = 0xffffffff;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)local_res18[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar11 * 0x28);
  FString::FString(_Src,*local_res18);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar11 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      param_4 = local_res20;
      goto LAB_1425d793d;
    }
  }
  cVar6 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    iVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*_Src;
    }
    uVar8 = FUN_140438070(puVar10);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)_Src + 0x24) = uVar8;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar11;
  }
LAB_1425d793d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1425d7960 Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_> body=438 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_>(void)

int * TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar8 = false;
  puVar1 = (undefined1 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar2;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x18) == lVar2) goto LAB_1425d7a3b;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1425d7a3b:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar5;
      goto LAB_1425d7aee;
    }
  }
  cVar3 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_30 >> 0x20) * 0x17 + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1425d7aee:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1425d7b20 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::`2'::FCompareNetGUIDCount>_>_>_>_> body=349 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::`2'::FCompareNetGUIDCount>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::_2_::FCompareNetGUIDCount>_>_>_>_>
               (undefined8 *param_1,int param_2)

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
joined_r0x0001425d7b4a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4) <
              *(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 0x24)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(int *)((longlong)puVar9 + 4) < *(int *)((longlong)puVar10 + 4)) {
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
          goto joined_r0x0001425d7b4a;
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
            if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 4) <
                *(int *)((longlong)param_1 + (longlong)iVar1 * 0x10 + 0x24)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(int *)((longlong)puVar11 + 4) <= *(int *)((longlong)puVar10 + 4)) break;
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



// FUNCTION 1425d7c80 FUN_1425d7c80 body=465 status=ok
// SIG undefined FUN_1425d7c80(void)

void FUN_1425d7c80(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *_Dst;
  
  FUN_1426fb810(*param_2 + 0xe8,param_3,param_1);
  FUN_142723e40(*param_2,param_3,param_1);
  FUN_142723ec0(*param_2,param_3,param_1,0xffffffff);
  lVar5 = param_2[1];
  _Dst = (undefined1 *)(param_1 + 0xf0);
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0xf8) = lVar5;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x106) = 6;
  lVar5 = param_2[1];
  *(undefined1 *)(param_1 + 0x125) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0x118) = lVar5;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x124) = 8;
  *(undefined2 *)(param_1 + 0x126) = 7;
  lVar5 = param_2[1];
  *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0x108) = lVar5;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x114) = 4;
  *(undefined2 *)(param_1 + 0x116) = 6;
  lVar5 = param_2[1];
  *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0x128) = lVar5;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0xc;
  *(undefined2 *)(param_1 + 0x136) = 7;
  _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 4,2);
  param_2 = param_2 + 2;
  do {
    lVar5 = *param_2;
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x28) == '\0')) {
      uVar2 = FUN_141ee2f20(*_Dst);
      iVar1 = *(int *)(param_1 + 0xb0);
      lVar5 = (longlong)iVar1;
      *(int *)(param_1 + 0xb0) = iVar1 + 1;
      if (*(int *)(param_1 + 0xb4) < iVar1 + 1) {
        TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_1 + 0x88,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar3 = param_1 + 0x88;
      }
      *(undefined8 *)(lVar3 + lVar5 * 0x10) = uVar2;
      *(undefined4 *)(lVar3 + 8 + lVar5 * 0x10) = 0;
      *(undefined4 *)(lVar3 + 0xc + lVar5 * 0x10) = 0x80000;
    }
    else {
      FUN_142723a20(lVar5,uVar4,param_3,param_1);
    }
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 1;
    _Dst = _Dst + 1;
  } while (uVar4 < 2);
  return;
}



// FUNCTION 1425d7e60 FUN_1425d7e60 body=541 status=ok
// SIG undefined FUN_1425d7e60(void)

void FUN_1425d7e60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *_Dst;
  
  FUN_1426fb810(*param_2 + 0xe8,param_3,param_1);
  FUN_142723e40(*param_2,param_3,param_1);
  FUN_142723ec0(*param_2,param_3,param_1,0xffffffff);
  lVar5 = param_2[1];
  _Dst = (undefined1 *)(param_1 + 0xf0);
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0xf8) = lVar5;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x106) = 6;
  lVar5 = param_2[1];
  *(undefined1 *)(param_1 + 0x125) = *(undefined1 *)(lVar5 + 0x58);
  *(longlong *)(param_1 + 0x118) = lVar5;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x124) = 4;
  *(undefined2 *)(param_1 + 0x126) = 7;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_1 + 0x104);
  *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)(param_1 + 0x105);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_1 + 0x106);
  *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_1 + 0x107);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_1 + 0x124);
  *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(param_1 + 0x125);
  *(undefined1 *)(param_1 + 0x136) = *(undefined1 *)(param_1 + 0x126);
  *(undefined1 *)(param_1 + 0x137) = *(undefined1 *)(param_1 + 0x127);
  _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 4,2);
  param_2 = param_2 + 2;
  do {
    lVar5 = *param_2;
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x28) == '\0')) {
      uVar2 = FUN_141ee2f20(*_Dst);
      iVar1 = *(int *)(param_1 + 0xb0);
      lVar5 = (longlong)iVar1;
      *(int *)(param_1 + 0xb0) = iVar1 + 1;
      if (*(int *)(param_1 + 0xb4) < iVar1 + 1) {
        TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_1 + 0x88,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar3 = param_1 + 0x88;
      }
      *(undefined8 *)(lVar3 + lVar5 * 0x10) = uVar2;
      *(undefined4 *)(lVar3 + 8 + lVar5 * 0x10) = 0;
      *(undefined4 *)(lVar3 + 0xc + lVar5 * 0x10) = 0x80000;
    }
    else {
      FUN_142723a20(lVar5,uVar4,param_3,param_1);
    }
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 1;
    _Dst = _Dst + 1;
  } while (uVar4 < 2);
  return;
}



// FUNCTION 1425d8080 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::`2'::FCompareNetGUIDCount>_>_>_>_> body=637 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::`2'::FCompareNetGUIDCount>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::_2_::FCompareNetGUIDCount>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_318 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar11 = &local_328;
    do {
      puVar16 = (undefined8 *)*plVar11;
      puVar14 = (undefined8 *)plVar11[1];
      lVar2 = plVar11[2];
      local_338._0_4_ = (int)lVar2;
      lVar9 = ((longlong)puVar14 - (longlong)puVar16 >> 4) + 1;
      puVar15 = puVar16;
      if ((int)local_338 != 0) {
LAB_1425d8150:
        if (8 < lVar9) {
          puVar16 = puVar15 + (lVar9 / 2) * 2;
          if (puVar16 != puVar15) {
            uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar4 = *(undefined4 *)(puVar15 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
            *(undefined4 *)(puVar16 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
          }
          puVar12 = puVar14 + 2;
          puVar16 = puVar15;
LAB_1425d8186:
          puVar10 = puVar16;
          puVar16 = puVar10 + 2;
          if (puVar16 <= puVar14) goto code_r0x0001425d818f;
          goto LAB_1425d81a0;
        }
        for (; puVar16 = puVar15, puVar12 = puVar15, puVar15 < puVar14; puVar14 = puVar14 + -2) {
          while (puVar10 = puVar16, puVar16 = puVar12 + 2, puVar16 <= puVar14) {
            piVar1 = (int *)((longlong)puVar12 + 0x14);
            puVar12 = puVar16;
            if (*(int *)((longlong)puVar10 + 4) <= *piVar1) {
              puVar16 = puVar10;
            }
          }
          if (puVar10 != puVar14) {
            uVar8 = puVar14[1];
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            *puVar10 = *puVar14;
            puVar10[1] = uVar8;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
          }
        }
        goto LAB_1425d826b;
      }
LAB_1425d825c:
      local_338 = lVar2;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::_2_::FCompareNetGUIDCount>_>_>_>_>
                (puVar16,lVar9,param_3,param_4);
LAB_1425d826b:
      plVar11 = plVar11 + -3;
    } while (&local_328 <= plVar11);
  }
  return;
code_r0x0001425d818f:
  if (*(int *)((longlong)puVar15 + 4) <= *(int *)((longlong)puVar10 + 0x14)) goto LAB_1425d8186;
LAB_1425d81a0:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -2;
    if (puVar12 <= puVar15) break;
  } while (*(int *)((longlong)puVar13 + -0xc) <= *(int *)((longlong)puVar15 + 4));
  if (puVar16 <= puVar12) {
    if (puVar16 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar4 = *(undefined4 *)(puVar13 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -4);
      uVar6 = *puVar16;
      uVar7 = puVar10[3];
      *(undefined4 *)puVar16 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      *puVar12 = uVar6;
      puVar13[-1] = uVar7;
    }
    goto LAB_1425d8186;
  }
  if (puVar15 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar4 = *(undefined4 *)(puVar13 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -4);
    uVar6 = *puVar15;
    uVar7 = puVar15[1];
    *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
    *(undefined4 *)(puVar15 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
    *puVar12 = uVar6;
    puVar13[-1] = uVar7;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar12 + (-0x10 - (longlong)puVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar14 - (longlong)puVar16 & 0xfffffffffffffff0U)) {
    if (puVar16 < puVar14) {
      *plVar11 = (longlong)puVar16;
      plVar11[1] = (longlong)puVar14;
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (puVar12 <= puVar15 + 2) goto LAB_1425d826b;
    puVar14 = puVar13 + -4;
    puVar16 = puVar15;
  }
  else {
    if (puVar15 + 2 < puVar12) {
      *plVar11 = (longlong)puVar15;
      plVar11[1] = (longlong)(puVar13 + -4);
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (puVar14 <= puVar16) goto LAB_1425d826b;
  }
  lVar9 = ((longlong)puVar14 - (longlong)puVar16 >> 4) + 1;
  puVar15 = puVar16;
  if ((int)local_338 == 0) goto LAB_1425d825c;
  goto LAB_1425d8150;
}



// FUNCTION 1425d8300 NewObject<UDistributionFloatConstant> body=146 status=ok
// SIG undefined NewObject<UDistributionFloatConstant>(void)

void NewObject<UDistributionFloatConstant>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UDistributionFloatConstant::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1425d83a0 NewObject<UDistributionVectorConstant> body=146 status=ok
// SIG undefined NewObject<UDistributionVectorConstant>(void)

void NewObject<UDistributionVectorConstant>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UDistributionVectorConstant::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1425d8440 NewObject<UDistributionVectorUniform> body=146 status=ok
// SIG undefined NewObject<UDistributionVectorUniform>(void)

void NewObject<UDistributionVectorUniform>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UDistributionVectorUniform::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1425d84e0 __Internal_AddUniqueDynamic<AEmitter> body=419 status=ok
// SIG undefined __Internal_AddUniqueDynamic<AEmitter>(void)

void TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UParticleSystemComponent_*>::
     __Internal_AddUniqueDynamic<AEmitter>
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_28;
  int local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_28,0);
  uVar8 = 0;
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_2);
  local_20 = param_4;
  if ((param_4 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_28), lVar3 != 0)) {
    UObject::FindFunction(lVar3,local_20);
  }
  piVar5 = (int *)*param_1;
  lVar3 = param_1[1];
  for (piVar6 = piVar5; piVar6 != piVar5 + (longlong)(int)lVar3 * 4; piVar6 = piVar6 + 4) {
    if ((((*piVar6 == local_28) && (piVar6[1] == local_24)) ||
        ((cVar2 = FWeakObjectPtr::IsValid(piVar6), cVar2 == '\0' &&
         (cVar2 = FWeakObjectPtr::IsValid(&local_28), cVar2 == '\0')))) &&
       (*(longlong *)(piVar6 + 2) == local_20)) {
      if ((int)((longlong)piVar6 - (longlong)piVar5 >> 4) != -1) goto LAB_1425d85e6;
      break;
    }
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  piVar5 = (int *)((longlong)iVar1 * 0x10 + *param_1);
  *piVar5 = local_28;
  piVar5[1] = local_24;
  *(longlong *)(piVar5 + 2) = local_20;
LAB_1425d85e6:
  iVar1 = (int)param_1[1];
  uVar9 = uVar8;
  if (0 < iVar1) {
    do {
      iVar7 = (int)uVar8;
      if (*(longlong *)(*param_1 + uVar9 + 8) == 0) {
LAB_1425d861d:
        iVar4 = (iVar1 - iVar7) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x10 + *param_1),
                     (void *)((longlong)(iVar1 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      else {
        lVar3 = FWeakObjectPtr::Get(*param_1 + uVar9,1);
        if (lVar3 == 0) {
          iVar1 = (int)param_1[1];
          goto LAB_1425d861d;
        }
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 0x10;
      }
      iVar1 = (int)param_1[1];
    } while ((int)uVar8 < iVar1);
  }
  return;
}



// FUNCTION 1425d8690 FUN_1425d8690 body=205 status=ok
// SIG undefined FUN_1425d8690(void)

undefined8 * FUN_1425d8690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145127a28;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ParticleSystemComponent0",1);
  uVar1 = *puVar2;
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  *(undefined4 *)(lVar4 + 0x794) = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 1425d8760 FUN_1425d8760 body=133 status=ok
// SIG undefined FUN_1425d8760(void)

undefined8 * FUN_1425d8760(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fe15b8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x2d] = lVar4;
  *(undefined1 *)(lVar4 + 0x24e) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  return param_1;
}



// FUNCTION 1425d87f0 FUN_1425d87f0 body=95 status=ok
// SIG undefined FUN_1425d87f0(void)

undefined8 * FUN_1425d87f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1426d3840();
  *param_1 = &PTR_FUN_1451295f8;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 1;
  uVar1 = UDamageType::GetPrivateStaticClass();
  param_1[0x95] = uVar1;
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 1;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425d8850 FNetGUIDCache body=462 status=ok
// SIG undefined FNetGUIDCache(void)

undefined8 * FNetGUIDCache::FNetGUIDCache(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = param_2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1425d8a20 FOpusAudioInfo body=41 status=ok
// SIG undefined FOpusAudioInfo(void)

undefined8 * FOpusAudioInfo::FOpusAudioInfo(undefined8 *param_1)

{
  IStreamedCompressedInfo::IStreamedCompressedInfo();
  param_1[0xd] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145128d78;
  return param_1;
}



// FUNCTION 1425d8a50 FUN_1425d8a50 body=33 status=ok
// SIG undefined FUN_1425d8a50(void)

undefined8 * FUN_1425d8a50(undefined8 *param_1)

{
  FUN_1421e0900();
  *param_1 = &PTR_FUN_145129308;
  return param_1;
}



// FUNCTION 1425d8a80 UNetworkSettings body=79 status=ok
// SIG undefined UNetworkSettings(void)

undefined8 * UNetworkSettings::UNetworkSettings(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x800;
  *param_1 = &PTR_FUN_145128128;
  *(undefined4 *)(param_1 + 8) = 0xffff;
  FName::FName(local_res8,L"Network",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 1425d8ad0 UObjectLibrary body=116 status=ok
// SIG undefined UObjectLibrary(void)

undefined8 * UObjectLibrary::UObjectLibrary(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451283c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  return param_1;
}



// FUNCTION 1425d8b50 FUN_1425d8b50 body=40 status=ok
// SIG undefined FUN_1425d8b50(void)

undefined8 * FUN_1425d8b50(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x1000000;
  *param_1 = &PTR_FUN_144288f08;
  return param_1;
}



// FUNCTION 1425d8b80 FUN_1425d8b80 body=33 status=ok
// SIG undefined FUN_1425d8b80(void)

undefined8 * FUN_1425d8b80(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1451286a8;
  return param_1;
}



// FUNCTION 1425d8bb0 FUN_1425d8bb0 body=33 status=ok
// SIG undefined FUN_1425d8bb0(void)

undefined8 * FUN_1425d8bb0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145128ac8;
  return param_1;
}



// FUNCTION 1425d8be0 UPackageMapClient body=615 status=ok
// SIG undefined UPackageMapClient(void)

undefined8 * UPackageMapClient::UPackageMapClient(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_145128e18;
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
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  return param_1;
}



// FUNCTION 1425d8e50 FUN_1425d8e50 body=194 status=ok
// SIG undefined FUN_1425d8e50(void)

undefined8 * FUN_1425d8e50(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_14263d890();
  *param_1 = &PTR_FUN_14512a580;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) | 3;
  FName::FName(local_res8,L"BeamEmitter",1);
  param_1[7] = local_res8[0];
  return param_1;
}



// FUNCTION 1425d8f20 FUN_1425d8f20 body=88 status=ok
// SIG undefined FUN_1425d8f20(void)

undefined8 * FUN_1425d8f20(undefined8 *param_1)

{
  FUN_14263e3b0();
  *param_1 = &PTR_FUN_14512a900;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 3;
  return param_1;
}



// FUNCTION 1425d8f80 FUN_1425d8f80 body=33 status=ok
// SIG undefined FUN_1425d8f80(void)

undefined8 * FUN_1425d8f80(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_143fe39f8;
  return param_1;
}



// FUNCTION 1425d8fb0 FUN_1425d8fb0 body=146 status=ok
// SIG undefined FUN_1425d8fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425d8fb0(undefined8 *param_1)

{
  FUN_14263f290();
  *param_1 = &PTR_FUN_14512aca0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x20) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x104) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x10c) = DAT_1468b5d98;
  param_1[0x22] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  return param_1;
}



// FUNCTION 1425d9050 FUN_1425d9050 body=133 status=ok
// SIG undefined FUN_1425d9050(void)

undefined8 * FUN_1425d9050(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_14512b028;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return param_1;
}



// FUNCTION 1425d90e0 FUN_1425d90e0 body=116 status=ok
// SIG undefined FUN_1425d90e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425d90e0(undefined8 *param_1)

{
  FUN_1425d8f80();
  *param_1 = &PTR__scalar_deleting_destructor__14512b3b0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 1425d9160 FUN_1425d9160 body=121 status=ok
// SIG undefined FUN_1425d9160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425d9160(undefined8 *param_1)

{
  UParticleModuleTypeDataBase::UParticleModuleTypeDataBase();
  *param_1 = &PTR_FUN_145129f70;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_1468b5d98;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 1425d91e0 FUN_1425d91e0 body=428 status=ok
// SIG undefined FUN_1425d91e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425d91e0(undefined8 *param_1)

{
  FUN_142659b90();
  *param_1 = &PTR_FUN_14512b730;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1a) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xd4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_1468b5d98;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x25) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 300) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_1468b5d98;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x30) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x184) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x18c) = DAT_1468b5d98;
  param_1[0x32] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 1425d9390 FUN_1425d9390 body=251 status=ok
// SIG undefined FUN_1425d9390(void)

undefined8 * FUN_1425d9390(undefined8 *param_1)

{
  FUN_142659b90();
  *param_1 = &PTR_FUN_14512bab0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 1425d9490 FUN_1425d9490 body=69 status=ok
// SIG undefined FUN_1425d9490(void)

undefined8 * FUN_1425d9490(undefined8 *param_1)

{
  FUN_142659b90();
  *param_1 = &PTR__scalar_deleting_destructor__14512be30;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 1425d94e0 FUN_1425d94e0 body=33 status=ok
// SIG undefined FUN_1425d94e0(void)

undefined8 * FUN_1425d94e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fddd10;
  return param_1;
}



// FUNCTION 1425d9510 ~UPackageMap body=117 status=ok
// SIG undefined ~UPackageMap(void)

void UPackageMap::~UPackageMap(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1425d9590 FUN_1425d9590 body=410 status=ok
// SIG undefined FUN_1425d9590(void)

void FUN_1425d9590(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_145128e18;
  puVar3 = (undefined8 *)param_1[0x60];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[0x60] = 0;
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x66);
  if (param_1[100] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[99];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (param_1[0x5e] != 0) {
    FMemory::Free();
  }
  FPackageMapAckState::~FPackageMapAckState(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x29);
  iVar6 = *(int *)(param_1 + 0x28);
  plVar5 = (longlong *)param_1[0x27];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[0x27];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1c);
  UPackageMap::~UPackageMap(param_1);
  return;
}



// FUNCTION 1425d9730 FUN_1425d9730 body=443 status=ok
// SIG undefined FUN_1425d9730(void)

longlong * FUN_1425d9730(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  if (param_1 != param_2) {
    iVar7 = (int)param_1[1];
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_1 + 0x30);
      do {
        if (plVar8[1] != 0) {
          FMemory::Free();
        }
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
            piVar6 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar8 = plVar8 + 0xb;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      puVar10 = (undefined8 *)*param_1;
      if (iVar7 != 0) {
        piVar9 = (int *)(lVar5 + 0x40);
        piVar6 = (int *)(puVar10 + 8);
        do {
          *puVar10 = *(undefined8 *)(piVar9 + -0x10);
          *(undefined8 *)(piVar6 + -0xe) = *(undefined8 *)(piVar9 + -0xe);
          *(undefined8 *)(piVar6 + -0xc) = *(undefined8 *)(piVar9 + -0xc);
          *(undefined8 *)(piVar6 + -10) = *(undefined8 *)(piVar9 + -10);
          *(undefined8 *)(piVar6 + -8) = *(undefined8 *)(piVar9 + -8);
          *(undefined8 *)(piVar6 + -6) = *(undefined8 *)(piVar9 + -6);
          lVar5 = *(longlong *)(piVar9 + -4);
          *(longlong *)(piVar6 + -4) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          piVar6[-2] = 0;
          piVar6[-1] = 0;
          iVar3 = *piVar9;
          _Src = *(void **)(piVar9 + -2);
          *piVar6 = iVar3;
          if (iVar3 == 0) {
            piVar6[1] = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(piVar6 + -2,iVar3,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(piVar6 + -2),_Src,(longlong)iVar3 << 2);
          }
          puVar10 = puVar10 + 0xb;
          piVar6[2] = piVar9[2];
          piVar2 = piVar9 + 4;
          piVar9 = piVar9 + 0x16;
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)piVar2;
          piVar6 = piVar6 + 0x16;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1425d98f0 operator= body=373 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
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
  
  if (param_1 != param_2) {
    TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
              (param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_1425d99cd;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_1425d99cd:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_1425d6b00(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x18,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1425d9a70 FUN_1425d9a70 body=492 status=ok
// SIG undefined FUN_1425d9a70(void)

undefined8 * FUN_1425d9a70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1 + 1;
  *param_1 = *param_2;
  if (puVar5 != param_2 + 1) {
    plVar4 = (longlong *)*puVar5;
    for (iVar6 = *(int *)(param_1 + 2); iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    iVar6 = *(int *)(param_2 + 2);
    puVar7 = (undefined8 *)param_2[1];
    *(int *)(param_1 + 2) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar6);
      puVar5 = (undefined8 *)*puVar5;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        iVar1 = *(int *)(puVar7 + 1);
        pvVar2 = (void *)*puVar7;
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar5,iVar1,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar2,(longlong)iVar1 * 0xc);
        }
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  puVar5 = param_1 + 3;
  if (puVar5 != param_2 + 3) {
    iVar6 = *(int *)(param_2 + 4);
    pvVar2 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar2,(longlong)iVar6 << 4);
    }
  }
  puVar5 = param_1 + 5;
  if (puVar5 != param_2 + 5) {
    iVar6 = *(int *)(param_2 + 6);
    pvVar2 = (void *)param_2[5];
    *(int *)(param_1 + 6) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar2,(longlong)iVar6 << 3);
    }
  }
  puVar5 = param_1 + 7;
  if (puVar5 != param_2 + 7) {
    iVar6 = *(int *)(param_2 + 8);
    pvVar2 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar2,(longlong)iVar6 << 4);
    }
  }
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_2 + 100);
  return param_1;
}



// FUNCTION 1425d9c60 operator= body=1018 status=ok
// SIG undefined operator=(void)

longlong * FPackageMapAckState::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar8 = 0;
  local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68);
  if (param_1 != param_2) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar3 = (int)param_2[5];
    puStack_40 = (uint *)(param_2 + 2);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar9 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar9 = puStack_40;
      }
      uVar5 = *puVar9;
      uStack_60 = iVar8;
      iVar6 = iVar8;
      while (uVar5 == 0) {
        uStack_60 = uStack_60 + 0x20;
        local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
        local_78 = CONCAT44(local_78._4_4_,iVar6 + 1);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1425d9d3d;
        uVar5 = puVar9[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_78 = CONCAT44(uVar5,(int)local_78);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_1425d9d3d:
        local_68._4_4_ = iVar3;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_68._4_4_;
    iStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    uStack_48 = local_78;
    uStack_70 = local_78;
    local_58 = uStack_60;
    iStack_54 = iStack_5c;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    bVar4 = local_68._4_4_ < iVar3;
    local_50 = param_2;
    local_68 = puStack_40;
    if (bVar4) {
      do {
        TSet<TTuple<FMovieSceneSequenceID,unsigned_int>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<FMovieSceneSequenceID,unsigned_int>_const_&>
                  (param_1,local_res8,(longlong)iStack_5c * 0x10 + *param_2,0);
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  plVar1 = param_2 + 10;
  plVar2 = param_1 + 10;
  if (plVar2 != plVar1) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (plVar2,(int)param_2[0xb] - *(int *)((longlong)param_2 + 0x84));
    iVar3 = (int)param_2[0xf];
    puStack_40 = (uint *)(param_2 + 0xc);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar9 = (uint *)param_2[0xe];
      if ((uint *)param_2[0xe] == (uint *)0x0) {
        puVar9 = puStack_40;
      }
      uVar5 = *puVar9;
      uStack_60 = iVar8;
      iVar6 = iVar8;
      while (uVar5 == 0) {
        uStack_60 = uStack_60 + 0x20;
        local_78._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
        local_78 = CONCAT44(local_78._4_4_,iVar6 + 1);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1425d9e7d;
        uVar5 = puVar9[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_78 = CONCAT44(uVar5,(int)local_78);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_1425d9e7d:
        local_68._4_4_ = iVar3;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_68._4_4_;
    iStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    uStack_48 = local_78;
    uStack_70 = local_78;
    local_58 = uStack_60;
    iStack_54 = iStack_5c;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    bVar4 = local_68._4_4_ < iVar3;
    local_50 = plVar1;
    local_68 = puStack_40;
    if (bVar4) {
      do {
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (plVar2,local_res8,(longlong)iStack_5c * 0x10 + *plVar1,0);
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  plVar1 = param_2 + 0x14;
  plVar2 = param_1 + 0x14;
  if (plVar2 != plVar1) {
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Empty(plVar2,(int)param_2[0x15] - *(int *)((longlong)param_2 + 0xd4));
    iVar3 = (int)param_2[0x19];
    puStack_40 = (uint *)(param_2 + 0x16);
    local_78._0_4_ = 0;
    local_78._4_4_ = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar9 = (uint *)param_2[0x18];
      if ((uint *)param_2[0x18] == (uint *)0x0) {
        puVar9 = puStack_40;
      }
      uVar5 = *puVar9;
      uStack_60 = iVar8;
      local_78._0_4_ = iVar8;
      while (uVar5 == 0) {
        lVar7 = (longlong)(int)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar8 = (int)local_78 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
        local_78._0_4_ = iVar8;
        if (bVar4) goto LAB_1425d9fb9;
        uVar5 = puVar9[lVar7 + 1];
      }
      local_78._4_4_ = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (local_78._4_4_ != 0) {
        for (; local_78._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (local_78._4_4_ == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_1425d9fb9:
        local_68._4_4_ = iVar3;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_68._4_4_;
    iStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    uStack_48._0_4_ = (int)local_78;
    uStack_48._4_4_ = local_78._4_4_;
    uStack_70._0_4_ = (int)local_78;
    uStack_70._4_4_ = local_78._4_4_;
    local_58 = uStack_60;
    iStack_54 = iStack_5c;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    bVar4 = local_68._4_4_ < iVar3;
    local_50 = plVar1;
    local_68 = puStack_40;
    if (bVar4) {
      do {
        TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned___int64,bool>_const_&>
                  (plVar2,local_res8,*plVar1 + (longlong)iStack_5c * 0x18,0);
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  return param_1;
}



// FUNCTION 1425da060 FUN_1425da060 body=475 status=ok
// SIG undefined FUN_1425da060(void)

longlong * FUN_1425da060(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong local_50 [4];
  undefined8 local_30;
  longlong *plStack_28;
  
  if (((*(byte *)(param_1 + 5) & 0x40) == 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0)) {
    FUN_1425ec730(param_2,param_1,0,local_res8);
  }
  else {
    iVar7 = 0;
    if (((longlong *)param_2[1] != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*(longlong *)param_2[1] + 0x20))(), cVar6 != '\0')) {
      iVar7 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
    }
    plVar4 = (longlong *)param_1[1];
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      local_res18[0] = iVar7;
      (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    bVar3 = *(byte *)(param_1 + 5);
    if (local_res18[0] < 1) {
      if ((bVar3 & 1) != 0) {
        local_30 = 0;
        plStack_28 = (longlong *)0x0;
        (**(code **)(*param_2 + 8))(param_2,&local_30);
        plVar4 = plStack_28;
        if (plStack_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_28 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_28)(plStack_28);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
    }
    else if ((bVar3 & 2) == 0) {
      if ((bVar3 & 1) != 0) {
        local_res20 = 0;
        (**(code **)(*param_1 + 0x40))(param_1,&local_res20);
        local_50[0] = 0;
        local_50[1] = 0;
        FUN_14158ce90(param_1,local_50);
        FUN_1425f6000(param_2,local_res20,local_50);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      if (((longlong *)param_2[1] == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*(longlong *)param_2[1] + 0x20))(), cVar6 == '\0')) {
        local_68 = 0;
        puVar8 = &local_68;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],local_58);
      }
      local_60 = *puVar8;
      (**(code **)(*param_1 + 0x40))(param_1,&local_60);
      (**(code **)(*(longlong *)param_2[1] + 0x28))((longlong *)param_2[1],local_50 + 2);
      FUN_14158ce90(param_1,local_50 + 2);
      if (local_50[2] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_1;
}



// FUNCTION 1425da240 FUN_1425da240 body=222 status=ok
// SIG undefined FUN_1425da240(void)

longlong * FUN_1425da240(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  char local_res8 [8];
  
  local_res8[0] = *param_2 != '\0';
  plVar1 = (longlong *)param_1[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    cVar3 = *param_2;
  }
  else {
    cVar3 = local_res8[0] == '\x01';
    *param_2 = cVar3;
  }
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,param_2 + 4);
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 8,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 8) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_141726eb0(param_1,param_2 + 0x10);
  }
  return param_1;
}



// FUNCTION 1425da320 FUN_1425da320 body=241 status=ok
// SIG undefined FUN_1425da320(void)

void FUN_1425da320(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  uVar9 = 0;
  cVar6 = FWeakObjectPtr::IsValid();
  uVar8 = uVar9;
  if (cVar6 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1);
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar6 != '\0') {
    uVar9 = FWeakObjectPtr::Get(param_1 + 8);
  }
  lVar5 = DAT_146b17150;
  bVar4 = false;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  plVar12 = (longlong *)(DAT_146b17150 + 0x9e8);
  *(int *)(DAT_146b17150 + 0x9fc) = *(int *)(DAT_146b17150 + 0x9fc) + 1;
  iVar7 = *(int *)(lVar5 + 0x9fc);
  iVar10 = *(int *)(lVar5 + 0x9f0) + -1;
  lVar13 = (longlong)iVar10;
  if (-1 < iVar10) {
    lVar11 = lVar13 << 4;
    bVar4 = false;
    do {
      lVar2 = *plVar12;
      if ((*(int *)(lVar11 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_1425da3d0:
        bVar4 = true;
      }
      else {
        cVar6 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar8,uVar9,uVar1,param_1 + 0x18);
        if (cVar6 == '\0') goto LAB_1425da3d0;
      }
      lVar11 = lVar11 + -0x10;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
    iVar7 = *(int *)(lVar5 + 0x9fc);
  }
  *(int *)(lVar5 + 0x9fc) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,0);
  }
  return;
}



// FUNCTION 1425da420 FUN_1425da420 body=72 status=ok
// SIG undefined FUN_1425da420(void)

undefined8 * FUN_1425da420(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425da470 FUN_1425da470 body=97 status=ok
// SIG undefined FUN_1425da470(void)

undefined8 * FUN_1425da470(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145129e18;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1425da4e0 FUN_1425da4e0 body=97 status=ok
// SIG undefined FUN_1425da4e0(void)

undefined8 * FUN_1425da4e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145129e08;
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



// FUNCTION 1425da550 FUN_1425da550 body=97 status=ok
// SIG undefined FUN_1425da550(void)

undefined8 * FUN_1425da550(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145129e28;
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



// FUNCTION 1425da5c0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FFXSystem::UpdateVectorField'::`9'::FUpdateVectorFieldCommandName,<lambda_ff3d19f318be38fba61fdb36b84e7bbb>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145129e38;
  if (param_1[0x13] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x13] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1425da630 FUN_1425da630 body=124 status=ok
// SIG undefined FUN_1425da630(void)

longlong FUN_1425da630(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 1425da6b0 FUN_1425da6b0 body=73 status=ok
// SIG undefined FUN_1425da6b0(void)

longlong FUN_1425da6b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 1425da700 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicEmitterDataBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1425da740 FUN_1425da740 body=163 status=ok
// SIG undefined FUN_1425da740(void)

undefined8 * FUN_1425da740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145129ef0;
  FFindPolygonsAlgorithm::~FFindPolygonsAlgorithm(param_1 + 0x30);
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 7);
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 1425da7f0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UContentWidget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1425da840 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FFXSystem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145129db0;
  FUN_142621d40();
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 8);
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 1);
  *param_1 = &PTR__purecall_145129d58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1425da8b0 FUN_1425da8b0 body=43 status=ok
// SIG undefined FUN_1425da8b0(void)

undefined8 * FUN_1425da8b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145129d58;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1425da8e0 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FOpusAudioInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xd];
  *param_1 = &PTR__scalar_deleting_destructor__145128d78;
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(*puVar1);
    FMemory::operator_delete(puVar1,0x10);
    param_1[0xd] = 0;
  }
  *param_1 = &PTR__scalar_deleting_destructor__14502de40;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_145010830;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1425da970 FUN_1425da970 body=177 status=ok
// SIG undefined FUN_1425da970(void)

longlong FUN_1425da970(longlong param_1,ulonglong param_2)

{
  TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FDeferredDecalProxy_*,FDefaultSparseArrayAllocator>(param_1 + 0x408);
  FBoneContainer::~FBoneContainer(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  FFindPolygonsAlgorithm::~FFindPolygonsAlgorithm(param_1 + 0x268);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  FUN_14261a910(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 1425daa30 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
StatelessConnectHandlerComponent::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  puVar3 = param_1 + 10;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_144fed5c0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1425daab0 FUN_1425daab0 body=217 status=ok
// SIG undefined FUN_1425daab0(void)

longlong FUN_1425daab0(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x818);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x810);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x808);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x800);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7f8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7f0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7e8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7e0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2000);
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x820);
  }
  return param_1;
}



// FUNCTION 1425dab90 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UObjectLibrary::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x78);
  FUN_1404be960(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x48) != 0) {
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



// FUNCTION 1425dac10 FUN_1425dac10 body=52 status=ok
// SIG undefined FUN_1425dac10(void)

undefined8 FUN_1425dac10(undefined8 param_1,ulonglong param_2)

{
  FUN_1425d9590();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 1425dac50 FUN_1425dac50 body=104 status=ok
// SIG undefined FUN_1425dac50(void)

longlong FUN_1425dac50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1425dacc0 FUN_1425dacc0 body=159 status=ok
// SIG undefined FUN_1425dacc0(void)

longlong FUN_1425dacc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1425dad60 FUN_1425dad60 body=104 status=ok
// SIG undefined FUN_1425dad60(void)

longlong FUN_1425dad60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1425dadd0 FUN_1425dadd0 body=101 status=ok
// SIG undefined FUN_1425dadd0(void)

longlong FUN_1425dadd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1425dae40 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAcceleration::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1425dae90 FUN_1425dae90 body=70 status=ok
// SIG undefined FUN_1425dae90(void)

longlong FUN_1425dae90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1425daee0 FUN_1425daee0 body=121 status=ok
// SIG undefined FUN_1425daee0(void)

longlong FUN_1425daee0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1425daf60 FUN_1425daf60 body=138 status=ok
// SIG undefined FUN_1425daf60(void)

longlong FUN_1425daf60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1425daff0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAccelerationDrag::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1425db040 FUN_1425db040 body=41 status=ok
// SIG undefined FUN_1425db040(void)

void FUN_1425db040(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_1425fcab0(*(longlong *)(param_1 + 0x458),0);
  }
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) | 4;
  return;
}



// FUNCTION 1425db070 FUN_1425db070 body=515 status=ok
// SIG undefined FUN_1425db070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425db070(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((((*(byte *)(param_1 + 0x94) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x4b4) & 1) != 0))
     && ((*(byte *)(param_2 + 0x91) & 0x40) != 0)) {
    (**(code **)(*param_1 + 0x758))(param_1,param_2);
  }
  local_b8[0] = param_1[0x98];
  uVar1 = AActor::GetWorldTimerManager(param_1);
  lVar2 = FTimerManager::FindTimer(uVar1,local_b8,0);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 1) == '\x02')) {
    lVar2 = param_1[0x96];
    uVar1 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)&LAB_1425da414;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 1;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0x98,&local_a8,(int)lVar2);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1425db280 FUN_1425db280 body=833 status=ok
// SIG undefined FUN_1425db280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425db280(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    local_98 = param_1;
    local_a0 = FUN_1428dfc70();
    local_90[0] = 5;
    local_38 = '\0';
    local_a8 = param_2;
    FUN_14044bc80(&local_88,&local_a8,&local_a0);
    FUN_14045a130(local_90);
    if (local_6c == '\0') {
LAB_1425db314:
      lVar15 = local_60;
      if (local_60 != 0) {
        iVar16 = *(int *)(local_60 + 0xc);
        if (iVar16 < (int)DAT_1469e91c4) {
          uVar12 = iVar16 >> 0x1f & 0xffff;
          uVar7 = iVar16 + uVar12;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
        }
        else {
          lVar8 = 0;
        }
        if (((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) &&
           (cVar6 = FUN_14252c130(local_60), cVar6 != '\0')) {
          FUN_1425e3cc0(param_1,lVar15,param_3,0);
        }
      }
      local_a8 = local_88;
      iVar16 = local_70 + 1;
      if (iVar16 < local_50 + local_78) {
        lVar15 = (longlong)iVar16 * 8;
        iVar14 = local_50;
        iVar13 = local_78;
        do {
          if (iVar16 < iVar13) {
            lVar8 = *(longlong *)(local_80 + lVar15);
          }
          else {
            lVar8 = *(longlong *)(local_58 + (longlong)(iVar16 - iVar13) * 8);
          }
          local_68 = local_68 + 1;
          if ((lVar8 != 0) &&
             (lVar9 = AActor::GetLevel(lVar8), iVar14 = local_50, iVar13 = local_78, lVar9 != 0)) {
            if ((local_90[0] & 1) != 0) {
              iVar1 = *(int *)(lVar8 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar12 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar12;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_1425db51f;
            }
            if (((local_90[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar8), iVar14 = local_50,
               iVar13 = local_78, cVar6 != '\0')) {
              if ((local_90[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar2 == piVar10)) {
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
                iVar14 = local_50;
                iVar13 = local_78;
                if ((!bVar5) || (!bVar3)) goto LAB_1425db51f;
              }
              lVar11 = ULevel::GetWorld(lVar9);
              lVar9 = local_a8;
              iVar14 = local_50;
              iVar13 = local_78;
              if (lVar11 == local_a8) {
                lVar11 = AActor::GetLevel(lVar8);
                if (lVar11 == *(longlong *)(lVar9 + 0x30)) goto LAB_1425db5aa;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar14 = local_50;
                iVar13 = local_78;
                if (!bVar5) goto LAB_1425db5aa;
              }
            }
          }
LAB_1425db51f:
          iVar16 = iVar16 + 1;
          lVar15 = lVar15 + 8;
          if (iVar14 + iVar13 <= iVar16) break;
        } while( true );
      }
      local_60 = 0;
      local_6c = '\x01';
    }
LAB_1425db55f:
    if (local_38 != '\0') {
      local_38 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1425db5aa:
  param_1 = local_98;
  local_70 = iVar16;
  local_60 = lVar8;
  if (local_6c != '\0') goto LAB_1425db55f;
  goto LAB_1425db314;
}



// FUNCTION 1425db5d0 FUN_1425db5d0 body=250 status=ok
// SIG undefined FUN_1425db5d0(void)

void FUN_1425db5d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x310);
  piVar2 = (int *)(lVar4 + 0x2a0);
  *piVar2 = *piVar2 + 1;
  *(undefined4 *)(*param_3 + 0x10) = *(undefined4 *)(lVar4 + 0x2a0);
  local_38 = *param_3;
  local_30 = local_38 + 0x10;
  FUN_1416874d0(*(longlong *)(param_1 + 0x310) + 0x200,local_res8,&local_38,0);
  local_20 = *param_3;
  local_28 = local_20 + 0x10;
  FUN_14159e4e0(*(longlong *)(param_1 + 0x310) + 0x250,local_res18,&local_28,0);
  local_18 = *param_3;
  local_10 = param_3;
  FUN_1425d76f0(*(longlong *)(param_1 + 0x310) + 0x1b0,local_res20,&local_18,0);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 1425db6d0 FUN_1425db6d0 body=421 status=ok
// SIG undefined FUN_1425db6d0(void)

undefined8 FUN_1425db6d0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    if ((char)param_1[6] == '\0') {
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return 0;
      }
    }
    else {
      lVar6 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return 0;
      }
      lVar6 = param_2;
      while (lVar6 != param_1[5]) {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        if (lVar6 == 0) {
          return 0;
        }
      }
    }
  }
  if ((char)param_1[0xb] == '\0') {
    plVar7 = (longlong *)param_1[7];
    iVar3 = (int)param_1[8];
    plVar2 = plVar7 + iVar3;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        return 0;
      }
    }
    *(int *)(param_1 + 8) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar3);
    }
    *(longlong *)(param_1[7] + (longlong)iVar3 * 8) = param_2;
  }
  else {
    lVar8 = param_1[9];
    lVar6 = lVar8 + (longlong)(int)param_1[10] * 8;
    for (; lVar8 != lVar6; lVar8 = lVar8 + 8) {
      cVar5 = FUN_14058c1e0(lVar8,param_2);
      if (cVar5 != '\0') {
        return 0;
      }
    }
    FWeakObjectPtr::operator=(&local_res10,param_2);
    iVar3 = (int)param_1[10];
    *(int *)(param_1 + 10) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar3);
    }
    puVar1 = (undefined4 *)(param_1[9] + (longlong)iVar3 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  if (iVar3 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0xf,param_2);
  return 1;
}



// FUNCTION 1425db880 FUN_1425db880 body=1505 status=ok
// SIG undefined FUN_1425db880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425db880(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  char cVar13;
  DWORD DVar14;
  longlong *plVar15;
  DWORD *pDVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_120;
  longlong local_f8;
  longlong *local_f0;
  uint local_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float local_d8;
  uint uStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float local_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  uint local_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float local_98;
  uint uStack_94;
  float fStack_90;
  uint uStack_8c;
  float local_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && ((DAT_1464c9c6c != '\0' && (*(longlong *)(param_2 + 0x6f0) != 0))))
      )))) {
    plVar15 = (longlong *)operator_new(0x110);
    plVar17 = (longlong *)0x0;
    plVar21 = plVar17;
    if (plVar15 != (longlong *)0x0) {
      *plVar15 = 0;
      lVar20 = _DAT_1464aa7d8;
      plVar15[6] = _DAT_1464aa7d0;
      plVar15[7] = lVar20;
      lVar20 = _DAT_1464aa7e8;
      plVar15[8] = _DAT_1464aa7e0;
      plVar15[9] = lVar20;
      lVar20 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
      plVar15[10] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
      plVar15[0xb] = lVar20;
      lVar20 = lRam00000001464aa808;
      plVar15[0xc] = _DAT_1464aa800;
      plVar15[0xd] = lVar20;
      lVar20 = _DAT_1464aa7d8;
      plVar15[0xe] = _DAT_1464aa7d0;
      plVar15[0xf] = lVar20;
      lVar20 = _DAT_1464aa7e8;
      plVar15[0x10] = _DAT_1464aa7e0;
      plVar15[0x11] = lVar20;
      lVar20 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
      plVar15[0x12] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
      plVar15[0x13] = lVar20;
      lVar20 = lRam00000001464aa808;
      plVar15[0x14] = _DAT_1464aa800;
      plVar15[0x15] = lVar20;
      lVar20 = _DAT_1464aa7d8;
      plVar15[0x16] = _DAT_1464aa7d0;
      plVar15[0x17] = lVar20;
      lVar20 = _DAT_1464aa7e8;
      plVar15[0x18] = _DAT_1464aa7e0;
      plVar15[0x19] = lVar20;
      uVar11 = uRam00000001464aa7fc;
      uVar10 = DAT_1464aa7f8;
      uVar9 = DAT_1464aa7f4;
      *(undefined4 *)(plVar15 + 0x1a) = DAT_1464aa7f0;
      *(undefined4 *)((longlong)plVar15 + 0xd4) = uVar9;
      *(undefined4 *)(plVar15 + 0x1b) = uVar10;
      *(undefined4 *)((longlong)plVar15 + 0xdc) = uVar11;
      lVar12 = lRam00000001464aa808;
      lVar20 = _DAT_1464aa800;
      *(uint *)((longlong)plVar15 + 0xfc) = *(uint *)((longlong)plVar15 + 0xfc) & 0xfffffff0;
      plVar15[0x1c] = lVar20;
      plVar15[0x1d] = lVar12;
      plVar15[0x1e] = 0;
      *(undefined4 *)(plVar15 + 0x1f) = 0xffffffff;
      *(undefined1 *)(plVar15 + 0x20) = 0;
      plVar21 = plVar15;
    }
    (**(code **)(**(longlong **)(param_2 + 0x6f0) + 0x278))
              (*(longlong **)(param_2 + 0x6f0),plVar21,0);
    *(longlong **)(param_2 + 0x710) = plVar21;
    fVar32 = *(float *)(param_2 + 0x1d0);
    fVar3 = *(float *)(param_2 + 0x1e4);
    fVar4 = *(float *)(param_2 + 0x1d8);
    fVar5 = *(float *)(param_2 + 0x1dc);
    fVar6 = *(float *)(param_2 + 0x1d4);
    fVar7 = *(float *)(param_2 + 0x1e0);
    local_120 = CONCAT31(local_120._1_3_,1);
    *(float *)(plVar21 + 1) = fVar32 - fVar5;
    *(float *)((longlong)plVar21 + 0xc) = fVar6 - fVar7;
    *(float *)(plVar21 + 2) = fVar4 - fVar3;
    *(float *)((longlong)plVar21 + 0x14) = fVar32 + fVar5;
    plVar21[3] = CONCAT44(fVar4 + fVar3,fVar6 + fVar7);
    *(undefined4 *)(plVar21 + 4) = local_120;
    *(undefined4 *)((longlong)plVar21 + 0xf4) = *(undefined4 *)(param_2 + 0x6f8);
    *(undefined4 *)(plVar21 + 0x1e) = *(undefined4 *)(param_2 + 0x6fc);
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar13 = FUN_1415ad720(&DAT_1468e2448), cVar13 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar14 = GetCurrentThreadId(), DVar14 == DAT_1468c21c0)))) {
      fVar32 = *(float *)(param_2 + 0x210);
      fVar3 = *(float *)(param_2 + 0x214);
      fVar4 = *(float *)(param_2 + 0x218);
      fVar5 = *(float *)(param_2 + 0x21c);
      fVar22 = fVar3 + fVar3;
      fVar23 = fVar4 + fVar4;
      fVar29 = (fVar32 + fVar32) * fVar32;
      fVar28 = fVar5 * (fVar32 + fVar32);
      fVar6 = *(float *)(param_2 + 0x230);
      fVar7 = *(float *)(param_2 + 0x234);
      fVar8 = *(float *)(param_2 + 0x238);
      fStack_e4 = (fVar5 * fVar23 + fVar32 * fVar22) * fVar6;
      fStack_d0 = (fVar28 + fVar3 * fVar23) * fVar7;
      local_c8 = (fVar5 * fVar22 + fVar32 * fVar23) * fVar8;
      local_d8 = fVar7 * (fVar32 * fVar22 - fVar5 * fVar23);
      fStack_c4 = fVar8 * (fVar3 * fVar23 - fVar28);
      fStack_e0 = fVar6 * (fVar32 * fVar23 - fVar5 * fVar22);
      local_e8 = (uint)((_DAT_146b047f0 - (fVar23 * fVar4 + fVar22 * fVar3)) * fVar6) &
                 _DAT_146b04800;
      uStack_d4 = (uint)((fRam0000000146b047f4 - (fVar23 * fVar4 + fVar29)) * fVar7) &
                  uRam0000000146b04804;
      uStack_c0 = (uint)((fRam0000000146b047f8 - (fVar22 * fVar3 + fVar29)) * fVar8) &
                  uRam0000000146b04808;
      uStack_dc = (uint)((fRam0000000146b047fc - (fVar29 + fVar29)) * *(float *)(param_2 + 0x23c)) &
                  uRam0000000146b0480c;
      local_b8 = *(undefined4 *)(param_2 + 0x220);
      uStack_b4 = *(undefined4 *)(param_2 + 0x224);
      uStack_b0 = *(undefined4 *)(param_2 + 0x228);
      fStack_ac = fRam0000000146b047fc;
      local_f8 = param_1;
      local_f0 = plVar21;
      uStack_cc = uStack_dc;
      uStack_bc = uStack_dc;
      FUN_1425e1620(&local_f8,2,local_res18);
    }
    else {
      fVar22 = fRam0000000146b047fc;
      fVar32 = *(float *)(param_2 + 0x210);
      fVar3 = *(float *)(param_2 + 0x214);
      fVar4 = *(float *)(param_2 + 0x218);
      fVar5 = *(float *)(param_2 + 0x21c);
      fVar23 = fVar3 + fVar3;
      fVar28 = fVar4 + fVar4;
      uVar9 = *(undefined4 *)(param_2 + 0x220);
      uVar10 = *(undefined4 *)(param_2 + 0x224);
      uVar11 = *(undefined4 *)(param_2 + 0x228);
      fVar30 = fVar32 * (fVar32 + fVar32);
      fVar29 = fVar5 * (fVar32 + fVar32);
      fVar6 = *(float *)(param_2 + 0x230);
      fVar7 = *(float *)(param_2 + 0x234);
      fVar8 = *(float *)(param_2 + 0x238);
      fVar33 = (fVar5 * fVar28 + fVar32 * fVar23) * fVar6;
      fVar34 = (fVar29 + fVar3 * fVar28) * fVar7;
      fVar35 = (fVar5 * fVar23 + fVar32 * fVar28) * fVar8;
      fVar31 = fVar7 * (fVar32 * fVar23 - fVar5 * fVar28);
      fVar29 = fVar8 * (fVar3 * fVar28 - fVar29);
      fVar32 = fVar6 * (fVar32 * fVar28 - fVar5 * fVar23);
      fStack_6c = fRam0000000146b047fc;
      uVar24 = (uint)((_DAT_146b047f0 - (fVar4 * fVar28 + fVar3 * fVar23)) * fVar6) & _DAT_146b04800
      ;
      uVar25 = (uint)((fRam0000000146b047f4 - (fVar4 * fVar28 + fVar30)) * fVar7) &
               uRam0000000146b04804;
      uVar26 = (uint)((fRam0000000146b047f8 - (fVar3 * fVar23 + fVar30)) * fVar8) &
               uRam0000000146b04808;
      uVar27 = (uint)((fRam0000000146b047fc - (fVar30 + fVar30)) * *(float *)(param_2 + 0x23c)) &
               uRam0000000146b0480c;
      local_a8 = uVar24;
      fStack_a4 = fVar33;
      fStack_a0 = fVar32;
      uStack_9c = uVar27;
      local_98 = fVar31;
      uStack_94 = uVar25;
      fStack_90 = fVar34;
      uStack_8c = uVar27;
      local_88 = fVar35;
      fStack_84 = fVar29;
      uStack_80 = uVar26;
      uStack_7c = uVar27;
      local_78 = uVar9;
      uStack_74 = uVar10;
      uStack_70 = uVar11;
      pDVar16 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar15 = TlsGetValue(*pDVar16);
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)operator_new(0x18);
        if (plVar15 != (longlong *)0x0) {
          *plVar15 = 0;
          plVar15[1] = 0;
          *(undefined4 *)(plVar15 + 2) = 0;
          plVar17 = plVar15;
        }
        TlsSetValue(*pDVar16,plVar17);
        plVar15 = plVar17;
      }
      plVar17 = (longlong *)plVar15[1];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)*plVar15;
        if (plVar17 == (longlong *)0x0) {
          plVar17 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar16 + 2);
          plVar15[1] = (longlong)plVar17;
          if (plVar17 == (longlong *)0x0) {
            puVar18 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar15[1] = (longlong)puVar18;
            lVar20 = 0x1f;
            do {
              puVar2 = puVar18 + 0x20;
              *puVar18 = puVar2;
              lVar20 = lVar20 + -1;
              puVar18 = puVar2;
            } while (lVar20 != 0);
            *puVar2 = 0;
            plVar17 = (longlong *)plVar15[1];
          }
          iVar19 = 0x20;
          *(undefined4 *)(plVar15 + 2) = 0x20;
        }
        else {
          iVar19 = 0x20;
          plVar15[1] = (longlong)plVar17;
          *(undefined4 *)(plVar15 + 2) = 0x20;
          *plVar15 = 0;
        }
      }
      else {
        iVar19 = (int)plVar15[2];
      }
      plVar15[1] = *plVar17;
      *(int *)(plVar15 + 2) = iVar19 + -1;
      *plVar17 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar17 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
      *plVar17 = (longlong)&PTR_FUN_145129e18;
      *(undefined1 *)(plVar17 + 0xc) = 0;
      plVar17[0xd] = 0;
      *(uint *)(plVar17 + 4) = uVar24;
      *(float *)((longlong)plVar17 + 0x24) = fVar33;
      *(float *)(plVar17 + 5) = fVar32;
      *(uint *)((longlong)plVar17 + 0x2c) = uVar27;
      plVar17[2] = param_1;
      *(float *)(plVar17 + 6) = fVar31;
      *(uint *)((longlong)plVar17 + 0x34) = uVar25;
      *(float *)(plVar17 + 7) = fVar34;
      *(uint *)((longlong)plVar17 + 0x3c) = uVar27;
      plVar17[3] = (longlong)plVar21;
      *(float *)(plVar17 + 8) = fVar35;
      *(float *)((longlong)plVar17 + 0x44) = fVar29;
      *(uint *)(plVar17 + 9) = uVar26;
      *(uint *)((longlong)plVar17 + 0x4c) = uVar27;
      *(undefined4 *)(plVar17 + 10) = uVar9;
      *(undefined4 *)((longlong)plVar17 + 0x54) = uVar10;
      *(undefined4 *)(plVar17 + 0xb) = uVar11;
      *(float *)((longlong)plVar17 + 0x5c) = fVar22;
      lVar20 = plVar17[0xd];
      piVar1 = (int *)(lVar20 + 0x48);
      if (lVar20 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res20 = lVar20;
      FUN_141c2c150(plVar17,0,0xff,1);
      if (lVar20 != 0) {
        LOCK();
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425dbe70 AppendExportBunches body=168 status=ok
// SIG undefined AppendExportBunches(void)

void UPackageMapClient::AppendExportBunches(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x308)) {
    ExportNetGUIDHeader();
  }
  iVar1 = *(int *)(param_1 + 0x2f8);
  if (0 < *(int *)(param_1 + 0x2f8)) {
    if (iVar1 != 0) {
      iVar2 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = (int)param_2[1];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x2f0),
                 (longlong)iVar1 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
    }
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(int *)(param_1 + 0x2fc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2f0,0);
    }
  }
  return;
}



// FUNCTION 1425dbf20 FUN_1425dbf20 body=42 status=ok
// SIG undefined FUN_1425dbf20(void)

void FUN_1425dbf20(undefined8 param_1,undefined8 param_2)

{
  FUN_1425dc0d0();
  FUN_1425dbf50(param_1,param_2);
  return;
}



// FUNCTION 1425dbf50 FUN_1425dbf50 body=370 status=ok
// SIG undefined FUN_1425dbf50(void)

void FUN_1425dbf50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = *(undefined4 *)(param_1 + 0x140);
  plVar1 = (longlong *)(param_1 + 0x138);
  (**(code **)(*param_2 + 0x68))(param_2,local_res10);
  puVar7 = (undefined8 *)*plVar1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x140);
  puVar4 = puVar7 + uVar6 * 2;
  if (puVar7 != puVar4) {
    do {
      (**(code **)(*param_2 + 0x78))
                (param_2,(longlong)*(int *)(puVar7 + 1),(longlong)*(int *)((longlong)puVar7 + 0xc));
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        local_res8[0] = *(int *)(puVar7 + 1);
      }
      else {
        local_res8[0] = 0;
      }
      plVar3 = (longlong *)param_2[1];
      if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(int *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if ((((char)*(byte *)(param_2 + 5) < '\0') || (local_res8[0] < 0)) ||
         (((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0 && (0x1000000 < local_res8[0])))) {
        *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
      }
      else {
        *(int *)(puVar7 + 1) = local_res8[0];
        if (((local_res8[0] != 0) || (iVar2 = 0, *(int *)((longlong)puVar7 + 0xc) != 0)) &&
           (iVar2 = local_res8[0], (*(byte *)(param_2 + 5) & 1) != 0)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                    (puVar7,local_res8[0],*(undefined4 *)((longlong)puVar7 + 0xc));
          iVar2 = *(int *)(puVar7 + 1);
        }
        (**(code **)(*param_2 + 0x50))(param_2,*puVar7,(longlong)iVar2);
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar4);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x140);
  }
  plVar3 = (longlong *)*plVar1;
  uVar5 = (uint)uVar6;
  while (uVar5 != 0) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
  }
  return;
}



// FUNCTION 1425dc0d0 FUN_1425dc0d0 body=1650 status=ok
// SIG undefined FUN_1425dc0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425dc0d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  char *pcVar15;
  char cVar16;
  undefined1 auStack_168 [32];
  char local_148;
  uint local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  void *local_130;
  uint local_128;
  undefined4 local_124;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  uint *local_c8;
  longlong *local_c0;
  int iStack_b8;
  uint uStack_b4;
  uint *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_140 = *(int *)(param_1 + 0x338) - *(int *)(param_1 + 0x364);
  (**(code **)(*param_2 + 0x68))(param_2,&local_140);
  if (local_140 != 0) {
    local_c0 = (longlong *)(param_1 + 0x330);
    local_98 = 0;
    puStack_118 = (uint *)(param_1 + 0x340);
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar7 = *(uint *)(param_1 + 0x358);
    local_120 = 0;
    uStack_11c = 1;
    uStack_10c = 0;
    iStack_108 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)(param_1 + 0x350);
      if (*(uint **)(param_1 + 0x350) == (uint *)0x0) {
        puVar14 = puStack_118;
      }
      uVar12 = *puVar14;
      iStack_108 = 0;
      local_120 = 0;
      while (uVar12 == 0) {
        lVar13 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar9 = local_120 + 1;
        bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar9;
        if (bVar6) goto LAB_1425dc234;
        uVar12 = puVar14[lVar13 + 1];
      }
      uStack_11c = -uVar12 & uVar12;
      local_d8 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> local_d8 == 0; local_d8 = local_d8 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_d8;
      }
      uStack_10c = (iStack_108 - iVar9) + 0x1f;
      if ((int)uVar7 < (int)uStack_10c) {
LAB_1425dc234:
        uStack_10c = uVar7;
      }
    }
    local_110 = 0xffffffff;
    uStack_ec = *(uint *)(param_1 + 0x358);
    uStack_f8 = CONCAT44(uStack_11c,local_120);
    uVar7 = *(uint *)(param_1 + 0x358);
    uStack_a8 = 0xffffffff;
    uStack_a4 = uStack_10c;
    uStack_e0 = CONCAT44(uStack_104,iStack_108);
    uStack_f0 = -1 << ((byte)uStack_ec & 0x1f);
    uStack_fc = (undefined4)((ulonglong)local_c0 >> 0x20);
    local_100 = (int)uStack_ec >> 5;
    uStack_e8 = uStack_ec & 0xffffffe0;
    uStack_e4 = uStack_10c;
    iStack_b8 = local_120;
    uStack_b4 = uStack_11c;
    local_c8 = puStack_118;
    local_b0 = puStack_118;
    local_a0 = uStack_e0;
    uVar12 = uStack_ec;
    if (uStack_ec != uVar7) {
      lVar13 = *(longlong *)(param_1 + 0x350);
      if (*(longlong *)(param_1 + 0x350) == 0) {
        lVar13 = param_1 + 0x340;
      }
      uVar12 = *(uint *)(lVar13 + (longlong)local_100 * 4) & uStack_f0;
      while (uVar12 == 0) {
        lVar10 = (longlong)local_100;
        uStack_e8 = uStack_e8 + 0x20;
        iVar9 = local_100 + 1;
        bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_100;
        local_100 = iVar9;
        if (bVar6) goto LAB_1425dc32e;
        uVar12 = *(uint *)(lVar13 + 4 + lVar10 * 4);
        uStack_f0 = 0xffffffff;
      }
      uVar12 = -uVar12 & uVar12;
      local_d4 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> local_d4 == 0; local_d4 = local_d4 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_d4;
      }
      uStack_ec = (uStack_e8 - iVar9) + 0x1f;
      uVar12 = uStack_ec;
      if ((int)uVar7 < (int)uStack_ec) {
LAB_1425dc32e:
        uStack_ec = uVar7;
        uVar12 = uVar7;
      }
    }
LAB_1425dc340:
    if (((uStack_a4 != uVar12) || (local_b0 != local_c8)) ||
       (local_c0 != (longlong *)(param_1 + 0x330))) {
      lVar13 = *(longlong *)(param_1 + 0x310);
      uVar2 = *(undefined8 *)(*local_c0 + (longlong)(int)uStack_a4 * 0x10);
      local_144 = (uint)((ulonglong)uVar2 >> 0x20);
      if (*(int *)(lVar13 + 600) != *(int *)(lVar13 + 0x284)) {
        lVar10 = *(longlong *)(lVar13 + 0x290);
        if (*(longlong *)(lVar13 + 0x290) == 0) {
          lVar10 = lVar13 + 0x288;
        }
        uVar7 = *(uint *)(lVar10 + ((longlong)*(int *)(lVar13 + 0x298) - 1U &
                                   (longlong)(int)local_144) * 4);
        if (uVar7 != 0xffffffff) {
          do {
            puVar14 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(lVar13 + 0x250));
            if (*puVar14 == local_144) {
              if (uVar7 != 0xffffffff) goto LAB_1425dc3f1;
              break;
            }
            uVar7 = puVar14[6];
          } while (uVar7 != 0xffffffff);
        }
      }
      puVar14 = (uint *)0x0;
LAB_1425dc3f1:
      local_130 = (void *)0x0;
      local_128 = puVar14[4];
      lVar13 = (longlong)(int)local_128;
      _Src = *(void **)(puVar14 + 2);
      if (local_128 == 0) {
        local_124 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,local_128,0);
        _guard_xfg_dispatch_icall_nop(local_130,_Src,lVar13 * 2);
      }
      lVar13 = 0;
      lVar10 = *(longlong *)(param_1 + 0x310);
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x1b0,&local_138);
      if (local_138 != -1) {
        lVar13 = *(longlong *)(lVar10 + 0x1b0) + (longlong)local_138 * 0x28;
      }
      lVar10 = *(longlong *)(lVar13 + 0x10);
      plVar3 = *(longlong **)(lVar13 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar13 = *(longlong *)(param_1 + 0x2e8);
      if (*(int *)(lVar13 + 0x58) != *(int *)(lVar13 + 0x84)) {
        lVar8 = *(longlong *)(lVar13 + 0x90);
        if (*(longlong *)(lVar13 + 0x90) == 0) {
          lVar8 = lVar13 + 0x88;
        }
        iVar9 = *(int *)(lVar8 + ((longlong)*(int *)(lVar13 + 0x98) - 1U & (longlong)(int)local_144)
                                 * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar13 + 0x50) + (longlong)iVar9 * 0x10) == local_144) {
              if (iVar9 != -1) goto LAB_1425dc5d9;
              break;
            }
            iVar9 = *(int *)(*(longlong *)(lVar13 + 0x50) + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      if ((int)local_90 != local_64) {
        puVar11 = local_60;
        if (local_58 != (undefined1 *)0x0) {
          puVar11 = local_58;
        }
        for (iVar9 = *(int *)(puVar11 + (longlong)(int)(local_50 - 1U & local_144) * 4); iVar9 != -1
            ; iVar9 = *(int *)(local_98 + 4 + (longlong)iVar9 * 0xc)) {
          if (*(uint *)(local_98 + (longlong)iVar9 * 0xc) == local_144) {
            if (iVar9 != -1) goto LAB_1425dc5d9;
            break;
          }
        }
      }
      local_13c = 1;
      goto LAB_1425dc541;
    }
    FUN_1425e1950((longlong *)(param_1 + 0x330),0);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  return;
LAB_1425dc5d9:
  local_13c = 0;
LAB_1425dc541:
  (**(code **)(*param_2 + 0x68))(param_2,&local_144);
  (**(code **)(*param_2 + 0x68))(param_2,&local_13c);
  if (local_13c != 0) {
    local_134 = *(undefined4 *)(lVar10 + 0x20);
    FUN_14158ce90(param_2,&local_130);
    (**(code **)(*param_2 + 0x68))(param_2,&local_134);
    FUN_14044be50(&local_98,local_d0,&local_144,0);
  }
  plVar4 = (longlong *)param_2[1];
  pcVar15 = (char *)((longlong)(int)uVar2 * 0x40 + *(longlong *)(lVar10 + 0x18));
  local_148 = *pcVar15 != '\0';
  if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2);
  }
  else {
    local_148 = *(char *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    cVar16 = *pcVar15;
  }
  else {
    cVar16 = local_148 == '\x01';
    *pcVar15 = cVar16;
  }
  if (cVar16 != '\0') {
    (**(code **)(*param_2 + 0x68))(param_2,pcVar15 + 4);
    puVar5 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,pcVar15 + 8);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,pcVar15 + 8);
      }
    }
    else {
      *(undefined4 *)(pcVar15 + 8) = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_141726eb0(param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar13 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  if (local_130 != (void *)0x0) {
    FMemory::Free();
  }
  uStack_a8 = uStack_a8 & ~uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
  goto LAB_1425dc340;
}



// FUNCTION 1425dc750 FUN_1425dc750 body=236 status=ok
// SIG undefined FUN_1425dc750(void)

void FUN_1425dc750(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  float local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_40 = *(undefined4 *)(param_2 + 0x28);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  (**(code **)(*param_3 + 0x1b8))(param_3,&local_48,&local_58,local_res8,local_res18,local_res10);
  fVar1 = (float)FUN_1424116d0(param_1 + 0x40,*(undefined4 *)(param_2 + 0xc),0,0);
  *(float *)(param_2 + 0x3c) = local_58 * local_res8[0] * fVar1 + *(float *)(param_2 + 0x3c);
  *(float *)(param_2 + 0x40) = local_54 * local_res8[0] * fVar1 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = fVar1 * local_50 * local_res8[0] + *(float *)(param_2 + 0x44);
  return;
}



// FUNCTION 1425dc840 FUN_1425dc840 body=200 status=ok
// SIG undefined FUN_1425dc840(void)

uint * FUN_1425dc840(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  uint local_res8 [2];
  undefined1 local_18 [16];
  
  if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x368))(), cVar1 == '\0')) {
    *param_2 = 1;
    return param_2;
  }
  FUN_1425e6a00(param_1,local_18,param_4,0);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  local_res8[0] = *(int *)(param_1 + 0xa4) * 2 | 1;
  lVar2 = FUN_14171a990(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0xf0),param_5);
  FUN_1425efb10(param_1,local_res8,param_3,local_18,*(undefined4 *)(lVar2 + 0x18),1,1);
  *param_2 = local_res8[0];
  return param_2;
}



// FUNCTION 1425dc910 FUN_1425dc910 body=309 status=ok
// SIG undefined FUN_1425dc910(void)

uint * FUN_1425dc910(longlong param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  uint *local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined8 local_34;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  byte local_10;
  
  cVar2 = (**(code **)(*param_3 + 0x1c0))();
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  uVar4 = (ulonglong)(cVar2 != '\0');
  local_20 = 0;
  local_10 = local_10 & 0xf0;
  local_18 = 0;
  piVar1 = (int *)(param_1 + 0xa0 + uVar4 * 4);
  *piVar1 = *piVar1 + 1;
  *param_2 = *(int *)(param_1 + 0xa0 + uVar4 * 4) * 2 | (uint)(cVar2 != '\0');
  FWeakObjectPtr::operator=(&local_res8,param_3);
  local_38 = local_res8;
  local_34 = CONCAT44(local_34._4_4_,local_resc);
  puVar3 = (undefined4 *)FUN_1425e6a00(param_1,&local_res8,param_3[4],0);
  local_28 = param_3[3];
  local_34 = CONCAT44(*puVar3,(undefined4)local_34);
  local_20 = FUN_1425e6170(param_1,param_3);
  cVar2 = FNetGUIDCache::CanClientLoadObject(param_1,param_3,param_2);
  local_10 = cVar2 == '\0' | local_10 & 0xfe;
  local_10 = (local_10 * '\x02' ^ local_10) & 2 ^ local_10;
  local_40 = &local_38;
  local_48 = param_2;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
            (param_1,&local_res8,&local_48,0);
  cVar2 = FUN_14044af00(&local_38,0);
  if (cVar2 != '\0') {
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
              (param_1 + 0x50,&local_38,param_2);
  }
  return param_2;
}



// FUNCTION 1425dca50 FUN_1425dca50 body=412 status=ok
// SIG undefined FUN_1425dca50(void)

void FUN_1425dca50(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  
  lVar7 = *param_2;
  if ((int)param_1[0x2c] != *(int *)((longlong)param_1 + 0x18c)) {
    plVar6 = (longlong *)param_1[0x33];
    if ((longlong *)param_1[0x33] == (longlong *)0x0) {
      plVar6 = param_1 + 0x32;
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                    (longlong)(int)param_1[0x34] - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = param_1[0x2b];
      do {
        lVar11 = (longlong)iVar4;
        if (*(longlong *)(lVar2 + lVar11 * 0x18) == lVar7) {
          if ((iVar4 != -1) && (lVar2 = lVar2 + lVar11 * 0x18, lVar2 != 0)) {
            iVar4 = *(int *)(lVar2 + 8);
            goto LAB_1425dcad9;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + lVar11 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = 0;
LAB_1425dcad9:
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (param_1 + 0x2b);
  if (iVar4 != 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x40 + *param_1);
          if (*piVar9 == iVar4) {
            if (iVar5 != -1) goto LAB_1425dcb57;
            break;
          }
          iVar5 = piVar9[0xe];
        } while (iVar5 != -1);
      }
    }
    piVar9 = (int *)0x0;
LAB_1425dcb57:
    piVar10 = piVar9 + 2;
    if (piVar9 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    if (piVar10 != (int *)0x0) {
      bVar1 = *(byte *)(piVar10 + 10);
      *(byte *)(piVar10 + 10) = bVar1 & 0xfb;
      if (param_3 == 0) {
        *(byte *)(piVar10 + 10) = bVar1 & 0xfb | 8;
      }
      cVar3 = FWeakObjectPtr::IsValid(piVar10);
      if (cVar3 != '\0') {
        plVar6 = (longlong *)FWeakObjectPtr::Get(piVar10);
        lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
        if (lVar7 != 0) {
          plVar6 = (longlong *)FWeakObjectPtr::Get(piVar10);
          lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
          plVar6 = *(longlong **)(lVar7 + 0x148);
          if (plVar6 != (longlong *)0x0) {
            uVar8 = FWeakObjectPtr::Get(piVar10);
            (**(code **)(*plVar6 + 0x6e8))(plVar6,uVar8);
          }
        }
      }
    }
  }
  return;
}


